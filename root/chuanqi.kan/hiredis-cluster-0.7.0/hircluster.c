// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hircluster.c

// Line 99: range 000000000CAB7FD0-000000000CAB7FE8
void __fastcall listClusterNodeDestructor(void *val)
{
  cluster_node_deinit((cluster_node_0 *)val);
  hiredisAllocFns.freeFn(val);
};

// Line 111: range 000000000CAB7D50-000000000CAB7E6D
int __fastcall dictSdsKeyCompare(void *privdata, const void *key1, const void *key2)
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

// Line 125: range 000000000CAB7A10-000000000CAB7A13
void __fastcall dictSdsDestructor(void *privdata, void *val)
{
  sdsfree((sds)val);
};

// Line 128: range 000000000CAB7FF0-000000000CAB800B
void __fastcall dictClusterNodeDestructor(void *privdata, void *val)
{
  cluster_node_deinit((cluster_node_0 *)val);
  hiredisAllocFns.freeFn(val);
};

// Line 164: range 000000000CAB7A20-000000000CAB7AA0
// attributes: thunk
void __fastcall listCommandFree(void *command)
{
  command_destroy((cmd *)command);
};

// Line 224: range 000000000CAB7C20-000000000CAB7C70
void __fastcall _redisClusterSetError_1(redisClusterContext_0 *cc, const char *type, const char *str)
{
  size_t v4; // rbp
  size_t v5; // rax
  char *errstr; // rdi

  if ( cc )
  {
    cc->err = 5;
    if ( !type )
      _redisClusterSetError_0(cc, 0, str);
    v4 = 127LL;
    v5 = strlen(type);
    errstr = cc->errstr;
    if ( v5 <= 0x7F )
      v4 = v5;
    memcpy(errstr, type, v4);
    cc->errstr[v4] = 0;
  }
};

// Line 224: range 000000000CAB7C80-000000000CAB7CD0
void __fastcall _redisClusterSetError_2(redisClusterContext_0 *cc, const char *type, const char *str)
{
  size_t v4; // rbp
  size_t v5; // rax
  char *errstr; // rdi

  if ( cc )
  {
    cc->err = 2;
    if ( !type )
      _redisClusterSetError_0(cc, 0, str);
    v4 = 127LL;
    v5 = strlen(type);
    errstr = cc->errstr;
    if ( v5 <= 0x7F )
      v4 = v5;
    memcpy(errstr, type, v4);
    cc->errstr[v4] = 0;
  }
};

// Line 240: range 000000000C600014-000000000C60002F
void __fastcall __noreturn _redisClusterSetError_0(redisClusterContext_0 *cc, int type, const char *str)
{
  __assert_fail("type == 1", "hircluster.c", 0xF0u, "__redisClusterSetError");
};

// Line 252: range 000000000CAB7B20-000000000CAB7C12
int __fastcall cluster_reply_error_type(redisReply_0 *reply)
{
  size_t len; // rdx
  char *str; // r8
  int result; // eax

  len = reply->len;
  if ( len <= 5 )
  {
    result = 6;
    if ( len <= 3 )
      return result;
    str = reply->str;
  }
  else
  {
    str = reply->str;
    result = 1;
    if ( !memcmp(str, "MOVED", 5uLL) )
      return result;
  }
  result = 2;
  if ( !memcmp(str, "ASK", 3uLL) )
    return result;
  if ( len <= 8 )
    return 6;
  LOBYTE(result) = 3;
  if ( !memcmp(str, "TRYAGAIN", 8uLL) )
    return result;
  if ( len == 9 )
    return 6;
  LOBYTE(result) = 4;
  if ( memcmp(str, "CROSSSLOT", 9uLL) )
  {
    if ( len > 0xB )
      return 6 - (memcmp(str, "CLUSTERDOWN", 0xBuLL) == 0);
    return 6;
  }
  return result;
};

// Line 285: range 000000000CAB7E80-000000000CAB7FC1
void __fastcall cluster_node_deinit(cluster_node_0 *node)
{
  redisAsyncContext_0 *acon; // rdi
  hilist *slots; // rdi
  hilist *slaves; // rdi
  hiarray *migrating; // rdi
  void *v6; // rax
  _DWORD *v7; // rbx
  char *v8; // rdi
  hiarray *importing; // rdi
  void *v10; // rax
  _DWORD *v11; // rbx
  char *v12; // rdi

  if ( node )
  {
    sdsfree(node->name);
    sdsfree(node->addr);
    sdsfree(node->host);
    node->role = 0;
    node->port = 0;
    redisFree(node->con);
    acon = node->acon;
    node->con = 0LL;
    if ( acon )
      redisAsyncFree(acon);
    slots = node->slots;
    if ( slots )
      listRelease(slots);
    slaves = node->slaves;
    if ( slaves )
      listRelease(slaves);
    migrating = node->migrating;
    if ( migrating )
    {
      for ( ; migrating->nelem; migrating = node->migrating )
      {
        v6 = hiarray_pop(migrating);
        v7 = *(_DWORD **)v6;
        v8 = *(char **)(*(_QWORD *)v6 + 8LL);
        *v7 = 0;
        v7[1] = 0;
        *((_QWORD *)v7 + 2) = 0LL;
        sdsfree(v8);
        *((_QWORD *)v7 + 1) = 0LL;
        hiredisAllocFns.freeFn(v7);
      }
      hiarray_destroy(migrating);
      node->migrating = 0LL;
    }
    importing = node->importing;
    if ( importing )
    {
      for ( ; importing->nelem; importing = node->importing )
      {
        v10 = hiarray_pop(importing);
        v11 = *(_DWORD **)v10;
        v12 = *(char **)(*(_QWORD *)v10 + 8LL);
        *v11 = 0;
        v11[1] = 0;
        *((_QWORD *)v11 + 2) = 0LL;
        sdsfree(v12);
        *((_QWORD *)v11 + 1) = 0LL;
        hiredisAllocFns.freeFn(v11);
      }
      hiarray_destroy(importing);
      node->importing = 0LL;
    }
  }
};

// Line 400: range 000000000C5FFFA6-000000000C600013
copen_slot_0 *__fastcall cluster_open_slot_create(
        uint32_t slot_num,
        int migrate,
        sds remote_name,
        cluster_node_0 *node)
{
  copen_slot_0 *v6; // rax
  copen_slot_0 *v7; // rbx
  sds v8; // rdx
  copen_slot_0 *result; // rax

  v6 = (copen_slot_0 *)hiredisAllocFns.callocFn(1LL, 24LL);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v6->slot_num = slot_num;
  v6->migrate = migrate;
  v6->node = node;
  v8 = sdsdup(remote_name);
  v7->remote_name = v8;
  result = v7;
  if ( !v8 )
  {
    hiredisAllocFns.freeFn(v7);
    return 0LL;
  }
  return result;
};

// Line 420: range 000000000CAB79D0-000000000CAB7A09
void __fastcall cluster_open_slot_destroy(copen_slot_0 *oslot)
{
  oslot->slot_num = 0;
  oslot->migrate = 0;
  oslot->node = 0LL;
  sdsfree(oslot->remote_name);
  oslot->remote_name = 0LL;
  hiredisAllocFns.freeFn(oslot);
};

// Line 474: range 000000000CAB9B00-000000000CAB9E36
cluster_node_0 *__fastcall node_get_with_slots(
        redisClusterContext_0 *cc,
        redisReply_0 *host_elem,
        redisReply_0 *port_elem,
        uint8_t role)
{
  __int64 integer; // rdi
  cluster_node_0 *v8; // r13
  uint8_t v9; // cl
  char *v10; // rax
  sds v11; // rax
  sds v12; // rax
  __int64 v13; // rax
  hilist_0 *v14; // rax
  uint8_t v16; // [rsp+Ch] [rbp-2Ch]

  if ( !host_elem || !port_elem )
    return 0LL;
  if ( host_elem->type != 1 || !host_elem->len )
  {
    if ( cc )
    {
      strcpy(cc->errstr, "Command(cluster slots) reply error: node ip is not string.");
      cc->err = 2;
    }
    return 0LL;
  }
  if ( port_elem->type != 3 || (integer = port_elem->integer, integer <= 0) )
  {
    if ( cc )
    {
      strcpy(cc->errstr, "Command(cluster slots) reply error: node port is not integer.");
      cc->err = 2;
    }
    return 0LL;
  }
  if ( !hi_valid_port(integer) )
  {
    if ( cc )
    {
      strcpy(cc->errstr, "Command(cluster slots) reply error: node port is not valid.");
      cc->err = 2;
    }
    return 0LL;
  }
  v8 = (cluster_node_0 *)hiredisAllocFns.callocFn(1LL, 80LL);
  if ( v8 )
  {
    v9 = role;
    if ( role == 1 )
    {
      v14 = listCreate();
      v8->slots = v14;
      if ( !v14 )
        goto oom;
      v9 = role;
      v14->free = listClusterSlotDestructor;
    }
    v16 = v9;
    v10 = sdsnewlen(host_elem->str, host_elem->len);
    v8->addr = v10;
    if ( v10 )
    {
      v11 = sdscatfmt(v10, off_1A0D5769, port_elem->integer);
      v8->addr = v11;
      if ( v11 )
      {
        v12 = sdsnewlen(host_elem->str, host_elem->len);
        v8->host = v12;
        if ( v12 )
        {
          v13 = port_elem->integer;
          v8->name = 0LL;
          v8->port = v13;
          v8->role = v16;
          return v8;
        }
      }
    }
  }
oom:
  if ( cc )
  {
    cc->err = 5;
    strcpy(cc->errstr, "Out of memory");
  }
  if ( !v8 )
    return 0LL;
  sdsfree(v8->addr);
  sdsfree(v8->host);
  hiredisAllocFns.freeFn(v8);
  return 0LL;
};

// Line 557: range 000000000CAB8010-000000000CAB8205
cluster_node_0 *__fastcall node_get_with_nodes(
        redisClusterContext_0 *cc,
        sds *node_infos,
        int info_count,
        uint8_t role)
{
  cluster_node_0 *v6; // rbx
  sds v7; // rax
  const char *v8; // r12
  char *v9; // rax
  char *v10; // r13
  sds v11; // rax
  char *v12; // r13
  char *v13; // rax
  size_t v14; // rsi
  cluster_node_0 *result; // rax
  hilist_0 *slots; // rdi
  hilist_0 *v17; // rax

  if ( info_count <= 7 )
    return 0LL;
  v6 = (cluster_node_0 *)hiredisAllocFns.callocFn(1LL, 80LL);
  if ( !v6 )
    goto oom;
  if ( role == 1 )
  {
    v17 = listCreate();
    v6->slots = v17;
    if ( !v17 )
      goto oom;
    v17->free = listClusterSlotDestructor;
  }
  v6->name = *node_infos;
  v7 = node_infos[1];
  v6->role = role;
  v6->addr = v7;
  v8 = node_infos[1];
  v9 = strrchr(v8, 58);
  v10 = v9;
  if ( !v9 )
  {
    if ( cc )
    {
      cc->err = 2;
      strcpy(cc->errstr, "server address is incorrect, port separator missing.");
    }
LABEL_13:
    slots = v6->slots;
    if ( slots )
      listRelease(slots);
    sdsfree(v6->host);
    hiredisAllocFns.freeFn(v6);
    return 0LL;
  }
  v11 = sdsnewlen(v8, v9 - v8);
  v6->host = v11;
  if ( !v11 )
  {
oom:
    if ( cc )
    {
      cc->err = 5;
      strcpy(cc->errstr, "Out of memory");
    }
    if ( !v6 )
      return 0LL;
    goto LABEL_13;
  }
  v12 = v10 + 1;
  v13 = strchr(v12, 64);
  v14 = v13 - v12;
  if ( !v13 )
    v14 = strlen(v12);
  v6->port = hi_atoi((uint8_t *)v12, v14);
  *node_infos = 0LL;
  result = v6;
  node_infos[1] = 0LL;
  return result;
};

// Line 669: range 000000000CAB79A0-000000000CAB79B2
int __fastcall cluster_slot_start_cmp(const void *t1, const void *t2)
{
  return **(_DWORD **)t2 < **(_DWORD **)t1 ? 1 : -1;
};

// Line 675: range 000000000CAB97D0-000000000CAB9AF3
int __fastcall cluster_master_slave_mapping_with_name(
        redisClusterContext_0 *cc,
        dict_0 **nodes,
        cluster_node_0 *node,
        sds master_name)
{
  dict_0 *v7; // rdi
  dictEntry_0 *v9; // rax
  const char *v10; // rdx
  dictEntry_0 *v11; // r14
  void *val; // rbp
  uint8_t role; // al
  hilist_0 *v15; // rdi
  char v16; // al
  hilist_0 *v17; // rdi
  bool v18; // zf
  listNode_0 *head; // r15
  size_t v20; // rsi
  sds v21; // rax
  char *v22; // rbp
  hilist_0 *v23; // rax
  void *(*valDup)(void *, const void *); // rax
  hilist_0 *v25; // rax

  if ( !node || !master_name )
    return -1;
  v7 = *nodes;
  if ( !*nodes )
  {
    v7 = dictCreate(&clusterNodesRefDictType, 0LL);
    *nodes = v7;
    if ( !v7 )
      goto oom;
  }
  v9 = dictFind(v7, master_name);
  v11 = v9;
  if ( !v9 )
  {
    switch ( *(master_name - 1) & 7 )
    {
      case 0:
        v20 = (unsigned __int8)*(master_name - 1) >> 3;
        break;
      case 1:
        v20 = (unsigned __int8)*(master_name - 3);
        break;
      case 2:
        v20 = *(unsigned __int16 *)(master_name - 5);
        break;
      case 3:
        v20 = *(unsigned int *)(master_name - 9);
        break;
      case 4:
        v20 = *(_QWORD *)(master_name - 17);
        break;
      default:
        v20 = 0LL;
        break;
    }
    v21 = sdsnewlen(master_name, v20);
    v22 = v21;
    if ( v21 )
    {
      if ( !dictAdd(*nodes, v21, node) )
        return 0;
      sdsfree(v22);
    }
    goto oom;
  }
  val = v9->val;
  if ( val )
  {
    role = node->role;
    if ( role != 1 )
    {
      if ( role != 2 )
        return 0;
      v15 = (hilist_0 *)*((_QWORD *)val + 7);
      if ( !v15 )
      {
        v23 = listCreate();
        *((_QWORD *)val + 7) = v23;
        if ( !v23 )
          goto oom;
        v15 = v23;
        v23->free = listClusterNodeDestructor;
      }
      if ( listAddNodeTail(v15, node) )
        return 0;
      goto oom;
    }
    v16 = *((_BYTE *)val + 26);
    if ( v16 == 1 )
    {
      _redisClusterSetError_2(cc, "two masters have the same name", v10);
      return -1;
    }
    else
    {
      if ( v16 != 2 )
        return 0;
      if ( !node->slaves )
      {
        v25 = listCreate();
        node->slaves = v25;
        if ( !v25 )
          goto oom;
        v25->free = listClusterNodeDestructor;
      }
      v17 = (hilist_0 *)*((_QWORD *)val + 7);
      if ( v17 )
      {
        v18 = v17->len == 0;
        v17->free = 0LL;
        if ( !v18 )
        {
          do
          {
            head = v17->head;
            if ( !listAddNodeHead(node->slaves, v17->head->value) )
              goto oom;
            listDelNode(*((hilist_0 **)val + 7), head);
            v17 = (hilist_0 *)*((_QWORD *)val + 7);
          }
          while ( v17->len );
        }
        listRelease(v17);
        *((_QWORD *)val + 7) = 0LL;
      }
      if ( !listAddNodeHead(node->slaves, val) )
      {
oom:
        if ( cc )
        {
          cc->err = 5;
          strcpy(cc->errstr, "Out of memory");
        }
        return -1;
      }
      valDup = (*nodes)->type->valDup;
      if ( valDup )
      {
        v11->val = valDup((*nodes)->privdata, node);
        return 0;
      }
      v11->val = node;
      return 0;
    }
  }
  else
  {
    if ( !cc )
      return -1;
    cc->err = 2;
    strcpy(cc->errstr, "dict get value null");
    return -1;
  }
};

