// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/llex.c

// Line 57: range 00000000152FDF60-00000000152FDFC5
void __fastcall save(LexState_0 *ls, int c)
{
  Mbuffer_0 *buff; // rbx
  size_t buffsize; // rdx
  __int64 v4; // r12
  size_t n; // rax

  buff = ls->buff;
  buffsize = buff->buffsize;
  if ( buff->n + 1 > buffsize )
  {
    if ( buffsize > 0x3FFFFFFFFFFFFFFELL )
      lexerror(ls, "lexical element too long", 0);
    v4 = 2 * buffsize;
    buff->buffer = (char *)luaM_realloc_(ls->L, buff->buffer, buffsize, 2 * buffsize);
    buff->buffsize = v4;
  }
  n = buff->n;
  buff->n = n + 1;
  buff->buffer[n] = c;
};

// Line 70: range 00000000152FDE1D-00000000152FDE78
void __fastcall luaX_init(lua_State_0 *L)
{
  GCObject_0 *v1; // rax
  int i; // ebx
  TString_0 *v3; // rbp

  v1 = (GCObject_0 *)luaS_newlstr(L, "_ENV", 4uLL);
  luaC_fix(L, v1);
  for ( i = 0; i <= 21; ++i )
  {
    v3 = luaS_new(L, luaX_tokens[i]);
    luaC_fix(L, (GCObject_0 *)v3);
    v3->extra = i + 1;
  }
};

// Line 82: range 00000000152FDE79-00000000152FDECF
const char *__fastcall luaX_token2str(LexState_0 *ls, int token)
{
  const char *result; // rax

  if ( token <= 256 )
    return luaO_pushfstring(ls->L, "'%c'", (unsigned int)token);
  result = luaX_tokens[token - 257];
  if ( token <= 288 )
    return luaO_pushfstring(ls->L, "'%s'", luaX_tokens[token - 257]);
  return result;
};

// Line 97: range 00000000152FDED1-00000000152FDF0B
const char *__fastcall txtToken(LexState_0 *ls, int token)
{
  if ( (unsigned int)(token - 290) > 3 )
    return luaX_token2str(ls, token);
  save(ls, 0);
  return luaO_pushfstring(ls->L, "'%s'", ls->buff->buffer);
};

// Line 109: range 00000000152FDF0D-00000000152FDF5E
void __fastcall __noreturn lexerror(LexState_0 *ls, const char *msg, int token)
{
  const char *v4; // rax
  const char *v5; // r12
  const char *v6; // rax

  v4 = luaG_addinfo(ls->L, msg, ls->source, ls->linenumber);
  if ( token )
  {
    v5 = v4;
    v6 = txtToken(ls, token);
    luaO_pushfstring(ls->L, "%s near %s", v5, v6);
  }
  luaD_throw(ls->L, 3);
};

// Line 117: range 00000000152FE61A-00000000152FE621
void __fastcall __noreturn luaX_syntaxerror(LexState_0 *ls, const char *msg)
{
  lexerror(ls, msg, ls->t.token);
};

// Line 127: range 00000000152FE626-00000000152FE6AC
TString_0 *__fastcall luaX_newstring(LexState_0 *ls, const char *str, size_t l)
{
  lua_State *v3; // rbx
  TString_0 *gc; // rbp
  StkId top; // rdx
  TValue *v6; // rax

  v3 = ls->L;
  gc = luaS_newlstr(v3, str, l);
  top = v3->top;
  v3->top = top + 1;
  top->value_.i = (lua_Integer)gc;
  top->tt_ = gc->tt | 0x40;
  v6 = luaH_set(v3, ls->h, (const TValue *)v3->top - 1);
  if ( v6->tt_ )
  {
    gc = (TString_0 *)v6[1].value_.gc;
  }
  else
  {
    v6->value_.b = 1;
    v6->tt_ = 1;
    if ( v3->l_G->GCdebt > 0 )
      luaC_step(v3);
  }
  --v3->top;
  return gc;
};

