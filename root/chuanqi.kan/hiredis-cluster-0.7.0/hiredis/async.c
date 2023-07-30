// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiredis/async.c

// Line 72: range 000000000CAC8ED0-000000000CAC8FED
int __fastcall callbackKeyCompare(void *privdata, const void *key1, const void *key2)
{
  int v5; // r8d
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // al
  size_t v8; // rdx
  int result; // eax

  switch ( *((char *)key1 - 1) & 7 )
  {
    case 0:
      v5 = (unsigned __int8)*((char *)key1 - 1) >> 3;
      goto LABEL_3;
    case 1:
      v5 = (unsigned __int8)*((char *)key1 - 3);
      goto LABEL_3;
    case 2:
      v5 = *(unsigned __int16 *)((char *)key1 - 5);
      goto LABEL_3;
    case 3:
      v5 = *(_DWORD *)((char *)key1 - 9);
      goto LABEL_3;
    case 4:
      v6 = *((char *)key2 - 1);
      v5 = *(_DWORD *)((char *)key1 - 17);
      v7 = *((char *)key2 - 1) & 7;
      if ( v7 <= 4u )
        goto LABEL_4;
LABEL_13:
      v8 = 0LL;
      break;
    default:
      v5 = 0;
LABEL_3:
      v6 = *((char *)key2 - 1);
      v7 = *((char *)key2 - 1) & 7;
LABEL_4:
      switch ( v7 )
      {
        case 0u:
          v8 = v6 >> 3;
          break;
        case 1u:
          v8 = (unsigned __int8)*((char *)key2 - 3);
          break;
        case 2u:
          v8 = *(unsigned __int16 *)((char *)key2 - 5);
          break;
        case 3u:
          v8 = *(int *)((char *)key2 - 9);
          break;
        case 4u:
          v8 = *(int *)((char *)key2 - 17);
          break;
        default:
          goto LABEL_13;
      }
      break;
  }
  result = 0;
  if ( (_DWORD)v8 == v5 )
    return memcmp(key1, key2, v8) == 0;
  return result;
};

// Line 84: range 000000000CAC8CD0-000000000CAC8CD3
void __fastcall callbackKeyDestructor(void *privdata, void *key)
{
  sdsfree((sds)key);
};

// Line 157: range 000000000CAC9B70-000000000CAC9C4B
void __fastcall _redisAsyncDisconnect(redisAsyncContext_0 *ac)
{
  int err; // eax
  void (*cleanup)(void *); // rax
  bool v4; // zf
  redisCallback_0 *head; // rdi

  if ( ac )
  {
    err = ac->c.err;
    ac->errstr = ac->c.errstr;
    ac->err = err;
  }
  else
  {
    err = MEMORY[0x110];
  }
  if ( err )
  {
    ac->c.flags |= 4u;
  }
  else
  {
    head = ac->replies.head;
    if ( head )
    {
      v4 = head == ac->replies.tail;
      ac->replies.head = head->next;
      if ( v4 )
        ac->replies.tail = 0LL;
      ((void (*)(void))hiredisAllocFns.freeFn)();
      __assert_fail("ret == -1", "async.c", 0x17Cu, "__redisAsyncDisconnect");
    }
  }
  cleanup = ac->ev.cleanup;
  if ( cleanup )
    cleanup(ac->ev.data);
  v4 = (ac->c.flags & 0x200) == 0;
  ac->ev.cleanup = 0LL;
  if ( v4 )
    _redisAsyncFree(ac);
};

// Line 165: range 000000000CACAA10-000000000CACAC8F
redisAsyncContext_0 *__fastcall redisAsyncConnectWithOptions(const redisOptions *options)
{
  __int64 v1; // rax
  const timeval *connect_timeout; // rax
  redisContext_0 *v3; // r14
  dict_0 *v4; // rax
  dict_0 *v5; // rbp
  dict_0 *v6; // rax
  dict_0 *v7; // r12
  redisAsyncContext_0 *v8; // rax
  redisAsyncContext_0 *v9; // rbx
  redisAsyncPushFn *async_push_cb; // rsi
  redisOptions myOptions; // [rsp+0h] [rbp-78h] BYREF

  v1 = *(_QWORD *)&options->type;
  myOptions.push_cb = 0LL;
  *(_QWORD *)&myOptions.type = v1;
  connect_timeout = options->connect_timeout;
  myOptions.options |= 9u;
  myOptions.connect_timeout = connect_timeout;
  myOptions.command_timeout = options->command_timeout;
  myOptions.endpoint = options->endpoint;
  myOptions.privdata = options->privdata;
  myOptions.free_privdata = options->free_privdata;
  myOptions.async_push_cb = options->async_push_cb;
  v3 = redisConnectWithOptions(&myOptions);
  if ( !v3 )
    return 0LL;
  v4 = (dict_0 *)hiredisAllocFns.mallocFn(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    v4->table = 0LL;
    v4->size = 0LL;
    v4->sizemask = 0LL;
    v4->used = 0LL;
    v4->privdata = 0LL;
    v4->type = &callbackDict;
    v6 = (dict_0 *)hiredisAllocFns.mallocFn(0x30uLL);
    v7 = v6;
    if ( !v6 )
    {
      dictClear(v5);
      hiredisAllocFns.freeFn(v5);
      redisFree(v3);
      return 0LL;
    }
    v6->table = 0LL;
    v6->size = 0LL;
    v6->sizemask = 0LL;
    v6->used = 0LL;
    v6->privdata = 0LL;
    v6->type = &callbackDict;
    v8 = (redisAsyncContext_0 *)hiredisAllocFns.reallocFn(v3, 448LL);
    v9 = v8;
    if ( v8 )
    {
      v8->c.flags &= ~2u;
      async_push_cb = myOptions.async_push_cb;
      v8->sub.channels = v5;
      v8->sub.patterns = v7;
      v8->err = 0;
      v8->errstr = 0LL;
      v8->data = 0LL;
      v8->dataCleanup = 0LL;
      v8->ev.data = 0LL;
      v8->ev.addRead = 0LL;
      v8->ev.delRead = 0LL;
      v8->ev.addWrite = 0LL;
      v8->ev.delWrite = 0LL;
      v8->ev.cleanup = 0LL;
      v8->ev.scheduleTimer = 0LL;
      v8->onConnect = 0LL;
      v8->onDisconnect = 0LL;
      v8->replies.head = 0LL;
      v8->replies.tail = 0LL;
      v8->sub.invalid.head = 0LL;
      v8->sub.invalid.tail = 0LL;
      redisAsyncSetPushCallback(v8, async_push_cb);
      v9->err = v9->c.err;
      v9->errstr = v9->c.errstr;
      return v9;
    }
    dictClear(v5);
    hiredisAllocFns.freeFn(v5);
    dictClear(v7);
    hiredisAllocFns.freeFn(v7);
  }
  redisFree(v3);
  return 0LL;
};

