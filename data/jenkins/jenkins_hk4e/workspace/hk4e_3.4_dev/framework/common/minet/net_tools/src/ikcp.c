// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/src/ikcp.c

// Line 152: range 0000000019FCEA47-0000000019FCEA63
void *__fastcall ikcp_malloc(size_t size)
{
  if ( ikcp_malloc_hook )
    return ikcp_malloc_hook(size);
  else
    return malloc(size);
};

// Line 159: range 0000000019FCEA7A-0000000019FCEA96
void __fastcall ikcp_free(void *ptr)
{
  if ( ikcp_free_hook )
    ikcp_free_hook(ptr);
  else
    free(ptr);
};

// Line 176: range 0000000019FCEA65-0000000019FCEA79
IKCPSEG_0 *__fastcall ikcp_segment_new(ikcpcb *kcp, int size)
{
  return (IKCPSEG_0 *)ikcp_malloc(size + 72LL);
};

// Line 182: range 0000000019FCEA98-0000000019FCEAA8
void __fastcall ikcp_segment_delete(ikcpcb *kcp, IKCPSEG_0 *seg)
{
  ikcp_free(seg);
};

// Line 188: range 0000000019FCF0BA-0000000019FCF337
void ikcp_log(ikcpcb *kcp, int mask, const char *fmt, ...)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int128 v11; // xmm5
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  unsigned __int64 v15; // r12
  _DWORD *v16; // rbx
  void *p_logmask; // rdi
  char v18; // al
  __int64 v19; // rax
  char v21[1248]; // [rsp+10h] [rbp-5C8h] BYREF
  char v22; // [rsp+4F0h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+508h] [rbp-D0h]
  __int64 v24; // [rsp+510h] [rbp-C8h]
  __int64 v25; // [rsp+518h] [rbp-C0h]
  __int128 v26; // [rsp+520h] [rbp-B8h]
  __int128 v27; // [rsp+530h] [rbp-A8h]
  __int128 v28; // [rsp+540h] [rbp-98h]
  __int128 v29; // [rsp+550h] [rbp-88h]
  __int128 v30; // [rsp+560h] [rbp-78h]
  __int128 v31; // [rsp+570h] [rbp-68h]
  __int128 v32; // [rsp+580h] [rbp-58h]
  __int128 v33; // [rsp+590h] [rbp-48h]
  char v34; // [rsp+5E0h] [rbp+8h] BYREF

  v26 = v6;
  v27 = v7;
  v28 = v8;
  v29 = v9;
  v30 = v10;
  v31 = v11;
  v32 = v12;
  v33 = v13;
  v23 = v3;
  v24 = v4;
  v25 = v5;
  v15 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_5(1248LL);
    if ( v19 )
      v15 = v19;
  }
  *(_QWORD *)v15 = 1102416563LL;
  *(_QWORD *)(v15 + 8) = "2 32 24 10 argptr:190 96 1024 10 buffer:189";
  *(_QWORD *)(v15 + 16) = ikcp_log;
  v16 = (_DWORD *)(v15 >> 3);
  v16[536862720] = -235802127;
  v16[536862721] = -234881024;
  v16[536862722] = -218959118;
  v16[536862755] = -202116109;
  v16[536862756] = -202116109;
  v16[536862757] = -202116109;
  v16[536862758] = -202116109;
  p_logmask = &kcp->logmask;
  v18 = *(_BYTE *)(((unsigned __int64)&kcp->logmask >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
  {
    __asan_report_load4(p_logmask);
LABEL_15:
    __asan_report_load8(p_logmask);
LABEL_16:
    __asan_report_load8(p_logmask);
    goto LABEL_17;
  }
  if ( (mask & kcp->logmask) == 0 )
    goto LABEL_10;
  p_logmask = &kcp->writelog;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->writelog >> 3) + 0x7FFF8000) )
    goto LABEL_15;
  if ( !kcp->writelog )
    goto LABEL_10;
  *(_DWORD *)(v15 + 32) = 24;
  *(_DWORD *)(v15 + 36) = 48;
  *(_QWORD *)(v15 + 40) = &v34;
  *(_QWORD *)(v15 + 48) = &v22;
  vsprintf((char *)(v15 + 96), fmt, (___va_list_tag *)(v15 + 32));
  p_logmask = &kcp->writelog;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->writelog >> 3) + 0x7FFF8000) )
    goto LABEL_16;
  p_logmask = &kcp->user;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->user >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    __asan_report_load8(p_logmask);
    goto LABEL_18;
  }
  kcp->writelog((const char *)(v15 + 96), kcp, kcp->user);
LABEL_10:
  if ( v21 == (char *)v15 )
  {
    *(_QWORD *)((v15 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v15 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v15 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v15 >> 3) + 0x7FFF8094) = 0LL;
    return;
  }
LABEL_18:
  *(_QWORD *)v15 = 1172321806LL;
  __asan_stack_free_5(v15, 1248LL, v21);
};

// Line 200: range 0000000019FCE0E8-0000000019FCE151
int __fastcall ikcp_canlog(const ikcpcb *kcp, int mask)
{
  char v2; // al
  void (**p_writelog)(const char *, IKCPCB *, void *); // rax

  v2 = *(_BYTE *)(((unsigned __int64)&kcp->logmask >> 3) + 0x7FFF8000);
  if ( v2 && v2 <= 3 )
  {
    p_writelog = (void (**)(const char *, IKCPCB *, void *))__asan_report_load4(&kcp->logmask);
    goto LABEL_8;
  }
  if ( (mask & kcp->logmask) == 0 )
    return 0;
  p_writelog = &kcp->writelog;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->writelog >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(p_writelog);
    return 0;
  }
  return kcp->writelog != 0;
};

// Line 207: range 0000000019FCF339-0000000019FCF490
int __fastcall ikcp_output(ikcpcb *kcp, const void *data, int size)
{
  int (**p_output)(const char *, int, IKCPCB *, void *); // rdi
  void *p_tx_bytes; // rdi
  char v7; // dl

  if ( !kcp )
  {
    __asan_handle_no_return(0LL);
    __assert_fail(off_1B9BED20, (const char *)&seg, 0xD0u, "int ikcp_output(ikcpcb*, const void*, int)");
  }
  p_output = &kcp->output;
  if ( *(_BYTE *)(((unsigned __int64)p_output >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_output);
LABEL_14:
    __asan_handle_no_return(p_output);
    __assert_fail("kcp->output", (const char *)&seg, 0xD1u, "int ikcp_output(ikcpcb*, const void*, int)");
  }
  if ( !kcp->output )
    goto LABEL_14;
  if ( ikcp_canlog(kcp, 1) )
    ikcp_log(kcp, 1, "[RO] %ld bytes", size);
  if ( !size )
    return size;
  p_tx_bytes = &kcp->tx_bytes;
  v7 = *(_BYTE *)(((unsigned __int64)&kcp->tx_bytes >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 116) & 7) + 3) >= v7 && v7 )
  {
    __asan_report_load4(p_tx_bytes);
  }
  else
  {
    kcp->tx_bytes += size;
    p_tx_bytes = &kcp->output;
    if ( !*(_BYTE *)(((unsigned __int64)&kcp->output >> 3) + 0x7FFF8000) )
    {
      p_tx_bytes = &kcp->user;
      if ( !*(_BYTE *)(((unsigned __int64)&kcp->user >> 3) + 0x7FFF8000) )
        return kcp->output((const char *)data, size, kcp, kcp->user);
      goto LABEL_17;
    }
  }
  __asan_report_load8(p_tx_bytes);
LABEL_17:
  __asan_report_load8(p_tx_bytes);
  return size;
};

// Line 231: range 0000000019FCF495-0000000019FD06D9
void __fastcall ikcp_qprint(const char *name, const IQUEUEHEAD *head)
{
  ;
};

// Line 373: range 0000000019FD06DE-0000000019FD0D40
int __fastcall ikcp_recv(ikcpcb *kcp, char *buffer, int len)
{
  int v3; // r14d
  IUINT32 frg; // r15d
  IKCPSEG_0 *next; // rbp
  IQUEUEHEAD *p_rcv_queue; // r13
  int v9; // eax
  IUINT32 *p_nrcv_que; // rdi
  char v11; // dl
  char v12; // al
  void *p_prev; // rdi
  IUINT32 *p_len; // rdi
  char v15; // al
  char v16; // dl
  char v17; // al
  char v18; // al
  IQUEUEHEAD *v19; // rdx
  IQUEUEHEAD *prev; // rax
  char v21; // dl
  unsigned __int64 v22; // rax
  void *p_nrcv_buf; // rdi
  void *p_rcv_buf; // rdi
  char v25; // dl
  char v26; // cl
  char v27; // cl
  char v28; // dl
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  char v31; // cl
  IUINT32 *p_rcv_wnd; // rdi
  char v33; // dl
  char v34; // al
  char v35; // dl
  IQUEUEHEAD *p; // [rsp+8h] [rbp-50h]
  int ispeek; // [rsp+14h] [rbp-44h]
  int peeksize; // [rsp+18h] [rbp-40h]
  int recover; // [rsp+1Ch] [rbp-3Ch]

  ispeek = (unsigned int)len >> 31;
  if ( !kcp )
  {
    __asan_handle_no_return(0LL);
    __assert_fail(off_1B9BED20, (const char *)&seg, 0x17Bu, "int ikcp_recv(ikcpcb*, char*, int)");
  }
  next = (IKCPSEG_0 *)(unsigned int)len;
  p_rcv_queue = &kcp->rcv_queue;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->rcv_queue >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&kcp->rcv_queue);
LABEL_17:
    next = (IKCPSEG_0 *)(unsigned int)-(int)next;
    goto LABEL_5;
  }
  if ( p_rcv_queue == kcp->rcv_queue.next )
    return -1;
  if ( len < 0 )
    goto LABEL_17;
LABEL_5:
  v9 = ikcp_peeksize(kcp);
  peeksize = v9;
  if ( v9 < 0 )
    return -2;
  if ( (int)next < v9 )
    return -3;
  p_nrcv_que = &kcp->nrcv_que;
  v11 = *(_BYTE *)(((unsigned __int64)&kcp->nrcv_que >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp - 116) & 7) + 3) >= v11 && v11 )
  {
    __asan_report_load4(p_nrcv_que);
LABEL_19:
    __asan_report_load4(p_nrcv_que);
    goto LABEL_20;
  }
  p_nrcv_que = &kcp->rcv_wnd;
  v12 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_wnd >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_19;
  if ( kcp->nrcv_que < kcp->rcv_wnd )
  {
    recover = 0;
    goto LABEL_13;
  }
LABEL_20:
  recover = 1;
LABEL_13:
  p_prev = &kcp->rcv_queue;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->rcv_queue >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_prev);
    goto LABEL_22;
  }
  next = (IKCPSEG_0 *)kcp->rcv_queue.next;
  v3 = 0;
  while ( p_rcv_queue != (IQUEUEHEAD *)next )
  {
    p_prev = next;
    if ( *(_BYTE *)(((unsigned __int64)next >> 3) + 0x7FFF8000) )
    {
LABEL_22:
      __asan_report_load8(p_prev);
    }
    else
    {
      p = next->node.next;
      if ( !buffer )
        goto LABEL_24;
      p_len = &next->len;
      v17 = *(_BYTE *)(((unsigned __int64)&next->len >> 3) + 0x7FFF8000);
      if ( v17 && v17 <= 3 )
      {
        __asan_report_load4(p_len);
LABEL_38:
        __asan_report_load4(p_len);
LABEL_39:
        __asan_report_load4(p_len);
        goto LABEL_40;
      }
    }
    memcpy(buffer, next->data, next->len);
    buffer += next->len;
LABEL_24:
    p_len = &next->len;
    v15 = *(_BYTE *)(((unsigned __int64)&next->len >> 3) + 0x7FFF8000);
    if ( v15 && v15 <= 3 )
      goto LABEL_38;
    v3 += next->len;
    p_len = &next->frg;
    v16 = *(_BYTE *)(((unsigned __int64)&next->frg >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)next + 28) & 7) + 3) >= v16 && v16 )
      goto LABEL_39;
    frg = next->frg;
    p_prev = kcp;
    if ( !ikcp_canlog(kcp, 8) )
      goto LABEL_29;
LABEL_40:
    v18 = *(_BYTE *)(((unsigned __int64)&next->sn >> 3) + 0x7FFF8000);
    if ( !v18 || v18 > 3 )
    {
      p_prev = kcp;
      ikcp_log(kcp, 8, "recv sn=%lu", next->sn);
LABEL_29:
      if ( ispeek )
        goto LABEL_30;
      goto LABEL_44;
    }
    __asan_report_load4(&next->sn);
