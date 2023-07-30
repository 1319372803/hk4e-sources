// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lparser.c

// Line 67: range 00000000152F33AC-00000000152F33B7
void __fastcall __noreturn semerror(LexState_0 *ls, const char *msg)
{
  ls->t.token = 0;
  luaX_syntaxerror(ls, msg);
};

// Line 73: range 00000000152F3946-00000000152F396B
void __fastcall __noreturn error_expected(LexState_0 *ls, int token)
{
  const char *v2; // rax
  const char *v3; // rax

  v2 = luaX_token2str(ls, token);
  v3 = luaO_pushfstring(ls->L, "%s expected", v2);
  luaX_syntaxerror(ls, v3);
};

// Line 79: range 00000000152F30CC-00000000152F3130
void __fastcall __noreturn errorlimit(FuncState_0 *fs_0, int limit, const char *what)
{
  lua_State_0 *L; // r13
  __int64 linedefined; // rdx
  const char *v6; // r8
  const char *v7; // rax

  L = fs_0->ls->L;
  linedefined = (unsigned int)fs_0->f->linedefined;
  if ( (_DWORD)linedefined )
    v6 = luaO_pushfstring(fs_0->ls->L, "function at line %d", linedefined);
  else
    v6 = "main function";
  v7 = luaO_pushfstring(L, "too many %s (limit is %d) in %s", what, (unsigned int)limit, v6);
  luaX_syntaxerror(fs_0->ls, v7);
};

// Line 93: range 00000000152F3132-00000000152F3140
void __fastcall checklimit(FuncState_0 *fs_0, int v, int l, const char *what)
{
  if ( v > l )
    errorlimit(fs_0, l, what);
};

// Line 98: range 00000000152F2EB9-00000000152F2ED6
int __fastcall testnext(LexState_0 *ls, int c)
{
  if ( ls->t.token != c )
    return 0;
  luaX_next(ls);
  return 1;
};

// Line 107: range 00000000152F3970-00000000152F397A
void __fastcall check(LexState_0 *ls, int c)
{
  if ( ls->t.token != c )
    error_expected(ls, c);
};

// Line 112: range 00000000152F397F-00000000152F3991
void __fastcall checknext(LexState_0 *ls, int c)
{
  check(ls, c);
  luaX_next(ls);
};

// Line 122: range 00000000152F3BF7-00000000152F3C6E
void __fastcall check_match(LexState_0 *ls, int what, int who, int where)
{
  const char *v6; // r12
  const char *v7; // rax
  const char *v8; // rax

  if ( !testnext(ls, what) )
  {
    if ( ls->linenumber != where )
    {
      v6 = luaX_token2str(ls, who);
      v7 = luaX_token2str(ls, what);
      v8 = luaO_pushfstring(ls->L, "%s expected (to close %s at line %d)", v7, v6, (unsigned int)where);
      luaX_syntaxerror(ls, v8);
    }
    error_expected(ls, what);
  }
};

// Line 135: range 00000000152F3992-00000000152F39BA
TString_0 *__fastcall str_checkname(LexState_0 *ls)
{
  TString_0 *ts; // rbp

  check(ls, 292);
  ts = ls->t.seminfo.ts;
  luaX_next(ls);
  return ts;
};

// Line 145: range 00000000152F2B7A-00000000152F2B8D
void __fastcall init_exp(expdesc_0 *e, expkind k, int i)
{
  e->t = -1;
  e->f = -1;
  e->k = k;
  e->u.info = i;
};

// Line 151: range 00000000152F3459-00000000152F3479
void __fastcall codestring(LexState_0 *ls, expdesc_0 *e, TString_0 *s)
{
  int v3; // eax

  v3 = luaK_stringK(ls->fs, s);
  init_exp(e, VK, v3);
};

// Line 156: range 00000000152F39BB-00000000152F39E0
void __fastcall checkname(LexState_0 *ls, expdesc_0 *e)
{
  TString_0 *v2; // rax

  v2 = str_checkname(ls);
  codestring(ls, e, v2);
};

// Line 161: range 00000000152F301D-00000000152F30CA
int __fastcall registerlocalvar(LexState_0 *ls, TString_0 *varname)
{
  FuncState *fs; // r12
  Proto_0 *f; // rbp
  int sizelocvars; // ebx
  int result; // eax

  fs = ls->fs;
  f = fs->f;
  sizelocvars = fs->f->sizelocvars;
  if ( fs->nlocvars >= sizelocvars )
    f->locvars = (LocVar_0 *)luaM_growaux_(ls->L, f->locvars, &f->sizelocvars, 0x10uLL, 0x7FFF, "local variables");
  while ( f->sizelocvars > sizelocvars )
    f->locvars[sizelocvars++].varname = 0LL;
  f->locvars[fs->nlocvars].varname = varname;
  if ( (f->marked & 4) != 0 && (varname->marked & 3) != 0 )
    luaC_barrier_(ls->L, (GCObject_0 *)f, (GCObject_0 *)varname);
  LOWORD(result) = fs->nlocvars;
  fs->nlocvars = result + 1;
  return (__int16)result;
};

// Line 175: range 00000000152F3328-00000000152F33AA
void __fastcall new_localvar(LexState_0 *ls, TString_0 *name)
{
  FuncState *fs; // r14
  Dyndata *dyd; // rbx
  __int16 v4; // bp
  int v5; // r13d
  int n; // eax

  fs = ls->fs;
  dyd = ls->dyd;
  v4 = registerlocalvar(ls, name);
  v5 = dyd->actvar.n + 1;
  checklimit(fs, v5 - fs->firstlocal, 200, "local variables");
  if ( v5 >= dyd->actvar.size )
    dyd->actvar.arr = (Vardesc_0 *)luaM_growaux_(
                                     ls->L,
                                     dyd->actvar.arr,
                                     &dyd->actvar.size,
                                     2uLL,
                                     0x7FFFFFFF,
                                     "local variables");
  n = dyd->actvar.n;
  dyd->actvar.n = n + 1;
  dyd->actvar.arr[n].idx = v4;
};

// Line 187: range 00000000152F3531-00000000152F3546
void __fastcall new_localvarliteral_(LexState_0 *ls, const char *name, size_t sz)
{
  TString_0 *v3; // rax

  v3 = luaX_newstring(ls, name, sz);
  new_localvar(ls, v3);
};

// Line 196: range 00000000152F2B8E-00000000152F2BB2
LocVar_0 *__fastcall getlocvar(FuncState_0 *fs_0, int i)
{
  return &fs_0->f->locvars[fs_0->ls->dyd->actvar.arr[fs_0->firstlocal + i].idx];
};

// Line 202: range 00000000152F2BB3-00000000152F2BDE
void __fastcall adjustlocalvars(LexState_0 *ls, int nvars)
{
  int v2; // ebx
  FuncState *fs; // rbp

  v2 = nvars;
  fs = ls->fs;
  fs->nactvar += nvars;
  while ( v2 )
    getlocvar(fs, (unsigned int)fs->nactvar - v2--)->startpc = fs->pc;
};

// Line 211: range 00000000152F2BDF-00000000152F2C20
void __fastcall removevars(FuncState_0 *fs_0, int tolevel)
{
  lu_byte nactvar; // si
  lu_byte v4; // si

  fs_0->ls->dyd->actvar.n -= fs_0->nactvar - tolevel;
  while ( 1 )
  {
    nactvar = fs_0->nactvar;
    if ( nactvar <= tolevel )
      break;
    v4 = nactvar - 1;
    fs_0->nactvar = v4;
    getlocvar(fs_0, v4)->endpc = fs_0->pc;
  }
};

// Line 220: range 00000000152F2C21-00000000152F2C4C
int __fastcall searchupvalue(FuncState_0 *fs_0, TString_0 *name)
{
  int result; // eax

  for ( result = 0; fs_0->nups > result; ++result )
  {
    if ( fs_0->f->upvalues[result].name == name )
      return result;
  }
  return -1;
};

