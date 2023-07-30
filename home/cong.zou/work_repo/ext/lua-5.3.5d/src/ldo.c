// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/ldo.c

// Line 91: range 00000000152EEE93-00000000152EEF00
void __fastcall seterrorobj(lua_State_0 *L, int errcode, StkId oldtop)
{
  TString_0 *memerrmsg; // rax
  TString_0 *v5; // rax

  if ( errcode == 4 )
  {
    memerrmsg = L->l_G->memerrmsg;
    oldtop->value_.i = (lua_Integer)memerrmsg;
    oldtop->tt_ = memerrmsg->tt | 0x40;
  }
  else if ( errcode == 6 )
  {
    v5 = luaS_newlstr(L, "error in error handling", 0x17uLL);
    oldtop->value_.i = (lua_Integer)v5;
    oldtop->tt_ = v5->tt | 0x40;
  }
  else
  {
    *(__m128i *)oldtop = _mm_loadu_si128((const __m128i *)&L->top[-1]);
  }
  L->top = oldtop + 1;
};

// Line 110: range 00000000152EEFAD-00000000152EF03F
void __fastcall __noreturn luaD_throw(lua_State_0 *L, int errcode)
{
  lua_longjmp *errorJmp; // rax
  global_State_0 *l_G; // rbp
  lua_State *mainthread; // rax
  __m128i *top; // rdx
  CallInfo_0 *ci; // rax
  StkId v7; // rdx

  errorJmp = L->errorJmp;
  if ( errorJmp )
  {
    errorJmp->status = errcode;
    longjmp(L->errorJmp->b, 1);
  }
  l_G = L->l_G;
  L->status = errcode;
  mainthread = l_G->mainthread;
  if ( mainthread->errorJmp )
  {
    top = (__m128i *)mainthread->top;
    mainthread->top = (StkId)&top[1];
    *top = _mm_loadu_si128((const __m128i *)&L->top[-1]);
    luaD_throw(l_G->mainthread, errcode);
  }
  if ( l_G->panic )
  {
    seterrorobj(L, errcode, L->top);
    ci = L->ci;
    v7 = L->top;
    if ( ci->top < v7 )
      ci->top = v7;
    l_G->panic(L);
  }
  abort();
};

// Line 136: range 00000000152EF163-00000000152EF1E9
int __fastcall luaD_rawrunprotected(lua_State_0 *L, Pfunc f, void *ud)
{
  unsigned __int16 oldnCcalls; // [rsp+Eh] [rbp-FAh]
  lua_longjmp lj; // [rsp+20h] [rbp-E8h] BYREF

  oldnCcalls = L->nCcalls;
  lj.status = 0;
  lj.previous = L->errorJmp;
  L->errorJmp = &lj;
  if ( !_setjmp(lj.b) )
    f(L, ud);
  L->errorJmp = lj.previous;
  L->nCcalls = oldnCcalls;
  return lj.status;
};

// Line 161: range 00000000152EECAA-00000000152EED17
void __fastcall correctstack(lua_State_0 *L, TValue *oldstack)
{
  UpVal_0 *i; // rdx
  CallInfo_0 *j; // rax

  L->top = (StkId)((char *)L->stack + (char *)L->top - (char *)oldstack);
  for ( i = L->openupval; i; i = i->u.open.next )
    i->v = (StkId)((char *)L->stack + (char *)i->v - (char *)oldstack);
  for ( j = L->ci; j; j = j->previous )
  {
    j->top = (StkId)((char *)L->stack + (char *)j->top - (char *)oldstack);
    j->func = (StkId)((char *)L->stack + (char *)j->func - (char *)oldstack);
    if ( (j->callstatus & 2) != 0 )
      j->u.l.base = (StkId)((char *)L->stack + (char *)j->u.l.base - (char *)oldstack);
  }
};