LABEL_44:
    p_prev = next;
    if ( *(_BYTE *)(((unsigned __int64)next >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(next);
LABEL_52:
      __asan_report_load8(p_prev);
LABEL_53:
      __asan_report_store8();
LABEL_54:
      __asan_report_store8();
LABEL_55:
      __asan_report_load4(p_prev);
      break;
    }
    v19 = next->node.next;
    p_prev = &next->node.prev;
    if ( *(_BYTE *)(((unsigned __int64)&next->node.prev >> 3) + 0x7FFF8000) )
      goto LABEL_52;
    prev = next->node.prev;
    p_prev = &v19->prev;
    if ( *(_BYTE *)(((unsigned __int64)&v19->prev >> 3) + 0x7FFF8000) )
      goto LABEL_53;
    v19->prev = prev;
    p_prev = prev;
    if ( *(_BYTE *)(((unsigned __int64)prev >> 3) + 0x7FFF8000) )
      goto LABEL_54;
    prev->next = next->node.next;
    next->node.next = 0LL;
    next->node.prev = 0LL;
    ikcp_segment_delete(kcp, next);
    p_prev = &kcp->nrcv_que;
    v21 = *(_BYTE *)(((unsigned __int64)&kcp->nrcv_que >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp - 116) & 7) + 3) >= v21 && v21 )
      goto LABEL_55;
    --kcp->nrcv_que;
LABEL_30:
    if ( !frg )
      break;
    next = (IKCPSEG_0 *)p;
  }
  if ( v3 != peeksize )
  {
    __asan_handle_no_return(p_prev);
    __assert_fail("len == peeksize", (const char *)&seg, 0x1AAu, "int ikcp_recv(ikcpcb*, char*, int)");
  }
  while ( 1 )
  {
    p_rcv_buf = &kcp->rcv_buf;
    if ( *(_BYTE *)(((unsigned __int64)&kcp->rcv_buf >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_rcv_buf);
LABEL_59:
      __asan_report_load4(p_rcv_buf);
LABEL_60:
      __asan_report_load4(p_rcv_buf);
LABEL_61:
      __asan_report_load4(p_rcv_buf);
LABEL_62:
      __asan_report_load4(p_rcv_buf);
LABEL_63:
      __asan_report_load8(p_rcv_buf);
LABEL_64:
      __asan_report_load8(p_rcv_buf);
LABEL_65:
      __asan_report_store8();
LABEL_66:
      v22 = __asan_report_store8();
      goto LABEL_67;
    }
    v22 = (unsigned __int64)kcp->rcv_buf.next;
    if ( &kcp->rcv_buf == (IQUEUEHEAD *)v22 )
      goto LABEL_91;
    p_rcv_buf = (void *)(v22 + 40);
    v25 = *(_BYTE *)(((v22 + 40) >> 3) + 0x7FFF8000);
    if ( v25 && v25 <= 3 )
      goto LABEL_59;
    p_rcv_buf = &kcp->rcv_nxt;
    v26 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_nxt >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp + 28) & 7) + 3) >= v26 && v26 )
      goto LABEL_60;
    if ( *(_DWORD *)(v22 + 40) != kcp->rcv_nxt )
      goto LABEL_91;
    p_rcv_buf = &kcp->nrcv_que;
    v27 = *(_BYTE *)(((unsigned __int64)&kcp->nrcv_que >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp - 116) & 7) + 3) >= v27 && v27 )
      goto LABEL_61;
    p_rcv_buf = &kcp->rcv_wnd;
    v28 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_wnd >> 3) + 0x7FFF8000);
    if ( v28 && v28 <= 3 )
      goto LABEL_62;
    if ( kcp->nrcv_que >= kcp->rcv_wnd )
      goto LABEL_91;
    p_rcv_buf = kcp->rcv_buf.next;
    if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
      goto LABEL_63;
    v29 = *(_QWORD *)v22;
    p_rcv_buf = (void *)(v22 + 8);
    if ( *(_BYTE *)(((v22 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_64;
    v30 = *(_QWORD *)(v22 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v29 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_65;
    *(_QWORD *)(v29 + 8) = v30;
    if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
      goto LABEL_66;
    *(_QWORD *)v30 = *(_QWORD *)v22;
    *(_QWORD *)v22 = 0LL;
    *(_QWORD *)(v22 + 8) = 0LL;
    p_nrcv_buf = &kcp->nrcv_buf;
    v31 = *(_BYTE *)(((unsigned __int64)&kcp->nrcv_buf >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp - 124) & 7) + 3) >= v31 )
    {
      if ( v31 )
        break;
    }
LABEL_67:
    --kcp->nrcv_buf;
    p_nrcv_buf = &kcp->rcv_queue.prev;
    if ( *(_BYTE *)(((unsigned __int64)&kcp->rcv_queue.prev >> 3) + 0x7FFF8000) )
      goto LABEL_89;
    *(_QWORD *)(v22 + 8) = kcp->rcv_queue.prev;
    *(_QWORD *)v22 = p_rcv_queue;
    if ( *(_BYTE *)(((unsigned __int64)kcp->rcv_queue.prev >> 3) + 0x7FFF8000) )
      goto LABEL_90;
    kcp->rcv_queue.prev->next = (IQUEUEHEAD *)v22;
    kcp->rcv_queue.prev = (IQUEUEHEAD *)v22;
    ++kcp->nrcv_que;
    ++kcp->rcv_nxt;
  }
  __asan_report_load4(p_nrcv_buf);
LABEL_89:
  __asan_report_load8(p_nrcv_buf);
LABEL_90:
  __asan_report_store8();
LABEL_91:
  p_rcv_wnd = &kcp->nrcv_que;
  v33 = *(_BYTE *)(((unsigned __int64)&kcp->nrcv_que >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp - 116) & 7) + 3) >= v33 && v33 )
  {
    __asan_report_load4(p_rcv_wnd);
LABEL_102:
    __asan_report_load4(p_rcv_wnd);
    goto LABEL_103;
  }
  p_rcv_wnd = &kcp->rcv_wnd;
  v34 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_wnd >> 3) + 0x7FFF8000);
  if ( v34 && v34 <= 3 )
    goto LABEL_102;
  if ( kcp->nrcv_que < kcp->rcv_wnd && recover )
  {
    p_rcv_wnd = &kcp->probe;
    v35 = *(_BYTE *)(((unsigned __int64)&kcp->probe >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp + 76) & 7) + 3) < v35 || !v35 )
    {
      kcp->probe |= 2u;
      return v3;
    }
LABEL_103:
    __asan_report_load4(p_rcv_wnd);
    return -1;
  }
  return v3;
};

