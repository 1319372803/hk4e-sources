// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/ldebug.c

// Line 47: range 00000000152EDCC6-00000000152EDCDF
int __fastcall currentpc(CallInfo_0 *ci)
{
  return ((ci->u.c.old_errfunc - *(_QWORD *)(*(_QWORD *)&ci->func->value_.gc[1].tt + 56LL)) >> 2) - 1;
};

// Line 51: range 00000000152EDCE0-00000000152EDD05
int __fastcall currentline(CallInfo_0 *ci)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(*(_QWORD *)&ci->func->value_.gc[1].tt + 72LL);
  if ( v1 )
    return *(_DWORD *)(v1 + 4LL * currentpc(ci));
  else
    return -1;
};

// Line 63: range 00000000152EDD07-00000000152EDD28
void __fastcall swapextra(lua_State_0 *L)
{
  CallInfo_0 *ci; // rax
  StkId func; // rdx

  if ( L->status == 1 )
  {
    ci = L->ci;
    func = ci->func;
    ci->func = (StkId)((char *)L->stack + ci->extra);
    ci->extra = (char *)func - (char *)L->stack;
  }
};

// Line 82: range 00000000152EE5C9-00000000152EE615
void __fastcall lua_sethook(lua_State_0 *L, lua_Hook func, int mask, int count)
{
  CallInfo_0 *ci; // rax

  if ( mask == 0 || func == 0LL )
  {
    LOBYTE(mask) = 0;
    func = 0LL;
  }
  ci = L->ci;
  if ( (ci->callstatus & 2) != 0 )
    L->oldpc = ci->u.l.savedpc;
  L->hook = func;
  L->basehookcount = count;
  L->hookcount = count;
  L->hookmask = (unsigned __int8)mask;
};

// Line 96: range 00000000152EE616-00000000152EE61D
lua_Hook __fastcall lua_gethook(lua_State_0 *L)
{
  return L->hook;
};

// Line 101: range 00000000152EE61E-00000000152EE624
int __fastcall lua_gethookmask(lua_State_0 *L)
{
  return L->hookmask;
};

// Line 106: range 00000000152EE625-00000000152EE62B
int __fastcall lua_gethookcount(lua_State_0 *L)
{
  return L->basehookcount;
};

// Line 113: range 00000000152EE62C-00000000152EE66F
int __fastcall lua_getstack(lua_State_0 *L, int level, lua_Debug_0 *ar)
{
  lua_State_0 *i; // rax

  if ( level < 0 )
    return 0;
  for ( i = (lua_State_0 *)L->ci; level > 0 && &L->base_ci != (CallInfo_0 *)i; i = (lua_State_0 *)i->top )
    --level;
  if ( level )
    return 0;
  if ( &L->base_ci == (CallInfo_0 *)i )
    return 0;
  ar->i_ci = (CallInfo *)i;
  return 1;
};

// Line 128: range 00000000152EDD2A-00000000152EDD47
const char *__fastcall upvalname(Proto_0 *p, int uv)
{
  TString_0 *name; // rax

  name = p->upvalues[uv].name;
  if ( name )
    return (const char *)&name[1];
  else
    return "?";
};

// Line 135: range 00000000152EDD48-00000000152EDD8A
const char *__fastcall findvararg(CallInfo_0 *ci, int n, StkId *pos)
{
  unsigned __int8 v3; // cl

  v3 = *(_BYTE *)(*(_QWORD *)&ci->func->value_.gc[1].tt + 10LL);
  if ( (int)(ci->u.l.base - ci->func - v3) <= n )
    return 0LL;
  *pos = &ci->func[n + (unsigned __int64)v3];
  return "(*vararg)";
};