// Line 177: range 00000000152EF1EA-00000000152EF261
void __fastcall luaD_reallocstack(lua_State_0 *L, int newsize)
{
  StkId stack; // r14
  int stacksize; // ebx

  stack = L->stack;
  stacksize = L->stacksize;
  L->stack = (StkId)luaM_realloc_(L, stack, 16LL * stacksize, 16LL * newsize);
  while ( stacksize < newsize )
    L->stack[stacksize++].tt_ = 0;
  L->stacksize = newsize;
  L->stack_last = &L->stack[newsize - 5];
  correctstack(L, stack);
};

// Line 191: range 00000000152EF262-00000000152EF2CD
void __fastcall luaD_growstack(lua_State_0 *L, int n)
{
  int stacksize; // eax
  int v3; // esi
  int v4; // eax

  stacksize = L->stacksize;
  if ( stacksize > 1000000 )
    luaD_throw(L, 6);
  v3 = n + L->top - L->stack + 5;
  v4 = 2 * stacksize;
  if ( v4 > 1000000 )
    v4 = 1000000;
  if ( v4 >= v3 )
    v3 = v4;
  if ( v3 > 1000000 )
  {
    luaD_reallocstack(L, 1000200);
    luaG_runerror(L, "stack overflow");
  }
  luaD_reallocstack(L, v3);
};

// Line 212: range 00000000152EED18-00000000152EED44
int __fastcall stackinuse(lua_State_0 *L)
{
  StkId top; // rcx
  CallInfo_0 *i; // rax

  top = L->top;
  for ( i = L->ci; i; i = i->previous )
  {
    if ( i->top > top )
      top = i->top;
  }
  return top - L->stack + 1;
};

// Line 221: range 00000000152EF2D2-00000000152EF33E
void __fastcall luaD_shrinkstack(lua_State_0 *L)
{
  int v1; // ebx
  int v2; // r12d

  v1 = stackinuse(L);
  v2 = v1 + v1 / 8 + 10;
  if ( v2 > 1000000 )
    v2 = 1000000;
  if ( L->stacksize <= 1000000 )
    luaE_shrinkCI(L);
  else
    luaE_freeCI(L);
  if ( v1 <= 999995 && L->stacksize > v2 )
    luaD_reallocstack(L, v2);
};

// Line 240: range 00000000152EF3C2-00000000152EF3EC
void __fastcall luaD_inctop(lua_State_0 *L)
{
  if ( (char *)L->stack_last - (char *)L->top <= 16 )
    luaD_growstack(L, 1);
  ++L->top;
};

// Line 253: range 00000000152EF3EE-00000000152EF4A1
void __fastcall luaD_hook(lua_State_0 *L, int event, int line)
{
  volatile lua_Hook hook; // r12
  CallInfo_0 *ci; // rbp
  StkId top; // rax
  StkId stack; // rcx
  signed __int64 v7; // r14
  signed __int64 v8; // r13
  lua_Debug_0 ar; // [rsp+0h] [rbp-A8h] BYREF

  hook = L->hook;
  if ( hook && L->allowhook )
  {
    ci = L->ci;
    top = L->top;
    stack = L->stack;
    v7 = (char *)top - (char *)stack;
    v8 = (char *)ci->top - (char *)stack;
    ar.event = event;
    ar.currentline = line;
    ar.i_ci = ci;
    if ( (char *)L->stack_last - (char *)top <= 320 )
      luaD_growstack(L, 20);
    ci->top = L->top + 20;
    L->allowhook = 0;
    ci->callstatus |= 4u;
    hook(L, &ar);
    L->allowhook = 1;
    ci->top = (StkId)((char *)L->stack + v8);
    L->top = (StkId)((char *)L->stack + v7);
    ci->callstatus &= ~4u;
  }
};

