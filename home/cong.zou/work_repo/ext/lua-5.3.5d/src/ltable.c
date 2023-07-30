// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/ltable.c

// Line 97: range 00000000152F62E9-00000000152F633B
__int64 __fastcall l_hashfloat(double a1, lua_Number n)
{
  double v2; // xmm0_8
  int v3; // edx
  int i[3]; // [rsp+Ch] [rbp-Ch] BYREF

  v2 = frexp(a1, i) * 2147483648.0;
  if ( v2 < -9.223372036854776e18 )
  {
    return 0;
  }
  else if ( v2 >= 9.223372036854776e18 )
  {
    return 0;
  }
  else
  {
    v3 = i[0] + (int)v2;
    if ( v3 < 0 )
      return (unsigned int)~(i[0] + (int)v2);
  }
  return (unsigned int)v3;
};

// Line 117: range 00000000152F633D-00000000152F648C
Node_0 *__fastcall mainposition(const Table_0 *t, const TValue *key)
{
  lua_Number v2; // xmm1_8
  Node_0 *result; // rax
  Node_0 *node; // rbx
  Node_0 *v5; // rbx

  switch ( key->tt_ & 0x3F )
  {
    case 1:
      result = &t->node[key->value_.b & ((1 << t->lsizenode) - 1)];
      break;
    case 2:
      result = &t->node[key->value_.b % (((1 << t->lsizenode) - 1) | 1u)];
      break;
    case 3:
      node = t->node;
      result = &node[(int)l_hashfloat(key->value_.n, v2) % (((1 << t->lsizenode) - 1) | 1)];
      break;
    case 4:
      result = &t->node[*(_DWORD *)(key->value_.i + 12) & ((1 << t->lsizenode) - 1)];
      break;
    case 0x13:
      result = &t->node[key->value_.b & ((1 << t->lsizenode) - 1)];
      break;
    case 0x14:
      v5 = t->node;
      result = &v5[((1 << t->lsizenode) - 1) & luaS_hashlongstr((TString_0 *)key->value_.gc)];
      break;
    case 0x16:
      result = &t->node[key->value_.b % (((1 << t->lsizenode) - 1) | 1u)];
      break;
    default:
      result = &t->node[key->value_.b % (((1 << t->lsizenode) - 1) | 1u)];
      break;
  }
  return result;
};

// Line 145: range 00000000152F61E0-00000000152F6202
unsigned int __fastcall arrayindex(const TValue *key)
{
  Value_0 v1; // rax

  if ( key->tt_ != 19 )
    return 0;
  v1.gc = (GCObject_0 *)key->value_;
  if ( (unsigned __int64)(key->value_.i - 1) > 0x7FFFFFFF )
    v1.b = 0;
  return v1.b;
};

// Line 161: range 00000000152F6491-00000000152F653D
unsigned int __fastcall findindex(lua_State_0 *L, Table_0 *t, StkId key)
{
  unsigned int result; // eax
  Node_0 *i; // rbx
  int next; // eax

  if ( !key->tt_ )
    return 0;
  result = arrayindex(key);
  if ( !result || t->sizearray < result )
  {
    for ( i = mainposition(t, key);
          !luaV_equalobj(0LL, (const TValue *)&i->i_key, key)
       && (i->i_key.nk.tt_ != 10 || (key->tt_ & 0x40) == 0 || i->i_key.nk.value_.i != key->value_.i);
          i += next )
    {
      next = i->i_key.nk.next;
      if ( !next )
        luaG_runerror(L, "invalid key to 'next'");
    }
    return t->sizearray + i - t->node + 1;
  }
  return result;
};

// Line 186: range 00000000152F6742-00000000152F67E2
int __fastcall luaH_next(lua_State_0 *L, Table_0 *t, StkId key)
{
  unsigned int i; // eax
  unsigned int sizearray; // edx
  int j; // eax
  const __m128i *v8; // rcx

  for ( i = findindex(L, t, key); ; ++i )
  {
    sizearray = t->sizearray;
    if ( sizearray <= i )
      break;
    if ( t->array[i].tt_ )
    {
      key->value_.i = i + 1;
      key->tt_ = 19;
      key[1] = (TValue)_mm_loadu_si128((const __m128i *)&t->array[i]);
      return 1;
    }
  }
  for ( j = i - sizearray; 1 << t->lsizenode > j; ++j )
  {
    v8 = (const __m128i *)&t->node[j];
    if ( v8->m128i_i32[2] )
    {
      *(__m128i *)key = _mm_loadu_si128(v8 + 1);
      key[1] = (TValue)_mm_loadu_si128((const __m128i *)&t->node[j]);
      return 1;
    }
  }
  return 0;
};

