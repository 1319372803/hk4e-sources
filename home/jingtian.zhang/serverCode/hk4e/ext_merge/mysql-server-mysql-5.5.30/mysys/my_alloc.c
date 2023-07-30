// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/my_alloc.c

// Line 48: range 000000000CFB96E0-000000000CFB9765
void __fastcall init_alloc_root(MEM_ROOT *mem_root, size_t block_size, size_t pre_alloc_size)
{
  unsigned int v3; // ebp
  USED_MEM *v4; // rax

  v3 = pre_alloc_size;
  mem_root->pre_alloc = 0LL;
  mem_root->used = 0LL;
  mem_root->free = 0LL;
  mem_root->min_malloc = 32LL;
  mem_root->block_size = block_size - 32;
  mem_root->error_handler = 0LL;
  mem_root->block_num = 4;
  mem_root->first_block_usage = 0;
  if ( pre_alloc_size )
  {
    v4 = (USED_MEM *)my_malloc(pre_alloc_size + 16, 0);
    mem_root->pre_alloc = v4;
    mem_root->free = v4;
    if ( v4 )
    {
      v4->left = v3;
      v4->next = 0LL;
      v4->size = v3 + 16;
    }
  }
};

// Line 95: range 000000000CFB9770-000000000CFB9837
void __fastcall reset_root_defaults(MEM_ROOT *mem_root, size_t block_size, size_t pre_alloc_size)
{
  unsigned int v3; // r13d
  USED_MEM *pre_alloc; // rax
  size_t v6; // rbp
  MEM_ROOT *v7; // rbx
  USED_MEM *free; // rdi
  __int64 size; // rcx
  USED_MEM *v10; // rax
  USED_MEM *v11; // rdx

  v3 = pre_alloc_size;
  mem_root->block_size = block_size - 32;
  if ( !pre_alloc_size )
  {
LABEL_11:
    mem_root->pre_alloc = 0LL;
    return;
  }
  pre_alloc = mem_root->pre_alloc;
  v6 = pre_alloc_size + 16;
  if ( pre_alloc && pre_alloc->size == v6 )
    return;
  v7 = mem_root;
LABEL_5:
  free = v7->free;
  if ( !v7->free )
  {
LABEL_9:
    v10 = (USED_MEM *)my_malloc(v6, 0);
    if ( v10 )
    {
      v11 = v7->free;
      v10->size = v6;
      v10->left = v3;
      v10->next = v11;
      mem_root->pre_alloc = v10;
      v7->free = v10;
      return;
    }
    goto LABEL_11;
  }
  while ( 1 )
  {
    size = free->size;
    if ( size == v6 )
      break;
    if ( size == free->left + 16LL )
    {
      v7->free = free->next;
      my_free(free);
      goto LABEL_5;
    }
    v7 = (MEM_ROOT *)free;
    free = free->next;
    if ( !free )
      goto LABEL_9;
  }
  mem_root->pre_alloc = free;
};