// Line 774: range 000000000CAB9E40-000000000CABA818
dict_0 *__fastcall parse_cluster_slots(redisClusterContext_0 *cc, redisReply_0 *reply, int flags)
{
  redisClusterContext_0 *v3; // r14
  __int16 v4; // bx
  dict_0 *v5; // r13
  _DWORD *v6; // rbp
  redisReply **element; // rax
  redisReply *v9; // rbp
  cluster_node_0 *val; // r12
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  unsigned __int64 elements; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  _QWORD *v16; // r14
  redisReply *v17; // r13
  redisReply *v18; // r8
  redisReply **v19; // rax
  redisReply *v20; // r8
  redisReply_0 **v21; // rax
  redisReply_0 *v22; // rbp
  redisReply_0 *v23; // r15
  cluster_node_0 *v24; // rbp
  hilist_0 *slaves; // rdi
  redisReply *v26; // rax
  __int64 integer; // rax
  bool v28; // cf
  char *v29; // rax
  sds v30; // rax
  char *v31; // r12
  cluster_node_0 *v32; // rax
  sds addr; // rdi
  hilist_0 *slots; // rdi
  size_t v35; // rsi
  sds v36; // rax
  char *v37; // rbp
  hilist_0 *v38; // rdi
  hilist_0 *v39; // rax
  hilist_0 *v40; // rax
  cluster_node_0 *v41; // rdx
  char *v42; // rcx
  cluster_node_0 *v43; // rbx
  hilist_0 *v44; // rax
  int v45; // [rsp+0h] [rbp-68h]
  cluster_node_0 *v46; // [rsp+0h] [rbp-68h]
  dict_0 *nodes; // [rsp+10h] [rbp-58h]
  uint32_t i; // [rsp+1Ch] [rbp-4Ch]
  dictEntry_0 *den; // [rsp+28h] [rbp-40h]

  if ( !reply )
    return 0LL;
  v3 = cc;
  v4 = flags;
  v5 = dictCreate(&clusterNodesDictType, 0LL);
  if ( !v5 )
  {
LABEL_59:
    v6 = 0LL;
oom:
    if ( v3 )
    {
      v3->err = 5;
      strcpy(v3->errstr, "Out of memory");
    }
    if ( !v5 )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( reply->type != 2 || !reply->elements )
  {
    if ( cc )
    {
      strcpy(cc->errstr, "Command(cluster slots) reply error: reply is not an array.");
      cc->err = 2;
    }
    v6 = 0LL;
LABEL_7:
    dictRelease(v5);
LABEL_8:
    if ( v6 )
    {
      *v6 = 0;
      v6[1] = 0;
      *((_QWORD *)v6 + 1) = 0LL;
      hiredisAllocFns.freeFn(v6);
    }
    return 0LL;
  }
  element = reply->element;
  if ( (*element)->type != 2 || (*element)->elements <= 2 )
  {
    v6 = 0LL;
LABEL_56:
    if ( v3 )
    {
      strcpy(v3->errstr, "Command(cluster slots) reply error: first sub_reply is not an array.");
      v3->err = 2;
    }
    goto LABEL_7;
  }
  v45 = v4 & 0x1000;
  i = 0;
  v9 = *element;
  nodes = v5;
  val = 0LL;
  while ( 1 )
  {
    v11 = hiredisAllocFns.callocFn(1LL, 16LL);
    v12 = v11;
    if ( !v11 )
    {
      v5 = nodes;
      v3 = cc;
      goto LABEL_59;
    }
    elements = v9->elements;
    v11[1] = 0LL;
    if ( elements )
    {
      v14 = 0LL;
      v15 = 0;
      v16 = v11;
      v17 = v9;
      while ( 1 )
      {
        v19 = v17->element;
        if ( v15 )
        {
          if ( v15 == 1 )
          {
            v26 = v19[v14];
            if ( v26->type != 3 )
            {
              v6 = v16;
              v5 = nodes;
              if ( cc )
              {
                strcpy(cc->errstr, "Command(cluster slots) reply error: slot end is not an integer.");
                cc->err = 2;
              }
              goto LABEL_7;
            }
            integer = v26->integer;
            v28 = (unsigned int)integer < *(_DWORD *)v16;
            *((_DWORD *)v16 + 1) = integer;
            if ( v28 )
            {
              v6 = v16;
              v5 = nodes;
              if ( cc )
              {
                strcpy(cc->errstr, "Command(cluster slots) reply error: slot begin is bigger than slot end.");
                cc->err = 2;
              }
              goto LABEL_7;
            }
          }
          else
          {
            v20 = v19[v14];
            if ( v20->type != 2 || v20->elements != 3 )
            {
              v6 = v16;
              v5 = nodes;
              if ( cc )
              {
                strcpy(cc->errstr, "Command(cluster slots) reply error: nodes sub_reply is not an correct array.");
                cc->err = 2;
              }
              goto LABEL_7;
            }
            v21 = v20->element;
            v22 = v21[1];
            v23 = *v21;
            if ( !v22 || !v23 || v23->type != 1 || v22->type != 3 )
            {
              v6 = v16;
              v5 = nodes;
              if ( cc )
              {
                cc->err = 2;
                strcpy(cc->errstr, "Command(cluster slots) reply error: master ip or port is not correct.");
              }
              goto LABEL_7;
            }
            if ( v15 == 2 )
            {
              v29 = sdsnewlen(v23->str, v23->len);
              if ( !v29 || (v30 = sdscatfmt(v29, off_1A0D5769, v22->integer), (v31 = v30) == 0LL) )
              {
LABEL_84:
                v6 = v16;
                v5 = nodes;
                v3 = cc;
                goto oom;
              }
              den = dictFind(nodes, v30);
              sdsfree(v31);
              if ( den )
              {
                val = (cluster_node_0 *)den->val;
                if ( v16 && val && val->role == 1 )
                {
                  slots = val->slots;
                  if ( slots )
                  {
LABEL_50:
                    if ( listAddNodeTail(slots, v16) )
                    {
                      v16[1] = val;
                      v12 = 0LL;
                      break;
                    }
                  }
                  else
                  {
                    v44 = listCreate();
                    val->slots = v44;
                    if ( v44 )
                    {
                      slots = val->slots;
                      v44->free = listClusterSlotDestructor;
                      goto LABEL_50;
                    }
                  }
                }
                v6 = v16;
                v3 = cc;
                v5 = nodes;
                goto oom;
              }
              v32 = node_get_with_slots(cc, v23, v22, 1u);
              val = v32;
              if ( !v32 )
              {
LABEL_90:
                v6 = v16;
                v5 = nodes;
                goto LABEL_7;
              }
              addr = v32->addr;
              switch ( *(addr - 1) & 7 )
              {
                case 0:
                  v35 = (unsigned __int8)*(addr - 1) >> 3;
                  break;
                case 1:
                  v35 = (unsigned __int8)*(addr - 3);
                  break;
                case 2:
                  v35 = *(unsigned __int16 *)(addr - 5);
                  break;
                case 3:
                  v35 = *(unsigned int *)(addr - 9);
                  break;
                case 4:
                  v35 = *(_QWORD *)(addr - 17);
                  break;
                default:
                  v35 = 0LL;
                  break;
              }
              v36 = sdsnewlen(addr, v35);
              v37 = v36;
              if ( !v36 )
              {
                v6 = v16;
                v43 = val;
                v5 = nodes;
                v3 = cc;
                goto LABEL_93;
              }
              if ( dictAdd(nodes, v36, val) )
              {
                v42 = v37;
                v43 = val;
                v6 = v16;
                v5 = nodes;
                v3 = cc;
                sdsfree(v42);
LABEL_93:
                cluster_node_deinit(v43);
                hiredisAllocFns.freeFn(v43);
                goto oom;
              }
              if ( !v16 || val->role != 1 )
                goto LABEL_84;
              v38 = val->slots;
              if ( !v38 )
              {
                v40 = listCreate();
                val->slots = v40;
                if ( !v40 )
                  goto LABEL_84;
                v38 = v40;
                v40->free = listClusterSlotDestructor;
              }
              if ( !listAddNodeTail(v38, v16) )
                goto LABEL_84;
              v16[1] = val;
              elements = v17->elements;
              v16 = 0LL;
            }
            else if ( v45 )
            {
              v24 = node_get_with_slots(cc, v23, v22, 2u);
              if ( !v24 )
                goto LABEL_90;
              slaves = val->slaves;
              if ( !slaves )
              {
                v39 = listCreate();
                val->slaves = v39;
                if ( !v39 )
                {
LABEL_91:
                  v41 = v24;
                  v5 = nodes;
                  v6 = v16;
                  v46 = v41;
                  v3 = cc;
                  cluster_node_deinit(v41);
                  hiredisAllocFns.freeFn(v46);
                  goto oom;
                }
                slaves = v39;
                v39->free = listClusterNodeDestructor;
              }
              if ( !listAddNodeTail(slaves, v24) )
                goto LABEL_91;
              elements = v17->elements;
            }
          }
        }
        else
        {
          v18 = v19[v14];
          if ( v18->type != 3 )
          {
            v6 = v16;
            v5 = nodes;
            if ( cc )
            {
              strcpy(cc->errstr, "Command(cluster slots) reply error: slot begin is not an integer.");
              cc->err = 2;
            }
            goto LABEL_7;
          }
          *(_DWORD *)v16 = v18->integer;
        }
        v14 = ++v15;
        if ( v15 >= elements )
        {
          v12 = v16;
          break;
        }
      }
    }
    if ( ++i >= reply->elements )
      return nodes;
    v9 = reply->element[i];
    if ( v9->type != 2 || v9->elements <= 2 )
    {
      v6 = v12;
      v3 = cc;
      v5 = nodes;
      goto LABEL_56;
    }
  }
};

// Line 972: range 000000000CABA820-000000000CABB340
dict_0 *__fastcall parse_cluster_nodes(redisClusterContext_0 *cc, char *str, int str_len, int flags)
{
  __int64 v4; // rbp
  __int16 v5; // bx
  char *v6; // rdi
  char *v7; // rbp
  char *v8; // r15
  sds *v9; // rax
  sds *v10; // r14
  int v11; // r12d
  sds v12; // rax
  __int64 v13; // rsi
  sds v14; // rbx
  int v15; // esi
  dict_0 *result; // rax
  unsigned __int64 v17; // r13
  cluster_node_0 *v18; // rax
  cluster_node_0 *v19; // rbx
  cluster_node_0 *v20; // rax
  sds addr; // rdi
  size_t v22; // rsi
  sds v23; // rax
  char *v24; // rbx
  __int64 v25; // rbx
  const char *v26; // rdi
  int v27; // esi
  sds *v28; // rax
  sds *v29; // r15
  int v30; // esi
  int v31; // eax
  uint8_t *v32; // rdi
  size_t v33; // rsi
  int v34; // r13d
  int v35; // ebp
  int *v36; // rdx
  cluster_node_0 *v37; // rax
  bool v38; // zf
  hilist_0 *v39; // rax
  uint8_t *v40; // rdi
  size_t v41; // rsi
  int v42; // eax
  uint8_t *v43; // rdi
  size_t v44; // rsi
  char *v45; // rdi
  unsigned __int64 v46; // rax
  sds v47; // rdx
  __int64 v48; // rax
  sds v49; // rdx
  sds v50; // r13
  char *v51; // rbp
  size_t v52; // rax
  int v53; // eax
  const char *v54; // rdx
  copen_slot_0 *v55; // r13
  hiarray *migrating; // rax
  hilist_0 *v57; // rax
  int v58; // esi
  unsigned __int64 v59; // rax
  char v60; // al
  sds v61; // r13
  char *v62; // rbp
  size_t v63; // rax
  int v64; // eax
  _QWORD *v65; // rax
  cluster_node_0 *master; // [rsp+10h] [rbp-A8h]
  int v67; // [rsp+18h] [rbp-A0h]
  int v68; // [rsp+1Ch] [rbp-9Ch]
  dict_0 *nodes; // [rsp+20h] [rbp-98h]
  int *v71; // [rsp+30h] [rbp-88h]
  int *v72; // [rsp+30h] [rbp-88h]
  char *v73; // [rsp+40h] [rbp-78h]
  char *pos; // [rsp+48h] [rbp-70h]
  int count_part[4]; // [rsp+50h] [rbp-68h] BYREF
  int count_slot_start_end[4]; // [rsp+60h] [rbp-58h] BYREF
  dict_0 *nodes_name[9]; // [rsp+70h] [rbp-48h] BYREF

  v4 = str_len;
  v5 = flags;
  nodes_name[0] = 0LL;
  count_part[0] = 0;
  count_slot_start_end[0] = 0;
  nodes = dictCreate(&clusterNodesDictType, 0LL);
  if ( !nodes )
  {
LABEL_122:
    v29 = 0LL;
    v10 = 0LL;
    goto oom;
  }
  if ( str >= &str[v4] )
  {
LABEL_18:
    if ( nodes_name[0] )
      dictRelease(nodes_name[0]);
    return nodes;
  }
  v6 = str;
  v67 = v5 & 0x2000;
  v7 = &str[v4];
  v68 = v5 & 0x1000;
  v8 = str;
  while ( 2 )
  {
    while ( *v8 != 10 )
    {
      if ( v7 <= ++v8 )
        goto LABEL_18;
    }
    v9 = sdssplitlen(v6, (int)v8 - (int)v6, " ", 1, count_part);
    v10 = v9;
    if ( !v9 )
      goto LABEL_122;
    v11 = count_part[0];
    if ( count_part[0] <= 7 )
    {
      if ( cc )
      {
        cc->err = 2;
        strcpy(cc->errstr, "split cluster nodes error");
      }
      v58 = v11;
      v29 = 0LL;
      goto LABEL_130;
    }
    v12 = v9[1];
    switch ( *(v12 - 1) & 7 )
    {
      case 0:
        if ( (unsigned __int8)*(v12 - 1) >> 3 == 2LL )
          goto LABEL_13;
        goto LABEL_11;
      case 1:
        v13 = (unsigned __int8)*(v12 - 3);
        goto LABEL_10;
      case 2:
        v13 = *(unsigned __int16 *)(v12 - 5);
        goto LABEL_10;
      case 3:
        v13 = *(unsigned int *)(v12 - 9);
        goto LABEL_10;
      case 4:
        v13 = *(_QWORD *)(v12 - 17);
LABEL_10:
        if ( v13 != 2 )
          goto LABEL_11;
LABEL_13:
        if ( *v12 == 58 && v12[1] == 48 && !v12[2] )
        {
LABEL_16:
          v15 = v11;
LABEL_17:
          sdsfreesplitres(v10, v15);
          v6 = v8 + 1;
          v8 += 2;
          count_part[0] = 0;
          if ( v7 <= v8 )
            goto LABEL_18;
          continue;
        }
LABEL_11:
        v14 = v10[2];
        switch ( *(v14 - 1) & 7 )
        {
          case 0:
            v17 = (unsigned __int8)*(v14 - 1) >> 3;
            goto LABEL_26;
          case 1:
            v17 = (unsigned __int8)*(v14 - 3);
            goto LABEL_26;
          case 2:
            v17 = *(unsigned __int16 *)(v14 - 5);
            goto LABEL_26;
          case 3:
            v17 = *(unsigned int *)(v14 - 9);
            goto LABEL_26;
          case 4:
            v17 = *(_QWORD *)(v14 - 17);
LABEL_26:
            if ( v17 > 6 && !memcmp(v10[2], "myself,", 7uLL) )
            {
              LODWORD(v17) = v17 - 7;
              v14 += 7;
            }
            if ( (int)v17 <= 5 || memcmp(v14, "master", 6uLL) )
              goto LABEL_31;
            v20 = node_get_with_nodes(cc, v10, v11, 1u);
            master = v20;
            if ( !v20 )
              goto LABEL_126;
            addr = v20->addr;
            switch ( *(addr - 1) & 7 )
            {
              case 0:
                v22 = (unsigned __int8)*(addr - 1) >> 3;
                break;
              case 1:
                v22 = (unsigned __int8)*(addr - 3);
                break;
              case 2:
                v22 = *(unsigned __int16 *)(addr - 5);
                break;
              case 3:
                v22 = *(unsigned int *)(addr - 9);
                break;
              case 4:
                v22 = *(_QWORD *)(addr - 17);
                break;
              default:
                v22 = 0LL;
                break;
            }
            v23 = sdsnewlen(addr, v22);
            v24 = v23;
            if ( !v23 )
            {
              v29 = 0LL;
              cluster_node_deinit(master);
              hiredisAllocFns.freeFn(master);
              goto oom;
            }
            if ( dictAdd(nodes, v23, master) )
            {
              if ( cc )
              {
                cc->err = 2;
                strcpy(cc->errstr, "The address already exists in the nodes");
              }
              sdsfree(v24);
              v19 = master;
              goto LABEL_125;
            }
            if ( v68 && cluster_master_slave_mapping_with_name(cc, nodes_name, master, master->name) )
            {
              v19 = master;
LABEL_125:
              cluster_node_deinit(v19);
              hiredisAllocFns.freeFn(v19);
LABEL_126:
              v58 = count_part[0];
              v29 = 0LL;
LABEL_130:
              sdsfreesplitres(v10, v58);
              sdsfreesplitres(v29, count_slot_start_end[0]);
              goto LABEL_117;
            }
            v15 = count_part[0];
            if ( count_part[0] <= 8 )
              goto LABEL_17;
            v25 = 0LL;
            v73 = v7;
            pos = v8;
            break;
          default:
            LODWORD(v17) = 0;
LABEL_31:
            if ( !v68 || (int)v17 <= 4 )
              goto LABEL_16;
            v15 = v11;
            if ( memcmp(v14, "slave", 5uLL) )
              goto LABEL_17;
            v18 = node_get_with_nodes(cc, v10, v11, 2u);
            v19 = v18;
            if ( !v18 )
              goto LABEL_126;
            if ( cluster_master_slave_mapping_with_name(cc, nodes_name, v18, v10[3]) )
              goto LABEL_125;
            v15 = count_part[0];
            goto LABEL_17;
        }
        while ( 1 )
        {
          v26 = v10[v25 + 8];
          switch ( *(v26 - 1) & 7 )
          {
            case 0:
              v27 = (unsigned __int8)*(v26 - 1) >> 3;
              break;
            case 1:
              v27 = *((unsigned __int8 *)v26 - 3);
              break;
            case 2:
              v27 = *(unsigned __int16 *)(v26 - 5);
              break;
            case 3:
              v27 = *(_DWORD *)(v26 - 9);
              break;
            case 4:
              v27 = *(_DWORD *)(v26 - 17);
              break;
            default:
              v27 = 0;
              break;
          }
          v28 = sdssplitlen(v26, v27, "-", 1, count_slot_start_end);
          v29 = v28;
          if ( !v28 )
            goto oom;
          v30 = count_slot_start_end[0];
          if ( count_slot_start_end[0] == 1 )
          {
            v32 = (uint8_t *)*v28;
            switch ( *(*v28 - 1) & 7 )
            {
              case 0:
                v33 = (unsigned __int8)*(*v28 - 1) >> 3;
                break;
              case 1:
                v33 = *(v32 - 3);
                break;
              case 2:
                v33 = *(unsigned __int16 *)(v32 - 5);
                break;
              case 3:
                v33 = *(unsigned int *)(v32 - 9);
                break;
              case 4:
                v33 = *(_QWORD *)(v32 - 17);
                break;
              default:
                v33 = 0LL;
                break;
            }
            v34 = hi_atoi(v32, v33);
            v35 = v34;
          }
          else
          {
            if ( count_slot_start_end[0] != 2 )
            {
              if ( v67 && count_slot_start_end[0] == 3 )
              {
                v45 = *v28;
                switch ( *(*v28 - 1) & 7 )
                {
                  case 0:
                    v46 = (unsigned __int8)*(*v28 - 1) >> 3;
                    goto LABEL_96;
                  case 1:
                    v46 = (unsigned __int8)*(v45 - 3);
                    goto LABEL_96;
                  case 2:
                    if ( *(unsigned __int16 *)(v45 - 5) <= 1uLL )
                      goto LABEL_99;
                    goto LABEL_97;
                  case 3:
                    v46 = *(unsigned int *)(v45 - 9);
                    goto LABEL_96;
                  case 4:
                    v46 = *(_QWORD *)(v45 - 17);
LABEL_96:
                    if ( v46 <= 1 )
                    {
LABEL_99:
                      v30 = 3;
                      break;
                    }
LABEL_97:
                    v47 = v29[1];
                    switch ( *(v47 - 1) & 7 )
                    {
                      case 0:
                        v48 = (unsigned __int8)*(v47 - 1) >> 3;
                        break;
                      case 1:
                        v48 = (unsigned __int8)*(v47 - 3);
                        break;
                      case 2:
                        v48 = *(unsigned __int16 *)(v47 - 5);
                        break;
                      case 3:
                        v48 = *(unsigned int *)(v47 - 9);
                        break;
                      case 4:
                        v48 = *(_QWORD *)(v47 - 17);
                        break;
                      default:
                        goto LABEL_99;
                    }
                    v30 = 3;
                    if ( v48 != 1 )
                      break;
                    v49 = v29[2];
                    switch ( *(v49 - 1) & 7 )
                    {
                      case 0:
                        v59 = (unsigned __int8)*(v49 - 1) >> 3;
                        break;
                      case 1:
                        v59 = (unsigned __int8)*(v49 - 3);
                        break;
                      case 2:
                        v59 = *(unsigned __int16 *)(v49 - 5);
                        break;
                      case 3:
                        v59 = *(unsigned int *)(v49 - 9);
                        break;
                      case 4:
                        v59 = *(_QWORD *)(v49 - 17);
                        break;
                      default:
                        goto LABEL_56;
                    }
                    v30 = 3;
                    if ( v59 <= 1 || *v45 != 91 || v49[v59 - 1] != 93 )
                      break;
                    sdsrange(v45, 1LL, -1LL);
                    sdsrange(v29[2], 0LL, -2LL);
                    v60 = *v29[1];
                    if ( v60 == 62 )
                    {
                      v50 = *v29;
                      v51 = v29[2];
                      v52 = sdslen(*v29);
                      v53 = hi_atoi((uint8_t *)v50, v52);
                      v55 = cluster_open_slot_create(v53, 1, v51, master);
                      if ( !v55 )
                        goto LABEL_155;
                      migrating = master->migrating;
                      if ( !migrating )
                      {
                        migrating = hiarray_create(1u, 8uLL);
                        master->migrating = migrating;
                        if ( !migrating )
                        {
LABEL_113:
                          cluster_open_slot_destroy(v55);
                          goto oom;
                        }
                      }
                    }
                    else
                    {
                      if ( v60 != 60 )
                        goto LABEL_137;
                      v61 = *v29;
                      v62 = v29[2];
                      v63 = sdslen(*v29);
                      v64 = hi_atoi((uint8_t *)v61, v63);
                      v55 = cluster_open_slot_create(v64, 0, v62, master);
                      if ( !v55 )
                      {
LABEL_155:
                        _redisClusterSetError_2(cc, "create open slot error", v54);
                        v58 = count_part[0];
                        goto LABEL_130;
                      }
                      migrating = master->importing;
                      if ( !migrating )
                      {
                        migrating = hiarray_create(1u, 8uLL);
                        master->importing = migrating;
                        if ( !migrating )
                          goto LABEL_113;
                      }
                    }
                    v65 = hiarray_push(migrating);
                    if ( !v65 )
                      goto LABEL_113;
                    *v65 = v55;
LABEL_137:
                    v30 = count_slot_start_end[0];
                    break;
                  default:
                    break;
                }
              }
LABEL_56:
              sdsfreesplitres(v29, v30);
              count_slot_start_end[0] = 0;
              goto LABEL_57;
            }
            v40 = (uint8_t *)*v28;
            switch ( *(*v28 - 1) & 7 )
            {
              case 0:
                v41 = (unsigned __int8)*(*v28 - 1) >> 3;
                break;
              case 1:
                v41 = *(v40 - 3);
                break;
              case 2:
                v41 = *(unsigned __int16 *)(v40 - 5);
                break;
              case 3:
                v41 = *(unsigned int *)(v40 - 9);
                break;
              case 4:
                v41 = *(_QWORD *)(v40 - 17);
                break;
              default:
                v41 = 0LL;
                break;
            }
            v42 = hi_atoi(v40, v41);
            v43 = (uint8_t *)v29[1];
            v34 = v42;
            switch ( *(v43 - 1) & 7 )
            {
              case 0:
                v44 = *(v43 - 1) >> 3;
                break;
              case 1:
                v44 = *(v43 - 3);
                break;
              case 2:
                v44 = *(unsigned __int16 *)(v43 - 5);
                break;
              case 3:
                v44 = *(unsigned int *)(v43 - 9);
                break;
              case 4:
                v44 = *(_QWORD *)(v43 - 17);
                break;
              default:
                v44 = 0LL;
                break;
            }
            v35 = hi_atoi(v43, v44);
          }
          sdsfreesplitres(v29, count_slot_start_end[0]);
          count_slot_start_end[0] = 0;
          if ( v34 >= 0 && (unsigned int)v35 <= 0x3FFF && v34 <= v35 )
            break;
LABEL_57:
          v15 = count_part[0];
          v31 = v25++ + 9;
          if ( count_part[0] <= v31 )
          {
            v7 = v73;
            v8 = pos;
            goto LABEL_17;
          }
        }
        v36 = (int *)hiredisAllocFns.callocFn(1LL, 16LL);
        if ( !v36 )
          goto LABEL_143;
        v37 = master;
        v38 = master->slots == 0LL;
        *((_QWORD *)v36 + 1) = master;
        if ( !v38 )
        {
LABEL_75:
          v71 = v36;
          v39 = listAddNodeTail(v37->slots, v36);
          v36 = v71;
          if ( !v39 )
            goto LABEL_142;
          *v71 = v34;
          v71[1] = v35;
          goto LABEL_57;
        }
        v72 = v36;
        v57 = listCreate();
        v36 = v72;
        master->slots = v57;
        if ( v57 )
        {
          v57->free = listClusterSlotDestructor;
          v37 = master;
          goto LABEL_75;
        }
LABEL_142:
        *v36 = 0;
        v36[1] = 0;
        *((_QWORD *)v36 + 1) = 0LL;
        hiredisAllocFns.freeFn(v36);
LABEL_143:
        v29 = 0LL;
oom:
        if ( cc )
        {
          cc->err = 5;
          strcpy(cc->errstr, "Out of memory");
        }
        sdsfreesplitres(v10, count_part[0]);
        sdsfreesplitres(v29, count_slot_start_end[0]);
        if ( nodes )
LABEL_117:
          dictRelease(nodes);
        result = 0LL;
        if ( nodes_name[0] )
        {
          dictRelease(nodes_name[0]);
          return 0LL;
        }
        return result;
      default:
        goto LABEL_11;
    }
  }
};

// Line 1464: range 000000000CABB350-000000000CABBD9D
int __fastcall cluster_update_route(redisClusterContext_0 *cc)
{
  redisClusterContext_0 *v1; // rbp
  dict *nodes; // rsi
  int v3; // ebx
  dictEntry_0 *v4; // rax
  unsigned __int16 *val; // rax
  const char *v6; // rdi
  int v7; // esi
  redisContext_0 *v8; // r13
  int err; // eax
  const timeval *command_timeout; // rax
  const char *password; // rcx
  const char *username; // rdx
  const char *v13; // rsi
  redisClusterContext_0 *v14; // rdi
  const char *v15; // rdx
  _QWORD *v16; // rbx
  redisReply_0 *v17; // rax
  redisReply_0 *v18; // r14
  int type; // eax
  dict_0 *tv_sec; // r15
  hiarray *v21; // rbx
  dictEntry_0 *v22; // rax
  void *v23; // rax
  hilist_0 *v24; // rdi
  _QWORD *v25; // rax
  listNode_0 *v26; // rax
  unsigned int *value; // r15
  unsigned int v28; // eax
  redisReply_0 *v30; // rax
  int v31; // eax
  const char *str; // rbx
  size_t v33; // r15
  size_t v34; // rax
  hiarray *v35; // rbp
  uint32_t v36; // ebx
  unsigned int **v37; // rax
  unsigned int *v38; // rcx
  unsigned int v39; // edx
  char *v40; // r9
  dict_0 *v41; // r12
  hiarray *slots; // rdi
  cluster_node_0 **table; // rdi
  size_t v44; // rbx
  size_t v45; // rax
  const char *v46; // r14
  size_t v47; // r15
  size_t v48; // rax
  char *errstr; // rbp
  size_t v50; // rax
  dictEntry_0 *v51; // rax
  const void **v52; // r15
  dictEntry_0 *v53; // rax
  _QWORD *v54; // rax
  const void *v55; // rdx
  _QWORD *v56; // rdx
  __int64 v57; // rdx
  dict_0 *v58; // rdi
  timeval ht; // [rsp+0h] [rbp-C8h]
  char *v60; // [rsp+18h] [rbp-B0h]
  redisClusterContext_0 *n; // [rsp+20h] [rbp-A8h]
  int v62; // [rsp+2Ch] [rbp-9Ch]
  dictIterator_0 di_0; // [rsp+30h] [rbp-98h] BYREF
  char v64; // [rsp+50h] [rbp-78h] BYREF
  dictIterator_0 li[2]; // [rsp+70h] [rbp-58h] BYREF

  v1 = cc;
  if ( !cc )
    return -1;
  nodes = cc->nodes;
  if ( !nodes )
  {
    cc->err = 2;
    strcpy(cc->errstr, "no server address");
    return -1;
  }
  v3 = 1;
  dictInitIterator(&di_0, nodes);
  ht.tv_usec = (__suseconds_t)&v64;
LABEL_4:
  v4 = dictNext(&di_0);
  if ( !v4 )
  {
LABEL_46:
    if ( v3 )
    {
      v1->err = 2;
      strcpy(v1->errstr, "no valid server address");
      return -1;
    }
    return -1;
  }
  while ( 1 )
  {
    val = (unsigned __int16 *)v4->val;
    if ( !val )
      goto LABEL_4;
    v6 = (const char *)*((_QWORD *)val + 2);
    if ( !v6 )
      goto LABEL_4;
    v7 = val[12];
    if ( !val[12] )
    {
      v1->err = 2;
      strcpy(v1->errstr, "Ip or port error!");
      v18 = 0LL;
      v8 = 0LL;
      goto LABEL_45;
    }
    v8 = v1->connect_timeout ? redisConnectWithTimeout(v6, v7, ht) : redisConnect(v6, v7);
    if ( v8 )
      break;
    ht.tv_sec = 0LL;
    v18 = 0LL;
LABEL_86:
    v1->err = 5;
    strcpy(v1->errstr, "Out of memory");
    if ( ht.tv_sec )
    {
LABEL_42:
      if ( (dict *)ht.tv_sec == v1->nodes )
        v1->nodes = 0LL;
      dictRelease((dict_0 *)ht.tv_sec);
    }
LABEL_45:
    v3 = 0;
    freeReplyObject(v18);
    redisFree(v8);
    v4 = dictNext(&di_0);
    if ( !v4 )
      goto LABEL_46;
  }
  err = v8->err;
  v62 = err;
  if ( err )
  {
    v1->err = err;
    v44 = 127LL;
    v45 = strlen(v8->errstr);
    if ( v45 <= 0x7F )
      v44 = v45;
    v18 = 0LL;
    memcpy(v1->errstr, v8->errstr, v44);
    v1->errstr[v44] = 0;
    goto LABEL_45;
  }
  command_timeout = v1->command_timeout;
  if ( command_timeout )
    redisSetTimeout(v8, *command_timeout);
  password = v1->password;
  if ( password )
  {
    username = v1->username;
    if ( username )
    {
      v13 = "AUTH %s %s";
      v14 = (redisClusterContext_0 *)v8;
      v16 = redisCommand(v8, "AUTH %s %s", username, password);
    }
    else
    {
      v13 = "AUTH %s";
      v14 = (redisClusterContext_0 *)v8;
      v16 = redisCommand(v8, "AUTH %s", v1->password);
    }
    if ( !v16 )
    {
      strcpy(v1->errstr, "Command AUTH reply error (NULL)");
      v1->err = 2;
LABEL_93:
      v18 = 0LL;
      freeReplyObject(v16);
      goto LABEL_45;
    }
    if ( *(_DWORD *)v16 == 6 )
    {
      v46 = (const char *)v16[4];
      v1->err = 2;
      if ( !v46 )
LABEL_80:
        _redisClusterSetError_0(v14, (int)v13, v15);
      v47 = 127LL;
      v48 = strlen(v46);
      if ( v48 <= 0x7F )
        v47 = v48;
      memcpy(v1->errstr, v46, v47);
      v1->errstr[v47] = 0;
      goto LABEL_93;
    }
    freeReplyObject(v16);
  }
  if ( (v1->flags & 0x4000) != 0 )
  {
    v13 = "CLUSTER SLOTS";
    v14 = (redisClusterContext_0 *)v8;
    v17 = (redisReply_0 *)redisCommand(v8, "CLUSTER SLOTS");
    v18 = v17;
    if ( !v17 )
    {
      if ( v8->err == 6 )
      {
        _redisClusterSetError(v1, 6, "Command(cluster slots) reply error(socket timeout)");
      }
      else
      {
        v1->err = 2;
        strcpy(v1->errstr, "Command(cluster slots) reply error(NULL).");
      }
      goto LABEL_45;
    }
    type = v17->type;
    if ( type == 2 )
    {
      ht.tv_sec = (__time_t)parse_cluster_slots(v1, v18, v1->flags);
      tv_sec = (dict_0 *)ht.tv_sec;
      goto LABEL_24;
    }
    if ( type != 6 )
    {
      v1->err = 2;
      strcpy(v1->errstr, "Command(cluster slots) reply error: type is not array.");
      goto LABEL_45;
    }
LABEL_59:
    str = v18->str;
    v1->err = 2;
    if ( !str )
      goto LABEL_80;
    v33 = 127LL;
    v34 = strlen(str);
    if ( v34 <= 0x7F )
      v33 = v34;
    memcpy(v1->errstr, str, v33);
    v1->errstr[v33] = 0;
    goto LABEL_45;
  }
  v13 = "CLUSTER NODES";
  v14 = (redisClusterContext_0 *)v8;
  v30 = (redisReply_0 *)redisCommand(v8, "CLUSTER NODES");
  v18 = v30;
  if ( !v30 )
  {
    if ( v8->err == 6 )
    {
      _redisClusterSetError(v1, 6, "Command(cluster nodes) reply error(socket timeout)");
    }
    else
    {
      v1->err = 2;
      strcpy(v1->errstr, "Command(cluster nodes) reply error(NULL).");
    }
    goto LABEL_45;
  }
  v31 = v30->type;
  if ( v31 != 1 )
  {
    if ( v31 != 6 )
    {
      strcpy(v1->errstr, "Command(cluster nodes) reply error: type is not string.");
      v1->err = 2;
      goto LABEL_45;
    }
    goto LABEL_59;
  }
  ht.tv_sec = (__time_t)parse_cluster_nodes(v1, v18->str, v18->len, v1->flags);
  tv_sec = (dict_0 *)ht.tv_sec;
LABEL_24:
  if ( !tv_sec )
    goto LABEL_45;
  v60 = (char *)hiredisAllocFns.callocFn(0x4000LL, 8LL);
  if ( !v60 )
    goto LABEL_86;
  v21 = hiarray_create(tv_sec->used, 8uLL);
  if ( !v21 )
  {
LABEL_52:
    v1->err = 5;
    strcpy(v1->errstr, "Out of memory");
    goto LABEL_38;
  }
  dictInitIterator((dictIterator_0 *)ht.tv_usec, tv_sec);
LABEL_28:
  while ( 1 )
  {
    v22 = dictNext((dictIterator_0 *)ht.tv_usec);
    if ( !v22 )
      break;
    v23 = v22->val;
    if ( *((_BYTE *)v23 + 26) != 1 )
    {
      v1->err = 2;
      strcpy(v1->errstr, "Node role must be master");
      goto LABEL_38;
    }
    v24 = (hilist_0 *)*((_QWORD *)v23 + 6);
    if ( v24 )
    {
      listRewind(v24, (listIter_0 *)li);
      while ( 1 )
      {
        v26 = listNext((listIter_0 *)li);
        if ( !v26 )
          goto LABEL_28;
        value = (unsigned int *)v26->value;
        v28 = value[1];
        if ( *value > v28 || v28 > 0x3FFF )
          break;
        v25 = hiarray_push(v21);
        if ( !v25 )
          goto LABEL_52;
        *v25 = value;
      }
      v1->err = 2;
      strcpy(v1->errstr, "Slot region for node is error");
      goto LABEL_38;
    }
  }
  hiarray_sort(v21, cluster_slot_start_cmp);
  if ( !v21->nelem )
    goto LABEL_73;
  n = v1;
  v35 = v21;
  v36 = 0;
  do
  {
    v37 = (unsigned int **)hiarray_get(v35, v36);
    v38 = *v37;
    v39 = **v37;
    if ( v39 <= (*v37)[1] )
    {
      while ( 1 )
      {
        v40 = &v60[8 * v39];
        if ( *(_QWORD *)v40 )
          break;
        ++v39;
        *(_QWORD *)v40 = *((_QWORD *)v38 + 1);
        v38 = *v37;
        if ( v39 > (*v37)[1] )
          goto LABEL_71;
      }
      v21 = v35;
      v1 = n;
      strcpy(n->errstr, "Different node holds same slot");
      n->err = 2;
LABEL_38:
      hiredisAllocFns.freeFn(v60);
      if ( v21 )
      {
        if ( v1->slots == v21 )
          v1->slots = 0LL;
        v21->nelem = 0;
        hiarray_destroy(v21);
      }
      goto LABEL_42;
    }
LABEL_71:
    ++v36;
  }
  while ( v36 < v35->nelem );
  v21 = v35;
  v1 = n;
LABEL_73:
  v41 = v1->nodes;
  if ( v41 )
  {
    dictInitIterator(li, (dict_0 *)ht.tv_sec);
    while ( 1 )
    {
      v51 = dictNext(li);
      if ( !v51 )
        break;
      while ( 1 )
      {
        v52 = (const void **)v51->val;
        if ( !v52 )
          break;
        v53 = dictFind(v41, v52[1]);
        if ( !v53 )
          break;
        v54 = v53->val;
        v55 = (const void *)v54[4];
        if ( v55 )
        {
          v54[4] = v52[4];
          v52[4] = v55;
        }
        v56 = (_QWORD *)v54[5];
        if ( !v56 )
          break;
        v54[5] = v52[5];
        v52[5] = v56;
        v56[36] = v52;
        v57 = v54[5];
        if ( !v57 )
          break;
        *(_QWORD *)(v57 + 288) = v54;
        v51 = dictNext(li);
        if ( !v51 )
          goto LABEL_109;
      }
    }
LABEL_109:
    v58 = v1->nodes;
    if ( v58 )
      dictRelease(v58);
  }
  slots = v1->slots;
  v1->nodes = (dict *)ht.tv_sec;
  if ( slots )
  {
    slots->nelem = 0;
    hiarray_destroy(slots);
  }
  table = v1->table;
  v1->slots = v21;
  if ( table )
    ((void (*)(void))hiredisAllocFns.freeFn)();
  ++v1->route_version;
  v1->table = (cluster_node_0 **)v60;
  freeReplyObject(v18);
  redisFree(v8);
  if ( !v1->err )
    return 0;
  v1->err = 0;
  errstr = v1->errstr;
  v50 = strlen(errstr);
  memset(errstr, 0, v50);
  return v62;
};

// Line 1507: range 000000000CABBDB0-000000000CABBDE2
redisClusterContext_0 *__cdecl redisClusterContextInit()
{
  redisClusterContext_0 *result; // rax

  result = (redisClusterContext_0 *)hiredisAllocFns.callocFn(1LL, 232LL);
  if ( result )
  {
    result->flags |= 1u;
    result->max_retry_count = 5;
  }
  return result;
};

// Line 1519: range 000000000CABBDF0-000000000CABBEE6
void __fastcall redisClusterFree(redisClusterContext_0 *cc)
{
  hiarray *slots; // rdi
  dict *nodes; // rdi
  hilist *requests; // rdi

  if ( cc )
  {
    if ( cc->connect_timeout )
    {
      ((void (*)(void))hiredisAllocFns.freeFn)();
      cc->connect_timeout = 0LL;
    }
    if ( cc->command_timeout )
    {
      ((void (*)(void))hiredisAllocFns.freeFn)();
      cc->command_timeout = 0LL;
    }
    if ( cc->table )
    {
      ((void (*)(void))hiredisAllocFns.freeFn)();
      cc->table = 0LL;
    }
    slots = cc->slots;
    if ( slots )
    {
      slots->nelem = 0;
      hiarray_destroy(slots);
      cc->slots = 0LL;
    }
    nodes = cc->nodes;
    if ( nodes )
      dictRelease(nodes);
    requests = cc->requests;
    if ( requests )
      listRelease(requests);
    if ( cc->username )
    {
      ((void (*)(void))hiredisAllocFns.freeFn)();
      cc->username = 0LL;
    }
    if ( cc->password )
    {
      ((void (*)(void))hiredisAllocFns.freeFn)();
      cc->password = 0LL;
    }
    hiredisAllocFns.freeFn(cc);
  }
};

// Line 1598: range 000000000CABC4B0-000000000CABC50A
redisClusterContext_0 *__fastcall redisClusterConnect(const char *addrs, int flags)
{
  redisClusterContext_0 *v2; // rax
  redisClusterContext_0 *v3; // rbx
  int v4; // eax

  v2 = redisClusterContextInit();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = v2->flags | 1;
  if ( flags )
    v4 |= flags;
  v3->flags = v4;
  if ( !redisClusterSetOptionAddNodes(v3, addrs) )
    cluster_update_route(v3);
  return v3;
};

// Line 1617: range 000000000CABC400-000000000CABC4A2
redisClusterContext_0 *__fastcall redisClusterConnectWithTimeout(
        const char *addrs,
        __time_t a2,
        __suseconds_t a3,
        int flags)
{
  redisClusterContext_0 *v5; // rax
  redisClusterContext_0 *v6; // rbx
  int v7; // eax
  timeval *connect_timeout; // rax

  v5 = redisClusterContextInit();
  v6 = v5;
  if ( !v5 )
    return 0LL;
  v7 = v5->flags | 1;
  if ( flags )
    v7 |= flags;
  v6->flags = v7;
  connect_timeout = v6->connect_timeout;
  if ( !connect_timeout )
  {
    connect_timeout = (timeval *)hiredisAllocFns.mallocFn(0x10uLL);
    v6->connect_timeout = connect_timeout;
    if ( !connect_timeout )
      return 0LL;
  }
  connect_timeout->tv_sec = a2;
  connect_timeout->tv_usec = a3;
  if ( !redisClusterSetOptionAddNodes(v6, addrs) )
    cluster_update_route(v6);
  return v6;
};

// Line 1643: range 000000000CABC510-000000000CABC56A
redisClusterContext_0 *__fastcall redisClusterConnectNonBlock(const char *addrs, int flags)
{
  redisClusterContext_0 *v2; // rax
  redisClusterContext_0 *v3; // rbx
  unsigned int v4; // eax

  v2 = redisClusterContextInit();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = v2->flags & 0xFFFFFFFE;
  if ( flags )
    v4 |= flags;
  v3->flags = v4;
  if ( !redisClusterSetOptionAddNodes(v3, addrs) )
    cluster_update_route(v3);
  return v3;
};

// Line 1661: range 000000000CABBEF0-000000000CABC25A
int __fastcall redisClusterSetOptionAddNode(redisClusterContext_0 *cc, const char *addr)
{
  sds v3; // rax
  char *v4; // rbp
  dictEntry_0 *v5; // r13
  dict *v7; // rax
  char *v8; // rbp
  char *v9; // rax
  const char *v10; // rdx
  char *v11; // r13
  size_t v12; // rsi
  char *v13; // r13
  size_t v14; // rax
  int v15; // eax
  __int16 v16; // r14
  void *v17; // r13
  sds v18; // rax
  size_t v19; // rsi
  sds v20; // rax
  char *v21; // r12

  if ( !cc )
    return -1;
  if ( !cc->nodes )
  {
    v7 = dictCreate(&clusterNodesDictType, 0LL);
    cc->nodes = v7;
    if ( !v7 )
      goto LABEL_7;
  }
  v3 = sdsnew(addr);
  v4 = v3;
  if ( !v3 )
    goto LABEL_7;
  v5 = dictFind(cc->nodes, v3);
  sdsfree(v4);
  if ( v5 )
    return 0;
  v9 = strrchr(addr, 58);
  v11 = v9;
  if ( !v9 )
  {
    _redisClusterSetError_2(cc, "server address is incorrect, port separator missing.", v10);
    return -1;
  }
  v12 = v9 - addr;
  if ( v9 - addr <= 0 )
  {
    cc->err = 2;
    strcpy(cc->errstr, "server address is incorrect, address part missing.");
    return -1;
  }
  v8 = sdsnewlen(addr, v12);
  if ( !v8 )
  {
LABEL_7:
    v8 = 0LL;
    goto LABEL_8;
  }
  if ( !v11[1] )
  {
    cc->err = 2;
    strcpy(cc->errstr, "server address is incorrect, port part missing.");
    goto LABEL_9;
  }
  v13 = v11 + 1;
  v14 = strlen(v13);
  v15 = hi_atoi((uint8_t *)v13, v14);
  v16 = v15;
  if ( v15 <= 0 )
  {
    cc->err = 2;
    strcpy(cc->errstr, "server port is incorrect");
    goto LABEL_9;
  }
  v17 = hiredisAllocFns.callocFn(1LL, 80LL);
  if ( !v17 )
  {
LABEL_8:
    cc->err = 5;
    strcpy(cc->errstr, "Out of memory");
LABEL_9:
    sdsfree(v8);
    return -1;
  }
  v18 = sdsnew(addr);
  *((_QWORD *)v17 + 1) = v18;
  if ( v18 )
  {
    *((_QWORD *)v17 + 2) = v8;
    *((_WORD *)v17 + 12) = v16;
    switch ( *(v18 - 1) & 7 )
    {
      case 0:
        v19 = (unsigned __int8)*(v18 - 1) >> 3;
        break;
      case 1:
        v19 = (unsigned __int8)*(v18 - 3);
        break;
      case 2:
        v19 = *(unsigned __int16 *)(v18 - 5);
        break;
      case 3:
        v19 = *(unsigned int *)(v18 - 9);
        break;
      case 4:
        v19 = *(_QWORD *)(v18 - 17);
        break;
      default:
        v19 = 0LL;
        break;
    }
    v20 = sdsnewlen(v18, v19);
    v21 = v20;
    if ( v20 )
    {
      if ( !dictAdd(cc->nodes, v20, v17) )
        return 0;
      sdsfree(v21);
    }
  }
  cc->err = 5;
  strcpy(cc->errstr, "Out of memory");
  sdsfree(v8);
  sdsfree(*((sds *)v17 + 1));
  hiredisAllocFns.freeFn(v17);
  return -1;
};

// Line 1761: range 000000000CABC260-000000000CABC3F4
int __fastcall redisClusterSetOptionAddNodes(redisClusterContext_0 *cc, const char *addrs)
{
  int v2; // eax
  sds *v3; // rax
  sds *v4; // r13
  int v5; // esi
  const char **v6; // rbx
  int v7; // ebp
  int address_count[14]; // [rsp+0h] [rbp-38h] BYREF

  address_count[0] = 0;
  if ( !cc )
    return -1;
  v2 = strlen(addrs);
  v3 = sdssplitlen(addrs, v2, ",", 1, address_count);
  v4 = v3;
  if ( v3 )
  {
    v5 = address_count[0];
    if ( address_count[0] <= 0 )
    {
      strcpy(cc->errstr, "invalid server addresses (example format: 127.0.0.1:1234,127.0.0.2:5678)");
      cc->err = 2;
      sdsfreesplitres(v3, v5);
      return -1;
    }
    else
    {
      v6 = (const char **)v3;
      v7 = 0;
      do
      {
        if ( redisClusterSetOptionAddNode(cc, *v6) )
        {
          sdsfreesplitres(v4, address_count[0]);
          return -1;
        }
        ++v7;
        ++v6;
      }
      while ( address_count[0] > v7 );
      sdsfreesplitres(v4, address_count[0]);
      return 0;
    }
  }
  else
  {
    cc->err = 5;
    strcpy(cc->errstr, "Out of memory");
    return -1;
  }
};

// Line 1801: range 000000000CABC570-000000000CABC584
int __fastcall redisClusterSetOptionConnectBlock(redisClusterContext_0 *cc)
{
  if ( !cc )
    return -1;
  cc->flags |= 1u;
  return 0;
};

// Line 1812: range 000000000CABC590-000000000CABC5A4
int __fastcall redisClusterSetOptionConnectNonBlock(redisClusterContext_0 *cc)
{
  if ( !cc )
    return -1;
  cc->flags &= ~1u;
  return 0;
};

// Line 1828: range 000000000CABC5B0-000000000CABC62F
int __fastcall redisClusterSetOptionUsername(redisClusterContext_0 *cc, const char *username)
{
  char *v3; // rax

  if ( !cc )
    return -1;
  if ( username && *username )
  {
    hiredisAllocFns.freeFn(cc->username);
    v3 = hiredisAllocFns.strdupFn(username);
    cc->username = v3;
    return -(v3 == 0LL);
  }
  else
  {
    hiredisAllocFns.freeFn(cc->username);
    cc->username = 0LL;
    return 0;
  }
};

// Line 1854: range 000000000CABC640-000000000CABC6BF
int __fastcall redisClusterSetOptionPassword(redisClusterContext_0 *cc, const char *password)
{
  char *v3; // rax

  if ( !cc )
    return -1;
  if ( password && *password )
  {
    hiredisAllocFns.freeFn(cc->password);
    v3 = hiredisAllocFns.strdupFn(password);
    cc->password = v3;
    return -(v3 == 0LL);
  }
  else
  {
    hiredisAllocFns.freeFn(cc->password);
    cc->password = 0LL;
    return 0;
  }
};

// Line 1878: range 000000000CABC6D0-000000000CABC6E7
int __fastcall redisClusterSetOptionParseSlaves(redisClusterContext_0 *cc)
{
  if ( !cc )
    return -1;
  cc->flags |= 0x1000u;
  return 0;
};

// Line 1889: range 000000000CABC6F0-000000000CABC707
int __fastcall redisClusterSetOptionParseOpenSlots(redisClusterContext_0 *cc)
{
  if ( !cc )
    return -1;
  cc->flags |= 0x2000u;
  return 0;
};

// Line 1900: range 000000000CABC710-000000000CABC727
int __fastcall redisClusterSetOptionRouteUseSlots(redisClusterContext_0 *cc)
{
  if ( !cc )
    return -1;
  cc->flags |= 0x4000u;
  return 0;
};

// Line 1910: range 000000000CABC730-000000000CABC7A5
__int64 __fastcall redisClusterSetOptionConnectTimeout(redisClusterContext_0 *cc, __time_t a2, __suseconds_t a3)
{
  timeval *connect_timeout; // rax
  const char *v5; // rdx

  if ( !cc )
    return 0xFFFFFFFFLL;
  connect_timeout = cc->connect_timeout;
  if ( connect_timeout
    || (connect_timeout = (timeval *)hiredisAllocFns.mallocFn(0x10uLL), (cc->connect_timeout = connect_timeout) != 0LL) )
  {
    connect_timeout->tv_sec = a2;
    connect_timeout->tv_usec = a3;
    return 0LL;
  }
  else
  {
    _redisClusterSetError_1(cc, "Out of memory", v5);
    return 0xFFFFFFFFLL;
  }
};

// Line 1930: range 000000000CABC7B0-000000000CABC925
__int64 __fastcall redisClusterSetOptionTimeout(redisClusterContext_0 *cc, __time_t a2, __suseconds_t a3)
{
  timeval *command_timeout; // rax
  dict *nodes; // rsi
  __int64 result; // rax
  __int64 v6; // r12
  __int64 v7; // rdi
  hilist_0 *v8; // rdi
  listNode_0 *v9; // rax
  __int64 v10; // rdi
  timeval *v11; // rax
  const char *v12; // rdx
  timeval tva; // [rsp+0h] [rbp-58h]
  listIter_0 li; // [rsp+10h] [rbp-48h] BYREF
  dictIterator_0 di_0; // [rsp+20h] [rbp-38h] BYREF

  tva.tv_sec = a2;
  tva.tv_usec = a3;
  if ( !cc )
    return 0xFFFFFFFFLL;
  command_timeout = cc->command_timeout;
  if ( command_timeout )
  {
    if ( (command_timeout->tv_sec != a2 || command_timeout->tv_usec != a3)
      && (command_timeout->tv_sec = a2, command_timeout->tv_usec = a3, (nodes = cc->nodes) != 0LL)
      && nodes->used )
    {
      dictInitIterator(&di_0, nodes);
      while ( 1 )
      {
        result = (__int64)dictNext(&di_0);
        if ( !result )
          break;
        v6 = *(_QWORD *)(result + 8);
        v7 = *(_QWORD *)(v6 + 32);
        if ( v7 && (*(_BYTE *)(v7 + 144) & 2) != 0 && !*(_DWORD *)(v7 + 8) )
          redisSetTimeout((redisContext_0 *)v7, tva);
        v8 = *(hilist_0 **)(v6 + 56);
        if ( v8 && v8->len )
        {
          listRewind(v8, &li);
          while ( 1 )
          {
            v9 = listNext(&li);
            if ( !v9 )
              break;
            v10 = *((_QWORD *)v9->value + 4);
            if ( v10 && (*(_BYTE *)(v10 + 144) & 2) != 0 && !*(_DWORD *)(v10 + 8) )
              redisSetTimeout((redisContext_0 *)v10, tva);
          }
        }
      }
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v11 = (timeval *)hiredisAllocFns.mallocFn(0x10uLL);
    cc->command_timeout = v11;
    if ( v11 )
    {
      v11->tv_sec = a2;
      v11->tv_usec = tva.tv_usec;
      return 0LL;
    }
    else
    {
      _redisClusterSetError_1(cc, "Out of memory", v12);
      return 0xFFFFFFFFLL;
    }
  }
  return result;
};

// Line 1987: range 000000000CABC930-000000000CABC94D
int __fastcall redisClusterSetOptionMaxRetry(redisClusterContext_0 *cc, int max_retry_count)
{
  if ( !cc || max_retry_count <= 0 )
    return -1;
  cc->max_retry_count = max_retry_count;
  return 0;
};

// Line 2011: range 000000000CABC950-000000000CABC9BD
int __fastcall redisClusterConnect2(redisClusterContext_0 *cc)
{
  dict *nodes; // rax

  if ( cc )
  {
    nodes = cc->nodes;
    if ( nodes && nodes->used )
      return cluster_update_route(cc);
    cc->err = 2;
    strcpy(cc->errstr, "servers address does not set up");
  }
  return -1;
};

// Line 2018: range 000000000CABC9C0-000000000CABCCB2
redisContext_0 *__fastcall ctx_get_by_node(redisClusterContext_0 *cc, cluster_node_0 *node)
{
  redisContext_0 *con; // rbx
  redisContext_0 *result; // rax
  timeval *command_timeout; // rax
  char *password; // rcx
  char *username; // rdx
  const char *v9; // rsi
  redisClusterContext_0 *v10; // rdi
  const char *v11; // rdx
  void *v12; // rbp
  const char *host; // rdi
  int port; // esi
  const char *v15; // rdx
  int err; // eax
  timeval *v17; // rax
  char *v18; // rcx
  char *v19; // rdx
  const char **v20; // rax
  const char *v21; // rdx
  size_t v22; // rbp
  size_t v23; // rax
  const char *v24; // r13
  size_t v25; // r14
  size_t v26; // rax
  const char **v27; // rax
  timeval v28; // [rsp+0h] [rbp-38h]
  const char **reply; // [rsp+8h] [rbp-30h]

  if ( !node )
    return 0LL;
  con = node->con;
  if ( con )
  {
    result = node->con;
    if ( !con->err )
      return result;
    redisReconnect(node->con);
    command_timeout = cc->command_timeout;
    if ( command_timeout && !con->err )
      redisSetTimeout(con, *command_timeout);
    password = cc->password;
    if ( password )
    {
      username = cc->username;
      if ( username )
      {
        v9 = "AUTH %s %s";
        v10 = (redisClusterContext_0 *)con;
        v12 = redisCommand(con, "AUTH %s %s", username, password);
      }
      else
      {
        v9 = "AUTH %s";
        v10 = (redisClusterContext_0 *)con;
        v12 = redisCommand(con, "AUTH %s", cc->password);
      }
      if ( v12 )
      {
        if ( *(_DWORD *)v12 == 6 )
        {
          v24 = (const char *)*((_QWORD *)v12 + 4);
          cc->err = 2;
          if ( !v24 )
            _redisClusterSetError_0(v10, (int)v9, v11);
          v25 = 127LL;
          v26 = strlen(v24);
          if ( v26 <= 0x7F )
            v25 = v26;
          memcpy(cc->errstr, v24, v25);
          cc->errstr[v25] = 0;
        }
      }
      else
      {
        _redisClusterSetError_2(cc, "Command AUTH reply error (NULL)", v11);
      }
      freeReplyObject(v12);
      return con;
    }
    return con;
  }
  host = node->host;
  if ( !host )
    return 0LL;
  port = node->port;
  if ( !(_WORD)port )
    return 0LL;
  if ( cc->connect_timeout )
    con = redisConnectWithTimeout(host, port, v28);
  else
    con = redisConnect(host, port);
  if ( !con )
  {
    _redisClusterSetError_1(cc, "Out of memory", v15);
    return 0LL;
  }
  err = con->err;
  if ( !err )
  {
    v17 = cc->command_timeout;
    if ( v17 )
      redisSetTimeout(con, *v17);
    v18 = cc->password;
    if ( !v18 )
      goto LABEL_27;
    v19 = cc->username;
    if ( v19 )
      v20 = (const char **)redisCommand(con, "AUTH %s %s", v19, v18);
    else
      v20 = (const char **)redisCommand(con, "AUTH %s", cc->password);
    if ( v20 )
    {
      if ( *(_DWORD *)v20 != 6 )
      {
        freeReplyObject(v20);
LABEL_27:
        node->con = con;
        return con;
      }
      reply = v20;
      _redisClusterSetError_2(cc, v20[4], v21);
      v27 = reply;
    }
    else
    {
      _redisClusterSetError_2(cc, "Command AUTH reply error (NULL)", v21);
      v27 = 0LL;
    }
    freeReplyObject(v27);
    redisFree(con);
    return 0LL;
  }
  cc->err = err;
  v22 = 127LL;
  v23 = strlen(con->errstr);
  if ( v23 <= 0x7F )
    v22 = v23;
  memcpy(cc->errstr, con->errstr, v22);
  cc->errstr[v22] = 0;
  redisFree(con);
  return 0LL;
};

// Line 2105: range 000000000CABCCC0-000000000CABCD82
cluster_node_0 *__fastcall node_get_which_connected(redisClusterContext_0 *cc)
{
  dict *nodes; // rsi
  dictEntry_0 *v2; // rax
  cluster_node_0 *val; // rbx
  redisContext_0 *v4; // rax
  _QWORD *v5; // rax
  const char *v7; // rsi
  dictIterator_0 di_0; // [rsp+0h] [rbp-48h] BYREF

  if ( cc )
  {
    nodes = cc->nodes;
    if ( nodes )
    {
      dictInitIterator(&di_0, nodes);
      while ( 1 )
      {
        v2 = dictNext(&di_0);
        if ( !v2 )
          break;
        while ( 1 )
        {
          val = (cluster_node_0 *)v2->val;
          if ( !val )
            break;
          v4 = ctx_get_by_node(cc, (cluster_node_0 *)v2->val);
          if ( !v4 || v4->err )
            break;
          v5 = redisCommand(v4, "PING");
          if ( v5 )
          {
            if ( *(_DWORD *)v5 == 5 )
            {
              v7 = (const char *)v5[4];
              if ( v7 )
              {
                if ( !strcmp(v7, "PONG") )
                {
                  freeReplyObject(v5);
                  return val;
                }
              }
            }
          }
          freeReplyObject(v5);
          v2 = dictNext(&di_0);
          if ( !v2 )
            return 0LL;
        }
      }
    }
  }
  return 0LL;
};

// Line 2316: range 000000000CAB8300-000000000CAB86D7
cluster_node_0 *__fastcall node_get_by_ask_error_reply(redisClusterContext_0 *cc, redisReply_0 *reply)
{
  sds *v4; // rax
  sds *v5; // rbp
  int v6; // esi
  cluster_node_0 *val; // r13
  sds *v8; // r12
  const char *v9; // rdi
  int v10; // esi
  dictEntry_0 *v11; // rax
  int v12; // esi
  cluster_node_0 *v13; // rax
  uint8_t *v14; // rdi
  size_t v15; // rsi
  uint16_t v16; // ax
  sds addr; // rdi
  size_t v18; // rsi
  sds v19; // rax
  char *v20; // r14
  int part_len[4]; // [rsp+0h] [rbp-48h] BYREF
  int ip_port_len[14]; // [rsp+10h] [rbp-38h] BYREF

  part_len[0] = 0;
  ip_port_len[0] = 0;
  if ( !cc || !reply )
    return 0LL;
  if ( reply->type != 6 || cluster_reply_error_type(reply) != 2 )
  {
    cc->err = 2;
    strcpy(cc->errstr, "reply is not ask error!");
    return 0LL;
  }
  v4 = sdssplitlen(reply->str, reply->len, " ", 1, part_len);
  v5 = v4;
  if ( !v4 )
    goto LABEL_22;
  v6 = part_len[0];
  if ( part_len[0] != 3 )
  {
    cc->err = 2;
    strcpy(cc->errstr, "ask error reply parse error!");
    val = 0LL;
    v8 = 0LL;
done:
    sdsfreesplitres(v5, v6);
    sdsfreesplitres(v8, ip_port_len[0]);
    return val;
  }
  v9 = v4[2];
  switch ( *(v9 - 1) & 7 )
  {
    case 0:
      v10 = (unsigned __int8)*(v9 - 1) >> 3;
      break;
    case 1:
      v10 = *((unsigned __int8 *)v9 - 3);
      break;
    case 2:
      v10 = *(unsigned __int16 *)(v9 - 5);
      break;
    case 3:
      v10 = *(_DWORD *)(v9 - 9);
      break;
    case 4:
      v10 = *(_DWORD *)(v9 - 17);
      break;
    default:
      v10 = 0;
      break;
  }
  v8 = sdssplitlen(v9, v10, ":", 1, ip_port_len);
  if ( v8 )
  {
    if ( ip_port_len[0] != 2 )
    {
      cc->err = 2;
      strcpy(cc->errstr, "ask error reply address part parse error!");
      val = 0LL;
      v6 = part_len[0];
      goto done;
    }
    v11 = dictFind(cc->nodes, v5[2]);
    if ( v11 )
    {
      val = (cluster_node_0 *)v11->val;
      v6 = part_len[0];
      goto done;
    }
    v13 = (cluster_node_0 *)hiredisAllocFns.callocFn(1LL, 80LL);
    val = v13;
    if ( v13 )
    {
      v13->addr = v5[1];
      v13->host = *v8;
      v14 = (uint8_t *)v8[1];
      switch ( *(v14 - 1) & 7 )
      {
        case 0:
          v15 = *(v14 - 1) >> 3;
          break;
        case 1:
          v15 = *(v14 - 3);
          break;
        case 2:
          v15 = *(unsigned __int16 *)(v14 - 5);
          break;
        case 3:
          v15 = *(unsigned int *)(v14 - 9);
          break;
        case 4:
          v15 = *(_QWORD *)(v14 - 17);
          break;
        default:
          v15 = 0LL;
          break;
      }
      v16 = hi_atoi(v14, v15);
      addr = val->addr;
      val->port = v16;
      val->role = 1;
      switch ( *(addr - 1) & 7 )
      {
        case 0:
          v18 = (unsigned __int8)*(addr - 1) >> 3;
          break;
        case 1:
          v18 = (unsigned __int8)*(addr - 3);
          break;
        case 2:
          v18 = *(unsigned __int16 *)(addr - 5);
          break;
        case 3:
          v18 = *(unsigned int *)(addr - 9);
          break;
        case 4:
          v18 = *(_QWORD *)(addr - 17);
          break;
        default:
          v18 = 0LL;
          break;
      }
      v19 = sdsnewlen(addr, v18);
      v20 = v19;
      if ( v19 )
      {
        if ( !dictAdd(cc->nodes, v19, val) )
        {
          v5[1] = 0LL;
          v6 = part_len[0];
          *v8 = 0LL;
          goto done;
        }
        sdsfree(v20);
      }
    }
  }
  else
  {
LABEL_22:
    v8 = 0LL;
  }
  v12 = part_len[0];
  strcpy(cc->errstr, "Out of memory");
  cc->err = 5;
  sdsfreesplitres(v5, v12);
  sdsfreesplitres(v8, ip_port_len[0]);
  return 0LL;
};

// Line 2398: range 000000000CABCD90-000000000CABD18F
void *__fastcall redis_cluster_command_execute(redisClusterContext_0 *cc, cmd *command)
{
  __int64 slot_num; // rax
  cluster_node_0 **table; // rdx
  cluster_node_0 *v6; // rsi
  redisContext_0 *v7; // rax
  redisContext_0 *v8; // rbp
  redisReply_0 *v9; // r12
  int err; // eax
  const char *errstr; // r12
  size_t v13; // rbp
  size_t v14; // rax
  cluster_node_0 *which_connected; // rax
  int v16; // edx
  bool v17; // cc
  redisContext_0 *v18; // rax
  int v19; // eax
  const char *v20; // rbp
  size_t v21; // r12
  size_t v22; // rax
  int v23; // eax
  int v24; // edx
  cluster_node_0 *v25; // rbp
  redisContext_0 *v26; // rax
  void *v27; // rax
  redisReply_0 *v28; // rdi
  redisReply_0 *v29; // [rsp+0h] [rbp-38h] BYREF

  slot_num = (unsigned int)command->slot_num;
  if ( !cc )
    return 0LL;
  table = cc->table;
  if ( !table )
  {
LABEL_31:
    cc->err = 2;
    strcpy(cc->errstr, "node get by table error");
    return 0LL;
  }
  while ( 2 )
  {
    if ( (unsigned int)slot_num > 0x3FFF )
      goto LABEL_31;
    v6 = table[slot_num];
    if ( !v6 )
      goto LABEL_31;
    v7 = ctx_get_by_node(cc, v6);
    v8 = v7;
    if ( v7 )
    {
      if ( !v7->err )
      {
        while ( 1 )
        {
LABEL_7:
          if ( redisAppendFormattedCommand(v8, command->cmd, command->clen)
            || (v8->flags & 1) == 0
            || redisGetReply(v8, (void **)&v29)
            || (v9 = v29) == 0LL )
          {
LABEL_13:
            err = v8->err;
            errstr = v8->errstr;
            v13 = 127LL;
            cc->err = err;
            v14 = strlen(errstr);
            if ( v14 <= 0x7F )
              v13 = v14;
            memcpy(cc->errstr, errstr, v13);
            cc->errstr[v13] = 0;
            return 0LL;
          }
          if ( v29->type != 6 )
            return v9;
          v23 = cluster_reply_error_type(v29);
          if ( (unsigned int)(v23 - 1) > 4 )
            return v9;
          v24 = cc->retry_count + 1;
          v17 = v24 <= cc->max_retry_count;
          cc->retry_count = v24;
          if ( !v17 )
          {
            v28 = v9;
            cc->err = 100;
            strcpy(cc->errstr, "too many cluster retries");
            v9 = 0LL;
            freeReplyObject(v28);
            return v9;
          }
          if ( v23 != 2 )
            break;
          v25 = node_get_by_ask_error_reply(cc, v9);
          if ( !v25 )
          {
            freeReplyObject(v9);
            return 0LL;
          }
          freeReplyObject(v9);
          v26 = ctx_get_by_node(cc, v25);
          v8 = v26;
          if ( !v26 )
            return 0LL;
          v19 = v26->err;
          if ( v19 )
            goto LABEL_21;
          v27 = redisCommand(v8, "ASKING");
          if ( !v27 )
            goto LABEL_13;
          freeReplyObject(v27);
        }
        if ( v23 < 2 || v23 > 5 )
        {
          freeReplyObject(v9);
          if ( cluster_update_route(cc) )
          {
            cc->err = 2;
            strcpy(cc->errstr, "route update error, please recreate redisClusterContext!");
            return 0LL;
          }
        }
        else
        {
          freeReplyObject(v9);
        }
        table = cc->table;
        slot_num = (unsigned int)command->slot_num;
        if ( table )
          continue;
        goto LABEL_31;
      }
      which_connected = node_get_which_connected(cc);
      if ( !which_connected )
      {
        cc->err = 2;
        strcpy(cc->errstr, "no reachable node in cluster");
        return 0LL;
      }
      v16 = cc->retry_count + 1;
      v17 = v16 <= cc->max_retry_count;
      cc->retry_count = v16;
      if ( !v17 )
      {
        cc->err = 100;
        strcpy(cc->errstr, "too many cluster retries");
        return 0LL;
      }
      v18 = ctx_get_by_node(cc, which_connected);
      v8 = v18;
      if ( v18 )
      {
        v19 = v18->err;
        if ( !v19 )
          goto LABEL_7;
LABEL_21:
        v20 = v8->errstr;
        cc->err = v19;
        v21 = 127LL;
        v22 = strlen(v20);
        if ( v22 <= 0x7F )
          v21 = v22;
        memcpy(cc->errstr, v20, v21);
        cc->errstr[v21] = 0;
        return 0LL;
      }
    }
    return 0LL;
  }
};

// Line 2825: range 000000000CAB86E0-000000000CAB8A37
void *__fastcall command_post_fragment(redisClusterContext_0 *cc, cmd *command, hilist_0 *commands)
{
  __int64 v4; // r12
  listNode_0 *v6; // rax
  void *result; // rax
  int v8; // ecx
  cmd_type_t type; // edx
  _BYTE *v10; // rax
  _QWORD *v11; // rbx
  cmd_type_t v12; // eax
  _WORD *v13; // rax
  hiarray *keys; // rax
  uint32_t nelem; // r12d
  size_t v16; // rdi
  void *v17; // rax
  signed int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // rdx
  redisReply_0 *reply; // rax
  size_t elements; // rsi
  listIter_0 li; // [rsp+0h] [rbp-38h] BYREF

  v4 = 0LL;
  listRewind(commands, &li);
LABEL_2:
  while ( 1 )
  {
    v6 = listNext(&li);
    if ( !v6 )
      break;
    while ( 1 )
    {
      result = (void *)*((_QWORD *)v6->value + 13);
      if ( !result )
        return 0LL;
      v8 = *(_DWORD *)result;
      if ( *(_DWORD *)result == 6 )
        return result;
      type = command->type;
      if ( type == CMD_REQ_REDIS_MGET )
      {
        if ( v8 != 2 )
          goto LABEL_12;
        goto LABEL_2;
      }
      if ( type != CMD_REQ_REDIS_DEL && type != CMD_REQ_REDIS_EXISTS )
        break;
      if ( v8 != 3 )
        goto LABEL_12;
      v4 += *((_QWORD *)result + 1);
      v6 = listNext(&li);
      if ( !v6 )
        goto LABEL_18;
    }
    if ( type == CMD_REQ_REDIS_MSET )
    {
      if ( v8 != 5
        || *((_QWORD *)result + 3) != 2LL
        || (v10 = (_BYTE *)*((_QWORD *)result + 4), *v10 != 79)
        || v10[1] != 75
        || v10[2] )
      {
LABEL_12:
        if ( cc )
        {
          cc->err = 2;
          strcpy(cc->errstr, "reply type error");
        }
        return 0LL;
      }
    }
  }
LABEL_18:
  v11 = hiredisAllocFns.callocFn(1LL, 64LL);
  if ( !v11 )
    goto oom;
  v12 = command->type;
  if ( v12 != CMD_REQ_REDIS_MGET )
  {
    if ( v12 == CMD_REQ_REDIS_DEL || v12 == CMD_REQ_REDIS_EXISTS )
    {
      *(_DWORD *)v11 = 3;
      v11[1] = v4;
      return v11;
    }
    if ( v12 != CMD_REQ_REDIS_MSET )
      return v11;
    *(_DWORD *)v11 = 5;
    v13 = hiredisAllocFns.mallocFn(3uLL);
    v11[4] = v13;
    if ( v13 )
    {
      v11[3] = 2LL;
      *v13 = 19279;
      *(_BYTE *)(v11[4] + 2LL) = 0;
      return v11;
    }
    goto oom;
  }
  keys = command->keys;
  *(_DWORD *)v11 = 2;
  nelem = keys->nelem;
  v16 = keys->nelem;
  v11[6] = v16;
  v17 = hiredisAllocFns.callocFn(v16, 8LL);
  v11[7] = v17;
  if ( !v17 )
  {
oom:
    freeReplyObject(v11);
    if ( cc )
    {
      cc->err = 5;
      strcpy(cc->errstr, "Out of memory");
      return 0LL;
    }
    return 0LL;
  }
  v18 = nelem - 1;
  if ( (int)(nelem - 1) < 0 )
    return v11;
  v19 = 8LL * v18;
  v20 = v19 - 8;
  reply = (*(cmd **)((char *)command->frag_seq + v19))->reply;
  if ( !reply )
  {
LABEL_44:
    freeReplyObject(v11);
    if ( cc )
    {
      cc->err = 2;
      strcpy(cc->errstr, "sub reply is null");
      return 0LL;
    }
    return 0LL;
  }
  while ( 1 )
  {
    if ( reply->type == 1 )
    {
      *(_QWORD *)(v11[7] + v19) = reply;
      goto LABEL_37;
    }
    if ( reply->type != 2 )
      goto LABEL_37;
    elements = reply->elements;
    if ( !elements )
      break;
    *(_QWORD *)(v11[7] + v19) = reply->element[elements - 1];
    --reply->elements;
LABEL_37:
    if ( --v18 < 0 )
      return v11;
    reply = (*(cmd **)((char *)command->frag_seq + v20))->reply;
    if ( !reply )
      goto LABEL_44;
    v19 = v20;
    v20 -= 8LL;
  }
  freeReplyObject(v11);
  if ( !cc )
    return 0LL;
  cc->err = 2;
  strcpy(cc->errstr, "sub reply elements error");
  return 0LL;
};

// Line 2950: range 000000000CAB8A40-000000000CAB97CA
int __fastcall command_format_by_slot(redisClusterContext_0 *cc, cmd *command, hilist_0 *commands)
{
  int clen; // esi
  const char *v5; // rdx
  cmd_parse_result_t v6; // eax
  hiarray *keys; // rdi
  cmd *v8; // rbp
  cmd **v9; // rax
  __int64 v10; // rbx
  const char **v11; // rax
  const char *v12; // rdi
  const char **v13; // r14
  signed __int64 v14; // rsi
  int v15; // r9d
  const char *v16; // rcx
  int v17; // edx
  int v18; // eax
  const char *v19; // r8
  int v20; // ecx
  uint16_t v21; // ax
  int v22; // r13d
  cmd **v23; // rbp
  cmd *v24; // r15
  _QWORD *v25; // rax
  _QWORD *v26; // rbp
  signed __int64 v27; // rdx
  uint32_t v28; // r14d
  int v29; // eax
  uint32_t v30; // r14d
  bool v31; // zf
  cmd *v32; // rbp
  __int64 v33; // r13
  __int64 v34; // r12
  cmd_type_t type; // eax
  int v36; // eax
  unsigned __int8 v37; // r14
  unsigned int v38; // eax
  _BYTE *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r15
  hiarray *v42; // rdi
  uint8_t *v43; // r14
  const void **v44; // rax
  signed __int64 v45; // r13
  const void **v46; // rbp
  int v47; // eax
  unsigned int v48; // edx
  size_t v49; // rdx
  int v50; // r14d
  unsigned int v51; // r15d
  _WORD *v52; // rax
  char *v53; // r14
  const unsigned __int16 **v54; // rax
  char *v55; // rdx
  const unsigned __int16 *v56; // rsi
  int v57; // edx
  int v58; // eax
  int v59; // eax
  __int64 i; // rbx
  cmd *v61; // rdi
  int v63; // eax
  unsigned __int8 v64; // r14
  unsigned int v65; // eax
  _BYTE *v66; // rax
  __int64 v67; // rax
  __int64 v68; // r15
  hiarray *v69; // rdi
  uint8_t *v70; // r14
  const void **v71; // rax
  signed __int64 v72; // r13
  const void **v73; // rbp
  int v74; // eax
  unsigned int v75; // edx
  size_t v76; // rdx
  int v77; // r14d
  __int64 v78; // rdi
  int v79; // eax
  unsigned __int8 v80; // r14
  unsigned int v81; // eax
  _BYTE *v82; // rax
  __int64 v83; // rax
  __int64 v84; // r15
  hiarray *v85; // rdi
  uint8_t *v86; // r14
  const void **v87; // rax
  signed __int64 v88; // r13
  const void **v89; // rbp
  int v90; // eax
  unsigned int v91; // edx
  size_t v92; // rdx
  int v93; // r14d
  __int64 v94; // rdi
  int v95; // eax
  int v96; // esi
  unsigned __int8 v97; // r14
  unsigned int v98; // eax
  _BYTE *v99; // rax
  __int64 v100; // rax
  __int64 v101; // r15
  hiarray *v102; // rdi
  uint8_t *v103; // r14
  _QWORD *v104; // rax
  __int64 v105; // r13
  _QWORD *v106; // rbp
  int v107; // eax
  unsigned int v108; // edx
  size_t v109; // rdx
  int v110; // r14d
  unsigned int v111; // r14d
  _WORD *v112; // rax
  const char **v113; // rax
  const char *v114; // rdi
  signed __int64 v115; // rsi
  int v116; // r8d
  const char *v117; // rdx
  int v118; // eax
  int v119; // r9d
  const char *v120; // rcx
  int v121; // edx
  char *errstr; // rbp
  size_t v123; // rbx
  size_t v124; // rax
  uint32_t idxe; // [rsp+0h] [rbp-88h]
  uint32_t idx; // [rsp+0h] [rbp-88h]
  __int64 idxa; // [rsp+0h] [rbp-88h]
  uint32_t idxb; // [rsp+0h] [rbp-88h]
  uint32_t idxc; // [rsp+0h] [rbp-88h]
  uint32_t idxd; // [rsp+0h] [rbp-88h]
  int slot_num; // [rsp+Ch] [rbp-7Ch]
  unsigned int key_count; // [rsp+10h] [rbp-78h]
  cmd *key_counta; // [rsp+10h] [rbp-78h]
  cmd *commanda; // [rsp+18h] [rbp-70h]
  cmd *commandb; // [rsp+18h] [rbp-70h]
  __int64 v138; // [rsp+30h] [rbp-58h]
  int v139; // [rsp+38h] [rbp-50h]
  uint32_t v140; // [rsp+38h] [rbp-50h]
  int v141; // [rsp+38h] [rbp-50h]
  int v142; // [rsp+38h] [rbp-50h]
  int v143; // [rsp+3Ch] [rbp-4Ch]
  uint8_t s[72]; // [rsp+40h] [rbp-48h] BYREF

  if ( !cc )
    return -1;
  if ( !commands )
    return -1;
  if ( !command )
    return -1;
  if ( !command->cmd )
    return -1;
  clen = command->clen;
  if ( !clen )
    return -1;
  redis_parse_cmd(command);
  v6 = command->result;
  if ( v6 == CMD_PARSE_ENOMEM )
  {
    slot_num = -1;
    cc->err = 5;
    strcpy(cc->errstr, "Out of memory");
    return slot_num;
  }
  if ( v6 == CMD_PARSE_OK )
  {
    keys = command->keys;
    key_count = keys->nelem;
    if ( (int)keys->nelem <= 0 )
    {
      slot_num = -1;
      strcpy(cc->errstr, "No keys in command(must have keys for redis cluster mode)");
      cc->err = 2;
      return slot_num;
    }
    if ( key_count != 1 )
    {
      v8 = (cmd *)hiredisAllocFns.callocFn(0x4000LL, 8LL);
      if ( v8 )
      {
        v9 = (cmd **)hiredisAllocFns.callocFn(key_count, 8LL);
        command->frag_seq = v9;
        if ( v9 )
        {
          v10 = 0LL;
          commanda = v8;
          while ( 1 )
          {
            v11 = (const char **)hiarray_get(command->keys, v10);
            v12 = *v11;
            v13 = v11;
            v14 = v11[1] - *v11;
            v15 = *((_DWORD *)v11 + 2) - *(_DWORD *)v11;
            if ( v15 <= 0 )
            {
              v17 = 0;
            }
            else
            {
              if ( *v12 == 123 )
              {
                v17 = 0;
                v18 = 1;
                if ( (int)v14 <= 1 )
                  goto LABEL_68;
                goto LABEL_20;
              }
              v16 = v12 + 1;
              v17 = 0;
              do
              {
                if ( v15 <= ++v17 )
                  break;
                ++v16;
              }
              while ( *(v16 - 1) != 123 );
            }
            if ( (_DWORD)v14 == v17 )
              goto LABEL_27;
            v18 = v17 + 1;
            if ( (int)v14 <= v17 + 1 )
            {
LABEL_68:
              v20 = v18;
              goto LABEL_24;
            }
LABEL_20:
            if ( v12[v18] != 125 )
            {
              v19 = &v12[v18 + 1];
              v20 = v18;
              while ( v15 > ++v20 )
              {
                if ( *v19++ == 125 )
                  goto LABEL_25;
              }
LABEL_24:
              if ( (_DWORD)v14 == v20 )
                goto LABEL_27;
              goto LABEL_25;
            }
            v20 = v18;
LABEL_25:
            if ( v18 != v20 )
            {
              LODWORD(v14) = v20 - v17 - 1;
              v12 += v17 + 1;
            }
LABEL_27:
            v21 = crc16(v12, v14);
            v22 = v21 & 0x3FFF;
            slot_num = v22;
            v23 = (cmd **)(&commanda->id + (v21 & 0x3FFF));
            v24 = *v23;
            if ( !*v23 && (v24 = command_get(), (*v23 = v24) == 0LL)
              || (command->frag_seq[v10] = v24, ++v24->narg, v25 = hiarray_push(v24->keys), (v26 = v25) == 0LL) )
            {
              v8 = commanda;
              break;
            }
            *v25 = *v13;
            v25[1] = v13[1];
            v27 = v13[1] - *v13;
            v28 = v24->clen;
            idxe = v27;
            v29 = uint_len(v27);
            v24->slot_num = v22;
            v30 = idxe + v28;
            v31 = command->type == CMD_REQ_REDIS_MSET;
            v24->clen = v30 + v29;
            if ( v31 )
            {
              v140 = v30 + v29;
              v53 = (char *)(v26[1] + 1LL);
              idxa = v26[1];
              v54 = __ctype_b_loc();
              v55 = v53;
              v56 = *v54;
              while ( (v56[*v55] & 0x800) == 0 )
                ++v55;
              v57 = *(char *)(idxa + 1);
              if ( (v56[*(char *)(idxa + 1)] & 0x800) == 0 )
              {
                do
                  v57 = *++v53;
                while ( (v56[*v53] & 0x800) == 0 );
              }
              v58 = 0;
              do
              {
                ++v53;
                v58 = v57 + 10 * v58 - 48;
                v57 = *v53;
              }
              while ( (v56[*v53] & 0x800) != 0 );
              v59 = v58 + (_DWORD)v53 - idxa + 4;
              *((_DWORD *)v26 + 4) = v59;
              v24->clen = v140 + v59;
            }
            if ( key_count <= (unsigned int)++v10 )
            {
              v32 = commanda;
              v143 = v22;
              v33 = 0LL;
              commandb = command;
              key_counta = v32;
              while ( 1 )
              {
                v34 = *(uint64_t *)((char *)&key_counta->id + v33);
                if ( v34 )
                  break;
LABEL_37:
                v33 += 8LL;
                if ( v33 == 0x20000 )
                {
                  hiredisAllocFns.freeFn(key_counta);
                  if ( commands->len == 1 )
                  {
                    listDelNode(commands, commands->head);
                    if ( commandb->frag_seq )
                    {
                      ((void (*)(void))hiredisAllocFns.freeFn)();
                      commandb->frag_seq = 0LL;
                    }
                    commandb->slot_num = v143;
                  }
                  return slot_num;
                }
              }
              type = commandb->type;
              switch ( type )
              {
                case CMD_REQ_REDIS_MGET:
                  v36 = *(_DWORD *)(v34 + 72);
                  *(_DWORD *)(v34 + 40) += 5 * v36;
                  *(_DWORD *)(v34 + 72) = v36 + 1;
                  hi_itoa(s, v36 + 1);
                  v37 = strlen((const char *)s);
                  v38 = v37 + *(_DWORD *)(v34 + 40) + 13;
                  *(_DWORD *)(v34 + 40) = v38;
                  v39 = hiredisAllocFns.callocFn(v38, 1LL);
                  *(_QWORD *)(v34 + 32) = v39;
                  if ( !v39 )
                    goto LABEL_123;
                  *v39 = 42;
                  memcpy((void *)(*(_QWORD *)(v34 + 32) + 1LL), s, v37);
                  v40 = *(_QWORD *)(v34 + 32) + (unsigned int)v37 + 1;
                  v41 = (unsigned int)v37 + 13;
                  idx = 0;
                  *(_QWORD *)v40 = 0x676D0A0D34240A0DLL;
                  *(_DWORD *)(v40 + 8) = 168653925;
                  v42 = *(hiarray **)(v34 + 48);
                  if ( v42->nelem )
                  {
                    v138 = v33;
                    do
                    {
                      v43 = s;
                      v44 = (const void **)hiarray_get(v42, idx);
                      v45 = (_BYTE *)v44[1] - (_BYTE *)*v44;
                      v46 = v44;
                      hi_itoa(s, v45);
                      do
                      {
                        v47 = *(_DWORD *)v43;
                        v43 += 4;
                        v48 = ~v47 & (v47 - 16843009) & 0x80808080;
                      }
                      while ( !v48 );
                      if ( (~v47 & (v47 - 16843009) & 0x8080) == 0 )
                        LOBYTE(v48) = (~v47 & (v47 - 16843009) & 0x80808080) >> 16;
                      v139 = v41 + 1;
                      if ( (~v47 & (v47 - 16843009) & 0x8080) == 0 )
                        LOBYTE(v43) = (_BYTE)v43 + 2;
                      *(_BYTE *)(*(_QWORD *)(v34 + 32) + v41) = 36;
                      v49 = (unsigned __int8)((_BYTE)v43 - (__CFADD__((_BYTE)v48, (_BYTE)v48) + 3) - (unsigned __int8)s);
                      v50 = v49;
                      memcpy((void *)(*(_QWORD *)(v34 + 32) + (unsigned int)(v41 + 1)), s, v49);
                      *(_WORD *)(*(_QWORD *)(v34 + 32) + (unsigned int)(v50 + v139)) = 2573;
                      v51 = v45 + v50 + v139 + 2;
                      memcpy((void *)(*(_QWORD *)(v34 + 32) + (unsigned int)(v50 + v139 + 2)), *v46, (unsigned int)v45);
                      v52 = (_WORD *)(*(_QWORD *)(v34 + 32) + v51);
                      ++idx;
                      v41 = v51 + 2;
                      *v52 = 2573;
                      v42 = *(hiarray **)(v34 + 48);
                    }
                    while ( idx < v42->nelem );
                    break;
                  }
LABEL_51:
                  type = commandb->type;
LABEL_35:
                  *(_DWORD *)(v34 + 24) = type;
                  if ( !listAddNodeTail(commands, (void *)v34) )
                    goto LABEL_123;
                  *(uint64_t *)((char *)&key_counta->id + v33) = 0LL;
                  goto LABEL_37;
                case CMD_REQ_REDIS_DEL:
                  v63 = *(_DWORD *)(v34 + 72);
                  *(_DWORD *)(v34 + 40) += 5 * v63;
                  *(_DWORD *)(v34 + 72) = v63 + 1;
                  hi_itoa(s, v63 + 1);
                  v64 = strlen((const char *)s);
                  v65 = v64 + *(_DWORD *)(v34 + 40) + 12;
                  *(_DWORD *)(v34 + 40) = v65;
                  v66 = hiredisAllocFns.callocFn(v65, 1LL);
                  *(_QWORD *)(v34 + 32) = v66;
                  if ( !v66 )
                    goto LABEL_123;
                  *v66 = 42;
                  memcpy((void *)(*(_QWORD *)(v34 + 32) + 1LL), s, v64);
                  v67 = *(_QWORD *)(v34 + 32) + (unsigned int)v64 + 1;
                  v68 = (unsigned int)v64 + 12;
                  idxb = 0;
                  *(_QWORD *)v67 = 0x65640A0D33240A0DLL;
                  *(_WORD *)(v67 + 8) = 3436;
                  *(_BYTE *)(v67 + 10) = 10;
                  v69 = *(hiarray **)(v34 + 48);
                  if ( !v69->nelem )
                    goto LABEL_51;
                  v138 = v33;
                  do
                  {
                    v70 = s;
                    v71 = (const void **)hiarray_get(v69, idxb);
                    v72 = (_BYTE *)v71[1] - (_BYTE *)*v71;
                    v73 = v71;
                    hi_itoa(s, v72);
                    do
                    {
                      v74 = *(_DWORD *)v70;
                      v70 += 4;
                      v75 = ~v74 & (v74 - 16843009) & 0x80808080;
                    }
                    while ( !v75 );
                    if ( (~v74 & (v74 - 16843009) & 0x8080) == 0 )
                      LOBYTE(v75) = (~v74 & (v74 - 16843009) & 0x80808080) >> 16;
                    v141 = v68 + 1;
                    if ( (~v74 & (v74 - 16843009) & 0x8080) == 0 )
                      LOBYTE(v70) = (_BYTE)v70 + 2;
                    *(_BYTE *)(*(_QWORD *)(v34 + 32) + v68) = 36;
                    v76 = (unsigned __int8)((_BYTE)v70 - (__CFADD__((_BYTE)v75, (_BYTE)v75) + 3) - (unsigned __int8)s);
                    v77 = v76;
                    memcpy((void *)(*(_QWORD *)(v34 + 32) + (unsigned int)(v68 + 1)), s, v76);
                    v78 = (unsigned int)(v77 + v141 + 2);
                    *(_WORD *)(*(_QWORD *)(v34 + 32) + (unsigned int)(v77 + v141)) = 2573;
                    memcpy((void *)(*(_QWORD *)(v34 + 32) + v78), *v73, (unsigned int)v72);
                    ++idxb;
                    v68 = (unsigned int)(v72 + v78 + 2);
                    *(_WORD *)(*(_QWORD *)(v34 + 32) + (unsigned int)(v72 + v78)) = 2573;
                    v69 = *(hiarray **)(v34 + 48);
                  }
                  while ( idxb < v69->nelem );
                  break;
                case CMD_REQ_REDIS_EXISTS:
                  v79 = *(_DWORD *)(v34 + 72);
                  *(_DWORD *)(v34 + 40) += 5 * v79;
                  *(_DWORD *)(v34 + 72) = v79 + 1;
                  hi_itoa(s, v79 + 1);
                  v80 = strlen((const char *)s);
                  v81 = v80 + *(_DWORD *)(v34 + 40) + 15;
                  *(_DWORD *)(v34 + 40) = v81;
                  v82 = hiredisAllocFns.callocFn(v81, 1LL);
                  *(_QWORD *)(v34 + 32) = v82;
                  if ( !v82 )
                    goto LABEL_123;
                  *v82 = 42;
                  memcpy((void *)(*(_QWORD *)(v34 + 32) + 1LL), s, v80);
                  v83 = *(_QWORD *)(v34 + 32) + (unsigned int)v80 + 1;
                  v84 = (unsigned int)v80 + 15;
                  idxc = 0;
                  *(_QWORD *)v83 = 0x78650A0D36240A0DLL;
                  *(_DWORD *)(v83 + 8) = 1937011561;
                  *(_WORD *)(v83 + 12) = 2573;
                  v85 = *(hiarray **)(v34 + 48);
                  if ( !v85->nelem )
                    goto LABEL_51;
                  v138 = v33;
                  do
                  {
                    v86 = s;
                    v87 = (const void **)hiarray_get(v85, idxc);
                    v88 = (_BYTE *)v87[1] - (_BYTE *)*v87;
                    v89 = v87;
                    hi_itoa(s, v88);
                    do
                    {
                      v90 = *(_DWORD *)v86;
                      v86 += 4;
                      v91 = ~v90 & (v90 - 16843009) & 0x80808080;
                    }
                    while ( !v91 );
                    if ( (~v90 & (v90 - 16843009) & 0x8080) == 0 )
                      LOBYTE(v91) = (~v90 & (v90 - 16843009) & 0x80808080) >> 16;
                    v142 = v84 + 1;
                    if ( (~v90 & (v90 - 16843009) & 0x8080) == 0 )
                      LOBYTE(v86) = (_BYTE)v86 + 2;
                    *(_BYTE *)(*(_QWORD *)(v34 + 32) + v84) = 36;
                    v92 = (unsigned __int8)((_BYTE)v86 - (__CFADD__((_BYTE)v91, (_BYTE)v91) + 3) - (unsigned __int8)s);
                    v93 = v92;
                    memcpy((void *)(*(_QWORD *)(v34 + 32) + (unsigned int)(v84 + 1)), s, v92);
                    v94 = (unsigned int)(v93 + v142 + 2);
                    *(_WORD *)(*(_QWORD *)(v34 + 32) + (unsigned int)(v93 + v142)) = 2573;
                    memcpy((void *)(*(_QWORD *)(v34 + 32) + v94), *v89, (unsigned int)v88);
                    ++idxc;
                    v84 = (unsigned int)(v88 + v94 + 2);
                    *(_WORD *)(*(_QWORD *)(v34 + 32) + (unsigned int)(v88 + v94)) = 2573;
                    v85 = *(hiarray **)(v34 + 48);
                  }
                  while ( idxc < v85->nelem );
                  break;
                case CMD_REQ_REDIS_MSET:
                  v95 = *(_DWORD *)(v34 + 72);
                  *(_DWORD *)(v34 + 40) += 3 * v95;
                  v96 = 2 * v95 + 1;
                  *(_DWORD *)(v34 + 72) = v96;
                  hi_itoa(s, v96);
                  v97 = strlen((const char *)s);
                  v98 = v97 + *(_DWORD *)(v34 + 40) + 13;
                  *(_DWORD *)(v34 + 40) = v98;
                  v99 = hiredisAllocFns.callocFn(v98, 1LL);
                  *(_QWORD *)(v34 + 32) = v99;
                  if ( !v99 )
                  {
LABEL_123:
                    v8 = key_counta;
                    goto LABEL_62;
                  }
                  *v99 = 42;
                  memcpy((void *)(*(_QWORD *)(v34 + 32) + 1LL), s, v97);
                  v100 = *(_QWORD *)(v34 + 32) + (unsigned int)v97 + 1;
                  v101 = (unsigned int)v97 + 13;
                  idxd = 0;
                  *(_QWORD *)v100 = 0x736D0A0D34240A0DLL;
                  *(_DWORD *)(v100 + 8) = 168653925;
                  v102 = *(hiarray **)(v34 + 48);
                  if ( !v102->nelem )
                    goto LABEL_51;
                  v138 = v33;
                  do
                  {
                    v103 = s;
                    v104 = hiarray_get(v102, idxd);
                    v105 = v104[1] - *v104;
                    v106 = v104;
                    hi_itoa(s, v105);
                    do
                    {
                      v107 = *(_DWORD *)v103;
                      v103 += 4;
                      v108 = ~v107 & (v107 - 16843009) & 0x80808080;
                    }
                    while ( !v108 );
                    if ( (~v107 & (v107 - 16843009) & 0x8080) == 0 )
                      LOBYTE(v108) = (~v107 & (v107 - 16843009) & 0x80808080) >> 16;
                    if ( (~v107 & (v107 - 16843009) & 0x8080) == 0 )
                      LOBYTE(v103) = (_BYTE)v103 + 2;
                    *(_BYTE *)(*(_QWORD *)(v34 + 32) + v101) = 36;
                    v109 = (unsigned __int8)((_BYTE)v103 - (__CFADD__((_BYTE)v108, (_BYTE)v108) + 3) - (unsigned __int8)s);
                    v110 = v109;
                    memcpy((void *)(*(_QWORD *)(v34 + 32) + (unsigned int)(v101 + 1)), s, v109);
                    v111 = v101 + 1 + v110;
                    v112 = (_WORD *)(*(_QWORD *)(v34 + 32) + v111);
                    v111 += 2;
                    *v112 = 2573;
                    memcpy(
                      (void *)(*(_QWORD *)(v34 + 32) + v111),
                      (const void *)*v106,
                      (unsigned int)(*((_DWORD *)v106 + 4) + v105));
                    v102 = *(hiarray **)(v34 + 48);
                    ++idxd;
                    v101 = (_DWORD)v105 + *((_DWORD *)v106 + 4) + v111;
                  }
                  while ( idxd < v102->nelem );
                  break;
                default:
                  goto LABEL_35;
              }
              v33 = v138;
              goto LABEL_51;
            }
          }
        }
LABEL_62:
        cc->err = 5;
        strcpy(cc->errstr, "Out of memory");
        for ( i = 0LL; i != 0x20000; i += 8LL )
        {
          v61 = *(cmd **)((char *)&v8->id + i);
          command_destroy(v61);
        }
      }
      else
      {
        cc->err = 5;
        strcpy(cc->errstr, "Out of memory");
      }
      hiredisAllocFns.freeFn(v8);
      return -1;
    }
    v113 = (const char **)hiarray_get(keys, 0);
    v114 = *v113;
    v115 = v113[1] - *v113;
    v116 = *((_DWORD *)v113 + 2) - *(_DWORD *)v113;
    if ( v116 <= 0 )
    {
      v118 = 0;
    }
    else
    {
      if ( *v114 == 123 )
      {
        v118 = 0;
LABEL_109:
        v119 = v118 + 1;
        if ( (int)v115 <= v118 + 1 )
        {
          v121 = v118 + 1;
        }
        else
        {
          if ( v114[v119] == 125 )
          {
            v121 = v118 + 1;
LABEL_115:
            if ( v119 != v121 )
            {
              LODWORD(v115) = v121 - v118 - 1;
              v114 += v118 + 1;
            }
            goto LABEL_117;
          }
          v120 = &v114[v119 + 1];
          v121 = v118 + 1;
          while ( v116 > ++v121 )
          {
            if ( *v120++ == 125 )
              goto LABEL_115;
          }
        }
        if ( (_DWORD)v115 != v121 )
          goto LABEL_115;
LABEL_117:
        slot_num = crc16(v114, v115) & 0x3FFF;
        command->slot_num = slot_num;
        return slot_num;
      }
      v117 = v114 + 1;
      v118 = 0;
      do
      {
        if ( v116 <= ++v118 )
          break;
        ++v117;
      }
      while ( *(v117 - 1) != 123 );
    }
    if ( (_DWORD)v115 == v118 )
      goto LABEL_117;
    goto LABEL_109;
  }
  errstr = command->errstr;
  cc->err = 4;
  if ( !errstr )
    _redisClusterSetError_0((redisClusterContext_0 *)command, clen, v5);
  v123 = 127LL;
  v124 = strlen(errstr);
  if ( v124 <= 0x7F )
    v123 = v124;
  memcpy(cc->errstr, errstr, v123);
  cc->errstr[v123] = 0;
  return -1;
};

// Line 2994: range 000000000CABD1A0-000000000CABD1AF
void __fastcall redisClusterSetMaxRedirect(redisClusterContext_0 *cc, int max_retry_count)
{
  if ( cc )
  {
    if ( max_retry_count > 0 )
      cc->max_retry_count = max_retry_count;
  }
};

// Line 3002: range 000000000CABD1C0-000000000CABD3E6
void *__fastcall redisClusterFormattedCommand(redisClusterContext_0 *cc, char *cmd, int len)
{
  cmd *v4; // rax
  cmd *v5; // r12
  hilist_0 *v6; // r13
  int v7; // eax
  cmd *value; // r15
  redisReply_0 *v9; // rax
  listNode_0 *v10; // rax
  void *result; // rax
  size_t v12; // rax
  redisReply_0 *reply; // [rsp+8h] [rbp-50h]
  listIter_0 li; // [rsp+10h] [rbp-48h] BYREF

  if ( !cc )
    return 0LL;
  if ( cc->err )
  {
    cc->err = 0;
    v12 = strlen(cc->errstr);
    memset(cc->errstr, 0, v12);
  }
  v4 = command_get();
  v5 = v4;
  if ( !v4 )
  {
    cc->err = 5;
    strcpy(cc->errstr, "Out of memory");
    goto LABEL_19;
  }
  v4->cmd = cmd;
  v4->clen = len;
  v6 = listCreate();
  if ( !v6 )
  {
    cc->err = 5;
    strcpy(cc->errstr, "Out of memory");
    v5->cmd = 0LL;
    command_destroy(v5);
    goto LABEL_19;
  }
  v6->free = listCommandFree;
  v7 = command_format_by_slot(cc, v5, v6);
  if ( v7 < 0 )
  {
LABEL_18:
    v5->cmd = 0LL;
    command_destroy(v5);
    listRelease(v6);
LABEL_19:
    cc->retry_count = 0;
    return 0LL;
  }
  if ( v7 > 0x3FFF )
  {
    cc->err = 2;
    strcpy(cc->errstr, "slot_num is out of range");
    goto LABEL_18;
  }
  if ( v6->len )
  {
    listRewind(v6, &li);
    while ( 1 )
    {
      v10 = listNext(&li);
      if ( !v10 )
        break;
      value = (cmd *)v10->value;
      v9 = (redisReply_0 *)redis_cluster_command_execute(cc, value);
      if ( !v9 )
        goto LABEL_18;
      if ( v9->type == 6 )
        goto done;
      value->reply = v9;
    }
    v9 = (redisReply_0 *)command_post_fragment(cc, v5, v6);
  }
  else
  {
    v9 = (redisReply_0 *)redis_cluster_command_execute(cc, v5);
  }
done:
  v5->cmd = 0LL;
  reply = v9;
  command_destroy(v5);
  listRelease(v6);
  result = reply;
  cc->retry_count = 0;
  return result;
};

// Line 3097: range 000000000CABD3F0-000000000CABD4A5
void *__fastcall redisClustervCommand(redisClusterContext_0 *cc, const char *format, __va_list_tag *ap)
{
  int v3; // eax
  void *v4; // rbx
  char *cmd; // [rsp+0h] [rbp-18h] BYREF

  if ( !cc )
    return 0LL;
  v3 = redisvFormatCommand(&cmd, format, ap);
  if ( v3 == -1 )
  {
    cc->err = 5;
    strcpy(cc->errstr, "Out of memory");
    return 0LL;
  }
  else if ( v3 == -2 )
  {
    cc->err = 2;
    strcpy(cc->errstr, "Invalid format string");
    return 0LL;
  }
  else
  {
    v4 = redisClusterFormattedCommand(cc, cmd, v3);
    hiredisAllocFns.freeFn(cmd);
    return v4;
  }
};

// Line 3123: range 000000000CABD4B0-000000000CABD53E
void *redisClusterCommand(redisClusterContext_0 *cc, const char *format, ...)
{
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, format);
  return redisClustervCommand(cc, format, (__va_list_tag *)ap);
};

// Line 3135: range 000000000CABD640-000000000CABD6C9
void *redisClusterCommandToNode(redisClusterContext_0 *cc, cluster_node_0 *node, const char *format, ...)
{
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, format);
  return redisClustervCommandToNode(cc, node, format, (__va_list_tag *)ap);
};