// Line 194: range 000000000CACACA0-000000000CACACC9
redisAsyncContext_0 *__fastcall redisAsyncConnect(const char *ip_0, int port)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.endpoint.tcp.ip = ip_0;
  options.endpoint.tcp.port = port;
  return redisAsyncConnectWithOptions(&options);
};

// Line 201: range 000000000CACACD0-000000000CACACFE
redisAsyncContext_0 *__fastcall redisAsyncConnectBind(const char *ip_0, int port, const char *source_addr)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.endpoint.tcp.ip = ip_0;
  options.endpoint.tcp.port = port;
  options.endpoint.tcp.source_addr = source_addr;
  return redisAsyncConnectWithOptions(&options);
};

// Line 209: range 000000000CACAD00-000000000CACAD36
redisAsyncContext_0 *__fastcall redisAsyncConnectBindWithReuse(const char *ip_0, int port, const char *source_addr)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.endpoint.tcp.ip = ip_0;
  options.endpoint.tcp.port = port;
  options.options = 2;
  options.endpoint.tcp.source_addr = source_addr;
  return redisAsyncConnectWithOptions(&options);
};

// Line 217: range 000000000CACAD40-000000000CACAD6C
redisAsyncContext_0 *__fastcall redisAsyncConnectUnix(const char *path)
{
  redisOptions options; // [rsp+0h] [rbp-58h] BYREF

  memset(&options, 0, sizeof(options));
  options.type = 1;
  options.endpoint.tcp.source_addr = path;
  return redisAsyncConnectWithOptions(&options);
};

// Line 223: range 000000000CAC9A80-000000000CAC9B11
int __fastcall redisAsyncSetConnectCallback(redisAsyncContext_0 *ac, redisConnectCallback *fn)
{
  int v2; // ebp
  bool v3; // zf
  void (*scheduleTimer)(void *, timeval); // rcx
  timeval *connect_timeout; // rax
  void (*addWrite)(void *); // rax

  v2 = -1;
  if ( ac->onConnect )
    return v2;
  v3 = (ac->c.flags & 2) == 0;
  ac->onConnect = fn;
  scheduleTimer = ac->ev.scheduleTimer;
  if ( v3 )
  {
    if ( scheduleTimer )
    {
      connect_timeout = ac->c.connect_timeout;
      if ( connect_timeout )
        goto LABEL_5;
    }
  }
  else if ( scheduleTimer )
  {
    connect_timeout = ac->c.command_timeout;
    if ( connect_timeout )
    {
LABEL_5:
      if ( connect_timeout->tv_sec || connect_timeout->tv_usec )
        ((void (__fastcall *)(void *, __time_t, __suseconds_t))scheduleTimer)(
          ac->ev.data,
          connect_timeout->tv_sec,
          connect_timeout->tv_usec);
    }
  }
  addWrite = ac->ev.addWrite;
  v2 = 0;
  if ( addWrite )
    addWrite(ac->ev.data);
  return v2;
};

// Line 237: range 000000000CAC9B20-000000000CAC9B38
int __fastcall redisAsyncSetDisconnectCallback(redisAsyncContext_0 *ac, redisDisconnectCallback *fn)
{
  int result; // eax

  result = -1;
  if ( !ac->onDisconnect )
  {
    ac->onDisconnect = fn;
    return 0;
  }
  return result;
};