// Line 146: range 00000000152EDF00-00000000152EDFAC
const char *__fastcall findlocal(lua_State_0 *L, CallInfo_0 *ci, int n, StkId *pos)
{
  StkId base; // r13
  int v7; // eax
  const char *result; // rax
  StkId top; // rax

  if ( (ci->callstatus & 2) != 0 )
  {
    if ( n < 0 )
      return findvararg(ci, -n, pos);
    base = ci->u.l.base;
    v7 = currentpc(ci);
    result = luaF_getlocalname(*(const Proto_0 **)&ci->func->value_.gc[1].tt, n, v7);
    if ( result )
      goto LABEL_12;
  }
  else
  {
    base = ci->func + 1;
  }
  if ( L->ci == ci )
    top = L->top;
  else
    top = ci->next->func;
  if ( top - base < n )
    return 0LL;
  if ( n > 0 )
  {
    result = "(*temporary)";
LABEL_12:
    *pos = &base[n - 1];
    return result;
  }
  return 0LL;
};

// Line 171: range 00000000152EE670-00000000152EE709
const char *__fastcall lua_getlocal(lua_State_0 *L, const lua_Debug_0 *ar, int n)
{
  const char *v4; // rbx
  StkId top; // rax
  __int64 v7; // rdi
  StkId v9; // rax
  StkId pos; // [rsp+8h] [rbp-20h] BYREF

  v4 = (const char *)ar;
  swapextra(L);
  if ( ar )
  {
    pos = 0LL;
    v4 = findlocal(L, ar->i_ci, n, &pos);
    if ( v4 )
    {
      top = L->top;
      v7 = *(_QWORD *)&pos->tt_;
      top->value_.i = pos->value_.i;
      *(_QWORD *)&top->tt_ = v7;
      ++L->top;
    }
  }
  else
  {
    v9 = L->top;
    if ( v9[-1].tt_ == 70 )
      v4 = luaF_getlocalname(*(const Proto_0 **)(v9[-1].value_.i + 24), n, 0);
  }
  swapextra(L);
  return v4;
};

// Line 195: range 00000000152EE70B-00000000152EE77C
const char *__fastcall lua_setlocal(lua_State_0 *L, const lua_Debug_0 *ar, int n)
{
  const char *v5; // rbp
  StkId top; // rax
  Value_0 v7; // rsi
  __int64 v8; // rdi
  TValue *v9; // rax
  TValue *io1; // [rsp+8h] [rbp-20h] BYREF

  io1 = 0LL;
  swapextra(L);
  v5 = findlocal(L, ar->i_ci, n, &io1);
  if ( v5 )
  {
    top = L->top;
    v7.gc = (GCObject_0 *)top[-1].value_;
    v8 = *(_QWORD *)&top[-1].tt_;
    v9 = io1;
    io1->value_ = v7;
    *(_QWORD *)&v9->tt_ = v8;
    --L->top;
  }
  swapextra(L);
  return v5;
};

// Line 211: range 00000000152EDFAE-00000000152EE031
void __fastcall funcinfo(lua_Debug_0 *ar, Closure_0 *cl_0)
{
  lua_CFunction f; // rdx
  __int64 v3; // rax
  const char *v4; // rax
  int v5; // eax
  const char *v6; // rax

  if ( !cl_0 || cl_0->c.tt == 38 )
  {
    ar->source = "=[C]";
    ar->linedefined = -1;
    ar->lastlinedefined = -1;
    ar->what = "C";
  }
  else
  {
    f = cl_0->c.f;
    v3 = *((_QWORD *)f + 13);
    if ( v3 )
      v4 = (const char *)(v3 + 24);
    else
      v4 = "'()+,-./:=?" + 9;
    ar->source = v4;
    v5 = *((_DWORD *)f + 10);
    ar->linedefined = v5;
    ar->lastlinedefined = *((_DWORD *)f + 11);
    if ( v5 )
      v6 = off_1B2354F1;
    else
      v6 = "main";
    ar->what = v6;
  }
  luaO_chunkid(ar->short_src, ar->source, 0x3CuLL);
};