// Line 228: range 00000000152F3145-00000000152F3246
int __fastcall newupvalue(FuncState_0 *fs_0, TString_0 *name, expdesc_0 *v)
{
  Proto_0 *f; // rbp
  int sizeupvalues; // ebx
  int nups; // r15d
  int result; // eax

  f = fs_0->f;
  sizeupvalues = fs_0->f->sizeupvalues;
  nups = fs_0->nups;
  checklimit(fs_0, nups + 1, 255, "upvalues");
  if ( nups >= sizeupvalues )
    f->upvalues = (Upvaldesc_0 *)luaM_growaux_(fs_0->ls->L, f->upvalues, &f->sizeupvalues, 0x10uLL, 255, "upvalues");
  while ( f->sizeupvalues > sizeupvalues )
    f->upvalues[sizeupvalues++].name = 0LL;
  f->upvalues[fs_0->nups].instack = v->k == VLOCAL;
  f->upvalues[fs_0->nups].idx = v->u.info;
  f->upvalues[fs_0->nups].name = name;
  if ( (f->marked & 4) != 0 && (name->marked & 3) != 0 )
    luaC_barrier_(fs_0->ls->L, (GCObject_0 *)f, (GCObject_0 *)name);
  LOBYTE(result) = fs_0->nups;
  fs_0->nups = result + 1;
  return (unsigned __int8)result;
};

// Line 244: range 00000000152F2C4D-00000000152F2C81
int __fastcall searchvar(FuncState_0 *fs_0, TString_0 *n)
{
  int i; // ebx

  for ( i = fs_0->nactvar - 1; i >= 0; --i )
  {
    if ( getlocvar(fs_0, i)->varname == n )
      return i;
  }
  return -1;
};

// Line 259: range 00000000152F2C82-00000000152F2C97
void __fastcall markupval(FuncState_0 *fs_0, int level)
{
  BlockCnt *i; // rax

  for ( i = fs_0->bl; i->nactvar > level; i = i->previous )
    ;
  i->upval = 1;
};

// Line 270: range 00000000152F3248-00000000152F32F2
void __fastcall singlevaraux(FuncState_0 *fs_0, TString_0 *n, expdesc_0 *var, int base)
{
  int v6; // eax
  int v7; // r13d
  int v8; // eax

  if ( !fs_0 )
  {
    init_exp(var, VVOID, 0);
    return;
  }
  v6 = searchvar(fs_0, n);
  v7 = v6;
  if ( v6 >= 0 )
  {
    init_exp(var, VLOCAL, v6);
    if ( !base )
      markupval(fs_0, v7);
  }
  else
  {
    v8 = searchupvalue(fs_0, n);
    if ( v8 >= 0 )
    {
LABEL_4:
      init_exp(var, VUPVAL, v8);
      return;
    }
    singlevaraux(fs_0->prev, n, var, 0);
    if ( var->k )
    {
      v8 = newupvalue(fs_0, n, var);
      goto LABEL_4;
    }
  }
};

// Line 295: range 00000000152F3AD7-00000000152F3B46
void __fastcall singlevar(LexState_0 *ls, expdesc_0 *var)
{
  TString_0 *v2; // r12
  FuncState *fs; // r13
  expdesc_0 key; // [rsp+0h] [rbp-48h] BYREF

  v2 = str_checkname(ls);
  fs = ls->fs;
  singlevaraux(fs, v2, var, 1);
  if ( var->k == VVOID )
  {
    singlevaraux(fs, ls->envn, var, 1);
    codestring(ls, &key, v2);
    luaK_indexed(fs, var, &key);
  }
};

// Line 309: range 00000000152F3C6F-00000000152F3D19
void __fastcall adjust_assign(LexState_0 *ls, int nvars, int nexps, expdesc_0 *e)
{
  FuncState *fs; // r14
  int v6; // r12d
  int v7; // r12d
  int freereg; // r15d

  fs = ls->fs;
  v6 = nvars - nexps;
  if ( (unsigned int)(e->k - 13) <= 1 )
  {
    v7 = v6 + 1;
    if ( v7 < 0 )
      v7 = 0;
    luaK_setreturns(ls->fs, e, v7);
    if ( v7 > 1 )
      luaK_reserveregs(fs, v7 - 1);
  }
  else
  {
    if ( e->k )
      luaK_exp2nextreg(ls->fs, e);
    if ( v6 > 0 )
    {
      freereg = fs->freereg;
      luaK_reserveregs(fs, v6);
      luaK_nil(fs, freereg, v6);
    }
  }
  if ( nvars < nexps )
    ls->fs->freereg += nvars - nexps;
};

// Line 331: range 00000000152F32F4-00000000152F3327
void __fastcall enterlevel(LexState_0 *ls)
{
  lua_State *L; // rax
  unsigned __int16 v2; // si

  L = ls->L;
  v2 = L->nCcalls + 1;
  L->nCcalls = v2;
  checklimit(ls->fs, v2, 200, "C levels");
};

// Line 341: range 00000000152F3621-00000000152F36DC
void __fastcall closegoto(LexState_0 *ls, int g, Labeldesc_0 *label)
{
  FuncState *fs; // rdi
  Dyndata *dyd; // rbp
  __int64 v6; // r12
  lu_byte v7; // al
  int v8; // ebx
  LocVar_0 *v9; // rax
  const char *v10; // rax
  Labeldesc_0 *arr; // rcx
  __m128i *v12; // rax
  int v13; // eax

  fs = ls->fs;
  dyd = ls->dyd;
  v6 = (__int64)&dyd->gt.arr[g];
  v7 = *(_BYTE *)(v6 + 16);
  if ( v7 < label->nactvar )
  {
    v9 = getlocvar(fs, v7);
    v10 = luaO_pushfstring(
            ls->L,
            "<goto %s> at line %d jumps into the scope of local '%s'",
            (const char *)(*(_QWORD *)v6 + 24LL),
            *(unsigned int *)(v6 + 12),
            (const char *)&v9->varname[1]);
    semerror(ls, v10);
  }
  v8 = g;
  luaK_patchlist(fs, *(_DWORD *)(v6 + 8), label->pc);
  while ( 1 )
  {
    v13 = dyd->gt.n - 1;
    if ( v13 <= v8 )
      break;
    arr = dyd->gt.arr;
    v12 = (__m128i *)&arr[v8];
    *v12 = _mm_loadu_si128((const __m128i *)&arr[v8 + 1]);
    v12[1].m128i_i64[0] = *(_QWORD *)&arr[++v8].nactvar;
  }
  dyd->gt.n = v13;
};

// Line 365: range 00000000152F3786-00000000152F3816
int __fastcall findlabel(LexState_0 *ls, int g)
{
  FuncState *fs; // r8
  BlockCnt *bl; // r9
  Dyndata *dyd; // rcx
  __int64 v7; // rdi
  int i; // eax
  int n; // esi
  Labeldesc_0 *v10; // rbx
  lu_byte nactvar; // dl

  fs = ls->fs;
  bl = fs->bl;
  dyd = ls->dyd;
  v7 = (__int64)&dyd->gt.arr[g];
  for ( i = bl->firstlabel; ; ++i )
  {
    n = dyd->label.n;
    if ( n <= i )
      return 0;
    v10 = &dyd->label.arr[i];
    if ( v10->name == *(TString_0 **)v7 )
      break;
  }
  nactvar = v10->nactvar;
  if ( *(_BYTE *)(v7 + 16) > nactvar && (bl->upval || n > bl->firstlabel) )
    luaK_patchclose(fs, *(_DWORD *)(v7 + 8), nactvar);
  closegoto(ls, g, v10);
  return 1;
};