// Line 280: range 00000000152EF4A3-00000000152EF4FB
void __fastcall callhook(lua_State_0 *L, CallInfo_0 *ci)
{
  CallInfo *previous; // rax
  int v4; // esi

  ci->u.c.old_errfunc += 4LL;
  previous = ci->previous;
  if ( (previous->callstatus & 2) != 0 )
  {
    if ( (*(_DWORD *)(previous->u.c.old_errfunc - 4) & 0x3F) == 37 )
    {
      ci->callstatus |= 0x20u;
      v4 = 4;
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = 0;
  }
  luaD_hook(L, v4, -1);
  ci->u.c.old_errfunc -= 4LL;
};

// Line 295: range 00000000152EED45-00000000152EEDB1
StkId __fastcall adjust_varargs(lua_State_0 *L, Proto_0 *p, int actual)
{
  int numparams; // esi
  TValue *top; // r10
  int i; // eax
  int v6; // ecx
  StkId v7; // r8
  const __m128i *v8; // rcx
  StkId v9; // rdx

  numparams = p->numparams;
  top = L->top;
  for ( i = 0; ; ++i )
  {
    v6 = actual;
    if ( numparams <= actual )
      v6 = numparams;
    if ( i >= v6 )
      break;
    v7 = L->top;
    L->top = v7 + 1;
    v8 = (const __m128i *)&top[i - actual];
    *(__m128i *)v7 = _mm_loadu_si128(v8);
    v8->m128i_i32[2] = 0;
  }
  while ( i < numparams )
  {
    v9 = L->top;
    L->top = v9 + 1;
    v9->tt_ = 0;
    ++i;
  }
  return top;
};

// Line 315: range 00000000152EEF02-00000000152EEF63
void __fastcall tryfuncTM(lua_State_0 *L, StkId func)
{
  const __m128i *v2; // rax
  StkId i; // rdx

  v2 = (const __m128i *)luaT_gettmbyobj(L, func, TM_CALL_0);
  if ( (v2->m128i_i32[2] & 0xF) != 6 )
    luaG_typeerror(L, func, "call");
  for ( i = L->top; i > func; --i )
    *(__m128i *)i = _mm_loadu_si128((const __m128i *)&i[-1]);
  ++L->top;
  *(__m128i *)func = _mm_loadu_si128(v2);
};

// Line 336: range 00000000152EEDB2-00000000152EEE7B
int __fastcall moveresults(lua_State_0 *L, const TValue *firstResult, StkId res, int nres, int wanted)
{
  int j; // eax
  int k; // r8d
  int i; // ecx

  if ( !wanted )
    goto LABEL_11;
  if ( wanted == 1 )
  {
    if ( !nres )
      firstResult = &luaO_nilobject_;
    *(__m128i *)res = _mm_loadu_si128((const __m128i *)firstResult);
    goto LABEL_11;
  }
  if ( wanted != -1 )
  {
    if ( wanted <= nres )
    {
      for ( i = 0; i < wanted; ++i )
        res[i] = (TValue)_mm_loadu_si128((const __m128i *)&firstResult[i]);
    }
    else
    {
      for ( j = 0; j < nres; ++j )
        res[j] = (TValue)_mm_loadu_si128((const __m128i *)&firstResult[j]);
      while ( j < wanted )
        res[j++].tt_ = 0;
    }
LABEL_11:
    L->top = &res[wanted];
    return 1;
  }
  for ( k = 0; k < nres; ++k )
    res[k] = (TValue)_mm_loadu_si128((const __m128i *)&firstResult[k]);
  L->top = &res[nres];
  return 0;
};

// Line 376: range 00000000152EF4FC-00000000152EF56F
int __fastcall luaD_poscall(lua_State_0 *L, CallInfo_0 *ci, StkId firstResult, int nres)
{
  const TValue *v5; // rsi
  int nresults; // r14d
  sig_atomic_t hookmask; // eax
  TValue *func; // rdx
  signed __int64 v11; // r12

  v5 = firstResult;
  nresults = ci->nresults;
  hookmask = L->hookmask;
  if ( (hookmask & 6) != 0 )
  {
    if ( (hookmask & 2) != 0 )
    {
      v11 = (char *)firstResult - (char *)L->stack;
      luaD_hook(L, 1, -1);
      v5 = (StkId)((char *)L->stack + v11);
    }
    L->oldpc = ci->previous->u.l.savedpc;
  }
  func = ci->func;
  L->ci = ci->previous;
  return moveresults(L, v5, func, nres, nresults);
};

// Line 413: range 00000000152EF625-00000000152EF8A0
int __fastcall luaD_precall(lua_State_0 *L, StkId func, int nresults)
{
  TValue *v3; // rbp
  int v5; // eax
  signed __int64 v6; // rbp
  int result; // eax
  __int64 (__fastcall *i)(lua_State_0 *); // r14
  signed __int64 v9; // rbp
  CallInfo *v10; // r12
  int v11; // eax
  Proto_0 *v12; // r14
  int v13; // r12d
  lu_byte maxstacksize; // r15
  signed __int64 v15; // rbp
  StkId v16; // r12
  StkId top; // rax
  CallInfo *next; // rsi
  TValue *v19; // r15

  v3 = func;
  v5 = func->tt_ & 0x3F;
  if ( v5 == 22 )
  {
    i = (__int64 (__fastcall *)(lua_State_0 *))func->value_.i;
  }
  else
  {
    if ( v5 != 38 )
    {
      if ( v5 == 6 )
      {
        v12 = *(Proto_0 **)(func->value_.i + 24);
        v13 = L->top - func - 1;
        maxstacksize = v12->maxstacksize;
        if ( L->stack_last - L->top <= maxstacksize )
        {
          v15 = (char *)func - (char *)L->stack;
          if ( L->l_G->GCdebt > 0 )
            luaC_step(L);
          luaD_growstack(L, maxstacksize);
          v3 = (StkId)((char *)L->stack + v15);
        }
        if ( v12->is_vararg )
        {
          v16 = adjust_varargs(L, v12, v13);
        }
        else
        {
          while ( v12->numparams > v13 )
          {
            top = L->top;
            L->top = top + 1;
            top->tt_ = 0;
            ++v13;
          }
          v16 = v3 + 1;
        }
        next = L->ci->next;
        if ( !next )
          next = luaE_extendCI(L);
        L->ci = next;
        next->nresults = nresults;
        next->func = v3;
        next->u.l.base = v16;
        v19 = &v16[maxstacksize];
        next->top = v19;
        L->top = v19;
        next->u.c.old_errfunc = (ptrdiff_t)v12->code;
        next->callstatus = 2;
        result = L->hookmask & 1;
        if ( result )
        {
          callhook(L, next);
          return 0;
        }
      }
      else
      {
        if ( (char *)L->stack_last - (char *)L->top <= 16 )
        {
          v6 = (char *)func - (char *)L->stack;
          if ( L->l_G->GCdebt > 0 )
            luaC_step(L);
          luaD_growstack(L, 1);
          v3 = (StkId)((char *)L->stack + v6);
        }
        tryfuncTM(L, v3);
        return luaD_precall(L, v3, nresults);
      }
      return result;
    }
    i = *(__int64 (__fastcall **)(lua_State_0 *))(func->value_.i + 24);
  }
  if ( (char *)L->stack_last - (char *)L->top <= 320 )
  {
    v9 = (char *)func - (char *)L->stack;
    if ( L->l_G->GCdebt > 0 )
      luaC_step(L);
    luaD_growstack(L, 20);
    v3 = (StkId)((char *)L->stack + v9);
  }
  v10 = L->ci->next;
  if ( !v10 )
    v10 = luaE_extendCI(L);
  L->ci = v10;
  v10->nresults = nresults;
  v10->func = v3;
  v10->top = L->top + 20;
  v10->callstatus = 0;
  if ( (L->hookmask & 1) != 0 )
    luaD_hook(L, 0, -1);
  v11 = i(L);
  luaD_poscall(L, v10, &L->top[-v11], v11);
  return 1;
};

// Line 481: range 00000000152EF044-00000000152EF074
void __fastcall stackerror(lua_State_0 *L)
{
  unsigned __int16 nCcalls; // ax

  nCcalls = L->nCcalls;
  if ( nCcalls == 200 )
    luaG_runerror(L, "C stack overflow");
  if ( nCcalls > 0xE0u )
    luaD_throw(L, 6);
};

// Line 495: range 00000000152EF944-00000000152EF99F
void __fastcall luaD_call(lua_State_0 *L, StkId func, int nResults)
{
  unsigned __int16 v4; // ax

  v4 = L->nCcalls + 1;
  L->nCcalls = v4;
  if ( v4 > 0xC7u )
    stackerror(L);
  if ( !luaD_precall(L, func, nResults) )
    luaV_execute(L);
  --L->nCcalls;
};

// Line 507: range 00000000152EF9A1-00000000152EF9CD
void __fastcall luaD_callnoyield(lua_State_0 *L, StkId func, int nResults)
{
  ++L->nny;
  luaD_call(L, func, nResults);
  --L->nny;
};

// Line 518: range 00000000152EF571-00000000152EF5DD
void __fastcall finishCcall(lua_State_0 *L, int status)
{
  CallInfo_0 *ci; // rbp
  unsigned __int16 callstatus; // ax
  int v4; // eax
  CallInfo_0 *v5; // rax
  StkId top; // rdx

  ci = L->ci;
  callstatus = ci->callstatus;
  if ( (callstatus & 0x10) != 0 )
  {
    ci->callstatus = callstatus & 0xFFEF;
    L->errfunc = ci->u.c.old_errfunc;
  }
  if ( ci->nresults == -1 )
  {
    v5 = L->ci;
    top = L->top;
    if ( v5->top < top )
      v5->top = top;
  }
  v4 = ((__int64 (__fastcall *)(lua_State_0 *, int, lua_KContext))ci->u.l.base)(L, status, ci->u.c.ctx);
  luaD_poscall(L, ci, &L->top[-v4], v4);
};

// Line 548: range 00000000152EF5DF-00000000152EF624
void __fastcall unroll(lua_State_0 *L, void *ud)
{
  CallInfo_0 *ci; // rax

  if ( ud )
    finishCcall(L, *(_DWORD *)ud);
  while ( 1 )
  {
    ci = L->ci;
    if ( ci == &L->base_ci )
      break;
    if ( (ci->callstatus & 2) != 0 )
    {
      luaV_finishOp(L);
      luaV_execute(L);
    }
    else
    {
      finishCcall(L, 1);
    }
  }
};

// Line 568: range 00000000152EEE7D-00000000152EEE92
CallInfo_0 *__fastcall findpcall(lua_State_0 *L)
{
  CallInfo_0 *result; // rax

  for ( result = L->ci; result && (result->callstatus & 0x10) == 0; result = result->previous )
    ;
  return result;
};

// Line 581: range 00000000152EF340-00000000152EF3C0
int __fastcall recover(lua_State_0 *L, int status)
{
  CallInfo_0 *v2; // rax
  CallInfo_0 *v3; // rbp
  TValue *v4; // r13

  v2 = findpcall(L);
  if ( !v2 )
    return 0;
  v3 = v2;
  v4 = (StkId)((char *)L->stack + v2->extra);
  luaF_close(L, v4);
  seterrorobj(L, status, v4);
  L->ci = v3;
  L->allowhook = v3->callstatus & 1;
  L->nny = 0;
  luaD_shrinkstack(L);
  L->errfunc = v3->u.c.old_errfunc;
  return 1;
};

// Line 603: range 00000000152EEF64-00000000152EEFAC
int __fastcall resume_error(lua_State_0 *L, const char *msg, int narg)
{
  TValue *v3; // rbp
  TString_0 *v4; // rax

  v3 = &L->top[-narg];
  L->top = v3;
  v4 = luaS_new(L, msg);
  v3->value_.i = (lua_Integer)v4;
  v3->tt_ = v4->tt | 0x40;
  ++L->top;
  return 2;
};

// Line 619: range 00000000152EF8A5-00000000152EF942
void __fastcall resume(lua_State_0 *L, void *ud)
{
  int v2; // ecx
  TValue *v3; // rdx
  CallInfo_0 *ci; // rbp
  __int64 (__fastcall *base)(lua_State_0 *, __int64, lua_KContext); // rax

  v2 = *(_DWORD *)ud;
  v3 = &L->top[-*(int *)ud];
  ci = L->ci;
  if ( L->status )
  {
    L->status = 0;
    ci->func = (StkId)((char *)L->stack + ci->extra);
    if ( (ci->callstatus & 2) != 0 )
    {
      luaV_execute(L);
    }
    else
    {
      base = (__int64 (__fastcall *)(lua_State_0 *, __int64, lua_KContext))ci->u.l.base;
      if ( base )
      {
        v2 = base(L, 1LL, ci->u.c.ctx);
        v3 = &L->top[-v2];
      }
      luaD_poscall(L, ci, v3, v2);
    }
    unroll(L, 0LL);
  }
  else if ( !luaD_precall(L, v3 - 1, -1) )
  {
    luaV_execute(L);
  }
};

// Line 648: range 00000000152EF9CE-00000000152EFAEE
int __fastcall lua_resume(lua_State_0 *L, lua_State_0 *from, int nargs)
{
  unsigned __int16 nny; // bp
  lu_byte v4; // al
  unsigned __int16 v6; // ax
  int v7; // esi
  int nargsa[4]; // [rsp+Ch] [rbp-2Ch] BYREF
  int status[7]; // [rsp+1Ch] [rbp-1Ch] BYREF

  nargsa[0] = nargs;
  nny = L->nny;
  v4 = L->status;
  if ( v4 )
  {
    if ( v4 != 1 )
      return resume_error(L, "cannot resume dead coroutine", nargsa[0]);
  }
  else if ( L->ci != &L->base_ci )
  {
    return resume_error(L, "cannot resume non-suspended coroutine", nargs);
  }
  if ( from )
    v6 = from->nCcalls + 1;
  else
    v6 = 1;
  L->nCcalls = v6;
  if ( v6 > 0xC7u )
    return resume_error(L, "C stack overflow", nargsa[0]);
  L->nny = 0;
  status[0] = luaD_rawrunprotected(L, resume, nargsa);
  if ( status[0] == -1 )
  {
    status[0] = 2;
  }
  else
  {
    while ( status[0] > 1 && recover(L, status[0]) )
      status[0] = luaD_rawrunprotected(L, unroll, status);
    v7 = status[0];
    if ( status[0] > 1 )
    {
      L->status = status[0];
      seterrorobj(L, v7, L->top);
      L->ci->top = L->top;
    }
  }
  L->nny = nny;
  --L->nCcalls;
  return status[0];
};

// Line 688: range 00000000152EFAF0-00000000152EFAFE
int __fastcall lua_isyieldable(lua_State_0 *L)
{
  return L->nny == 0;
};

// Line 693: range 00000000152EFAFF-00000000152EFB8C
int __fastcall lua_yieldk(lua_State_0 *L, int nresults, lua_KContext ctx, lua_KFunction k)
{
  CallInfo_0 *ci; // r8

  ci = L->ci;
  if ( L->nny )
  {
    if ( L->l_G->mainthread != L )
      luaG_runerror(L, "attempt to yield across a C-call boundary", ctx, k, ci);
    luaG_runerror(L, "attempt to yield from outside a coroutine", ctx, k, ci);
  }
  L->status = 1;
  ci->extra = (char *)ci->func - (char *)L->stack;
  if ( (ci->callstatus & 2) == 0 )
  {
    ci->u.l.base = (StkId)k;
    if ( k )
      ci->u.c.ctx = ctx;
    ci->func = (StkId)((char *)L->top - 16 - 16LL * nresults);
    luaD_throw(L, 1);
  }
  return 0;
};

// Line 722: range 00000000152EFB91-00000000152EFC2F
int __fastcall luaD_pcall(lua_State_0 *L, Pfunc func, void *u, ptrdiff_t old_top, ptrdiff_t ef)
{
  CallInfo_0 *ci; // r15
  lu_byte allowhook; // r14
  unsigned __int16 nny; // r13
  ptrdiff_t errfunc; // r12
  int v9; // ebp
  TValue *oldtopa; // [rsp+8h] [rbp-40h]

  ci = L->ci;
  allowhook = L->allowhook;
  nny = L->nny;
  errfunc = L->errfunc;
  L->errfunc = ef;
  v9 = luaD_rawrunprotected(L, func, u);
  if ( v9 )
  {
    oldtopa = (StkId)((char *)L->stack + old_top);
    luaF_close(L, oldtopa);
    seterrorobj(L, v9, oldtopa);
    L->ci = ci;
    L->allowhook = allowhook;
    L->nny = nny;
    luaD_shrinkstack(L);
  }
  L->errfunc = errfunc;
  return v9;
};

// Line 758: range 00000000152EF079-00000000152EF0C0
void __fastcall checkmode(lua_State_0 *L, const char *mode, const char *x)
{
  if ( mode )
  {
    if ( !strchr(mode, *x) )
    {
      luaO_pushfstring(L, "attempt to load a %s chunk (mode is '%s')", x, mode);
      luaD_throw(L, 3);
    }
  }
};

// Line 766: range 00000000152EF0C1-00000000152EF161
void __fastcall f_parser(lua_State_0 *L, void *ud)
{
  __int64 v2; // rax
  unsigned __int8 *v3; // rax
  int v4; // r12d
  LClosure_0 *v5; // rsi

  v2 = **(_QWORD **)ud;
  **(_QWORD **)ud = v2 - 1;
  if ( v2 )
  {
    v3 = *(unsigned __int8 **)(*(_QWORD *)ud + 8LL);
    *(_QWORD *)(*(_QWORD *)ud + 8LL) = v3 + 1;
    v4 = *v3;
  }
  else
  {
    v4 = luaZ_fill(*(ZIO **)ud);
  }
  if ( v4 == 27 )
  {
    checkmode(L, *((const char **)ud + 10), "binary");
    v5 = luaU_undump(L, *(ZIO **)ud, *((const char **)ud + 11));
  }
  else
  {
    checkmode(L, *((const char **)ud + 10), "text");
    v5 = luaY_parser(
           L,
           *(ZIO **)ud,
           (Mbuffer_0 *)((char *)ud + 8),
           (Dyndata_0 *)((char *)ud + 32),
           *((const char **)ud + 11),
           v4);
  }
  luaF_initupvals(L, v5);
};

// Line 784: range 00000000152EFC31-00000000152EFD52
int __fastcall luaD_protectedparser(lua_State_0 *L, ZIO *z, const char *name, const char *mode)
{
  int v4; // ebp
  ZIO *v6; // [rsp+0h] [rbp-78h] BYREF
  void *block; // [rsp+8h] [rbp-70h]
  size_t osize; // [rsp+18h] [rbp-60h]
  void *v9; // [rsp+20h] [rbp-58h]
  int v10; // [rsp+2Ch] [rbp-4Ch]
  void *v11; // [rsp+30h] [rbp-48h]
  int v12; // [rsp+3Ch] [rbp-3Ch]
  void *v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+4Ch] [rbp-2Ch]
  const char *modea; // [rsp+50h] [rbp-28h]
  const char *namea; // [rsp+58h] [rbp-20h]

  ++L->nny;
  v6 = z;
  namea = name;
  modea = mode;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 0LL;
  v14 = 0;
  block = 0LL;
  osize = 0LL;
  v4 = luaD_pcall(L, f_parser, &v6, (char *)L->top - (char *)L->stack, L->errfunc);
  block = luaM_realloc_(L, block, osize, 0LL);
  osize = 0LL;
  luaM_realloc_(L, v9, 2LL * v10, 0LL);
  luaM_realloc_(L, v11, 24LL * v12, 0LL);
  luaM_realloc_(L, v13, 24LL * v14, 0LL);
  --L->nny;
  return v4;
};
