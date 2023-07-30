// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/dict.c

// Line 57: range 000000000CAC2E30-000000000CAC2E65
unsigned int __fastcall dictGenHashFunction(const unsigned __int8 *buf, int len)
{
  const unsigned __int8 *v2; // rsi
  unsigned int result; // eax

  if ( !len )
    return 5381;
  v2 = &buf[len - 1 + 1];
  result = 5381;
  do
    result += 32 * result + *buf++;
  while ( buf != v2 );
  return result;
};

// Line 74: range 000000000CAC2E70-000000000CAC2EBC
dict_0 *__fastcall dictCreate(dictType_0 *type, void *privDataPtr)
{
  dict_0 *result; // rax

  result = (dict_0 *)hiredisAllocFns.mallocFn(0x30uLL);
  if ( result )
  {
    result->table = 0LL;
    result->size = 0LL;
    result->sizemask = 0LL;
    result->used = 0LL;
    result->type = type;
    result->privdata = privDataPtr;
  }
  return result;
};

// Line 92: range 000000000CAC2EC0-000000000CAC3061
int __fastcall dictExpand_0(dict_0 *ht, unsigned __int64 size)
{
  unsigned __int64 i; // r13
  dictEntry_0 **v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int64 used; // rax
  __int64 v7; // r12
  dictEntry_0 *v8; // r14
  dictEntry_0 *next; // r13
  dictEntry_0 **v10; // rax
  size_t v11; // [rsp+8h] [rbp-60h]
  void *privdata; // [rsp+10h] [rbp-58h]
  dictType_0 *type; // [rsp+18h] [rbp-50h]
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v11 = 0x7FFFFFFFFFFFFFFFLL;
  if ( size <= 0x7FFFFFFFFFFFFFFELL )
  {
    if ( size <= 4 )
    {
      v11 = 4LL;
    }
    else
    {
      for ( i = 4LL; i < size; i *= 2LL )
        ;
      v11 = i;
    }
  }
  if ( size < ht->used )
    return 1;
  privdata = ht->privdata;
  type = ht->type;
  v4 = (dictEntry_0 **)hiredisAllocFns.callocFn(v11, 8LL);
  if ( !v4 )
    return 1;
  v5 = ht->size;
  used = ht->used;
  v14 = used;
  if ( !v5 )
    goto LABEL_20;
  if ( used )
  {
    v7 = 0LL;
    while ( 1 )
    {
      v8 = ht->table[v7];
      if ( v8 )
      {
        while ( 1 )
        {
          next = v8->next;
          v10 = &v4[((_DWORD)v11 - 1) & ht->type->hashFunction(v8->key)];
          v8->next = *v10;
          *v10 = v8;
          used = ht->used - 1;
          ht->used = used;
          if ( !next )
            break;
          v8 = next;
        }
        v5 = ht->size;
      }
      if ( ++v7 >= v5 )
        break;
      if ( !used )
        goto LABEL_19;
    }
LABEL_20:
    if ( used )
      __assert_fail("ht->used == 0", "dict.c", 0x85u, "dictExpand");
  }
LABEL_19:
  hiredisAllocFns.freeFn(ht->table);
  ht->table = v4;
  ht->type = type;
  ht->size = v11;
  ht->sizemask = v11 - 1;
  ht->used = v14;
  ht->privdata = privdata;
  return 0;
};

// Line 142: range 000000000CAC3070-000000000CAC31C1
int __fastcall dictAdd(dict_0 *ht, void *key, void *val)
{
  unsigned __int64 size; // rax
  int v5; // r13d
  dictEntry_0 *i; // rbx
  int (*keyCompare)(void *, const void *, const void *); // rcx
  dictEntry_0 *v9; // rbx
  dictEntry_0 **v10; // rax
  dictType_0 *type; // rax
  void *(*keyDup)(void *, const void *); // rdx
  void *(*valDup)(void *, const void *); // rax
  int v14; // eax

  size = ht->size;
  if ( size )
  {
    if ( size != ht->used )
      goto LABEL_3;
    v14 = dictExpand_0(ht, 2 * size);
  }
  else
  {
    v14 = dictExpand_0(ht, 4uLL);
  }
  if ( v14 == 1 )
    return 1;
LABEL_3:
  v5 = ht->type->hashFunction(key) & LODWORD(ht->sizemask);
  for ( i = ht->table[v5]; i; i = i->next )
  {
    keyCompare = ht->type->keyCompare;
    if ( keyCompare )
    {
      if ( keyCompare(ht->privdata, key, i->key) )
        return 1;
    }
    else if ( key == i->key )
    {
      return 1;
    }
  }
  if ( v5 == -1 )
    return 1;
  v9 = (dictEntry_0 *)hiredisAllocFns.mallocFn(0x18uLL);
  if ( !v9 )
    return 1;
  v10 = &ht->table[v5];
  v9->next = *v10;
  *v10 = v9;
  type = ht->type;
  keyDup = type->keyDup;
  if ( !keyDup )
  {
    valDup = type->valDup;
    v9->key = key;
    if ( valDup )
      goto LABEL_14;
LABEL_20:
    v9->val = val;
    goto LABEL_15;
  }
  v9->key = keyDup(ht->privdata, key);
  valDup = ht->type->valDup;
  if ( !valDup )
    goto LABEL_20;
LABEL_14:
  v9->val = valDup(ht->privdata, val);
LABEL_15:
  ++ht->used;
  return 0;
};