// Line 229: range 00000000152EE471-00000000152EE514
void __fastcall collectvalidlines(lua_State_0 *L, Closure_0 *f)
{
  __int64 v2; // r14
  Table_0 *v3; // r13
  StkId top; // rax
  int i; // ebx
  TValue v; // [rsp+0h] [rbp-38h] BYREF

  if ( f && f->c.tt != 38 )
  {
    v2 = *((_QWORD *)f->c.f + 9);
    v3 = luaH_new(L);
    top = L->top;
    top->value_.i = (lua_Integer)v3;
    top->tt_ = 69;
    ++L->top;
    v.value_.b = 1;
    v.tt_ = 1;
    for ( i = 0; *((_DWORD *)f->c.f + 7) > i; ++i )
      luaH_setint(L, v3, *(int *)(v2 + 4LL * i), &v);
  }
  else
  {
    L->top->tt_ = 0;
    ++L->top;
  }
};

// Line 249: range 00000000152EE2B8-00000000152EE2FE
const char *__fastcall getfuncname(lua_State_0 *L, CallInfo_0 *ci, const char **name)
{
  unsigned __int16 callstatus; // ax
  CallInfo *previous; // rsi

  if ( !ci )
    return 0LL;
  callstatus = ci->callstatus;
  if ( (callstatus & 0x100) != 0 )
  {
    *name = "__gc";
    return "metamethod";
  }
  else if ( (callstatus & 0x20) != 0 )
  {
    return 0LL;
  }
  else
  {
    previous = ci->previous;
    if ( (previous->callstatus & 2) != 0 )
      return funcnamefromcode(L, previous, name);
    else
      return 0LL;
  }
};

// Line 263: range 00000000152EE2FF-00000000152EE428
int __fastcall auxgetinfo(lua_State_0 *L, const char *what, lua_Debug_0 *ar, Closure_0 *f, CallInfo_0 *ci)
{
  int v9; // r12d
  int v10; // eax
  unsigned __int8 nupvalues; // al
  char v12; // al
  const char *v13; // rax

  v9 = 1;
  while ( *what )
  {
    switch ( *what )
    {
      case 'L':
      case 'f':
        break;
      case 'S':
        funcinfo(ar, f);
        break;
      case 'l':
        if ( ci )
        {
          if ( (ci->callstatus & 2) != 0 )
            v10 = currentline(ci);
          else
            v10 = -1;
        }
        else
        {
          v10 = -1;
        }
        ar->currentline = v10;
        break;
      case 'n':
        v13 = getfuncname(L, ci, &ar->name);
        ar->namewhat = v13;
        if ( !v13 )
        {
          ar->namewhat = &off_1B23A528[4];
          ar->name = 0LL;
        }
        break;
      case 't':
        if ( ci )
          v12 = ci->callstatus & 0x20;
        else
          v12 = 0;
        ar->istailcall = v12;
        break;
      case 'u':
        if ( f )
          nupvalues = f->c.nupvalues;
        else
          nupvalues = 0;
        ar->nups = nupvalues;
        if ( !f || f->c.tt == 38 )
        {
          ar->isvararg = 1;
          ar->nparams = 0;
        }
        else
        {
          ar->isvararg = *((_BYTE *)f->c.f + 11);
          ar->nparams = *((_BYTE *)f->c.f + 10);
        }
        break;
      default:
        v9 = 0;
        break;
    }
    ++what;
  }
  return v9;
};

// Line 309: range 00000000152EE77D-00000000152EE850
int __fastcall lua_getinfo(lua_State_0 *L, const char *what, lua_Debug_0 *ar)
{
  const char *v4; // rbp
  CallInfo *i_ci; // r8
  StkId func; // r13
  Closure_0 *i; // r14
  int v9; // r12d
  StkId top; // rax
  __int64 v11; // rdi

  v4 = what;
  swapextra(L);
  if ( *what == 62 )
  {
    func = L->top - 1;
    v4 = what + 1;
    L->top = func;
    i_ci = 0LL;
  }
  else
  {
    i_ci = ar->i_ci;
    func = i_ci->func;
  }
  if ( (func->tt_ & 0x1F) == 6 )
    i = (Closure_0 *)func->value_.i;
  else
    i = 0LL;
  v9 = auxgetinfo(L, v4, ar, i, i_ci);
  if ( strchr(v4, 102) )
  {
    top = L->top;
    v11 = *(_QWORD *)&func->tt_;
    top->value_.i = func->value_.i;
    *(_QWORD *)&top->tt_ = v11;
    ++L->top;
  }
  swapextra(L);
  if ( strchr(v4, 76) )
    collectvalidlines(L, i);
  return v9;
};

