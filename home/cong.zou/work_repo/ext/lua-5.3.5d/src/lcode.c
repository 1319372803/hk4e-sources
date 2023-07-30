// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lcode.c

// Line 44: range 00000000152FC675-00000000152FC6D4
int __fastcall tonumeral(const expdesc_0 *e, TValue *v)
{
  if ( e->t != e->f )
    return 0;
  if ( e->k == VKFLT )
  {
    if ( v )
    {
      v->value_.i = e->u.ival;
      v->tt_ = 3;
    }
    return 1;
  }
  else if ( e->k == VKINT )
  {
    if ( v )
    {
      v->value_.i = e->u.ival;
      v->tt_ = 19;
    }
    return 1;
  }
  else
  {
    return 0;
  }
};

// Line 64: range 00000000152FCE94-00000000152FCF3C
void __fastcall luaK_nil(FuncState_0 *fs_0, int from, int n)
{
  int v3; // r8d
  int pc; // eax
  Instruction *v5; // rcx
  Instruction v6; // eax
  int v7; // r9d
  int v8; // r10d

  v3 = from + n;
  pc = fs_0->pc;
  if ( pc > fs_0->lasttarget
    && (v5 = &fs_0->f->code[pc - 1], v6 = *v5, (*v5 & 0x3F) == 4)
    && ((v7 = (unsigned __int8)(v6 >> 6), v8 = v7 + (v6 >> 23), from >= v7) && v8 + 1 >= from || from <= v7 && v3 >= v7) )
  {
    if ( from <= v7 )
      v7 = from;
    if ( v3 - 1 >= v8 )
      v8 = v3 - 1;
    *v5 = ((v8 - v7) << 23) | ((_WORD)v7 << 6) & 0x3FC0 | v6 & 0x7FC03F;
  }
  else
  {
    luaK_codeABC(fs_0, OP_LOADNIL, from, n - 1, 0);
  }
};

// Line 91: range 00000000152FC6D5-00000000152FC6F8
int __fastcall getjump(FuncState_0 *fs_0, int pc)
{
  Instruction v2; // eax
  int v3; // edx

  v2 = fs_0->f->code[pc] >> 14;
  v3 = v2 - 0x1FFFF;
  if ( v2 != 131070 )
    v3 += pc + 1;
  return v3;
};

// Line 104: range 00000000152FC89F-00000000152FC8E8
void __fastcall fixjump(FuncState_0 *fs_0, int pc, int dest)
{
  Instruction *v3; // rax
  int v4; // edx

  v4 = dest - (pc + 1);
  if ( (int)abs32(v4) > 0x1FFFF )
    luaX_syntaxerror(fs_0->ls, "control structure too long");
  v3 = &fs_0->f->code[pc];
  *v3 = *v3 & 0x3FFF | ((v4 + 0x1FFFF) << 14);
};

// Line 117: range 00000000152FCDA4-00000000152FCDE4
void __fastcall luaK_concat(FuncState_0 *fs_0, int *l1, int l2)
{
  int v5; // esi
  int v6; // ebp

  if ( l2 != -1 )
  {
    v5 = *l1;
    if ( v5 == -1 )
    {
      *l1 = l2;
    }
    else
    {
      do
      {
        v6 = v5;
        v5 = getjump(fs_0, v5);
      }
      while ( v5 != -1 );
      fixjump(fs_0, v6, l2);
    }
  }
};