// Line 151: range 00000000152FE0C9-00000000152FE172
void __fastcall inclinenumber(LexState_0 *ls)
{
  int current; // ebp
  ZIO *z; // rdx
  ZIO *v4; // rdx
  const char *p; // rax
  int v6; // eax
  ZIO *v7; // rdx
  ZIO *v9; // rdx
  const char *v10; // rax
  int v11; // eax
  int v12; // eax

  current = ls->current;
  z = ls->z;
  if ( z->n-- )
  {
    v4 = ls->z;
    p = v4->p;
    v4->p = p + 1;
    v6 = *(unsigned __int8 *)p;
  }
  else
  {
    v6 = luaZ_fill(ls->z);
  }
  ls->current = v6;
  if ( (v6 == 13 || v6 == 10) && v6 != current )
  {
    v7 = ls->z;
    if ( v7->n-- )
    {
      v9 = ls->z;
      v10 = v9->p;
      v9->p = v10 + 1;
      v11 = *(unsigned __int8 *)v10;
    }
    else
    {
      v11 = luaZ_fill(ls->z);
    }
    ls->current = v11;
  }
  v12 = ls->linenumber + 1;
  ls->linenumber = v12;
  if ( v12 == 0x7FFFFFFF )
    lexerror(ls, "chunk has too many lines", 0);
};

// Line 163: range 00000000152FF12E-00000000152FF1AD
void __fastcall luaX_setinput(lua_State_0 *L, LexState_0 *ls, ZIO *z, TString_0 *source, int firstchar)
{
  Mbuffer_0 *buff; // rbp

  ls->t.token = 0;
  ls->L = L;
  ls->current = firstchar;
  ls->lookahead.token = 289;
  ls->z = z;
  ls->fs = 0LL;
  ls->linenumber = 1;
  ls->lastline = 1;
  ls->source = source;
  ls->envn = luaS_newlstr(L, "_ENV", 4uLL);
  buff = ls->buff;
  buff->buffer = (char *)luaM_realloc_(ls->L, buff->buffer, buff->buffsize, 0x20uLL);
  ls->buff->buffsize = 32LL;
};

// Line 187: range 00000000152FDDD5-00000000152FDE1B
int __fastcall check_next1(LexState_0 *ls, int c)
{
  ZIO *z; // rdx
  ZIO *v5; // rdx
  const char *p; // rax
  int v7; // eax

  if ( ls->current != c )
    return 0;
  z = ls->z;
  if ( z->n-- )
  {
    v5 = ls->z;
    p = v5->p;
    v5->p = p + 1;
    v7 = *(unsigned __int8 *)p;
  }
  else
  {
    v7 = luaZ_fill(ls->z);
  }
  ls->current = v7;
  return 1;
};

// Line 199: range 00000000152FE069-00000000152FE0C7
int __fastcall check_next2(LexState_0 *ls, const char *set)
{
  int current; // eax
  ZIO *z; // rdx
  ZIO *v6; // rdx
  const char *p; // rax
  int v8; // eax

  current = ls->current;
  if ( ls->current != *set && current != set[1] )
    return 0;
  save(ls, current);
  z = ls->z;
  if ( z->n-- )
  {
    v6 = ls->z;
    p = v6->p;
    v6->p = p + 1;
    v8 = *(unsigned __int8 *)p;
  }
  else
  {
    v8 = luaZ_fill(ls->z);
  }
  ls->current = v8;
  return 1;
};

