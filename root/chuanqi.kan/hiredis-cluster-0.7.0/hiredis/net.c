// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiredis/net.c

// Line 54: range 000000000CACC810-000000000CACC834
void __fastcall redisNetClose(redisContext_0 *c)
{
  int fd; // edi

  if ( c )
  {
    fd = c->fd;
    if ( fd != -1 )
    {
      close(fd);
      c->fd = -1;
    }
  }
};

// Line 60: range 000000000CACC8C0-000000000CACC97B
ssize_t __fastcall redisNetRead(redisContext_0 *c, char *buf, size_t bufcap)
{
  ssize_t result; // rax
  int v4; // edx

  result = recv(c->fd, buf, bufcap, 0);
  if ( result == -1 )
  {
    v4 = *__errno_location();
    result = 0LL;
    if ( v4 == 11 )
    {
      if ( (c->flags & 1) == 0 )
        return result;
    }
    else
    {
      if ( v4 == 4 )
        return result;
      if ( v4 == 110 && (c->flags & 1) != 0 )
      {
        _redisSetError(c, 6, "recv timeout");
        return -1LL;
      }
    }
    _redisSetError(c, 1, 0LL);
    return -1LL;
  }
  if ( !result )
  {
    _redisSetError(c, 3, "Server closed the connection");
    return -1LL;
  }
  return result;
};

// Line 82: range 000000000CACC980-000000000CACCA66
ssize_t __fastcall redisNetWrite(redisContext_0 *c)
{
  char *obuf; // rsi
  size_t v2; // rdx
  __int64 v3; // rbp
  int v5; // eax

  obuf = c->obuf;
  switch ( *(obuf - 1) & 7 )
  {
    case 0:
      v2 = (unsigned __int8)*(obuf - 1) >> 3;
      break;
    case 1:
      v2 = (unsigned __int8)*(obuf - 3);
      break;
    case 2:
      v2 = *(unsigned __int16 *)(obuf - 5);
      break;
    case 3:
      v2 = *(unsigned int *)(obuf - 9);
      break;
    case 4:
      v2 = *(_QWORD *)(obuf - 17);
      break;
    default:
      v2 = 0LL;
      break;
  }
  v3 = send(c->fd, obuf, v2, 0);
  if ( v3 >= 0 )
    return v3;
  v5 = *__errno_location();
  if ( v5 == 11 )
  {
    if ( (c->flags & 1) == 0 )
      return v3;
LABEL_13:
    _redisSetError(c, 1, 0LL);
    return -1LL;
  }
  if ( v5 != 4 )
    goto LABEL_13;
  return v3;
};

// Line 95: range 000000000CACC780-000000000CACC808
void __fastcall _redisSetErrorFromErrno(redisContext_0 *c, const char *type, const char *prefix)
{
  unsigned int v3; // r13d
  int v4; // eax
  char *v5; // rsi
  __int64 v6; // rdx
  char buf[128]; // [rsp+0h] [rbp-A8h] BYREF

  v3 = *__errno_location();
  memset(buf, 0, sizeof(buf));
  if ( type )
  {
    v4 = snprintf(buf, 0x80uLL, "%s: ", type);
    v5 = &buf[v4];
    v6 = 128LL - v4;
  }
  else
  {
    v5 = buf;
    v6 = 128LL;
  }
  __xpg_strerror_r(v3, v5, v6);
  _redisSetError(c, 1, buf);
};

// Line 131: range 000000000CACC840-000000000CACC8B6
__int64 __fastcall redisSetBlocking(redisContext_0 *c, int blocking)
{
  unsigned int v2; // r12d
  int v3; // eax
  char v5[152]; // [rsp+0h] [rbp-98h] BYREF

  v2 = *__errno_location();
  memset(v5, 0, 0x80uLL);
  v3 = snprintf(v5, 0x80uLL, "%s: ", "fcntl(F_GETFL)");
  __xpg_strerror_r(v2, &v5[v3], 128LL - v3);
  _redisSetError(c, 1, v5);
  redisNetClose(c);
  return 0xFFFFFFFFLL;
};

