// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/vio/viosocket.c

// Line 38: range 000000000CFB4A90-000000000CFB4A9F
int __fastcall vio_errno(Vio *vio)
{
  return *__errno_location();
};

// Line 44: range 000000000CFB4AA0-000000000CFB4AC6
size_t __fastcall vio_read(Vio *vio, uchar *buf, size_t size)
{
  *__errno_location() = 0;
  return read(vio->sd, buf, size);
};

// Line 75: range 000000000CFB4AD0-000000000CFB4BA1
size_t __fastcall vio_read_buff(Vio *vio, uchar *buf, size_t size)
{
  char *read_pos; // rsi
  char *read_end; // r12
  size_t v7; // r12
  char *read_buffer; // rsi
  size_t v10; // r12

  read_pos = vio->read_pos;
  read_end = vio->read_end;
  if ( read_pos < read_end )
  {
    v10 = read_end - read_pos;
    if ( size <= v10 )
      v10 = size;
    memcpy(buf, read_pos, v10);
    vio->read_pos += v10;
    return v10;
  }
  else if ( size > 0x7FF )
  {
    return vio_read(vio, buf, size);
  }
  else
  {
    v7 = vio_read(vio, (uchar *)vio->read_buffer, 0x4000uLL);
    if ( v7 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      read_buffer = vio->read_buffer;
      if ( size < v7 )
      {
        vio->read_end = &read_buffer[v7];
        v7 = size;
        vio->read_pos = &read_buffer[size];
      }
      memcpy(buf, read_buffer, v7);
    }
    return v7;
  }
};

// Line 115: range 000000000CFB4BB0-000000000CFB4BC1
my_bool __fastcall vio_buff_has_data(Vio *vio)
{
  return vio->read_pos != vio->read_end;
};

// Line 127: range 000000000CFB4BD0-000000000CFB4BD2
size_t __fastcall vio_write(Vio *vio, const uchar *buf, size_t size)
{
  return write(vio->sd, buf, size);
};

// Line 141: range 000000000CFB4BE0-000000000CFB4C42
int __fastcall vio_blocking(Vio *vio, my_bool set_blocking_mode, my_bool *old_mode)
{
  int sd; // edi
  int fcntl_mode; // ebp
  int v6; // edx
  int result; // eax

  *old_mode = (((unsigned int)vio->fcntl_mode >> 11) ^ 1) & 1;
  sd = vio->sd;
  if ( sd < 0 )
    return 0;
  fcntl_mode = vio->fcntl_mode;
  v6 = fcntl_mode;
  if ( !set_blocking_mode )
  {
    BYTE1(v6) = BYTE1(fcntl_mode) | 8;
    vio->fcntl_mode = v6;
    if ( fcntl_mode != v6 )
      goto LABEL_4;
    return 0;
  }
  BYTE1(v6) = BYTE1(fcntl_mode) & 0xF7;
  vio->fcntl_mode = v6;
  if ( fcntl_mode == v6 )
    return 0;
LABEL_4:
  result = fcntl(sd, 4);
  if ( result == -1 )
    vio->fcntl_mode = fcntl_mode;
  return result;
};

// Line 201: range 000000000CFB4C50-000000000CFB4C5C
my_bool __fastcall vio_is_blocking(Vio *vio)
{
  return (((unsigned int)vio->fcntl_mode >> 11) ^ 1) & 1;
};