// Line 301: range 000000000CAC90B0-000000000CAC9402
void __fastcall _redisAsyncFree(redisAsyncContext_0 *ac)
{
  redisCallback_0 *head; // rdi
  bool v3; // zf
  redisCallback_0 *v4; // rdi
  dict *channels; // r13
  dict **v6; // rax
  dict **v7; // rbx
  dict *v8; // rdx
  dict *v9; // rdx
  int v10; // eax
  bool v11; // cc
  dictType_0 *type; // rcx
  void *(*keyDup)(void *, const void *); // rax
  dict *v14; // rbx
  dict *patterns; // r13
  dict **v16; // rax
  dict **v17; // rbx
  dict *v18; // rdx
  dict *v19; // rdx
  int v20; // eax
  dictType_0 *v21; // rcx
  void *(*v22)(void *, const void *); // rax
  dict *v23; // rbx
  void (*cleanup)(void *); // rax
  redisDisconnectCallback *onDisconnect; // rax
  int flags; // edx
  void (*dataCleanup)(void *); // rax
  redisCallbackFn *cb_8; // [rsp+8h] [rbp-40h]
  redisCallbackFn *cb_8a; // [rsp+8h] [rbp-40h]
  void *cb_24; // [rsp+18h] [rbp-30h]
  void *cb_24a; // [rsp+18h] [rbp-30h]

  while ( 1 )
  {
    head = ac->replies.head;
    if ( !head )
      break;
    v3 = head == ac->replies.tail;
    ac->replies.head = head->next;
    if ( v3 )
      ac->replies.tail = 0LL;
    cb_8 = head->fn;
    cb_24 = head->privdata;
    hiredisAllocFns.freeFn(head);
    if ( cb_8 )
    {
      ac->c.flags |= 0x10u;
      cb_8(ac, 0LL, cb_24);
      ac->c.flags &= ~0x10u;
    }
  }
  while ( 1 )
  {
    v4 = ac->sub.invalid.head;
    if ( !v4 )
      break;
    while ( 1 )
    {
      v3 = v4 == ac->sub.invalid.tail;
      ac->sub.invalid.head = v4->next;
      if ( v3 )
        ac->sub.invalid.tail = 0LL;
      cb_8a = v4->fn;
      cb_24a = v4->privdata;
      hiredisAllocFns.freeFn(v4);
      if ( !cb_8a )
        break;
      ac->c.flags |= 0x10u;
      cb_8a(ac, 0LL, cb_24a);
      v4 = ac->sub.invalid.head;
      ac->c.flags &= ~0x10u;
      if ( !v4 )
        goto LABEL_12;
    }
  }
LABEL_12:
  channels = ac->sub.channels;
  if ( channels )
  {
    v6 = (dict **)hiredisAllocFns.mallocFn(0x20uLL);
    v7 = v6;
    if ( v6 )
    {
      *v6 = channels;
      *((_DWORD *)v6 + 2) = -1;
      v8 = 0LL;
      v6[2] = 0LL;
      v6[3] = 0LL;
      while ( v8 )
      {
        v8 = v7[3];
        v7[2] = v8;
        if ( !v8 )
          break;
LABEL_19:
        type = v8->type;
        v7[3] = (dict *)v8->size;
        keyDup = type->keyDup;
        if ( keyDup )
        {
          ac->c.flags |= 0x10u;
          ((void (__fastcall *)(redisAsyncContext_0 *, _QWORD, int (*)(void *, const void *, const void *)))keyDup)(
            ac,
            0LL,
            type->keyCompare);
          ac->c.flags &= ~0x10u;
          v8 = v7[2];
        }
      }
      while ( 1 )
      {
        v9 = *v7;
        v10 = *((_DWORD *)v7 + 2) + 1;
        v11 = v10 < SLODWORD((*v7)->size);
        *((_DWORD *)v7 + 2) = v10;
        if ( !v11 )
          break;
        v8 = (dict *)v9->table[v10];
        v7[2] = v8;
        if ( v8 )
          goto LABEL_19;
      }
      hiredisAllocFns.freeFn(v7);
    }
    v14 = ac->sub.channels;
    dictClear(v14);
    hiredisAllocFns.freeFn(v14);
  }
  patterns = ac->sub.patterns;
  if ( patterns )
  {
    v16 = (dict **)hiredisAllocFns.mallocFn(0x20uLL);
    v17 = v16;
    if ( v16 )
    {
      *v16 = patterns;
      *((_DWORD *)v16 + 2) = -1;
      v18 = 0LL;
      v16[2] = 0LL;
      v16[3] = 0LL;
      while ( v18 )
      {
        v18 = v17[3];
        v17[2] = v18;
        if ( !v18 )
          break;
LABEL_30:
        v21 = v18->type;
        v17[3] = (dict *)v18->size;
        v22 = v21->keyDup;
        if ( v22 )
        {
          ac->c.flags |= 0x10u;
          ((void (__fastcall *)(redisAsyncContext_0 *, _QWORD, int (*)(void *, const void *, const void *)))v22)(
            ac,
            0LL,
            v21->keyCompare);
          ac->c.flags &= ~0x10u;
          v18 = v17[2];
        }
      }
      while ( 1 )
      {
        v19 = *v17;
        v20 = *((_DWORD *)v17 + 2) + 1;
        v11 = v20 < SLODWORD((*v17)->size);
        *((_DWORD *)v17 + 2) = v20;
        if ( !v11 )
          break;
        v18 = (dict *)v19->table[v20];
        v17[2] = v18;
        if ( v18 )
          goto LABEL_30;
      }
      hiredisAllocFns.freeFn(v17);
    }
    v23 = ac->sub.patterns;
    dictClear(v23);
    hiredisAllocFns.freeFn(v23);
  }
  cleanup = ac->ev.cleanup;
  if ( cleanup )
    cleanup(ac->ev.data);
  onDisconnect = ac->onDisconnect;
  ac->ev.cleanup = 0LL;
  if ( onDisconnect )
  {
    flags = ac->c.flags;
    if ( (flags & 2) != 0 )
    {
      if ( (flags & 8) != 0 )
        onDisconnect(ac, 0);
      else
        onDisconnect(ac, -(ac->err != 0));
    }
  }
  dataCleanup = ac->dataCleanup;
  if ( dataCleanup )
    dataCleanup(ac->data);
  redisFree(&ac->c);
};

// Line 365: range 000000000CAC9B40-000000000CAC9B60
void __fastcall redisAsyncFree(redisAsyncContext_0 *ac)
{
  int flags; // eax

  flags = ac->c.flags;
  ac->c.flags = flags | 8;
  if ( (flags & 0x10) == 0 )
    _redisAsyncFree(ac);
};

// Line 406: range 000000000CAC9C70-000000000CAC9C98
void __fastcall redisAsyncDisconnect(redisAsyncContext_0 *ac)
{
  int flags; // eax
  bool v2; // zf

  flags = ac->c.flags;
  BYTE1(flags) &= ~2u;
  v2 = (ac->c.flags & 0x10) == 0;
  ac->c.flags = flags | 4;
  if ( v2 && !ac->replies.head )
    _redisAsyncDisconnect(ac);
};