// Line 486: range 0000000019FD0D42-0000000019FD1396
int __fastcall ikcp_send(ikcpcb *kcp, const char *buffer, int len)
{
  IQUEUEHEAD *p_snd_queue; // r15
  const char *v5; // r14
  IUINT32 *p_mss; // rdi
  char v8; // al
  IUINT32 mss; // edx
  char v10; // cl
  void *p_prev; // rdi
  IKCPSEG_0 *prev; // rbx
  char v13; // al
  IUINT32 v14; // eax
  unsigned __int64 v15; // r12
  unsigned __int64 p_len; // rdi
  char v17; // al
  char v18; // dl
  char v19; // dl
  IQUEUEHEAD *next; // rax
  IKCPSEG_0 *v21; // rdi
  unsigned __int64 v22; // rdi
  IUINT32 *v23; // rdx
  char v24; // al
  IUINT32 v25; // ecx
  int result; // eax
  int i; // r15d
  int v28; // edx
  int v29; // r12d
  IKCPSEG_0 *v30; // rbx
  int *p_stream; // rdi
  char v32; // al
  char v33; // dl
  IQUEUEHEAD **p_frg; // rdi
  char v35; // cl
  char v36; // al
  int extend; // [rsp+8h] [rbp-40h]
  int extenda; // [rsp+8h] [rbp-40h]

  v5 = buffer;
  p_mss = &kcp->mss;
  v8 = *(_BYTE *)(((unsigned __int64)p_mss >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
  {
    __asan_report_load4(p_mss);
LABEL_41:
    __asan_handle_no_return(p_mss);
    __assert_fail("kcp->mss > 0", (const char *)&seg, 0x1EAu, "int ikcp_send(ikcpcb*, const char*, int)");
  }
  mss = kcp->mss;
  if ( !mss )
    goto LABEL_41;
  if ( len < 0 )
    return -1;
  v10 = *(_BYTE *)(((unsigned __int64)&kcp->stream >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 28) & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(&kcp->stream);
LABEL_43:
    p_prev = p_snd_queue;
    __asan_report_load8(p_snd_queue);
LABEL_44:
    __asan_report_load8(p_prev);
LABEL_45:
    __asan_report_load4(p_prev);
    goto LABEL_46;
  }
  if ( !kcp->stream )
    goto LABEL_35;
  p_snd_queue = &kcp->snd_queue;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->snd_queue >> 3) + 0x7FFF8000) )
    goto LABEL_43;
  if ( p_snd_queue == kcp->snd_queue.next )
    goto LABEL_34;
  p_prev = &kcp->snd_queue.prev;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->snd_queue.prev >> 3) + 0x7FFF8000) )
    goto LABEL_44;
  prev = (IKCPSEG_0 *)kcp->snd_queue.prev;
  p_prev = &prev->len;
  v13 = *(_BYTE *)(((unsigned __int64)&prev->len >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_45;
  v14 = prev->len;
  if ( mss <= v14 )
    goto LABEL_34;
  extend = mss - v14;
  if ( len < (int)(mss - v14) )
    extend = len;
  p_prev = kcp;
  v15 = (unsigned __int64)ikcp_segment_new(kcp, v14 + extend);
  if ( !v15 )
  {
LABEL_46:
    __asan_handle_no_return(p_prev);
    __assert_fail(off_1B9BF000, (const char *)&seg, 0x1F6u, "int ikcp_send(ikcpcb*, const char*, int)");
  }
  if ( *(_BYTE *)(((unsigned __int64)&kcp->snd_queue.prev >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&kcp->snd_queue.prev);
    goto LABEL_48;
  }
  if ( *(_BYTE *)(((v15 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_48:
    __asan_report_store8();
    goto LABEL_49;
  }
  *(_QWORD *)(v15 + 8) = kcp->snd_queue.prev;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
  {
LABEL_49:
    p_len = v15;
    __asan_report_store8();
    goto LABEL_50;
  }
  *(_QWORD *)v15 = p_snd_queue;
  p_len = (unsigned __int64)kcp->snd_queue.prev;
  if ( *(_BYTE *)((p_len >> 3) + 0x7FFF8000) )
  {
LABEL_50:
    __asan_report_store8();
LABEL_51:
    __asan_report_load4(p_len);
LABEL_52:
    __asan_report_store4(p_len);
LABEL_53:
    __asan_report_store4(p_len);
    goto LABEL_54;
  }
  *(_QWORD *)p_len = v15;
  kcp->snd_queue.prev = (IQUEUEHEAD *)v15;
  p_len = (unsigned __int64)&prev->len;
  v17 = *(_BYTE *)(((unsigned __int64)&prev->len >> 3) + 0x7FFF8000);
  if ( v17 && v17 <= 3 )
    goto LABEL_51;
  memcpy((void *)(v15 + 68), prev->data, prev->len);
  if ( buffer )
  {
    memcpy((void *)(v15 + 68 + prev->len), buffer, extend);
    v5 = &buffer[extend];
  }
  p_len = v15 + 48;
  v18 = *(_BYTE *)(((v15 + 48) >> 3) + 0x7FFF8000);
  if ( v18 && v18 <= 3 )
    goto LABEL_52;
  *(_DWORD *)(v15 + 48) = prev->len + extend;
  p_len = v15 + 28;
  v19 = *(_BYTE *)(((v15 + 28) >> 3) + 0x7FFF8000);
  if ( (char)(((v15 + 28) & 7) + 3) >= v19 && v19 )
    goto LABEL_53;
  *(_DWORD *)(v15 + 28) = 0;
  len -= extend;
  if ( *(_BYTE *)(((unsigned __int64)prev >> 3) + 0x7FFF8000) )
  {
LABEL_54:
    v21 = prev;
    __asan_report_load8(prev);
    goto LABEL_55;
  }
  next = prev->node.next;
  v21 = (IKCPSEG_0 *)&prev->node.prev;
  if ( *(_BYTE *)(((unsigned __int64)&prev->node.prev >> 3) + 0x7FFF8000) )
  {
LABEL_55:
    __asan_report_load8(v21);
    goto LABEL_56;
  }
  v22 = (unsigned __int64)prev->node.prev;
  v23 = (IUINT32 *)&next->prev;
  if ( *(_BYTE *)(((unsigned __int64)&next->prev >> 3) + 0x7FFF8000) )
  {
LABEL_56:
    v22 = (unsigned __int64)v23;
    __asan_report_store8();
    goto LABEL_57;
  }
  next->prev = (IQUEUEHEAD *)v22;
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8();
LABEL_58:
    __asan_report_load4(v22);
    goto LABEL_59;
  }
  *(_QWORD *)v22 = prev->node.next;
  prev->node.next = &prev->node;
  prev->node.prev = &prev->node;
  ikcp_segment_delete(kcp, prev);
LABEL_34:
  if ( len <= 0 )
    return 0;
LABEL_35:
  v22 = (unsigned __int64)&kcp->mss;
  v24 = *(_BYTE *)(((unsigned __int64)&kcp->mss >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
    goto LABEL_58;
  v25 = kcp->mss;
  if ( (int)v25 < len )
  {
    extenda = (v25 + len - 1) / v25;
    if ( extenda > 255 )
      return -2;
    goto LABEL_60;
  }
LABEL_59:
  extenda = 1;
LABEL_60:
  if ( !extenda )
    extenda = 1;
  for ( i = 0; extenda > i; ++i )
  {
    v29 = kcp->mss;
    if ( v29 >= len )
      v29 = len;
    v30 = ikcp_segment_new(kcp, v29);
    if ( !v30 )
    {
      __asan_handle_no_return(kcp);
      __assert_fail(off_1B9BF000, (const char *)&seg, 0x219u, "int ikcp_send(ikcpcb*, const char*, int)");
    }
    if ( len > 0 && v5 != 0LL )
      memcpy(v30->data, v5, v29);
    p_stream = (int *)&v30->len;
    v32 = *(_BYTE *)(((unsigned __int64)&v30->len >> 3) + 0x7FFF8000);
    if ( v32 && v32 <= 3 )
    {
      __asan_report_store4(p_stream);
LABEL_65:
      __asan_report_load4(p_stream);
      goto LABEL_66;
    }
    v30->len = v29;
    p_stream = &kcp->stream;
    v33 = *(_BYTE *)(((unsigned __int64)&kcp->stream >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp + 28) & 7) + 3) >= v33 && v33 )
      goto LABEL_65;
    if ( !kcp->stream )
    {
      v28 = extenda - i - 1;
      goto LABEL_87;
    }
LABEL_66:
    v28 = 0;
LABEL_87:
    p_frg = (IQUEUEHEAD **)&v30->frg;
    v35 = *(_BYTE *)(((unsigned __int64)&v30->frg >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v30 + 28) & 7) + 3) >= v35 && v35 )
    {
      __asan_report_store4(p_frg);
LABEL_68:
      __asan_report_store8();
LABEL_69:
      __asan_report_store8();
LABEL_70:
      __asan_report_load8(p_frg);
LABEL_71:
      __asan_report_store8();
      goto LABEL_72;
    }
    v30->frg = v28;
    p_frg = &v30->node.next;
    if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      goto LABEL_68;
    v30->node.next = &v30->node;
    p_frg = &v30->node.prev;
    if ( *(_BYTE *)(((unsigned __int64)&v30->node.prev >> 3) + 0x7FFF8000) )
      goto LABEL_69;
    v30->node.prev = &v30->node;
    p_frg = &kcp->snd_queue.prev;
    if ( *(_BYTE *)(((unsigned __int64)&kcp->snd_queue.prev >> 3) + 0x7FFF8000) )
      goto LABEL_70;
    v30->node.prev = kcp->snd_queue.prev;
    v30->node.next = &kcp->snd_queue;
    if ( *(_BYTE *)(((unsigned __int64)kcp->snd_queue.prev >> 3) + 0x7FFF8000) )
      goto LABEL_71;
    kcp->snd_queue.prev->next = &v30->node;
    kcp->snd_queue.prev = &v30->node;
    v36 = *(_BYTE *)(((unsigned __int64)&kcp->nsnd_que >> 3) + 0x7FFF8000);
    if ( v36 && v36 <= 3 )
    {
      __asan_report_load4(&kcp->nsnd_que);
      break;
    }
LABEL_72:
    ++kcp->nsnd_que;
    if ( v5 )
      v5 += v29;
    len -= v29;
  }
  result = ikcp_canlog(kcp, 4);
  if ( result )
  {
    ikcp_log(kcp, 4, "send len=%d count=%u", (unsigned int)len, (unsigned int)extenda);
    return 0;
  }
  return result;
};

// Line 567: range 0000000019FCE153-0000000019FCE541
// local variable allocation has failed, the output may be wrong!
void __fastcall ikcp_update_ack(ikcpcb *kcp, IINT32 rtt)
{
  char v2; // al
  IINT32 rx_srtt; // edx
  ikcpcb *p_rx_rttval; // rdx
  char v5; // cl
  IINT32 *v6; // rcx
  IUINT32 interval; // r8d
  char v8; // r9
  unsigned int rx_minrto; // eax
  IINT32 *p_rx_minrto; // rcx
  char v11; // dl
  IINT32 *p_rx_rto; // rcx
  char v13; // si
  __int64 v14; // rcx
  char v15; // r9
  int v16; // esi
  ikcpcb *v17; // rdi

  v2 = *(_BYTE *)(((unsigned __int64)&kcp->rx_srtt >> 3) + 0x7FFF8000);
  if ( v2 && v2 <= 3 )
  {
    __asan_report_load4(&kcp->rx_srtt);
LABEL_23:
    kcp = p_rx_rttval;
    __asan_report_store4(p_rx_rttval);
    goto LABEL_24;
  }
  rx_srtt = kcp->rx_srtt;
  if ( !rx_srtt )
  {
    kcp->rx_srtt = rtt;
    *(_QWORD *)&rtt = (unsigned int)(rtt / 2);
    p_rx_rttval = (ikcpcb *)&kcp->rx_rttval;
    v5 = *(_BYTE *)(((unsigned __int64)&kcp->rx_rttval >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp + 44) & 7) + 3) < v5 || !v5 )
    {
      kcp->rx_rttval = rtt;
      goto LABEL_7;
    }
    goto LABEL_23;
  }
LABEL_24:
  v14 = rtt - rx_srtt;
  if ( v14 < 0 )
    v14 = -v14;
  v15 = *(_BYTE *)(((unsigned __int64)&kcp->rx_rttval >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 44) & 7) + 3) >= v15 && v15 )
  {
    __asan_report_load4(&kcp->rx_rttval);
LABEL_31:
    __asan_report_load4(v6);
LABEL_32:
    __asan_report_load4(*(_QWORD *)&rtt);
LABEL_33:
    __asan_report_load4(p_rx_minrto);
    goto LABEL_34;
  }
  kcp->rx_rttval = (v14 + 3 * kcp->rx_rttval) / 4;
  v16 = (7 * rx_srtt + rtt) / 8;
  kcp->rx_srtt = v16;
  if ( v16 <= 0 )
    kcp->rx_srtt = 1;
LABEL_7:
  v6 = &kcp->rx_rttval;
  *(_QWORD *)&rtt = *(unsigned __int8 *)(((unsigned __int64)&kcp->rx_rttval >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 44) & 7) + 3) >= (char)rtt && (_BYTE)rtt )
    goto LABEL_31;
  interval = 4 * kcp->rx_rttval;
  *(_QWORD *)&rtt = &kcp->interval;
  v8 = *(_BYTE *)(((unsigned __int64)&kcp->interval >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 84) & 7) + 3) >= v8 && v8 )
    goto LABEL_32;
  if ( 4 * kcp->rx_rttval <= kcp->interval )
    interval = kcp->interval;
  rx_minrto = interval + kcp->rx_srtt;
  p_rx_minrto = &kcp->rx_minrto;
  v11 = *(_BYTE *)(((unsigned __int64)&kcp->rx_minrto >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_33;
  if ( rx_minrto <= kcp->rx_minrto )
    rx_minrto = kcp->rx_minrto;
  if ( rx_minrto > 0xEA60 )
    rx_minrto = 60000;
  p_rx_rto = &kcp->rx_rto;
  v13 = *(_BYTE *)(((unsigned __int64)&kcp->rx_rto >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 52) & 7) + 3) < v13 || !v13 )
  {
    kcp->rx_rto = rx_minrto;
    return;
  }
LABEL_34:
  v17 = (ikcpcb *)p_rx_rto;
  __asan_report_store4(p_rx_rto);
  ikcp_shrink_buf(v17);
};

// Line 595: range 0000000019FCEBEC-0000000019FCF0B9
// local variable allocation has failed, the output may be wrong!
void __fastcall ikcp_parse_ack(ikcpcb *kcp, IUINT32 sn)
{
  IUINT32 v3; // eax
  unsigned __int64 p_snd_una; // rdi
  char v5; // cl
  char v6; // dl
  __int64 v7; // rcx
  int v8; // edx
  char v9; // dl
  ikcpcb *p_nsnd_buf; // rdi
  char v11; // al
  IUINT32 v12; // edx

  v3 = sn;
  p_snd_una = (unsigned __int64)&kcp->snd_una;
  v5 = *(_BYTE *)((p_snd_una >> 3) + 0x7FFF8000);
  if ( (char)((p_snd_una & 7) + 3) >= v5 && v5 )
  {
    __asan_report_load4(p_snd_una);
    goto LABEL_10;
  }
  if ( (int)(sn - kcp->snd_una) < 0 )
    return;
  p_snd_una = (unsigned __int64)&kcp->snd_nxt;
  v6 = *(_BYTE *)(((unsigned __int64)&kcp->snd_nxt >> 3) + 0x7FFF8000);
  if ( v6 && v6 <= 3 )
  {
LABEL_10:
    __asan_report_load4(p_snd_una);
    goto LABEL_11;
  }
  if ( (int)(sn - kcp->snd_nxt) < 0 )
  {
    p_snd_una = (unsigned __int64)&kcp->snd_buf;
    if ( !*(_BYTE *)(((unsigned __int64)&kcp->snd_buf >> 3) + 0x7FFF8000) )
    {
      for ( *(_QWORD *)&sn = kcp->snd_buf.next; ; *(_QWORD *)&sn = v7 )
      {
        if ( &kcp->snd_buf == (IQUEUEHEAD *)*(ikcpcb **)&sn )
          return;
        p_snd_una = *(_QWORD *)&sn;
        if ( *(_BYTE *)((*(_QWORD *)&sn >> 3) + 0x7FFF8000LL) )
        {
LABEL_12:
          v3 = __asan_report_load8(p_snd_una);
        }
        else
        {
          v7 = **(_QWORD **)&sn;
          v9 = *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&sn + 40LL) >> 3) + 0x7FFF8000);
          if ( v9 && v9 <= 3 )
          {
            __asan_report_load4(*(_QWORD *)&sn + 40LL);
LABEL_21:
            p_nsnd_buf = (ikcpcb *)(*(_QWORD *)&sn + 8LL);
            if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&sn + 8LL) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(p_nsnd_buf);
            }
            else
            {
              p_nsnd_buf = (ikcpcb *)(v7 + 8);
              if ( !*(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(v7 + 8) = *(_QWORD *)(*(_QWORD *)&sn + 8LL);
                p_nsnd_buf = *(ikcpcb **)(*(_QWORD *)&sn + 8LL);
                if ( !*(_BYTE *)(((unsigned __int64)p_nsnd_buf >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)&p_nsnd_buf->conv = **(_QWORD **)&sn;
                  **(_QWORD **)&sn = 0LL;
                  *(_QWORD *)(*(_QWORD *)&sn + 8LL) = 0LL;
                  ikcp_segment_delete(kcp, *(IKCPSEG_0 **)&sn);
                  p_nsnd_buf = (ikcpcb *)&kcp->nsnd_buf;
                  v11 = *(_BYTE *)(((unsigned __int64)&kcp->nsnd_buf >> 3) + 0x7FFF8000);
                  if ( !v11 || v11 > 3 )
                  {
                    --kcp->nsnd_buf;
                    return;
                  }
                  goto LABEL_31;
                }
LABEL_30:
                __asan_report_store8();
LABEL_31:
                __asan_report_load4(p_nsnd_buf);
                ikcp_ack_push(p_nsnd_buf, sn, v12);
                return;
              }
            }
            __asan_report_store8();
            goto LABEL_30;
          }
        }
        v8 = *(_DWORD *)(*(_QWORD *)&sn + 40LL);
        if ( v8 == v3 )
          goto LABEL_21;
        if ( (int)(v3 - v8) < 0 )
          return;
      }
    }
LABEL_11:
    __asan_report_load8(p_snd_una);
    goto LABEL_12;
  }
};

