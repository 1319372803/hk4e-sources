// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lstate.c

// Line 81: range 00000000152F57C4-00000000152F5812
unsigned int __fastcall makeseed(lua_State_0 *L)
{
  unsigned int h; // [rsp+Ch] [rbp-2Ch] BYREF
  char buff[32]; // [rsp+10h] [rbp-28h] BYREF

  h = time(0LL);
  *(_QWORD *)buff = L;
  *(_QWORD *)&buff[8] = &h;
  *(_QWORD *)&buff[16] = &luaO_nilobject_;
  *(_QWORD *)&buff[24] = lua_newstate;
  return luaS_hash(buff, 0x20uLL, h);
};

// Line 99: range 00000000152F5813-00000000152F583B
void __fastcall luaE_setdebt(global_State_0 *g, l_mem debt)
{
  l_mem v2; // rax
  l_mem v3; // rdx

  v2 = g->totalbytes + g->GCdebt;
  v3 = v2 - 0x7FFFFFFFFFFFFFFFLL;
  if ( v2 - 0x7FFFFFFFFFFFFFFFLL <= debt )
    v3 = debt;
  g->totalbytes = v2 - v3;
  g->GCdebt = v3;
};

// Line 108: range 00000000152F583C-00000000152F5878
CallInfo_0 *__fastcall luaE_extendCI(lua_State_0 *L)
{
  CallInfo_0 *result; // rax

  result = (CallInfo_0 *)luaM_realloc_(L, 0LL, 0LL, 0x48uLL);
  L->ci->next = result;
  result->previous = L->ci;
  result->next = 0LL;
  ++L->nci;
  return result;
};

// Line 122: range 00000000152F5879-00000000152F58C3
void __fastcall luaE_freeCI(lua_State_0 *L)
{
  CallInfo_0 *ci; // rax
  CallInfo *next; // rsi
  CallInfo *v3; // rbp

  ci = L->ci;
  next = ci->next;
  ci->next = 0LL;
  while ( next )
  {
    v3 = next->next;
    luaM_realloc_(L, next, 0x48uLL, 0LL);
    --L->nci;
    next = v3;
  }
};

// Line 137: range 00000000152F5B3B-00000000152F5B8A
void __fastcall luaE_shrinkCI(lua_State_0 *L)
{
  CallInfo_0 *i; // rbp
  CallInfo *next; // rsi
  CallInfo *v3; // rbx

  for ( i = L->ci; ; i = v3 )
  {
    next = i->next;
    if ( !next )
      break;
    v3 = next->next;
    if ( !v3 )
      break;
    luaM_realloc_(L, next, 0x48uLL, 0LL);
    --L->nci;
    i->next = v3;
    v3->previous = i;
  }
};

// Line 151: range 00000000152F5642-00000000152F56E7
void __fastcall stack_init(lua_State_0 *L1, lua_State_0 *L)
{
  int i; // edx
  StkId stack; // rax

  L1->stack = (StkId)luaM_realloc_(L, 0LL, 0LL, 0x280uLL);
  L1->stacksize = 40;
  for ( i = 0; i <= 39; ++i )
    L1->stack[i].tt_ = 0;
  stack = L1->stack;
  L1->stack_last = &stack[L1->stacksize - 5];
  L1->base_ci.previous = 0LL;
  L1->base_ci.next = 0LL;
  L1->base_ci.callstatus = 0;
  L1->base_ci.func = stack;
  L1->top = stack + 1;
  stack->tt_ = 0;
  L1->base_ci.top = L1->top + 20;
  L1->ci = &L1->base_ci;
};

// Line 172: range 00000000152F58C4-00000000152F58FA
void __fastcall freestack(lua_State_0 *L)
{
  if ( L->stack )
  {
    L->ci = &L->base_ci;
    luaE_freeCI(L);
    luaM_realloc_(L, L->stack, 16LL * L->stacksize, 0LL);
  }
};

// Line 184: range 00000000152F56E8-00000000152F576F
void __fastcall init_registry(lua_State_0 *L, global_State_0 *g)
{
  Table_0 *v2; // rbp
  TValue temp; // [rsp+0h] [rbp-28h] BYREF

  v2 = luaH_new(L);
  g->l_registry.value_.i = (lua_Integer)v2;
  g->l_registry.tt_ = 69;
  luaH_resize(L, v2, 2u, 0);
  temp.value_.i = (lua_Integer)L;
  temp.tt_ = 72;
  luaH_setint(L, v2, 1LL, &temp);
  temp.value_.i = (lua_Integer)luaH_new(L);
  temp.tt_ = 69;
  luaH_setint(L, v2, 2LL, &temp);
};

// Line 203: range 00000000152F5770-00000000152F57C3
void __fastcall f_luaopen(lua_State_0 *L, void *ud)
{
  global_State_0 *l_G; // rbp

  l_G = L->l_G;
  stack_init(L, L);
  init_registry(L, l_G);
  luaS_init(L);
  luaT_init(L);
  luaX_init(L);
  l_G->gcrunning = 1;
  l_G->version = lua_version(0LL);
};

