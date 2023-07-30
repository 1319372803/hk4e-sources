// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/sql/net_serv.cc

// Line 112: range 000000000CFA9010-000000000CFA90DD
my_bool __fastcall my_net_init(NET *net, Vio *vio)
{
  unsigned __int8 *v2; // rax
  unsigned __int8 *v3; // rdx

  net->vio = vio;
  my_net_local_init(net);
  v2 = (unsigned __int8 *)my_malloc(net->max_packet + 7, 16);
  net->buff = v2;
  if ( !v2 )
    return 1;
  v3 = &v2[net->max_packet];
  net->error = 0;
  net->return_status = 0LL;
  net->compress_pkt_nr = 0;
  net->pkt_nr = 0;
  net->read_pos = v2;
  net->write_pos = v2;
  net->buff_end = v3;
  net->last_error[0] = 0;
  net->compress = 0;
  net->reading_or_writing = 0;
  net->remain_in_buf = 0LL;
  net->where_b = 0LL;
  net->last_errno = 0;
  net->unused = 0LL;
  if ( vio )
  {
    net->fd = vio_fd(vio);
    vio->fastsend(vio);
  }
  return 0;
};

// Line 150: range 000000000CFA90E0-000000000CFA90F6
void __fastcall net_end(NET *net)
{
  my_free(net->buff);
  net->buff = 0LL;
};

// Line 161: range 000000000CFA9100-000000000CFA918E
my_bool __fastcall net_realloc(NET *net, size_t length)
{
  unsigned __int64 v3; // rbp
  unsigned __int8 *v4; // rax

  if ( net->max_packet_size > length )
  {
    v3 = (length + 4095) & 0xFFFFFFFFFFFFF000LL;
    v4 = (unsigned __int8 *)my_realloc(net->buff, v3 + 8, 16);
    if ( v4 )
    {
      net->max_packet = v3;
      net->write_pos = v4;
      net->buff = v4;
      net->buff_end = &v4[v3];
      return 0;
    }
    else
    {
      net->error = 1;
      net->last_errno = 1041;
      return 1;
    }
  }
  else
  {
    net->error = 1;
    net->last_errno = 1153;
    return 1;
  }
};

// Line 275: range 000000000CFA9440-000000000CFA94BC
void __fastcall net_clear(NET *net, my_bool clear_buffer)
{
  unsigned __int8 *buff; // rax
  struct pollfd vars0; // [rsp+0h] [rbp+0h] BYREF

  if ( clear_buffer )
  {
    while ( 1 )
    {
      vars0.fd = net->vio->sd;
      vars0.events = 3;
      if ( poll(&vars0, 1uLL, 0) <= 0 || (vars0.revents & 3) == 0 )
        break;
      if ( (__int64)net->vio->read(net->vio, net->buff, net->max_packet) <= 0 )
      {
        net->error = 2;
        break;
      }
    }
  }
  buff = net->buff;
  net->compress_pkt_nr = 0;
  net->pkt_nr = 0;
  net->write_pos = buff;
};

// Line 332: range 000000000CFA9790-000000000CFA97C8
my_bool __fastcall net_flush(NET *net)
{
  unsigned __int8 *buff; // rsi
  my_bool result; // al
  unsigned __int8 *write_pos; // rdx

  buff = net->buff;
  result = 0;
  write_pos = net->write_pos;
  if ( buff != write_pos )
  {
    result = net_real_write(net, buff, write_pos - buff) != 0;
    net->write_pos = net->buff;
  }
  if ( net->compress )
    net->pkt_nr = net->compress_pkt_nr;
  return result;
};