// Line 224: range 00000000152F6203-00000000152F6254
unsigned int __fastcall computesizes(unsigned int *nums, unsigned int *pna)
{
  unsigned int v2; // r10d
  unsigned int v3; // r11d
  unsigned int v4; // r9d
  unsigned int v5; // eax
  int v6; // edx
  unsigned int v7; // r8d

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 1;
  v6 = 0;
  while ( v5 && *pna > v5 >> 1 )
  {
    v7 = nums[v6];
    if ( v7 )
    {
      v4 += v7;
      if ( v5 >> 1 < v4 )
      {
        v2 = v5;
        v3 = v4;
      }
    }
    ++v6;
    v5 *= 2;
  }
  *pna = v3;
  return v2;
};

// Line 243: range 00000000152F669F-00000000152F66CC
int __fastcall countint(const TValue *key, unsigned int *nums)
{
  unsigned int v2; // eax
  int v4; // eax

  v2 = arrayindex(key);
  if ( !v2 )
    return 0;
  v4 = luaO_ceillog2(v2);
  ++nums[v4];
  return 1;
};

// Line 259: range 00000000152F6255-00000000152F62BD
unsigned int __fastcall numusearray(const Table_0 *t, unsigned int *nums)
{
  unsigned int v3; // edx
  unsigned int v4; // r11d
  unsigned int v5; // r9d
  int i; // r8d
  int v8; // esi
  unsigned int sizearray; // ecx

  v3 = 1;
  v4 = 0;
  v5 = 1;
  for ( i = 0; i <= 31; ++i )
  {
    sizearray = t->sizearray;
    if ( sizearray < v5 )
    {
      if ( sizearray < v3 )
        return v4;
    }
    else
    {
      sizearray = v5;
    }
    v8 = 0;
    while ( v3 <= sizearray )
    {
      if ( t->array[v3 - 1].tt_ )
        ++v8;
      ++v3;
    }
    nums[i] += v8;
    v4 += v8;
    v5 *= 2;
  }
  return v4;
};

// Line 285: range 00000000152F66CE-00000000152F6741
int __fastcall numusehash(const Table_0 *t, unsigned int *nums, unsigned int *pna)
{
  int v5; // eax
  int v6; // r13d
  int v7; // r12d
  int v8; // ebx
  Node_0 *v9; // rdi

  v5 = 1 << t->lsizenode;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = v5 - 1;
    if ( !v5 )
      break;
    v9 = &t->node[v8];
    if ( v9->i_val.tt_ )
    {
      v6 += countint((const TValue *)&v9->i_key, nums);
      ++v7;
    }
    v5 = v8;
  }
  *pna += v6;
  return v7;
};

// Line 301: range 00000000152F6587-00000000152F65D2
void __fastcall setarrayvector(lua_State_0 *L, Table_0 *t, unsigned int size)
{
  unsigned int i; // edx

  t->array = (TValue *)luaM_realloc_(L, t->array, 16LL * t->sizearray, 16LL * size);
  for ( i = t->sizearray; i < size; ++i )
    t->array[i].tt_ = 0;
  t->sizearray = size;
};

// Line 310: range 00000000152F65D3-00000000152F6686
void __fastcall setnodevector(lua_State_0 *L, Table_0 *t, unsigned int size)
{
  int v3; // eax
  lu_byte v4; // r13
  int v5; // ebp
  __int64 v6; // r12
  int i; // edx
  Node_0 *v8; // rax

  if ( size )
  {
    v3 = luaO_ceillog2(size);
    v4 = v3;
    if ( v3 > 30 )
      luaG_runerror(L, "table overflow");
    v5 = 1 << v3;
    v6 = (unsigned int)(1 << v3);
    t->node = (Node_0 *)luaM_realloc_(L, 0LL, 0LL, v6 * 32);
    for ( i = 0; v5 > i; ++i )
    {
      v8 = &t->node[i];
      v8->i_key.nk.next = 0;
      v8->i_key.nk.tt_ = 0;
      v8->i_val.tt_ = 0;
    }
    t->lsizenode = v4;
    t->lastfree = &t->node[v6];
  }
  else
  {
    t->node = (Node_0 *)&dummynode_;
    t->lsizenode = 0;
    t->lastfree = 0LL;
  }
};