// Line 617: range 0000000019FCEAA9-0000000019FCEBEB
void __fastcall ikcp_parse_una(ikcpcb *kcp, IUINT32 una)
{
  IKCPSEG_0 *next; // rbp
  IUINT32 v3; // r12d
  unsigned __int64 p_snd_buf; // rdi
  IKCPSEG_0 *i; // rsi
  char v7; // al
  IQUEUEHEAD *prev; // rax
  char v9; // al

  p_snd_buf = (unsigned __int64)&kcp->snd_buf;
  if ( *(_BYTE *)((p_snd_buf >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_snd_buf);
    goto LABEL_4;
  }
  v3 = una;
  for ( i = (IKCPSEG_0 *)kcp->snd_buf.next; &kcp->snd_buf != (IQUEUEHEAD *)i; i = next )
  {
    p_snd_buf = (unsigned __int64)i;
    if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
    {
LABEL_4:
      __asan_report_load8(p_snd_buf);
LABEL_5:
      __asan_report_load4(p_snd_buf);
LABEL_6:
      __asan_report_load8(p_snd_buf);
LABEL_7:
      __asan_report_store8();
LABEL_8:
      __asan_report_store8();
      goto LABEL_9;
    }
    next = (IKCPSEG_0 *)i->node.next;
    p_snd_buf = (unsigned __int64)&i->sn;
    v7 = *(_BYTE *)(((unsigned __int64)&i->sn >> 3) + 0x7FFF8000);
    if ( v7 && v7 <= 3 )
      goto LABEL_5;
    if ( (int)(v3 - i->sn) <= 0 )
      return;
    p_snd_buf = (unsigned __int64)&i->node.prev;
    if ( *(_BYTE *)(((unsigned __int64)&i->node.prev >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    prev = i->node.prev;
    if ( *(_BYTE *)(((unsigned __int64)&next->node.prev >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    next->node.prev = prev;
    if ( *(_BYTE *)(((unsigned __int64)prev >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    prev->next = i->node.next;
    i->node.next = 0LL;
    i->node.prev = 0LL;
    ikcp_segment_delete(kcp, i);
    v9 = *(_BYTE *)(((unsigned __int64)&kcp->nsnd_buf >> 3) + 0x7FFF8000);
    if ( v9 && v9 <= 3 )
    {
      __asan_report_load4(&kcp->nsnd_buf);
      return;
    }
LABEL_9:
    --kcp->nsnd_buf;
  }
};

// Line 697: range 0000000019FCE542-0000000019FCEA45
// local variable allocation has failed, the output may be wrong!
void __fastcall ikcp_ack_get(const ikcpcb *kcp, int p, IUINT32 *sn, IUINT32 *ts)
{
  IUINT32 *v4; // rax
  char v5; // r9
  char v6; // r8
  IUINT32 **p_acklist; // rax
  IUINT32 **v8; // rdi
  char v9; // dl
  char v10; // dl
  char *v11; // rdi

  if ( sn )
  {
    if ( *(_BYTE *)(((unsigned __int64)&kcp->acklist >> 3) + 0x7FFF8000) )
    {
      v4 = (IUINT32 *)__asan_report_load8(&kcp->acklist);
    }
    else
    {
      v4 = &kcp->acklist[2 * p];
      v5 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
      if ( (char)(((LOBYTE(kcp->acklist) + 8 * p) & 7) + 3) < v5 || !v5 )
      {
        v6 = *(_BYTE *)(((unsigned __int64)sn >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)sn & 7) + 3) < v6 || !v6 )
        {
          *sn = *v4;
          goto LABEL_8;
        }
LABEL_18:
        p_acklist = (IUINT32 **)__asan_report_store4(sn);
LABEL_19:
        v8 = p_acklist;
        __asan_report_load8(p_acklist);
LABEL_20:
        __asan_report_load4(v8);
LABEL_21:
        v11 = (char *)ts;
        __asan_report_store4(ts);
        ikcp_encode_seg(v11, *(const IKCPSEG_0 **)&p);
        return;
      }
    }
    __asan_report_load4(v4);
    goto LABEL_18;
  }
LABEL_8:
  if ( !ts )
    return;
  p_acklist = &kcp->acklist;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->acklist >> 3) + 0x7FFF8000) )
    goto LABEL_19;
  *(_QWORD *)&p = 2 * p;
  v8 = (IUINT32 **)&kcp->acklist[*(_QWORD *)&p + 1];
  v9 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v8 & 7) + 3) >= v9 && v9 )
    goto LABEL_20;
  *(_QWORD *)&p = *(unsigned int *)v8;
  v10 = *(_BYTE *)(((unsigned __int64)ts >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)ts & 7) + 3) >= v10 && v10 )
    goto LABEL_21;
  *ts = p;
};

// Line 707: range 0000000019FD1398-0000000019FD2295
void __fastcall ikcp_parse_data(ikcpcb *kcp, IKCPSEG_0 *newseg)
{
  IQUEUEHEAD *p_rcv_buf; // rbp
  IUINT32 *p_sn; // rdi
  char v5; // al
  IUINT32 sn; // edx
  char v7; // cl
  IUINT32 rcv_nxt; // eax
  char v9; // cl
  unsigned __int64 i; // rdi
  __int64 v11; // rax
  IQUEUEHEAD *v12; // r8
  int v13; // eax
  char v14; // al
  int v15; // eax
  IQUEUEHEAD *p_prev; // rax
  IQUEUEHEAD *v17; // rax
  IUINT32 *v18; // rdx
  IUINT32 *p_nrcv_buf; // rdi
  char v20; // dl
  unsigned __int64 next; // rax
  const char *nrcv_buf; // rsi
  ikcpcb *prev; // rdi
  void *p_rcv_nxt; // rdi
  char v25; // dl
  char v26; // cl
  char v27; // cl
  char v28; // dl
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  char v31; // cl
  __int64 v32; // rdx

  p_sn = &newseg->sn;
  v5 = *(_BYTE *)(((unsigned __int64)&newseg->sn >> 3) + 0x7FFF8000);
  if ( v5 && v5 <= 3 )
  {
    __asan_report_load4(p_sn);
LABEL_12:
    __asan_report_load4(p_sn);
LABEL_13:
    __asan_report_load4(p_sn);
LABEL_14:
    ikcp_segment_delete(kcp, newseg);
    return;
  }
  sn = newseg->sn;
  p_sn = &kcp->rcv_nxt;
  v7 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_nxt >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 28) & 7) + 3) >= v7 && v7 )
    goto LABEL_12;
  rcv_nxt = kcp->rcv_nxt;
  p_sn = &kcp->rcv_wnd;
  v9 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_wnd >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_13;
  if ( (int)(sn - (kcp->rcv_wnd + rcv_nxt)) >= 0 || (int)(sn - rcv_nxt) < 0 )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->rcv_buf.prev >> 3) + 0x7FFF8000) )
  {
    v11 = __asan_report_load8(&kcp->rcv_buf.prev);
    goto LABEL_17;
  }
  for ( i = (unsigned __int64)kcp->rcv_buf.prev; ; i = (unsigned __int64)v12 )
  {
    p_rcv_buf = &kcp->rcv_buf;
    if ( &kcp->rcv_buf == (IQUEUEHEAD *)i )
    {
      v15 = 0;
      goto LABEL_28;
    }
    v11 = i + 8;
    if ( *(_BYTE *)(((i + 8) >> 3) + 0x7FFF8000) )
    {
LABEL_17:
      i = v11;
      __asan_report_load8(v11);
    }
    else
    {
      v12 = *(IQUEUEHEAD **)(i + 8);
      v14 = *(_BYTE *)(((i + 40) >> 3) + 0x7FFF8000);
      if ( v14 && v14 <= 3 )
      {
        i += 40LL;
        __asan_report_load4(i);
LABEL_26:
        v15 = 0;
        goto LABEL_28;
      }
    }
    v13 = *(_DWORD *)(i + 40);
    if ( v13 == sn )
      break;
    if ( (int)(sn - v13) > 0 )
      goto LABEL_26;
  }
  v15 = 1;
LABEL_28:
  if ( v15 )
    goto LABEL_42;
  if ( *(_BYTE *)(((unsigned __int64)newseg >> 3) + 0x7FFF8000) )
  {
    p_prev = (IQUEUEHEAD *)__asan_report_store8();
    goto LABEL_38;
  }
  newseg->node.next = &newseg->node;
  p_prev = (IQUEUEHEAD *)&newseg->node.prev;
  if ( *(_BYTE *)(((unsigned __int64)&newseg->node.prev >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    i = (unsigned __int64)p_prev;
    __asan_report_store8();
    goto LABEL_39;
  }
  newseg->node.prev = (IQUEUEHEAD *)i;
  if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    __asan_report_load8(i);
    goto LABEL_40;
  }
  v17 = *(IQUEUEHEAD **)i;
  newseg->node.next = *(IQUEUEHEAD **)i;
  v18 = (IUINT32 *)&v17->prev;
  if ( !*(_BYTE *)(((unsigned __int64)&v17->prev >> 3) + 0x7FFF8000) )
  {
    v17->prev = &newseg->node;
    *(_QWORD *)i = newseg;
    p_nrcv_buf = &kcp->nrcv_buf;
    v20 = *(_BYTE *)(((unsigned __int64)&kcp->nrcv_buf >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp - 124) & 7) + 3) < v20 || !v20 )
    {
      ++kcp->nrcv_buf;
      goto LABEL_55;
    }
    goto LABEL_41;
  }
LABEL_40:
  p_nrcv_buf = v18;
  __asan_report_store8();
LABEL_41:
  __asan_report_load4(p_nrcv_buf);