// Line 386: range 00000000152F2ED7-00000000152F2F6E
int __fastcall newlabelentry(LexState_0 *ls, Labellist_0 *l, TString_0 *name, int line, int pc)
{
  int n; // ebp

  n = l->n;
  if ( l->size <= n )
    l->arr = (Labeldesc_0 *)luaM_growaux_(ls->L, l->arr, &l->size, 0x18uLL, 0x7FFF, "labels/gotos");
  l->arr[n].name = name;
  l->arr[n].line = line;
  l->arr[n].nactvar = ls->fs->nactvar;
  l->arr[n].pc = pc;
  l->n = n + 1;
  return n;
};

// Line 403: range 00000000152F36DD-00000000152F3737
void __fastcall findgotos(LexState_0 *ls, Labeldesc_0 *lb)
{
  Dyndata *dyd; // rbp
  int firstgoto; // ebx

  dyd = ls->dyd;
  firstgoto = ls->fs->bl->firstgoto;
  while ( dyd->gt.n > firstgoto )
  {
    if ( dyd->gt.arr[firstgoto].name == lb->name )
      closegoto(ls, firstgoto, lb);
    else
      ++firstgoto;
  }
};

// Line 421: range 00000000152F3817-00000000152F388D
void __fastcall movegotosout(FuncState_0 *fs_0, BlockCnt_0 *bl_0)
{
  int firstgoto; // ebp
  Dyndata *dyd; // r13
  __int64 v4; // rbx
  lu_byte nactvar; // dl

  firstgoto = bl_0->firstgoto;
  dyd = fs_0->ls->dyd;
  while ( dyd->gt.n > firstgoto )
  {
    v4 = (__int64)&dyd->gt.arr[firstgoto];
    nactvar = bl_0->nactvar;
    if ( *(_BYTE *)(v4 + 16) > nactvar )
    {
      if ( bl_0->upval )
        luaK_patchclose(fs_0, *(_DWORD *)(v4 + 8), nactvar);
      *(_BYTE *)(v4 + 16) = bl_0->nactvar;
    }
    if ( !findlabel(fs_0->ls, firstgoto) )
      ++firstgoto;
  }
};

// Line 440: range 00000000152F2C98-00000000152F2CCD
void __fastcall enterblock(FuncState_0 *fs_0, BlockCnt_0 *bl_0, lu_byte isloop)
{
  bl_0->isloop = isloop;
  bl_0->nactvar = fs_0->nactvar;
  bl_0->firstlabel = fs_0->ls->dyd->label.n;
  bl_0->firstgoto = fs_0->ls->dyd->gt.n;
  bl_0->upval = 0;
  bl_0->previous = fs_0->bl;
  fs_0->bl = bl_0;
};

// Line 454: range 00000000152F3738-00000000152F3785
void __fastcall breaklabel(LexState_0 *ls)
{
  TString_0 *v2; // rax
  int v3; // eax

  v2 = luaS_new(ls->L, "break");
  v3 = newlabelentry(ls, &ls->dyd->label, v2, 0, ls->fs->pc);
  findgotos(ls, &ls->dyd->label.arr[v3]);
};

// Line 464: range 00000000152F33BC-00000000152F3403
void __fastcall __noreturn undefgoto(LexState_0 *ls, Labeldesc_0 *gt)
{
  TString_0 *name; // rdx
  const char *v3; // rax

  name = gt->name;
  if ( gt->name->tt == 4 && name->extra )
    v3 = luaO_pushfstring(ls->L, "<%s> at line %d not inside a loop", &name[1], (unsigned int)gt->line);
  else
    v3 = luaO_pushfstring(ls->L, "no visible label '%s' for <goto> at line %d", &name[1], (unsigned int)gt->line);
  semerror(ls, v3);
};

// Line 473: range 00000000152F388E-00000000152F3941
void __fastcall leaveblock(FuncState_0 *fs_0)
{
  BlockCnt *bl; // rbp
  LexState *ls; // r12
  int v3; // r13d
  int firstgoto; // eax
  Dyndata *dyd; // rdx

  bl = fs_0->bl;
  ls = fs_0->ls;
  if ( bl->previous && bl->upval )
  {
    v3 = luaK_jump(fs_0);
    luaK_patchclose(fs_0, v3, bl->nactvar);
    luaK_patchtohere(fs_0, v3);
  }
  if ( bl->isloop )
    breaklabel(ls);
  fs_0->bl = bl->previous;
  removevars(fs_0, bl->nactvar);
  fs_0->freereg = fs_0->nactvar;
  ls->dyd->label.n = bl->firstlabel;
  if ( bl->previous )
  {
    movegotosout(fs_0, bl);
  }
  else
  {
    firstgoto = bl->firstgoto;
    dyd = ls->dyd;
    if ( firstgoto < dyd->gt.n )
      undefgoto(ls, &dyd->gt.arr[firstgoto]);
  }
};

// Line 499: range 00000000152F2F70-00000000152F301B
Proto_0 *__fastcall addprototype(LexState_0 *ls)
{
  lua_State_0 *L; // r13
  FuncState *fs; // r12
  Proto_0 *f; // rbp
  int sizep; // ebx
  GCObject_0 *v5; // rbx
  Proto **p; // rdx
  int np; // eax

  L = ls->L;
  fs = ls->fs;
  f = fs->f;
  sizep = fs->f->sizep;
  if ( fs->np >= sizep )
  {
    f->p = (Proto **)luaM_growaux_(ls->L, f->p, &f->sizep, 8uLL, 0x3FFFF, "functions");
    while ( f->sizep > sizep )
      f->p[sizep++] = 0LL;
  }
  v5 = (GCObject_0 *)luaF_newproto(L);
  p = f->p;
  np = fs->np;
  fs->np = np + 1;
  p[np] = (Proto *)v5;
  if ( (f->marked & 4) != 0 && (v5->marked & 3) != 0 )
    luaC_barrier_(L, (GCObject_0 *)f, v5);
  return (Proto_0 *)v5;
};

// Line 522: range 00000000152F35D7-00000000152F3620
void __fastcall codeclosure(LexState_0 *ls, expdesc_0 *v)
{
  FuncState *prev; // rbp
  int v3; // eax

  prev = ls->fs->prev;
  v3 = luaK_codeABx(prev, OP_CLOSURE, 0, prev->np - 1);
  init_exp(v, VRELOCABLE, v3);
  luaK_exp2nextreg(prev, v);
};

// Line 529: range 00000000152F2CCE-00000000152F2D47
void __fastcall open_func(LexState_0 *ls, FuncState_0 *fs_0, BlockCnt_0 *bl_0)
{
  Proto_0 *f; // rdx

  fs_0->prev = ls->fs;
  fs_0->ls = ls;
  ls->fs = fs_0;
  fs_0->pc = 0;
  fs_0->lasttarget = 0;
  fs_0->jpc = -1;
  fs_0->freereg = 0;
  fs_0->nk = 0;
  fs_0->np = 0;
  fs_0->nups = 0;
  fs_0->nlocvars = 0;
  fs_0->nactvar = 0;
  fs_0->firstlocal = ls->dyd->actvar.n;
  fs_0->bl = 0LL;
  f = fs_0->f;
  f->source = ls->source;
  f->maxstacksize = 2;
  enterblock(fs_0, bl_0, 0);
};

