// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/adlist.c

// Line 41: range 000000000CAC08A0-000000000CAC08EA
hilist_0 *__cdecl listCreate()
{
  hilist_0 *result; // rax

  result = (hilist_0 *)hiredisAllocFns.mallocFn(0x30uLL);
  if ( result )
  {
    result->tail = 0LL;
    result->head = 0LL;
    result->len = 0LL;
    result->dup = 0LL;
    result->free = 0LL;
    result->match = 0LL;
  }
  return result;
};

// Line 57: range 000000000CAC08F0-000000000CAC0942
void __fastcall listRelease(hilist_0 *list)
{
  unsigned __int64 len; // rbp
  listNode_0 *head; // rbx
  void (*free)(void *); // rax
  listNode *next; // r12

  len = list->len;
  head = list->head;
  if ( len )
  {
    while ( 1 )
    {
      free = list->free;
      next = head->next;
      if ( free )
        free(head->value);
      hiredisAllocFns.freeFn(head);
      if ( !--len )
        break;
      head = next;
    }
  }
  hiredisAllocFns.freeFn(list);
};

// Line 79: range 000000000CAC0950-000000000CAC09C2
hilist_0 *__fastcall listAddNodeHead(hilist_0 *list, void *value)
{
  listNode_0 *v2; // rax
  unsigned __int64 len; // rdx
  listNode_0 *head; // rcx
  hilist_0 *result; // rax

  v2 = (listNode_0 *)hiredisAllocFns.mallocFn(0x18uLL);
  if ( !v2 )
    return 0LL;
  len = list->len;
  v2->value = value;
  if ( len )
  {
    head = list->head;
    v2->prev = 0LL;
    v2->next = head;
    head->prev = v2;
    list->head = v2;
  }
  else
  {
    list->tail = v2;
    list->head = v2;
    v2->next = 0LL;
    v2->prev = 0LL;
  }
  result = list;
  list->len = len + 1;
  return result;
};

// Line 104: range 000000000CAC09D0-000000000CAC0A42
hilist_0 *__fastcall listAddNodeTail(hilist_0 *list, void *value)
{
  listNode_0 *v2; // rax
  unsigned __int64 len; // rdx
  listNode_0 *tail; // rcx
  hilist_0 *result; // rax

  v2 = (listNode_0 *)hiredisAllocFns.mallocFn(0x18uLL);
  if ( !v2 )
    return 0LL;
  len = list->len;
  v2->value = value;
  if ( len )
  {
    tail = list->tail;
    v2->next = 0LL;
    v2->prev = tail;
    tail->next = v2;
    list->tail = v2;
  }
  else
  {
    list->tail = v2;
    list->head = v2;
    v2->next = 0LL;
    v2->prev = 0LL;
  }
  result = list;
  list->len = len + 1;
  return result;
};

// Line 124: range 000000000CAC0A50-000000000CAC0AF0
hilist_0 *__fastcall listInsertNode(hilist_0 *list, listNode_0 *old_node, void *value, int after)
{
  listNode_0 *v6; // rbp
  listNode_0 *v7; // rax
  bool v8; // zf
  listNode_0 *prev; // rdx
  listNode *next; // rdx

  v6 = old_node;
  v7 = (listNode_0 *)hiredisAllocFns.mallocFn(0x18uLL);
  if ( !v7 )
    return 0LL;
  v7->value = value;
  if ( after )
  {
    v8 = list->tail == old_node;
    next = old_node->next;
    v7->prev = old_node;
    v7->next = next;
    if ( v8 )
      list->tail = v7;
    prev = old_node;
  }
  else
  {
    v8 = list->head == old_node;
    prev = old_node->prev;
    v7->next = old_node;
    v7->prev = prev;
    if ( v8 )
      list->head = v7;
    if ( !prev )
      goto LABEL_7;
  }
  prev->next = v7;
  v6 = v7->next;
LABEL_7:
  if ( v6 )
    v6->prev = v7;
  ++list->len;
  return list;
};

// Line 157: range 000000000CAC0B00-000000000CAC0B64
void __fastcall listDelNode(hilist_0 *list, listNode_0 *node)
{
  listNode *prev; // rax
  listNode *next; // rdx
  void (*free)(void *); // rax

  prev = node->prev;
  next = node->next;
  if ( node->prev )
  {
    prev->next = next;
    next = node->next;
    if ( next )
    {
LABEL_3:
      next->prev = prev;
      goto LABEL_4;
    }
  }
  else
  {
    list->head = next;
    if ( next )
      goto LABEL_3;
  }
  list->tail = prev;
LABEL_4:
  free = list->free;
  if ( free )
    free(node->value);
  hiredisAllocFns.freeFn(node);
  --list->len;
};