// Line 165: range 000000000CACCA70-000000000CACCB95
int __fastcall redisKeepAlive(redisContext_0 *c, int interval)
{
  int fd; // ebx
  int v3; // r12d
  int v4; // eax
  int *v6; // rax
  char *v7; // rax
  int *v8; // rax
  char *v9; // rax
  int val[14]; // [rsp+0h] [rbp-38h] BYREF

  fd = c->fd;
  val[0] = 1;
  v3 = setsockopt(fd, 1, 9, val, 4u);
  if ( v3 == -1 )
  {
    v8 = __errno_location();
    v9 = strerror(*v8);
    _redisSetError(c, 2, v9);
  }
  else
  {
    val[0] = interval;
    if ( setsockopt(fd, 6, 4, val, 4u) < 0 )
      goto LABEL_9;
    v4 = 1;
    if ( interval / 3 )
      v4 = interval / 3;
    val[0] = v4;
    if ( setsockopt(fd, 6, 5, val, 4u) < 0 || (val[0] = 3, setsockopt(fd, 6, 6, val, 4u) < 0) )
    {
LABEL_9:
      v6 = __errno_location();
      v3 = -1;
      v7 = strerror(*v6);
      _redisSetError(c, 2, v7);
    }
    else
    {
      return 0;
    }
  }
  return v3;
};

// Line 206: range 000000000CACCBA0-000000000CACCC53
int __fastcall redisSetTcpNoDelay(redisContext_0 *c)
{
  int fd; // edi
  int v3; // ebx
  unsigned int v5; // r13d
  int v6; // eax
  int yes[4]; // [rsp+0h] [rbp-B8h] BYREF
  char s[168]; // [rsp+10h] [rbp-A8h] BYREF

  fd = c->fd;
  yes[0] = 1;
  v3 = setsockopt(fd, 6, 1, yes, 4u);
  if ( v3 != -1 )
    return 0;
  v5 = *__errno_location();
  memset(s, 0, 0x80uLL);
  v6 = snprintf(s, 0x80uLL, "%s: ", "setsockopt(TCP_NODELAY)");
  __xpg_strerror_r(v5, &s[v6], 128LL - v6);
  _redisSetError(c, 1, s);
  redisNetClose(c);
  return v3;
};

// Line 241: range 000000000CACCE00-000000000CACCF8F
int __fastcall redisContextWaitReady(redisContext_0 *c, __int64 msec)
{
  int fd; // eax
  int *v4; // rax
  unsigned int v5; // r8d
  int *v6; // r12
  int v7; // eax
  __int64 v8; // rdi
  int result; // eax
  unsigned int v10; // r13d
  int v11; // eax
  int res[4]; // [rsp+0h] [rbp-C8h] BYREF
  pollfd wfd[1]; // [rsp+10h] [rbp-B8h] BYREF
  char str[168]; // [rsp+20h] [rbp-A8h] BYREF

  fd = c->fd;
  wfd[0].events = 4;
  wfd[0].fd = fd;
  v4 = __errno_location();
  v5 = *v4;
  v6 = v4;
  if ( *v4 != 115 )
  {
    memset(str, 0, 0x80uLL);
    v8 = v5;
    goto LABEL_5;
  }
  v7 = poll(wfd, 1uLL, msec);
  res[0] = v7;
  if ( v7 == -1 )
  {
    v10 = *v6;
    memset(str, 0, 0x80uLL);
    v11 = snprintf(str, 0x80uLL, "%s: ", "poll(2)");
    __xpg_strerror_r(v10, &str[v11], 128LL - v11);
    _redisSetError(c, 1, str);
    redisNetClose(c);
    return -1;
  }
  if ( !v7 )
  {
    *v6 = 110;
    memset(str, 0, 0x80uLL);
    v8 = 110LL;
LABEL_5:
    __xpg_strerror_r(v8, str, 128LL);
    _redisSetError(c, 1, str);
    redisNetClose(c);
    return -1;
  }
  result = redisCheckConnectDone(c, res);
  if ( result || !res[0] )
  {
    redisCheckSocketError(c);
    return -1;
  }
  return result;
};

// Line 274: range 000000000CACCC60-000000000CACCCD7
int __fastcall redisCheckConnectDone(redisContext_0 *c, int *completed)
{
  int result; // eax
  int v3; // eax

  result = connect(c->fd, (const struct sockaddr *)c->saddr, c->addrlen);
  if ( result )
  {
    v3 = *__errno_location();
    if ( v3 == 106 )
    {
      *completed = 1;
      return 0;
    }
    else
    {
      if ( v3 > 106 )
      {
        if ( (unsigned int)(v3 - 114) <= 1 )
          goto LABEL_5;
      }
      else if ( v3 == 11 )
      {
LABEL_5:
        *completed = 0;
        return 0;
      }
      return -1;
    }
  }
  else
  {
    *completed = 1;
  }
  return result;
};