// Line 552: range 00000000152F3D1B-00000000152F3E5B
void __fastcall close_func(LexState_0 *ls)
{
  lua_State *L; // r12
  FuncState *fs; // rbp
  Proto_0 *f; // rbx
  int pc; // ecx

  L = ls->L;
  fs = ls->fs;
  f = fs->f;
  luaK_ret(fs, 0, 0);
  leaveblock(fs);
  f->code = (Instruction *)luaM_realloc_(L, f->code, 4LL * f->sizecode, 4LL * fs->pc);
  pc = fs->pc;
  f->sizecode = pc;
  f->lineinfo = (int *)luaM_realloc_(L, f->lineinfo, 4LL * f->sizelineinfo, 4LL * pc);
  f->sizelineinfo = fs->pc;
  f->k = (TValue *)luaM_realloc_(L, f->k, 16LL * f->sizek, 16LL * fs->nk);
  f->sizek = fs->nk;
  f->p = (Proto **)luaM_realloc_(L, f->p, 8LL * f->sizep, 8LL * fs->np);
  f->sizep = fs->np;
  f->locvars = (LocVar_0 *)luaM_realloc_(L, f->locvars, 16LL * f->sizelocvars, 16LL * fs->nlocvars);
  f->sizelocvars = fs->nlocvars;
  f->upvalues = (Upvaldesc_0 *)luaM_realloc_(L, f->upvalues, 16LL * f->sizeupvalues, 16LL * fs->nups);
  f->sizeupvalues = fs->nups;
  ls->fs = fs->prev;
  if ( L->l_G->GCdebt > 0 )
    luaC_step(L);
};

// Line 588: range 00000000152F2D48-00000000152F2D82
int __fastcall block_follow(LexState_0 *ls, int withuntil)
{
  int token; // edx

  token = ls->t.token;
  if ( token == 277 )
    return withuntil;
  if ( token <= 277 )
    return (unsigned int)(token - 260) <= 2;
  return token == 289;
};

// Line 598: range 00000000152F4C90-00000000152F4CC1
void __fastcall statlist(LexState_0 *ls)
{
  while ( !block_follow(ls, 1) )
  {
    if ( ls->t.token == 274 )
    {
      statement(ls);
      return;
    }
    statement(ls);
  }
};

// Line 610: range 00000000152F39E1-00000000152F3A24
void __fastcall fieldsel(LexState_0 *ls, expdesc_0 *v)
{
  FuncState *fs; // r12
  expdesc_0 key; // [rsp+0h] [rbp-38h] BYREF

  fs = ls->fs;
  luaK_exp2anyregup(fs, v);
  luaX_next(ls);
  checkname(ls, &key);
  luaK_indexed(fs, v, &key);
};

// Line 621: range 00000000152F417F-00000000152F41BA
void __fastcall yindex(LexState_0 *ls, expdesc_0 *v)
{
  luaX_next(ls);
  expr(ls, v);
  luaK_exp2val(ls->fs, v);
  checknext(ls, 93);
};

// Line 646: range 00000000152F41BB-00000000152F4277
void __fastcall recfield(LexState_0 *ls, ConsControl *cc)
{
  FuncState *fs; // rbp
  lu_byte freereg; // r14
  int v4; // r13d
  int v5; // eax
  expdesc_0 val; // [rsp+0h] [rbp-68h] BYREF
  expdesc_0 key; // [rsp+20h] [rbp-48h] BYREF

  fs = ls->fs;
  freereg = fs->freereg;
  if ( ls->t.token == 292 )
  {
    checklimit(ls->fs, cc->nh, 0x7FFFFFFF, "items in a constructor");
    checkname(ls, &key);
  }
  else
  {
    yindex(ls, &key);
  }
  ++cc->nh;
  checknext(ls, 61);
  v4 = luaK_exp2RK(fs, &key);
  expr(ls, &val);
  v5 = luaK_exp2RK(fs, &val);
  luaK_codeABC(fs, OP_SETTABLE, cc->t->u.info, v4, v5);
  fs->freereg = freereg;
};

// Line 668: range 00000000152F347A-00000000152F34BF
void __fastcall closelistfield(FuncState_0 *fs_0, ConsControl *cc)
{
  if ( cc->v.k )
  {
    luaK_exp2nextreg(fs_0, &cc->v);
    cc->v.k = VVOID;
    if ( cc->tostore == 50 )
    {
      luaK_setlist(fs_0, cc->t->u.info, cc->na, 50);
      cc->tostore = 0;
    }
  }
};

// Line 679: range 00000000152F34C1-00000000152F3530
void __fastcall lastlistfield(FuncState_0 *fs_0, ConsControl *cc)
{
  if ( cc->tostore )
  {
    if ( (unsigned int)(cc->v.k - 13) <= 1 )
    {
      luaK_setreturns(fs_0, &cc->v, -1);
      luaK_setlist(fs_0, cc->t->u.info, cc->na, -1);
      --cc->na;
    }
    else
    {
      if ( cc->v.k )
        luaK_exp2nextreg(fs_0, &cc->v);
      luaK_setlist(fs_0, cc->t->u.info, cc->na, cc->tostore);
    }
  }
};

// Line 693: range 00000000152F427C-00000000152F42B7
void __fastcall listfield(LexState_0 *ls, ConsControl *cc)
{
  int na; // ebp

  expr(ls, &cc->v);
  na = cc->na;
  checklimit(ls->fs, na, 0x7FFFFFFF, "items in a constructor");
  cc->na = na + 1;
  ++cc->tostore;
};

// Line 702: range 00000000152F42B8-00000000152F4308
void __fastcall field(LexState_0 *ls, ConsControl *cc)
{
  int token; // eax

  token = ls->t.token;
  if ( token == 91 || token == 292 && luaX_lookahead(ls) == 61 )
    recfield(ls, cc);
  else
    listfield(ls, cc);
};

// Line 724: range 00000000152F430A-00000000152F4470
void __fastcall constructor(LexState_0 *ls, expdesc_0 *t)
{
  FuncState *fs; // rbp
  int linenumber; // r14d
  int v4; // r13d
  __int64 v5; // rbx
  __int64 v6; // r12
  int v7; // r13d
  ConsControl cc; // [rsp+0h] [rbp-58h] BYREF

  fs = ls->fs;
  linenumber = ls->linenumber;
  v4 = luaK_codeABC(fs, OP_NEWTABLE, 0, 0, 0);
  cc.tostore = 0;
  cc.nh = 0;
  cc.na = 0;
  cc.t = t;
  init_exp(t, VRELOCABLE, v4);
  init_exp(&cc.v, VVOID, 0);
  luaK_exp2nextreg(ls->fs, t);
  checknext(ls, 123);
  while ( ls->t.token != 125 )
  {
    closelistfield(fs, &cc);
    field(ls, &cc);
    if ( !testnext(ls, 44) && !testnext(ls, 59) )
      break;
  }
  check_match(ls, 125, 123, linenumber);
  lastlistfield(fs, &cc);
  v5 = v4;
  v6 = v4;
  v7 = fs->f->code[v6] & 0x7FFFFF;
  fs->f->code[v6] = (luaO_int2fb(cc.na) << 23) | v7;
  LODWORD(v5) = fs->f->code[v5] & 0xFF803FFF;
  fs->f->code[v6] = (luaO_int2fb(cc.nh) << 14) & 0x7FC000 | v5;
};

// Line 753: range 00000000152F3A25-00000000152F3AD6
void __fastcall parlist(LexState_0 *ls)
{
  FuncState *fs; // r13
  Proto_0 *f; // rbp
  int v3; // r12d
  int token; // eax
  TString_0 *v5; // rax
  lu_byte nactvar; // si

  fs = ls->fs;
  f = fs->f;
  fs->f->is_vararg = 0;
  if ( ls->t.token == 41 )
  {
    v3 = 0;
  }
  else
  {
    v3 = 0;
    do
    {
      token = ls->t.token;
      if ( token == 281 )
      {
        luaX_next(ls);
        f->is_vararg = 1;
      }
      else
      {
        if ( token != 292 )
          luaX_syntaxerror(ls, "<name> or '...' expected");
        v5 = str_checkname(ls);
        new_localvar(ls, v5);
        ++v3;
      }
    }
    while ( !f->is_vararg && testnext(ls, 44) );
  }
  adjustlocalvars(ls, v3);
  nactvar = fs->nactvar;
  f->numparams = nactvar;
  luaK_reserveregs(fs, nactvar);
};

