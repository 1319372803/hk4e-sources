// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/hiredis/dict.c

// Line 92: range 000000000CAC8D20-000000000CAC8EC1
int __fastcall dictExpand(dict_0 *ht, unsigned __int64 size)
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
      __assert_fail("ht->used == 0", "dict.c", 0x84u, "dictExpand");
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

// Line 225: range 000000000CAC8BE0-000000000CAC8CB5
int __fastcall dictClear(dict_0 *ht)
{
  unsigned __int64 size; // rax
  dictEntry_0 **table; // rdi
  unsigned __int64 v4; // r14
  dictEntry_0 *v5; // rbp
  dictType_0 *type; // rax
  dictEntry_0 *next; // r12
  void (*keyDestructor)(void *, void *); // rdx
  void (*valDestructor)(void *, void *); // rax
  int result; // eax

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
  result = 0;
  ht->used = 0LL;
  ht->table = 0LL;
  return result;
};