// Line 294: range 000000000CACCCE0-000000000CACCDF0
int __fastcall redisCheckSocketError(redisContext_0 *c)
{
  int *v2; // rax
  int fd; // edi
  unsigned int *v4; // r12
  int v5; // r13d
  int v6; // ebx
  unsigned int v7; // r8d
  unsigned int v9; // r13d
  int v10; // eax
  int err[4]; // [rsp+0h] [rbp-C8h] BYREF
  socklen_t errlen[4]; // [rsp+10h] [rbp-B8h] BYREF
  char str[168]; // [rsp+20h] [rbp-A8h] BYREF

  err[0] = 0;
  v2 = __errno_location();
  fd = c->fd;
  v4 = (unsigned int *)v2;
  v5 = *v2;
  errlen[0] = 4;
  v6 = getsockopt(fd, 1, 4, err, errlen);
  if ( v6 == -1 )
  {
    v9 = *v4;
    memset(str, 0, 0x80uLL);
    v10 = snprintf(str, 0x80uLL, "%s: ", "getsockopt(SO_ERROR)");
    __xpg_strerror_r(v9, &str[v10], 128LL - v10);
    _redisSetError(c, 1, str);
    return v6;
  }
  v7 = err[0];
  if ( err[0] )
    goto LABEL_7;
  err[0] = v5;
  if ( v5 )
  {
    v7 = v5;
LABEL_7:
    *v4 = v7;
    memset(str, 0, 0x80uLL);
    __xpg_strerror_r(v7, str, 128LL);
    _redisSetError(c, 1, str);
    return -1;
  }
  return 0;
};

// Line 316: range 000000000CACCFA0-000000000CACD09A
__int64 __fastcall redisContextSetTimeout(redisContext_0 *c, __time_t a2, __suseconds_t a3)
{
  int fd; // edi
  unsigned int v5; // ebx
  unsigned int v7; // r13d
  const char *v8; // rcx
  int v9; // eax
  timeval tva; // [rsp+0h] [rbp-B8h] BYREF
  char s[168]; // [rsp+10h] [rbp-A8h] BYREF

  fd = c->fd;
  tva.tv_sec = a2;
  tva.tv_usec = a3;
  v5 = setsockopt(fd, 1, 20, &tva, 0x10u);
  if ( v5 == -1 )
  {
    v7 = *__errno_location();
    memset(s, 0, 0x80uLL);
    v8 = "setsockopt(SO_RCVTIMEO)";
LABEL_6:
    v9 = snprintf(s, 0x80uLL, "%s: ", v8);
    __xpg_strerror_r(v7, &s[v9], 128LL - v9);
    _redisSetError(c, 1, s);
    return v5;
  }
  v5 = setsockopt(c->fd, 1, 21, &tva, 0x10u);
  if ( v5 == -1 )
  {
    v7 = *__errno_location();
    memset(s, 0, 0x80uLL);
    v8 = "setsockopt(SO_SNDTIMEO)";
    goto LABEL_6;
  }
  return 0;
};

// Line 331: range 000000000CACD0A0-000000000CACD10D
int __fastcall redisContextUpdateConnectTimeout(redisContext_0 *c, const timeval *timeout)
{
  timeval *connect_timeout; // rax

  connect_timeout = c->connect_timeout;
  if ( connect_timeout == timeout )
    return 0;
  if ( !connect_timeout )
  {
    connect_timeout = (timeval *)hiredisAllocFns.mallocFn(0x10uLL);
    c->connect_timeout = connect_timeout;
    if ( !connect_timeout )
      return -1;
  }
  *connect_timeout = *timeout;
  return 0;
};

// Line 347: range 000000000CACD7B0-000000000CACD81D
int __fastcall redisContextUpdateCommandTimeout(redisContext_0 *c, const timeval *timeout)
{
  timeval *command_timeout; // rax

  command_timeout = c->command_timeout;
  if ( command_timeout == timeout )
    return 0;
  if ( !command_timeout )
  {
    command_timeout = (timeval *)hiredisAllocFns.mallocFn(0x10uLL);
    c->command_timeout = command_timeout;
    if ( !command_timeout )
      return -1;
  }
  *command_timeout = *timeout;
  return 0;
};