// Line 782: range 00000000152F3E5D-00000000152F3F1A
void __fastcall body(LexState_0 *ls, expdesc_0 *e, int ismethod, int line)
{
  BlockCnt_0 bl_0; // [rsp+0h] [rbp-88h] BYREF
  FuncState_0 new_fs; // [rsp+20h] [rbp-68h] BYREF

  new_fs.f = addprototype(ls);
  new_fs.f->linedefined = line;
  open_func(ls, &new_fs, &bl_0);
  checknext(ls, 40);
  if ( ismethod )
  {
    new_localvarliteral_(ls, "self", 4uLL);
    adjustlocalvars(ls, 1);
  }
  parlist(ls);
  checknext(ls, 41);
  statlist(ls);
  new_fs.f->lastlinedefined = ls->linenumber;
  check_match(ls, 262, 265, line);
  codeclosure(ls, e);
  close_func(ls);
};

// Line 804: range 00000000152F44D5-00000000152F451F
int __fastcall explist(LexState_0 *ls, expdesc_0 *v)
{
  int v2; // r12d

  expr(ls, v);
  v2 = 1;
  while ( testnext(ls, 44) )
  {
    luaK_exp2nextreg(ls->fs, v);
    expr(ls, v);
    ++v2;
  }
  return v2;
};

// Line 817: range 00000000152F4520-00000000152F464D
void __fastcall funcargs(LexState_0 *ls, expdesc_0 *f, int line)
{
  FuncState *fs; // r12
  int token; // eax
  int info; // ebx
  int v7; // ecx
  int v8; // eax
  expdesc_0 args; // [rsp+0h] [rbp-48h] BYREF

  fs = ls->fs;
  token = ls->t.token;
  if ( token == 123 )
  {
    constructor(ls, &args);
  }
  else if ( token == 293 )
  {
    codestring(ls, &args, ls->t.seminfo.ts);
    luaX_next(ls);
  }
  else
  {
    if ( token != 40 )
      luaX_syntaxerror(ls, "function arguments expected");
    luaX_next(ls);
    if ( ls->t.token == 41 )
    {
      args.k = VVOID;
    }
    else
    {
      explist(ls, &args);
      luaK_setreturns(fs, &args, -1);
    }
    check_match(ls, 41, 40, line);
  }
  info = f->u.info;
  if ( (unsigned int)(args.k - 13) <= 1 )
  {
    v7 = -1;
  }
  else
  {
    if ( args.k )
      luaK_exp2nextreg(fs, &args);
    v7 = fs->freereg - (info + 1);
  }
  v8 = luaK_codeABC(fs, OP_CALL, info, v7 + 1, 2);
  init_exp(f, VCALL, v8);
  luaK_fixline(fs, line);
  fs->freereg = info + 1;
};

// Line 871: range 00000000152F4471-00000000152F44D0
void __fastcall primaryexp(LexState_0 *ls, expdesc_0 *v)
{
  int token; // eax
  int linenumber; // r12d

  token = ls->t.token;
  if ( token == 40 )
  {
    linenumber = ls->linenumber;
    luaX_next(ls);
    expr(ls, v);
    check_match(ls, 41, 40, linenumber);
    luaK_dischargevars(ls->fs, v);
  }
  else
  {
    if ( token != 292 )
      luaX_syntaxerror(ls, "unexpected symbol");
    singlevar(ls, v);
  }
};

// Line 893: range 00000000152F4652-00000000152F471E
void __fastcall suffixedexp(LexState_0 *ls, expdesc_0 *v)
{
  FuncState *fs; // r12
  int linenumber; // r13d
  int token; // eax
  expdesc_0 key; // [rsp+0h] [rbp-48h] BYREF

  fs = ls->fs;
  linenumber = ls->linenumber;
  primaryexp(ls, v);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          token = ls->t.token;
          if ( token != 58 )
            break;
          luaX_next(ls);
          checkname(ls, &key);
          luaK_self(fs, v, &key);
          funcargs(ls, v, linenumber);
        }
        if ( token > 58 )
          break;
        if ( token == 40 )
          goto LABEL_12;
        if ( token != 46 )
          return;
        fieldsel(ls, v);
      }
      if ( token != 91 )
        break;
      luaK_exp2anyregup(fs, v);
      yindex(ls, &key);
      luaK_indexed(fs, v, &key);
    }
    if ( token < 91 || token != 123 && token != 293 )
      break;
LABEL_12:
    luaK_exp2nextreg(fs, v);
    funcargs(ls, v, linenumber);
  }
};

// Line 931: range 00000000152F3F1C-00000000152F406F
void __fastcall simpleexp(LexState_0 *ls, expdesc_0 *v)
{
  int token; // eax
  FuncState *fs; // rdi
  int v5; // eax

  token = ls->t.token;
  if ( token == 123 )
  {
    constructor(ls, v);
  }
  else if ( token < 123 || token > 293 || token < 263 )
  {
LABEL_18:
    suffixedexp(ls, v);
  }
  else
  {
    switch ( token )
    {
      case 263:
        init_exp(v, VFALSE, 0);
        goto LABEL_7;
      case 265:
        luaX_next(ls);
        body(ls, v, 0, ls->linenumber);
        return;
      case 270:
        init_exp(v, VNIL, 0);
        goto LABEL_7;
      case 276:
        init_exp(v, VTRUE, 0);
        goto LABEL_7;
      case 281:
        fs = ls->fs;
        if ( !fs->f->is_vararg )
          luaX_syntaxerror(ls, (const char *)&stru_1B2366B8);
        v5 = luaK_codeABC(fs, OP_VARARG, 0, 1, 0);
        init_exp(v, VVARARG, v5);
        goto LABEL_7;
      case 290:
        init_exp(v, VKFLT, 0);
        v->u.ival = ls->t.seminfo.i;
        goto LABEL_7;
      case 291:
        init_exp(v, VKINT, 0);
        v->u.ival = ls->t.seminfo.i;
        goto LABEL_7;
      case 293:
        codestring(ls, v, ls->t.seminfo.ts);
LABEL_7:
        luaX_next(ls);
        break;
      default:
        goto LABEL_18;
    }
  }
};

// Line 987: range 00000000152F2D83-00000000152F2DBF
UnOpr_0 __fastcall getunopr(int op)
{
  if ( op == 126 )
    return 1;
  if ( op > 126 )
  {
    if ( op == 271 )
      return 2;
    else
      return 4;
  }
  else if ( op == 35 )
  {
    return 3;
  }
  else if ( op == 45 )
  {
    return 0;
  }
  else
  {
    return 4;
  }
};

// Line 998: range 00000000152F2DC0-00000000152F2EB8
BinOpr_0 __fastcall getbinopr(int op)
{
  BinOpr_0 result; // eax

  if ( op == 126 )
    return 9;
  if ( op > 126 )
  {
    if ( op > 287 )
    {
      return 21;
    }
    else if ( op < 257 )
    {
      return 21;
    }
    else
    {
      switch ( op )
      {
        case 257:
          result = OPR_AND;
          break;
        case 272:
          result = OPR_OR;
          break;
        case 279:
          result = OPR_IDIV;
          break;
        case 280:
          result = OPR_CONCAT;
          break;
        case 282:
          result = OPR_EQ;
          break;
        case 283:
          result = OPR_GE;
          break;
        case 284:
          result = OPR_LE;
          break;
        case 285:
          result = OPR_NE;
          break;
        case 286:
          result = OPR_SHL;
          break;
        case 287:
          result = OPR_SHR;
          break;
        default:
          result = OPR_NOBINOPR;
          break;
      }
    }
  }
  else if ( op > 94 )
  {
    if ( op == 124 )
      return 8;
    else
      return 21;
  }
  else if ( op < 37 )
  {
    return 21;
  }
  else
  {
    switch ( op )
    {
      case '%':
        result = OPR_MOD;
        break;
      case '&':
        result = OPR_BAND;
        break;
      case '*':
        result = OPR_MUL;
        break;
      case '+':
        result = OPR_ADD;
        break;
      case '-':
        result = OPR_SUB;
        break;
      case '/':
        result = OPR_DIV;
        break;
      case '<':
        result = OPR_LT;
        break;
      case '>':
        result = OPR_GT;
        break;
      case '^':
        result = OPR_POW;
        break;
      default:
        result = OPR_NOBINOPR;
        break;
    }
  }
  return result;
};