// Line 208: range 000000000CFB4C60-000000000CFB4CD4
int __fastcall vio_fastsend(Vio *vio)
{
  int sd; // edi
  int v4; // edi
  int nodelay[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  sd = vio->sd;
  nodelay[0] = 8;
  if ( setsockopt(sd, 0, 1, nodelay, 4u) )
    return -1;
  v4 = vio->sd;
  nodelay[0] = 1;
  return -(setsockopt(v4, 6, 1, nodelay, 4u) != 0);
};

// Line 241: range 000000000CFB4CE0-000000000CFB4D36
int __fastcall vio_keepalive(Vio *vio, my_bool set_keep_alive)
{
  bool v2; // zf
  uint opt[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v2 = vio->type == VIO_TYPE_NAMEDPIPE;
  opt[0] = 0;
  if ( v2 )
    return 0;
  if ( set_keep_alive )
    opt[0] = 1;
  return setsockopt(vio->sd, 1, 9, opt, 4u);
};

// Line 260: range 000000000CFB4D40-000000000CFB4D76
my_bool __fastcall vio_should_retry(Vio *vio)
{
  int v1; // ebx
  my_bool v2; // dl
  my_bool is_blocking; // al

  v1 = *__errno_location();
  v2 = 1;
  if ( v1 != 4 )
  {
    is_blocking = vio_is_blocking(vio);
    v2 = 0;
    if ( !is_blocking )
      return v1 == 11;
  }
  return v2;
};

// Line 278: range 000000000CFB4D80-000000000CFB4D9D
my_bool __fastcall vio_was_interrupted(Vio *vio)
{
  int *v1; // rax

  v1 = __errno_location();
  return *v1 == 11 || *v1 == 4;
};

// Line 310: range 000000000CFB4DA0-000000000CFB4E04
// attributes: thunk
int __fastcall mysql_socket_shutdown(my_socket mysql_socket, int how)
{
  return shutdown(mysql_socket, how);
};

// Line 346: range 000000000CFB4E10-000000000CFB4E17
const char *__fastcall vio_description(Vio *vio)
{
  return vio->desc;
};

// Line 351: range 000000000CFB4E20-000000000CFB4E26
enum_vio_type __fastcall vio_type(Vio *vio)
{
  return vio->type;
};

// Line 356: range 000000000CFB4E30-000000000CFB4E32
my_socket __fastcall vio_fd(Vio *vio)
{
  return vio->sd;
};

// Line 462: range 000000000CFB4F90-000000000CFB4FDC
my_bool __fastcall vio_get_normalized_ip_string(
        const sockaddr *addr,
        int addr_length,
        char *ip_string,
        size_t ip_string_size)
{
  int norm_addr_length; // [rsp+Ch] [rbp-9Ch] BYREF
  sockaddr_storage norm_addr_storage; // [rsp+10h] [rbp-98h] BYREF

  vio_get_normalized_ip(addr, addr_length, (sockaddr *)&norm_addr_storage, &norm_addr_length);
  return vio_getnameinfo((const sockaddr *)&norm_addr_storage, ip_string, ip_string_size, 0LL, 0LL, 1) != 0;
};

// Line 495: range 000000000CFB4FE0-000000000CFB50E5
my_bool __fastcall vio_peer_addr(Vio *vio, char *ip_buffer, uint16 *port, size_t ip_buffer_size)
{
  int sd; // edi
  my_bool result; // al
  size_socket addr_length; // [rsp+Ch] [rbp-DCh] BYREF
  char port_buffer[32]; // [rsp+10h] [rbp-D8h] BYREF
  sockaddr_storage addr_storage; // [rsp+30h] [rbp-B8h] BYREF

  if ( vio->localhost )
  {
    vio->remote.ss_family = 2;
    vio->addrLen = 16;
    *(_DWORD *)&vio->remote.__ss_padding[2] = 16777343;
    strcpy(ip_buffer, "127.0.0.1");
    result = 0;
    *port = 0;
  }
  else
  {
    sd = vio->sd;
    addr_length = 128;
    if ( getpeername(sd, (struct sockaddr *)&addr_storage, &addr_length) )
      return 1;
    vio_get_normalized_ip((const sockaddr *)&addr_storage, addr_length, (sockaddr *)&vio->remote, &vio->addrLen);
    if ( vio_getnameinfo((const sockaddr *)&vio->remote, ip_buffer, ip_buffer_size, port_buffer, 0x20uLL, 3) )
    {
      return 1;
    }
    else
    {
      *port = strtol(port_buffer, 0LL, 10);
      return 0;
    }
  }
  return result;
};

// Line 665: range 000000000CFB4E40-000000000CFB4E89
my_bool __fastcall vio_poll_read(Vio *vio, uint timeout)
{
  int sd; // eax
  int v3; // eax
  struct pollfd v5; // [rsp+0h] [rbp-18h] BYREF

  sd = vio->sd;
  v5.revents = 0;
  v5.fd = sd;
  v5.events = 1;
  v3 = poll(&v5, 1uLL, 1000 * timeout);
  if ( v3 <= 0 )
    return v3 >= 0;
  else
    return (v5.revents & 0x19) == 0;
};

// Line 689: range 000000000CFB4E90-000000000CFB4EDF
my_bool __fastcall vio_is_connected(Vio *vio)
{
  uint bytes[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  return vio_poll_read(vio, 0) || ioctl(vio->sd, 0x541BuLL, bytes) < 0 || bytes[0] != 0;
};

// Line 724: range 000000000CFB4EE0-000000000CFB4F14
void __fastcall vio_timeout(Vio *vio, uint which, uint timeout)
{
  int sd; // edi
  timeval wait_timeout; // [rsp+0h] [rbp-18h] BYREF

  sd = vio->sd;
  wait_timeout.tv_sec = timeout;
  wait_timeout.tv_usec = 0LL;
  setsockopt(sd, 1, 21 - (which == 0), &wait_timeout, 0x10u);
};

// Line 1093: range 000000000CFB4F20-000000000CFB4F3D
ssize_t __fastcall vio_pending(Vio *vio)
{
  char *read_pos; // rcx
  ssize_t result; // rax

  read_pos = vio->read_pos;
  result = 0LL;
  if ( read_pos < vio->read_end )
    return vio->read_end - read_pos;
  return result;
};

// Line 1127: range 000000000CFB4F40-000000000CFB4F46
my_bool __fastcall vio_is_no_name_error(int err_code)
{
  return err_code == -2;
};

// Line 1146: range 000000000CFB4F50-000000000CFB4F8C
int __fastcall vio_getnameinfo(
        const sockaddr *sa,
        char *hostname,
        size_t hostname_size,
        char *port,
        size_t port_size,
        int flags)
{
  socklen_t v7; // esi

  v7 = 16;
  if ( sa->sa_family != 2 )
  {
    LOBYTE(v7) = 0;
    if ( sa->sa_family == 10 )
      v7 = 28;
  }
  return getnameinfo(sa, v7, hostname, hostname_size, port, port_size, flags);
};