LABEL_42:
  ikcp_segment_delete(kcp, newseg);
  while ( 1 )
  {
LABEL_55:
    p_rcv_nxt = &kcp->rcv_buf;
    if ( *(_BYTE *)(((unsigned __int64)&kcp->rcv_buf >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_rcv_nxt);
LABEL_44:
      __asan_report_load4(p_rcv_nxt);
LABEL_45:
      __asan_report_load4(p_rcv_nxt);
LABEL_46:
      __asan_report_load4(p_rcv_nxt);
LABEL_47:
      __asan_report_load4(p_rcv_nxt);
LABEL_48:
      __asan_report_load8(p_rcv_nxt);
LABEL_49:
      __asan_report_load8(p_rcv_nxt);
LABEL_50:
      __asan_report_store8();
LABEL_51:
      next = __asan_report_store8();
      goto LABEL_52;
    }
    next = (unsigned __int64)kcp->rcv_buf.next;
    if ( p_rcv_buf == (IQUEUEHEAD *)next )
      return;
    p_rcv_nxt = (void *)(next + 40);
    v25 = *(_BYTE *)(((next + 40) >> 3) + 0x7FFF8000);
    if ( v25 && v25 <= 3 )
      goto LABEL_44;
    p_rcv_nxt = &kcp->rcv_nxt;
    v26 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_nxt >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp + 28) & 7) + 3) >= v26 && v26 )
      goto LABEL_45;
    if ( *(_DWORD *)(next + 40) != kcp->rcv_nxt )
      return;
    p_rcv_nxt = &kcp->nrcv_que;
    v27 = *(_BYTE *)(((unsigned __int64)&kcp->nrcv_que >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp - 116) & 7) + 3) >= v27 && v27 )
      goto LABEL_46;
    p_rcv_nxt = &kcp->rcv_wnd;
    v28 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_wnd >> 3) + 0x7FFF8000);
    if ( v28 && v28 <= 3 )
      goto LABEL_47;
    if ( kcp->nrcv_que >= kcp->rcv_wnd )
      return;
    p_rcv_nxt = kcp->rcv_buf.next;
    if ( *(_BYTE *)((next >> 3) + 0x7FFF8000) )
      goto LABEL_48;
    v29 = *(_QWORD *)next;
    p_rcv_nxt = (void *)(next + 8);
    if ( *(_BYTE *)(((next + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_49;
    v30 = *(_QWORD *)(next + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v29 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_50;
    *(_QWORD *)(v29 + 8) = v30;
    nrcv_buf = (const char *)(v30 >> 3);
    if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
      goto LABEL_51;
    *(_QWORD *)v30 = *(_QWORD *)next;
    *(_QWORD *)next = 0LL;
    *(_QWORD *)(next + 8) = 0LL;
    prev = (ikcpcb *)&kcp->nrcv_buf;
    v31 = *(_BYTE *)(((unsigned __int64)&kcp->nrcv_buf >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp - 124) & 7) + 3) >= v31 )
    {
      if ( v31 )
        break;
    }
LABEL_52:
    nrcv_buf = (const char *)kcp->nrcv_buf;
    kcp->nrcv_buf = (_DWORD)nrcv_buf - 1;
    prev = (ikcpcb *)&kcp->rcv_queue.prev;
    if ( *(_BYTE *)(((unsigned __int64)&kcp->rcv_queue.prev >> 3) + 0x7FFF8000) )
      goto LABEL_74;
    *(_QWORD *)(next + 8) = kcp->rcv_queue.prev;
    *(_QWORD *)next = &kcp->rcv_queue;
    prev = (ikcpcb *)kcp->rcv_queue.prev;
    if ( *(_BYTE *)(((unsigned __int64)prev >> 3) + 0x7FFF8000) )
      goto LABEL_75;
    kcp->rcv_queue.prev->next = (IQUEUEHEAD *)next;
    kcp->rcv_queue.prev = (IQUEUEHEAD *)next;
    ++kcp->nrcv_que;
    ++kcp->rcv_nxt;
  }
  __asan_report_load4(prev);
LABEL_74:
  __asan_report_load8(prev);
LABEL_75:
  __asan_report_store8();
  ikcp_input(prev, nrcv_buf, v32);
};

// Line 973: range 0000000019FD2297-0000000019FD3A25
void __fastcall ikcp_flush(ikcpcb *kcp)
{
  signed int v1; // esi
  IKCPSEG_0 *v2; // r12
  char *v3; // r14
  char *buffer; // r15
  void *p_current; // rdi
  char v7; // al
  IUINT32 current; // r13d
  char v9; // al
  char v10; // al
  ikcpcb *p_token; // rdi
  char v12; // al
  char v13; // dl
  char v14; // al
  __int64 v15; // rax
  int v16; // edx
  char v17; // cl
  int v18; // r13d
  IUINT32 *p_ackcount; // rdi
  char v20; // al
  char v21; // dl
  char v22; // al
  IUINT32 probe_wait; // eax
  char v24; // al
  char v25; // cl
  IUINT32 *p_ts_probe; // rdi
  char v27; // cl
  char v28; // dl
  IUINT32 v29; // edx
  IUINT32 v30; // eax
  char v31; // dl
  IUINT32 *p_probe_wait; // rdi
  char v33; // dl
  char v34; // al
  char v35; // dl
  int v36; // edx
  char v37; // cl
  IUINT32 *p_probe; // rdi
  char v39; // dl
  int v40; // edx
  char v41; // cl
  void *p_rmt_wnd; // rdi
  char v43; // dl
  char v44; // dl
  char v45; // dl
  char v46; // al
  char v47; // al
  IUINT32 v48; // ecx
  unsigned __int64 next; // rax
  unsigned __int64 p_snd_una; // rdi
  char v51; // dl
  char v52; // al
  IQUEUEHEAD *v53; // rsi
  unsigned __int64 v54; // rdx
  char v55; // dl
  char v56; // dl
  char v57; // dl
  char v58; // dl
  char v59; // dl
  char v60; // si
  char v61; // dl
  char v62; // dl
  char v63; // si
  IUINT32 snd_nxt; // edx
  char v65; // si
  char v66; // si
  char v67; // si
  char v68; // si
  char v69; // si
  char v70; // dl
  char v71; // si
  char v72; // dl
  char v73; // al
  void *p_nodelay; // rdi
  char v75; // dl
  char v76; // dl
  void *p_snd_buf; // rdi
  int xmit; // eax
  void *p_resendts; // rdi
  char v80; // cl
  char v81; // dl
  char v82; // dl
  char v83; // al
  char v84; // cl
  void *p_rto; // rdi
  char v86; // al
  char v87; // dl
  int v88; // eax
  char v89; // al
  char v90; // cl
  int *p_fastack; // rdi
  char v92; // cl
  char v93; // cl
  int fastlimit; // edx
  char v95; // al
  int v96; // edx
  IUINT32 *p_wnd; // rdi
  char v98; // al
  char v99; // dl
  char v100; // dl
  char v101; // al
  IUINT32 len; // edx
  IUINT32 *p_state; // rdi
  char v104; // al
  char v105; // al
  char v106; // dl
  IINT32 rx_rto; // eax
  char v108; // dl
  IUINT32 v109; // eax
  char v110; // cl
  IUINT32 *p_ts; // rdi
  char v112; // dl
  char v113; // al
  char v114; // dl
  char v115; // dl
  char v116; // al
  char v117; // cl
  char v118; // al
  IUINT32 *p_xmit; // rdi
  char v120; // al
  char v121; // dl
  char v122; // dl
  IUINT32 *p_snd_nxt; // rdi
  char v124; // al
  char v125; // cl
  IUINT32 v126; // eax
  char v127; // dl
  IUINT32 v128; // r15d
  IUINT32 *p_cwnd; // rdi
  char v130; // al
  char v131; // al
  IUINT32 v132; // r15d
  char v133; // al
  IUINT32 v134; // r13d
  char v135; // al
  IUINT32 *p_mss; // rdi
  char v137; // al
  char v138; // al
  char v139; // al
  char v140; // al
  char v141; // al
  char v142; // al
  _QWORD *v143; // rcx
  IUINT32 rmt_wnd; // [rsp+0h] [rbp-108h]
  unsigned __int64 v145; // [rsp+8h] [rbp-100h]
  int rtomin; // [rsp+10h] [rbp-F8h]
  IUINT32 rtomina; // [rsp+10h] [rbp-F8h]
  int lost; // [rsp+14h] [rbp-F4h]
  _DWORD *v149; // [rsp+18h] [rbp-F0h]
  unsigned int resent; // [rsp+28h] [rbp-E0h]
  int change; // [rsp+2Ch] [rbp-DCh]
  char v152[216]; // [rsp+30h] [rbp-D8h] BYREF

  v145 = (unsigned __int64)v152;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_2(160LL);
    if ( v15 )
      v145 = v15;
  }
  rmt_wnd = v145 + 160;
  *(_QWORD *)v145 = 1102416563LL;
  *(_QWORD *)(v145 + 8) = "1 48 72 7 seg:983";
  *(_QWORD *)(v145 + 16) = ikcp_flush;
  v149 = (_DWORD *)(v145 >> 3);
  v149[536862720] = -235802127;
  v149[536862721] = 61937;
  v149[536862723] = -218103808;
  v149[536862724] = -202116109;
  p_current = &kcp->current;
  v7 = *(_BYTE *)(((unsigned __int64)&kcp->current >> 3) + 0x7FFF8000);
  if ( v7 && v7 <= 3 )
  {
    __asan_report_load4(p_current);
    goto LABEL_20;
  }
  current = kcp->current;
  p_current = &kcp->buffer;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->buffer >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(p_current);
LABEL_21:
    __asan_report_load4(p_current);
LABEL_22:
    p_token = kcp;
    __asan_report_load4(kcp);
LABEL_23:
    __asan_report_load4(p_token);
LABEL_24:
    __asan_report_load4(p_token);
LABEL_25:
    __asan_report_load4(p_token);
    goto LABEL_26;
  }
  buffer = kcp->buffer;
  p_current = &kcp->updated;
  v9 = *(_BYTE *)(((unsigned __int64)&kcp->updated >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
    goto LABEL_21;
  if ( !kcp->updated )
    goto LABEL_368;
  v10 = *(_BYTE *)(((unsigned __int64)kcp >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_22;
  *(_DWORD *)(v145 + 64) = kcp->conv;
  p_token = (ikcpcb *)&kcp->token;
  v12 = *(_BYTE *)(((unsigned __int64)&kcp->token >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
    goto LABEL_23;
  v3 = (char *)(v145 + 160);
  *(_DWORD *)(v145 + 68) = kcp->token;
  *(_DWORD *)(v145 + 72) = 82;
  *(_DWORD *)(v145 + 76) = 0;
  *(_DWORD *)(v145 + 80) = ikcp_wnd_unused(kcp);
  p_token = (ikcpcb *)&kcp->rcv_nxt;
  v13 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_nxt >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 28) & 7) + 3) >= v13 && v13 )
    goto LABEL_24;
  *(_DWORD *)(v145 + 92) = kcp->rcv_nxt;
  *(_DWORD *)(v145 + 96) = 0;
  *(_DWORD *)(v145 + 88) = 0;
  *(_DWORD *)(v145 + 84) = 0;
  p_token = (ikcpcb *)&kcp->ackcount;
  v14 = *(_BYTE *)(((unsigned __int64)&kcp->ackcount >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
    goto LABEL_25;
  rtomin = kcp->ackcount;
  v3 = buffer;
  v2 = 0LL;
  lost = current;
  while ( (int)v2 < rtomin )
  {
    v16 = (_DWORD)v3 - (_DWORD)buffer;
    v1 = (_DWORD)v3 - (_DWORD)buffer + 27;
    v17 = *(_BYTE *)(((unsigned __int64)&kcp->mtu >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp + 4) & 7) + 3) >= v17 && v17 )
    {
      __asan_report_load4(&kcp->mtu);
    }
    else
    {
LABEL_26:
      if ( v1 < (signed int)kcp->mtu )
        goto LABEL_27;
    }
    ikcp_output(kcp, buffer, v16);
    v3 = buffer;
LABEL_27:
    ikcp_ack_get(kcp, (int)v2, (IUINT32 *)(v145 + 88), (IUINT32 *)(v145 + 84));
    v3 = ikcp_encode_seg(v3, (const IKCPSEG_0 *)(v145 + 48));
    if ( ikcp_canlog(kcp, 512) )
      ikcp_log(
        kcp,
        512,
        "output ack: sn=%lu ts=%ld una=%lu wnd=%lu",
        *(unsigned int *)(v145 + 88),
        *(unsigned int *)(v145 + 84),
        *(unsigned int *)(v145 + 92),
        *(unsigned int *)(v145 + 80));
    v2 = (IKCPSEG_0 *)(unsigned int)((_DWORD)v2 + 1);
  }
  v18 = lost;
  p_ackcount = &kcp->ackcount;
  v20 = *(_BYTE *)(((unsigned __int64)&kcp->ackcount >> 3) + 0x7FFF8000);
  if ( v20 && v20 <= 3 )
  {
    __asan_report_store4(p_ackcount);
LABEL_49:
    __asan_report_load4(p_ackcount);
LABEL_50:
    __asan_report_load4(p_ackcount);
LABEL_51:
    __asan_report_load4(p_ackcount);
LABEL_52:
    probe_wait = __asan_report_store4(p_ackcount);
    goto LABEL_53;
  }
  kcp->ackcount = 0;
  p_ackcount = &kcp->rmt_wnd;
  v21 = *(_BYTE *)(((unsigned __int64)&kcp->rmt_wnd >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 68) & 7) + 3) >= v21 && v21 )
    goto LABEL_49;
  if ( kcp->rmt_wnd )
    goto LABEL_68;
  p_ackcount = &kcp->probe_wait;
  v22 = *(_BYTE *)(((unsigned __int64)&kcp->probe_wait >> 3) + 0x7FFF8000);
  if ( v22 && v22 <= 3 )
    goto LABEL_50;
  probe_wait = kcp->probe_wait;
  if ( probe_wait )
  {
LABEL_53:
    p_ts_probe = &kcp->ts_probe;
    v27 = *(_BYTE *)(((unsigned __int64)&kcp->ts_probe >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp - 100) & 7) + 3) >= v27 && v27 )
    {
      __asan_report_load4(p_ts_probe);
    }
    else
    {
      p_ts_probe = &kcp->current;
      v28 = *(_BYTE *)(((unsigned __int64)&kcp->current >> 3) + 0x7FFF8000);
      if ( !v28 || v28 > 3 )
      {
        v29 = kcp->current;
        if ( (int)(v29 - kcp->ts_probe) < 0 )
          goto LABEL_73;
        if ( probe_wait <= 0x1B57 )
          kcp->probe_wait = 7000;
        v30 = (kcp->probe_wait >> 1) + kcp->probe_wait;
        kcp->probe_wait = v30;
        if ( v30 > 0x1D4C0 )
          kcp->probe_wait = 120000;
        kcp->ts_probe = kcp->probe_wait + v29;
        p_ts_probe = &kcp->probe;
        v31 = *(_BYTE *)(((unsigned __int64)&kcp->probe >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)kcp + 76) & 7) + 3) < v31 || !v31 )
        {
          kcp->probe |= 1u;
          goto LABEL_73;
        }
        goto LABEL_67;
      }
    }
    __asan_report_load4(p_ts_probe);
LABEL_67:
    __asan_report_load4(p_ts_probe);
LABEL_68:
    p_probe_wait = &kcp->ts_probe;
    v33 = *(_BYTE *)(((unsigned __int64)&kcp->ts_probe >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp - 100) & 7) + 3) >= v33 && v33 )
    {
      __asan_report_store4(p_probe_wait);
    }
    else
    {
      kcp->ts_probe = 0;
      p_probe_wait = &kcp->probe_wait;
      v34 = *(_BYTE *)(((unsigned __int64)&kcp->probe_wait >> 3) + 0x7FFF8000);
      if ( !v34 || v34 > 3 )
      {
        kcp->probe_wait = 0;
        goto LABEL_73;
      }
    }
    __asan_report_store4(p_probe_wait);