// Line 504: range 000000000CAC9CA0-000000000CACA413
void __fastcall redisProcessCallbacks(redisAsyncContext_0 *ac)
{
  void *v2; // rbp
  int v3; // r13d
  _QWORD *v4; // rax
  _DWORD *v5; // r14
  redisAsyncPushFn *push_cb; // rax
  void *v7; // rdi
  redisCallback_0 *head; // rdi
  bool v9; // zf
  void *v10; // rsi
  redisCallbackFn *v11; // rax
  redisReader_0 *reader; // rax
  unsigned __int64 v13; // r15
  const __int32_t **v14; // rax
  char *v15; // r14
  _BOOL8 v16; // rax
  const char *v17; // r14
  size_t v18; // r15
  int v19; // eax
  _QWORD *v20; // r13
  char *v21; // r15
  const __int32_t **v22; // rax
  __int64 v23; // rdx
  dict *patterns; // r15
  __int64 v25; // rax
  char *v26; // r13
  dictEntry_0 *v27; // r14
  int (*keyCompare)(void *, const void *, const void *); // rax
  __int64 v29; // rax
  int flags; // eax
  char *obuf; // rsi
  __int64 v32; // rdx
  redisCallback_0 *v33; // rax
  redisCallbackFn *fn; // rdx
  redisCallback_0 *tail; // rdx
  unsigned int v36; // eax
  dictEntry_0 *v37; // r14
  _BOOL8 v38; // rax
  int (*v39)(void *, const void *, const void *); // rax
  const char *v40; // rcx
  dictType_0 *type; // rax
  void (*keyDestructor)(void *, void *); // rdx
  void (*valDestructor)(void *, void *); // rax
  char *v44; // [rsp+8h] [rbp-80h]
  dictEntry_0 *v45; // [rsp+8h] [rbp-80h]
  unsigned __int8 v46; // [rsp+10h] [rbp-78h]
  __int64 v47; // [rsp+10h] [rbp-78h]
  redisCallback_0 *val; // [rsp+18h] [rbp-70h]
  void *reply[2]; // [rsp+20h] [rbp-68h] BYREF
  redisCallback_0 cb; // [rsp+30h] [rbp-58h] BYREF

  memset(&cb, 0, 20);
  cb.privdata = 0LL;
  reply[0] = 0LL;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( redisGetReply(&ac->c, reply) )
      {
LABEL_10:
        _redisAsyncDisconnect(ac);
        return;
      }
      while ( 1 )
      {
        v2 = reply[0];
        if ( !reply[0] )
        {
          flags = ac->c.flags;
          if ( (flags & 4) != 0 )
          {
            obuf = ac->c.obuf;
            switch ( *(obuf - 1) & 7 )
            {
              case 0:
                v32 = (unsigned __int8)*(obuf - 1) >> 3;
                goto LABEL_58;
              case 1:
                v32 = (unsigned __int8)*(obuf - 3);
                goto LABEL_58;
              case 2:
                v32 = *(unsigned __int16 *)(obuf - 5);
                goto LABEL_58;
              case 3:
                v32 = *(unsigned int *)(obuf - 9);
                goto LABEL_58;
              case 4:
                v32 = *(_QWORD *)(obuf - 17);
LABEL_58:
                if ( !v32 )
                  goto LABEL_59;
                break;
              default:
LABEL_59:
                if ( ac->replies.head )
                  break;
                goto LABEL_10;
            }
          }
          if ( (flags & 0x40) != 0 )
          {
            v33 = (redisCallback_0 *)hiredisAllocFns.mallocFn(0x20uLL);
            if ( v33 )
            {
              fn = cb.fn;
              v33->next = 0LL;
              v33->fn = fn;
              *(_QWORD *)&v33->pending_subs = *(_QWORD *)&cb.pending_subs;
              v33->privdata = cb.privdata;
              if ( !ac->replies.head )
                ac->replies.head = v33;
              tail = ac->replies.tail;
              if ( tail )
                tail->next = v33;
              ac->replies.tail = v33;
            }
          }
          return;
        }
        v3 = *(_DWORD *)reply[0];
        if ( *(_DWORD *)reply[0] != 12 )
          break;
        if ( *((_QWORD *)reply[0] + 6) )
        {
          v4 = (_QWORD *)*((_QWORD *)reply[0] + 7);
          v5 = (_DWORD *)*v4;
          if ( *(_DWORD *)*v4 == 1 )
          {
            v13 = *((_QWORD *)v5 + 3);
            if ( v13 > 6 )
            {
              v14 = __ctype_tolower_loc();
              v15 = (char *)*((_QWORD *)v5 + 4);
              v16 = (*v14)[*v15] == 112;
              v17 = &v15[v16];
              v18 = v13 - v16;
              if ( !strncasecmp(v17, "subscribe", v18) || !strncasecmp(v17, "message", v18) )
              {
                head = ac->replies.head;
                if ( !head )
                  goto LABEL_22;
LABEL_12:
                v9 = head == ac->replies.tail;
                ac->replies.head = head->next;
                if ( v9 )
                  ac->replies.tail = 0LL;
LABEL_14:
                cb = *head;
                ((void (*)(void))hiredisAllocFns.freeFn)();
                v10 = reply[0];
                goto LABEL_15;
              }
            }
          }
        }
        push_cb = ac->push_cb;
        v7 = v2;
        if ( push_cb )
        {
          ac->c.flags |= 0x10u;
          push_cb(ac, v2);
          ac->c.flags &= ~0x10u;
          v7 = reply[0];
        }
        ac->c.reader->fn->freeObject(v7);
        if ( redisGetReply(&ac->c, reply) )
          goto LABEL_10;
      }
      head = ac->replies.head;
      if ( head )
        goto LABEL_12;
      if ( v3 == 6 )
      {
        v40 = (const char *)*((_QWORD *)reply[0] + 4);
        ac->c.err = 2;
        snprintf(ac->c.errstr, 0x80uLL, "%s", v40);
        ac->c.reader->fn->freeObject(reply[0]);
        _redisAsyncDisconnect(ac);
        return;
      }
LABEL_22:
      v19 = ac->c.flags;
      if ( (v19 & 0x60) == 0 )
        __assert_fail("(c->flags & 0x20 || c->flags & 0x40)", "async.c", 0x236u, "redisProcessCallbacks");
      v10 = v2;
      if ( (v19 & 0x20) == 0 )
        goto LABEL_15;
      if ( v3 != 12 && v3 != 2 )
      {
        head = ac->sub.invalid.head;
        if ( head )
        {
          v9 = head == ac->sub.invalid.tail;
          ac->sub.invalid.head = head->next;
          if ( v9 )
            ac->sub.invalid.tail = 0LL;
          goto LABEL_14;
        }
LABEL_15:
        v11 = cb.fn;
        if ( !cb.fn )
          goto LABEL_48;
        break;
      }
      if ( *((_QWORD *)v2 + 6) <= 1uLL )
        __assert_fail("reply->elements >= 2", "async.c", 0x1AAu, "__redisGetSubscribeCallback");
      v20 = (_QWORD *)*((_QWORD *)v2 + 7);
      if ( *(_DWORD *)*v20 != 1 )
        __assert_fail("reply->element[0]->type == 1", "async.c", 0x1ABu, "__redisGetSubscribeCallback");
      v21 = *(char **)(*v20 + 32LL);
      v44 = v21;
      v22 = __ctype_tolower_loc();
      v23 = *v21;
      patterns = ac->sub.patterns;
      LOBYTE(v22) = (*v22)[v23] == 112;
      v9 = (_BYTE)v22 == 0;
      v46 = (unsigned __int8)v22;
      v25 = v20[1];
      if ( v9 )
        patterns = ac->sub.channels;
      if ( *(_DWORD *)v25 != 1 )
        __assert_fail("reply->element[1]->type == 1", "async.c", 0x1B5u, "__redisGetSubscribeCallback");
      v26 = sdsnewlen(*(const void **)(v25 + 32), *(_QWORD *)(v25 + 24));
      if ( !v26 )
      {
        _redisSetError(&ac->c, 5, "Out of memory");
        v10 = reply[0];
        goto LABEL_15;
      }
      if ( !patterns->size )
        goto LABEL_47;
      v27 = patterns->table[patterns->sizemask & patterns->type->hashFunction(v26)];
      if ( !v27 )
        goto LABEL_47;
      while ( 1 )
      {
        keyCompare = patterns->type->keyCompare;
        if ( !keyCompare )
          break;
        if ( keyCompare(patterns->privdata, v26, v27->key) )
          goto LABEL_38;
LABEL_35:
        v27 = v27->next;
        if ( !v27 )
          goto LABEL_47;
      }
      if ( v26 != v27->key )
        goto LABEL_35;
LABEL_38:
      val = (redisCallback_0 *)v27->val;
      if ( !strcasecmp(&v44[v46], "subscribe") )
        --val->pending_subs;
      cb = *val;
      if ( !strcasecmp(&v44[v46], "unsubscribe") )
      {
        if ( !val->pending_subs )
        {
          if ( patterns->size )
          {
            v36 = patterns->type->hashFunction(v26);
            v37 = patterns->table[patterns->sizemask & v36];
            v47 = patterns->sizemask & v36;
            if ( v37 )
            {
              v45 = 0LL;
              while ( 1 )
              {
                v39 = patterns->type->keyCompare;
                if ( v39 )
                  LOBYTE(v38) = v39(patterns->privdata, v26, v37->key) != 0;
                else
                  v38 = v26 == v37->key;
                if ( v38 )
                  break;
                if ( !v37->next )
                  goto LABEL_42;
                v45 = v37;
                v37 = v37->next;
              }
              if ( v45 )
                v45->next = v37->next;
              else
                patterns->table[v47] = v37->next;
              type = patterns->type;
              keyDestructor = type->keyDestructor;
              if ( keyDestructor )
              {
                keyDestructor(patterns->privdata, v37->key);
                type = patterns->type;
              }
              valDestructor = type->valDestructor;
              if ( valDestructor )
                valDestructor(patterns->privdata, v37->val);
              hiredisAllocFns.freeFn(v37);
              --patterns->used;
            }
          }
        }
LABEL_42:
        v29 = *(_QWORD *)(*((_QWORD *)v2 + 7) + 16LL);
        if ( *(_DWORD *)v29 != 3 )
          __assert_fail("reply->element[2]->type == 3", "async.c", 0x1CCu, "__redisGetSubscribeCallback");
        if ( !*(_QWORD *)(v29 + 8) && !ac->sub.channels->used && !ac->sub.patterns->used )
          ac->c.flags &= ~0x20u;
      }
LABEL_47:
      sdsfree(v26);
      v11 = cb.fn;
      v10 = reply[0];
      if ( !cb.fn )
      {
LABEL_48:
        ac->c.reader->fn->freeObject(v10);
        continue;
      }
      break;
    }
    ac->c.flags |= 0x10u;
    v11(ac, v10, cb.privdata);
    reader = ac->c.reader;
    ac->c.flags &= ~0x10u;
    reader->fn->freeObject(reply[0]);
    if ( (ac->c.flags & 8) == 0 )
      continue;
    break;
  }
  _redisAsyncFree(ac);
};