// Line 1048: range 00000000152F4074-00000000152F416B
BinOpr_0 __fastcall subexpr(LexState_0 *ls, expdesc_0 *v, int limit)
{
  UnOpr_0 v4; // eax
  UnOpr_0 v5; // ebp
  int linenumber; // r12d
  BinOpr_0 i; // ebp
  int v8; // r14d
  BinOpr_0 v9; // r12d
  expdesc_0 v2; // [rsp+0h] [rbp-58h] BYREF

  enterlevel(ls);
  v4 = getunopr(ls->t.token);
  if ( v4 == OPR_NOUNOPR )
  {
    simpleexp(ls, v);
  }
  else
  {
    v5 = v4;
    linenumber = ls->linenumber;
    luaX_next(ls);
    subexpr(ls, v, 12);
    luaK_prefix(ls->fs, v5, v, linenumber);
  }
  for ( i = getbinopr(ls->t.token); i != OPR_NOBINOPR && priority[i].left > limit; i = v9 )
  {
    v8 = ls->linenumber;
    luaX_next(ls);
    luaK_infix(ls->fs, i, v);
    v9 = subexpr(ls, &v2, priority[i].right);
    luaK_posfix(ls->fs, i, v, &v2, v8);
  }
  --ls->L->nCcalls;
  return i;
};

// Line 1078: range 00000000152F416C-00000000152F417E
void __fastcall expr(LexState_0 *ls, expdesc_0 *v)
{
  subexpr(ls, v, 0);
};

// Line 1093: range 00000000152F4DDA-00000000152F4E0D
void __fastcall block(LexState_0 *ls)
{
  FuncState *fs; // rbp
  BlockCnt_0 bl_0; // [rsp+0h] [rbp-38h] BYREF

  fs = ls->fs;
  enterblock(fs, &bl_0, 0);
  statlist(ls);
  leaveblock(fs);
};

// Line 1119: range 00000000152F3547-00000000152F35D6
void __fastcall check_conflict(LexState_0 *ls, LHS_assign *lh, expdesc_0 *v)
{
  FuncState *fs; // rbx
  lu_byte freereg; // di
  int v5; // ecx

  fs = ls->fs;
  freereg = fs->freereg;
  v5 = 0;
  while ( lh )
  {
    if ( lh->v.k == VINDEXED )
    {
      if ( lh->v.u.ind.vt == v->k && lh->v.u.ind.t == v->u.info )
      {
        lh->v.u.ind.vt = 8;
        lh->v.u.ind.t = freereg;
        v5 = 1;
      }
      if ( v->k == VLOCAL && lh->v.u.ind.idx == v->u.info )
      {
        lh->v.u.ind.idx = freereg;
        v5 = 1;
      }
    }
    lh = lh->prev;
  }
  if ( v5 )
  {
    if ( v->k != VLOCAL )
      LODWORD(lh) = 5;
    luaK_codeABC(fs, (OpCode)lh, freereg, v->u.info, 0);
    luaK_reserveregs(fs, 1);
  }
};

// Line 1147: range 00000000152F487D-00000000152F49A2
void __fastcall assignment(LexState_0 *ls, LHS_assign *lh, int nvars)
{
  int v4; // edx
  LHS_assign nv; // [rsp+0h] [rbp-58h] BYREF
  expdesc_0 e; // [rsp+20h] [rbp-38h] BYREF

  if ( (unsigned int)(lh->v.k - 8) > 2 )
    luaX_syntaxerror(ls, "syntax error");
  if ( testnext(ls, 44) )
  {
    nv.prev = lh;
    suffixedexp(ls, &nv.v);
    if ( nv.v.k != VINDEXED )
      check_conflict(ls, lh, &nv.v);
    checklimit(ls->fs, nvars + ls->L->nCcalls, 200, "C levels");
    assignment(ls, &nv, nvars + 1);
    goto LABEL_6;
  }
  checknext(ls, 61);
  v4 = explist(ls, &e);
  if ( v4 != nvars )
  {
    adjust_assign(ls, nvars, v4, &e);
LABEL_6:
    init_exp(&e, VNONRELOC, ls->fs->freereg - 1);
    luaK_storevar(ls->fs, &lh->v, &e);
    return;
  }
  luaK_setoneret(ls->fs, &e);
  luaK_storevar(ls->fs, &lh->v, &e);
};

// Line 1177: range 00000000152F4A21-00000000152F4A54
int __fastcall cond(LexState_0 *ls)
{
  expdesc_0 v; // [rsp+0h] [rbp-28h] BYREF

  expr(ls, &v);
  if ( v.k == VNIL )
    v.k = VFALSE;
  luaK_goiftrue(ls->fs, &v);
  return v.f;
};

// Line 1187: range 00000000152F3B91-00000000152F3BF5
void __fastcall gotostat(LexState_0 *ls, int pc)
{
  int linenumber; // r12d
  TString_0 *v3; // rdx
  int v4; // eax

  linenumber = ls->linenumber;
  if ( testnext(ls, 266) )
  {
    v3 = str_checkname(ls);
  }
  else
  {
    luaX_next(ls);
    v3 = luaS_new(ls->L, "break");
  }
  v4 = newlabelentry(ls, &ls->dyd->gt, v3, linenumber, pc);
  findlabel(ls, v4);
};

// Line 1203: range 00000000152F3405-00000000152F3458
void __fastcall checkrepeated(FuncState_0 *fs_0, Labellist_0 *ll, TString_0 *label)
{
  int i; // ecx
  Labeldesc_0 *v4; // rax
  const char *v5; // rax

  for ( i = fs_0->bl->firstlabel; ll->n > i; ++i )
  {
    v4 = &ll->arr[i];
    if ( v4->name == label )
    {
      v5 = luaO_pushfstring(
             fs_0->ls->L,
             "label '%s' already defined on line %d",
             (const char *)&label[1],
             (unsigned int)v4->line);
      semerror(fs_0->ls, v5);
    }
  }
};

// Line 1217: range 00000000152F5369-00000000152F538D
void __fastcall skipnoopstat(LexState_0 *ls)
{
  while ( ls->t.token == 288 || ls->t.token == 59 )
    statement(ls);
};

// Line 1223: range 00000000152F538E-00000000152F5445
void __fastcall labelstat(LexState_0 *ls, TString_0 *label, int line)
{
  FuncState *fs; // r14
  Dyndata *dyd; // r12
  int v6; // eax
  int v7; // ebp

  fs = ls->fs;
  dyd = ls->dyd;
  checkrepeated(fs, &dyd->label, label);
  checknext(ls, 288);
  v6 = luaK_getlabel(fs);
  v7 = newlabelentry(ls, &dyd->label, label, line, v6);
  skipnoopstat(ls);
  if ( block_follow(ls, 0) )
    dyd->label.arr[v7].nactvar = fs->bl->nactvar;
  findgotos(ls, &dyd->label.arr[v7]);
};

// Line 1241: range 00000000152F4E8D-00000000152F4F2C
void __fastcall whilestat(LexState_0 *ls, int line)
{
  FuncState *fs; // rbp
  int v3; // r14d
  int v4; // r12d
  int v5; // eax
  BlockCnt_0 bl_0; // [rsp+0h] [rbp-48h] BYREF

  fs = ls->fs;
  luaX_next(ls);
  v3 = luaK_getlabel(fs);
  v4 = cond(ls);
  enterblock(fs, &bl_0, 1u);
  checknext(ls, 259);
  block(ls);
  v5 = luaK_jump(fs);
  luaK_patchlist(fs, v5, v3);
  check_match(ls, 262, 278, line);
  leaveblock(fs);
  luaK_patchtohere(fs, v4);
};