// Line 341: range 00000000152F668B-00000000152F669E
void __fastcall auxsetnode(lua_State_0 *L, void *ud)
{
  setnodevector(L, *(Table_0 **)ud, *((_DWORD *)ud + 2));
};

// Line 348: range 00000000152F6AC8-00000000152F6C19
void __fastcall luaH_resize(lua_State_0 *L, Table_0 *t, unsigned int nasize, unsigned int nhsize)
{
  unsigned int sizearray; // r12d
  Node_0 *node; // r13
  unsigned int i; // ebx
  TValue *v9; // rcx
  int j; // r12d
  Node_0 *v11; // rbx
  int oldhsize; // [rsp+Ch] [rbp-4Ch]
  AuxsetnodeT asn; // [rsp+10h] [rbp-48h] BYREF

  sizearray = t->sizearray;
  if ( t->lastfree )
    oldhsize = 1 << t->lsizenode;
  else
    oldhsize = 0;
  node = t->node;
  if ( sizearray < nasize )
    setarrayvector(L, t, nasize);
  asn.t = t;
  asn.nhsize = nhsize;
  if ( luaD_rawrunprotected(L, auxsetnode, &asn) )
  {
    setarrayvector(L, t, sizearray);
    luaD_throw(L, 4);
  }
  if ( sizearray > nasize )
  {
    t->sizearray = nasize;
    for ( i = nasize; i < sizearray; ++i )
    {
      v9 = &t->array[i];
      if ( v9->tt_ )
        luaH_setint(L, t, i + 1, v9);
    }
    t->array = (TValue *)luaM_realloc_(L, t->array, 16LL * sizearray, 16LL * nasize);
  }
  for ( j = oldhsize - 1; j >= 0; --j )
  {
    v11 = &node[j];
    if ( v11->i_val.tt_ )
      *(__m128i *)luaH_set(L, t, (const TValue *)&v11->i_key) = _mm_loadu_si128((const __m128i *)v11);
  }
  if ( oldhsize > 0 )
    luaM_realloc_(L, node, 32LL * oldhsize, 0LL);
};

// Line 387: range 00000000152F6C1B-00000000152F6C42
void __fastcall luaH_resizearray(lua_State_0 *L, Table_0 *t, unsigned int nasize)
{
  unsigned int v3; // ecx

  if ( t->lastfree )
    v3 = 1 << t->lsizenode;
  else
    v3 = 0;
  luaH_resize(L, t, nasize, v3);
};

// Line 395: range 00000000152F6C44-00000000152F6CE4
void __fastcall rehash(lua_State_0 *L, Table_0 *t, const TValue *ek)
{
  int i; // eax
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // eax
  unsigned int nums[32]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned int na[11]; // [rsp+8Ch] [rbp-2Ch] BYREF

  for ( i = 0; i <= 31; ++i )
    nums[i] = 0;
  na[0] = numusearray(t, nums);
  v5 = numusehash(t, nums, na) + na[0];
  v6 = countint(ek, nums);
  na[0] += v6;
  v7 = computesizes(nums, na);
  luaH_resize(L, t, v7, v5 + 1 - na[0]);
};

// Line 421: range 00000000152F67E4-00000000152F6833
Table_0 *__fastcall luaH_new(lua_State_0 *L)
{
  Table_0 *v1; // rbx

  v1 = (Table_0 *)luaC_newobj(L, 5, 0x38uLL);
  v1->metatable = 0LL;
  v1->flags = -1;
  v1->array = 0LL;
  v1->sizearray = 0;
  setnodevector(L, v1, 0);
  return v1;
};

// Line 433: range 00000000152F6834-00000000152F689A
void __fastcall luaH_free(lua_State_0 *L, Table_0 *t)
{
  if ( t->lastfree )
    luaM_realloc_(L, t->node, 32LL * (1 << t->lsizenode), 0LL);
  luaM_realloc_(L, t->array, 16LL * t->sizearray, 0LL);
  luaM_realloc_(L, t, 0x38uLL, 0LL);
};