// Line 594: range 000000000CAC9C50-000000000CAC9C6B
void __fastcall _redisAsyncHandleConnectFailure(redisAsyncContext_0 *ac)
{
  redisConnectCallback *onConnect; // rax

  onConnect = ac->onConnect;
  if ( onConnect )
    onConnect(ac, -1);
  _redisAsyncDisconnect(ac);
};

// Line 627: range 000000000CACA420-000000000CACA4AC
void __fastcall redisAsyncRead(redisAsyncContext_0 *ac)
{
  void (*scheduleTimer)(void *, timeval); // rcx
  timeval *command_timeout; // rax
  void (*addRead)(void *); // rax

  if ( redisBufferRead(&ac->c) == -1 )
  {
    _redisAsyncDisconnect(ac);
    return;
  }
  scheduleTimer = ac->ev.scheduleTimer;
  if ( (ac->c.flags & 2) != 0 )
  {
    if ( scheduleTimer )
    {
      command_timeout = ac->c.command_timeout;
      if ( command_timeout )
      {
LABEL_5:
        if ( command_timeout->tv_sec || command_timeout->tv_usec )
          ((void (__fastcall *)(void *, __time_t, __suseconds_t))scheduleTimer)(
            ac->ev.data,
            command_timeout->tv_sec,
            command_timeout->tv_usec);
      }
    }
  }
  else if ( scheduleTimer )
  {
    command_timeout = ac->c.connect_timeout;
    if ( command_timeout )
      goto LABEL_5;
  }
  addRead = ac->ev.addRead;
  if ( addRead )
    addRead(ac->ev.data);
  redisProcessCallbacks(ac);
};

// Line 642: range 000000000CACA4C0-000000000CACA57A
void __fastcall redisAsyncHandleRead(redisAsyncContext_0 *ac)
{
  unsigned int v1; // ebp
  int flags; // eax
  redisConnectCallback *v3; // rax
  redisConnectCallback *onConnect; // rax
  int v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (ac->c.flags & 2) != 0 )
  {
LABEL_6:
    ac->c.funcs->async_read(ac);
    return;
  }
  v5[0] = 0;
  v1 = redisCheckConnectDone(&ac->c, v5);
  if ( v1 == -1 )
  {
    redisCheckSocketError(&ac->c);
    onConnect = ac->onConnect;
    if ( onConnect )
      onConnect(ac, v1);
    _redisAsyncDisconnect(ac);
  }
  else
  {
    if ( v5[0] == 1 )
    {
      if ( ac->c.connection_type == REDIS_CONN_TCP && redisSetTcpNoDelay(&ac->c) == -1 )
      {
        _redisAsyncHandleConnectFailure(ac);
        return;
      }
      v3 = ac->onConnect;
      if ( v3 )
        v3(ac, 0);
      flags = ac->c.flags | 2;
      ac->c.flags = flags;
    }
    else
    {
      flags = ac->c.flags;
    }
    if ( (flags & 2) != 0 )
      goto LABEL_6;
  }
};