// Line 214: range 00000000152FE495-00000000152FE618
int __fastcall read_numeral(LexState_0 *ls, SemInfo *seminfo)
{
  int current; // ebp
  ZIO *z; // rdx
  ZIO *v6; // rdx
  const char *p; // rax
  int v8; // eax
  const char *v9; // rbp
  ZIO *v10; // rdx
  ZIO *v12; // rdx
  const char *v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // esi
  ZIO *v17; // rdx
  ZIO *v19; // rdx
  const char *v20; // rax
  TValue obj; // [rsp+0h] [rbp-28h] BYREF

  current = ls->current;
  save(ls, ls->current);
  z = ls->z;
  if ( z->n-- )
  {
    v6 = ls->z;
    p = v6->p;
    v6->p = p + 1;
    v8 = *(unsigned __int8 *)p;
  }
  else
  {
    v8 = luaZ_fill(ls->z);
  }
  ls->current = v8;
  if ( current == 48 )
  {
    if ( check_next2(ls, "xX") )
      v9 = "Pp";
    else
      v9 = "Ee";
  }
  else
  {
    v9 = "Ee";
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( check_next2(ls, v9) )
        check_next2(ls, "-+");
      v16 = ls->current;
      if ( (luai_ctype_[ls->current + 1] & 0x10) == 0 )
        break;
      save(ls, v16);
      v10 = ls->z;
      if ( v10->n-- )
      {
        v12 = ls->z;
        v13 = v12->p;
        v12->p = v13 + 1;
        v14 = *(unsigned __int8 *)v13;
      }
      else
      {
        v14 = luaZ_fill(ls->z);
      }
      ls->current = v14;
    }
    if ( v16 != 46 )
      break;
    save(ls, 46);
    v17 = ls->z;
    if ( v17->n-- )
    {
      v19 = ls->z;
      v20 = v19->p;
      v19->p = v20 + 1;
      v15 = *(unsigned __int8 *)v20;
    }
    else
    {
      v15 = luaZ_fill(ls->z);
    }
    ls->current = v15;
  }
  save(ls, 0);
  if ( !luaO_str2num(ls->buff->buffer, &obj) )
    lexerror(ls, "malformed number", 290);
  if ( obj.tt_ == 19 )
  {
    seminfo->r = obj.value_.n;
    return 291;
  }
  else
  {
    seminfo->r = obj.value_.n;
    return 290;
  }
};

// Line 251: range 00000000152FDFCA-00000000152FE068
int __fastcall skip_sep(LexState_0 *ls)
{
  int current; // r12d
  ZIO *z; // rdx
  ZIO *v4; // rdx
  const char *p; // rax
  int v6; // eax
  int v7; // ebp
  int v8; // eax
  ZIO *v9; // rdx
  ZIO *v11; // rdx
  const char *v12; // rax

  current = ls->current;
  save(ls, ls->current);
  z = ls->z;
  if ( z->n-- )
  {
    v4 = ls->z;
    p = v4->p;
    v4->p = p + 1;
    v6 = *(unsigned __int8 *)p;
  }
  else
  {
    v6 = luaZ_fill(ls->z);
  }
  ls->current = v6;
  v7 = 0;
  while ( ls->current == 61 )
  {
    save(ls, 61);
    v9 = ls->z;
    if ( v9->n-- )
    {
      v11 = ls->z;
      v12 = v11->p;
      v11->p = v12 + 1;
      v8 = *(unsigned __int8 *)v12;
    }
    else
    {
      v8 = luaZ_fill(ls->z);
    }
    ls->current = v8;
    ++v7;
  }
  if ( ls->current != current )
    return ~v7;
  return v7;
};

// Line 264: range 00000000152FE6AD-00000000152FE8A5
void __fastcall read_long_string(LexState_0 *ls, SemInfo *seminfo, int sep)
{
  unsigned int linenumber; // r13d
  ZIO *z; // rdx
  ZIO *v8; // rdx
  const char *p; // rax
  int v10; // eax
  int current; // esi
  ZIO *v12; // rdx
  ZIO *v14; // rdx
  const char *v15; // rax
  int v16; // eax
  const char *v17; // rdx
  const char *v18; // rax
  ZIO *v19; // rdx
  ZIO *v21; // rdx
  const char *v22; // rax
  int v23; // eax
  ZIO *v24; // rdx
  ZIO *v26; // rdx
  const char *v27; // rax
  int v28; // eax

  linenumber = ls->linenumber;
  save(ls, ls->current);
  z = ls->z;
  if ( z->n-- )
  {
    v8 = ls->z;
    p = v8->p;
    v8->p = p + 1;
    v10 = *(unsigned __int8 *)p;
  }
  else
  {
    v10 = luaZ_fill(ls->z);
  }
  ls->current = v10;
  if ( v10 == 13 || v10 == 10 )
    inclinenumber(ls);
  do
  {
    while ( 1 )
    {
      current = ls->current;
      if ( ls->current == 13 )
        goto LABEL_8;
      if ( current > 13 )
        break;
      if ( current == -1 )
      {
        if ( seminfo )
          v17 = "string";
        else
          v17 = "comment";
        v18 = luaO_pushfstring(ls->L, "unfinished long %s (starting at line %d)", v17, linenumber);
        lexerror(ls, v18, 289);
      }
      if ( current == 10 )
      {
LABEL_8:
        save(ls, 10);
        inclinenumber(ls);
        if ( !seminfo )
          ls->buff->n = 0LL;
      }
      else
      {
LABEL_24:
        if ( seminfo )
        {
          save(ls, current);
          v19 = ls->z;
          if ( v19->n-- )
          {
            v21 = ls->z;
            v22 = v21->p;
            v21->p = v22 + 1;
            v23 = *(unsigned __int8 *)v22;
          }
          else
          {
            v23 = luaZ_fill(ls->z);
          }
          ls->current = v23;
        }
        else
        {
          v24 = ls->z;
          if ( v24->n-- )
          {
            v26 = ls->z;
            v27 = v26->p;
            v26->p = v27 + 1;
            v28 = *(unsigned __int8 *)v27;
          }
          else
          {
            v28 = luaZ_fill(ls->z);
          }
          ls->current = v28;
        }
      }
    }
    if ( current != 93 )
      goto LABEL_24;
  }
  while ( skip_sep(ls) != sep );
  save(ls, ls->current);
  v12 = ls->z;
  if ( v12->n-- )
  {
    v14 = ls->z;
    v15 = v14->p;
    v14->p = v15 + 1;
    v16 = *(unsigned __int8 *)v15;
  }
  else
  {
    v16 = luaZ_fill(ls->z);
  }
  ls->current = v16;
  if ( seminfo )
    seminfo->i = (lua_Integer)luaX_newstring(ls, &ls->buff->buffer[sep + 2], ls->buff->n - 2 * (sep + 2));
};

