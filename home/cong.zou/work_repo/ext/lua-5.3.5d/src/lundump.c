// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lundump.c

// Line 39: range 00000000152F7294-00000000152F72B9
void __fastcall __noreturn error(LoadState *S, const char *why)
{
  luaO_pushfstring(S->L, "%s: %s precompiled chunk", S->name, why);
  luaD_throw(S->L, 3);
};

// Line 51: range 00000000152F72BE-00000000152F72DA
void __fastcall LoadBlock(LoadState *S, void *b, size_t size)
{
  if ( luaZ_read(S->Z, b, size) )
    error(S, "truncated");
};

// Line 60: range 00000000152F731A-00000000152F7336
lu_byte __fastcall LoadByte(LoadState *S)
{
  lu_byte x[9]; // [rsp+Fh] [rbp-9h] BYREF

  LoadBlock(S, x, 1uLL);
  return x[0];
};

// Line 67: range 00000000152F7337-00000000152F7352
int __fastcall LoadInt(LoadState *S)
{
  int x[3]; // [rsp+Ch] [rbp-Ch] BYREF

  LoadBlock(S, x, 4uLL);
  return x[0];
};

// Line 74: range 00000000152F72FC-00000000152F7319
lua_Number __fastcall LoadNumber(LoadState *S)
{
  lua_Number x[2]; // [rsp+8h] [rbp-10h] BYREF

  LoadBlock(S, x, 8uLL);
  return x[0];
};

// Line 81: range 00000000152F72DF-00000000152F72FB
lua_Integer __fastcall LoadInteger(LoadState *S)
{
  lua_Integer x[2]; // [rsp+8h] [rbp-10h] BYREF

  LoadBlock(S, x, 8uLL);
  return x[0];
};

// Line 88: range 00000000152F74F0-00000000152F7589
TString_0 *__fastcall LoadString(LoadState *S)
{
  size_t v1; // rdx
  TString_0 *v2; // rbp
  char buff[40]; // [rsp+0h] [rbp-48h] BYREF
  size_t size[4]; // [rsp+28h] [rbp-20h] BYREF

  size[0] = LoadByte(S);
  if ( size[0] == 255 )
    LoadBlock(S, size, 8uLL);
  if ( !size[0] )
    return 0LL;
  v1 = size[0] - 1;
  size[0] = v1;
  if ( v1 > 0x28 )
  {
    v2 = luaS_createlngstrobj(S->L, v1);
    LoadBlock(S, &v2[1], size[0]);
  }
  else
  {
    LoadBlock(S, buff, v1);
    return luaS_newlstr(S->L, buff, size[0]);
  }
  return v2;
};

// Line 107: range 00000000152F758B-00000000152F75E1
void __fastcall LoadCode(LoadState *S, Proto_0 *f)
{
  int Int; // r13d
  Instruction *v3; // rax

  Int = LoadInt(S);
  v3 = (Instruction *)luaM_realloc_(S->L, 0LL, 0LL, 4LL * Int);
  f->code = v3;
  f->sizecode = Int;
  LoadBlock(S, v3, 4LL * Int);
};

// Line 118: range 00000000152F75E2-00000000152F76DA
void __fastcall LoadConstants(LoadState *S, Proto_0 *f)
{
  int Int; // ebp
  int i; // edx
  int j; // r14d
  TValue *v5; // rbx
  TString_0 *String; // rax

  Int = LoadInt(S);
  f->k = (TValue *)luaM_realloc_(S->L, 0LL, 0LL, 16LL * Int);
  f->sizek = Int;
  for ( i = 0; i < Int; ++i )
    f->k[i].tt_ = 0;
  for ( j = 0; j < Int; ++j )
  {
    v5 = &f->k[j];
    switch ( LoadByte(S) )
    {
      case 0u:
        v5->tt_ = 0;
        break;
      case 1u:
        v5->value_.b = LoadByte(S);
        v5->tt_ = 1;
        break;
      case 3u:
        v5->value_.n = LoadNumber(S);
        v5->tt_ = 3;
        break;
      case 4u:
      case 0x14u:
        String = LoadString(S);
        v5->value_.i = (lua_Integer)String;
        v5->tt_ = String->tt | 0x40;
        break;
      case 0x13u:
        v5->value_.i = LoadInteger(S);
        v5->tt_ = 19;
        break;
      default:
        continue;
    }
  }
};

// Line 152: range 00000000152F78AD-00000000152F7958
void __fastcall LoadProtos(LoadState *S, Proto_0 *f)
{
  int Int; // r12d
  int i; // edx
  int j; // r14d
  Proto **v5; // r15

  Int = LoadInt(S);
  f->p = (Proto **)luaM_realloc_(S->L, 0LL, 0LL, 8LL * Int);
  f->sizep = Int;
  for ( i = 0; i < Int; ++i )
    f->p[i] = 0LL;
  for ( j = 0; j < Int; ++j )
  {
    v5 = &f->p[j];
    *v5 = luaF_newproto(S->L);
    LoadFunction(S, f->p[j], f->source);
  }
};