// Line 442: range 00000000152F62BF-00000000152F62E8
Node_0 *__fastcall getfreepos(Table_0 *t)
{
  Node_0 *result; // rax
  Node_0 *lastfree; // rax

  result = t->lastfree;
  if ( result )
  {
    while ( 1 )
    {
      lastfree = t->lastfree;
      if ( lastfree <= t->node )
        break;
      result = lastfree - 1;
      t->lastfree = result;
      if ( !result->i_key.nk.tt_ )
        return result;
    }
    return 0LL;
  }
  return result;
};

// Line 461: range 00000000152F6CE5-00000000152F6E98
TValue *__fastcall luaH_newkey(lua_State_0 *L, Table_0 *t, const TValue *key)
{
  int tt; // eax
  const TValue *p_aux; // rbp
  Node_0 *v5; // rbx
  int v6; // eax
  __m128i *v8; // r13
  Node_0 *v9; // rax
  Node_0 *v10; // rcx
  int next; // eax
  lua_Integer k; // [rsp+8h] [rbp-40h] BYREF
  TValue aux; // [rsp+10h] [rbp-38h] BYREF

  tt = key->tt_;
  if ( !tt )
    luaG_runerror(L, "table index is nil");
  p_aux = key;
  if ( tt == 3 && luaV_tointeger(key, &k, 0) )
  {
    aux.value_.i = k;
    aux.tt_ = 19;
    p_aux = &aux;
  }
  v5 = mainposition(t, p_aux);
  if ( v5->i_val.tt_ || !t->lastfree )
  {
    v8 = (__m128i *)getfreepos(t);
    if ( !v8 )
    {
      rehash(L, t, p_aux);
      return luaH_set(L, t, p_aux);
    }
    v9 = mainposition(t, (const TValue *)&v5->i_key);
    if ( v5 == v9 )
    {
      next = v5->i_key.nk.next;
      if ( next )
        v8[1].m128i_i32[3] = ((char *)&v5[next] - (char *)v8) >> 5;
      v5->i_key.nk.next = ((char *)v8 - (char *)v5) >> 5;
      v5 = (Node_0 *)v8;
    }
    else
    {
      do
      {
        v10 = v9;
        v9 += v9->i_key.nk.next;
      }
      while ( v9 != v5 );
      v10->i_key.nk.next = ((char *)v8 - (char *)v10) >> 5;
      *v8 = _mm_loadu_si128((const __m128i *)v5);
      v8[1] = _mm_loadu_si128((const __m128i *)&v5->i_key);
      if ( v5->i_key.nk.next )
      {
        v8[1].m128i_i32[3] += ((char *)v5 - (char *)v8) >> 5;
        v5->i_key.nk.next = 0;
      }
      v5->i_val.tt_ = 0;
    }
  }
  v5->i_key.nk.value_.i = p_aux->value_.i;
  v6 = p_aux->tt_;
  v5->i_key.nk.tt_ = v6;
  if ( (v6 & 0x40) != 0 && (t->marked & 4) != 0 && (*(_BYTE *)(p_aux->value_.i + 9) & 3) != 0 )
    luaC_barrierback_(L, t);
  return &v5->i_val;
};

// Line 518: range 00000000152F689B-00000000152F68F7
const TValue *__fastcall luaH_getint(Table_0 *t, lua_Integer key)
{
  const TValue *result; // rax
  int v3; // edx

  if ( key - 1 < (unsigned __int64)t->sizearray )
    return &t->array[key - 1];
  for ( result = &t->node[(int)(key & ((1 << t->lsizenode) - 1))].i_val;
        result[1].tt_ != 19 || result[1].value_.i != key;
        result += 2 * v3 )
  {
    v3 = *(&result[1].tt_ + 1);
    if ( !v3 )
      return &luaO_nilobject_;
  }
  return result;
};

// Line 540: range 00000000152F6986-00000000152F69C7
const TValue *__fastcall luaH_getshortstr(Table_0 *t, TString_0 *key)
{
  const TValue *result; // rax
  int v3; // edx

  for ( result = &t->node[key->hash & ((1 << t->lsizenode) - 1)].i_val;
        result[1].tt_ != 68 || (TString_0 *)result[1].value_.gc != key;
        result += 2 * v3 )
  {
    v3 = *(&result[1].tt_ + 1);
    if ( !v3 )
      return &luaO_nilobject_;
  }
  return result;
};