// Line 193: range 000000000CAC31D0-000000000CAC32AB
void __fastcall dictRelease(dict_0 *ht)
{
  unsigned __int64 size; // rax
  dictEntry_0 **table; // rdi
  unsigned __int64 v4; // r14
  dictEntry_0 *v5; // rbp
  dictType_0 *type; // rax
  dictEntry_0 *next; // r12
  void (*keyDestructor)(void *, void *); // rdx
  void (*valDestructor)(void *, void *); // rax

  size = ht->size;
  if ( size && ht->used )
  {
    table = ht->table;
    v4 = 0LL;
    do
    {
      v5 = table[v4];
      if ( v5 )
      {
        while ( 1 )
        {
          type = ht->type;
          next = v5->next;
          keyDestructor = type->keyDestructor;
          if ( keyDestructor )
          {
            keyDestructor(ht->privdata, v5->key);
            type = ht->type;
          }
          valDestructor = type->valDestructor;
          if ( valDestructor )
            valDestructor(ht->privdata, v5->val);
          hiredisAllocFns.freeFn(v5);
          --ht->used;
          if ( !next )
            break;
          v5 = next;
        }
        table = ht->table;
        size = ht->size;
      }
      ++v4;
    }
    while ( v4 < size && ht->used );
  }
  else
  {
    table = ht->table;
  }
  hiredisAllocFns.freeFn(table);
  ht->size = 0LL;
  ht->sizemask = 0LL;
  ht->used = 0LL;
  ht->table = 0LL;
  hiredisAllocFns.freeFn(ht);
};

// Line 198: range 000000000CAC32B0-000000000CAC3326
dictEntry_0 *__fastcall dictFind(dict_0 *ht, const void *key)
{
  dictEntry_0 *i; // rbx
  int (*keyCompare)(void *, const void *, const void *); // rax

  if ( ht->size )
  {
    for ( i = ht->table[ht->sizemask & ht->type->hashFunction(key)]; i; i = i->next )
    {
      keyCompare = ht->type->keyCompare;
      if ( keyCompare )
      {
        if ( keyCompare(ht->privdata, key, i->key) )
          return i;
      }
      else if ( i->key == key )
      {
        return i;
      }
    }
  }
  return 0LL;
};

// Line 215: range 000000000CAC3330-000000000CAC334A
void __fastcall dictInitIterator(dictIterator_0 *iter, dict_0 *ht)
{
  iter->ht = ht;
  iter->index = -1;
  iter->entry = 0LL;
  iter->nextEntry = 0LL;
};

// Line 221: range 000000000CAC3350-000000000CAC3398
dictEntry_0 *__fastcall dictNext(dictIterator_0 *iter)
{
  dictEntry_0 *result; // rax
  dict_0 *ht; // rcx
  int v3; // edx
  bool v4; // cc

  result = iter->entry;
  if ( result && (result = iter->nextEntry, (iter->entry = result) != 0LL) )
  {
LABEL_5:
    iter->nextEntry = result->next;
  }
  else
  {
    while ( 1 )
    {
      ht = iter->ht;
      v3 = iter->index + 1;
      v4 = v3 < SLODWORD(iter->ht->size);
      iter->index = v3;
      if ( !v4 )
        break;
      result = ht->table[v3];
      iter->entry = result;
      if ( result )
        goto LABEL_5;
    }
  }
  return result;
};