// Line 3145: range 000000000CABD540-000000000CABD631
void *__fastcall redisClustervCommandToNode(
        redisClusterContext_0 *cc,
        cluster_node_0 *node,
        const char *format,
        __va_list_tag *ap)
{
  redisContext_0 *v7; // rax
  redisContext_0 *v8; // rbx
  int err; // eax
  void *result; // rax
  char *v11; // r12
  const char *v12; // rdi
  size_t v13; // rbx
  size_t v14; // rax
  const char *errstr; // rbx
  size_t v16; // r12
  size_t v17; // rax
  char *v18; // rdi
  void *v19; // [rsp+0h] [rbp-38h] BYREF

  v7 = ctx_get_by_node(cc, node);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  err = v7->err;
  if ( err )
  {
    errstr = v8->errstr;
    if ( cc )
    {
      cc->err = err;
      v16 = 127LL;
      v17 = strlen(errstr);
      v18 = cc->errstr;
      if ( v17 <= 0x7F )
        v16 = v17;
      memcpy(v18, errstr, v16);
      cc->errstr[v16] = 0;
      return 0LL;
    }
    return 0LL;
  }
  if ( redisvAppendCommand(v8, format, ap) || (v8->flags & 1) == 0 || redisGetReply(v8, &v19) || (result = v19) == 0LL )
  {
    v11 = v8->errstr;
    if ( cc )
    {
      v12 = v8->errstr;
      cc->err = v8->err;
      v13 = 127LL;
      v14 = strlen(v12);
      if ( v14 <= 0x7F )
        v13 = v14;
      memcpy(cc->errstr, v11, v13);
      cc->errstr[v13] = 0;
    }
    return 0LL;
  }
  return result;
};