// Line 657: range 000000000CACA580-000000000CACA6B0
void __fastcall redisAsyncWrite(redisAsyncContext_0 *ac)
{
  void (*delWrite)(void *); // rax
  void (*v2)(void *, timeval); // rcx
  timeval *connect_timeout; // rax
  void (*addRead)(void *); // rax
  void (*scheduleTimer)(void *, timeval); // rcx
  timeval *command_timeout; // rax
  int done[6]; // [rsp+0h] [rbp-18h] BYREF

  done[0] = 0;
  if ( redisBufferWrite(&ac->c, done) == -1 )
  {
    _redisAsyncDisconnect(ac);
    return;
  }
  if ( done[0] )
  {
    delWrite = ac->ev.delWrite;
    if ( !delWrite )
      goto LABEL_5;
    goto LABEL_4;
  }
  scheduleTimer = ac->ev.scheduleTimer;
  if ( (ac->c.flags & 2) != 0 )
  {
    if ( !scheduleTimer )
      goto LABEL_23;
    command_timeout = ac->c.command_timeout;
    if ( !command_timeout )
      goto LABEL_23;
  }
  else
  {
    if ( !scheduleTimer )
      goto LABEL_23;
    command_timeout = ac->c.connect_timeout;
    if ( !command_timeout )
      goto LABEL_23;
  }
  if ( command_timeout->tv_sec || command_timeout->tv_usec )
    ((void (__fastcall *)(void *, __time_t, __suseconds_t))scheduleTimer)(
      ac->ev.data,
      command_timeout->tv_sec,
      command_timeout->tv_usec);
LABEL_23:
  delWrite = ac->ev.addWrite;
  if ( delWrite )
LABEL_4:
    delWrite(ac->ev.data);
LABEL_5:
  v2 = ac->ev.scheduleTimer;
  if ( (ac->c.flags & 2) != 0 )
  {
    if ( v2 )
    {
      connect_timeout = ac->c.command_timeout;
      if ( connect_timeout )
      {
LABEL_8:
        if ( connect_timeout->tv_sec || connect_timeout->tv_usec )
          ((void (__fastcall *)(void *, __time_t, __suseconds_t))v2)(
            ac->ev.data,
            connect_timeout->tv_sec,
            connect_timeout->tv_usec);
      }
    }
  }
  else if ( v2 )
  {
    connect_timeout = ac->c.connect_timeout;
    if ( connect_timeout )
      goto LABEL_8;
  }
  addRead = ac->ev.addRead;
  if ( addRead )
    addRead(ac->ev.data);
};

// Line 675: range 000000000CACA6C0-000000000CACA77A
void __fastcall redisAsyncHandleWrite(redisAsyncContext_0 *ac)
{
  unsigned int v1; // ebp
  int flags; // eax
  redisConnectCallback *v3; // rax
  redisConnectCallback *onConnect; // rax
  int v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (ac->c.flags & 2) != 0 )
  {
LABEL_6:
    ac->c.funcs->async_write(ac);
    return;
  }
  v5[0] = 0;
  v1 = redisCheckConnectDone(&ac->c, v5);
  if ( v1 == -1 )
  {
    redisCheckSocketError(&ac->c);
    onConnect = ac->onConnect;
    if ( onConnect )
      onConnect(ac, v1);
    _redisAsyncDisconnect(ac);
  }
  else
  {
    if ( v5[0] == 1 )
    {
      if ( ac->c.connection_type == REDIS_CONN_TCP && redisSetTcpNoDelay(&ac->c) == -1 )
      {
        _redisAsyncHandleConnectFailure(ac);
        return;
      }
      v3 = ac->onConnect;
      if ( v3 )
        v3(ac, 0);
      flags = ac->c.flags | 2;
      ac->c.flags = flags;
    }
    else
    {
      flags = ac->c.flags;
    }
    if ( (flags & 2) != 0 )
      goto LABEL_6;
  }
};

// Line 690: range 000000000CACA780-000000000CACA88D
void __fastcall redisAsyncHandleTimeout(redisAsyncContext_0 *ac)
{
  int v2; // eax
  redisConnectCallback *onConnect; // rax
  redisCallback_0 *i; // rdi
  bool v5; // zf
  redisCallbackFn *cb_8; // [rsp+8h] [rbp-20h]
  void *cb_24; // [rsp+18h] [rbp-10h]

  v2 = ac->c.flags & 2;
  if ( !v2 || ac->replies.head )
  {
    if ( !ac->c.err )
    {
      _redisSetError(&ac->c, 6, "Timeout");
      v2 = ac->c.flags & 2;
    }
    if ( v2 )
      goto LABEL_11;
    onConnect = ac->onConnect;
    if ( !onConnect )
      goto LABEL_11;
    onConnect(ac, -1);
    for ( i = ac->replies.head; i; i = ac->replies.head )
    {
      v5 = i == ac->replies.tail;
      ac->replies.head = i->next;
      if ( v5 )
        ac->replies.tail = 0LL;
      cb_8 = i->fn;
      cb_24 = i->privdata;
      hiredisAllocFns.freeFn(i);
      if ( cb_8 )
      {
        ac->c.flags |= 0x10u;
        cb_8(ac, 0LL, cb_24);
        ac->c.flags &= ~0x10u;
      }
LABEL_11:
      ;
    }
    _redisAsyncDisconnect(ac);
  }
};

// Line 729: range 000000000C600054-000000000C60006F
void __fastcall __noreturn nextArgument(const char *start, const char **str, size_t *len)
{
  __assert_fail("p", "async.c", 0x2D9u, "nextArgument");
};