// Line 304: range 00000000152FE177-00000000152FE1D8
void __fastcall esccheck(LexState_0 *ls, int c, const char *msg)
{
  ZIO *z; // rdx
  ZIO *v6; // rdx
  const char *p; // rax
  int v8; // eax

  if ( !c )
  {
    if ( ls->current != -1 )
    {
      save(ls, ls->current);
      z = ls->z;
      if ( z->n-- )
      {
        v6 = ls->z;
        p = v6->p;
        v6->p = p + 1;
        v8 = *(unsigned __int8 *)p;
      }
      else
      {
        v8 = luaZ_fill(ls->z);
      }
      ls->current = v8;
    }
    lexerror(ls, msg, 293);
  }
};

// Line 312: range 00000000152FE1DA-00000000152FE23F
int __fastcall gethexa(LexState_0 *ls)
{
  ZIO *z; // rdx
  ZIO *v3; // rdx
  const char *p; // rax
  int v5; // eax

  save(ls, ls->current);
  z = ls->z;
  if ( z->n-- )
  {
    v3 = ls->z;
    p = v3->p;
    v3->p = p + 1;
    v5 = *(unsigned __int8 *)p;
  }
  else
  {
    v5 = luaZ_fill(ls->z);
  }
  ls->current = v5;
  esccheck(ls, luai_ctype_[v5 + 1] & 0x10, "hexadecimal digit expected");
  return luaO_hexavalue(ls->current);
};

// Line 319: range 00000000152FE241-00000000152FE26D
int __fastcall readhexaesc(LexState_0 *ls)
{
  int v1; // ebx
  int result; // eax

  v1 = 16 * gethexa(ls);
  result = v1 + gethexa(ls);
  ls->buff->n -= 2LL;
  return result;
};