// Line 136: range 00000000152FCFB0-00000000152FCFF4
int __fastcall luaK_jump(FuncState_0 *fs_0)
{
  int jpc; // ebp
  int j[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  jpc = fs_0->jpc;
  fs_0->jpc = -1;
  j[0] = luaK_codeABx(fs_0, OP_JMP, 0, 0x1FFFEu);
  luaK_concat(fs_0, j, jpc);
  return j[0];
};

// Line 149: range 00000000152FCF3E-00000000152FCF5B
void __fastcall luaK_ret(FuncState_0 *fs_0, int first, int nret)
{
  luaK_codeABC(fs_0, OP_RETURN, first, nret + 1, 0);
};

// Line 158: range 00000000152FCFF5-00000000152FD007
int __fastcall condjump(FuncState_0 *fs_0, OpCode op, int A, int B, int C)
{
  luaK_codeABC(fs_0, op, A, B, C);
  return luaK_jump(fs_0);
};

// Line 169: range 00000000152FCDE5-00000000152FCDEB
int __fastcall luaK_getlabel(FuncState_0 *fs_0)
{
  int result; // eax

  result = fs_0->pc;
  fs_0->lasttarget = result;
  return result;
};

// Line 180: range 00000000152FC6F9-00000000152FC71F
Instruction *__fastcall getjumpcontrol(FuncState_0 *fs_0, int pc)
{
  Instruction *result; // rax

  result = &fs_0->f->code[pc];
  if ( pc > 0 && (luaP_opmodes[*(result - 1) & 0x3F] & 0x80u) != 0 )
    --result;
  return result;
};

// Line 195: range 00000000152FC721-00000000152FC782
int __fastcall patchtestreg(FuncState_0 *fs_0, int node, int reg)
{
  Instruction *v4; // rax
  Instruction v5; // edx

  v4 = getjumpcontrol(fs_0, node);
  v5 = *v4;
  if ( (*v4 & 0x3F) != 35 )
    return 0;
  if ( reg == 255 || v5 >> 23 == reg )
  {
    *v4 = (v5 >> 23 << 6) | v5 & 0x7FC000 | 0x22;
    return 1;
  }
  else
  {
    *v4 = ((_WORD)reg << 6) & 0x3FC0 | v5 & 0xFFFFC03F;
    return 1;
  }
};

// Line 213: range 00000000152FC783-00000000152FC7AE
void __fastcall removevalues(FuncState_0 *fs_0, int list)
{
  while ( list != -1 )
  {
    patchtestreg(fs_0, list, 255);
    list = getjump(fs_0, list);
  }
};

// Line 225: range 00000000152FC8ED-00000000152FC959
void __fastcall patchlistaux(FuncState_0 *fs_0, int list, int vtarget, int reg, int dtarget)
{
  int v9; // ebp

  while ( list != -1 )
  {
    v9 = getjump(fs_0, list);
    if ( patchtestreg(fs_0, list, reg) )
      fixjump(fs_0, list, vtarget);
    else
      fixjump(fs_0, list, dtarget);
    list = v9;
  }
};

// Line 242: range 00000000152FC95A-00000000152FC979
void __fastcall dischargejpc(FuncState_0 *fs_0)
{
  patchlistaux(fs_0, fs_0->jpc, fs_0->pc, 255, fs_0->pc);
  fs_0->jpc = -1;
};

// Line 252: range 00000000152FCDEC-00000000152FCE10
void __fastcall luaK_patchtohere(FuncState_0 *fs_0, int list)
{
  luaK_getlabel(fs_0);
  luaK_concat(fs_0, &fs_0->jpc, list);
};

// Line 263: range 00000000152FCE11-00000000152FCE31
void __fastcall luaK_patchlist(FuncState_0 *fs_0, int list, int target)
{
  if ( fs_0->pc == target )
    luaK_patchtohere(fs_0, list);
  else
    patchlistaux(fs_0, list, target, 255, target);
};

// Line 278: range 00000000152FCE33-00000000152FCE72
void __fastcall luaK_patchclose(FuncState_0 *fs_0, int list, int level)
{
  __int16 v3; // bp
  Instruction *v4; // rdx

  v3 = level + 1;
  while ( list != -1 )
  {
    v4 = &fs_0->f->code[list];
    *v4 = (v3 << 6) & 0x3FC0 | *v4 & 0xFFFFC03F;
    list = getjump(fs_0, list);
  }
};

// Line 293: range 00000000152FC97A-00000000152FCA24
int __fastcall luaK_code(FuncState_0 *fs_0, Instruction i)
{
  Proto_0 *f; // rbp
  int result; // eax

  f = fs_0->f;
  dischargejpc(fs_0);
  if ( fs_0->pc >= f->sizecode )
    f->code = (Instruction *)luaM_growaux_(fs_0->ls->L, f->code, &f->sizecode, 4uLL, 0x7FFFFFFF, aOpco);
  f->code[fs_0->pc] = i;
  if ( fs_0->pc >= f->sizelineinfo )
    f->lineinfo = (int *)luaM_growaux_(fs_0->ls->L, f->lineinfo, &f->sizelineinfo, 4uLL, 0x7FFFFFFF, aOpco);
  f->lineinfo[fs_0->pc] = fs_0->ls->lastline;
  result = fs_0->pc;
  fs_0->pc = result + 1;
  return result;
};

// Line 312: range 00000000152FCE73-00000000152FCE93
int __fastcall luaK_codeABC(FuncState_0 *fs_0, OpCode o, int a, int b, int c)
{
  return luaK_code(fs_0, (c << 14) | (b << 23) | o | (a << 6));
};

// Line 324: range 00000000152FCF96-00000000152FCFAF
int __fastcall luaK_codeABx(FuncState_0 *fs_0, OpCode o, int a, unsigned int bc)
{
  return luaK_code(fs_0, (bc << 14) | o | (a << 6));
};

// Line 335: range 00000000152FCA26-00000000152FCA39
int __fastcall codeextraarg(FuncState_0 *fs_0, int a)
{
  return luaK_code(fs_0, (a << 6) | 0x2E);
};

// Line 346: range 00000000152FD008-00000000152FD050
int __fastcall luaK_codek(FuncState_0 *fs_0, int reg, int k)
{
  int v4; // r12d

  if ( k <= 0x3FFFF )
    return luaK_codeABx(fs_0, OP_LOADK, reg, k);
  v4 = luaK_codeABx(fs_0, OP_LOADKX, reg, 0);
  codeextraarg(fs_0, k);
  return v4;
};

// Line 361: range 00000000152FD052-00000000152FD07F
void __fastcall luaK_checkstack(FuncState_0 *fs_0, int n)
{
  int v2; // esi

  v2 = n + fs_0->freereg;
  if ( fs_0->f->maxstacksize < v2 )
  {
    if ( v2 > 254 )
      luaX_syntaxerror(fs_0->ls, "function or expression needs too many registers");
    fs_0->f->maxstacksize = v2;
  }
};

// Line 375: range 00000000152FD084-00000000152FD09E
void __fastcall luaK_reserveregs(FuncState_0 *fs_0, int n)
{
  luaK_checkstack(fs_0, n);
  fs_0->freereg += n;
};

// Line 387: range 00000000152FC7AF-00000000152FC7C9
void __fastcall freereg(FuncState_0 *fs_0, int reg)
{
  if ( (reg & 0x100) == 0 && fs_0->nactvar <= reg )
    --fs_0->freereg;
};

// Line 398: range 00000000152FC7CA-00000000152FC7D8
void __fastcall freeexp(FuncState_0 *fs_0, expdesc_0 *e)
{
  if ( e->k == VNONRELOC )
    freereg(fs_0, e->u.info);
};

// Line 407: range 00000000152FC7DA-00000000152FC835
void __fastcall freeexps(FuncState_0 *fs_0, expdesc_0 *e1, expdesc_0 *e2)
{
  int info; // ebp
  int v4; // r12d

  if ( e1->k == VNONRELOC )
    info = e1->u.info;
  else
    info = -1;
  if ( e2->k == VNONRELOC )
    v4 = e2->u.info;
  else
    v4 = -1;
  if ( info <= v4 )
  {
    freereg(fs_0, v4);
    freereg(fs_0, info);
  }
  else
  {
    freereg(fs_0, info);
    freereg(fs_0, v4);
  }
};

// Line 428: range 00000000152FCA3A-00000000152FCB68
int __fastcall addk(FuncState_0 *fs_0, TValue *key, TValue *v)
{
  LexState *ls; // rax
  Proto_0 *f; // rbp
  TValue *v6; // rax
  TValue *v7; // r13
  int sizek; // ebx
  int nk; // r15d
  Value_0 v10; // rax
  __int64 v11; // rsi
  lua_State_0 *L; // [rsp+8h] [rbp-40h]

  ls = fs_0->ls;
  L = ls->L;
  f = fs_0->f;
  v6 = luaH_set(L, ls->h, key);
  v7 = v6;
  if ( v6->tt_ != 19
    || (v10.gc = (GCObject_0 *)v6->value_, nk = v10.b, fs_0->nk <= v10.b)
    || (v11 = (__int64)&f->k[v10.b], ((*(_BYTE *)(v11 + 8) ^ LOBYTE(v->tt_)) & 0x3F) != 0)
    || !luaV_equalobj(0LL, (const TValue *)v11, v) )
  {
    sizek = f->sizek;
    nk = fs_0->nk;
    v7->value_.i = nk;
    v7->tt_ = 19;
    if ( f->sizek <= nk )
      f->k = (TValue *)luaM_growaux_(L, f->k, &f->sizek, 0x10uLL, 0x3FFFFFF, "constants");
    while ( f->sizek > sizek )
      f->k[sizek++].tt_ = 0;
    f->k[nk] = (TValue)_mm_loadu_si128((const __m128i *)v);
    ++fs_0->nk;
    if ( (v->tt_ & 0x40) != 0 && (f->marked & 4) != 0 && (*(_BYTE *)(v->value_.i + 9) & 3) != 0 )
      luaC_barrier_(L, (GCObject_0 *)f, v->value_.gc);
  }
  return nk;
};

// Line 458: range 00000000152FD09F-00000000152FD0C4
int __fastcall luaK_stringK(FuncState_0 *fs_0, TString_0 *s)
{
  TValue o; // [rsp+0h] [rbp-18h] BYREF

  o.value_.i = (lua_Integer)s;
  o.tt_ = s->tt | 0x40;
  return addk(fs_0, &o, &o);
};

// Line 471: range 00000000152FD0C5-00000000152FD0F3
int __fastcall luaK_intK(FuncState_0 *fs_0, lua_Integer n)
{
  TValue o; // [rsp+0h] [rbp-28h] BYREF
  TValue k; // [rsp+10h] [rbp-18h] BYREF

  k.value_.i = n;
  k.tt_ = 2;
  o.value_.i = n;
  o.tt_ = 19;
  return addk(fs_0, &k, &o);
};

// Line 481: range 00000000152FCB6A-00000000152FCB8A
int __fastcall luaK_numberK(FuncState_0 *fs_0, lua_Number a2, lua_Number r)
{
  TValue o; // [rsp+0h] [rbp-18h] BYREF

  o.value_.n = a2;
  o.tt_ = 3;
  return addk(fs_0, &o, &o);
};

// Line 491: range 00000000152FCB8B-00000000152FCBA9
int __fastcall boolK(FuncState_0 *fs_0, int b)
{
  TValue o; // [rsp+0h] [rbp-18h] BYREF

  o.value_.b = b;
  o.tt_ = 1;
  return addk(fs_0, &o, &o);
};

// Line 501: range 00000000152FCBAA-00000000152FCBDC
int __fastcall nilK(FuncState_0 *fs_0)
{
  TValue v; // [rsp+0h] [rbp-28h] BYREF
  TValue k; // [rsp+10h] [rbp-18h] BYREF

  v.tt_ = 0;
  k.value_.i = (lua_Integer)fs_0->ls->h;
  k.tt_ = 69;
  return addk(fs_0, &k, &v);
};

// Line 516: range 00000000152FD0F4-00000000152FD16C
void __fastcall luaK_setreturns(FuncState_0 *fs_0, expdesc_0 *e, int nresults)
{
  Instruction *v3; // rax
  Instruction *v4; // rcx
  int v5; // edx

  if ( e->k == VCALL )
  {
    v3 = &fs_0->f->code[e->u.info];
    *v3 = *v3 & 0xFF803FFF | ((nresults + 1) << 14) & 0x7FC000;
  }
  else if ( e->k == VVARARG )
  {
    v4 = &fs_0->f->code[e->u.info];
    v5 = *v4 & 0x7FFFFF | ((nresults + 1) << 23);
    *v4 = v5;
    *v4 = (fs_0->freereg << 6) | v5 & 0xFFFFC03F;
    luaK_reserveregs(fs_0, 1);
  }
};

// Line 540: range 00000000152FD16D-00000000152FD1BD
void __fastcall luaK_setoneret(FuncState_0 *fs_0, expdesc_0 *e)
{
  Instruction *v2; // rax

  if ( e->k == VCALL )
  {
    e->k = VNONRELOC;
    e->u.info = (unsigned __int8)(fs_0->f->code[e->u.info] >> 6);
  }
  else if ( e->k == VVARARG )
  {
    v2 = &fs_0->f->code[e->u.info];
    *v2 = *v2 & 0x7FFFFF | 0x1000000;
    e->k = VRELOCABLE;
  }
};

// Line 556: range 00000000152FD1BF-00000000152FD263
void __fastcall luaK_dischargevars(FuncState_0 *fs_0, expdesc_0 *e)
{
  expkind k; // eax
  OpCode v4; // esi

  k = e->k;
  if ( e->k == VINDEXED )
  {
    freereg(fs_0, e->u.ind.idx);
    if ( e->u.ind.vt == 8 )
    {
      freereg(fs_0, e->u.ind.t);
      v4 = OP_GETTABLE;
    }
    else
    {
      v4 = OP_GETTABUP;
    }
    e->u.info = luaK_codeABC(fs_0, v4, 0, e->u.ind.t, e->u.ind.idx);
    e->k = VRELOCABLE;
  }
  else if ( (unsigned int)k > VINDEXED )
  {
    if ( (unsigned int)(k - 13) <= 1 )
      luaK_setoneret(fs_0, e);
  }
  else if ( k == VLOCAL )
  {
    e->k = VNONRELOC;
  }
  else if ( k == VUPVAL )
  {
    e->u.info = luaK_codeABC(fs_0, OP_GETUPVAL, 0, e->u.info, 0);
    e->k = VRELOCABLE;
  }
};

// Line 595: range 00000000152FD265-00000000152FD353
void __fastcall discharge2reg(FuncState_0 *fs_0, expdesc_0 *e, int reg)
{
  lua_Number v3; // xmm1_8
  int v5; // eax
  int v6; // eax
  Instruction *v7; // rax
  int info; // ecx

  luaK_dischargevars(fs_0, e);
  switch ( e->k )
  {
    case VNIL:
      luaK_nil(fs_0, reg, 1);
      goto LABEL_3;
    case VTRUE:
    case VFALSE:
      luaK_codeABC(fs_0, OP_LOADBOOL, reg, e->k == VTRUE, 0);
      goto LABEL_3;
    case VK:
      luaK_codek(fs_0, reg, e->u.info);
      goto LABEL_3;
    case VKFLT:
      v5 = luaK_numberK(fs_0, e->u.nval, v3);
      luaK_codek(fs_0, reg, v5);
      goto LABEL_3;
    case VKINT:
      v6 = luaK_intK(fs_0, e->u.ival);
      luaK_codek(fs_0, reg, v6);
      goto LABEL_3;
    case VNONRELOC:
      info = e->u.info;
      if ( info != reg )
        luaK_codeABC(fs_0, OP_MOVE, reg, info, 0);
      goto LABEL_3;
    case VRELOCABLE:
      v7 = &fs_0->f->code[e->u.info];
      *v7 = ((_WORD)reg << 6) & 0x3FC0 | *v7 & 0xFFFFC03F;
LABEL_3:
      e->u.info = reg;
      e->k = VNONRELOC;
      break;
    default:
      return;
  }
};

// Line 642: range 00000000152FD47F-00000000152FD4B3
void __fastcall discharge2anyreg(FuncState_0 *fs_0, expdesc_0 *e)
{
  if ( e->k != VNONRELOC )
  {
    luaK_reserveregs(fs_0, 1);
    discharge2reg(fs_0, e, fs_0->freereg - 1);
  }
};

// Line 649: range 00000000152FCF5C-00000000152FCF95
int __fastcall code_loadbool(FuncState_0 *fs_0, int A, int b, int jump)
{
  luaK_getlabel(fs_0);
  return luaK_codeABC(fs_0, OP_LOADBOOL, A, b, jump);
};

// Line 659: range 00000000152FC837-00000000152FC872
int __fastcall need_value(FuncState_0 *fs_0, int list)
{
  while ( 1 )
  {
    if ( list == -1 )
      return 0;
    if ( (*getjumpcontrol(fs_0, list) & 0x3F) != 35 )
      break;
    list = getjump(fs_0, list);
  }
  return 1;
};

// Line 675: range 00000000152FD358-00000000152FD47A
void __fastcall exp2reg(FuncState_0 *fs_0, expdesc_0 *e, int reg)
{
  int t; // esi
  int f; // r13d
  int v7; // r13d
  int v8; // r15d
  int v9; // r14d
  int v10; // r13d

  discharge2reg(fs_0, e, reg);
  if ( e->k == VJMP )
    luaK_concat(fs_0, &e->t, e->u.info);
  t = e->t;
  f = e->f;
  if ( t != f )
  {
    if ( need_value(fs_0, t) || need_value(fs_0, f) )
    {
      if ( e->k == VJMP )
        v7 = -1;
      else
        v7 = luaK_jump(fs_0);
      v8 = code_loadbool(fs_0, reg, 0, 1);
      v9 = code_loadbool(fs_0, reg, 1, 0);
      luaK_patchtohere(fs_0, v7);
    }
    else
    {
      v9 = -1;
      v8 = -1;
    }
    v10 = luaK_getlabel(fs_0);
    patchlistaux(fs_0, e->f, v10, reg, v8);
    patchlistaux(fs_0, e->t, v10, reg, v9);
  }
  e->t = -1;
  e->f = -1;
  e->u.info = reg;
  e->k = VNONRELOC;
};

// Line 703: range 00000000152FD5DA-00000000152FD61B
void __fastcall luaK_exp2nextreg(FuncState_0 *fs_0, expdesc_0 *e)
{
  luaK_dischargevars(fs_0, e);
  freeexp(fs_0, e);
  luaK_reserveregs(fs_0, 1);
  exp2reg(fs_0, e, fs_0->freereg - 1);
};

// Line 715: range 00000000152FD61C-00000000152FD66D
int __fastcall luaK_exp2anyreg(FuncState_0 *fs_0, expdesc_0 *e)
{
  int info; // edx

  luaK_dischargevars(fs_0, e);
  if ( e->k != VNONRELOC )
    goto LABEL_4;
  if ( e->t == e->f )
    return e->u.info;
  info = e->u.info;
  if ( info < fs_0->nactvar )
  {
LABEL_4:
    luaK_exp2nextreg(fs_0, e);
    return e->u.info;
  }
  exp2reg(fs_0, e, info);
  return e->u.info;
};

// Line 735: range 00000000152FD66F-00000000152FD68A
void __fastcall luaK_exp2anyregup(FuncState_0 *fs_0, expdesc_0 *e)
{
  if ( e->k != VUPVAL || e->t != e->f )
    luaK_exp2anyreg(fs_0, e);
};

// Line 744: range 00000000152FD68B-00000000152FD6A6
void __fastcall luaK_exp2val(FuncState_0 *fs_0, expdesc_0 *e)
{
  if ( e->t == e->f )
    luaK_dischargevars(fs_0, e);
  else
    luaK_exp2anyreg(fs_0, e);
};

// Line 758: range 00000000152FD6A8-00000000152FD740
int __fastcall luaK_exp2RK(FuncState_0 *fs_0, expdesc_0 *e)
{
  lua_Number v2; // xmm1_8
  int result; // eax

  luaK_exp2val(fs_0, e);
  switch ( e->k )
  {
    case VNIL:
      e->u.info = nilK(fs_0);
      goto vk;
    case VTRUE:
      e->u.info = boolK(fs_0, 1);
      goto vk;
    case VFALSE:
      e->u.info = boolK(fs_0, 0);
      goto vk;
    case VK:
      goto vk;
    case VKFLT:
      e->u.info = luaK_numberK(fs_0, e->u.nval, v2);
      goto vk;
    case VKINT:
      e->u.info = luaK_intK(fs_0, e->u.ival);
vk:
      e->k = VK;
      result = e->u.info;
      if ( result > 255 )
        goto LABEL_4;
      BYTE1(result) |= 1u;
      break;
    default:
LABEL_4:
      result = luaK_exp2anyreg(fs_0, e);
      break;
  }
  return result;
};

// Line 782: range 00000000152FD802-00000000152FD8A7
void __fastcall luaK_storevar(FuncState_0 *fs_0, expdesc_0 *var, expdesc_0 *ex)
{
  expkind k; // r13d
  int v5; // eax
  int v6; // eax

  k = var->k;
  if ( var->k == VUPVAL )
  {
    v5 = luaK_exp2anyreg(fs_0, ex);
    luaK_codeABC(fs_0, OP_SETUPVAL, v5, var->u.info, 0);
    goto LABEL_4;
  }
  if ( k == VINDEXED )
  {
    if ( var->u.ind.vt != 8 )
      k = VLOCAL;
    v6 = luaK_exp2RK(fs_0, ex);
    luaK_codeABC(fs_0, (OpCode)k, var->u.ind.t, var->u.ind.idx, v6);
    goto LABEL_4;
  }
  if ( k != VLOCAL )
  {
LABEL_4:
    freeexp(fs_0, ex);
    return;
  }
  freeexp(fs_0, ex);
  exp2reg(fs_0, ex, var->u.info);
};

// Line 809: range 00000000152FD8A9-00000000152FD921
void __fastcall luaK_self(FuncState_0 *fs_0, expdesc_0 *e, expdesc_0 *key)
{
  int info; // r13d
  int v5; // eax

  luaK_exp2anyreg(fs_0, e);
  info = e->u.info;
  freeexp(fs_0, e);
  e->u.info = fs_0->freereg;
  e->k = VNONRELOC;
  luaK_reserveregs(fs_0, 2);
  v5 = luaK_exp2RK(fs_0, key);
  luaK_codeABC(fs_0, OP_SELF, e->u.info, info, v5);
  freeexp(fs_0, key);
};

// Line 826: range 00000000152FC874-00000000152FC89D
void __fastcall negatecondition(FuncState_0 *fs_0, expdesc_0 *e)
{
  Instruction *v2; // rax
  int v3; // ecx

  v2 = getjumpcontrol(fs_0, e->u.info);
  if ( (*v2 & 0x3FC0) != 0 )
    v3 = 0;
  else
    v3 = 64;
  *v2 = v3 | *v2 & 0xFFFFC03F;
};

// Line 839: range 00000000152FD4B4-00000000152FD53A
int __fastcall jumponcond(FuncState_0 *fs_0, expdesc_0 *e, int cond)
{
  Instruction v4; // edx

  if ( e->k == VRELOCABLE && (v4 = fs_0->f->code[e->u.info], (v4 & 0x3F) == 27) )
  {
    --fs_0->pc;
    return condjump(fs_0, OP_TEST, v4 >> 23, 0, cond == 0);
  }
  else
  {
    discharge2anyreg(fs_0, e);
    freeexp(fs_0, e);
    return condjump(fs_0, OP_TESTSET, 255, e->u.info, cond);
  }
};

// Line 857: range 00000000152FD922-00000000152FD99D
void __fastcall luaK_goiftrue(FuncState_0 *fs_0, expdesc_0 *e)
{
  expkind k; // eax
  int info; // edx

  luaK_dischargevars(fs_0, e);
  k = e->k;
  if ( e->k <= (unsigned int)VKINT )
  {
    if ( (unsigned int)k >= VK )
    {
      info = -1;
      goto LABEL_9;
    }
    if ( k == VTRUE )
    {
      info = -1;
      goto LABEL_9;
    }
    goto LABEL_6;
  }
  if ( k != VJMP )
  {
LABEL_6:
    info = jumponcond(fs_0, e, 0);
    goto LABEL_9;
  }
  negatecondition(fs_0, e);
  info = e->u.info;
LABEL_9:
  luaK_concat(fs_0, &e->f, info);
  luaK_patchtohere(fs_0, e->t);
  e->t = -1;
};

// Line 884: range 00000000152FD99E-00000000152FDA08
void __fastcall luaK_goiffalse(FuncState_0 *fs_0, expdesc_0 *e)
{
  expkind k; // eax
  int info; // edx

  luaK_dischargevars(fs_0, e);
  k = e->k;
  if ( e->k == VFALSE )
  {
    info = -1;
  }
  else if ( k == VJMP )
  {
    info = e->u.info;
  }
  else if ( k == VNIL )
  {
    info = -1;
  }
  else
  {
    info = jumponcond(fs_0, e, 1);
  }
  luaK_concat(fs_0, &e->t, info);
  luaK_patchtohere(fs_0, e->f);
  e->f = -1;
};

// Line 910: range 00000000152FD53C-00000000152FD5D8
void __fastcall codenot(FuncState_0 *fs_0, expdesc_0 *e)
{
  int f; // eax
  int t; // esi

  luaK_dischargevars(fs_0, e);
  switch ( e->k )
  {
    case VNIL:
    case VFALSE:
      e->k = VTRUE;
      break;
    case VTRUE:
    case VK:
    case VKFLT:
    case VKINT:
      e->k = VFALSE;
      break;
    case VNONRELOC:
    case VRELOCABLE:
      discharge2anyreg(fs_0, e);
      freeexp(fs_0, e);
      e->u.info = luaK_codeABC(fs_0, OP_NOT, 0, e->u.info, 0);
      e->k = VRELOCABLE;
      break;
    case VJMP:
      negatecondition(fs_0, e);
      break;
    default:
      break;
  }
  f = e->f;
  t = e->t;
  e->f = t;
  e->t = f;
  removevalues(fs_0, t);
  removevalues(fs_0, e->t);
};

// Line 946: range 00000000152FDA0A-00000000152FDA3A
void __fastcall luaK_indexed(FuncState_0 *fs_0, expdesc_0 *t, expdesc_0 *k)
{
  lu_byte v3; // al

  t->u.ind.t = t->u.info;
  t->u.ind.idx = luaK_exp2RK(fs_0, k);
  if ( t->k == VUPVAL )
    v3 = 9;
  else
    v3 = 8;
  t->u.ind.vt = v3;
  t->k = VINDEXED;
};

// Line 960: range 00000000152FCBDD-00000000152FCCBC
int __fastcall validop(int op, TValue *v1, TValue *v2)
{
  int result; // eax
  lua_Integer i[2]; // [rsp+8h] [rbp-10h] BYREF

  if ( op > 11 )
  {
    if ( op != 13 )
      return 1;
    goto LABEL_9;
  }
  if ( op >= 7 )
  {
LABEL_9:
    if ( v1->tt_ == 19 )
    {
      i[0] = v1->value_.i;
    }
    else
    {
      result = luaV_tointeger(v1, i, 0);
      if ( !result )
        return result;
    }
    return v2->tt_ == 19 || luaV_tointeger(v2, i, 0) != 0;
  }
  if ( op == 3 )
    goto LABEL_6;
  if ( op < 3 )
    return 1;
  if ( (unsigned int)(op - 5) > 1 )
    return 1;
LABEL_6:
  if ( v2->tt_ == 19 )
    return (double)(int)v2->value_.i != 0.0;
  return v2->value_.n != 0.0;
};

// Line 979: range 00000000152FCCBD-00000000152FCD9F
int __fastcall constfolding(FuncState_0 *fs_0, int op, expdesc_0 *e1, const expdesc_0 *e2)
{
  lua_Integer i; // xmm0_8
  TValue res; // [rsp+0h] [rbp-58h] BYREF
  TValue v2; // [rsp+10h] [rbp-48h] BYREF
  TValue v1; // [rsp+20h] [rbp-38h] BYREF

  if ( !tonumeral(e1, &v1) || !tonumeral(e2, &v2) || !validop(op, &v1, &v2) )
    return 0;
  luaO_arith(fs_0->ls->L, op, &v1, &v2, &res);
  if ( res.tt_ == 19 )
  {
    e1->k = VKINT;
    e1->u.ival = res.value_.i;
    return 1;
  }
  else
  {
    i = res.value_.i;
    if ( res.value_.n == 0.0 )
    {
      return 0;
    }
    else
    {
      e1->k = VKFLT;
      e1->u.ival = i;
      return 1;
    }
  }
};

// Line 1004: range 00000000152FDAC2-00000000152FDB22
void __fastcall codeunexpval(FuncState_0 *fs_0, OpCode op, expdesc_0 *e, int line)
{
  int v6; // r14d

  v6 = luaK_exp2anyreg(fs_0, e);
  freeexp(fs_0, e);
  e->u.info = luaK_codeABC(fs_0, op, 0, v6, 0);
  e->k = VRELOCABLE;
  luaK_fixline(fs_0, line);
};

// Line 1023: range 00000000152FDB82-00000000152FDC02
void __fastcall codebinexpval(FuncState_0 *fs_0, OpCode op, expdesc_0 *e1, expdesc_0 *e2, int line)
{
  int v7; // r15d
  int v8; // r14d

  v7 = luaK_exp2RK(fs_0, e2);
  v8 = luaK_exp2RK(fs_0, e1);
  freeexps(fs_0, e1, e2);
  e1->u.info = luaK_codeABC(fs_0, op, 0, v8, v7);
  e1->k = VRELOCABLE;
  luaK_fixline(fs_0, line);
};

// Line 1037: range 00000000152FD742-00000000152FD800
void __fastcall codecomp(FuncState_0 *fs_0, BinOpr_0 opr, expdesc_0 *e1, expdesc_0 *e2)
{
  int info; // r14d
  int v7; // r13d

  if ( e1->k == VK )
    info = e1->u.info | 0x100;
  else
    info = e1->u.info;
  v7 = luaK_exp2RK(fs_0, e2);
  freeexps(fs_0, e1, e2);
  if ( opr == OPR_NE )
  {
    e1->u.info = condjump(fs_0, OP_EQ, 0, info, v7);
  }
  else if ( (unsigned int)opr < OPR_NE || (unsigned int)(opr - 17) > 1 )
  {
    e1->u.info = condjump(fs_0, (OpCode)(opr + 18), 1, info, v7);
  }
  else
  {
    e1->u.info = condjump(fs_0, (OpCode)(opr + 15), 1, v7, info);
  }
  e1->k = VJMP;
};

// Line 1066: range 00000000152FDB23-00000000152FDB80
void __fastcall luaK_prefix(FuncState_0 *fs_0, UnOpr_0 op, expdesc_0 *e, int line)
{
  if ( op == OPR_NOT )
  {
    codenot(fs_0, e);
    return;
  }
  if ( (unsigned int)op > OPR_NOT )
  {
    if ( op != OPR_LEN )
      return;
  }
  else if ( constfolding(fs_0, op + 12, e, &ef_5478) )
  {
    return;
  }
  codeunexpval(fs_0, (OpCode)(op + 25), e, line);
};

// Line 1086: range 00000000152FDA3C-00000000152FDAAA
void __fastcall luaK_infix(FuncState_0 *fs_0, BinOpr_0 op, expdesc_0 *v)
{
  if ( op == OPR_AND )
  {
    luaK_goiftrue(fs_0, v);
  }
  else
  {
    if ( (unsigned int)op > OPR_AND )
    {
      if ( op == OPR_OR )
      {
        luaK_goiffalse(fs_0, v);
        return;
      }
      goto LABEL_12;
    }
    if ( (unsigned int)op > OPR_SHR )
    {
      if ( op == OPR_CONCAT )
      {
        luaK_exp2nextreg(fs_0, v);
        return;
      }
LABEL_12:
      luaK_exp2RK(fs_0, v);
      return;
    }
    if ( !tonumeral(v, 0LL) )
      luaK_exp2RK(fs_0, v);
  }
};

// Line 1126: range 00000000152FDC03-00000000152FDD47
void __fastcall luaK_posfix(FuncState_0 *fs_0, BinOpr_0 op, expdesc_0 *e1, expdesc_0 *e2, int line)
{
  Instruction *v8; // rax

  switch ( op )
  {
    case OPR_ADD:
    case OPR_SUB:
    case OPR_MUL:
    case OPR_MOD:
    case OPR_POW:
    case OPR_DIV:
    case OPR_IDIV:
    case OPR_BAND:
    case OPR_BOR:
    case OPR_BXOR:
    case OPR_SHL:
    case OPR_SHR:
      if ( !constfolding(fs_0, op, e1, e2) )
        codebinexpval(fs_0, (OpCode)(op + 13), e1, e2, line);
      break;
    case OPR_CONCAT:
      luaK_exp2val(fs_0, e2);
      if ( e2->k == VRELOCABLE && (fs_0->f->code[e2->u.info] & 0x3F) == 29 )
      {
        freeexp(fs_0, e1);
        v8 = &fs_0->f->code[e2->u.info];
        *v8 = (e1->u.info << 23) | *v8 & 0x7FFFFF;
        e1->k = VRELOCABLE;
        e1->u.info = e2->u.info;
      }
      else
      {
        luaK_exp2nextreg(fs_0, e2);
        codebinexpval(fs_0, OP_CONCAT, e1, e2, line);
      }
      break;
    case OPR_EQ:
    case OPR_LT:
    case OPR_LE:
    case OPR_NE:
    case OPR_GT:
    case OPR_GE:
      codecomp(fs_0, op, e1, e2);
      break;
    case OPR_AND:
      luaK_dischargevars(fs_0, e2);
      luaK_concat(fs_0, &e2->f, e1->f);
      *(__m128i *)&e1->k = _mm_loadu_si128((const __m128i *)e2);
      *(_QWORD *)&e1->t = *(_QWORD *)&e2->t;
      break;
    case OPR_OR:
      luaK_dischargevars(fs_0, e2);
      luaK_concat(fs_0, &e2->t, e1->t);
      *(__m128i *)&e1->k = _mm_loadu_si128((const __m128i *)e2);
      *(_QWORD *)&e1->t = *(_QWORD *)&e2->t;
      break;
    default:
      return;
  }
};

// Line 1178: range 00000000152FDAAC-00000000152FDAC1
void __fastcall luaK_fixline(FuncState_0 *fs_0, int line)
{
  fs_0->f->lineinfo[fs_0->pc - 1] = line;
};

// Line 1189: range 00000000152FDD48-00000000152FDDD0
void __fastcall luaK_setlist(FuncState_0 *fs_0, int base, int nelems, int tostore)
{
  int v4; // ebx

  v4 = (nelems - 1) / 50 + 1;
  if ( tostore == -1 )
    tostore = 0;
  if ( v4 <= 511 )
  {
    luaK_codeABC(fs_0, OP_SETLIST, (unsigned __int8)base, tostore, v4);
  }
  else
  {
    if ( v4 > 0x3FFFFFF )
      luaX_syntaxerror(fs_0->ls, "constructor too long");
    luaK_codeABC(fs_0, OP_SETLIST, (unsigned __int8)base, tostore, 0);
    codeextraarg(fs_0, v4);
  }
  fs_0->freereg = base + 1;
};