// Line 737: range 000000000CAC9410-000000000CAC9A7B
int __fastcall _redisAsyncCommand(
        redisAsyncContext_0 *ac,
        redisCallbackFn *fn,
        void *privdata,
        const char *cmd,
        size_t len)
{
  bool v6; // zf
  const char *v7; // rbx
  const char *v8; // rdi
  __int64 v9; // rbp
  char *v10; // rax
  size_t *v11; // rdx
  char *v12; // rbp
  char *v13; // rbx
  const char *v14; // rbx
  void (*scheduleTimer)(void *, timeval); // rcx
  timeval *command_timeout; // rax
  void (*addWrite)(void *); // rax
  redisCallback_0 *v19; // rax
  void *v20; // rdx
  redisCallback_0 *tail; // rdx
  size_t v22; // rbx
  char *v23; // rax
  char *v24; // rbx
  dict *patterns; // r15
  dictEntry_0 *i; // r13
  int (*keyCompare)(void *, const void *, const void *); // rax
  unsigned __int64 size; // rax
  redisCallback_0 *v29; // rax
  void *v30; // rdx
  redisCallback_0 *v31; // rdx
  int v32; // r13d
  dictEntry_0 *j; // r14
  int (*v34)(void *, const void *, const void *); // rax
  dictEntry_0 *v35; // r13
  int (*v36)(void *, const void *, const void *); // rax
  dictType_0 *type; // rax
  void *val; // r14
  void *(*valDup)(void *, const void *); // rdx
  void (*valDestructor)(void *, void *); // rax
  char **v41; // rdx
  dictEntry_0 **v42; // rax
  dictType_0 *v43; // rax
  void *(*keyDup)(void *, const void *); // r8
  __int64 v45; // rax
  void *(*v46)(void *, const void *); // rax
  int v47; // eax
  int v49; // [rsp+10h] [rbp-78h]
  bool v50; // [rsp+17h] [rbp-71h]
  __int64 *v52; // [rsp+28h] [rbp-60h]
  redisCallback *v53; // [rsp+30h] [rbp-58h] BYREF
  redisCallbackFn *fna; // [rsp+38h] [rbp-50h]
  __int64 v55; // [rsp+40h] [rbp-48h]
  void *v56; // [rsp+48h] [rbp-40h]

  v49 = ac->c.flags & 0xC;
  if ( v49 )
    return -1;
  v6 = *cmd == 36;
  fna = fn;
  v56 = privdata;
  LODWORD(v55) = 1;
  if ( v6 )
  {
    v7 = cmd;
  }
  else
  {
    v7 = strchr(cmd, 36);
    if ( !v7 )
      goto LABEL_92;
  }
  v8 = v7;
  v9 = (int)strtol(v7 + 1, 0LL, 10);
  v10 = strchr(v7, 13);
  if ( !v10 )
LABEL_93:
    nextArgument(v8, (const char **)0xD, v11);
  v12 = &v10[v9 + 4];
  v13 = v10 + 2;
  if ( !v12 )
LABEL_92:
    __assert_fail("p != ((void *)0)", "async.c", 0x2F8u, "__redisAsyncCommand");
  v50 = (*__ctype_tolower_loc())[v10[2]] == 112;
  v14 = &v13[v50];
  if ( *v12 == 36 && !strncasecmp(v14, "subscribe\r\n", 0xBuLL) )
  {
    ac->c.flags |= 0x20u;
    while ( 1 )
    {
LABEL_31:
      if ( *v12 != 36 )
      {
        v12 = strchr(v12, 36);
        if ( !v12 )
          goto LABEL_9;
      }
      v8 = v12;
      v22 = (int)strtol(v12 + 1, 0LL, 10);
      v23 = strchr(v12, 13);
      if ( !v23 )
        goto LABEL_93;
      v12 = &v23[v22 + 4];
      if ( &v23[v22] == (char *)-4LL )
        goto LABEL_9;
      v24 = sdsnewlen(v23 + 2, v22);
      if ( !v24 )
      {
        _redisSetError(&ac->c, 5, "Out of memory");
        return -1;
      }
      patterns = ac->sub.patterns;
      if ( !v50 )
        patterns = ac->sub.channels;
      if ( !patterns->size )
        goto LABEL_80;
      for ( i = patterns->table[patterns->sizemask & patterns->type->hashFunction(v24)]; i; i = i->next )
      {
        keyCompare = patterns->type->keyCompare;
        if ( keyCompare )
        {
          if ( keyCompare(patterns->privdata, v24, i->key) )
            goto LABEL_45;
        }
        else if ( v24 == i->key )
        {
LABEL_45:
          LODWORD(v55) = *((_DWORD *)i->val + 4) + 1;
          size = patterns->size;
          goto LABEL_53;
        }
      }
      size = patterns->size;
LABEL_53:
      if ( size )
      {
        if ( patterns->used != size )
          goto LABEL_55;
        v47 = dictExpand(patterns, 2 * size);
      }
      else
      {
LABEL_80:
        v47 = dictExpand(patterns, 4uLL);
      }
      if ( v47 == 1 )
        goto LABEL_61;
LABEL_55:
      v32 = patterns->type->hashFunction(v24) & LODWORD(patterns->sizemask);
      for ( j = patterns->table[v32]; j; j = j->next )
      {
        v34 = patterns->type->keyCompare;
        if ( v34 )
        {
          if ( v34(patterns->privdata, v24, j->key) )
            goto LABEL_61;
        }
        else if ( v24 == j->key )
        {
          goto LABEL_61;
        }
      }
      if ( v32 == -1 || (v41 = (char **)hiredisAllocFns.mallocFn(0x18uLL)) == 0LL )
      {
LABEL_61:
        if ( !patterns->size )
          goto LABEL_72;
        v35 = patterns->table[patterns->sizemask & patterns->type->hashFunction(v24)];
        if ( !v35 )
          goto LABEL_72;
        while ( 1 )
        {
          v36 = patterns->type->keyCompare;
          if ( v36 )
          {
            if ( v36(patterns->privdata, v24, v35->key) )
              goto LABEL_68;
          }
          else if ( v24 == v35->key )
          {
LABEL_68:
            type = patterns->type;
            val = v35->val;
            valDup = type->valDup;
            if ( valDup )
            {
              v35->val = valDup(patterns->privdata, &v53);
              type = patterns->type;
            }
            else
            {
              v35->val = &v53;
            }
            valDestructor = type->valDestructor;
            if ( valDestructor )
              valDestructor(patterns->privdata, val);
LABEL_72:
            sdsfree(v24);
            goto LABEL_31;
          }
          v35 = v35->next;
          if ( !v35 )
            goto LABEL_72;
        }
      }
      v42 = &patterns->table[v32];
      v41[2] = (char *)*v42;
      *v42 = (dictEntry_0 *)v41;
      v43 = patterns->type;
      keyDup = v43->keyDup;
      if ( keyDup )
      {
        v52 = (__int64 *)v41;
        v45 = (__int64)keyDup(patterns->privdata, v24);
        v41 = (char **)v52;
        *v52 = v45;
        v43 = patterns->type;
      }
      else
      {
        *v41 = v24;
      }
      v46 = v43->valDup;
      if ( v46 )
        v41[1] = (char *)v46(patterns->privdata, &v53);
      else
        v41[1] = (char *)&v53;
      ++patterns->used;
    }
  }
  if ( !strncasecmp(v14, "unsubscribe\r\n", 0xDuLL) )
  {
    if ( (ac->c.flags & 0x20) != 0 )
      goto LABEL_9;
    return -1;
  }
  if ( !strncasecmp(v14, "monitor\r\n", 9uLL) )
  {
    ac->c.flags |= 0x40u;
    v29 = (redisCallback_0 *)hiredisAllocFns.mallocFn(0x20uLL);
    if ( !v29 )
      goto LABEL_9;
  }
  else
  {
    if ( (ac->c.flags & 0x20) != 0 )
    {
      v19 = (redisCallback_0 *)hiredisAllocFns.mallocFn(0x20uLL);
      if ( v19 )
      {
        v19->next = v53;
        v19->fn = fna;
        *(_QWORD *)&v19->pending_subs = v55;
        v20 = v56;
        v19->next = 0LL;
        v19->privdata = v20;
        if ( !ac->sub.invalid.head )
          ac->sub.invalid.head = v19;
        tail = ac->sub.invalid.tail;
        if ( tail )
          tail->next = v19;
        ac->sub.invalid.tail = v19;
      }
      goto LABEL_9;
    }
    v29 = (redisCallback_0 *)hiredisAllocFns.mallocFn(0x20uLL);
    if ( !v29 )
      goto LABEL_9;
  }
  v29->next = v53;
  v29->fn = fna;
  *(_QWORD *)&v29->pending_subs = v55;
  v30 = v56;
  v29->next = 0LL;
  v29->privdata = v30;
  if ( !ac->replies.head )
    ac->replies.head = v29;
  v31 = ac->replies.tail;
  if ( v31 )
    v31->next = v29;
  ac->replies.tail = v29;
LABEL_9:
  _redisAppendCommand(&ac->c, cmd, len);
  scheduleTimer = ac->ev.scheduleTimer;
  if ( (ac->c.flags & 2) != 0 )
  {
    if ( scheduleTimer )
    {
      command_timeout = ac->c.command_timeout;
      if ( command_timeout )
        goto LABEL_12;
    }
  }
  else if ( scheduleTimer )
  {
    command_timeout = ac->c.connect_timeout;
    if ( command_timeout )
    {
LABEL_12:
      if ( command_timeout->tv_sec || command_timeout->tv_usec )
        ((void (__fastcall *)(void *, __time_t, __suseconds_t))scheduleTimer)(
          ac->ev.data,
          command_timeout->tv_sec,
          command_timeout->tv_usec);
    }
  }
  addWrite = ac->ev.addWrite;
  if ( addWrite )
    addWrite(ac->ev.data);
  return v49;
};