// Line 149: range 000000000CFB9840-000000000CFB997F
void *__fastcall alloc_root(MEM_ROOT *mem_root, size_t length)
{
  MEM_ROOT *v2; // rbp
  USED_MEM *free; // rdx
  size_t v4; // rbx
  unsigned int left; // eax
  unsigned int size; // esi
  size_t v7; // rcx
  bool v8; // cf
  void *result; // rax
  unsigned int first_block_usage; // ecx
  size_t v11; // rax
  unsigned int v12; // r13d
  USED_MEM *v13; // rax
  void (*error_handler)(void); // rdx

  v2 = mem_root;
  free = mem_root->free;
  v4 = (length + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( mem_root->free )
  {
    left = free->left;
    if ( v4 <= left )
    {
LABEL_3:
      size = free->size;
      goto LABEL_4;
    }
    first_block_usage = mem_root->first_block_usage;
    mem_root->first_block_usage = first_block_usage + 1;
    if ( first_block_usage <= 9
      || left > 0xFFF
      || (mem_root->free = free->next,
          free->next = mem_root->used,
          mem_root->used = free,
          free = mem_root->free,
          mem_root->first_block_usage = 0,
          free) )
    {
      do
      {
        left = free->left;
        if ( v4 <= left )
          goto LABEL_3;
        v2 = (MEM_ROOT *)free;
        free = free->next;
      }
      while ( free );
    }
  }
  v11 = mem_root->block_size * (mem_root->block_num >> 2);
  if ( v4 + 16 >= v11 )
    v11 = v4 + 16;
  v12 = v11;
  free = (USED_MEM *)my_malloc(v11, 1040);
  if ( free )
  {
    v13 = v2->free;
    ++mem_root->block_num;
    size = v12;
    free->size = v12;
    free->next = v13;
    left = v12 - 16;
    free->left = v12 - 16;
    v2->free = free;
LABEL_4:
    v7 = left - (unsigned int)v4;
    v8 = v7 < mem_root->min_malloc;
    free->left = v7;
    result = (char *)free + size - left;
    if ( v8 )
    {
      v2->free = free->next;
      free->next = mem_root->used;
      mem_root->used = free;
      mem_root->first_block_usage = 0;
    }
    return result;
  }
  error_handler = mem_root->error_handler;
  result = 0LL;
  if ( error_handler )
  {
    error_handler();
    return 0LL;
  }
  return result;
};

// Line 265: range 000000000CFB9990-000000000CFB9ADD
void *multi_alloc_root(MEM_ROOT *root, ...)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  char *v6; // rcx
  unsigned int v7; // edx
  size_t v8; // rsi
  unsigned int i; // eax
  char *v10; // r8
  char *v11; // r8
  void *result; // rax
  unsigned int v13; // edx
  char *v14; // rsi
  unsigned int v15; // ecx
  char *v16; // rdi
  _QWORD *v17; // rdx
  char *v18; // r8
  char *v19; // r8
  char v20[8]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+30h] [rbp-28h]
  __int64 v23; // [rsp+38h] [rbp-20h]
  __int64 v24; // [rsp+40h] [rbp-18h]
  __int64 v25; // [rsp+48h] [rbp-10h]
  char v26; // [rsp+60h] [rbp+8h] BYREF

  v21 = v3;
  v22 = v1;
  v23 = v2;
  v25 = v5;
  v6 = &v26;
  v24 = v4;
  v7 = 8;
  v8 = 0LL;
  for ( i = 8; i <= 0x2F; v7 = i )
  {
    v7 = i + 8;
    if ( !*(_QWORD *)&v20[i] )
      goto LABEL_8;
LABEL_3:
    if ( v7 > 0x2F )
    {
      v10 = v6;
      i = v7;
      v6 += 8;
    }
    else
    {
      i = v7 + 8;
      v10 = &v20[v7];
    }
    v8 += (*(unsigned int *)v10 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v11 = v6;
  v6 += 8;
  if ( *(_QWORD *)v11 )
    goto LABEL_3;
LABEL_8:
  result = alloc_root(root, v8);
  if ( result )
  {
    v13 = 8;
    v14 = &v26;
    v15 = 8;
    v16 = (char *)result;
    while ( 1 )
    {
      if ( v13 <= 0x2F )
      {
        v15 = v13 + 8;
        v17 = *(_QWORD **)&v20[v13];
        if ( !v17 )
          return result;
      }
      else
      {
        v19 = v14;
        v14 += 8;
        v17 = *(_QWORD **)v19;
        if ( !*(_QWORD *)v19 )
          return result;
      }
      *v17 = v16;
      if ( v15 > 0x2F )
      {
        v18 = v14;
        v13 = v15;
        v14 += 8;
      }
      else
      {
        v13 = v15 + 8;
        v18 = &v20[v15];
      }
      v16 += (*(unsigned int *)v18 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      v15 = v13;
    }
  }
  return 0LL;
};

// Line 348: range 000000000CFB9AE0-000000000CFB9C13
void __fastcall free_root(MEM_ROOT *root, myf MyFlags)
{
  USED_MEM *pre_alloc; // rax
  USED_MEM *v4; // rdi
  USED_MEM *next; // rbx
  USED_MEM *v6; // rdi
  USED_MEM *v7; // rbx
  unsigned int size; // ecx
  USED_MEM *free; // rax
  USED_MEM *used; // rax
  USED_MEM *v11; // rdx

  if ( (MyFlags & 2) != 0 )
  {
    free = root->free;
    if ( root->free )
    {
      while ( 1 )
      {
        free->left = free->size - 16;
        if ( !free->next )
          break;
        free = free->next;
      }
      v11 = free;
      used = root->used;
      v11->next = used;
      if ( !used )
        goto LABEL_23;
    }
    else
    {
      used = root->used;
      root->free = used;
      if ( !used )
      {
LABEL_23:
        root->used = 0LL;
        root->first_block_usage = 0;
        return;
      }
    }
    do
    {
      used->left = used->size - 16;
      used = used->next;
    }
    while ( used );
    goto LABEL_23;
  }
  if ( (MyFlags & 1) != 0 )
  {
    pre_alloc = root->pre_alloc;
  }
  else
  {
    root->pre_alloc = 0LL;
    pre_alloc = 0LL;
  }
  v4 = root->used;
  if ( v4 )
  {
    while ( 1 )
    {
      next = v4->next;
      if ( v4 != pre_alloc )
      {
        my_free(v4);
        pre_alloc = root->pre_alloc;
      }
      if ( !next )
        break;
      v4 = next;
    }
  }
  v6 = root->free;
  if ( root->free )
  {
    while ( 1 )
    {
      v7 = v6->next;
      if ( pre_alloc != v6 )
      {
        my_free(v6);
        pre_alloc = root->pre_alloc;
      }
      if ( !v7 )
        break;
      v6 = v7;
    }
  }
  root->free = 0LL;
  root->used = 0LL;
  if ( pre_alloc )
  {
    size = pre_alloc->size;
    root->free = pre_alloc;
    pre_alloc->next = 0LL;
    pre_alloc->left = size - 16;
  }
  root->block_num = 4;
  root->first_block_usage = 0;
};

// Line 393: range 000000000CFB9C20-000000000CFB9C74
void __fastcall set_prealloc_root(MEM_ROOT *root, char *ptr)
{
  USED_MEM *used; // rax

  used = root->used;
  if ( used )
  {
    while ( ptr < (char *)used || ptr >= (char *)used + used->size )
    {
      used = used->next;
      if ( !used )
        goto LABEL_5;
    }
    goto LABEL_10;
  }
LABEL_5:
  used = root->free;
  if ( root->free )
  {
    while ( ptr < (char *)used || ptr >= (char *)used + used->size )
    {
      used = used->next;
      if ( !used )
        return;
    }
LABEL_10:
    root->pre_alloc = used;
  }
};

// Line 413: range 000000000CFB9CC0-000000000CFB9CE3
char *__fastcall strdup_root(MEM_ROOT *root, const char *str)
{
  size_t v2; // rax

  v2 = strlen(str);
  return strmake_root(root, str, v2);
};

// Line 419: range 000000000CFB9C80-000000000CFB9CBB
char *__fastcall strmake_root(MEM_ROOT *root, const char *str, size_t len)
{
  char *v4; // rax
  char *v5; // rcx

  v4 = (char *)alloc_root(root, len + 1);
  v5 = v4;
  if ( v4 )
  {
    v5 = (char *)memcpy(v4, str, len);
    v5[len] = 0;
  }
  return v5;
};

// Line 431: range 000000000CFB9CF0-000000000CFB9D26
void *__fastcall memdup_root(MEM_ROOT *root, const void *str, size_t len)
{
  void *v4; // rax
  void *v5; // rcx

  v4 = alloc_root(root, len);
  v5 = v4;
  if ( v4 )
    return memcpy(v4, str, len);
  return v5;
};