// Line 3175: range 000000000CABD6D0-000000000CABD73E
void *__fastcall redisClusterCommandArgv(redisClusterContext_0 *cc, int argc, const char **argv, const size_t *argvlen)
{
  int v4; // eax
  void *v5; // rbx
  char *cmd; // [rsp+0h] [rbp-18h] BYREF

  v4 = redisFormatCommandArgv(&cmd, argc, argv, argvlen);
  if ( v4 == -1 )
  {
    if ( cc )
    {
      cc->err = 5;
      strcpy(cc->errstr, "Out of memory");
    }
    return 0LL;
  }
  else
  {
    v5 = redisClusterFormattedCommand(cc, cmd, v4);
    hiredisAllocFns.freeFn(cmd);
    return v5;
  }
};

// Line 3194: range 000000000CABD740-000000000CABDB2E
int __fastcall redisClusterAppendFormattedCommand(redisClusterContext_0 *cc, char *cmd, int len)
{
  cmd *v5; // rax
  cmd *v6; // r12
  hilist_0 *v7; // r14
  int v8; // eax
  listNode_0 *v9; // rax
  const char **value; // rbp
  cluster_node_0 **table; // rax
  __int64 v12; // rdx
  int result; // eax
  cluster_node_0 **v14; // rax
  const char *slot_num; // rdx
  cluster_node_0 *v16; // rsi
  redisContext_0 *v17; // rax
  redisContext_0 *v18; // rbp
  int v19; // eax
  cluster_node_0 *v20; // rsi
  redisContext_0 *v21; // rax
  redisContext_0 *v22; // r13
  int err; // eax
  size_t v24; // rbp
  size_t v25; // rax
  char *errstr; // rdi
  const void *v27; // rsi
  hilist_0 *v28; // rax
  hilist *requests; // rdi
  const char *v30; // r13
  size_t v31; // rax
  const char *v32; // rbp
  size_t v33; // r13
  size_t v34; // rax
  listIter_0 li; // [rsp+0h] [rbp-48h] BYREF

  if ( !cc->requests )
  {
    v28 = listCreate();
    cc->requests = v28;
    if ( !v28 )
      goto LABEL_15;
    v28->free = listCommandFree;
  }
  v5 = command_get();
  v6 = v5;
  if ( !v5 )
  {
LABEL_15:
    strcpy(cc->errstr, "Out of memory");
    result = -1;
    cc->err = 5;
    return result;
  }
  v5->cmd = cmd;
  v5->clen = len;
  v7 = listCreate();
  if ( !v7 )
    goto LABEL_14;
  v7->free = listCommandFree;
  v8 = command_format_by_slot(cc, v6, v7);
  if ( v8 < 0 )
    goto LABEL_13;
  if ( v8 > 0x3FFF )
  {
    cc->err = 2;
    strcpy(cc->errstr, "slot_num is out of range");
    goto LABEL_13;
  }
  if ( v7->len )
  {
    listRewind(v7, &li);
    while ( 1 )
    {
      v9 = listNext(&li);
      if ( !v9 )
        goto LABEL_32;
      value = (const char **)v9->value;
      if ( !value )
        goto LABEL_13;
      table = cc->table;
      v12 = *((unsigned int *)value + 20);
      if ( !table || (unsigned int)v12 > 0x3FFF || (v20 = table[v12]) == 0LL )
      {
        cc->err = 2;
        strcpy(cc->errstr, "node get by slot error");
        goto LABEL_13;
      }
      v21 = ctx_get_by_node(cc, v20);
      v22 = v21;
      if ( !v21 )
        goto LABEL_13;
      err = v21->err;
      if ( err )
        break;
      if ( redisAppendFormattedCommand(v22, value[4], *((unsigned int *)value + 10)) )
      {
        v24 = 127LL;
        cc->err = v22->err;
        v25 = strlen(v22->errstr);
        errstr = cc->errstr;
        v27 = v22->errstr;
        if ( v25 <= 0x7F )
          v24 = v25;
LABEL_29:
        memcpy(errstr, v27, v24);
        cc->errstr[v24] = 0;
        goto LABEL_13;
      }
    }
    v30 = v22->errstr;
    cc->err = err;
    v24 = 127LL;
    v31 = strlen(v30);
    errstr = cc->errstr;
    v27 = v30;
    if ( v31 <= 0x7F )
      v24 = v31;
    goto LABEL_29;
  }
  v14 = cc->table;
  slot_num = (const char *)(unsigned int)v6->slot_num;
  if ( !v14 || (unsigned int)slot_num > 0x3FFF || (v16 = v14[(_QWORD)slot_num]) == 0LL )
  {
    _redisClusterSetError_2(cc, "node get by slot error", slot_num);
    goto LABEL_13;
  }
  v17 = ctx_get_by_node(cc, v16);
  v18 = v17;
  if ( !v17 )
  {
LABEL_13:
    v6->cmd = 0LL;
    command_destroy(v6);
    listRelease(v7);
    return -1;
  }
  v19 = v17->err;
  if ( v19 )
  {
    v32 = v18->errstr;
    cc->err = v19;
    v33 = 127LL;
    v34 = strlen(v32);
    if ( v34 <= 0x7F )
      v33 = v34;
    memcpy(cc->errstr, v32, v33);
    cc->errstr[v33] = 0;
    goto LABEL_13;
  }
  if ( redisAppendFormattedCommand(v18, v6->cmd, v6->clen) )
  {
    _redisClusterSetError(cc, v18->err, v18->errstr);
    goto LABEL_13;
  }
LABEL_32:
  if ( v7->len )
    v6->sub_commands = v7;
  else
    listRelease(v7);
  requests = cc->requests;
  v6->cmd = 0LL;
  if ( listAddNodeTail(requests, v6) )
    return 0;
LABEL_14:
  cc->err = 5;
  strcpy(cc->errstr, "Out of memory");
  v6->cmd = 0LL;
  command_destroy(v6);
  return -1;
};