// Line 1260: range 00000000152F52B9-00000000152F5367
void __fastcall repeatstat(LexState_0 *ls, int line)
{
  FuncState *fs; // rbp
  int v3; // r12d
  int v4; // eax
  int v5; // ebx
  BlockCnt_0 bl2; // [rsp+0h] [rbp-68h] BYREF
  BlockCnt_0 bl1; // [rsp+20h] [rbp-48h] BYREF

  fs = ls->fs;
  v3 = luaK_getlabel(fs);
  enterblock(fs, &bl1, 1u);
  enterblock(fs, &bl2, 0);
  luaX_next(ls);
  statlist(ls);
  check_match(ls, 277, 273, line);
  v4 = cond(ls);
  v5 = v4;
  if ( bl2.upval )
    luaK_patchclose(fs, v4, bl2.nactvar);
  leaveblock(fs);
  luaK_patchlist(fs, v5, v3);
  leaveblock(fs);
};

// Line 1280: range 00000000152F4A56-00000000152F4A7B
int __fastcall exp1(LexState_0 *ls)
{
  expdesc_0 reg; // [rsp+0h] [rbp-28h] BYREF

  expr(ls, &reg);
  luaK_exp2nextreg(ls->fs, &reg);
  return reg.u.info;
};

// Line 1291: range 00000000152F4F2D-00000000152F505A
void __fastcall forbody(LexState_0 *ls, int base, int line, int nvars, int isnum)
{
  FuncState *fs; // rbx
  int v8; // r12d
  int v9; // esi
  BlockCnt_0 bl_0; // [rsp+10h] [rbp-58h] BYREF

  fs = ls->fs;
  adjustlocalvars(ls, 3);
  checknext(ls, 259);
  if ( isnum )
    v8 = luaK_codeABx(fs, OP_FORPREP, base, 0x1FFFEu);
  else
    v8 = luaK_jump(fs);
  enterblock(fs, &bl_0, 0);
  adjustlocalvars(ls, nvars);
  luaK_reserveregs(fs, nvars);
  block(ls);
  leaveblock(fs);
  luaK_patchtohere(fs, v8);
  if ( isnum )
  {
    v9 = luaK_codeABx(fs, OP_FORLOOP, base, 0x1FFFEu);
  }
  else
  {
    luaK_codeABC(fs, OP_TFORCALL, base, 0, nvars);
    luaK_fixline(fs, line);
    v9 = luaK_codeABx(fs, OP_TFORLOOP, base + 2, 0x1FFFEu);
  }
  luaK_patchlist(fs, v9, v8 + 1);
  luaK_fixline(fs, line);
};

// Line 1317: range 00000000152F505C-00000000152F5142
void __fastcall fornum(LexState_0 *ls, TString_0 *varname, int line)
{
  FuncState *fs; // r12
  int freereg; // r14d
  int v6; // eax

  fs = ls->fs;
  freereg = fs->freereg;
  new_localvarliteral_(ls, "(for index)", 0xBuLL);
  new_localvarliteral_(ls, "(for limit)", 0xBuLL);
  new_localvarliteral_(ls, "(for step)", 0xAuLL);
  new_localvar(ls, varname);
  checknext(ls, 61);
  exp1(ls);
  checknext(ls, 44);
  exp1(ls);
  if ( testnext(ls, 44) )
  {
    exp1(ls);
  }
  else
  {
    v6 = luaK_intK(fs, 1LL);
    luaK_codek(fs, fs->freereg, v6);
    luaK_reserveregs(fs, 1);
  }
  forbody(ls, freereg, line, 1, 1);
};

// Line 1339: range 00000000152F5144-00000000152F5229
void __fastcall forlist(LexState_0 *ls, TString_0 *indexname)
{
  FuncState *fs; // r13
  int freereg; // r12d
  int v4; // ebp
  TString_0 *v5; // rax
  int linenumber; // r14d
  int v7; // eax
  expdesc_0 e; // [rsp+0h] [rbp-48h] BYREF

  fs = ls->fs;
  freereg = fs->freereg;
  new_localvarliteral_(ls, "(for generator)", 0xFuLL);
  new_localvarliteral_(ls, "(for state)", 0xBuLL);
  new_localvarliteral_(ls, "(for control)", 0xDuLL);
  new_localvar(ls, indexname);
  v4 = 4;
  while ( testnext(ls, 44) )
  {
    v5 = str_checkname(ls);
    new_localvar(ls, v5);
    ++v4;
  }
  checknext(ls, 268);
  linenumber = ls->linenumber;
  v7 = explist(ls, &e);
  adjust_assign(ls, 3, v7, &e);
  luaK_checkstack(fs, 3);
  forbody(ls, freereg, linenumber, v4 - 3, 0);
};

// Line 1364: range 00000000152F522A-00000000152F52B7
void __fastcall forstat(LexState_0 *ls, int line)
{
  FuncState *fs; // r12
  TString_0 *v4; // rsi
  int token; // edx
  BlockCnt_0 bl_0; // [rsp+0h] [rbp-38h] BYREF

  fs = ls->fs;
  enterblock(fs, &bl_0, 1u);
  luaX_next(ls);
  v4 = str_checkname(ls);
  token = ls->t.token;
  if ( token == 61 )
  {
    fornum(ls, v4, line);
  }
  else
  {
    if ( token != 268 && token != 44 )
      luaX_syntaxerror(ls, "'=' or 'in' expected");
    forlist(ls, v4);
  }
  check_match(ls, 262, 264, line);
  leaveblock(fs);
};

// Line 1382: range 00000000152F4CC2-00000000152F4DD8
void __fastcall test_then_block(LexState_0 *ls, int *escapelist)
{
  FuncState *fs; // rbp
  int f; // r13d
  int v4; // eax
  expdesc_0 v; // [rsp+0h] [rbp-68h] BYREF
  BlockCnt_0 bl_0; // [rsp+20h] [rbp-48h] BYREF

  fs = ls->fs;
  luaX_next(ls);
  expr(ls, &v);
  checknext(ls, 275);
  if ( ls->t.token == 258 || ls->t.token == 266 )
  {
    luaK_goiffalse(ls->fs, &v);
    enterblock(fs, &bl_0, 0);
    gotostat(ls, v.t);
    while ( testnext(ls, 59) )
      ;
    if ( block_follow(ls, 0) )
    {
      leaveblock(fs);
      return;
    }
    f = luaK_jump(fs);
  }
  else
  {
    luaK_goiftrue(ls->fs, &v);
    enterblock(fs, &bl_0, 0);
    f = v.f;
  }
  statlist(ls);
  leaveblock(fs);
  if ( (unsigned int)(ls->t.token - 260) <= 1 )
  {
    v4 = luaK_jump(fs);
    luaK_concat(fs, escapelist, v4);
  }
  luaK_patchtohere(fs, f);
};

