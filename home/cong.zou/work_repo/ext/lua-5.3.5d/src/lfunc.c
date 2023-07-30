// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lfunc.c

// Line 25: range 00000000152F0287-00000000152F02A4
CClosure_0 *__fastcall luaF_newCclosure(lua_State_0 *L, int n)
{
  CClosure_0 *result; // rax

  result = (CClosure_0 *)luaC_newobj(L, 38, 16 * (n - 1) + 48);
  result->nupvalues = n;
  return result;
};

// Line 33: range 00000000152F02A5-00000000152F02DF
LClosure_0 *__fastcall luaF_newLclosure(lua_State_0 *L, int n)
{
  int v2; // ebx
  LClosure_0 *result; // rax

  v2 = n;
  result = (LClosure_0 *)luaC_newobj(L, 6, 8 * n + 32);
  result->p = 0LL;
  result->nupvalues = n;
  while ( v2 )
    result->upvals[--v2] = 0LL;
  return result;
};

// Line 45: range 00000000152F02E0-00000000152F0335
void __fastcall luaF_initupvals(lua_State_0 *L, LClosure_0 *cl_0)
{
  int i; // ebx
  UpVal_0 *v3; // rax

  for ( i = 0; cl_0->nupvalues > i; ++i )
  {
    v3 = (UpVal_0 *)luaM_realloc_(L, 0LL, 0LL, 0x20uLL);
    v3->refcount = 1LL;
    v3->v = (TValue *)&v3->u;
    v3->u.open.touched = 0;
    cl_0->upvals[i] = v3;
  }
};

// Line 57: range 00000000152F0336-00000000152F03B8
UpVal_0 *__fastcall luaF_findupval(lua_State_0 *L, StkId level)
{
  $0F107F72300CBA7FB0D49582F1E3FF2F *i; // rbp
  UpVal_0 *result; // rax
  global_State_0 *l_G; // rdx

  for ( i = ($0F107F72300CBA7FB0D49582F1E3FF2F *)&L->openupval; ; i = &result->u )
  {
    result = (UpVal_0 *)i->value.value_.i;
    if ( !i->value.value_.i || result->v < level )
      break;
    if ( result->v == level )
      return result;
  }
  result = (UpVal_0 *)luaM_realloc_(L, 0LL, 0LL, 0x20uLL);
  result->refcount = 0LL;
  result->u.value.value_.i = i->value.value_.i;
  result->u.open.touched = 1;
  i->value.value_.i = (lua_Integer)result;
  result->v = level;
  if ( L->twups == L )
  {
    l_G = L->l_G;
    L->twups = l_G->twups;
    l_G->twups = L;
  }
  return result;
};

// Line 83: range 00000000152F03BA-00000000152F041F
void __fastcall luaF_close(lua_State_0 *L, StkId level)
{
  UpVal_0 *openupval; // rsi

  while ( 1 )
  {
    openupval = L->openupval;
    if ( !openupval || openupval->v < level )
      break;
    L->openupval = openupval->u.open.next;
    if ( openupval->refcount )
    {
      openupval->u = ($0F107F72300CBA7FB0D49582F1E3FF2F)_mm_loadu_si128((const __m128i *)openupval->v);
      openupval->v = (TValue *)&openupval->u;
      if ( (openupval->u.value.tt_ & 0x40) != 0 )
        luaC_upvalbarrier_(L, openupval);
    }
    else
    {
      luaM_realloc_(L, openupval, 0x20uLL, 0LL);
    }
  }
};

// Line 99: range 00000000152F0420-00000000152F04BB
Proto_0 *__fastcall luaF_newproto(lua_State_0 *L)
{
  Proto_0 *result; // rax

  result = (Proto_0 *)luaC_newobj(L, 9, 0x78uLL);
  result->k = 0LL;
  result->sizek = 0;
  result->p = 0LL;
  result->sizep = 0;
  result->code = 0LL;
  result->cache = 0LL;
  result->sizecode = 0;
  result->lineinfo = 0LL;
  result->sizelineinfo = 0;
  result->upvalues = 0LL;
  result->sizeupvalues = 0;
  result->numparams = 0;
  result->is_vararg = 0;
  result->maxstacksize = 0;
  result->locvars = 0LL;
  result->sizelocvars = 0;
  result->linedefined = 0;
  result->lastlinedefined = 0;
  result->source = 0LL;
  return result;
};

// Line 125: range 00000000152F04BC-00000000152F0576
void __fastcall luaF_freeproto(lua_State_0 *L, Proto_0 *f)
{
  luaM_realloc_(L, f->code, 4LL * f->sizecode, 0LL);
  luaM_realloc_(L, f->p, 8LL * f->sizep, 0LL);
  luaM_realloc_(L, f->k, 16LL * f->sizek, 0LL);
  luaM_realloc_(L, f->lineinfo, 4LL * f->sizelineinfo, 0LL);
  luaM_realloc_(L, f->locvars, 16LL * f->sizelocvars, 0LL);
  luaM_realloc_(L, f->upvalues, 16LL * f->sizeupvalues, 0LL);
  luaM_realloc_(L, f, 0x78uLL, 0LL);
};

// Line 142: range 00000000152F0577-00000000152F05B3
const char *__fastcall luaF_getlocalname(const Proto_0 *f, int local_number, int pc)
{
  int i; // ecx
  LocVar_0 *v4; // rax

  for ( i = 0; f->sizelocvars > i; ++i )
  {
    v4 = &f->locvars[i];
    if ( v4->startpc > pc )
      return 0LL;
    if ( v4->endpc > pc && !--local_number )
      return (const char *)&v4->varname[1];
  }
  return 0LL;
};
