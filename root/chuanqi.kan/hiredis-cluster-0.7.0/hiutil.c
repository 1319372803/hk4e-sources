// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiutil.c

// Line 55: range 000000000CAC01A0-000000000CAC01D1
int __fastcall hi_set_blocking(int sd)
{
  int result; // eax

  result = fcntl(sd, 3, 0LL);
  if ( result >= 0 )
  {
    BYTE1(result) &= ~8u;
    return fcntl(sd, 4, (unsigned int)result);
  }
  return result;
};

// Line 66: range 000000000CAC01E0-000000000CAC0211
int __fastcall hi_set_nonblocking(int sd)
{
  int result; // eax

  result = fcntl(sd, 3, 0LL);
  if ( result >= 0 )
  {
    BYTE1(result) |= 8u;
    return fcntl(sd, 4, (unsigned int)result);
  }
  return result;
};

// Line 77: range 000000000CAC0220-000000000CAC0247
int __fastcall hi_set_reuseaddr(int sd)
{
  int reuse[6]; // [rsp+0h] [rbp-18h] BYREF

  reuse[0] = 1;
  return setsockopt(sd, 1, 2, reuse, 4u);
};

// Line 95: range 000000000CAC0250-000000000CAC0277
int __fastcall hi_set_tcpnodelay(int sd)
{
  int nodelay[6]; // [rsp+0h] [rbp-18h] BYREF

  nodelay[0] = 1;
  return setsockopt(sd, 6, 1, nodelay, 4u);
};

// Line 105: range 000000000CAC0280-000000000CAC02AB
int __fastcall hi_set_linger(int sd, int timeout)
{
  int v3; // [rsp+0h] [rbp-18h] BYREF
  int timeouta; // [rsp+4h] [rbp-14h]

  timeouta = timeout;
  v3 = 1;
  return setsockopt(sd, 1, 13, &v3, 8u);
};

// Line 117: range 000000000CAC02B0-000000000CAC02D6
int __fastcall hi_set_sndbuf(int sd, int size)
{
  int sizea[3]; // [rsp+Ch] [rbp-Ch] BYREF

  sizea[0] = size;
  return setsockopt(sd, 1, 7, sizea, 4u);
};

// Line 125: range 000000000CAC02E0-000000000CAC0306
int __fastcall hi_set_rcvbuf(int sd, int size)
{
  int sizea[3]; // [rsp+Ch] [rbp-Ch] BYREF

  sizea[0] = size;
  return setsockopt(sd, 1, 8, sizea, 4u);
};

// Line 133: range 000000000CAC0310-000000000CAC0352
int __fastcall hi_get_soerror(int sd)
{
  int v1; // ebx
  int err[4]; // [rsp+0h] [rbp-28h] BYREF
  socklen_t len[6]; // [rsp+10h] [rbp-18h] BYREF

  err[0] = 0;
  len[0] = 4;
  v1 = getsockopt(sd, 1, 4, err, len);
  if ( !v1 )
    *__errno_location() = err[0];
  return v1;
};

// Line 148: range 000000000CAC0360-000000000CAC0395
int __fastcall hi_get_sndbuf(int sd)
{
  int result; // eax
  int size[4]; // [rsp+0h] [rbp-28h] BYREF
  socklen_t len[6]; // [rsp+10h] [rbp-18h] BYREF

  size[0] = 0;
  len[0] = 4;
  result = getsockopt(sd, 1, 7, size, len);
  if ( result >= 0 )
    return size[0];
  return result;
};

// Line 163: range 000000000CAC03A0-000000000CAC03D5
int __fastcall hi_get_rcvbuf(int sd)
{
  int result; // eax
  int size[4]; // [rsp+0h] [rbp-28h] BYREF
  socklen_t len[6]; // [rsp+10h] [rbp-18h] BYREF

  size[0] = 0;
  len[0] = 4;
  result = getsockopt(sd, 1, 8, size, len);
  if ( result >= 0 )
    return size[0];
  return result;
};

// Line 182: range 000000000CAC03E0-000000000CAC042D
int __fastcall hi_atoi(uint8_t *line, size_t n)
{
  int v2; // ecx
  size_t v3; // rsi
  int result; // eax
  __int64 v5; // rdx

  if ( !n )
    return -1;
  v2 = *line;
  v3 = n - 1;
  result = -1;
  if ( (unsigned __int8)(v2 - 48) <= 9u )
  {
    v5 = 0LL;
    result = 0;
    while ( 1 )
    {
      result = v2 + 10 * result - 48;
      if ( v3 == v5 )
        break;
      v2 = line[++v5];
      if ( (unsigned __int8)(v2 - 48) > 9u )
        return -1;
    }
  }
  return result;
};

// Line 205: range 000000000CAC0430-000000000CAC0520
void __fastcall hi_itoa(uint8_t *s, int num)
{
  char v2; // r10
  __int64 i; // r8
  unsigned int v4; // eax
  uint8_t *v5; // r8
  int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  uint8_t *v10; // rax
  unsigned int v11; // r9d
  __int64 v12; // rdx
  uint8_t v13; // cl
  uint8_t *v14; // rdx

  if ( s )
  {
    if ( num < 0 )
    {
      num = -num;
      v2 = 1;
    }
    else
    {
      v2 = 0;
      if ( !num )
      {
        *s = 48;
        return;
      }
    }
    for ( i = 0LL; ; i = v4 )
    {
      v6 = num % 10;
      if ( num == 10 * (num / 10) && (unsigned int)(num + 9) <= 0x12 )
        break;
      v4 = i + 1;
      v5 = &s[i];
      num /= 10;
      s[v4] = *v5;
      *v5 = v6 + 48;
    }
    v7 = (unsigned int)i;
    if ( v2 == 1 )
    {
      LODWORD(i) = i + 1;
      s[v7] = 45;
    }
    v8 = (unsigned int)i >> 1;
    s[(unsigned int)i] = 0;
    if ( (unsigned int)i >> 1 )
    {
      v9 = i - 1;
      v10 = s;
      v11 = v9 - v8;
      do
      {
        v12 = v9;
        v13 = *v10;
        --v9;
        v14 = &s[v12];
        *v10++ = *v14;
        *v14 = v13;
      }
      while ( v9 != v11 );
    }
  }
};