// Line 364: range 000000000CFA9900-000000000CFA9A06
my_bool __fastcall my_net_write(NET *net, const uchar *packet, size_t len)
{
  size_t v4; // r12
  unsigned int v5; // eax
  my_bool result; // al
  unsigned int pkt_nr; // eax
  my_bool v8; // dl
  unsigned __int8 buff[4]; // [rsp+0h] [rbp-38h] BYREF

  if ( !net->vio )
    return 0;
  v4 = len;
  if ( len <= 0xFFFFFE )
  {
LABEL_8:
    *(_WORD *)buff = v4;
    buff[2] = BYTE2(v4);
    pkt_nr = net->pkt_nr;
    buff[3] = pkt_nr;
    net->pkt_nr = pkt_nr + 1;
    v8 = net_write_buff(net, buff, 4uLL);
    result = 1;
    if ( !v8 )
      return net_write_buff(net, packet, v4) != 0;
  }
  else
  {
    while ( 1 )
    {
      v5 = net->pkt_nr;
      buff[0] = -1;
      buff[1] = -1;
      buff[2] = -1;
      buff[3] = v5;
      net->pkt_nr = v5 + 1;
      if ( net_write_buff(net, buff, 4uLL) || net_write_buff(net, packet, 0xFFFFFFuLL) )
        return 1;
      v4 -= 0xFFFFFFLL;
      packet += 0xFFFFFF;
      if ( v4 <= 0xFFFFFE )
        goto LABEL_8;
    }
  }
  return result;
};

// Line 439: range 000000000CFA9A10-000000000CFA9B82
my_bool __fastcall net_write_command(
        NET *net,
        uchar command,
        const uchar *header,
        size_t head_len,
        const uchar *packet,
        size_t len)
{
  size_t v6; // r15
  size_t v7; // r14
  size_t v9; // rbp
  ulong v10; // rdx
  ulong i; // r15
  unsigned int pkt_nr; // eax
  ulong v14; // rdx
  unsigned int v15; // eax
  unsigned __int8 buff[5]; // [rsp+10h] [rbp-48h] BYREF

  v6 = len;
  v7 = head_len + len + 1;
  v9 = head_len;
  buff[4] = command;
  if ( v7 > 0xFFFFFE )
  {
    v10 = 5LL;
    for ( i = 16777214 - head_len; ; i = 0xFFFFFFLL )
    {
      pkt_nr = net->pkt_nr;
      buff[0] = -1;
      buff[1] = -1;
      buff[2] = -1;
      buff[3] = pkt_nr;
      net->pkt_nr = pkt_nr + 1;
      if ( net_write_buff(net, buff, v10) || net_write_buff(net, header, v9) || net_write_buff(net, packet, i) )
        break;
      v7 -= 0xFFFFFFLL;
      packet += i;
      if ( v7 <= 0xFFFFFE )
      {
        v6 = v7;
        v14 = 4LL;
        v9 = 0LL;
        goto LABEL_10;
      }
      v9 = 0LL;
      v10 = 4LL;
    }
    return 1;
  }
  v14 = 5LL;
LABEL_10:
  *(_WORD *)buff = v7;
  v15 = net->pkt_nr;
  buff[2] = BYTE2(v7);
  buff[3] = v15;
  net->pkt_nr = v15 + 1;
  if ( net_write_buff(net, buff, v14) || v9 && net_write_buff(net, header, v9) || net_write_buff(net, packet, v6) )
    return 1;
  return net_flush(net) != 0;
};

// Line 511: range 000000000CFA97D0-000000000CFA98FD
my_bool __fastcall net_write_buff(NET *net, const uchar *packet, ulong len)
{
  const uchar *v3; // r12
  unsigned __int64 v5; // rbx
  my_bool compress; // al
  unsigned __int8 *write_pos; // rdi
  size_t v8; // r13

  v3 = packet;
  v5 = len;
  compress = net->compress;
  if ( compress && net->max_packet > 0xFFFFFF )
  {
    write_pos = net->write_pos;
    v8 = net->buff - write_pos + 0xFFFFFF;
  }
  else
  {
    write_pos = net->write_pos;
    v8 = net->buff_end - write_pos;
  }
  if ( v8 >= len )
    goto LABEL_11;
  if ( net->buff != write_pos )
  {
    memcpy(write_pos, packet, v8);
    if ( net_real_write(net, net->buff, v8 + net->write_pos - net->buff) )
      return 1;
    v3 = &packet[v8];
    v5 -= v8;
    net->write_pos = net->buff;
    compress = net->compress;
  }
  if ( compress )
  {
    while ( v5 > 0xFFFFFF )
    {
      if ( net_real_write(net, v3, 0xFFFFFFuLL) )
        return 1;
      v3 += 0xFFFFFF;
      v5 -= 0xFFFFFFLL;
    }
  }
  if ( v5 <= net->max_packet )
  {
    write_pos = net->write_pos;
LABEL_11:
    memcpy(write_pos, v3, v5);
    net->write_pos += v5;
    return 0;
  }
  return net_real_write(net, v3, v5) != 0;
};