// Line 166: range 00000000152F76DB-00000000152F7782
void __fastcall LoadUpvalues(LoadState *S, Proto_0 *f)
{
  int Int; // r12d
  int i; // edx
  int j; // r14d
  Upvaldesc_0 *v5; // r15
  Upvaldesc_0 *v6; // rbx

  Int = LoadInt(S);
  f->upvalues = (Upvaldesc_0 *)luaM_realloc_(S->L, 0LL, 0LL, 16LL * Int);
  f->sizeupvalues = Int;
  for ( i = 0; i < Int; ++i )
    f->upvalues[i].name = 0LL;
  for ( j = 0; j < Int; ++j )
  {
    v5 = &f->upvalues[j];
    v5->instack = LoadByte(S);
    v6 = &f->upvalues[j];
    v6->idx = LoadByte(S);
  }
};

// Line 180: range 00000000152F7783-00000000152F78AC
void __fastcall LoadDebug(LoadState *S, Proto_0 *f)
{
  int Int; // r13d
  int *v3; // rax
  int v4; // r13d
  int i; // edx
  int j; // r14d
  __int64 v7; // rbx
  LocVar_0 *v8; // r15
  LocVar_0 *v9; // r15
  LocVar_0 *v10; // rbx
  int v11; // r14d
  int k; // r13d
  Upvaldesc_0 *v13; // rbx

  Int = LoadInt(S);
  v3 = (int *)luaM_realloc_(S->L, 0LL, 0LL, 4LL * Int);
  f->lineinfo = v3;
  f->sizelineinfo = Int;
  LoadBlock(S, v3, 4LL * Int);
  v4 = LoadInt(S);
  f->locvars = (LocVar_0 *)luaM_realloc_(S->L, 0LL, 0LL, 16LL * v4);
  f->sizelocvars = v4;
  for ( i = 0; i < v4; ++i )
    f->locvars[i].varname = 0LL;
  for ( j = 0; j < v4; ++j )
  {
    v7 = j;
    v8 = &f->locvars[v7];
    v8->varname = LoadString(S);
    v9 = &f->locvars[v7];
    v9->startpc = LoadInt(S);
    v10 = &f->locvars[v7];
    v10->endpc = LoadInt(S);
  }
  v11 = LoadInt(S);
  for ( k = 0; k < v11; ++k )
  {
    v13 = &f->upvalues[k];
    v13->name = LoadString(S);
  }
};

// Line 202: range 00000000152F7959-00000000152F79EB
void __fastcall LoadFunction(LoadState *S, Proto_0 *f, TString_0 *psource)
{
  TString_0 *String; // rax

  String = LoadString(S);
  f->source = String;
  if ( !String )
    f->source = psource;
  f->linedefined = LoadInt(S);
  f->lastlinedefined = LoadInt(S);
  f->numparams = LoadByte(S);
  f->is_vararg = LoadByte(S);
  f->maxstacksize = LoadByte(S);
  LoadCode(S, f);
  LoadConstants(S, f);
  LoadUpvalues(S, f);
  LoadProtos(S, f);
  LoadDebug(S, f);
};

// Line 219: range 00000000152F7353-00000000152F73B3
void __fastcall checkliteral(LoadState *S, const char *s, const char *msg)
{
  unsigned __int64 v4; // kr08_8
  char buff[12]; // [rsp+4h] [rbp-34h] BYREF

  v4 = strlen(s) + 1;
  LoadBlock(S, buff, v4 - 1);
  if ( memcmp(s, buff, v4 - 1) )
    error(S, msg);
};

// Line 228: range 00000000152F73B8-00000000152F73F2
void __fastcall fchecksize(LoadState *S, size_t size, const char *tname)
{
  const char *v4; // rax

  if ( LoadByte(S) != size )
  {
    v4 = luaO_pushfstring(S->L, "%s size mismatch in", tname);
    error(S, v4);
  }
};

// Line 236: range 00000000152F73F7-00000000152F74EB
void __fastcall checkHeader(LoadState *S)
{
  checkliteral(S, off_1B2354F1, "not a");
  if ( LoadByte(S) != 83 )
    error(S, "version mismatch in");
  if ( LoadByte(S) )
    error(S, "format mismatch in");
  checkliteral(S, off_1B2354F5, "corrupted");
  fchecksize(S, 4uLL, tname);
  fchecksize(S, 8uLL, "size_t");
  fchecksize(S, 4uLL, "Instruction");
  fchecksize(S, 8uLL, "lua_Integer");
  fchecksize(S, 8uLL, "lua_Number");
  if ( LoadInteger(S) != 22136 )
    error(S, "endianness mismatch in");
  if ( LoadNumber(S) != 370.5 )
    error(S, "float format mismatch in");
};

// Line 258: range 00000000152F79ED-00000000152F7A89
LClosure_0 *__fastcall luaU_undump(lua_State_0 *L, ZIO *Z, const char *name)
{
  char v3; // al
  lu_byte v4; // al
  LClosure_0 *v5; // rbp
  StkId top; // rax
  Proto_0 *v7; // rax
  LoadState S; // [rsp+0h] [rbp-38h] BYREF

  v3 = *name;
  if ( v3 == 61 || v3 == 64 )
  {
    S.name = name + 1;
  }
  else if ( v3 == 27 )
  {
    S.name = "binary string";
  }
  else
  {
    S.name = name;
  }
  S.L = L;
  S.Z = Z;
  checkHeader(&S);
  v4 = LoadByte(&S);
  v5 = luaF_newLclosure(L, v4);
  top = L->top;
  top->value_.i = (lua_Integer)v5;
  top->tt_ = 70;
  luaD_inctop(L);
  v7 = luaF_newproto(L);
  v5->p = v7;
  LoadFunction(&S, v7, 0LL);
  return v5;
};