// Line 355: range 00000000152EE429-00000000152EE46F
void __fastcall kname(Proto_0 *p, int pc, int c, const char **name)
{
  TValue *v5; // rdx
  const char *v6; // rax

  if ( (c & 0x100) != 0 )
  {
    BYTE1(c) &= ~1u;
    v5 = &p->k[c];
    if ( (v5->tt_ & 0xF) != 4 )
    {
LABEL_3:
      *name = "?";
      return;
    }
    *name = (const char *)(v5->value_.i + 24);
  }
  else
  {
    v6 = getobjname(p, pc, c, name);
    if ( !v6 || *v6 != 99 )
      goto LABEL_3;
  }
};

// Line 375: range 00000000152EDD8B-00000000152EDD97
int __fastcall filterpc(int pc, int jmptarget)
{
  int result; // eax

  result = pc;
  if ( pc < jmptarget )
    return -1;
  return result;
};

// Line 385: range 00000000152EDD99-00000000152EDE92
int __fastcall findsetreg(Proto_0 *p, int lastpc, int reg)
{
  int v5; // r14d
  int result; // eax
  int i; // ebx
  Instruction v8; // esi
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // edx
  Instruction v12; // esi

  v5 = 0;
  result = -1;
  for ( i = 0; i < lastpc; ++i )
  {
    v8 = p->code[i];
    v9 = v8 & 0x3F;
    v10 = (unsigned __int8)(v8 >> 6);
    if ( v9 > 0x25 )
    {
      if ( v9 == 41 )
      {
        if ( v10 + 1 >= reg )
          continue;
LABEL_4:
        result = filterpc(i, v5);
        continue;
      }
LABEL_19:
      if ( (luaP_opmodes[v8 & 0x3F] & 0x40) != 0 && v10 == reg )
        goto LABEL_4;
      continue;
    }
    if ( v9 >= 0x24 )
    {
      if ( v10 <= reg )
        goto LABEL_4;
      continue;
    }
    if ( v9 != 4 )
    {
      if ( v9 == 30 )
      {
        v11 = (v8 >> 14) + i - 131070;
        if ( lastpc >= v11 && i < v11 && v5 < v11 )
          v5 = (v8 >> 14) + i - 131070;
        continue;
      }
      goto LABEL_19;
    }
    v12 = v8 >> 23;
    if ( v10 <= reg && (int)(v12 + v10) >= reg )
      goto LABEL_4;
  }
  return result;
};