// Line 1417: range 00000000152F4E0E-00000000152F4E8B
void __fastcall ifstat(LexState_0 *ls, int line)
{
  FuncState *fs; // r12
  int escapelist[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  fs = ls->fs;
  escapelist[0] = -1;
  test_then_block(ls, escapelist);
  while ( ls->t.token == 261 )
    test_then_block(ls, escapelist);
  if ( testnext(ls, 260) )
    block(ls);
  check_match(ls, 262, 267, line);
  luaK_patchtohere(fs, escapelist[0]);
};

// Line 1431: range 00000000152F4ACB-00000000152F4B20
void __fastcall localfunc(LexState_0 *ls)
{
  FuncState *fs; // rbp
  TString_0 *v2; // rax
  expdesc_0 b; // [rsp+0h] [rbp-38h] BYREF

  fs = ls->fs;
  v2 = str_checkname(ls);
  new_localvar(ls, v2);
  adjustlocalvars(ls, 1);
  body(ls, &b, 0, ls->linenumber);
  getlocvar(fs, b.u.info)->startpc = fs->pc;
};

// Line 1442: range 00000000152F4723-00000000152F479D
void __fastcall localstat(LexState_0 *ls)
{
  int v1; // ebp
  TString_0 *v2; // rax
  int v3; // edx
  expdesc_0 e; // [rsp+0h] [rbp-38h] BYREF

  v1 = 0;
  do
  {
    v2 = str_checkname(ls);
    new_localvar(ls, v2);
    ++v1;
  }
  while ( testnext(ls, 44) );
  v3 = testnext(ls, 61);
  if ( v3 )
    v3 = explist(ls, &e);
  else
    e.k = VVOID;
  adjust_assign(ls, v1, v3, &e);
  adjustlocalvars(ls, v1);
};

// Line 1462: range 00000000152F3B48-00000000152F3B8F
int __fastcall funcname(LexState_0 *ls, expdesc_0 *v)
{
  int token; // eax

  singlevar(ls, v);
  while ( 1 )
  {
    token = ls->t.token;
    if ( token != 46 )
      break;
    fieldsel(ls, v);
  }
  if ( token != 58 )
    return 0;
  fieldsel(ls, v);
  return 1;
};

// Line 1476: range 00000000152F4A7C-00000000152F4ACA
void __fastcall funcstat(LexState_0 *ls, int line)
{
  int v2; // eax
  expdesc_0 b; // [rsp+0h] [rbp-58h] BYREF
  expdesc_0 v; // [rsp+20h] [rbp-38h] BYREF

  luaX_next(ls);
  v2 = funcname(ls, &v);
  body(ls, &b, v2, line);
  luaK_storevar(ls->fs, &v, &b);
  luaK_fixline(ls->fs, line);
};

// Line 1488: range 00000000152F49A4-00000000152F4A1C
void __fastcall exprstat(LexState_0 *ls)
{
  FuncState *fs; // rbp
  unsigned int *v2; // rax
  unsigned int v3; // edx
  LHS_assign v; // [rsp+0h] [rbp-38h] BYREF

  fs = ls->fs;
  suffixedexp(ls, &v.v);
  if ( ls->t.token == 44 || ls->t.token == 61 )
  {
    v.prev = 0LL;
    assignment(ls, &v, 1);
  }
  else
  {
    if ( v.v.k != VCALL )
      luaX_syntaxerror(ls, "syntax error");
    v2 = &fs->f->code[v.v.u.info];
    v3 = *v2 & 0xFF803FFF;
    BYTE1(v3) |= 0x40u;
    *v2 = v3;
  }
};

// Line 1504: range 00000000152F479F-00000000152F487C
void __fastcall retstat(LexState_0 *ls)
{
  FuncState *fs; // r12
  int nactvar; // esi
  int v3; // ebp
  unsigned int *v4; // rax
  expdesc_0 e; // [rsp+0h] [rbp-38h] BYREF

  fs = ls->fs;
  if ( block_follow(ls, 1) )
  {
    v3 = 0;
    nactvar = 0;
  }
  else
  {
    nactvar = 0;
    if ( ls->t.token == 59 )
    {
      v3 = 0;
    }
    else
    {
      v3 = explist(ls, &e);
      if ( (unsigned int)(e.k - 13) <= 1 )
      {
        luaK_setreturns(fs, &e, -1);
        if ( e.k == VCALL && v3 == 1 )
        {
          v4 = &fs->f->code[e.u.info];
          *v4 = *v4 & 0xFFFFFFC0 | 0x25;
        }
        nactvar = fs->nactvar;
        v3 = -1;
      }
      else if ( v3 == 1 )
      {
        nactvar = luaK_exp2anyreg(fs, &e);
      }
      else
      {
        luaK_exp2nextreg(fs, &e);
        nactvar = fs->nactvar;
      }
    }
  }
  luaK_ret(fs, nactvar, v3);
  testnext(ls, 59);
};

// Line 1537: range 00000000152F4B21-00000000152F4C8B
void __fastcall statement(LexState_0 *ls)
{
  int linenumber; // ebp
  int token; // eax
  TString_0 *v3; // rax
  int v4; // eax

  linenumber = ls->linenumber;
  enterlevel(ls);
  token = ls->t.token;
  if ( token == 59 )
  {
    luaX_next(ls);
  }
  else if ( token < 59 || token > 288 || token < 258 )
  {
LABEL_20:
    exprstat(ls);
  }
  else
  {
    switch ( token )
    {
      case 258:
      case 266:
        v4 = luaK_jump(ls->fs);
        gotostat(ls, v4);
        break;
      case 259:
        luaX_next(ls);
        block(ls);
        check_match(ls, 262, 259, linenumber);
        break;
      case 264:
        forstat(ls, linenumber);
        break;
      case 265:
        funcstat(ls, linenumber);
        break;
      case 267:
        ifstat(ls, linenumber);
        break;
      case 269:
        luaX_next(ls);
        if ( testnext(ls, 265) )
          localfunc(ls);
        else
          localstat(ls);
        break;
      case 273:
        repeatstat(ls, linenumber);
        break;
      case 274:
        luaX_next(ls);
        retstat(ls);
        break;
      case 278:
        whilestat(ls, linenumber);
        break;
      case 288:
        luaX_next(ls);
        v3 = str_checkname(ls);
        labelstat(ls, v3, linenumber);
        break;
      default:
        goto LABEL_20;
    }
  }
  ls->fs->freereg = ls->fs->nactvar;
  --ls->L->nCcalls;
};

// Line 1612: range 00000000152F5446-00000000152F54B0
void __fastcall mainfunc(LexState_0 *ls, FuncState_0 *fs_0)
{
  expdesc_0 v; // [rsp+0h] [rbp-58h] BYREF
  BlockCnt_0 bl_0; // [rsp+20h] [rbp-38h] BYREF

  open_func(ls, fs_0, &bl_0);
  fs_0->f->is_vararg = 1;
  init_exp(&v, VLOCAL, 0);
  newupvalue(fs_0, ls->envn, &v);
  luaX_next(ls);
  statlist(ls);
  check(ls, 289);
  close_func(ls);
};

// Line 1627: range 00000000152F54B1-00000000152F55B7
LClosure_0 *__fastcall luaY_parser(
        lua_State_0 *L,
        ZIO *z,
        Mbuffer_0 *buff,
        Dyndata_0 *dyd,
        const char *name,
        int firstchar)
{
  LClosure_0 *v9; // r12
  StkId top; // rax
  StkId v11; // rdx
  Proto_0 *v12; // r13
  FuncState_0 funcstate; // [rsp+10h] [rbp-E8h] BYREF
  LexState_0 lexstate; // [rsp+50h] [rbp-A8h] BYREF

  v9 = luaF_newLclosure(L, 1);
  top = L->top;
  top->value_.i = (lua_Integer)v9;
  top->tt_ = 70;
  luaD_inctop(L);
  lexstate.h = luaH_new(L);
  v11 = L->top;
  v11->value_.i = (lua_Integer)lexstate.h;
  v11->tt_ = 69;
  luaD_inctop(L);
  v12 = luaF_newproto(L);
  v9->p = v12;
  funcstate.f = v12;
  v12->source = luaS_new(L, name);
  lexstate.buff = buff;
  lexstate.dyd = dyd;
  dyd->label.n = 0;
  dyd->gt.n = 0;
  dyd->actvar.n = 0;
  luaX_setinput(L, &lexstate, z, funcstate.f->source, firstchar);
  mainfunc(&lexstate, &funcstate);
  --L->top;
  return v9;
};