// Line 3287: range 000000000CABDB40-000000000CABDBE2
int __fastcall redisClustervAppendCommand(redisClusterContext_0 *cc, const char *format, __va_list_tag *ap)
{
  int result; // eax
  int appended; // ebx
  char *cmd; // [rsp+0h] [rbp-18h] BYREF

  result = redisvFormatCommand(&cmd, format, ap);
  if ( result == -1 )
  {
    if ( cc )
    {
      cc->err = 5;
      strcpy(cc->errstr, "Out of memory");
    }
  }
  else if ( result == -2 )
  {
    LOBYTE(result) = -1;
    if ( cc )
    {
      cc->err = 2;
      strcpy(cc->errstr, "Invalid format string");
    }
  }
  else
  {
    appended = redisClusterAppendFormattedCommand(cc, cmd, result);
    hiredisAllocFns.freeFn(cmd);
    return appended;
  }
  return result;
};

// Line 3309: range 000000000CABDBF0-000000000CABDC95
int redisClusterAppendCommand(redisClusterContext_0 *cc, const char *format, ...)
{
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  if ( !cc || !format )
    return -1;
  va_start(ap, format);
  return redisClustervAppendCommand(cc, format, (__va_list_tag *)ap);
};

// Line 3326: range 000000000CABDEF0-000000000CABDF79
int redisClusterAppendCommandToNode(redisClusterContext_0 *cc, cluster_node_0 *node, const char *format, ...)
{
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, format);
  return redisClustervAppendCommandToNode(cc, node, format, (__va_list_tag *)ap);
};

