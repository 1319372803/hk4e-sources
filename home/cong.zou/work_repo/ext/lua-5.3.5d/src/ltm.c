// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/ltm.c

// Line 37: range 00000000152F6F2B-00000000152F6F84
void __fastcall luaT_init(lua_State_0 *L)
{
  int i; // r12d
  global_State_0 *l_G; // r13
  __int64 v3; // rbx

  for ( i = 0; i <= 23; ++i )
  {
    l_G = L->l_G;
    v3 = i + 28LL;
    *((_QWORD *)&l_G->frealloc + v3) = luaS_new(L, luaT_eventname_3708[i]);
    luaC_fix(L, *((GCObject_0 **)&L->l_G->frealloc + v3));
  }
};

// Line 59: range 00000000152F6F85-00000000152F6FB6
const TValue *__fastcall luaT_gettm(Table_0 *events, TMS event, TString_0 *ename)
{
  const TValue *result; // rax

  result = luaH_getshortstr(events, ename);
  if ( !result->tt_ )
  {
    events->flags |= 1 << event;
    return 0LL;
  }
  return result;
};

// Line 72: range 00000000152F6FB8-00000000152F7011
const TValue *__fastcall luaT_gettmbyobj(lua_State_0 *L, const TValue *o, TMS event)
{
  int v3; // eax
  Table_0 *v4; // rax

  v3 = o->tt_ & 0xF;
  if ( v3 == 5 )
  {
    v4 = *(Table_0 **)(o->value_.i + 40);
  }
  else if ( v3 == 7 )
  {
    v4 = *(Table_0 **)(o->value_.i + 16);
  }
  else
  {
    v4 = L->l_G->mt[v3];
  }
  if ( v4 )
    return luaH_getshortstr(v4, L->l_G->tmname[event]);
  else
    return &luaO_nilobject_;
};

// Line 90: range 00000000152F7012-00000000152F7083
const char *__fastcall luaT_objtypename(lua_State_0 *L, const TValue *o)
{
  int tt; // eax
  Table_0 *v4; // rbp
  TString_0 *v5; // rax
  const TValue *v6; // rax

  tt = o->tt_;
  if ( (tt == 69 && (v4 = *(Table_0 **)(o->value_.i + 40)) != 0LL
     || tt == 71 && (v4 = *(Table_0 **)(o->value_.i + 16)) != 0LL)
    && (v5 = luaS_new(L, "__name"), v6 = luaH_getshortstr(v4, v5), (v6->tt_ & 0xF) == 4) )
  {
    return (const char *)(v6->value_.i + 24);
  }
  else
  {
    return luaT_typenames_[(o->tt_ & 0xF) + 1];
  }
};

// Line 103: range 00000000152F7085-00000000152F7117
void __fastcall luaT_callTM(
        lua_State_0 *L,
        const TValue *f,
        const TValue *p1,
        const TValue *p2,
        TValue *p3,
        int hasres)
{
  signed __int64 v8; // r12
  StkId top; // rsi
  StkId v10; // rdx
  __m128i *v11; // r12
  TValue *v12; // rdx

  v8 = (char *)p3 - (char *)L->stack;
  top = L->top;
  *(__m128i *)top = _mm_loadu_si128((const __m128i *)f);
  top[1] = (TValue)_mm_loadu_si128((const __m128i *)p1);
  top[2] = (TValue)_mm_loadu_si128((const __m128i *)p2);
  v10 = L->top;
  L->top = v10 + 3;
  if ( !hasres )
  {
    L->top = v10 + 4;
    v10[3] = (TValue)_mm_loadu_si128((const __m128i *)p3);
  }
  if ( (L->ci->callstatus & 2) != 0 )
    luaD_call(L, top, hasres);
  else
    luaD_callnoyield(L, top, hasres);
  if ( hasres )
  {
    v11 = (__m128i *)((char *)L->stack + v8);
    v12 = L->top - 1;
    L->top = v12;
    *v11 = _mm_loadu_si128((const __m128i *)v12);
  }
};

// Line 125: range 00000000152F7119-00000000152F7180
int __fastcall luaT_callbinTM(lua_State_0 *L, const TValue *p1, const TValue *p2, StkId res, TMS event)
{
  const TValue *v9; // rsi
  int result; // eax

  v9 = luaT_gettmbyobj(L, p1, event);
  if ( !v9->tt_ )
    v9 = luaT_gettmbyobj(L, p2, event);
  result = v9->tt_;
  if ( result )
  {
    luaT_callTM(L, v9, p1, p2, res, 1);
    return 1;
  }
  return result;
};

// Line 136: range 00000000152F7182-00000000152F724E
void __fastcall luaT_trybinTM(lua_State_0 *L, const TValue *p1, const TValue *p2, StkId res, TMS event)
{
  lua_Number dummy[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( !luaT_callbinTM(L, p1, p2, res, event) )
  {
    if ( event == TM_BNOT_0 )
      goto LABEL_5;
    if ( (unsigned int)event > TM_BNOT_0 )
    {
      if ( event == TM_CONCAT_0 )
        luaG_concaterror(L, p1, p2);
    }
    else if ( (unsigned int)(event - 13) <= 4 )
    {
LABEL_5:
      if ( p1->tt_ == 3 )
      {
        dummy[0] = p1->value_.n;
      }
      else if ( !luaV_tonumber_(p1, dummy) )
      {
        goto LABEL_13;
      }
      if ( p2->tt_ == 3 )
      {
        dummy[0] = p2->value_.n;
LABEL_9:
        luaG_tointerror(L, p1, p2);
      }
      if ( luaV_tonumber_(p2, dummy) )
        goto LABEL_9;
LABEL_13:
      luaG_opinterror(L, p1, p2, "perform bitwise operation on");
    }
    luaG_opinterror(L, p1, p2, "perform arithmetic on");
  }
};

// Line 159: range 00000000152F724F-00000000152F7293
int __fastcall luaT_callorderTM(lua_State_0 *L, const TValue *p1, const TValue *p2, TMS event)
{
  StkId top; // rdx
  int tt; // eax

  if ( !luaT_callbinTM(L, p1, p2, L->top, event) )
    return -1;
  top = L->top;
  tt = top->tt_;
  if ( !tt )
    return 0;
  if ( tt == 1 )
    return top->value_.b != 0;
  return 1;
};