// Line 569: range 000000000CFA94C0-000000000CFA9781
int __fastcall net_real_write(NET *net, const uchar *packet, size_t len)
{
  uchar *v3; // r14
  Vio *vio; // rax
  bool v5; // zf
  size_t v6; // rbp
  char *v7; // rax
  char *v8; // rbx
  __int64 v9; // rax
  uchar *v10; // rax
  char v11; // al
  unsigned int compress_pkt_nr; // eax
  uchar *v13; // rbp
  char v14; // r13
  const uchar *v15; // rbx
  unsigned int v16; // r12d
  __int64 v17; // rax
  bool v18; // al
  unsigned int v19; // eax
  my_bool net_blocking; // [rsp+Fh] [rbp-59h]
  size_t length; // [rsp+10h] [rbp-58h]
  size_t lena; // [rsp+18h] [rbp-50h] BYREF
  size_t old_mode[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = (uchar *)packet;
  vio = net->vio;
  lena = len;
  net_blocking = vio->is_blocking(vio);
  if ( net->error == 2 )
  {
    LODWORD(v9) = -1;
    return v9;
  }
  v5 = net->compress == 0;
  net->reading_or_writing = 2;
  v6 = lena;
  if ( !v5 )
  {
    v7 = (char *)my_malloc(lena + 7, 16);
    v8 = v7;
    if ( !v7 )
    {
      net->error = 2;
      net->last_errno = 1041;
      LODWORD(v9) = 1;
      net->reading_or_writing = 0;
      return v9;
    }
    v10 = (uchar *)memcpy(v7 + 7, packet, lena);
    if ( my_compress(v10, &lena, old_mode) )
    {
      old_mode[0] = 0LL;
      v11 = 0;
    }
    else
    {
      v11 = old_mode[0];
    }
    v8[4] = v11;
    v3 = (uchar *)v8;
    *(_WORD *)(v8 + 5) = *(_WORD *)((char *)old_mode + 1);
    *(_WORD *)v8 = lena;
    v8[2] = BYTE2(lena);
    compress_pkt_nr = net->compress_pkt_nr;
    net->compress_pkt_nr = compress_pkt_nr + 1;
    v8[3] = compress_pkt_nr;
    v6 = lena + 7;
    lena += 7LL;
  }
  v13 = &v3[v6];
  v14 = 0;
  v15 = v3;
  if ( v3 == v13 )
    goto LABEL_26;
  v16 = 0;
  while ( 1 )
  {
    v17 = net->vio->write(net->vio, v15, v13 - v15);
    if ( v17 <= 0 )
      break;
    v15 += v17;
LABEL_11:
    if ( v13 == v15 )
      goto LABEL_26;
  }
  length = v17;
  v18 = net->vio->should_retry(net->vio) != 0;
  if ( !v18 && length )
  {
LABEL_15:
    net->error = 2;
    v19 = 1160;
    goto LABEL_16;
  }
  if ( !v14 )
  {
    while ( net->vio->vioblocking(net->vio, 1LL, (my_bool *)old_mode) < 0 )
    {
      if ( !net->vio->should_retry(net->vio) || v16 >= net->retry_count )
      {
        net->error = 2;
        net->last_errno = 1153;
        v14 = 1;
        goto LABEL_26;
      }
      ++v16;
    }
    v14 = 1;
    v16 = 0;
    goto LABEL_11;
  }
  if ( !v18 )
    goto LABEL_15;
  if ( v16 < net->retry_count )
  {
    ++v16;
    goto LABEL_11;
  }
  net->error = 2;
  v19 = 1161;
LABEL_16:
  net->last_errno = v19;
LABEL_26:
  if ( net->compress )
    my_free(v3);
  if ( v14 )
    net->vio->vioblocking(net->vio, net_blocking, (my_bool *)old_mode);
  net->reading_or_writing = 0;
  return v15 != v13;
};

// Line 802: range 000000000CFA9190-000000000CFA9436
ulong __fastcall my_real_read(NET *net, size_t *complen)
{
  my_bool v2; // al
  bool v3; // cf
  unsigned __int8 *buff; // rbp
  ulong v5; // r14
  uchar *v6; // rbp
  unsigned int v7; // r12d
  unsigned int v8; // ebx
  __int64 v9; // rax
  bool v10; // al
  Vio *vio; // rax
  unsigned __int8 *v13; // rdx
  unsigned __int64 where_b; // rax
  unsigned int pkt_nr; // esi
  unsigned int v16; // esi
  bool v17; // zf
  size_t v18; // rdx
  size_t length; // [rsp+8h] [rbp-60h]
  uint i; // [rsp+10h] [rbp-58h]
  thr_alarm_t alarmed; // [rsp+16h] [rbp-52h]
  my_bool net_blocking; // [rsp+17h] [rbp-51h]
  my_bool old_mode[57]; // [rsp+2Fh] [rbp-39h] BYREF

  v2 = net->vio->is_blocking(net->vio);
  v3 = net->compress == 0;
  buff = net->buff;
  *complen = 0LL;
  net_blocking = v2;
  v5 = -1LL;
  net->reading_or_writing = 1;
  i = 1;
  alarmed = 0;
  v6 = &buff[net->where_b];
  v7 = 0;
  v8 = v3 ? 4 : 7;
  while ( 1 )
  {
LABEL_3:
    while ( v8 )
    {
      while ( 1 )
      {
        v9 = net->vio->read(net->vio, v6, v8);
        if ( v9 > 0 )
        {
          v8 -= v9;
          v6 += v9;
          goto LABEL_3;
        }
        length = v9;
        v10 = net->vio->should_retry(net->vio) != 0;
        if ( !v10 && length )
        {
LABEL_7:
          vio = net->vio;
          net->error = 2;
          v5 = -1LL;
          net->last_errno = 1159
                          - (((unsigned __int8 (__fastcall *)(Vio *, uchar *, size_t))vio->was_interrupted)(
                               vio,
                               v6,
                               length) == 0);
          goto end;
        }
        if ( !alarmed )
          break;
        if ( !v10 || net->retry_count <= v7 )
          goto LABEL_7;
        ++v7;
      }
      while ( net->vio->vioblocking(net->vio, 1LL, old_mode) < 0 )
      {
        if ( !net->vio->should_retry(net->vio) || v7 >= net->retry_count )
        {
          net->error = 2;
          net->last_errno = 1155;
          v5 = -1LL;
          net->vio->vioblocking(net->vio, net_blocking, old_mode);
          goto LABEL_10;
        }
        ++v7;
      }
      alarmed = 1;
      v7 = 0;
    }
    if ( i != 1 )
    {
      if ( i == 2 )
        goto end;
      v8 = 0;
      goto LABEL_31;
    }
    v13 = net->buff;
    where_b = net->where_b;
    pkt_nr = net->pkt_nr;
    if ( v13[where_b + 3] != (_BYTE)pkt_nr )
      goto LABEL_32;
    v16 = pkt_nr + 1;
    v17 = net->compress == 0;
    net->pkt_nr = v16;
    net->compress_pkt_nr = v16;
    if ( !v17 )
    {
      *complen = (v13[where_b + 5] << 8) + (v13[where_b + 6] << 16) + (unsigned int)v13[where_b + 4];
      where_b = net->where_b;
    }
    v6 = &v13[where_b];
    v8 = (v13[where_b + 1] << 8) + (v13[where_b + 2] << 16) + v13[where_b];
    v5 = v8;
    if ( !v8 )
      goto end;
    v18 = *complen;
    if ( v8 >= *complen )
      v18 = v8;
    if ( v18 + where_b >= net->max_packet )
      break;
LABEL_31:
    ++i;
  }
  if ( !net_realloc(net, v18 + where_b) )
  {
    v6 = &net->buff[net->where_b];
    goto LABEL_31;
  }
LABEL_32:
  v5 = -1LL;
end:
  if ( alarmed )
    net->vio->vioblocking(net->vio, net_blocking, old_mode);
LABEL_10:
  net->reading_or_writing = 0;
  return v5;
};

// Line 1019: range 000000000CFA9B90-000000000CFA9E26
ulong __fastcall my_net_read(NET *net)
{
  unsigned __int64 remain_in_buf; // rax
  unsigned __int64 v2; // r12
  unsigned __int64 buf_length; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // r15
  unsigned __int8 *buff; // rax
  int v7; // ecx
  size_t v8; // rsi
  size_t v9; // rdx
  ulong result; // rax
  ulong v11; // rdx
  unsigned __int64 where_b; // r13
  unsigned __int8 *v13; // r13
  unsigned __int8 *v14; // rdx
  char *v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rbp
  ulong v18; // rax
  ulong v19; // rbp
  uint read_length; // [rsp+Ch] [rbp-4Ch]
  size_t complen[8]; // [rsp+18h] [rbp-40h] BYREF

  if ( !net->compress )
  {
    v11 = my_real_read(net, complen);
    where_b = net->where_b;
    if ( v11 == 0xFFFFFF )
    {
      v16 = net->where_b;
      v17 = 0LL;
      while ( 1 )
      {
        net->where_b = v16 + 0xFFFFFF;
        v17 += 0xFFFFFFLL;
        v18 = my_real_read(net, complen);
        v11 = v18;
        if ( v18 != 0xFFFFFF )
          break;
        v16 = net->where_b;
      }
      v19 = v18 + v17;
      net->where_b = where_b;
      if ( v18 != -1LL )
        v11 = v19;
    }
    v13 = &net->buff[where_b];
    result = -1LL;
    net->read_pos = v13;
    if ( v11 != -1LL )
    {
      v13[v11] = 0;
      return v11;
    }
    return result;
  }
  remain_in_buf = net->remain_in_buf;
  if ( remain_in_buf )
  {
    buf_length = net->buf_length;
    v2 = buf_length - remain_in_buf;
    net->buff[buf_length - remain_in_buf] = net->save_char;
  }
  else
  {
    v2 = 0LL;
    buf_length = 0LL;
  }
  v4 = v2;
  v5 = 0LL;
  while ( 1 )
  {
    v9 = buf_length - v2;
    if ( buf_length - v2 > 3 )
    {
      buff = net->buff;
      v7 = buff[v2] + (buff[v2 + 1] << 8) + (buff[v2 + 2] << 16);
      if ( !v7 )
      {
        v2 += 4LL;
        goto LABEL_27;
      }
      v8 = (unsigned int)(v7 + 4);
      if ( v9 >= v8 )
        break;
    }
    if ( v4 )
    {
      buf_length -= v4;
      v2 -= v4;
      memmove(net->buff, &net->buff[v4], buf_length);
    }
    net->where_b = buf_length;
    result = my_real_read(net, complen);
    if ( result == -1LL )
      return result;
    if ( my_uncompress(&net->buff[net->where_b], result, complen) )
    {
      net->error = 2;
      net->last_errno = 1157;
      return -1LL;
    }
    buf_length += complen[0];
LABEL_12:
    v4 = 0LL;
  }
  if ( (_DWORD)v5 )
  {
    read_length = buff[v2] + (buff[v2 + 1] << 8) + (buff[v2 + 2] << 16);
    buf_length -= 4LL;
    memmove(&buff[v4 + v2], &buff[v4 + 4 + v2], v9);
    v7 = read_length;
    v2 += read_length;
  }
  else
  {
    v2 += v8;
  }
  if ( v7 == 0xFFFFFF )
  {
    v5 = 4LL;
    if ( v4 )
    {
      buf_length -= v4;
      v2 -= v4;
      memmove(net->buff, &net->buff[v4], buf_length);
    }
    goto LABEL_12;
  }
  buff = net->buff;
  v5 = 0LL;
LABEL_27:
  v14 = &buff[v4 + 4];
  net->buf_length = buf_length;
  net->read_pos = v14;
  net->remain_in_buf = buf_length - v2;
  result = v2 - 4 - v4 - v5;
  v15 = (char *)&v14[result];
  net->save_char = *v15;
  *v15 = 0;
  return result;
};

// Line 1167: range 000000000CFA9E30-000000000CFA9E50
void __fastcall my_net_set_read_timeout(NET *net, uint timeout)
{
  Vio *vio; // rdi

  net->read_timeout = timeout;
  vio = net->vio;
  if ( vio )
    vio->timeout(vio, 0, timeout);
};

// Line 1180: range 000000000CFA9E60-000000000CFA9E80
void __fastcall my_net_set_write_timeout(NET *net, uint timeout)
{
  Vio *vio; // rdi

  net->write_timeout = timeout;
  vio = net->vio;
  if ( vio )
    vio->timeout(vio, 1u, timeout);
};