// Line 3337: range 000000000CABDCA0-000000000CABDEDF
int __fastcall redisClustervAppendCommandToNode(
        redisClusterContext_0 *cc,
        cluster_node_0 *node,
        const char *format,
        __va_list_tag *ap)
{
  bool v7; // zf
  redisContext_0 *v8; // rax
  redisContext_0 *v9; // rbx
  int err; // eax
  int v11; // eax
  int v12; // ebp
  int appended; // r13d
  cmd *v14; // rbx
  char *v15; // rax
  const char *addr; // rdi
  sds v17; // rax
  hilist_0 *v19; // rax
  const char *errstr; // rbx
  size_t v21; // rbp
  size_t v22; // rax
  char *v23; // rdi
  int v24; // eax
  const char *v25; // rbp
  size_t v26; // rbx
  size_t v27; // rax
  char *v28; // rdi
  char *cmd; // [rsp+0h] [rbp-38h] BYREF

  v7 = cc->requests == 0LL;
  cmd = 0LL;
  if ( v7 )
  {
    v19 = listCreate();
    cc->requests = v19;
    if ( !v19 )
      goto LABEL_13;
    v19->free = listCommandFree;
  }
  v8 = ctx_get_by_node(cc, node);
  v9 = v8;
  if ( !v8 )
    return -1;
  err = v8->err;
  if ( err )
  {
    errstr = v9->errstr;
    cc->err = err;
    v21 = 127LL;
    appended = -1;
    v22 = strlen(errstr);
    v23 = cc->errstr;
    if ( v22 <= 0x7F )
      v21 = v22;
    memcpy(v23, errstr, v21);
    cc->errstr[v21] = 0;
    return appended;
  }
  v11 = redisvFormatCommand(&cmd, format, ap);
  v12 = v11;
  if ( v11 == -1 )
  {
LABEL_13:
    v14 = 0LL;
    goto oom;
  }
  if ( v11 == -2 )
  {
    cc->err = 2;
    strcpy(cc->errstr, "Invalid format string");
    return -1;
  }
  appended = redisAppendFormattedCommand(v9, cmd, v11);
  if ( !appended )
  {
    v14 = command_get();
    if ( v14 )
    {
      v15 = cmd;
      addr = node->addr;
      v14->clen = v12;
      v14->cmd = v15;
      v17 = sdsnew(addr);
      v14->node_addr = v17;
      if ( v17 && listAddNodeTail(cc->requests, v14) )
        return appended;
    }
    else
    {
      hiredisAllocFns.freeFn(cmd);
    }
oom:
    appended = -1;
    command_destroy(v14);
    cc->err = 5;
    strcpy(cc->errstr, "Out of memory");
    return appended;
  }
  v24 = v9->err;
  v25 = v9->errstr;
  v26 = 127LL;
  appended = -1;
  cc->err = v24;
  v27 = strlen(v25);
  v28 = cc->errstr;
  if ( v27 <= 0x7F )
    v26 = v27;
  memcpy(v28, v25, v26);
  cc->errstr[v26] = 0;
  hiredisAllocFns.freeFn(cmd);
  return appended;
};

// Line 3400: range 000000000CABDF80-000000000CABDFE8
int __fastcall redisClusterAppendCommandArgv(
        redisClusterContext_0 *cc,
        int argc,
        const char **argv,
        const size_t *argvlen)
{
  int result; // eax
  int appended; // ebx
  char *cmd; // [rsp+0h] [rbp-18h] BYREF

  result = redisFormatCommandArgv(&cmd, argc, argv, argvlen);
  if ( result == -1 )
  {
    if ( cc )
    {
      cc->err = 5;
      strcpy(cc->errstr, "Out of memory");
    }
  }
  else
  {
    appended = redisClusterAppendFormattedCommand(cc, cmd, result);
    hiredisAllocFns.freeFn(cmd);
    return appended;
  }
  return result;
};

// Line 3494: range 000000000CABDFF0-000000000CABE5C1
int __fastcall redisClusterGetReply(redisClusterContext_0 *cc, void **reply)
{
  const char *v2; // rdx
  hilist *requests; // rdi
  listNode_0 *head; // r12
  cmd *value; // r13
  __int64 slot_num; // r14
  char *node_addr; // rsi
  dictEntry_0 *v10; // r13
  cluster_node_0 *val; // rax
  redisContext_0 *con; // r13
  int err; // eax
  int v14; // r12d
  redisReply_0 *v15; // rdi
  cluster_node_0 **table; // rax
  hilist_0 *sub_commands; // rax
  listNode_0 *v19; // rax
  _QWORD *v20; // r14
  __int64 v21; // rax
  cluster_node_0 **v22; // rcx
  cluster_node_0 *v23; // rax
  redisContext_0 *v24; // r15
  int v25; // eax
  void *v26; // r15
  int v27; // edx
  bool v28; // cc
  const char *v29; // r13
  size_t v30; // rbp
  size_t v31; // rax
  int v32; // edx
  const char *errstr; // r13
  size_t v34; // rbp
  size_t v35; // rax
  void *v36; // rax
  listNode_0 *v37; // rsi
  size_t v38; // rbp
  size_t v39; // rax
  hilist_0 *commands; // [rsp+18h] [rbp-60h]
  void *sub_reply; // [rsp+20h] [rbp-58h] BYREF
  listIter_0 li; // [rsp+30h] [rbp-48h] BYREF

  if ( !cc )
    return -1;
  if ( !reply )
    return -1;
  cc->err = 0;
  cc->errstr[0] = 0;
  *reply = 0LL;
  requests = cc->requests;
  if ( !requests )
    return -1;
  head = requests->head;
  if ( !requests->head )
    return 0;
  value = (cmd *)head->value;
  if ( !value )
  {
    cc->err = 2;
    strcpy(cc->errstr, "command in the requests list is null");
    goto error;
  }
  slot_num = (unsigned int)value->slot_num;
  if ( (int)slot_num >= 0 )
  {
    listDelNode(requests, requests->head);
    table = cc->table;
    if ( !table || (unsigned int)slot_num > 0x3FFF || (val = table[slot_num]) == 0LL )
    {
      cc->err = 2;
      strcpy(cc->errstr, "slot not served by any node");
      return -1;
    }
LABEL_10:
    con = val->con;
    if ( con )
    {
      err = con->err;
      if ( err )
      {
        if ( !cc->need_update_route )
        {
          v32 = cc->retry_count + 1;
          v28 = v32 <= cc->max_retry_count;
          cc->retry_count = v32;
          if ( !v28 )
          {
            cc->need_update_route = 1;
            cc->retry_count = 0;
          }
        }
        errstr = con->errstr;
        cc->err = err;
        v34 = 127LL;
        v14 = -1;
        v35 = strlen(errstr);
        if ( v35 <= 0x7F )
          v34 = v35;
        memcpy(cc->errstr, errstr, v34);
        cc->errstr[v34] = 0;
      }
      else
      {
        v14 = redisGetReply(con, reply);
        if ( v14 )
        {
          v38 = 127LL;
          cc->err = con->err;
          v39 = strlen(con->errstr);
          if ( v39 <= 0x7F )
            v38 = v39;
          v14 = -1;
          memcpy(cc->errstr, con->errstr, v38);
          cc->errstr[v38] = 0;
        }
        else
        {
          v15 = (redisReply_0 *)*reply;
          if ( *reply && v15->type == 6 && cluster_reply_error_type(v15) == 1 )
            cc->need_update_route = 1;
        }
      }
      return v14;
    }
    return -1;
  }
  node_addr = value->node_addr;
  if ( node_addr )
  {
    v10 = dictFind(cc->nodes, node_addr);
    if ( v10 )
    {
      listDelNode(cc->requests, head);
      val = (cluster_node_0 *)v10->val;
      if ( !val )
        return -1;
      goto LABEL_10;
    }
    cc->err = 2;
    strcpy(cc->errstr, "command was sent to a now unknown node");
error:
    listDelNode(cc->requests, head);
    return -1;
  }
  sub_commands = value->sub_commands;
  commands = sub_commands;
  if ( !sub_commands )
  {
    _redisClusterSetError_2(cc, "sub_commands in command is null", v2);
    goto error;
  }
  listRewind(sub_commands, &li);
  while ( 1 )
  {
    v19 = listNext(&li);
    if ( !v19 )
      break;
    v20 = v19->value;
    if ( !v20 )
    {
      cc->err = 2;
      strcpy(cc->errstr, "sub_command is null");
      goto error;
    }
    v21 = *((unsigned int *)v20 + 20);
    if ( (int)v21 < 0 )
    {
      cc->err = 2;
      strcpy(cc->errstr, "sub_command slot_num is less then zero");
      goto error;
    }
    v22 = cc->table;
    if ( !v22 || (unsigned int)v21 > 0x3FFF || (v23 = v22[v21]) == 0LL )
    {
      cc->err = 2;
      strcpy(cc->errstr, "slot not served by any node");
      goto error;
    }
    v24 = v23->con;
    if ( !v24 )
      goto error;
    v25 = v24->err;
    if ( v25 )
    {
      if ( !cc->need_update_route )
      {
        v27 = cc->retry_count + 1;
        v28 = v27 <= cc->max_retry_count;
        cc->retry_count = v27;
        if ( !v28 )
        {
          cc->need_update_route = 1;
          cc->retry_count = 0;
        }
      }
      v29 = v24->errstr;
      goto LABEL_46;
    }
    if ( redisGetReply(v24, &sub_reply) )
    {
      v29 = v24->errstr;
      v25 = v24->err;
LABEL_46:
      cc->err = v25;
      v30 = 127LL;
      v31 = strlen(v29);
      if ( v31 <= 0x7F )
        v30 = v31;
      memcpy(cc->errstr, v29, v30);
      cc->errstr[v30] = 0;
      goto error;
    }
    v26 = sub_reply;
    if ( sub_reply && *(_DWORD *)sub_reply == 6 && cluster_reply_error_type((redisReply_0 *)sub_reply) == 1 )
      cc->need_update_route = 1;
    v20[13] = v26;
  }
  v36 = command_post_fragment(cc, value, commands);
  *reply = v36;
  if ( !v36 )
    goto error;
  v37 = head;
  v14 = 0;
  listDelNode(cc->requests, v37);
  return v14;
};