// Line 242: range 000000000CAC0530-000000000CAC053E
int __fastcall hi_valid_port(int n)
{
  return (unsigned int)(n - 1) <= 0xFFFE;
};

// Line 252: range 000000000CAC0540-000000000CAC0568
int __fastcall uint_len(uint32_t num)
{
  uint32_t v1; // edx
  int result; // eax
  int v3; // ecx

  v1 = num;
  result = 1;
  if ( num )
  {
    v3 = 0;
    do
    {
      ++v3;
      v1 /= 0xAu;
    }
    while ( v1 );
    return v3;
  }
  return result;
};

// Line 264: range 000000000CAC0570-000000000CAC0580
void __fastcall hi_stacktrace(int skip_count)
{
  ;
};

// Line 300: range 000000000CAC0590-000000000CAC05C0
void __fastcall __noreturn hi_assert(const char *cond, const char *file, int line, int panic)
{
  printf("File: %s Line: %d: %s\n", file, line, cond);
  if ( panic )
  {
    hi_stacktrace(1);
    abort();
  }
  abort();
};

// Line 311: range 000000000CAC05D0-000000000CAC05F3
int __fastcall vscnprintf(char *buf, size_t size, const char *fmt, __va_list_tag *args)
{
  int result; // eax

  result = vsnprintf(buf, size, fmt, (___va_list_tag *)args);
  if ( result <= 0 )
    return 0;
  if ( result >= (int)size )
    return size - 1;
  return result;
};

// Line 337: range 000000000CAC0600-000000000CAC0689
int scnprintf(char *buf, size_t size, const char *fmt, ...)
{
  va_list args; // [rsp+8h] [rbp-D0h] BYREF

  va_start(args, fmt);
  return vscnprintf(buf, size, fmt, (__va_list_tag *)args);
};

// Line 352: range 000000000CAC0690-000000000CAC0707
ssize_t __fastcall hi_sendn(int sd, const void *vptr, size_t n)
{
  size_t v5; // rbp
  ssize_t v6; // rax
  ssize_t v7; // rbx

  v5 = n;
  if ( !n )
    return n;
  while ( 1 )
  {
    v6 = send(sd, vptr, v5, 0);
    v7 = v6;
    if ( v6 >= 0 )
      break;
    if ( *__errno_location() != 4 )
      return v7;
LABEL_5:
    if ( !v5 )
      return n;
  }
  if ( v6 )
  {
    v5 -= v6;
    vptr = (char *)vptr + v6;
    goto LABEL_5;
  }
  return -1LL;
};

// Line 381: range 000000000CAC0710-000000000CAC0775
ssize_t __fastcall hi_recvn(int sd, void *vptr, size_t n)
{
  size_t v5; // rbp
  ssize_t v6; // rax
  ssize_t v7; // rbx

  v5 = n;
  while ( v5 )
  {
    v6 = recv(sd, vptr, v5, 0);
    v7 = v6;
    if ( v6 < 0 )
    {
      if ( *__errno_location() != 4 )
        return v7;
    }
    else
    {
      if ( !v6 )
        return n - v5;
      v5 -= v6;
      vptr = (char *)vptr + v6;
    }
  }
  v5 = 0LL;
  return n - v5;
};

// Line 411: range 000000000CAC0780-000000000CAC07B7
int64_t __cdecl hi_usec_now()
{
  timeval now; // [rsp+0h] [rbp-18h] BYREF

  if ( gettimeofday(&now, 0LL) < 0 )
    return -1LL;
  else
    return now.tv_usec + 1000000 * now.tv_sec;
};

// Line 440: range 000000000CAC07C0-000000000CAC07EB
int64_t __cdecl hi_msec_now()
{
  return hi_usec_now() / 1000;
};

// Line 442: range 000000000CAC07F0-000000000CAC0824
void __fastcall print_string_with_length(char *s, size_t len)
{
  char *v2; // rbx
  bool v3; // cf
  char *v4; // rsi
  int v5; // edi

  v2 = s;
  v3 = __CFADD__(s, len);
  v4 = &s[len];
  if ( !v3 )
  {
    do
    {
      v5 = *v2++;
      putchar(v5);
    }
    while ( v2 <= v4 );
  }
  putchar(10);
};

// Line 450: range 000000000CAC0830-000000000CAC089E
void __fastcall print_string_with_length_fix_CRLF(char *s, size_t len)
{
  char *v2; // rbp
  char *v3; // rbx
  int v4; // edi

  v2 = &s[len];
  v3 = s;
  if ( s < &s[len] )
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 == 13 )
        break;
      if ( (_BYTE)v4 == 10 )
      {
        ++v3;
        printf("\\n");
        if ( v3 == v2 )
          goto LABEL_8;
      }
      else
      {
        putchar(v4);
LABEL_4:
        if ( ++v3 == v2 )
          goto LABEL_8;
      }
    }
    printf("\\r");
    goto LABEL_4;
  }
LABEL_8:
  putchar(10);
};
