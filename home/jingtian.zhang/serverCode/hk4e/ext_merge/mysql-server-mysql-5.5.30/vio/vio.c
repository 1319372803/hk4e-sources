// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/vio/vio.c

// Line 50: range 000000000CFB45D0-000000000CFB45D2
my_bool __fastcall has_no_data(Vio *vio)
{
  return 0;
};

// Line 58: range 000000000CFB4630-000000000CFB48DE
void __fastcall vio_init(Vio *vio, enum_vio_type type, my_socket sd, void *hPipe, uint flags)
{
  Vio *v5; // rbx
  unsigned int v7; // r9d
  __int64 v8; // rcx
  my_socket *v9; // rdi
  char *v10; // rax

  v5 = vio;
  v7 = 480;
  if ( ((unsigned __int8)vio & 1) != 0 )
  {
    vio = (Vio *)((char *)vio + 1);
    LOBYTE(v5->sd) = 0;
    LOBYTE(v7) = -33;
    if ( (((_BYTE)v5 + 1) & 2) == 0 )
      goto LABEL_3;
  }
  else if ( ((unsigned __int8)vio & 2) == 0 )
  {
    goto LABEL_3;
  }
  vio = (Vio *)((char *)vio + 2);
  v7 -= 2;
  HIWORD(vio[-1].has_data) = 0;
LABEL_3:
  if ( ((unsigned __int8)vio & 4) != 0 )
  {
    vio->sd = 0;
    v7 -= 4;
    vio = (Vio *)((char *)vio + 4);
  }
  v8 = v7 >> 3;
  memset(vio, 0, 8 * v8);
  v9 = &vio->sd + 2 * v8;
  if ( (v7 & 4) != 0 )
    *v9++ = 0;
  if ( (v7 & 2) != 0 )
  {
    v9 = (my_socket *)((char *)v9 + 2);
    *((_WORD *)v9 - 1) = 0;
  }
  if ( (v7 & 1) != 0 )
    *(_BYTE *)v9 = 0;
  v5->type = type;
  v5->sd = sd;
  v5->hPipe = hPipe;
  v5->localhost = flags & 1;
  if ( (flags & 2) != 0 && (v10 = (char *)my_malloc(0x4000uLL, 16), (v5->read_buffer = v10) != 0LL) )
  {
    v5->viodelete = vio_delete;
    v5->vioerrno = vio_errno;
    v5->read = vio_read_buff;
    v5->write = vio_write;
    v5->fastsend = vio_fastsend;
    v5->viokeepalive = vio_keepalive;
    v5->should_retry = vio_should_retry;
    v5->was_interrupted = vio_was_interrupted;
    v5->vioclose = vio_close;
    v5->peer_addr = vio_peer_addr;
    v5->vioblocking = vio_blocking;
    v5->is_blocking = vio_is_blocking;
    v5->timeout = vio_timeout;
    v5->poll_read = vio_poll_read;
    v5->is_connected = vio_is_connected;
    v5->has_data = vio_buff_has_data;
  }
  else
  {
    v5->viodelete = vio_delete;
    v5->vioerrno = vio_errno;
    v5->read = vio_read;
    v5->write = vio_write;
    v5->fastsend = vio_fastsend;
    v5->viokeepalive = vio_keepalive;
    v5->should_retry = vio_should_retry;
    v5->was_interrupted = vio_was_interrupted;
    v5->vioclose = vio_close;
    v5->peer_addr = vio_peer_addr;
    v5->vioblocking = vio_blocking;
    v5->is_blocking = vio_is_blocking;
    v5->timeout = vio_timeout;
    v5->poll_read = vio_poll_read;
    v5->is_connected = vio_is_connected;
    v5->has_data = has_no_data;
  }
};

// Line 176: range 000000000CFB48F0-000000000CFB4930
void __fastcall vio_reset(Vio *vio, enum_vio_type type, my_socket sd, void *hPipe, uint flags)
{
  my_free(vio->read_buffer);
  vio_init(vio, type, sd, hPipe, flags);
};

// Line 185: range 000000000CFB4940-000000000CFB49D2
Vio *__fastcall vio_new(my_socket sd, enum_vio_type type, uint flags)
{
  Vio *v4; // rax
  Vio *v5; // rbx
  const char *v6; // rsi

  v4 = (Vio *)my_malloc(0x1E0uLL, 16);
  v5 = v4;
  if ( v4 )
  {
    vio_init(v4, type, sd, 0LL, flags);
    v6 = "socket (%d)";
    if ( v5->type != VIO_TYPE_SOCKET )
      v6 = "TCP/IP (%d)";
    sprintf(v5->desc, v6, (unsigned int)v5->sd);
    fcntl(sd, 4, 0LL);
    v5->fcntl_mode = fcntl(sd, 3);
  }
  return v5;
};

// Line 271: range 000000000CFB45E0-000000000CFB4621
void __fastcall vio_delete(Vio *vio)
{
  if ( vio )
  {
    if ( vio->type )
      ((void (*)(void))vio->vioclose)();
    my_free(vio->read_buffer);
    my_free(vio);
  }
};

// Line 287: range 000000000CFB49E0-000000000CFB4A87
void __cdecl vio_end()
{
  ;
};