// Line 3601: range 000000000CABE5D0-000000000CABE870
void __fastcall redisClusterReset(redisClusterContext_0 *cc)
{
  dict *nodes; // rsi
  size_t v3; // rax
  dict *v4; // rsi
  dictEntry_0 *v5; // rax
  void *val; // rbp
  redisContext_0 *v7; // rdi
  hilist *requests; // rdi
  dictEntry_0 *v9; // rax
  cluster_node_0 *v10; // rsi
  redisContext_0 *v11; // rax
  redisContext_0 *v12; // r13
  dict *v13; // rsi
  dictEntry_0 *v14; // rax
  void *v15; // rbp
  redisContext_0 *v16; // rdi
  size_t v17; // rax
  void *reply[2]; // [rsp+0h] [rbp-58h] BYREF
  dictIterator_0 iter; // [rsp+10h] [rbp-48h] BYREF

  if ( cc )
  {
    nodes = cc->nodes;
    if ( nodes )
    {
      if ( cc->err )
      {
        cc->err = 0;
        v3 = strlen(cc->errstr);
        memset(cc->errstr, 0, v3);
        v4 = cc->nodes;
        if ( v4 )
        {
          dictInitIterator(&iter, v4);
          while ( 1 )
          {
            v5 = dictNext(&iter);
            if ( !v5 )
              break;
            while ( 1 )
            {
              val = v5->val;
              if ( !val )
                break;
              v7 = (redisContext_0 *)*((_QWORD *)val + 4);
              if ( !v7 )
                break;
              redisFree(v7);
              *((_QWORD *)val + 4) = 0LL;
              v5 = dictNext(&iter);
              if ( !v5 )
                goto LABEL_10;
            }
          }
        }
      }
      else
      {
        LODWORD(reply[0]) = 0;
        dictInitIterator(&iter, nodes);
        while ( 1 )
        {
LABEL_17:
          v9 = dictNext(&iter);
          if ( !v9 )
            goto LABEL_26;
          v10 = (cluster_node_0 *)v9->val;
          if ( v10 )
          {
            v11 = ctx_get_by_node(cc, v10);
            v12 = v11;
            if ( v11 )
            {
              if ( (v11->flags & 1) != 0 )
                break;
            }
          }
        }
        if ( redisBufferWrite(v11, (int *)reply) == -1 )
          goto LABEL_26;
        do
        {
          if ( LODWORD(reply[0]) )
            goto LABEL_17;
        }
        while ( redisBufferWrite(v12, (int *)reply) != -1 );
        if ( redisClusterGetReply(cc, reply) )
        {
LABEL_27:
          if ( cc->err )
          {
            cc->err = 0;
            v17 = strlen(cc->errstr);
            memset(cc->errstr, 0, v17);
          }
          v13 = cc->nodes;
          if ( v13 )
          {
            dictInitIterator(&iter, v13);
            while ( 1 )
            {
              v14 = dictNext(&iter);
              if ( !v14 )
                break;
              while ( 1 )
              {
                v15 = v14->val;
                if ( !v15 )
                  break;
                v16 = (redisContext_0 *)*((_QWORD *)v15 + 4);
                if ( !v16 )
                  break;
                redisFree(v16);
                *((_QWORD *)v15 + 4) = 0LL;
                v14 = dictNext(&iter);
                if ( !v14 )
                  goto LABEL_10;
              }
            }
          }
        }
        else
        {
          while ( 1 )
          {
            freeReplyObject(reply[0]);
            if ( !reply[0] )
              break;
LABEL_26:
            if ( redisClusterGetReply(cc, reply) )
              goto LABEL_27;
          }
        }
      }
LABEL_10:
      requests = cc->requests;
      if ( requests )
      {
        listRelease(requests);
        cc->requests = 0LL;
      }
      if ( cc->need_update_route )
      {
        if ( cluster_update_route(cc) )
        {
          cc->err = 2;
          strcpy(cc->errstr, "route update error, please recreate redisClusterContext!");
        }
        else
        {
          cc->need_update_route = 0;
        }
      }
    }
  }
};

// Line 3645: range 000000000CAB7AB0-000000000CAB7B18
void __fastcall _redisClusterAsyncSetError(redisClusterAsyncContext_0 *acc, int type, const char *str)
{
  size_t v5; // r12
  size_t v6; // rax
  char *errstr; // rdi
  int *v8; // rax

  acc->err = type;
  if ( str )
  {
    v5 = 127LL;
    v6 = strlen(str);
    errstr = acc->errstr;
    if ( v6 <= 0x7F )
      v5 = v6;
    memcpy(errstr, str, v5);
    acc->errstr[v5] = 0;
  }
  else
  {
    if ( type != 1 )
      _redisClusterAsyncSetError_0(acc, type, 0LL);
    v8 = __errno_location();
    strerror_r(*v8, acc->errstr, 0x80uLL);
  }
};

// Line 3657: range 000000000C600034-000000000C60004F
void __fastcall __noreturn _redisClusterAsyncSetError_0(redisClusterAsyncContext_0 *acc, int type, const char *str)
{
  __assert_fail("type == 1", "hircluster.c", 0xE49u, "__redisClusterAsyncSetError");
};

// Line 3703: range 000000000CAB79C0-000000000CAB79CD
void __fastcall unlinkAsyncContextAndNode(void *data)
{
  if ( data )
    *((_QWORD *)data + 5) = 0LL;
};

// Line 3710: range 000000000CABE880-000000000CABEB6B
redisAsyncContext_0 *__fastcall actx_get_by_node(redisClusterAsyncContext_0 *acc, cluster_node_0 *node)
{
  redisAsyncContext_0 *result; // rax
  char *host; // rdi
  int port; // esi
  redisAsyncContext_0 *v7; // rax
  const char *v8; // rdx
  redisAsyncContext_0 *v9; // rbp
  int err; // eax
  char *password; // r9
  char *username; // r8
  int v13; // eax
  redisConnectCallback *onConnect; // rsi
  redisDisconnectCallback *onDisconnect; // rsi
  const char *errstr; // rbx
  size_t v17; // r13
  size_t v18; // rax
  size_t v19; // rbx
  size_t v20; // rax
  int *v21; // rax

  if ( !node )
    return 0LL;
  result = node->acon;
  if ( !result || result->c.err )
  {
    host = node->host;
    if ( !host || (port = node->port, !(_WORD)port) )
    {
      acc->err = 2;
      strcpy(acc->errstr, "node host or port is error");
      return 0LL;
    }
    v7 = redisAsyncConnect(host, port);
    v9 = v7;
    if ( !v7 )
    {
      acc->err = 5;
      strcpy(acc->errstr, "Out of memory");
      return 0LL;
    }
    err = v7->err;
    if ( err )
    {
      errstr = v9->errstr;
      acc->err = err;
      if ( errstr )
      {
        v17 = 127LL;
        v18 = strlen(errstr);
        if ( v18 <= 0x7F )
          v17 = v18;
        memcpy(acc->errstr, errstr, v17);
        acc->errstr[v17] = 0;
      }
      else
      {
        if ( err != 1 )
          _redisClusterAsyncSetError_0((redisClusterAsyncContext_0 *)host, port, v8);
        v21 = __errno_location();
        strerror_r(*v21, acc->errstr, 0x80uLL);
      }
      goto LABEL_26;
    }
    password = acc->cc->password;
    if ( !password
      || ((username = acc->cc->username) == 0LL
        ? (v13 = redisAsyncCommand(v9, 0LL, 0LL, "AUTH %s", acc->cc->password))
        : (v13 = redisAsyncCommand(v9, 0LL, 0LL, "AUTH %s %s", username, password)),
          !v13) )
    {
      if ( !acc->adapter || !((unsigned int (__fastcall *)(redisAsyncContext_0 *))acc->attach_fn)(v9) )
      {
        onConnect = acc->onConnect;
        if ( onConnect )
          redisAsyncSetConnectCallback(v9, onConnect);
        onDisconnect = acc->onDisconnect;
        if ( onDisconnect )
          redisAsyncSetDisconnectCallback(v9, onDisconnect);
        v9->data = node;
        v9->dataCleanup = unlinkAsyncContextAndNode;
        node->acon = v9;
        return v9;
      }
      acc->err = 2;
      strcpy(acc->errstr, "Failed to attach event adapter");
LABEL_26:
      redisAsyncFree(v9);
      return 0LL;
    }
    v19 = 127LL;
    acc->err = v9->c.err;
    v20 = strlen(v9->c.errstr);
    if ( v20 <= 0x7F )
      v19 = v20;
    memcpy(acc->errstr, v9->c.errstr, v19);
    acc->errstr[v19] = 0;
    redisAsyncFree(v9);
    return 0LL;
  }
  return result;
};

// Line 3844: range 000000000CABF3B0-000000000CABF483
redisClusterAsyncContext_0 *__cdecl redisClusterAsyncContextInit()
{
  redisClusterContext_0 *v0; // rax
  redisClusterContext_0 *v1; // rbx
  redisClusterAsyncContext_0 *result; // rax
  int err; // edx

  v0 = redisClusterContextInit();
  v1 = v0;
  if ( v0 )
  {
    v0->flags &= ~1u;
    result = (redisClusterAsyncContext_0 *)hiredisAllocFns.callocFn(1LL, 176LL);
    if ( result )
    {
      err = v1->err;
      result->cc = v1;
      result->err = err;
      *(_QWORD *)result->errstr = *(_QWORD *)v1->errstr;
      *(_QWORD *)&result->errstr[8] = *(_QWORD *)&v1->errstr[8];
      *(_QWORD *)&result->errstr[16] = *(_QWORD *)&v1->errstr[16];
      *(_QWORD *)&result->errstr[24] = *(_QWORD *)&v1->errstr[24];
      *(_QWORD *)&result->errstr[32] = *(_QWORD *)&v1->errstr[32];
      *(_QWORD *)&result->errstr[40] = *(_QWORD *)&v1->errstr[40];
      *(_QWORD *)&result->errstr[48] = *(_QWORD *)&v1->errstr[48];
      *(_QWORD *)&result->errstr[56] = *(_QWORD *)&v1->errstr[56];
      *(_QWORD *)&result->errstr[64] = *(_QWORD *)&v1->errstr[64];
      *(_QWORD *)&result->errstr[72] = *(_QWORD *)&v1->errstr[72];
      *(_QWORD *)&result->errstr[80] = *(_QWORD *)&v1->errstr[80];
      *(_QWORD *)&result->errstr[88] = *(_QWORD *)&v1->errstr[88];
      *(_QWORD *)&result->errstr[96] = *(_QWORD *)&v1->errstr[96];
      *(_QWORD *)&result->errstr[104] = *(_QWORD *)&v1->errstr[104];
      *(_QWORD *)&result->errstr[112] = *(_QWORD *)&v1->errstr[112];
      *(_QWORD *)&result->errstr[120] = *(_QWORD *)&v1->errstr[120];
      return result;
    }
    redisClusterFree(v1);
  }
  return 0LL;
};

// Line 3865: range 000000000CABF490-000000000CABF55B
redisClusterAsyncContext_0 *__fastcall redisClusterAsyncConnect(const char *addrs, int flags)
{
  redisClusterContext_0 *v2; // rbx
  redisClusterAsyncContext_0 *result; // rax
  int err; // edx

  v2 = redisClusterConnectNonBlock(addrs, flags);
  if ( v2 )
  {
    result = (redisClusterAsyncContext_0 *)hiredisAllocFns.callocFn(1LL, 176LL);
    if ( result )
    {
      err = v2->err;
      result->cc = v2;
      result->err = err;
      *(_QWORD *)result->errstr = *(_QWORD *)v2->errstr;
      *(_QWORD *)&result->errstr[8] = *(_QWORD *)&v2->errstr[8];
      *(_QWORD *)&result->errstr[16] = *(_QWORD *)&v2->errstr[16];
      *(_QWORD *)&result->errstr[24] = *(_QWORD *)&v2->errstr[24];
      *(_QWORD *)&result->errstr[32] = *(_QWORD *)&v2->errstr[32];
      *(_QWORD *)&result->errstr[40] = *(_QWORD *)&v2->errstr[40];
      *(_QWORD *)&result->errstr[48] = *(_QWORD *)&v2->errstr[48];
      *(_QWORD *)&result->errstr[56] = *(_QWORD *)&v2->errstr[56];
      *(_QWORD *)&result->errstr[64] = *(_QWORD *)&v2->errstr[64];
      *(_QWORD *)&result->errstr[72] = *(_QWORD *)&v2->errstr[72];
      *(_QWORD *)&result->errstr[80] = *(_QWORD *)&v2->errstr[80];
      *(_QWORD *)&result->errstr[88] = *(_QWORD *)&v2->errstr[88];
      *(_QWORD *)&result->errstr[96] = *(_QWORD *)&v2->errstr[96];
      *(_QWORD *)&result->errstr[104] = *(_QWORD *)&v2->errstr[104];
      *(_QWORD *)&result->errstr[112] = *(_QWORD *)&v2->errstr[112];
      *(_QWORD *)&result->errstr[120] = *(_QWORD *)&v2->errstr[120];
      return result;
    }
    redisClusterFree(v2);
  }
  return 0LL;
};

// Line 3886: range 000000000CABF560-000000000CABF578
int __fastcall redisClusterAsyncSetConnectCallback(redisClusterAsyncContext_0 *acc, redisConnectCallback *fn)
{
  int result; // eax

  result = -1;
  if ( !acc->onConnect )
  {
    acc->onConnect = fn;
    return 0;
  }
  return result;
};

// Line 3895: range 000000000CABF580-000000000CABF598
int __fastcall redisClusterAsyncSetDisconnectCallback(redisClusterAsyncContext_0 *acc, redisDisconnectCallback *fn)
{
  int result; // eax

  result = -1;
  if ( !acc->onDisconnect )
  {
    acc->onDisconnect = fn;
    return 0;
  }
  return result;
};

// Line 3903: range 000000000CAB8210-000000000CAB82F1
void __fastcall redisClusterAsyncCallback(redisAsyncContext_0 *ac, void *r, void *privdata)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  char *errstr; // r13
  int err; // eax
  size_t v8; // r14
  size_t v9; // rax
  int *v10; // rax

  if ( privdata )
  {
    v4 = *(_QWORD *)privdata;
    if ( *(_QWORD *)privdata )
    {
      if ( !r )
      {
        errstr = ac->errstr;
        err = ac->err;
        *(_DWORD *)(v4 + 8) = err;
        if ( errstr )
        {
          v8 = 127LL;
          v9 = strlen(errstr);
          if ( v9 <= 0x7F )
            v8 = v9;
          memcpy((void *)(v4 + 12), errstr, v8);
          *(_BYTE *)(v4 + v8 + 12) = 0;
        }
        else
        {
          if ( err != 1 )
            _redisClusterAsyncSetError_0((redisClusterAsyncContext_0 *)ac, 0, (const char *)privdata);
          v10 = __errno_location();
          strerror_r(*v10, (char *)(v4 + 12), 0x80uLL);
        }
      }
      v5 = *((_QWORD *)privdata + 4);
      if ( *(_DWORD *)(v4 + 8) )
      {
        r = 0LL;
        (*((void (__fastcall **)(__int64, _QWORD, __int64))privdata + 2))(v4, 0LL, v5);
      }
      else
      {
        (*((void (__fastcall **)(__int64, void *, __int64))privdata + 2))(v4, r, v5);
      }
    }
    command_destroy(*((cmd **)privdata + 1));
    ((void (__fastcall *)(void *, void *))hiredisAllocFns.freeFn)(privdata, r);
  }
};