// Line 432: range 00000000152EE033-00000000152EE1B5
const char *__fastcall getobjname(Proto_0 *p, int lastpc, int reg, const char **name)
{
  const char *v6; // rax
  const char *v7; // rbx
  int v9; // eax
  int v10; // r12d
  Instruction *code; // rdx
  __int64 v12; // rcx
  Instruction v13; // esi
  int v14; // eax
  int v15; // ebx
  int v16; // esi
  const char *v17; // r13
  Instruction v18; // esi
  TValue *v19; // rax

  v6 = luaF_getlocalname(p, reg + 1, lastpc);
  *name = v6;
  if ( v6 )
    return "local";
  v7 = 0LL;
  v9 = findsetreg(p, lastpc, reg);
  v10 = v9;
  if ( v9 != -1 )
  {
    code = p->code;
    v12 = v9;
    v13 = code[v9];
    v14 = v13 & 0x3F;
    switch ( v13 & 0x3F )
    {
      case 0u:
        if ( (unsigned __int8)(v13 >> 6) > (int)(v13 >> 23) )
          v7 = getobjname(p, v10, v13 >> 23, name);
        break;
      case 1u:
      case 2u:
        if ( v14 == 1 )
          v18 = v13 >> 14;
        else
          v18 = code[v12 + 1] >> 6;
        v19 = &p->k[v18];
        if ( (v19->tt_ & 0xF) == 4 )
        {
          *name = (const char *)(v19->value_.i + 24);
          v7 = "constant";
        }
        break;
      case 5u:
        *name = upvalname(p, v13 >> 23);
        v7 = "upvalue";
        break;
      case 6u:
      case 7u:
        v15 = (v13 >> 14) & 0x1FF;
        v16 = v13 >> 23;
        if ( v14 == 7 )
          v17 = luaF_getlocalname(p, v16 + 1, v10);
        else
          v17 = upvalname(p, v16);
        kname(p, v10, v15, name);
        if ( v17 )
        {
          if ( !memcmp(v17, "_ENV", 5uLL) )
            v7 = "global";
          else
            v7 = "field";
        }
        else
        {
          v7 = "field";
        }
        break;
      case 0xCu:
        kname(p, v10, (v13 >> 14) & 0x1FF, name);
        v7 = "method";
        break;
      default:
        return v7;
    }
  }
  return v7;
};

// Line 492: range 00000000152EE1BA-00000000152EE2B6
const char *__fastcall funcnamefromcode(lua_State_0 *L, CallInfo_0 *ci, const char **name)
{
  Proto_0 *v4; // r13
  int v5; // eax
  Instruction v6; // edx
  const char *result; // rax
  int v8; // edx

  v4 = *(Proto_0 **)&ci->func->value_.gc[1].tt;
  v5 = currentpc(ci);
  v6 = v4->code[v5];
  if ( (ci->callstatus & 4) != 0 )
  {
    *name = "?";
    return "hook";
  }
  else
  {
    switch ( v6 & 0x3F )
    {
      case 6u:
      case 7u:
      case 0xCu:
        v8 = 0;
        goto LABEL_5;
      case 8u:
      case 0xAu:
        v8 = 1;
        goto LABEL_5;
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
        v8 = (v4->code[v5] & 0x3F) - 7;
        goto LABEL_5;
      case 0x19u:
        v8 = 18;
        goto LABEL_5;
      case 0x1Au:
        v8 = 19;
        goto LABEL_5;
      case 0x1Cu:
        v8 = 4;
        goto LABEL_5;
      case 0x1Du:
        v8 = 22;
        goto LABEL_5;
      case 0x1Fu:
        v8 = 5;
        goto LABEL_5;
      case 0x20u:
        v8 = 20;
        goto LABEL_5;
      case 0x21u:
        v8 = 21;
LABEL_5:
        *name = (const char *)&L->l_G->tmname[v8][1];
        result = "metamethod";
        break;
      case 0x24u:
      case 0x25u:
        result = getobjname(v4, v5, (unsigned __int8)(v6 >> 6), name);
        break;
      case 0x29u:
        *name = "for iterator";
        result = "for iterator";
        break;
      default:
        result = 0LL;
        break;
    }
  }
  return result;
};

// Line 547: range 00000000152EDE93-00000000152EDEB9
int __fastcall isinstack(CallInfo_0 *ci, const TValue *o)
{
  StkId base; // rax
  char *v3; // rsi

  base = ci->u.l.base;
  v3 = (char *)((char *)o - (char *)base);
  return (__int64)v3 >= 0 && (__int64)v3 < (char *)ci->top - (char *)base;
};

// Line 558: range 00000000152EDEBA-00000000152EDEFF
const char *__fastcall getupvalname(CallInfo_0 *ci, const TValue *o, const char **name)
{
  Value_0 v4; // rax
  int i; // esi

  v4.gc = ci->func->value_.gc;
  for ( i = 0; *(unsigned __int8 *)(v4.i + 10) > i; ++i )
  {
    if ( **(const TValue ***)(v4.i + 8LL * i + 32) == o )
    {
      *name = upvalname(*(Proto_0 **)(v4.i + 24), i);
      return "upvalue";
    }
  }
  return 0LL;
};