// Line 222: range 00000000152F55B8-00000000152F5641
void __fastcall preinit_thread(lua_State_0 *L, global_State_0 *g)
{
  L->l_G = g;
  L->stack = 0LL;
  L->ci = 0LL;
  L->nci = 0;
  L->stacksize = 0;
  L->twups = L;
  L->errorJmp = 0LL;
  L->nCcalls = 0;
  L->hook = 0LL;
  L->hookmask = 0;
  L->basehookcount = 0;
  L->allowhook = 1;
  L->hookcount = 0;
  L->openupval = 0LL;
  L->nny = 1;
  L->status = 0;
  L->errfunc = 0LL;
};

// Line 242: range 00000000152F58FB-00000000152F5959
void __fastcall close_state(lua_State_0 *L)
{
  global_State_0 *l_G; // rbp

  l_G = L->l_G;
  luaF_close(L, L->stack);
  luaC_freeallobjects(L);
  luaM_realloc_(L, L->l_G->strt.hash, 8LL * L->l_G->strt.size, 0LL);
  freestack(L);
  l_G->frealloc(l_G->ud, &L[-1].hookmask, 1552LL, 0LL);
};

// Line 255: range 00000000152F5B8B-00000000152F5C63
lua_State_0 *__fastcall lua_newthread(lua_State_0 *L)
{
  global_State_0 *l_G; // r12
  char *v2; // rbp
  StkId top; // rax
  int basehookcount; // eax

  l_G = L->l_G;
  if ( l_G->GCdebt > 0 )
    luaC_step(L);
  v2 = (char *)luaM_realloc_(L, 0LL, 8uLL, 0xD8uLL);
  v2[17] = l_G->currentwhite & 3;
  v2[16] = 8;
  *((_QWORD *)v2 + 1) = l_G->allgc;
  l_G->allgc = (GCObject_0 *)(v2 + 8);
  top = L->top;
  top->value_.i = (lua_Integer)(v2 + 8);
  top->tt_ = 72;
  ++L->top;
  preinit_thread((lua_State_0 *)(v2 + 8), l_G);
  *((_DWORD *)v2 + 52) = L->hookmask;
  basehookcount = L->basehookcount;
  *((_DWORD *)v2 + 49) = basehookcount;
  *((_QWORD *)v2 + 22) = L->hook;
  *((_DWORD *)v2 + 50) = basehookcount;
  *(_QWORD *)v2 = *(_QWORD *)&l_G->mainthread[-1].hookmask;
  stack_init((lua_State_0 *)(v2 + 8), L);
  return (lua_State_0 *)(v2 + 8);
};

// Line 285: range 00000000152F5C68-00000000152F5CA3
void __fastcall luaE_freethread(lua_State_0 *L, lua_State_0 *L1)
{
  luaF_close(L1, L1->stack);
  freestack(L1);
  luaM_realloc_(L, &L1[-1].hookmask, 0xD8uLL, 0LL);
};

// Line 295: range 00000000152F595A-00000000152F5B39
lua_State_0 *__fastcall lua_newstate(lua_Alloc f, void *ud)
{
  char *v2; // rax
  char *v3; // rbx
  lua_State_0 *v4; // r13
  int i; // eax

  v2 = (char *)f(ud, 0LL, 8LL, 1552LL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = (lua_State_0 *)(v2 + 8);
  *((_QWORD *)v2 + 1) = 0LL;
  v2[16] = 8;
  v2[300] = 1;
  v2[17] = 1;
  preinit_thread((lua_State_0 *)(v2 + 8), (global_State_0 *)(v2 + 216));
  *((_QWORD *)v3 + 27) = f;
  *((_QWORD *)v3 + 28) = ud;
  *((_QWORD *)v3 + 52) = v4;
  *((_DWORD *)v3 + 74) = makeseed(v4);
  v3[303] = 0;
  *((_QWORD *)v3 + 32) = 0LL;
  *((_DWORD *)v3 + 68) = 0;
  *((_DWORD *)v3 + 69) = 0;
  *((_QWORD *)v3 + 33) = 0LL;
  *((_DWORD *)v3 + 72) = 0;
  *((_QWORD *)v3 + 51) = 0LL;
  *((_QWORD *)v3 + 53) = 0LL;
  v3[301] = 7;
  v3[302] = 0;
  *((_QWORD *)v3 + 47) = 0LL;
  *((_QWORD *)v3 + 46) = 0LL;
  *((_QWORD *)v3 + 40) = 0LL;
  *((_QWORD *)v3 + 38) = 0LL;
  *((_QWORD *)v3 + 39) = 0LL;
  *((_QWORD *)v3 + 42) = 0LL;
  *((_QWORD *)v3 + 41) = 0LL;
  *((_QWORD *)v3 + 45) = 0LL;
  *((_QWORD *)v3 + 44) = 0LL;
  *((_QWORD *)v3 + 43) = 0LL;
  *((_QWORD *)v3 + 48) = 0LL;
  *((_QWORD *)v3 + 29) = 1552LL;
  *((_QWORD *)v3 + 30) = 0LL;
  *((_DWORD *)v3 + 98) = 0;
  *((_DWORD *)v3 + 99) = 200;
  *((_DWORD *)v3 + 100) = 200;
  for ( i = 0; i <= 8; ++i )
    *(_QWORD *)&v3[8 * i + 632] = 0LL;
  if ( luaD_rawrunprotected(v4, f_luaopen, 0LL) )
  {
    close_state(v4);
    return 0LL;
  }
  return v4;
};

// Line 341: range 00000000152F5CA4-00000000152F5CBC
void __fastcall lua_close(lua_State_0 *L)
{
  close_state(L->l_G->mainthread);
};
