// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/kcp_client/src/kcp_socket.c

// Line 63: range 0000000000AB4085-0000000000AB40AA
int __fastcall kcp_socket_bind(KcpSocket socket, const KcpAddress *address)
{
  int addrlen; // eax

  addrlen = kcp_socket_get_addrlen(address);
  return bind(socket, (const struct sockaddr *)address, addrlen);
};

// Line 71: range 0000000000AB40AB-0000000000AB40EE
KcpSocket __fastcall kcp_socket_create(KcpAddress *address, int type)
{
  char v2; // al

  v2 = *(_BYTE *)(((unsigned __int64)address >> 3) + 0x7FFF8000);
  if ( !v2 || v2 > 1 )
    return socket(address->addr.ss_family, type, 0);
  __asan_report_load2(address);
  return GLOBAL__sub_I_00099_0_kcp_socket_c(address, type);
};