// Line 365: range 000000000CACD110-000000000CACD7AA
int __fastcall redisContextConnectTcp(
        redisContext_0 *c,
        const char *addr,
        int port,
        const timeval *timeout,
        const char *source_addr)
{
  int flags; // r14d
  char *host; // rdi
  char *v10; // rax
  timeval *connect_timeout; // rax
  __int64 tv_usec; // rdx
  int result; // eax
  __int64 tv_sec; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  char *v17; // rdi
  addrinfo *v18; // rbp
  char v19; // al
  int v20; // r13d
  int v21; // r14d
  int v22; // eax
  int v23; // ebx
  unsigned int v24; // eax
  char *v25; // rdi
  int v26; // eax
  addrinfo *v27; // r15
  sockadr *v28; // rax
  socklen_t ai_addrlen; // edx
  const struct sockaddr *ai_addr; // rsi
  int v31; // eax
  int *v32; // rax
  char *v33; // rax
  int *v34; // rax
  char *v35; // rax
  int v36; // eax
  const char *v37; // rax
  struct addrinfo *v38; // rdi
  unsigned int v39; // eax
  const char *v40; // rdx
  const char *v41; // rax
  unsigned int v42; // ebp
  const char *v43; // rcx
  int v44; // eax
  const timeval *rv; // [rsp+8h] [rbp-150h]
  int rva; // [rsp+8h] [rbp-150h]
  int v47; // [rsp+24h] [rbp-134h]
  __int64 timeout_msec; // [rsp+28h] [rbp-130h]
  int n[4]; // [rsp+30h] [rbp-128h] BYREF
  char _port[6]; // [rsp+40h] [rbp-118h] BYREF
  addrinfo *servinfo[2]; // [rsp+50h] [rbp-108h] BYREF
  addrinfo *bservinfo; // [rsp+60h] [rbp-F8h] BYREF
  addrinfo hints; // [rsp+70h] [rbp-E8h] BYREF
  char buf[128]; // [rsp+A0h] [rbp-B8h] BYREF

  c->connection_type = REDIS_CONN_TCP;
  flags = c->flags;
  host = c->tcp.host;
  servinfo[0] = 0LL;
  c->tcp.port = port;
  if ( host != addr )
  {
    rv = timeout;
    ((void (*)(void))hiredisAllocFns.freeFn)();
    v10 = hiredisAllocFns.strdupFn(addr);
    c->tcp.host = v10;
    timeout = rv;
    if ( !v10 )
      goto oom;
  }
  if ( !timeout )
  {
    hiredisAllocFns.freeFn(c->connect_timeout);
    c->connect_timeout = 0LL;
    goto LABEL_53;
  }
  if ( redisContextUpdateConnectTimeout(c, timeout) == -1 )
  {
oom:
    _redisSetError(c, 5, "Out of memory");
LABEL_41:
    result = -1;
    goto end;
  }
  connect_timeout = c->connect_timeout;
  if ( connect_timeout )
  {
    tv_usec = connect_timeout->tv_usec;
    if ( tv_usec > 1000000 || (tv_sec = connect_timeout->tv_sec, tv_sec > 0x20C49BA5E353F6LL) )
    {
      _redisSetError(c, 1, "Invalid timeout specified");
      result = -1;
      goto end;
    }
    v15 = 1000 * tv_sec + (tv_usec + 999) / 1000;
    v16 = 0x7FFFFFFFLL;
    if ( v15 <= 0x7FFFFFFF )
      v16 = v15;
    timeout_msec = v16;
    goto LABEL_15;
  }
LABEL_53:
  timeout_msec = -1LL;
LABEL_15:
  if ( source_addr )
  {
    if ( c->tcp.source_addr != source_addr )
    {
      ((void (*)(void))hiredisAllocFns.freeFn)();
      c->tcp.source_addr = hiredisAllocFns.strdupFn(source_addr);
    }
  }
  else
  {
    hiredisAllocFns.freeFn(c->tcp.source_addr);
    c->tcp.source_addr = 0LL;
  }
  snprintf(_port, 6uLL, "%d", (unsigned int)port);
  memset(&hints, 0, sizeof(hints));
  v17 = c->tcp.host;
  hints.ai_family = 2;
  hints.ai_socktype = 1;
  if ( getaddrinfo(v17, _port, &hints, servinfo) )
  {
    hints.ai_family = 10;
    v36 = getaddrinfo(addr, _port, &hints, servinfo);
    if ( v36 )
    {
      v37 = gai_strerror(v36);
      _redisSetError(c, 2, v37);
      return -1;
    }
  }
  v18 = servinfo[0];
  if ( !servinfo[0] )
  {
addrretry:
    v32 = __errno_location();
    v33 = strerror(*v32);
    snprintf(buf, 0x80uLL, "Can't create socket: %s", v33);
LABEL_45:
    _redisSetError(c, 2, buf);
    result = -1;
    goto end;
  }
  v19 = flags;
  v20 = 0;
  v21 = flags & 0x80;
  v47 = v19 & 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = socket(v18->ai_family, v18->ai_socktype, v18->ai_protocol);
      v23 = v22;
      if ( v22 != -1 )
        break;
LABEL_43:
      v18 = v18->ai_next;
      if ( !v18 )
        goto addrretry;
    }
    c->fd = v22;
    v24 = fcntl(v22, 3);
    if ( v24 == -1 )
    {
      v42 = *__errno_location();
      memset(buf, 0, sizeof(buf));
      v43 = "fcntl(F_GETFL)";
      goto LABEL_65;
    }
    BYTE1(v24) |= 8u;
    if ( fcntl(c->fd, 4, v24) == -1 )
    {
      v42 = *__errno_location();
      memset(buf, 0, sizeof(buf));
      v43 = "fcntl(F_SETFL)";
LABEL_65:
      v44 = snprintf(buf, 0x80uLL, "%s: ", v43);
      __xpg_strerror_r(v42, &buf[v44], 128LL - v44);
      _redisSetError(c, 1, buf);
      redisNetClose(c);
      goto LABEL_41;
    }
    v25 = c->tcp.source_addr;
    if ( v25 )
    {
      v26 = getaddrinfo(v25, 0LL, &hints, &bservinfo);
      if ( v26 )
      {
        v41 = gai_strerror(v26);
        snprintf(buf, 0x80uLL, "Can't get addr: %s", v41);
      }
      else
      {
        if ( v21 )
        {
          n[0] = 1;
          if ( setsockopt(v23, 1, 2, n, 4u) < 0 )
          {
            freeaddrinfo(bservinfo);
            result = -1;
            goto end;
          }
        }
        v27 = bservinfo;
        if ( bservinfo )
        {
          do
          {
            if ( bind(v23, v27->ai_addr, v27->ai_addrlen) != -1 )
            {
              freeaddrinfo(bservinfo);
              goto LABEL_32;
            }
            v27 = v27->ai_next;
          }
          while ( v27 );
          v38 = bservinfo;
        }
        else
        {
          v38 = 0LL;
        }
        freeaddrinfo(v38);
        v34 = __errno_location();
        v35 = strerror(*v34);
        snprintf(buf, 0x80uLL, "Can't bind socket: %s", v35);
      }
      goto LABEL_45;
    }