// Line 176: range 000000000CAC0B70-000000000CAC0BAA
listIter_0 *__fastcall listGetIterator(hilist_0 *list, int direction)
{
  listIter_0 *result; // rax
  listNode_0 *tail; // rdx

  result = (listIter_0 *)hiredisAllocFns.mallocFn(0x10uLL);
  if ( !result )
    return 0LL;
  tail = list->tail;
  if ( !direction )
    tail = list->head;
  result->direction = direction;
  result->next = tail;
  return result;
};

// Line 194: range 000000000CAC0BC0-000000000CAC0BCD
void __fastcall listRewind(hilist_0 *list, listIter_0 *li)
{
  listNode_0 *head; // rax

  head = list->head;
  li->direction = 0;
  li->next = head;
};

// Line 199: range 000000000CAC0BD0-000000000CAC0BDE
void __fastcall listRewindTail(hilist_0 *list, listIter_0 *li)
{
  listNode_0 *tail; // rax

  tail = list->tail;
  li->direction = 1;
  li->next = tail;
};

// Line 218: range 000000000CAC0BE0-000000000CAC0C07
listNode_0 *__fastcall listNext(listIter_0 *iter)
{
  listNode_0 *result; // rax

  result = iter->next;
  if ( iter->next )
  {
    if ( iter->direction )
      iter->next = result->prev;
    else
      iter->next = result->next;
  }
  return result;
};

// Line 237: range 000000000CAC0C10-000000000CAC0CE5
hilist_0 *__fastcall listDup(hilist_0 *orig)
{
  hilist_0 *v1; // rax
  hilist_0 *v2; // rbx
  void *v3; // rsi
  hilist_0 *v4; // rax
  listNode_0 *v5; // rax
  void *(*dup)(void *); // rcx
  hilist_0 *v8; // [rsp+8h] [rbp-30h]
  listIter_0 iter; // [rsp+10h] [rbp-28h] BYREF

  v1 = listCreate();
  v2 = v1;
  if ( !v1 )
    return 0LL;
  v1->dup = orig->dup;
  v1->free = orig->free;
  v1->match = orig->match;
  listRewind(orig, &iter);
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = listNext(&iter);
      if ( !v5 )
        return v2;
      dup = v2->dup;
      if ( dup )
        break;
      v4 = listAddNodeTail(v2, v5->value);
      if ( !v4 )
      {
LABEL_8:
        v8 = v4;
        listRelease(v2);
        return v8;
      }
    }
    v3 = dup(v5->value);
    if ( !v3 )
      break;
    v4 = listAddNodeTail(v2, v3);
    if ( !v4 )
      goto LABEL_8;
  }
  listRelease(v2);
  return 0LL;
};

// Line 276: range 000000000CAC0CF0-000000000CAC0D6A
listNode_0 *__fastcall listSearchKey(hilist_0 *list, void *key)
{
  listNode_0 *v2; // rbx
  int (*match)(void *, void *); // rax
  listIter_0 iter; // [rsp+0h] [rbp+0h] BYREF

  listRewind(list, &iter);
  while ( 2 )
  {
    v2 = listNext(&iter);
    if ( !v2 )
      return 0LL;
    while ( 1 )
    {
      match = list->match;
      if ( match )
        break;
      if ( v2->value == key )
        return v2;
      v2 = listNext(&iter);
      if ( !v2 )
        return 0LL;
    }
    if ( !match(v2->value, key) )
      continue;
    break;
  }
  return v2;
};

// Line 303: range 000000000CAC0D70-000000000CAC0DD8
listNode_0 *__fastcall listIndex(hilist_0 *list, __int64 index)
{
  listNode_0 *result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  if ( index < 0 )
  {
    v5 = ~index;
    result = list->tail;
    if ( v5 && result )
    {
      v6 = v5 - 1;
      v7 = 0LL;
      do
      {
        result = result->prev;
        if ( v7 == v6 )
          break;
        ++v7;
      }
      while ( result );
    }
  }
  else
  {
    result = list->head;
    if ( index && result )
    {
      v3 = index - 1;
      v4 = 0LL;
      do
      {
        result = result->next;
        if ( v4 == v3 )
          break;
        ++v4;
      }
      while ( result );
    }
  }
  return result;
};

// Line 320: range 000000000CAC0DE0-000000000CAC0E0E
void __fastcall listRotate(hilist_0 *list)
{
  listNode_0 *tail; // rax
  listNode_0 *prev; // rdx
  listNode_0 *head; // rdx

  tail = list->tail;
  if ( list->len > 1 )
  {
    prev = tail->prev;
    list->tail = tail->prev;
    prev->next = 0LL;
    head = list->head;
    head->prev = tail;
    tail->prev = 0LL;
    tail->next = head;
    list->head = tail;
  }
};