// Line 571: range 00000000152EE516-00000000152EE5C4
const char *__fastcall varinfo(lua_State_0 *L, const TValue *o)
{
  CallInfo_0 *ci; // r12
  const char *v4; // r13
  __int64 v5; // rbp
  int v6; // eax
  const char *name[6]; // [rsp+8h] [rbp-30h] BYREF

  name[0] = 0LL;
  ci = L->ci;
  if ( (ci->callstatus & 2) == 0 )
    return &off_1B23A528[4];
  v4 = getupvalname(L->ci, o, name);
  if ( !v4 && isinstack(ci, o) )
  {
    v5 = o - ci->u.l.base;
    v6 = currentpc(ci);
    v4 = getobjname(*(Proto_0 **)&ci->func->value_.gc[1].tt, v6, v5, name);
  }
  if ( v4 )
    return luaO_pushfstring(L, " (%s '%s')", v4, name[0]);
  else
    return &off_1B23A528[4];
};

// Line 585: range 00000000152EE9F1-00000000152EEA2D
void __fastcall __noreturn luaG_typeerror(lua_State_0 *L, const TValue *o, const char *op)
{
  const char *v4; // r13
  const char *v5; // rax

  v4 = luaT_objtypename(L, o);
  v5 = varinfo(L, o);
  luaG_runerror(L, "attempt to %s a %s value%s", op, v4, v5);
};

// Line 591: range 00000000152EEA32-00000000152EEA52
void __fastcall __noreturn luaG_concaterror(lua_State_0 *L, const TValue *p1, const TValue *p2)
{
  if ( (p1->tt_ & 0xFu) - 3 > 1 )
    p2 = p1;
  luaG_typeerror(L, p2, "concatenate");
};