// Line 327: range 00000000152FE26E-00000000152FE3B1
unsigned __int64 __fastcall readutf8esc(LexState_0 *ls)
{
  ZIO *z; // rdx
  ZIO *v4; // rdx
  const char *p; // rax
  int v6; // eax
  unsigned __int64 v7; // rbp
  int i; // r12d
  int v9; // edi
  ZIO *v10; // rdx
  ZIO *v12; // rdx
  const char *v13; // rax
  ZIO *v14; // rdx
  ZIO *v16; // rdx
  const char *v17; // rax
  int v18; // eax

  save(ls, ls->current);
  z = ls->z;
  if ( z->n-- )
  {
    v4 = ls->z;
    p = v4->p;
    v4->p = p + 1;
    v6 = *(unsigned __int8 *)p;
  }
  else
  {
    v6 = luaZ_fill(ls->z);
  }
  ls->current = v6;
  esccheck(ls, v6 == 123, "missing '{'");
  v7 = gethexa(ls);
  for ( i = 4; ; ++i )
  {
    save(ls, ls->current);
    v10 = ls->z;
    if ( v10->n-- )
    {
      v12 = ls->z;
      v13 = v12->p;
      v12->p = v13 + 1;
      v9 = *(unsigned __int8 *)v13;
    }
    else
    {
      v9 = luaZ_fill(ls->z);
    }
    ls->current = v9;
    if ( (luai_ctype_[v9 + 1] & 0x10) == 0 )
      break;
    v7 = luaO_hexavalue(v9) + 16 * v7;
    esccheck(ls, v7 <= 0x10FFFF, "UTF-8 value too large");
  }
  esccheck(ls, v9 == 125, "missing '}'");
  v14 = ls->z;
  if ( v14->n-- )
  {
    v16 = ls->z;
    v17 = v16->p;
    v16->p = v17 + 1;
    v18 = *(unsigned __int8 *)v17;
  }
  else
  {
    v18 = luaZ_fill(ls->z);
  }
  ls->current = v18;
  ls->buff->n -= i;
  return v7;
};

// Line 345: range 00000000152FE3B3-00000000152FE3F5
void __fastcall utf8esc(LexState_0 *ls)
{
  unsigned __int64 v1; // rax
  int i; // ebx
  char buff[8]; // [rsp+8h] [rbp-20h] BYREF

  v1 = readutf8esc(ls);
  for ( i = luaO_utf8esc(buff, v1); i > 0; --i )
    save(ls, buff[8 - i]);
};

// Line 353: range 00000000152FE3F6-00000000152FE494
int __fastcall readdecesc(LexState_0 *ls)
{
  int v1; // r12d
  int i; // ebp
  int v3; // eax
  int current; // esi
  ZIO *z; // rdx
  ZIO *v7; // rdx
  const char *p; // rax

  v1 = 0;
  for ( i = 0; i <= 2; ++i )
  {
    current = ls->current;
    if ( (luai_ctype_[ls->current + 1] & 2) == 0 )
      break;
    v1 = current + 10 * v1 - 48;
    save(ls, current);
    z = ls->z;
    if ( z->n-- )
    {
      v7 = ls->z;
      p = v7->p;
      v7->p = p + 1;
      v3 = *(unsigned __int8 *)p;
    }
    else
    {
      v3 = luaZ_fill(ls->z);
    }
    ls->current = v3;
  }
  esccheck(ls, v1 <= 255, "decimal escape too large");
  ls->buff->n -= i;
  return v1;
};