LABEL_32:
    hiredisAllocFns.freeFn(c->saddr);
    v28 = (sockadr *)hiredisAllocFns.mallocFn(v18->ai_addrlen);
    c->saddr = v28;
    if ( !v28 )
      goto oom;
    memcpy(v28, v18->ai_addr, v18->ai_addrlen);
    ai_addrlen = v18->ai_addrlen;
    ai_addr = v18->ai_addr;
    c->addrlen = ai_addrlen;
    if ( connect(v23, ai_addr, ai_addrlen) != -1 )
      goto LABEL_57;
    v31 = *__errno_location();
    if ( v31 == 113 )
    {
      redisNetClose(c);
      goto LABEL_43;
    }
    if ( v31 == 115 )
      break;
    if ( v31 != 99 || !v21 )
      goto wait_for_ready;
    if ( ++v20 > 9 )
      goto LABEL_41;
    redisNetClose(c);
  }
  if ( !v47 )
  {
LABEL_58:
    c->flags |= 2u;
    result = 0;
    goto end;
  }
wait_for_ready:
  if ( redisContextWaitReady(c, timeout_msec) || redisSetTcpNoDelay(c) )
    goto LABEL_41;
LABEL_57:
  if ( !v47 )
    goto LABEL_58;
  v39 = fcntl(c->fd, 3);
  if ( v39 == -1 )
  {
    if ( !(unsigned int)redisSetBlocking(c, 3) )
      goto LABEL_58;
    goto LABEL_41;
  }
  BYTE1(v39) &= ~8u;
  if ( fcntl(c->fd, 4, v39) != -1 )
    goto LABEL_58;
  _redisSetErrorFromErrno(c, "fcntl(F_SETFL)", v40);
  redisNetClose(c);
  result = -1;
end:
  if ( servinfo[0] )
  {
    rva = result;
    freeaddrinfo(servinfo[0]);
    return rva;
  }
  return result;
};

// Line 538: range 000000000CACD820-000000000CACD823
int __fastcall redisContextConnectTcp(redisContext_0 *c, const char *addr, int port, const timeval *timeout)
{
  return redisContextConnectTcp(c, addr, port, timeout, 0LL);
};

// Line 544: range 000000000CACD830-000000000CACDBEC
// attributes: thunk
int __fastcall redisContextConnectBindTcp(
        redisContext_0 *c,
        const char *addr,
        int port,
        const timeval *timeout,
        const char *source_addr)
{
  return redisContextConnectTcp(c, addr, port, timeout, source_addr);
};