LABEL_107:
    __asan_report_load4(p_probe_wait);
LABEL_108:
    __asan_report_load4(p_probe_wait);
    goto LABEL_109;
  }
  kcp->probe_wait = 7000;
  p_ackcount = &kcp->current;
  v24 = *(_BYTE *)(((unsigned __int64)&kcp->current >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
    goto LABEL_51;
  p_ackcount = &kcp->ts_probe;
  v25 = *(_BYTE *)(((unsigned __int64)&kcp->ts_probe >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp - 100) & 7) + 3) >= v25 && v25 )
    goto LABEL_52;
  kcp->ts_probe = kcp->current + 7000;
LABEL_73:
  p_probe_wait = &kcp->probe;
  v35 = *(_BYTE *)(((unsigned __int64)&kcp->probe >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 76) & 7) + 3) >= v35 && v35 )
    goto LABEL_107;
  if ( (kcp->probe & 1) == 0 )
    goto LABEL_81;
  *(_DWORD *)(v145 + 72) = 83;
  v36 = (_DWORD)v3 - (_DWORD)buffer;
  p_probe_wait = &kcp->mtu;
  v37 = *(_BYTE *)(((unsigned __int64)&kcp->mtu >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 4) & 7) + 3) >= v37 && v37 )
    goto LABEL_108;
  if ( (int)v3 - (int)buffer + 27 >= (signed int)kcp->mtu )
  {
LABEL_109:
    ikcp_output(kcp, buffer, v36);
    v3 = buffer;
  }
  v3 = ikcp_encode_seg(v3, (const IKCPSEG_0 *)(v145 + 48));
  if ( ikcp_canlog(kcp, 1024) )
    ikcp_log(kcp, 1024, "output probe, una=%lu wnd=%lu", *(unsigned int *)(v145 + 92), *(unsigned int *)(v145 + 80));
LABEL_81:
  p_probe = &kcp->probe;
  v39 = *(_BYTE *)(((unsigned __int64)&kcp->probe >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 76) & 7) + 3) >= v39 && v39 )
  {
    __asan_report_load4(p_probe);
LABEL_111:
    __asan_report_load4(p_probe);
    goto LABEL_112;
  }
  if ( (kcp->probe & 2) == 0 )
    goto LABEL_89;
  *(_DWORD *)(v145 + 72) = 84;
  v40 = (_DWORD)v3 - (_DWORD)buffer;
  p_probe = &kcp->mtu;
  v41 = *(_BYTE *)(((unsigned __int64)&kcp->mtu >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 4) & 7) + 3) >= v41 && v41 )
    goto LABEL_111;
  if ( (int)v3 - (int)buffer + 27 >= (signed int)kcp->mtu )
  {
LABEL_112:
    ikcp_output(kcp, buffer, v40);
    v3 = buffer;
  }
  v3 = ikcp_encode_seg(v3, (const IKCPSEG_0 *)(v145 + 48));
  if ( ikcp_canlog(kcp, 2048) )
    ikcp_log(kcp, 2048, "output una=%lu wnd=%lu", *(unsigned int *)(v145 + 92), *(unsigned int *)(v145 + 80));
LABEL_89:
  p_rmt_wnd = &kcp->probe;
  v43 = *(_BYTE *)(((unsigned __int64)&kcp->probe >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 76) & 7) + 3) >= v43 && v43 )
  {
    __asan_report_store4(p_rmt_wnd);
LABEL_114:
    __asan_report_load4(p_rmt_wnd);
LABEL_115:
    __asan_report_load4(p_rmt_wnd);
LABEL_116:
    __asan_report_load4(p_rmt_wnd);
    goto LABEL_117;
  }
  kcp->probe = 0;
  p_rmt_wnd = &kcp->rmt_wnd;
  v44 = *(_BYTE *)(((unsigned __int64)&kcp->rmt_wnd >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 68) & 7) + 3) >= v44 && v44 )
    goto LABEL_114;
  rmt_wnd = kcp->rmt_wnd;
  p_rmt_wnd = &kcp->snd_wnd;
  v45 = *(_BYTE *)(((unsigned __int64)&kcp->snd_wnd >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 60) & 7) + 3) >= v45 && v45 )
    goto LABEL_115;
  if ( rmt_wnd >= kcp->snd_wnd )
    rmt_wnd = kcp->snd_wnd;
  p_rmt_wnd = &kcp->nocwnd;
  v46 = *(_BYTE *)(((unsigned __int64)&kcp->nocwnd >> 3) + 0x7FFF8000);
  if ( v46 && v46 <= 3 )
    goto LABEL_116;
  if ( kcp->nocwnd )
  {
LABEL_118:
    v48 = rmt_wnd;
    goto LABEL_146;
  }
  p_rmt_wnd = &kcp->cwnd;
  v47 = *(_BYTE *)(((unsigned __int64)&kcp->cwnd >> 3) + 0x7FFF8000);
  if ( v47 && v47 <= 3 )
  {
LABEL_117:
    __asan_report_load4(p_rmt_wnd);
    goto LABEL_118;
  }
  if ( kcp->cwnd <= rmt_wnd )
    rmt_wnd = kcp->cwnd;
  v48 = rmt_wnd;
LABEL_146:
  while ( 2 )
  {
    p_snd_una = (unsigned __int64)&kcp->snd_una;
    v51 = *(_BYTE *)(((unsigned __int64)&kcp->snd_una >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp + 20) & 7) + 3) >= v51 && v51 )
    {
      __asan_report_load4(p_snd_una);
LABEL_121:
      __asan_report_load4(p_snd_una);
LABEL_122:
      __asan_report_load8(p_snd_una);
LABEL_123:
      __asan_report_load8(p_snd_una);
LABEL_124:
      __asan_report_load8(p_snd_una);
LABEL_125:
      __asan_report_store8();
LABEL_126:
      __asan_report_store8();
LABEL_127:
      __asan_report_load8(p_snd_una);
LABEL_128:
      __asan_report_store8();
LABEL_129:
      __asan_report_load4(p_snd_una);
LABEL_130:
      __asan_report_load4(p_snd_una);
LABEL_131:
      __asan_report_load4(p_snd_una);
LABEL_132:
      __asan_report_store4(p_snd_una);
LABEL_133:
      __asan_report_load4(p_snd_una);
LABEL_134:
      __asan_report_store4(p_snd_una);
LABEL_135:
      __asan_report_store4(p_snd_una);
LABEL_136:
      __asan_report_store4(p_snd_una);
LABEL_137:
      __asan_report_store4(p_snd_una);
LABEL_138:
      __asan_report_store4(p_snd_una);
LABEL_139:
      __asan_report_load4(p_snd_una);
LABEL_140:
      __asan_report_store4(p_snd_una);
LABEL_141:
      __asan_report_store4(p_snd_una);
LABEL_142:
      __asan_report_load4(p_snd_una);
LABEL_143:
      __asan_report_store4(p_snd_una);
LABEL_144:
      next = __asan_report_store4(p_snd_una);
LABEL_145:
      *(_DWORD *)(next + 64) = 0;
      continue;
    }
    break;
  }
  p_snd_una = (unsigned __int64)&kcp->snd_nxt;
  v52 = *(_BYTE *)(((unsigned __int64)&kcp->snd_nxt >> 3) + 0x7FFF8000);
  if ( v52 && v52 <= 3 )
    goto LABEL_121;
  if ( (int)(kcp->snd_nxt - (kcp->snd_una + v48)) >= 0 )
    goto LABEL_194;
  p_snd_una = (unsigned __int64)&kcp->snd_queue;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->snd_queue >> 3) + 0x7FFF8000) )
    goto LABEL_122;
  next = (unsigned __int64)kcp->snd_queue.next;
  if ( &kcp->snd_queue == (IQUEUEHEAD *)next )
    goto LABEL_194;
  p_snd_una = (unsigned __int64)kcp->snd_queue.next;
  if ( *(_BYTE *)((next >> 3) + 0x7FFF8000) )
    goto LABEL_123;
  v53 = *(IQUEUEHEAD **)next;
  p_snd_una = next + 8;
  if ( *(_BYTE *)(((next + 8) >> 3) + 0x7FFF8000) )
    goto LABEL_124;
  v54 = *(_QWORD *)(next + 8);
  p_snd_una = (unsigned __int64)&v53->prev;
  if ( *(_BYTE *)(((unsigned __int64)&v53->prev >> 3) + 0x7FFF8000) )
    goto LABEL_125;
  v53->prev = (IQUEUEHEAD *)v54;
  p_snd_una = v54;
  if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
    goto LABEL_126;
  *(_QWORD *)v54 = *(_QWORD *)next;
  *(_QWORD *)next = 0LL;
  *(_QWORD *)(next + 8) = 0LL;
  p_snd_una = (unsigned __int64)&kcp->snd_buf.prev;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->snd_buf.prev >> 3) + 0x7FFF8000) )
    goto LABEL_127;
  *(_QWORD *)(next + 8) = kcp->snd_buf.prev;
  *(_QWORD *)next = &kcp->snd_buf;
  p_snd_una = (unsigned __int64)kcp->snd_buf.prev;
  if ( *(_BYTE *)((p_snd_una >> 3) + 0x7FFF8000) )
    goto LABEL_128;
  kcp->snd_buf.prev->next = (IQUEUEHEAD *)next;
  kcp->snd_buf.prev = (IQUEUEHEAD *)next;
  p_snd_una = (unsigned __int64)&kcp->nsnd_que;
  v55 = *(_BYTE *)(((unsigned __int64)&kcp->nsnd_que >> 3) + 0x7FFF8000);
  if ( v55 && v55 <= 3 )
    goto LABEL_129;
  --kcp->nsnd_que;
  p_snd_una = (unsigned __int64)&kcp->nsnd_buf;
  v56 = *(_BYTE *)(((unsigned __int64)&kcp->nsnd_buf >> 3) + 0x7FFF8000);
  if ( v56 && v56 <= 3 )
    goto LABEL_130;
  ++kcp->nsnd_buf;
  p_snd_una = (unsigned __int64)kcp;
  v57 = *(_BYTE *)(((unsigned __int64)kcp >> 3) + 0x7FFF8000);
  if ( v57 && v57 <= 3 )
    goto LABEL_131;
  p_snd_una = next + 16;
  v58 = *(_BYTE *)(((next + 16) >> 3) + 0x7FFF8000);
  if ( v58 && v58 <= 3 )
    goto LABEL_132;
  *(_DWORD *)(next + 16) = kcp->conv;
  p_snd_una = (unsigned __int64)&kcp->token;
  v59 = *(_BYTE *)(((unsigned __int64)&kcp->token >> 3) + 0x7FFF8000);
  if ( v59 && v59 <= 3 )
    goto LABEL_133;
  p_snd_una = next + 20;
  v60 = *(_BYTE *)(((next + 20) >> 3) + 0x7FFF8000);
  if ( (char)(((next + 20) & 7) + 3) >= v60 && v60 )
    goto LABEL_134;
  *(_DWORD *)(next + 20) = kcp->token;
  p_snd_una = next + 24;
  v61 = *(_BYTE *)(((next + 24) >> 3) + 0x7FFF8000);
  if ( v61 && v61 <= 3 )
    goto LABEL_135;
  *(_DWORD *)(next + 24) = 81;
  p_snd_una = next + 32;
  v62 = *(_BYTE *)(((next + 32) >> 3) + 0x7FFF8000);
  if ( v62 && v62 <= 3 )
    goto LABEL_136;
  *(_DWORD *)(next + 32) = *(_DWORD *)(v145 + 80);
  p_snd_una = next + 36;
  v63 = *(_BYTE *)(((next + 36) >> 3) + 0x7FFF8000);
  if ( (char)(((next + 36) & 7) + 3) >= v63 && v63 )
    goto LABEL_137;
  *(_DWORD *)(next + 36) = lost;
  snd_nxt = kcp->snd_nxt;
  kcp->snd_nxt = snd_nxt + 1;
  p_snd_una = next + 40;
  v65 = *(_BYTE *)(((next + 40) >> 3) + 0x7FFF8000);
  if ( v65 && v65 <= 3 )
    goto LABEL_138;
  *(_DWORD *)(next + 40) = snd_nxt;
  p_snd_una = (unsigned __int64)&kcp->rcv_nxt;
  v66 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_nxt >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 28) & 7) + 3) >= v66 && v66 )
    goto LABEL_139;
  p_snd_una = next + 44;
  v67 = *(_BYTE *)(((next + 44) >> 3) + 0x7FFF8000);
  if ( (char)(((next + 44) & 7) + 3) >= v67 && v67 )
    goto LABEL_140;
  *(_DWORD *)(next + 44) = kcp->rcv_nxt;
  p_snd_una = next + 52;
  v68 = *(_BYTE *)(((next + 52) >> 3) + 0x7FFF8000);
  if ( (char)(((next + 52) & 7) + 3) >= v68 && v68 )
    goto LABEL_141;
  *(_DWORD *)(next + 52) = lost;
  p_snd_una = (unsigned __int64)&kcp->rx_rto;
  v69 = *(_BYTE *)(((unsigned __int64)&kcp->rx_rto >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 52) & 7) + 3) >= v69 && v69 )
    goto LABEL_142;
  p_snd_una = next + 56;
  v70 = *(_BYTE *)(((next + 56) >> 3) + 0x7FFF8000);
  if ( v70 && v70 <= 3 )
    goto LABEL_143;
  *(_DWORD *)(next + 56) = kcp->rx_rto;
  p_snd_una = next + 60;
  v71 = *(_BYTE *)(((next + 60) >> 3) + 0x7FFF8000);
  if ( (char)(((next + 60) & 7) + 3) >= v71 && v71 )
    goto LABEL_144;
  *(_DWORD *)(next + 60) = 0;
  v72 = *(_BYTE *)(((next + 64) >> 3) + 0x7FFF8000);
  if ( !v72 || v72 > 3 )
    goto LABEL_145;
  __asan_report_store4(next + 64);