// Line 366: range 00000000152FE8A7-00000000152FEBB8
void __fastcall read_string_0(LexState_0 *ls, int del, SemInfo *seminfo)
{
  ZIO *z; // rdx
  ZIO *v7; // rdx
  const char *p; // rax
  int v9; // eax
  ZIO *v10; // rdx
  ZIO *v12; // rdx
  const char *v13; // rax
  int v14; // ebp
  ZIO *v15; // rdx
  ZIO *v17; // rdx
  const char *v18; // rax
  int v19; // eax
  ZIO *v20; // rdx
  ZIO *v22; // rdx
  const char *v23; // rax
  int v24; // eax
  int v25; // eax
  ZIO *v26; // rdx
  ZIO *v28; // rdx
  const char *v29; // rax
  int v30; // eax
  int current; // esi
  ZIO *v32; // rdx
  ZIO *v34; // rdx
  const char *v35; // rax
  ZIO *v36; // rdx
  ZIO *v38; // rdx
  const char *v39; // rax
  int v40; // eax

  save(ls, ls->current);
  z = ls->z;
  if ( z->n-- )
  {
    v7 = ls->z;
    p = v7->p;
    v7->p = p + 1;
    v9 = *(unsigned __int8 *)p;
  }
  else
  {
    v9 = luaZ_fill(ls->z);
  }
  ls->current = v9;
  while ( 1 )
  {
    current = ls->current;
    if ( ls->current == del )
      break;
    if ( current == 92 )
    {
      save(ls, 92);
      v10 = ls->z;
      if ( v10->n-- )
      {
        v12 = ls->z;
        v13 = v12->p;
        v12->p = v13 + 1;
        v14 = *(unsigned __int8 *)v13;
      }
      else
      {
        v14 = luaZ_fill(ls->z);
      }
      ls->current = v14;
      switch ( v14 )
      {
        case -1:
          continue;
        case 10:
        case 13:
          inclinenumber(ls);
          v14 = 10;
          goto only_save;
        case 34:
        case 39:
        case 92:
          goto read_save;
        case 97:
          v14 = 7;
          goto read_save;
        case 98:
          v14 = 8;
          goto read_save;
        case 102:
          v14 = 12;
          goto read_save;
        case 110:
          v14 = 10;
          goto read_save;
        case 114:
          v14 = 13;
          goto read_save;
        case 116:
          v14 = 9;
          goto read_save;
        case 117:
          utf8esc(ls);
          continue;
        case 118:
          v14 = 11;
          goto read_save;
        case 120:
          v14 = readhexaesc(ls);
read_save:
          v15 = ls->z;
          if ( v15->n-- )
          {
            v17 = ls->z;
            v18 = v17->p;
            v17->p = v18 + 1;
            v19 = *(unsigned __int8 *)v18;
          }
          else
          {
            v19 = luaZ_fill(ls->z);
          }
          ls->current = v19;
          goto only_save;
        case 122:
          --ls->buff->n;
          v20 = ls->z;
          if ( v20->n-- )
          {
            v22 = ls->z;
            v23 = v22->p;
            v22->p = v23 + 1;
            v24 = *(unsigned __int8 *)v23;
          }
          else
          {
            v24 = luaZ_fill(ls->z);
          }
          ls->current = v24;
          while ( (luai_ctype_[ls->current + 1] & 8) != 0 )
          {
            if ( ls->current == 13 || ls->current == 10 )
            {
              inclinenumber(ls);
            }
            else
            {
              v26 = ls->z;
              if ( v26->n-- )
              {
                v28 = ls->z;
                v29 = v28->p;
                v28->p = v29 + 1;
                v25 = *(unsigned __int8 *)v29;
              }
              else
              {
                v25 = luaZ_fill(ls->z);
              }
              ls->current = v25;
            }
          }
          continue;
        default:
          esccheck(ls, luai_ctype_[v14 + 1] & 2, "invalid escape sequence");
          v14 = readdecesc(ls);
only_save:
          --ls->buff->n;
          save(ls, v14);
          break;
      }
    }
    else
    {
      if ( current <= 92 )
      {
        if ( current == 10 || current == 13 )
          lexerror(ls, "unfinished string", 293);
        if ( current == -1 )
          lexerror(ls, "unfinished string", 289);
      }
      save(ls, current);
      v32 = ls->z;
      if ( v32->n-- )
      {
        v34 = ls->z;
        v35 = v34->p;
        v34->p = v35 + 1;
        v30 = *(unsigned __int8 *)v35;
      }
      else
      {
        v30 = luaZ_fill(ls->z);
      }
      ls->current = v30;
    }
  }
  save(ls, current);
  v36 = ls->z;
  if ( v36->n-- )
  {
    v38 = ls->z;
    v39 = v38->p;
    v38->p = v39 + 1;
    v40 = *(unsigned __int8 *)v39;
  }
  else
  {
    v40 = luaZ_fill(ls->z);
  }
  ls->current = v40;
  seminfo->i = (lua_Integer)luaX_newstring(ls, (const char *)ls->buff->buffer + 1, ls->buff->n - 2);
};

