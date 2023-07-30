// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/ldump.c

// Line 41: range 00000000152EFD53-00000000152EFD77
void __fastcall DumpBlock(const void *b, size_t size, DumpState *D)
{
  if ( !D->status )
  {
    if ( size )
      D->status = D->writer(D->L, b, size, D->data);
  }
};

// Line 52: range 00000000152EFD78-00000000152EFD97
void __fastcall DumpByte(int y, DumpState *D)
{
  lu_byte x[9]; // [rsp+Fh] [rbp-9h] BYREF

  x[0] = y;
  DumpBlock(x, 1uLL, D);
};

// Line 58: range 00000000152EFD98-00000000152EFDB6
void __fastcall DumpInt(int x, DumpState *D)
{
  int b[3]; // [rsp+Ch] [rbp-Ch] BYREF

  b[0] = x;
  DumpBlock(b, 4uLL, D);
};

// Line 63: range 00000000152EFDB7-00000000152EFDD7
void __fastcall DumpNumber(double a1, lua_Number x, DumpState *D)
{
  double b[2]; // [rsp+8h] [rbp-10h] BYREF

  b[0] = a1;
  DumpBlock(b, 8uLL, D);
};

// Line 68: range 00000000152EFDD8-00000000152EFDF7
void __fastcall DumpInteger(lua_Integer x, DumpState *D)
{
  lua_Integer b[2]; // [rsp+8h] [rbp-10h] BYREF

  b[0] = x;
  DumpBlock(b, 8uLL, D);
};

// Line 73: range 00000000152EFDF8-00000000152EFE81
void __fastcall DumpString(const TString_0 *s, DumpState *D)
{
  unsigned __int64 v3; // rdi
  const TString_0 *v4; // rbx
  size_t size[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( s )
  {
    if ( s->tt == 4 )
      v3 = s->shrlen + 1LL;
    else
      v3 = s->u.lnglen + 1;
    size[0] = v3;
    v4 = s + 1;
    if ( v3 > 0xFE )
    {
      DumpByte(255, D);
      DumpBlock(size, 8uLL, D);
    }
    else
    {
      DumpByte(v3, D);
    }
    DumpBlock(v4, size[0] - 1, D);
  }
  else
  {
    DumpByte(0, D);
  }
};

// Line 90: range 00000000152EFE83-00000000152EFEB1
void __fastcall DumpCode(const Proto_0 *f, DumpState *D)
{
  DumpInt(f->sizecode, D);
  DumpBlock(f->code, 4LL * f->sizecode, D);
};

// Line 98: range 00000000152EFEB2-00000000152EFF42
void __fastcall DumpConstants(const Proto_0 *f, DumpState *D)
{
  lua_Number v2; // xmm1_8
  int sizek; // r14d
  int i; // ebp
  TValue *v5; // rbx

  sizek = f->sizek;
  DumpInt(sizek, D);
  for ( i = 0; i < sizek; ++i )
  {
    v5 = &f->k[i];
    DumpByte(v5->tt_ & 0x3F, D);
    switch ( v5->tt_ & 0x3F )
    {
      case 1:
        DumpByte(v5->value_.b, D);
        break;
      case 3:
        DumpNumber(v5->value_.n, v2, D);
        break;
      case 4:
      case 0x14:
        DumpString((const TString_0 *)v5->value_.gc, D);
        break;
      case 0x13:
        DumpInteger(v5->value_.i, D);
        break;
      default:
        continue;
    }
  }
};

// Line 128: range 00000000152F0145-00000000152F0194
void __fastcall DumpProtos(const Proto_0 *f, DumpState *D)
{
  int sizep; // r13d
  int i; // ebx

  sizep = f->sizep;
  DumpInt(sizep, D);
  for ( i = 0; i < sizep; ++i )
    DumpFunction(f->p[i], f->source, D);
};

// Line 137: range 00000000152EFF43-00000000152EFF9E
void __fastcall DumpUpvalues(const Proto_0 *f, DumpState *D)
{
  int sizeupvalues; // r14d
  int i; // ebp

  sizeupvalues = f->sizeupvalues;
  DumpInt(sizeupvalues, D);
  for ( i = 0; i < sizeupvalues; ++i )
  {
    DumpByte(f->upvalues[i].instack, D);
    DumpByte(f->upvalues[i].idx, D);
  }
};

// Line 147: range 00000000152EFF9F-00000000152F009A
void __fastcall DumpDebug(const Proto_0 *f, DumpState *D)
{
  int sizelineinfo; // ebx
  int sizelocvars; // r14d
  int i; // r13d
  __int64 v5; // rbx
  int sizeupvalues; // r13d
  int j; // ebx

  if ( D->strip )
    sizelineinfo = 0;
  else
    sizelineinfo = f->sizelineinfo;
  DumpInt(sizelineinfo, D);
  DumpBlock(f->lineinfo, 4LL * sizelineinfo, D);
  if ( D->strip )
    sizelocvars = 0;
  else
    sizelocvars = f->sizelocvars;
  DumpInt(sizelocvars, D);
  for ( i = 0; i < sizelocvars; ++i )
  {
    v5 = i;
    DumpString(f->locvars[v5].varname, D);
    DumpInt(f->locvars[v5].startpc, D);
    DumpInt(f->locvars[v5].endpc, D);
  }
  if ( D->strip )
    sizeupvalues = 0;
  else
    sizeupvalues = f->sizeupvalues;
  DumpInt(sizeupvalues, D);
  for ( j = 0; j < sizeupvalues; ++j )
    DumpString(f->upvalues[j].name, D);
};

// Line 166: range 00000000152F009B-00000000152F0144
void __fastcall DumpFunction(const Proto_0 *f, TString_0 *psource, DumpState *D)
{
  TString_0 *source; // rdi

  if ( D->strip || (source = f->source, source == psource) )
    DumpString(0LL, D);
  else
    DumpString(source, D);
  DumpInt(f->linedefined, D);
  DumpInt(f->lastlinedefined, D);
  DumpByte(f->numparams, D);
  DumpByte(f->is_vararg, D);
  DumpByte(f->maxstacksize, D);
  DumpCode(f, D);
  DumpConstants(f, D);
  DumpUpvalues(f, D);
  DumpProtos(f, D);
  DumpDebug(f, D);
};

// Line 184: range 00000000152F0195-00000000152F0236
void __fastcall DumpHeader(DumpState *D)
{
  lua_Number v1; // xmm1_8

  DumpBlock(&unk_1B2354F0, 4uLL, D);
  DumpByte(83, D);
  DumpByte(0, D);
  DumpBlock(off_1B2354F5, 6uLL, D);
  DumpByte(4, D);
  DumpByte(8, D);
  DumpByte(4, D);
  DumpByte(8, D);
  DumpByte(8, D);
  DumpInteger(22136LL, D);
  DumpNumber(370.5, v1, D);
};

// Line 203: range 00000000152F0237-00000000152F0286
int __fastcall luaU_dump(lua_State_0 *L, const Proto_0 *f, lua_Writer w, void *data, int strip)
{
  DumpState D; // [rsp+0h] [rbp-28h] BYREF

  D.L = L;
  D.writer = w;
  D.data = data;
  D.strip = strip;
  D.status = 0;
  DumpHeader(&D);
  DumpByte(f->sizeupvalues, &D);
  DumpFunction(f, 0LL, &D);
  return D.status;
};