LABEL_194:
  v73 = *(_BYTE *)(((unsigned __int64)&kcp->fastresend >> 3) + 0x7FFF8000);
  if ( v73 && v73 <= 3 )
  {
    __asan_report_load4(&kcp->fastresend);
    goto LABEL_207;
  }
  if ( kcp->fastresend <= 0 )
  {
LABEL_207:
    resent = -1;
    goto LABEL_198;
  }
  resent = kcp->fastresend;
LABEL_198:
  p_nodelay = &kcp->nodelay;
  v75 = *(_BYTE *)(((unsigned __int64)&kcp->nodelay >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp - 108) & 7) + 3) >= v75 && v75 )
  {
    __asan_report_load4(p_nodelay);
    goto LABEL_209;
  }
  if ( !kcp->nodelay )
  {
    p_nodelay = &kcp->rx_rto;
    v76 = *(_BYTE *)(((unsigned __int64)&kcp->rx_rto >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)kcp + 52) & 7) + 3) < v76 || !v76 )
    {
      rtomina = kcp->rx_rto >> 3;
      goto LABEL_204;
    }
LABEL_209:
    __asan_report_load4(p_nodelay);
  }
  rtomina = 0;
LABEL_204:
  p_snd_buf = &kcp->snd_buf;
  if ( *(_BYTE *)(((unsigned __int64)&kcp->snd_buf >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_snd_buf);
    goto LABEL_212;
  }
  v2 = (IKCPSEG_0 *)kcp->snd_buf.next;
  lost = 0;
  change = 0;
  while ( 2 )
  {
    if ( &kcp->snd_buf != (IQUEUEHEAD *)v2 )
    {
      p_snd_buf = &v2->xmit;
      v105 = *(_BYTE *)(((unsigned __int64)&v2->xmit >> 3) + 0x7FFF8000);
      if ( v105 && v105 <= 3 )
      {
LABEL_212:
        __asan_report_load4(p_snd_buf);
      }
      else
      {
        xmit = v2->xmit;
        if ( xmit )
          goto LABEL_216;
        v2->xmit = 1;
        p_snd_buf = &kcp->rx_rto;
        v106 = *(_BYTE *)(((unsigned __int64)&kcp->rx_rto >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)kcp + 52) & 7) + 3) < v106 || !v106 )
        {
          rx_rto = kcp->rx_rto;
          p_snd_buf = &v2->rto;
          v108 = *(_BYTE *)(((unsigned __int64)&v2->rto >> 3) + 0x7FFF8000);
          if ( !v108 || v108 > 3 )
          {
            v2->rto = rx_rto;
            v109 = rtomina + v18 + rx_rto;
            p_snd_buf = &v2->resendts;
            v110 = *(_BYTE *)(((unsigned __int64)&v2->resendts >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v2 + 52) & 7) + 3) < v110 || !v110 )
            {
              v2->resendts = v109;
              v88 = 1;
LABEL_304:
              if ( !v88 )
                goto LABEL_291;
              p_ts = &v2->ts;
              v112 = *(_BYTE *)(((unsigned __int64)&v2->ts >> 3) + 0x7FFF8000);
              if ( (char)((((_BYTE)v2 + 36) & 7) + 3) >= v112 && v112 )
              {
                __asan_report_store4(p_ts);
              }
              else
              {
                v2->ts = v18;
                p_ts = &v2->wnd;
                v113 = *(_BYTE *)(((unsigned __int64)&v2->wnd >> 3) + 0x7FFF8000);
                if ( !v113 || v113 > 3 )
                {
                  v2->wnd = *(_DWORD *)(v145 + 80);
                  p_ts = &kcp->rcv_nxt;
                  v114 = *(_BYTE *)(((unsigned __int64)&kcp->rcv_nxt >> 3) + 0x7FFF8000);
                  if ( (char)((((_BYTE)kcp + 28) & 7) + 3) < v114 || !v114 )
                  {
                    p_ts = &v2->una;
                    v115 = *(_BYTE *)(((unsigned __int64)&v2->una >> 3) + 0x7FFF8000);
                    if ( (char)((((_BYTE)v2 + 44) & 7) + 3) < v115 || !v115 )
                    {
                      v2->una = kcp->rcv_nxt;
                      v96 = (_DWORD)v3 - (_DWORD)buffer;
                      p_ts = &v2->len;
                      v116 = *(_BYTE *)(((unsigned __int64)&v2->len >> 3) + 0x7FFF8000);
                      if ( !v116 || v116 > 3 )
                      {
                        p_ts = &kcp->mtu;
                        v117 = *(_BYTE *)(((unsigned __int64)&kcp->mtu >> 3) + 0x7FFF8000);
                        if ( (char)((((_BYTE)kcp + 4) & 7) + 3) < v117 || !v117 )
                        {
                          if ( (signed int)(v2->len + v96 + 28) <= (signed int)kcp->mtu )
                          {
LABEL_318:
                            v3 = ikcp_encode_seg(v3, v2);
                            if ( !ikcp_canlog(kcp, 256) )
                              goto LABEL_319;
                            p_wnd = &v2->wnd;
                            v98 = *(_BYTE *)(((unsigned __int64)&v2->wnd >> 3) + 0x7FFF8000);
                            if ( v98 && v98 <= 3 )
                            {
                              __asan_report_load4(p_wnd);
                            }
                            else
                            {
                              p_wnd = &v2->una;
                              v99 = *(_BYTE *)(((unsigned __int64)&v2->una >> 3) + 0x7FFF8000);
                              if ( (char)((((_BYTE)v2 + 44) & 7) + 3) < v99 || !v99 )
                              {
                                p_wnd = &v2->ts;
                                v100 = *(_BYTE *)(((unsigned __int64)&v2->ts >> 3) + 0x7FFF8000);
                                if ( (char)((((_BYTE)v2 + 36) & 7) + 3) < v100 || !v100 )
                                {
                                  p_wnd = &v2->sn;
                                  v101 = *(_BYTE *)(((unsigned __int64)&v2->sn >> 3) + 0x7FFF8000);
                                  if ( !v101 || v101 > 3 )
                                  {
                                    ikcp_log(
                                      kcp,
                                      256,
                                      "output psh: sn=%lu ts=%lu una=%lu wnd=%lu",
                                      v2->sn,
                                      v2->ts,
                                      v2->una,
                                      v2->wnd);
LABEL_319:
                                    p_wnd = &v2->len;
                                    v118 = *(_BYTE *)(((unsigned __int64)&v2->len >> 3) + 0x7FFF8000);
                                    if ( !v118 || v118 > 3 )
                                    {
                                      len = v2->len;
                                      if ( !len )
                                        goto LABEL_322;
                                      goto LABEL_284;
                                    }
LABEL_283:
                                    __asan_report_load4(p_wnd);
LABEL_284:
                                    memcpy(v3, v2->data, len);
                                    v3 += v2->len;
LABEL_322:
                                    p_xmit = &v2->xmit;
                                    v120 = *(_BYTE *)(((unsigned __int64)&v2->xmit >> 3) + 0x7FFF8000);
                                    if ( v120 && v120 <= 3 )
                                    {
                                      __asan_report_load4(p_xmit);
                                    }
                                    else
                                    {
                                      p_xmit = &kcp->dead_link;
                                      v121 = *(_BYTE *)(((unsigned __int64)&kcp->dead_link >> 3) + 0x7FFF8000);
                                      if ( (char)((((_BYTE)kcp - 92) & 7) + 3) < v121 || !v121 )
                                      {
                                        if ( v2->xmit >= kcp->dead_link )
                                        {
                                          p_state = &kcp->state;
                                          v122 = *(_BYTE *)(((unsigned __int64)&kcp->state >> 3) + 0x7FFF8000);
                                          if ( (char)((((_BYTE)kcp + 12) & 7) + 3) >= v122 && v122 )
                                          {
                                            __asan_report_store4(p_state);
LABEL_330:
                                            __asan_report_load4(p_state);
LABEL_331:
                                            __asan_report_load8(p_state);
                                            break;
                                          }
LABEL_287:
                                          kcp->state = -1;
                                        }
                                        p_state = &kcp->pkts_sent;
                                        v104 = *(_BYTE *)(((unsigned __int64)&kcp->pkts_sent >> 3) + 0x7FFF8000);
                                        if ( v104 && v104 <= 3 )
                                          goto LABEL_330;
                                        ++kcp->pkts_sent;
LABEL_291:
                                        p_state = (IUINT32 *)v2;
                                        if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
                                          goto LABEL_331;
                                        v2 = (IKCPSEG_0 *)v2->node.next;
                                        continue;
                                      }
                                    }
                                    __asan_report_load4(p_xmit);
                                    goto LABEL_287;
                                  }
LABEL_282:
                                  __asan_report_load4(p_wnd);
                                  goto LABEL_283;
                                }
LABEL_281:
                                __asan_report_load4(p_wnd);
                                goto LABEL_282;
                              }
                            }
                            __asan_report_load4(p_wnd);
                            goto LABEL_281;
                          }
LABEL_269:
                          ikcp_output(kcp, buffer, v96);
                          v3 = buffer;
                          goto LABEL_318;
                        }
LABEL_268:
                        __asan_report_load4(p_ts);
                        goto LABEL_269;
                      }
LABEL_267:
                      __asan_report_load4(p_ts);
                      goto LABEL_268;
                    }
LABEL_266:
                    __asan_report_store4(p_ts);
                    goto LABEL_267;
                  }
LABEL_265:
                  __asan_report_load4(p_ts);
                  goto LABEL_266;
                }
              }
              __asan_report_store4(p_ts);
              goto LABEL_265;
            }
LABEL_215:
            xmit = __asan_report_store4(p_snd_buf);
LABEL_216:
            p_resendts = &v2->resendts;
            v80 = *(_BYTE *)(((unsigned __int64)&v2->resendts >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v2 + 52) & 7) + 3) >= v80 && v80 )
            {
              __asan_report_load4(p_resendts);
            }
            else
            {
              if ( (signed int)(v18 - v2->resendts) < 0 )
                goto LABEL_248;
              v2->xmit = xmit + 1;
              p_resendts = &kcp->xmit;
              v81 = *(_BYTE *)(((unsigned __int64)&kcp->xmit >> 3) + 0x7FFF8000);
              if ( (char)((((_BYTE)kcp + 92) & 7) + 3) < v81 || !v81 )
              {
                ++kcp->xmit;
                p_resendts = &kcp->nodelay;
                v82 = *(_BYTE *)(((unsigned __int64)&kcp->nodelay >> 3) + 0x7FFF8000);
                if ( (char)((((_BYTE)kcp - 108) & 7) + 3) < v82 || !v82 )
                {
                  if ( kcp->nodelay )
                    goto LABEL_239;
                  p_resendts = &v2->rto;
                  v83 = *(_BYTE *)(((unsigned __int64)&v2->rto >> 3) + 0x7FFF8000);
                  if ( !v83 || v83 > 3 )
                  {
                    p_resendts = &kcp->rx_rto;
                    v84 = *(_BYTE *)(((unsigned __int64)&kcp->rx_rto >> 3) + 0x7FFF8000);
                    if ( (char)((((_BYTE)kcp + 52) & 7) + 3) < v84 || !v84 )
                    {
                      v2->rto += kcp->rx_rto;
LABEL_229:
                      p_rto = &v2->rto;
                      v86 = *(_BYTE *)(((unsigned __int64)&v2->rto >> 3) + 0x7FFF8000);
                      if ( !v86 || v86 > 3 )
                      {
                        v2->resendts = v2->rto + v18;
                        p_rto = &kcp->pkts_lost;
                        v87 = *(_BYTE *)(((unsigned __int64)&kcp->pkts_lost >> 3) + 0x7FFF8000);
                        if ( (char)((((_BYTE)kcp + 100) & 7) + 3) < v87 || !v87 )
                        {
                          ++kcp->pkts_lost;
                          v88 = 1;
                          lost = 1;
                          goto LABEL_304;
                        }
LABEL_247:
                        xmit = __asan_report_load4(p_rto);
LABEL_248:
                        p_fastack = (int *)&v2->fastack;
                        v92 = *(_BYTE *)(((unsigned __int64)&v2->fastack >> 3) + 0x7FFF8000);
                        if ( (char)((((_BYTE)v2 + 60) & 7) + 3) >= v92 && v92 )
                        {
                          __asan_report_load4(p_fastack);
                        }
                        else
                        {
                          if ( v2->fastack < resent )
                            goto LABEL_262;
                          p_fastack = &kcp->fastlimit;
                          v93 = *(_BYTE *)(((unsigned __int64)&kcp->fastlimit >> 3) + 0x7FFF8000);
                          if ( (char)((((_BYTE)kcp + 20) & 7) + 3) < v93 || !v93 )
                          {
                            fastlimit = kcp->fastlimit;
                            if ( xmit > fastlimit && fastlimit > 0 )
                            {
                              v88 = 0;
                              goto LABEL_304;
                            }
LABEL_258:
                            v2->xmit = xmit + 1;
                            v2->fastack = 0;
                            v95 = *(_BYTE *)(((unsigned __int64)&v2->rto >> 3) + 0x7FFF8000);
                            if ( !v95 || v95 > 3 )
                            {
                              v2->resendts = v2->rto + v18;
                              ++change;
                              v88 = 1;
                              goto LABEL_304;
                            }
                            __asan_report_load4(&v2->rto);
LABEL_262:
                            v88 = 0;
                            goto LABEL_304;
                          }
                        }
                        xmit = __asan_report_load4(p_fastack);
                        goto LABEL_258;
                      }
LABEL_246:
                      __asan_report_load4(p_rto);
                      goto LABEL_247;
                    }
LABEL_238:
                    __asan_report_load4(p_resendts);
LABEL_239:
                    p_rto = &v2->rto;
                    v89 = *(_BYTE *)(((unsigned __int64)&v2->rto >> 3) + 0x7FFF8000);
                    if ( v89 && v89 <= 3 )
                    {
                      __asan_report_load4(p_rto);
                    }
                    else
                    {
                      p_rto = &kcp->rx_rto;
                      v90 = *(_BYTE *)(((unsigned __int64)&kcp->rx_rto >> 3) + 0x7FFF8000);
                      if ( (char)((((_BYTE)kcp + 52) & 7) + 3) < v90 || !v90 )
                      {
                        v2->rto += kcp->rx_rto / 2;
                        goto LABEL_229;
                      }
                    }
                    __asan_report_load4(p_rto);
                    goto LABEL_246;
                  }
LABEL_237:
                  __asan_report_load4(p_resendts);
                  goto LABEL_238;
                }
LABEL_236:
                __asan_report_load4(p_resendts);
                goto LABEL_237;
              }
            }
            __asan_report_load4(p_resendts);
            goto LABEL_236;
          }