// Line 560: range 00000000152F653E-00000000152F6585
const TValue *__fastcall getgeneric(Table_0 *t, const TValue *key)
{
  Node_0 *i; // rbx
  int next; // eax

  for ( i = mainposition(t, key); ; i += next )
  {
    if ( luaV_equalobj(0LL, (const TValue *)&i->i_key, key) )
      return &i->i_val;
    next = i->i_key.nk.next;
    if ( !next )
      break;
  }
  return &luaO_nilobject_;
};

// Line 575: range 00000000152F69C8-00000000152F69F4
const TValue *__fastcall luaH_getstr(Table_0 *t, TString_0 *key)
{
  lu_byte tt; // al
  TValue ko; // [rsp+0h] [rbp-18h] BYREF

  tt = key->tt;
  if ( tt == 4 )
    return luaH_getshortstr(t, key);
  ko.value_.i = (lua_Integer)key;
  ko.tt_ = tt | 0x40;
  return getgeneric(t, &ko);
};

// Line 589: range 00000000152F69F6-00000000152F6A6E
const TValue *__fastcall luaH_get(Table_0 *t, const TValue *key)
{
  int v2; // eax
  lua_Integer k[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = key->tt_ & 0x3F;
  if ( v2 == 4 )
    return luaH_getshortstr(t, (TString_0 *)key->value_.gc);
  if ( (key->tt_ & 0x3Fu) > 4 )
  {
    if ( v2 != 19 )
      return getgeneric(t, key);
    return luaH_getint(t, key->value_.i);
  }
  else if ( v2 )
  {
    if ( v2 != 3 || !luaV_tointeger(key, k, 0) )
      return getgeneric(t, key);
    return luaH_getint(t, k[0]);
  }
  else
  {
    return &luaO_nilobject_;
  }
};

// Line 610: range 00000000152F6E9D-00000000152F6ED0
TValue *__fastcall luaH_set(lua_State_0 *L, Table_0 *t, const TValue *key)
{
  TValue *result; // rax

  result = (TValue *)luaH_get(t, key);
  if ( result == &luaO_nilobject_ )
    return luaH_newkey(L, t, key);
  return result;
};

// Line 618: range 00000000152F6A6F-00000000152F6AC6
void __fastcall luaH_setint(lua_State_0 *L, Table_0 *t, lua_Integer key, TValue *value)
{
  TValue *v6; // rax
  TValue k; // [rsp+0h] [rbp-38h] BYREF

  v6 = (TValue *)luaH_getint(t, key);
  if ( v6 == &luaO_nilobject_ )
  {
    k.value_.i = key;
    k.tt_ = 19;
    v6 = luaH_newkey(L, t, &k);
  }
  *(__m128i *)v6 = _mm_loadu_si128((const __m128i *)value);
};

// Line 632: range 00000000152F68F8-00000000152F6984
lua_Unsigned __fastcall unbound_search(Table_0 *t, lua_Unsigned j)
{
  lua_Unsigned v2; // rbp
  unsigned __int64 i; // rbx
  lua_Integer k; // rbp

  v2 = j;
  for ( i = j + 1; luaH_getint(t, i)->tt_; i *= 2LL )
  {
    if ( i > 0x3FFFFFFFFFFFFFFFLL )
    {
      for ( k = 1LL; luaH_getint(t, k)->tt_; ++k )
        ;
      return k - 1;
    }
    v2 = i;
  }
  while ( i - v2 > 1 )
  {
    if ( luaH_getint(t, (i + v2) >> 1)->tt_ )
      v2 = (i + v2) >> 1;
    else
      i = (i + v2) >> 1;
  }
  return v2;
};

// Line 661: range 00000000152F6ED2-00000000152F6F2A
lua_Unsigned __fastcall luaH_getn(Table_0 *t)
{
  lua_Unsigned result; // rax
  TValue *array; // r8
  unsigned int v3; // esi

  LODWORD(result) = t->sizearray;
  if ( (_DWORD)result && (array = t->array, !array[(unsigned int)(result - 1)].tt_) )
  {
    v3 = 0;
    while ( (unsigned int)result - v3 > 1 )
    {
      if ( array[(((unsigned int)result + v3) >> 1) - 1].tt_ )
        v3 = ((unsigned int)result + v3) >> 1;
      else
        LODWORD(result) = ((unsigned int)result + v3) >> 1;
    }
    return v3;
  }
  else if ( t->lastfree )
  {
    return unbound_search(t, (unsigned int)result);
  }
  else
  {
    return (unsigned int)result;
  }
};