// Line 3931: range 000000000CABEB70-000000000CABF3A6
void __fastcall redisClusterAsyncRetryCallback(redisAsyncContext_0 *ac, void *r, void *privdata)
{
  redisClusterAsyncContext_0 *v4; // rbp
  redisClusterContext_0 *cc; // r12
  __int64 v6; // r13
  redisAsyncContext_0 *v7; // r14
  void *v8; // r15
  __int64 v9; // rdx
  char *v10; // rbp
  size_t v11; // rax
  int v12; // eax
  int v13; // edx
  bool v14; // cc
  cmd *v15; // rdi
  char *v16; // r12
  size_t v17; // rax
  __int64 v18; // r14
  cluster_node_0 **table; // rax
  cluster_node_0 *v20; // rax
  redisAsyncContext_0 *v21; // rax
  int v22; // eax
  const char *v23; // r13
  size_t v24; // r14
  size_t v25; // rax
  char *errstr; // r13
  int err; // eax
  cluster_node_0 *data; // rcx
  size_t v29; // r14
  size_t v30; // rax
  cluster_node_0 *v31; // rcx
  int v32; // eax
  cluster_node_0 *which_connected; // rax
  redisContext_0 *v34; // rax
  _QWORD *v35; // rax
  __int64 *v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rdx
  uint8_t *v39; // rcx
  __int64 v40; // r13
  uint8_t *v41; // r14
  int v42; // r14d
  int64_t v43; // rax
  int *v44; // rax
  cluster_node_0 *v45; // rsi
  redisAsyncContext_0 *v46; // rax
  int v47; // esi
  size_t v48; // r13
  size_t v49; // rax
  int *v50; // rax
  const char *v51; // r13
  char *v52; // rsi
  unsigned int v53; // edx
  char *v54; // rdi
  __int64 i; // rcx
  char *v56; // rsi
  unsigned int v57; // eax
  char *v58; // rdi
  __int64 v59; // rdx
  __int64 k; // rcx
  const char *v61; // rsi
  unsigned int v62; // edx
  char *v63; // rdi
  __int64 j; // rcx
  cluster_node_0 *node; // [rsp+8h] [rbp-40h]
  uint8_t *nodea; // [rsp+8h] [rbp-40h]
  cluster_node_0 *nodeb; // [rsp+8h] [rbp-40h]

  if ( !privdata )
    return;
  v4 = *(redisClusterAsyncContext_0 **)privdata;
  if ( !*(_QWORD *)privdata )
    goto LABEL_18;
  cc = v4->cc;
  if ( !v4->cc )
    goto LABEL_18;
  v6 = *((_QWORD *)privdata + 1);
  if ( !v6 )
  {
    v15 = 0LL;
    goto LABEL_19;
  }
  v7 = ac;
  v8 = r;
  if ( !r )
  {
    errstr = ac->errstr;
    err = ac->err;
    data = (cluster_node_0 *)ac->data;
    v4->err = err;
    if ( errstr )
    {
      node = data;
      v29 = 127LL;
      v30 = strlen(errstr);
      if ( v30 <= 0x7F )
        v29 = v30;
      memcpy(v4->errstr, errstr, v29);
      v31 = node;
      v4->errstr[v29] = 0;
    }
    else
    {
      if ( err != 1 )
        goto LABEL_121;
      nodeb = data;
      v44 = __errno_location();
      strerror_r(*v44, v4->errstr, 0x80uLL);
      v31 = nodeb;
    }
    if ( cc->update_route_time )
    {
      if ( hi_usec_now() >= cc->update_route_time )
      {
        if ( cluster_update_route(cc) )
          _redisClusterAsyncSetError(v4, 2, "route update error, please recreate redisClusterContext!");
        cc->update_route_time = 0LL;
      }
      goto done;
    }
    v32 = v31->failure_count + 1;
    v14 = v32 <= cc->max_retry_count;
    v31->failure_count = v32;
    if ( v14 )
      goto done;
    v31->failure_count = 0;
    which_connected = node_get_which_connected(cc);
    if ( which_connected )
    {
      v34 = ctx_get_by_node(cc, which_connected);
      if ( v34 )
      {
        v35 = redisCommand(v34, "config get %s", "cluster-node-timeout");
        if ( v35 )
        {
          if ( *(_DWORD *)v35 == 2 )
          {
            if ( v35[6] == 2LL )
            {
              v36 = (__int64 *)v35[7];
              v37 = *v36;
              if ( *v36 && *(_DWORD *)v37 == 1 )
              {
                if ( !strcmp(*(const char **)(v37 + 32), "cluster-node-timeout") )
                {
                  v38 = v36[1];
                  if ( v38 && *(_DWORD *)v38 == 1 )
                  {
                    v39 = *(uint8_t **)(v38 + 32);
                    *(_QWORD *)(v38 + 32) = 0LL;
                    v40 = *(_QWORD *)(v38 + 24);
                    v41 = v39;
                    nodea = v39;
                    freeReplyObject(v35);
                    if ( v41 )
                    {
                      v42 = hi_atoi(nodea, (int)v40);
                      hiredisAllocFns.freeFn(nodea);
                      if ( v42 <= 0 )
                      {
                        _redisClusterAsyncSetError(v4, 2, "cluster_timeout_str convert to integer error");
                      }
                      else
                      {
                        v43 = hi_usec_now();
                        if ( v43 < 0 )
                          _redisClusterAsyncSetError(v4, 2, "get now usec time error");
                        else
                          cc->update_route_time = 1000LL * v42 + v43;
                      }
                      goto done;
                    }
                    v51 = cc->errstr;
LABEL_89:
                    _redisClusterAsyncSetError(v4, cc->err, v51);
                    goto done;
                  }
                  v51 = cc->errstr;
                  cc->err = 2;
                  v52 = "reply for config get config value type is not string";
                  v53 = 52;
                  v54 = cc->errstr;
                  if ( (((_BYTE)cc + 4) & 1) != 0 )
                  {
                    *v54 = aReplyForConfig[0];
                    v52 = "eply for config get config value type is not string";
                    v54 = &cc->errstr[1];
                    LOBYTE(v53) = 51;
                  }
                  if ( ((unsigned __int8)v54 & 2) != 0 )
                  {
                    *(_WORD *)v54 = *(_WORD *)v52;
                    v52 += 2;
                    v54 += 2;
                    v53 -= 2;
                  }
                  for ( i = v53 >> 2; i; --i )
                  {
                    *(_DWORD *)v54 = *(_DWORD *)v52;
                    v52 += 4;
                    v54 += 4;
                  }
                  if ( (v53 & 2) != 0 )
                  {
                    *(_WORD *)v54 = *(_WORD *)v52;
                    i = 2LL;
                  }
                  if ( (v53 & 1) != 0 )
                    v54[i] = v52[i];
                  cc->errstr[52] = 0;
                }
                else
                {
                  v51 = cc->errstr;
                  cc->err = 2;
                  strcpy(cc->errstr, "reply for config get config name is not we want");
                }
              }
              else
              {
                v51 = cc->errstr;
                cc->err = 2;
                strcpy(cc->errstr, "reply for config get config name is not string");
              }
            }
            else
            {
              v51 = cc->errstr;
              cc->err = 2;
              strcpy(cc->errstr, "reply for config get elements number is not 2");
            }
          }
          else
          {
            v51 = cc->errstr;
            cc->err = 2;
            strcpy(cc->errstr, "reply for config get type is not array");
          }
        }
        else
        {
          v51 = cc->errstr;
          cc->err = 2;
          v61 = "reply for config get is null";
          v62 = 28;
          v63 = cc->errstr;
          if ( (((_BYTE)cc + 4) & 1) != 0 )
          {
            *v63 = aReplyForConfig_4[0];
            v61 = "eply for config get is null";
            v63 = &cc->errstr[1];
            LOBYTE(v62) = 27;
          }
          if ( ((unsigned __int8)v63 & 2) != 0 )
          {
            v62 -= 2;
            *(_WORD *)v63 = *(_WORD *)v61;
            v61 += 2;
            v63 += 2;
          }
          for ( j = v62 >> 2; j; --j )
          {
            *(_DWORD *)v63 = *(_DWORD *)v61;
            v61 += 4;
            v63 += 4;
          }
          if ( (v62 & 2) != 0 )
          {
            *(_WORD *)v63 = *(_WORD *)v61;
            j = 2LL;
          }
          if ( (v62 & 1) != 0 )
            v63[j] = v61[j];
          cc->errstr[28] = 0;
        }
      }
      else
      {
        v35 = 0LL;
        v51 = cc->errstr;
      }
    }
    else
    {
      v51 = cc->errstr;
      cc->err = 2;
      v56 = "no reachable node in cluster";
      v57 = 28;
      v58 = cc->errstr;
      if ( (((_BYTE)cc + 4) & 1) != 0 )
      {
        *v58 = aNoReachableNod[0];
        v56 = "o reachable node in cluster";
        v58 = &cc->errstr[1];
        LOBYTE(v57) = 27;
      }
      if ( ((unsigned __int8)v58 & 2) != 0 )
      {
        *(_WORD *)v58 = *(_WORD *)v56;
        v56 += 2;
        v58 += 2;
        v57 -= 2;
      }
      v59 = 0LL;
      for ( k = v57 >> 2; k; --k )
      {
        *(_DWORD *)v58 = *(_DWORD *)v56;
        v56 += 4;
        v58 += 4;
      }
      if ( (v57 & 2) != 0 )
      {
        *(_WORD *)v58 = *(_WORD *)v56;
        v59 = 2LL;
      }
      if ( (v57 & 1) != 0 )
        v58[v59] = v56[v59];
      cc->errstr[28] = 0;
      v35 = 0LL;
    }
    freeReplyObject(v35);
    goto LABEL_89;
  }
  if ( *(_DWORD *)r != 6 )
    goto done;
  v12 = cluster_reply_error_type((redisReply_0 *)r);
  if ( (unsigned int)(v12 - 1) > 4 )
    goto done;
  v13 = *((_DWORD *)privdata + 6) + 1;
  v14 = v13 <= cc->max_retry_count;
  *((_DWORD *)privdata + 6) = v13;
  if ( !v14 )
  {
    *((_DWORD *)privdata + 6) = 0;
    strcpy(v4->errstr, "too many cluster retries");
    v4->err = 100;
    goto done;
  }
  if ( v12 != 2 )
  {
    if ( v12 >= 2 && v12 <= 5 )
      goto retry;
    v18 = *(unsigned int *)(v6 + 80);
    if ( (int)v18 >= 0 )
    {
      if ( cluster_update_route(cc) )
      {
        _redisClusterAsyncSetError(v4, 2, "route update error, please recreate redisClusterContext!");
      }
      else
      {
        table = cc->table;
        if ( table && (unsigned int)v18 <= 0x3FFF && (v45 = table[v18]) != 0LL )
        {
          v46 = actx_get_by_node(v4, v45);
          v7 = v46;
          if ( v46 )
          {
            v47 = v46->err;
            if ( !v47 )
              goto retry;
            _redisClusterAsyncSetError(v4, v47, v46->errstr);
          }
        }
        else
        {
          _redisClusterAsyncSetError(v4, 2, "node get by table error");
        }
      }
    }
done:
    v9 = *((_QWORD *)privdata + 4);
    if ( v4->err )
    {
      (*((void (__fastcall **)(redisClusterAsyncContext_0 *, _QWORD, __int64))privdata + 2))(v4, 0LL, v9);
      if ( !cc->err )
      {
LABEL_9:
        if ( v4->err )
        {
          v4->err = 0;
          v10 = v4->errstr;
          v11 = strlen(v10);
          memset(v10, 0, v11);
        }
        command_destroy(*((cmd **)privdata + 1));
        hiredisAllocFns.freeFn(privdata);
        return;
      }
    }
    else
    {
      (*((void (__fastcall **)(redisClusterAsyncContext_0 *, void *, __int64))privdata + 2))(v4, v8, v9);
      if ( !cc->err )
        goto LABEL_9;
    }
    cc->err = 0;
    v16 = cc->errstr;
    v17 = strlen(v16);
    memset(v16, 0, v17);
    goto LABEL_9;
  }
  v20 = node_get_by_ask_error_reply(cc, (redisReply_0 *)r);
  if ( !v20 )
  {
    v48 = 127LL;
    v4->err = cc->err;
    v49 = strlen(cc->errstr);
    if ( v49 <= 0x7F )
      v48 = v49;
    memcpy(v4->errstr, cc->errstr, v48);
    v4->errstr[v48] = 0;
    goto done;
  }
  LODWORD(r) = (_DWORD)v20;
  ac = (redisAsyncContext_0 *)v4;
  v21 = actx_get_by_node(v4, v20);
  v7 = v21;
  if ( !v21 )
    goto done;
  v22 = v21->err;
  if ( v22 )
  {
    v23 = v7->errstr;
    v4->err = v22;
    if ( v23 )
    {
      v24 = 127LL;
      v25 = strlen(v23);
      if ( v25 <= 0x7F )
        v24 = v25;
      memcpy(v4->errstr, v23, v24);
      v4->errstr[v24] = 0;
      goto done;
    }
    if ( v22 == 1 )
    {
      v50 = __errno_location();
      strerror_r(*v50, v4->errstr, 0x80uLL);
      goto done;
    }
LABEL_121:
    _redisClusterAsyncSetError_0((redisClusterAsyncContext_0 *)ac, (int)r, (const char *)privdata);
  }
  if ( redisAsyncCommand(v7, 0LL, 0LL, "ASKING") )
    goto LABEL_18;
retry:
  if ( redisAsyncFormattedCommand(
         v7,
         redisClusterAsyncRetryCallback,
         privdata,
         *(const char **)(v6 + 32),
         *(unsigned int *)(v6 + 40)) )
  {
LABEL_18:
    v15 = (cmd *)*((_QWORD *)privdata + 1);
LABEL_19:
    command_destroy(v15);
    hiredisAllocFns.freeFn(privdata);
  }
};

// Line 4134: range 000000000CABF5A0-000000000CABF98D
int __fastcall redisClusterAsyncFormattedCommand(
        redisClusterAsyncContext_0 *acc,
        redisClusterCallbackFn *fn,
        void *privdata,
        char *cmd,
        int len)
{
  redisClusterContext_0 *cc; // rbp
  cmd *v8; // rbx
  size_t v9; // r13
  char *v10; // rax
  hilist_0 *v11; // r12
  int v12; // eax
  cluster_node_0 **table; // rdx
  cluster_node_0 *v14; // rsi
  redisAsyncContext_0 *v15; // rax
  const char *v16; // rdx
  int err; // ebp
  const char *errstr; // r13
  size_t v19; // rbp
  size_t v20; // rax
  size_t v22; // rax
  size_t v23; // rax
  redisClusterAsyncContext_0 **v24; // rax
  int *v25; // rax
  redisAsyncContext_0 *ac; // [rsp+18h] [rbp-40h]

  if ( acc )
  {
    cc = acc->cc;
    if ( acc->cc->err )
    {
      cc->err = 0;
      v23 = strlen(cc->errstr);
      memset(cc->errstr, 0, v23);
    }
    if ( acc->err )
    {
      acc->err = 0;
      v22 = strlen(acc->errstr);
      memset(acc->errstr, 0, v22);
    }
    v8 = command_get();
    if ( v8 )
    {
      v9 = len;
      v10 = (char *)hiredisAllocFns.callocFn(len, 1LL);
      v8->cmd = v10;
      if ( v10 )
      {
        memcpy(v10, cmd, len);
        v8->clen = len;
        v11 = listCreate();
        if ( v11 )
        {
          v11->free = listCommandFree;
          v12 = command_format_by_slot(cc, v8, v11);
          if ( v12 >= 0 )
          {
            if ( v12 > 0x3FFF )
            {
              acc->err = 2;
              strcpy(acc->errstr, "slot_num is out of range");
            }
            else if ( v11->len )
            {
              acc->err = 2;
              strcpy(acc->errstr, "Asynchronous API now not support multi-key command");
            }
            else
            {
              table = cc->table;
              if ( table && (v14 = table[v12]) != 0LL )
              {
                v15 = actx_get_by_node(acc, v14);
                if ( v15 )
                {
                  err = v15->err;
                  if ( !err )
                  {
                    ac = v15;
                    v24 = (redisClusterAsyncContext_0 **)hiredisAllocFns.callocFn(1LL, 40LL);
                    if ( v24 )
                    {
                      *v24 = acc;
                      v24[1] = (redisClusterAsyncContext_0 *)v8;
                      v24[2] = (redisClusterAsyncContext_0 *)fn;
                      v24[4] = (redisClusterAsyncContext_0 *)privdata;
                      if ( !redisAsyncFormattedCommand(ac, redisClusterAsyncRetryCallback, v24, cmd, v9) )
                      {
                        listRelease(v11);
                        return err;
                      }
                    }
                    else
                    {
                      acc->err = 5;
                      strcpy(acc->errstr, "Out of memory");
                    }
                    goto LABEL_24;
                  }
                  errstr = v15->errstr;
                  acc->err = err;
                  if ( !errstr )
                  {
                    if ( err != 1 )
                      _redisClusterAsyncSetError_0(acc, (int)v14, v16);
                    v25 = __errno_location();
                    strerror_r(*v25, acc->errstr, 0x80uLL);
                    goto LABEL_24;
                  }
                  goto LABEL_17;
                }
              }
              else
              {
                acc->err = 2;
                strcpy(acc->errstr, "node get by table error");
              }
            }
LABEL_24:
            err = -1;
            command_destroy(v8);
            listRelease(v11);
            return err;
          }
          errstr = cc->errstr;
          acc->err = cc->err;
LABEL_17:
          v19 = 127LL;
          v20 = strlen(errstr);
          if ( v20 <= 0x7F )
            v19 = v20;
          memcpy(acc->errstr, errstr, v19);
          acc->errstr[v19] = 0;
          goto LABEL_24;
        }
      }
    }
    acc->err = 5;
    strcpy(acc->errstr, "Out of memory");
    command_destroy(v8);
  }
  return -1;
};

// Line 4255: range 000000000CABF9A0-000000000CABFB54
int __fastcall redisClusterAsyncFormattedCommandToNode(
        redisClusterAsyncContext_0 *acc,
        cluster_node_0 *node,
        redisClusterCallbackFn *fn,
        void *privdata,
        char *cmd,
        int len)
{
  redisAsyncContext_0 *v8; // rax
  const char *v9; // rdx
  redisAsyncContext_0 *v10; // rbp
  int err; // r13d
  cmd *v12; // rbx
  char *v13; // rax
  redisClusterAsyncContext_0 **v14; // rax
  const char *errstr; // rbx
  size_t v17; // rbp
  size_t v18; // rax
  char *v19; // rdi
  int *v20; // rax

  v8 = actx_get_by_node(acc, node);
  v10 = v8;
  if ( !v8 )
    return -1;
  err = v8->err;
  if ( !err )
  {
    v12 = command_get();
    if ( v12
      && (v13 = (char *)hiredisAllocFns.callocFn(len, 1LL), (v12->cmd = v13) != 0LL)
      && (memcpy(v13, cmd, len),
          v12->clen = len,
          (v14 = (redisClusterAsyncContext_0 **)hiredisAllocFns.callocFn(1LL, 40LL)) != 0LL) )
    {
      *v14 = acc;
      v14[1] = (redisClusterAsyncContext_0 *)v12;
      v14[2] = (redisClusterAsyncContext_0 *)fn;
      v14[4] = (redisClusterAsyncContext_0 *)privdata;
      if ( !redisAsyncFormattedCommand(v10, redisClusterAsyncCallback, v14, cmd, len) )
        return err;
    }
    else
    {
      acc->err = 2;
      strcpy(acc->errstr, "Out of memory");
    }
    err = -1;
    command_destroy(v12);
    return err;
  }
  errstr = v8->errstr;
  acc->err = err;
  if ( errstr )
  {
    v17 = 127LL;
    err = -1;
    v18 = strlen(errstr);
    v19 = acc->errstr;
    if ( v18 <= 0x7F )
      v17 = v18;
    memcpy(v19, errstr, v17);
    acc->errstr[v17] = 0;
  }
  else
  {
    if ( err != 1 )
      _redisClusterAsyncSetError_0(acc, (int)node, v9);
    v20 = __errno_location();
    err = -1;
    strerror_r(*v20, acc->errstr, 0x80uLL);
  }
  return err;
};

// Line 4309: range 000000000CABFB60-000000000CABFC30
int __fastcall redisClustervAsyncCommand(
        redisClusterAsyncContext_0 *acc,
        redisClusterCallbackFn *fn,
        void *privdata,
        const char *format,
        __va_list_tag *ap)
{
  int v6; // eax
  int v7; // ebx
  char *cmd; // [rsp+0h] [rbp-28h] BYREF

  if ( !acc )
    return -1;
  v6 = redisvFormatCommand(&cmd, format, ap);
  if ( v6 == -1 )
  {
    acc->err = 5;
    strcpy(acc->errstr, "Out of memory");
    return -1;
  }
  else if ( v6 == -2 )
  {
    acc->err = 2;
    strcpy(acc->errstr, "Invalid format string");
    return -1;
  }
  else
  {
    v7 = redisClusterAsyncFormattedCommand(acc, fn, privdata, cmd, v6);
    hiredisAllocFns.freeFn(cmd);
    return v7;
  }
};

// Line 4337: range 000000000CABFC40-000000000CABFCC4
int redisClusterAsyncCommand(
        redisClusterAsyncContext_0 *acc,
        redisClusterCallbackFn *fn,
        void *privdata,
        const char *format,
        ...)
{
  va_list ap; // [rsp+8h] [rbp-D0h] BYREF

  va_start(ap, format);
  return redisClustervAsyncCommand(acc, fn, privdata, format, (__va_list_tag *)ap);
};

// Line 4351: range 000000000CABFCD0-000000000CABFE10
int redisClusterAsyncCommandToNode(
        redisClusterAsyncContext_0 *acc,
        cluster_node_0 *node,
        redisClusterCallbackFn *fn,
        void *privdata,
        const char *format,
        ...)
{
  int v7; // eax
  int v8; // ebx
  char *cmd; // [rsp+0h] [rbp-F8h] BYREF
  va_list ap; // [rsp+8h] [rbp-F0h] BYREF

  va_start(ap, format);
  cmd = 0LL;
  v7 = redisvFormatCommand(&cmd, format, (__va_list_tag *)ap);
  if ( v7 == -1 )
  {
    acc->err = 2;
    strcpy(acc->errstr, "Out of memory");
    return -1;
  }
  else if ( v7 == -2 )
  {
    acc->err = 2;
    strcpy(acc->errstr, "Invalid format string");
    return -1;
  }
  else
  {
    v8 = redisClusterAsyncFormattedCommandToNode(acc, node, fn, privdata, cmd, v7);
    hiredisAllocFns.freeFn(cmd);
    return v8;
  }
};

// Line 4380: range 000000000CABFE20-000000000CABFEA7
int __fastcall redisClusterAsyncCommandArgv(
        redisClusterAsyncContext_0 *acc,
        redisClusterCallbackFn *fn,
        void *privdata,
        int argc,
        const char **argv,
        const size_t *argvlen)
{
  int v7; // r8d
  int v8; // ebx
  char *cmd; // [rsp+0h] [rbp-28h] BYREF

  v7 = redisFormatCommandArgv(&cmd, argc, argv, argvlen);
  if ( v7 == -1 )
  {
    acc->err = 5;
    strcpy(acc->errstr, "Out of memory");
    return -1;
  }
  else
  {
    v8 = redisClusterAsyncFormattedCommand(acc, fn, privdata, cmd, v7);
    hiredisAllocFns.freeFn(cmd);
    return v8;
  }
};

// Line 4404: range 000000000CABFEB0-000000000CABFF1C
void __fastcall redisClusterAsyncDisconnect(redisClusterAsyncContext_0 *acc)
{
  dict *nodes; // rsi
  dictEntry_0 *v2; // rax
  void *val; // rbx
  redisAsyncContext_0 *v4; // rdi
  dictIterator_0 di_0; // [rsp+0h] [rbp-38h] BYREF

  if ( acc )
  {
    nodes = acc->cc->nodes;
    if ( nodes )
    {
      dictInitIterator(&di_0, nodes);
      while ( 1 )
      {
        v2 = dictNext(&di_0);
        if ( !v2 )
          break;
        while ( 1 )
        {
          val = v2->val;
          v4 = (redisAsyncContext_0 *)*((_QWORD *)val + 5);
          if ( !v4 || v4->err )
            break;
          redisAsyncDisconnect(v4);
          *((_QWORD *)val + 5) = 0LL;
          v2 = dictNext(&di_0);
          if ( !v2 )
            return;
        }
      }
    }
  }
};

// Line 4435: range 000000000CABFF20-000000000CABFF49
void __fastcall redisClusterAsyncFree(redisClusterAsyncContext_0 *acc)
{
  if ( acc )
  {
    redisClusterFree(acc->cc);
    hiredisAllocFns.freeFn(acc);
  }
};

// Line 4447: range 000000000CABFF50-000000000CABFF7A
void __fastcall initNodeIterator(nodeIterator_0 *iter, redisClusterContext_0 *cc)
{
  uint64_t route_version; // rax
  dict *nodes; // rsi
  dictIterator_0 *p_di; // rdi

  route_version = cc->route_version;
  iter->cc = cc;
  nodes = cc->nodes;
  p_di = &iter->di;
  p_di[-1].entry = (dictEntry_0 *)route_version;
  dictInitIterator(p_di, nodes);
  iter->retries_left = 1;
};

// Line 4457: range 000000000CABFF80-000000000CABFFE2
cluster_node_0 *__fastcall nodeNext(nodeIterator_0 *iter)
{
  uint64_t route_version; // rax
  dictEntry_0 *v2; // rax

  if ( iter->retries_left <= 0 )
    return 0LL;
  if ( iter->route_version != iter->cc->route_version )
  {
    dictInitIterator(&iter->di, iter->cc->nodes);
    route_version = iter->cc->route_version;
    --iter->retries_left;
    iter->route_version = route_version;
  }
  v2 = dictNext(&iter->di);
  if ( v2 )
    return (cluster_node_0 *)v2->val;
  else
    return 0LL;
};

// Line 4478: range 000000000CABFFF0-000000000CAC00A8
unsigned int __fastcall redisClusterGetSlotByKey(char *key)
{
  int v1; // eax
  char *v2; // rcx
  int v3; // edx
  int v4; // esi
  char *v5; // r8
  int v6; // ecx

  v1 = strlen(key);
  if ( v1 <= 0 )
  {
    v3 = 0;
  }
  else
  {
    if ( *key == 123 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v2 = key + 1;
    v3 = 0;
    do
    {
      if ( v1 <= ++v3 )
        break;
      ++v2;
    }
    while ( *(v2 - 1) != 123 );
  }
  if ( v1 == v3 )
    return crc16(key, v1) & 0x3FFF;
LABEL_7:
  v4 = v3 + 1;
  if ( v1 <= v3 + 1 )
  {
    v6 = v3 + 1;
    goto LABEL_12;
  }
  if ( key[v4] != 125 )
  {
    v5 = &key[v4 + 1];
    v6 = v3 + 1;
    while ( v1 > ++v6 )
    {
      if ( *v5++ == 125 )
        goto LABEL_13;
    }
LABEL_12:
    if ( v1 == v6 )
      return crc16(key, v1) & 0x3FFF;
    goto LABEL_13;
  }
  v6 = v3 + 1;
LABEL_13:
  if ( v4 != v6 )
    return crc16(&key[v3 + 1], v6 - v3 - 1) & 0x3FFF;
  return crc16(key, v1) & 0x3FFF;
};

// Line 4483: range 000000000CAC00B0-000000000CAC0199
cluster_node_0 *__fastcall redisClusterGetNodeByKey(redisClusterContext_0 *cc, char *key)
{
  int v3; // eax
  char *v4; // rcx
  int v5; // edx
  int v6; // esi
  char *v7; // r8
  int v8; // ecx
  __int64 v9; // rax
  cluster_node_0 **table; // rdx

  v3 = strlen(key);
  if ( v3 <= 0 )
  {
    v5 = 0;
  }
  else
  {
    if ( *key == 123 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v4 = key + 1;
    v5 = 0;
    do
    {
      if ( v3 <= ++v5 )
        break;
      ++v4;
    }
    while ( *(v4 - 1) != 123 );
  }
  if ( v3 == v5 )
    goto LABEL_18;
LABEL_7:
  v6 = v5 + 1;
  if ( v3 <= v5 + 1 )
  {
    v8 = v5 + 1;
    goto LABEL_12;
  }
  if ( key[v6] != 125 )
  {
    v7 = &key[v6 + 1];
    v8 = v5 + 1;
    while ( v3 > ++v8 )
    {
      if ( *v7++ == 125 )
        goto LABEL_13;
    }
LABEL_12:
    if ( v3 != v8 )
      goto LABEL_13;
LABEL_18:
    v9 = crc16(key, v3) & 0x3FFF;
    goto LABEL_15;
  }
  v8 = v5 + 1;
LABEL_13:
  if ( v6 == v8 )
    goto LABEL_18;
  v9 = crc16(&key[v5 + 1], v8 - v5 - 1) & 0x3FFF;
LABEL_15:
  if ( cc && (table = cc->table) != 0LL )
    return table[v9];
  else
    return 0LL;
};