LABEL_214:
          __asan_report_store4(p_snd_buf);
          goto LABEL_215;
        }
      }
      __asan_report_load4(p_snd_buf);
      goto LABEL_214;
    }
    break;
  }
  if ( (int)v3 - (int)buffer > 0 )
    ikcp_output(kcp, buffer, (_DWORD)v3 - (_DWORD)buffer);
  if ( change )
  {
    p_snd_nxt = &kcp->snd_nxt;
    v124 = *(_BYTE *)(((unsigned __int64)&kcp->snd_nxt >> 3) + 0x7FFF8000);
    if ( v124 && v124 <= 3 )
    {
      __asan_report_load4(p_snd_nxt);
    }
    else
    {
      p_snd_nxt = &kcp->snd_una;
      v125 = *(_BYTE *)(((unsigned __int64)&kcp->snd_una >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)kcp + 20) & 7) + 3) < v125 || !v125 )
      {
        v126 = (kcp->snd_nxt - kcp->snd_una) >> 1;
        p_snd_nxt = &kcp->ssthresh;
        v127 = *(_BYTE *)(((unsigned __int64)&kcp->ssthresh >> 3) + 0x7FFF8000);
        if ( !v127 || v127 > 3 )
        {
          kcp->ssthresh = v126;
          if ( v126 > 1 )
          {
LABEL_342:
            v128 = kcp->ssthresh + resent;
            p_cwnd = &kcp->cwnd;
            v130 = *(_BYTE *)(((unsigned __int64)&kcp->cwnd >> 3) + 0x7FFF8000);
            if ( v130 && v130 <= 3 )
            {
              __asan_report_store4(p_cwnd);
            }
            else
            {
              kcp->cwnd = v128;
              p_cwnd = &kcp->mss;
              v131 = *(_BYTE *)(((unsigned __int64)&kcp->mss >> 3) + 0x7FFF8000);
              if ( !v131 || v131 > 3 )
              {
                v132 = kcp->mss * v128;
                p_cwnd = &kcp->incr;
                v133 = *(_BYTE *)(((unsigned __int64)&kcp->incr >> 3) + 0x7FFF8000);
                if ( !v133 || v133 > 3 )
                {
                  kcp->incr = v132;
                  goto LABEL_349;
                }
LABEL_376:
                __asan_report_store4(p_cwnd);
LABEL_377:
                __asan_report_store4(p_cwnd);
                goto LABEL_378;
              }
            }
            __asan_report_load4(p_cwnd);
            goto LABEL_376;
          }
LABEL_373:
          kcp->ssthresh = 2;
          goto LABEL_342;
        }
LABEL_372:
        __asan_report_store4(p_snd_nxt);
        goto LABEL_373;
      }
    }
    __asan_report_load4(p_snd_nxt);
    goto LABEL_372;
  }
LABEL_349:
  if ( lost )
  {
    v134 = rmt_wnd >> 1;
    p_cwnd = &kcp->ssthresh;
    v135 = *(_BYTE *)(((unsigned __int64)&kcp->ssthresh >> 3) + 0x7FFF8000);
    if ( v135 && v135 <= 3 )
      goto LABEL_377;
    kcp->ssthresh = v134;
    if ( v134 <= 1 )
LABEL_378:
      kcp->ssthresh = 2;
    p_mss = &kcp->cwnd;
    v137 = *(_BYTE *)(((unsigned __int64)&kcp->cwnd >> 3) + 0x7FFF8000);
    if ( v137 && v137 <= 3 )
    {
      __asan_report_store4(p_mss);
    }
    else
    {
      kcp->cwnd = 1;
      p_mss = &kcp->mss;
      v138 = *(_BYTE *)(((unsigned __int64)&kcp->mss >> 3) + 0x7FFF8000);
      if ( !v138 || v138 > 3 )
      {
        p_mss = &kcp->incr;
        v139 = *(_BYTE *)(((unsigned __int64)&kcp->incr >> 3) + 0x7FFF8000);
        if ( !v139 || v139 > 3 )
        {
          kcp->incr = kcp->mss;
          goto LABEL_360;
        }
LABEL_381:
        __asan_report_store4(p_mss);
LABEL_382:
        __asan_report_load4(p_mss);
LABEL_383:
        __asan_report_load4(p_mss);
        goto LABEL_384;
      }
    }
    __asan_report_load4(p_mss);
    goto LABEL_381;
  }
LABEL_360:
  p_mss = &kcp->cwnd;
  v140 = *(_BYTE *)(((unsigned __int64)&kcp->cwnd >> 3) + 0x7FFF8000);
  if ( v140 && v140 <= 3 )
    goto LABEL_382;
  if ( kcp->cwnd )
  {
LABEL_368:
    v143 = (_QWORD *)v145;
    if ( v152 != (char *)v145 )
      goto LABEL_385;
    *(_QWORD *)((v145 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v145 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    kcp->cwnd = 1;
    p_mss = &kcp->mss;
    v141 = *(_BYTE *)(((unsigned __int64)&kcp->mss >> 3) + 0x7FFF8000);
    if ( v141 && v141 <= 3 )
      goto LABEL_383;
    p_mss = &kcp->incr;
    v142 = *(_BYTE *)(((unsigned __int64)&kcp->incr >> 3) + 0x7FFF8000);
    if ( !v142 || v142 > 3 )
    {
      kcp->incr = kcp->mss;
      goto LABEL_368;
    }
LABEL_384:
    __asan_report_store4(p_mss);
LABEL_385:
    *v143 = 1172321806LL;
    *(_QWORD *)((v145 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v145 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v145 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1249: range 0000000019FD3A2A-0000000019FD44C0
void __fastcall ikcp_update_bandwidth(ikcpcb *kcp)
{
  ikcpcb *bandwith_epoch; // rsi
  char v2; // al
  IUINT32 *p_current; // rdx
  char v4; // al
  IUINT32 current; // ecx
  unsigned int v6; // edx
  IUINT32 *p_rx_bytes; // rdx
  char v8; // al
  IUINT32 *p_tx_bytes; // rdx
  IUINT32 *v10; // rdx
  char v11; // al
  IUINT32 *p_rx_bandwidth; // r8
  char v13; // dl
  IUINT32 *v14; // rdx
  char v15; // r8
  IUINT32 v16; // eax
  char v17; // r8

  v2 = *(_BYTE *)(((unsigned __int64)&kcp->bandwith_epoch >> 3) + 0x7FFF8000);
  if ( v2 && v2 <= 3 )
  {
    __asan_report_load4(&kcp->bandwith_epoch);
LABEL_23:
    __asan_report_load4(p_current);
LABEL_24:
    __asan_report_store4(p_rx_bytes);
LABEL_25:
    __asan_report_store4(p_tx_bytes);
LABEL_26:
    __asan_report_load4(v10);
LABEL_27:
    __asan_report_store4(p_rx_bandwidth);
LABEL_28:
    __asan_report_load4(v14);
LABEL_29:
    __asan_report_store4(bandwith_epoch);
    ikcp_update_pktloss(bandwith_epoch);
    return;
  }
  bandwith_epoch = (ikcpcb *)kcp->bandwith_epoch;
  p_current = &kcp->current;
  v4 = *(_BYTE *)(((unsigned __int64)&kcp->current >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
    goto LABEL_23;
  current = kcp->current;
  v6 = current - (_DWORD)bandwith_epoch;
  if ( current - (unsigned int)bandwith_epoch + 10000 <= 0x4E1F )
    goto LABEL_11;
  kcp->bandwith_epoch = current;
  p_rx_bytes = &kcp->rx_bytes;
  v8 = *(_BYTE *)(((unsigned __int64)&kcp->rx_bytes >> 3) + 0x7FFF8000);
  if ( v8 && v8 <= 3 )
    goto LABEL_24;
  kcp->rx_bytes = 0;
  p_tx_bytes = &kcp->tx_bytes;
  bandwith_epoch = (ikcpcb *)*(unsigned __int8 *)(((unsigned __int64)&kcp->tx_bytes >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 116) & 7) + 3) >= (char)bandwith_epoch && (_BYTE)bandwith_epoch )
    goto LABEL_25;
  kcp->tx_bytes = 0;
  v6 = 0;
LABEL_11:
  bandwith_epoch = (ikcpcb *)v6;
  if ( v6 <= 0x3E7 )
    return;
  v10 = &kcp->rx_bytes;
  v11 = *(_BYTE *)(((unsigned __int64)&kcp->rx_bytes >> 3) + 0x7FFF8000);
  if ( v11 && v11 <= 3 )
    goto LABEL_26;
  p_rx_bandwidth = &kcp->rx_bandwidth;
  v13 = *(_BYTE *)(((unsigned __int64)&kcp->rx_bandwidth >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_27;
  kcp->rx_bandwidth = 1000 * kcp->rx_bytes / (unsigned int)bandwith_epoch;
  v14 = &kcp->tx_bytes;
  v15 = *(_BYTE *)(((unsigned __int64)&kcp->tx_bytes >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 116) & 7) + 3) >= v15 && v15 )
    goto LABEL_28;
  v16 = 1000 * kcp->tx_bytes / (unsigned int)bandwith_epoch;
  bandwith_epoch = (ikcpcb *)&kcp->tx_bandwidth;
  v17 = *(_BYTE *)(((unsigned __int64)&kcp->tx_bandwidth >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)kcp + 124) & 7) + 3) >= v17 && v17 )
    goto LABEL_29;
  kcp->tx_bandwidth = v16;
  kcp->bandwith_epoch = current;
  kcp->rx_bytes = 0;
  kcp->tx_bytes = 0;
};