// Line 598: range 00000000152EEA57-00000000152EEA9F
void __fastcall __noreturn luaG_opinterror(lua_State_0 *L, const TValue *p1, const TValue *p2, const char *msg)
{
  lua_Number temp[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( p1->tt_ == 3 )
  {
    temp[0] = p1->value_.n;
  }
  else if ( !luaV_tonumber_(p1, temp) )
  {
    p2 = p1;
  }
  luaG_typeerror(L, p2, msg);
};

// Line 609: range 00000000152EEAA1-00000000152EEAF9
void __fastcall __noreturn luaG_tointerror(lua_State_0 *L, const TValue *p1, const TValue *p2)
{
  const char *v4; // rax
  lua_Integer temp[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( p1->tt_ == 19 )
  {
    temp[0] = p1->value_.i;
  }
  else if ( !luaV_tointeger(p1, temp, 0) )
  {
    p2 = p1;
  }
  v4 = varinfo(L, p2);
  luaG_runerror(L, "number%s has no integer representation", v4);
};

// Line 617: range 00000000152EEAFB-00000000152EEB4D
void __fastcall __noreturn luaG_ordererror(lua_State_0 *L, const TValue *p1, const TValue *p2)
{
  const char *v4; // rbp
  const char *v5; // r12

  v4 = luaT_objtypename(L, p1);
  v5 = luaT_objtypename(L, p2);
  if ( !strcmp(v4, v5) )
    luaG_runerror(L, "attempt to compare two %s values", v4);
  luaG_runerror(L, "attempt to compare %s with %s", v4, v5);
};

// Line 629: range 00000000152EE855-00000000152EE8A7
const char *__fastcall luaG_addinfo(lua_State_0 *L, const char *msg, TString_0 *src, int line)
{
  char buff[60]; // [rsp+0h] [rbp-58h] BYREF

  if ( src )
    luaO_chunkid(buff, (const char *)&src[1], 0x3CuLL);
  else
    strcpy(buff, "?");
  return luaO_pushfstring(L, "%s:%d: %s", buff, (unsigned int)line, msg);
};

// Line 640: range 00000000152EE8A9-00000000152EE906
void __fastcall __noreturn luaG_errormsg(lua_State_0 *L)
{
  ptrdiff_t errfunc; // rax
  Value_0 *v3; // rax
  StkId top; // rdx
  Value_0 v5; // rdi
  StkId v6; // rsi

  errfunc = L->errfunc;
  if ( errfunc )
  {
    v3 = (Value_0 *)((char *)&L->stack->value_ + errfunc);
    *(__m128i *)L->top = _mm_loadu_si128((const __m128i *)&L->top[-1]);
    top = L->top;
    v5.gc = v3[1].gc;
    top[-1].value_ = (Value_0)v3->gc;
    *(Value_0 *)&top[-1].tt_ = v5;
    v6 = L->top;
    L->top = v6 + 1;
    luaD_callnoyield(L, v6 - 1, 1);
  }
  luaD_throw(L, 2);
};

// Line 652: range 00000000152EE908-00000000152EE9EF
void __noreturn luaG_runerror(lua_State_0 *L, const char *fmt, ...)
{
  CallInfo_0 *ci; // r12
  const char *v3; // rbp
  int v4; // eax
  va_list argp; // [rsp+8h] [rbp-E0h] BYREF

  ci = L->ci;
  if ( L->l_G->GCdebt > 0 )
    luaC_step(L);
  va_start(argp, fmt);
  v3 = luaO_pushvfstring(L, fmt, (__va_list_tag *)argp);
  if ( (ci->callstatus & 2) != 0 )
  {
    v4 = currentline(ci);
    luaG_addinfo(L, v3, *(TString_0 **)(*(_QWORD *)&ci->func->value_.gc[1].tt + 104LL), v4);
  }
  luaG_errormsg(L);
};

// Line 666: range 00000000152EEB52-00000000152EECA5
void __fastcall luaG_traceexec(lua_State_0 *L)
{
  CallInfo_0 *ci; // r12
  sig_atomic_t hookmask; // ebp
  int v4; // eax
  int v5; // r13d
  unsigned __int16 callstatus; // ax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  int v10; // edi
  const Instruction *oldpc; // rax
  int v12; // eax

  ci = L->ci;
  hookmask = L->hookmask;
  v4 = L->hookcount - 1;
  L->hookcount = v4;
  if ( v4 || (hookmask & 8) == 0 )
  {
    if ( (hookmask & 4) == 0 )
      return;
    v5 = 0;
  }
  else
  {
    L->hookcount = L->basehookcount;
    v5 = 1;
  }
  callstatus = ci->callstatus;
  if ( (callstatus & 0x40) != 0 )
  {
    ci->callstatus = callstatus & 0xFFBF;
  }
  else
  {
    if ( v5 )
      luaD_hook(L, 3, -1);
    if ( (hookmask & 4) != 0 )
    {
      v7 = *(_QWORD *)&ci->func->value_.gc[1].tt;
      v8 = *(_QWORD *)(v7 + 56);
      v9 = *(_QWORD *)(v7 + 72);
      v10 = v9 ? *(_DWORD *)(v9 + 4LL * (int)(((ci->u.c.old_errfunc - v8) >> 2) - 1)) : -1;
      if ( (unsigned int)((ci->u.c.old_errfunc - v8) >> 2) == 1
        || (oldpc = L->oldpc, ci->u.c.old_errfunc <= (unsigned __int64)oldpc)
        || (!v9 ? (v12 = -1) : (v12 = *(_DWORD *)(v9 + 4LL * (int)(((__int64)oldpc - v8) >> 2) - 4)), v10 != v12) )
      {
        luaD_hook(L, 2, v10);
      }
    }
    L->oldpc = ci->u.l.savedpc;
    if ( L->status == 1 )
    {
      if ( v5 )
        L->hookcount = 1;
      ci->u.c.old_errfunc -= 4LL;
      ci->callstatus |= 0x40u;
      ci->func = L->top - 1;
      luaD_throw(L, 1);
    }
  }
};
