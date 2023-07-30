// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_client/src/unix.c

// Line 86: range 0000000000AB40EF-0000000000AB40F4
int __cdecl kcp_socket_initialize()
{
  return 0;
};

// Line 91: range 0000000000AB40F5-0000000000AB4229
void __cdecl kcp_socket_deinitialize()
{
  ;
};

// Line 123: range 0000000000AB422B-0000000000AB43D1
int __fastcall kcp_socket_receive(KcpSocket socket, KcpAddress *address, KcpBuffer *buffers, size_t buffer_count)
{
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r13
  int v8; // ebp
  char v9; // al
  __int64 v10; // rax
  int *v11; // rax
  char v12; // cl
  char v14[184]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(128LL);
    if ( v10 )
      v6 = v10;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 56 10 msgHdr:124";
  *(_QWORD *)(v6 + 16) = kcp_socket_receive;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  memset((void *)(v6 + 32), 0, 0x38uLL);
  if ( address )
  {
    *(_QWORD *)(v6 + 32) = address;
    *(_DWORD *)(v6 + 40) = 128;
  }
  *(_QWORD *)(v6 + 48) = buffers;
  *(_QWORD *)(v6 + 56) = buffer_count;
  v8 = recvmsg(socket, (struct msghdr *)(v6 + 32), 0x4000);
  if ( v8 != -1 )
  {
    if ( !address )
      goto LABEL_17;
    v9 = *(_BYTE *)(((unsigned __int64)address >> 3) + 0x7FFF8000);
    if ( !v9 || v9 > 1 )
    {
      if ( address->addr.ss_family != 2 && address->addr.ss_family != 10 )
        v8 = -1;
      goto LABEL_17;
    }
LABEL_21:
    __asan_report_load2(address);
    goto LABEL_22;
  }
  v11 = __errno_location();
  v12 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)v11 & 7) + 3) >= v12 && v12 )
  {
    __asan_report_load4(v11);
    goto LABEL_21;
  }
  if ( *v11 == 11 )
    v8 = 0;
LABEL_17:
  if ( v14 != (char *)v6 )
  {
LABEL_22:
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    return v8;
  }
  *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  return v8;
};

// Line 162: range 0000000000AB43D3-0000000000AB4543
int __fastcall kcp_socket_send(KcpSocket socket, KcpAddress *address, KcpBuffer *buffers, size_t count)
{
  unsigned __int64 v6; // rbx
  _DWORD *v7; // r12
  int v8; // ebp
  __int64 v10; // rax
  int *v11; // rax
  char v12; // cl
  char v13[184]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v10 = __asan_stack_malloc_1(128LL);
    if ( v10 )
      v6 = v10;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 56 10 msgHdr:163";
  *(_QWORD *)(v6 + 16) = kcp_socket_send;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  memset((void *)(v6 + 32), 0, 0x38uLL);
  if ( address )
  {
    *(_QWORD *)(v6 + 32) = address;
    *(_DWORD *)(v6 + 40) = 128;
  }
  *(_QWORD *)(v6 + 48) = buffers;
  *(_QWORD *)(v6 + 56) = count;
  v8 = sendmsg(socket, (const struct msghdr *)(v6 + 32), 0x4000);
  if ( v8 == -1 )
  {
    v11 = __errno_location();
    v12 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v11 & 7) + 3) >= v12 && v12 )
    {
      __asan_report_load4(v11);
      goto LABEL_15;
    }
    if ( *v11 == 11 )
      v8 = 0;
  }
  if ( v13 != (char *)v6 )
  {
LABEL_15:
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    return v8;
  }
  *(_DWORD *)((v6 >> 3) + 0x7FFF8000) = 0;
  *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  return v8;
};

// Line 192: range 0000000000AB4548-0000000000AB455B
void __fastcall kcp_socket_close(KcpSocket socket)
{
  if ( socket != -1 )
    close(socket);
};
