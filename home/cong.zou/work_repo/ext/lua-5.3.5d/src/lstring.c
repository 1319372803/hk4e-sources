// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lstring.c

// Line 41: range 00000000152F5CE6-00000000152F5D25
int __fastcall luaS_eqlngstr(TString_0 *a, TString_0 *b)
{
  size_t lnglen; // rdx

  lnglen = a->u.lnglen;
  if ( a == b )
    return 1;
  if ( b->u.lnglen == lnglen )
    return memcmp(&a[1], &b[1], lnglen) == 0;
  return 0;
};

// Line 50: range 00000000152F5D27-00000000152F5D5A
unsigned int __fastcall luaS_hash(const char *str, size_t l, unsigned int seed)
{
  unsigned int result; // eax
  size_t i; // rdx

  result = l ^ seed;
  for ( i = (l >> 5) + 1; l >= i; l -= i )
    result ^= (unsigned __int8)str[l - 1] + (result >> 2) + 32 * result;
  return result;
};

// Line 58: range 00000000152F5D5B-00000000152F5D81
unsigned int __fastcall luaS_hashlongstr(TString_0 *ts)
{
  if ( !ts->extra )
  {
    ts->hash = luaS_hash((const char *)&ts[1], ts->u.lnglen, ts->hash);
    ts->extra = 1;
  }
  return ts->hash;
};

// Line 71: range 00000000152F5D83-00000000152F5E50
void __fastcall luaS_resize(lua_State_0 *L, int newsize)
{
  global_State_0 *l_G; // rbx
  int size; // eax
  int j; // edi
  int i; // edx
  TString_0 *hnext; // rcx
  __int64 v8; // rdx
  TString_0 *v9; // rax
  int v10; // eax
  TString_0 **v11; // rdx

  l_G = L->l_G;
  size = l_G->strt.size;
  if ( size < newsize )
  {
    l_G->strt.hash = (TString_0 **)luaM_realloc_(L, l_G->strt.hash, 8LL * size, 8LL * newsize);
    for ( i = l_G->strt.size; i < newsize; ++i )
      l_G->strt.hash[i] = 0LL;
  }
  for ( j = 0; ; ++j )
  {
    v10 = l_G->strt.size;
    if ( v10 <= j )
      break;
    v11 = &l_G->strt.hash[j];
    v9 = *v11;
    *v11 = 0LL;
    while ( v9 )
    {
      hnext = v9->u.hnext;
      v8 = v9->hash & (newsize - 1);
      v9->u.lnglen = (size_t)l_G->strt.hash[v8];
      l_G->strt.hash[v8] = v9;
      v9 = hnext;
    }
  }
  if ( v10 > newsize )
    l_G->strt.hash = (TString_0 **)luaM_realloc_(L, l_G->strt.hash, 8LL * v10, 8LL * newsize);
  l_G->strt.size = newsize;
};

// Line 105: range 00000000152F5F67-00000000152F5FB4
void __fastcall luaS_clearcache(global_State_0 *g)
{
  int i; // ecx
  int j; // eax

  for ( i = 0; i <= 52; ++i )
  {
    for ( j = 0; j <= 1; ++j )
    {
      if ( (g->strcache[i][j]->marked & 3) != 0 )
        g->strcache[i][j] = g->memerrmsg;
    }
  }
};

// Line 116: range 00000000152F6056-00000000152F60CC
void __fastcall luaS_init(lua_State_0 *L)
{
  global_State_0 *l_G; // rbx
  GCObject_0 *v2; // rax
  int i; // edx
  int j; // eax

  l_G = L->l_G;
  luaS_resize(L, 128);
  v2 = (GCObject_0 *)luaS_newlstr(L, "not enough memory", 0x11uLL);
  l_G->memerrmsg = (TString_0 *)v2;
  luaC_fix(L, v2);
  for ( i = 0; i <= 52; ++i )
  {
    for ( j = 0; j <= 1; ++j )
      l_G->strcache[i][j] = l_G->memerrmsg;
  }
};

// Line 133: range 00000000152F5CBD-00000000152F5CE5
TString_0 *__fastcall createstrobj(lua_State_0 *L, size_t l, int tag, unsigned int h)
{
  TString_0 *result; // rax

  result = (TString_0 *)luaC_newobj(L, tag, l + 25);
  result->hash = h;
  result->extra = 0;
  *((_BYTE *)&result[1].next + l) = 0;
  return result;
};