// Line 429: range 00000000152FEBBA-00000000152FF129
int __fastcall llex(LexState_0 *ls, SemInfo *seminfo)
{
  int current; // ebp
  ZIO *z; // rdx
  ZIO *v5; // rdx
  const char *p; // rax
  int v7; // eax
  ZIO *v8; // rdx
  ZIO *v10; // rdx
  const char *v11; // rax
  int v12; // eax
  ZIO *v13; // rdx
  ZIO *v15; // rdx
  const char *v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  ZIO *v21; // rdx
  ZIO *v23; // rdx
  const char *v24; // rax
  int v25; // eax
  ZIO *v26; // rdx
  ZIO *v28; // rdx
  const char *v29; // rax
  int v30; // eax
  ZIO *v31; // rdx
  ZIO *v33; // rdx
  const char *v34; // rax
  int v35; // eax
  ZIO *v36; // rdx
  ZIO *v38; // rdx
  const char *v39; // rax
  int v40; // eax
  ZIO *v41; // rdx
  ZIO *v43; // rdx
  const char *v44; // rax
  int v45; // eax
  ZIO *v46; // rdx
  ZIO *v48; // rdx
  const char *v49; // rax
  int v50; // eax
  ZIO *v51; // rdx
  ZIO *v53; // rdx
  const char *v54; // rax
  int v55; // eax
  ZIO *v57; // rdx
  ZIO *v59; // rdx
  const char *v60; // rax
  int v61; // eax
  ZIO *v62; // rdx
  ZIO *v64; // rdx
  const char *v65; // rax
  int v66; // eax
  int v67; // eax
  ZIO *v68; // rdx
  ZIO *v70; // rdx
  const char *v71; // rax
  TString_0 *v72; // rax
  lu_byte extra; // bp

  ls->buff->n = 0LL;
  while ( 1 )
  {
    current = ls->current;
    switch ( ls->current )
    {
      case 0xFFFFFFFF:
        return 289;
      case 9:
      case 0xB:
      case 0xC:
      case 0x20:
        z = ls->z;
        if ( z->n-- )
        {
          v5 = ls->z;
          p = v5->p;
          v5->p = p + 1;
          v7 = *(unsigned __int8 *)p;
        }
        else
        {
          v7 = luaZ_fill(ls->z);
        }
        ls->current = v7;
        continue;
      case 0xA:
      case 0xD:
        inclinenumber(ls);
        continue;
      case 0x22:
      case 0x27:
        read_string_0(ls, current, seminfo);
        return 293;
      case 0x2D:
        v8 = ls->z;
        if ( v8->n-- )
        {
          v10 = ls->z;
          v11 = v10->p;
          v10->p = v11 + 1;
          v12 = *(unsigned __int8 *)v11;
        }
        else
        {
          v12 = luaZ_fill(ls->z);
        }
        ls->current = v12;
        if ( v12 != 45 )
          return current;
        v13 = ls->z;
        if ( v13->n-- )
        {
          v15 = ls->z;
          v16 = v15->p;
          v15->p = v16 + 1;
          v17 = *(unsigned __int8 *)v16;
        }
        else
        {
          v17 = luaZ_fill(ls->z);
        }
        ls->current = v17;
        if ( v17 == 91 && (v18 = skip_sep(ls), ls->buff->n = 0LL, v18 >= 0) )
        {
          read_long_string(ls, 0LL, v18);
          ls->buff->n = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v20 = ls->current;
            if ( v20 == 13 || v20 == 10 || v20 == -1 )
              break;
            v21 = ls->z;
            if ( v21->n-- )
            {
              v23 = ls->z;
              v24 = v23->p;
              v23->p = v24 + 1;
              v19 = *(unsigned __int8 *)v24;
            }
            else
            {
              v19 = luaZ_fill(ls->z);
            }
            ls->current = v19;
          }
        }
        break;
      case 0x2E:
        save(ls, current);
        v57 = ls->z;
        if ( v57->n-- )
        {
          v59 = ls->z;
          v60 = v59->p;
          v59->p = v60 + 1;
          v61 = *(unsigned __int8 *)v60;
        }
        else
        {
          v61 = luaZ_fill(ls->z);
        }
        ls->current = v61;
        if ( check_next1(ls, 46) )
        {
          if ( check_next1(ls, 46) )
            return 281;
          else
            return 280;
        }
        else if ( (luai_ctype_[ls->current + 1] & 2) != 0 )
        {
          return read_numeral(ls, seminfo);
        }
        return current;
      case 0x2F:
        v41 = ls->z;
        if ( v41->n-- )
        {
          v43 = ls->z;
          v44 = v43->p;
          v43->p = v44 + 1;
          v45 = *(unsigned __int8 *)v44;
        }
        else
        {
          v45 = luaZ_fill(ls->z);
        }
        ls->current = v45;
        if ( check_next1(ls, 47) )
          return 279;
        return current;
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        return read_numeral(ls, seminfo);
      case 0x3A:
        v51 = ls->z;
        if ( v51->n-- )
        {
          v53 = ls->z;
          v54 = v53->p;
          v53->p = v54 + 1;
          v55 = *(unsigned __int8 *)v54;
        }
        else
        {
          v55 = luaZ_fill(ls->z);
        }
        ls->current = v55;
        if ( check_next1(ls, 58) )
          return 288;
        return current;
      case 0x3C:
        v31 = ls->z;
        if ( v31->n-- )
        {
          v33 = ls->z;
          v34 = v33->p;
          v33->p = v34 + 1;
          v35 = *(unsigned __int8 *)v34;
        }
        else
        {
          v35 = luaZ_fill(ls->z);
        }
        ls->current = v35;
        if ( check_next1(ls, 61) )
          return 284;
        if ( check_next1(ls, 60) )
          return 286;
        return current;
      case 0x3D:
        v26 = ls->z;
        if ( v26->n-- )
        {
          v28 = ls->z;
          v29 = v28->p;
          v28->p = v29 + 1;
          v30 = *(unsigned __int8 *)v29;
        }
        else
        {
          v30 = luaZ_fill(ls->z);
        }
        ls->current = v30;
        if ( check_next1(ls, 61) )
          return 282;
        return current;
      case 0x3E:
        v36 = ls->z;
        if ( v36->n-- )
        {
          v38 = ls->z;
          v39 = v38->p;
          v38->p = v39 + 1;
          v40 = *(unsigned __int8 *)v39;
        }
        else
        {
          v40 = luaZ_fill(ls->z);
        }
        ls->current = v40;
        if ( check_next1(ls, 61) )
          return 283;
        if ( check_next1(ls, 62) )
          return 287;
        return current;
      case 0x5B:
        v25 = skip_sep(ls);
        if ( v25 >= 0 )
        {
          read_long_string(ls, seminfo, v25);
          return 293;
        }
        else if ( v25 != -1 )
        {
          lexerror(ls, "invalid long string delimiter", 293);
        }
        return current;
      case 0x7E:
        v46 = ls->z;
        if ( v46->n-- )
        {
          v48 = ls->z;
          v49 = v48->p;
          v48->p = v49 + 1;
          v50 = *(unsigned __int8 *)v49;
        }
        else
        {
          v50 = luaZ_fill(ls->z);
        }
        ls->current = v50;
        if ( check_next1(ls, 61) )
          return 285;
        return current;
      default:
        if ( (luai_ctype_[current + 1] & 1) != 0 )
        {
          do
          {
            save(ls, ls->current);
            v68 = ls->z;
            if ( v68->n-- )
            {
              v70 = ls->z;
              v71 = v70->p;
              v70->p = v71 + 1;
              v67 = *(unsigned __int8 *)v71;
            }
            else
            {
              v67 = luaZ_fill(ls->z);
            }
            ls->current = v67;
          }
          while ( (luai_ctype_[v67 + 1] & 3) != 0 );
          v72 = luaX_newstring(ls, ls->buff->buffer, ls->buff->n);
          seminfo->i = (lua_Integer)v72;
          if ( v72->tt == 4 )
          {
            extra = v72->extra;
            if ( extra )
              return extra + 256;
            else
              return 292;
          }
          else
          {
            return 292;
          }
        }
        else
        {
          v62 = ls->z;
          if ( v62->n-- )
          {
            v64 = ls->z;
            v65 = v64->p;
            v64->p = v65 + 1;
            v66 = *(unsigned __int8 *)v65;
          }
          else
          {
            v66 = luaZ_fill(ls->z);
          }
          ls->current = v66;
        }
        return current;
    }
  }
};

// Line 549: range 00000000152FF1AE-00000000152FF1DF
void __fastcall luaX_next(LexState_0 *ls)
{
  ls->lastline = ls->linenumber;
  if ( ls->lookahead.token == 289 )
  {
    ls->t.token = llex(ls, &ls->t.seminfo);
  }
  else
  {
    ls->t = (Token_0)_mm_loadu_si128((const __m128i *)&ls->lookahead);
    ls->lookahead.token = 289;
  }
};

// Line 560: range 00000000152FF1E1-00000000152FF1F2
int __fastcall luaX_lookahead(LexState_0 *ls)
{
  int result; // eax

  result = llex(ls, &ls->lookahead.seminfo);
  ls->lookahead.token = result;
  return result;
};