// Line 823: range 000000000CACA8A0-000000000CACA8FD
int __fastcall redisvAsyncCommand(
        redisAsyncContext_0 *ac,
        redisCallbackFn *fn,
        void *privdata,
        const char *format,
        __va_list_tag *ap)
{
  int v6; // eax
  int v7; // ebx
  char *cmd; // [rsp+0h] [rbp-28h] BYREF

  v6 = redisvFormatCommand(&cmd, format, ap);
  if ( v6 < 0 )
    return -1;
  v7 = _redisAsyncCommand(ac, fn, privdata, cmd, v6);
  hiredisAllocFns.freeFn(cmd);
  return v7;
};

// Line 838: range 000000000CACA900-000000000CACA984
int redisAsyncCommand(redisAsyncContext_0 *ac, redisCallbackFn *fn, void *privdata, const char *format, ...)
{
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, format);
  return redisvAsyncCommand(ac, fn, privdata, format, (__va_list_tag *)ap);
};

// Line 847: range 000000000CACA990-000000000CACA9E5
int __fastcall redisAsyncCommandArgv(
        redisAsyncContext_0 *ac,
        redisCallbackFn *fn,
        void *privdata,
        int argc,
        const char **argv,
        const size_t *argvlen)
{
  int v7; // eax
  int v8; // ebx
  sds cmd; // [rsp+0h] [rbp-28h] BYREF

  v7 = redisFormatSdsCommandArgv(&cmd, argc, argv, argvlen);
  if ( v7 < 0 )
    return -1;
  v8 = _redisAsyncCommand(ac, fn, privdata, cmd, v7);
  sdsfree(cmd);
  return v8;
};

// Line 860: range 000000000CACA9F0-000000000CACAA0E
// attributes: thunk
int __fastcall redisAsyncFormattedCommand(
        redisAsyncContext_0 *ac,
        redisCallbackFn *fn,
        void *privdata,
        const char *cmd,
        size_t len)
{
  return _redisAsyncCommand(ac, fn, privdata, cmd, len);
};

// Line 870: range 000000000CACAD70-000000000CACAE07
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall redisAsyncSetTimeout(redisAsyncContext_0 *ac, timeval tv)
{
  timeval *command_timeout; // rax
  __int64 v3; // rsi
  __suseconds_t tv_usec; // [rsp+8h] [rbp-20h]

  command_timeout = ac->c.command_timeout;
  if ( command_timeout
    || (tv_usec = tv.tv_usec,
        command_timeout = (timeval *)hiredisAllocFns.callocFn(1LL, 16LL),
        ac->c.command_timeout = command_timeout,
        tv.tv_usec = tv_usec,
        command_timeout) )
  {
    if ( command_timeout->tv_sec == v3 && command_timeout->tv_usec == tv.tv_usec )
    {
      return 0LL;
    }
    else
    {
      command_timeout->tv_sec = tv.tv_sec;
      command_timeout->tv_usec = tv.tv_usec;
      return 0LL;
    }
  }
  else
  {
    _redisSetError(&ac->c, 5, "Out of memory");
    ac->err = ac->c.err;
    ac->errstr = ac->c.errstr;
    return 0xFFFFFFFFLL;
  }
};