// Line 147: range 00000000152F5FB5-00000000152F5FCF
TString_0 *__fastcall luaS_createlngstrobj(lua_State_0 *L, size_t l)
{
  TString_0 *result; // rax

  result = createstrobj(L, l, 20, L->l_G->seed);
  result->u.lnglen = l;
  return result;
};

// Line 155: range 00000000152F5FD0-00000000152F6005
void __fastcall luaS_remove(lua_State_0 *L, TString_0 *ts)
{
  global_State_0 *l_G; // rcx
  $02E16FBA0924936AC92E13B90DA11BB1 *i; // rax
  TString_0 *lnglen; // rdx

  l_G = L->l_G;
  for ( i = ($02E16FBA0924936AC92E13B90DA11BB1 *)&l_G->strt.hash[ts->hash & (l_G->strt.size - 1)]; ; i = &lnglen->u )
  {
    lnglen = (TString_0 *)i->lnglen;
    if ( i->hnext == ts )
      break;
  }
  i->lnglen = (size_t)lnglen->u;
  --l_G->strt.nuse;
};

// Line 167: range 00000000152F5E52-00000000152F5F65
TString_0 *__fastcall internshrstr(lua_State_0 *L, const char *str, size_t l)
{
  global_State_0 *l_G; // r14
  int size; // r15d
  TString_0 **v6; // r12
  TString_0 *i; // rbx
  unsigned int h; // [rsp+4h] [rbp-44h]

  l_G = L->l_G;
  h = luaS_hash(str, l, l_G->seed);
  size = l_G->strt.size;
  v6 = &l_G->strt.hash[h & (size - 1)];
  for ( i = *v6; i; i = i->u.hnext )
  {
    if ( i->shrlen == l && !memcmp(str, &i[1], l) )
    {
      if ( ((i->marked ^ 3) & (l_G->currentwhite ^ 3)) == 0 )
        i->marked ^= 3u;
      return i;
    }
  }
  if ( size <= l_G->strt.nuse && size <= 0x3FFFFFFF )
  {
    luaS_resize(L, 2 * size);
    v6 = &l_G->strt.hash[h & (l_G->strt.size - 1)];
  }
  i = createstrobj(L, l, 4, h);
  memcpy(&i[1], str, l);
  i->shrlen = l;
  i->u.lnglen = (size_t)*v6;
  *v6 = i;
  ++l_G->strt.nuse;
  return i;
};

// Line 199: range 00000000152F6006-00000000152F6051
TString_0 *__fastcall luaS_newlstr(lua_State_0 *L, const char *str, size_t l)
{
  TString_0 *v4; // rbp

  if ( l <= 0x28 )
    return internshrstr(L, str, l);
  if ( l > 0x7FFFFFFFFFFFFFE6LL )
    luaM_toobig(L);
  v4 = luaS_createlngstrobj(L, l);
  memcpy(&v4[1], str, l);
  return v4;
};

// Line 219: range 00000000152F60CD-00000000152F6196
TString_0 *__fastcall luaS_new(lua_State_0 *L, const char *str)
{
  Table **v2; // r13
  Table **v3; // r15
  int i; // r12d
  TString_0 *v5; // r14
  int j; // eax

  v2 = &L->l_G->mt[2 * ((unsigned int)str % 0x35) + 8];
  v3 = v2 + 1;
  for ( i = 0; i <= 1; ++i )
  {
    v5 = (TString_0 *)v3[i];
    if ( !strcmp(str, (const char *)&v5[1]) )
      return v5;
  }
  for ( j = 1; j > 0; --j )
    v3[j] = v2[j];
  v5 = luaS_newlstr(L, str, strlen(str));
  v2[1] = (Table *)v5;
  return v5;
};

// Line 236: range 00000000152F6198-00000000152F61DB
Udata_0 *__fastcall luaS_newudata(lua_State_0 *L, size_t s)
{
  Udata_0 *result; // rax

  if ( s > 0x7FFFFFFFFFFFFFD7LL )
    luaM_toobig(L);
  result = (Udata_0 *)luaC_newobj(L, 7, s + 40);
  result->len = s;
  result->metatable = 0LL;
  result->user_.i = luaO_nilobject_.value_.i;
  result->ttuv_ = luaO_nilobject_.tt_;
  return result;
};
