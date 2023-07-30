// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lgc.c

// Line 127: range 00000000152F05B4-00000000152F05CB
void __fastcall removeentry(Node_0 *n)
{
  if ( (n->i_key.tvk.tt_ & 0x40) != 0 && (*(_BYTE *)(n->i_key.nk.value_.i + 9) & 3) != 0 )
    n->i_key.nk.tt_ = 10;
};

// Line 140: range 00000000152F06C9-00000000152F0707
int __fastcall iscleared(global_State_0 *g, const TValue *o)
{
  int tt; // edx
  int result; // eax
  GCObject_0 *i; // rsi

  tt = o->tt_;
  result = tt & 0x40;
  if ( (tt & 0x40) != 0 )
  {
    if ( (tt & 0xF) == 4 )
    {
      i = (GCObject_0 *)o->value_.i;
      if ( (i->marked & 3) != 0 )
      {
        reallymarkobject(g, i);
        return 0;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return *(_BYTE *)(o->value_.i + 9) & 3;
    }
  }
  return result;
};

// Line 156: range 00000000152F1638-00000000152F1666
void __fastcall luaC_barrier_(lua_State_0 *L, GCObject_0 *o, GCObject_0 *v)
{
  global_State_0 *l_G; // rdi

  l_G = L->l_G;
  if ( l_G->gcstate <= 1u )
    reallymarkobject(l_G, v);
  else
    o->marked = l_G->currentwhite & 3 | o->marked & 0xF8;
};

// Line 172: range 00000000152F1667-00000000152F167B
void __fastcall luaC_barrierback_(lua_State_0 *L, Table_0 *t)
{
  global_State_0 *l_G; // rax

  l_G = L->l_G;
  t->marked &= ~4u;
  t->gclist = l_G->grayagain;
  l_G->grayagain = (GCObject_0 *)t;
};

// Line 186: range 00000000152F167C-00000000152F16A0
void __fastcall luaC_upvalbarrier_(lua_State_0 *L, UpVal_0 *uv)
{
  global_State_0 *l_G; // rdi
  GCObject_0 *gc; // rsi

  l_G = L->l_G;
  gc = uv->v->value_.gc;
  if ( l_G->gcstate <= 1u && (gc->marked & 3) != 0 )
    reallymarkobject(l_G, gc);
};

// Line 195: range 00000000152F16A1-00000000152F16C1
void __fastcall luaC_fix(lua_State_0 *L, GCObject_0 *o)
{
  global_State_0 *l_G; // rax

  l_G = L->l_G;
  o->marked &= 0xFCu;
  l_G->allgc = o->next;
  o->next = l_G->fixedgc;
  l_G->fixedgc = o;
};

// Line 208: range 00000000152F16C2-00000000152F16FE
GCObject_0 *__fastcall luaC_newobj(lua_State_0 *L, int tt, size_t sz)
{
  global_State_0 *l_G; // rbp
  GCObject_0 *result; // rax

  l_G = L->l_G;
  result = (GCObject_0 *)luaM_realloc_(L, 0LL, tt & 0xF, sz);
  result->marked = l_G->currentwhite & 3;
  result->tt = tt;
  result->next = l_G->allgc;
  l_G->allgc = result;
  return result;
};

// Line 235: range 00000000152F05CC-00000000152F06C4
void __fastcall reallymarkobject(global_State_0 *g, GCObject_0 *o)
{
  lu_byte v3; // dl
  GCObject_0 *next; // rsi
  GCObject_0 *v5; // rax

  while ( 2 )
  {
    v3 = o->marked & 0xFC;
    o->marked = v3;
    switch ( o->tt )
    {
      case 4u:
        o->marked = v3 | 4;
        g->GCmemtrav += *(&o->marked + 2) + 1 + 24LL;
        break;
      case 5u:
        o[3].next = g->gray;
        g->gray = o;
        break;
      case 6u:
        o[1].next = g->gray;
        g->gray = o;
        break;
      case 7u:
        next = o[1].next;
        if ( next && (next->marked & 3) != 0 )
          reallymarkobject(g, next);
        o->marked |= 4u;
        g->GCmemtrav += *(_QWORD *)&o[1].tt + 40LL;
        v5 = o[2].next;
        if ( (*(&o->marked + 1) & 0x40) != 0 )
        {
          o = o[2].next;
          if ( (v5->marked & 3) != 0 )
            continue;
        }
        break;
      case 8u:
        *(_QWORD *)&o[4].tt = g->gray;
        g->gray = o;
        break;
      case 9u:
        o[7].next = g->gray;
        g->gray = o;
        break;
      case 0x14u:
        o->marked = v3 | 4;
        g->GCmemtrav += (lu_mem)&o[1].next[1].marked;
        break;
      case 0x26u:
        o[1].next = g->gray;
        g->gray = o;
        break;
      default:
        return;
    }
    break;
  }
};

// Line 289: range 00000000152F0708-00000000152F0746
void __fastcall markmt(global_State_0 *g)
{
  int i; // ebx
  GCObject_0 *v2; // rsi

  for ( i = 0; i <= 8; ++i )
  {
    v2 = (GCObject_0 *)g->mt[i];
    if ( v2 )
    {
      if ( (v2->marked & 3) != 0 )
        reallymarkobject(g, v2);
    }
  }
};

// Line 299: range 00000000152F0747-00000000152F077A
void __fastcall markbeingfnz(global_State_0 *g)
{
  GCObject_0 *i; // rbx

  for ( i = g->tobefnz; i; i = i->next )
  {
    if ( (i->marked & 3) != 0 )
      reallymarkobject(g, i);
  }
};

// Line 312: range 00000000152F077B-00000000152F07ED
void __fastcall remarkupvals(global_State_0 *g)
{
  lua_State **p_twups; // rbp
  lua_State *v2; // rax
  UpVal_0 *i; // rbx
  GCObject_0 **p_gc; // rax

  p_twups = &g->twups;
  while ( 1 )
  {
    v2 = *p_twups;
    if ( !*p_twups )
      break;
    if ( (v2->marked & 7) != 0 || !v2->openupval )
    {
      *p_twups = v2->twups;
      v2->twups = v2;
      for ( i = v2->openupval; i; i = i->u.open.next )
      {
        if ( i->u.open.touched )
        {
          p_gc = &i->v->value_.gc;
          if ( (i->v->tt_ & 0x40) != 0 && ((*p_gc)->marked & 3) != 0 )
            reallymarkobject(g, *p_gc);
          i->u.open.touched = 0;
        }
      }
    }
    else
    {
      p_twups = &v2->twups;
    }
  }
};

// Line 337: range 00000000152F07EE-00000000152F0861
void __fastcall restartcollection(global_State_0 *g)
{
  GCObject_0 *mainthread; // rsi
  GCObject_0 *gc; // rsi

  g->grayagain = 0LL;
  g->gray = 0LL;
  g->ephemeron = 0LL;
  g->allweak = 0LL;
  g->weak = 0LL;
  mainthread = (GCObject_0 *)g->mainthread;
  if ( (mainthread->marked & 3) != 0 )
    reallymarkobject(g, mainthread);
  if ( (g->l_registry.tt_ & 0x40) != 0 )
  {
    gc = g->l_registry.value_.gc;
    if ( (gc->marked & 3) != 0 )
      reallymarkobject(g, gc);
  }
  markmt(g);
  markbeingfnz(g);
};

// Line 361: range 00000000152F0863-00000000152F091F
void __fastcall traverseweakvalue(global_State_0 *g, Table_0 *h)
{
  Node_0 *node; // rbx
  Node_0 *v4; // rbp
  _BOOL4 v5; // r14d
  GCObject_0 *gc; // rsi

  node = h->node;
  v4 = &node[1 << h->lsizenode];
  v5 = h->sizearray != 0;
  while ( node < v4 )
  {
    if ( node->i_val.tt_ )
    {
      if ( (node->i_key.tvk.tt_ & 0x40) != 0 )
      {
        gc = node->i_key.nk.value_.gc;
        if ( (gc->marked & 3) != 0 )
          reallymarkobject(g, gc);
      }
      if ( !v5 )
        v5 = iscleared(g, &node->i_val) != 0;
    }
    else
    {
      removeentry(node);
    }
    ++node;
  }
  if ( g->gcstate )
  {
    if ( v5 )
    {
      h->gclist = g->weak;
      g->weak = (GCObject_0 *)h;
    }
  }
  else
  {
    h->gclist = g->grayagain;
    g->grayagain = (GCObject_0 *)h;
  }
};

// Line 394: range 00000000152F0921-00000000152F0A6F
int __fastcall traverseephemeron(global_State_0 *g, Table_0 *h)
{
  Node_0 *v2; // r12
  unsigned int v3; // ebx
  int v4; // r14d
  TValue *v5; // rax
  Node_0 *node; // rbx
  int v7; // r15d
  int hasclears; // [rsp+Ch] [rbp-3Ch]

  v2 = &h->node[1 << h->lsizenode];
  v3 = 0;
  v4 = 0;
  while ( h->sizearray > v3 )
  {
    v5 = &h->array[v3];
    if ( (v5->tt_ & 0x40) != 0 && (*(_BYTE *)(v5->value_.i + 9) & 3) != 0 )
    {
      reallymarkobject(g, v5->value_.gc);
      v4 = 1;
    }
    ++v3;
  }
  node = h->node;
  v7 = 0;
  hasclears = 0;
  while ( node < v2 )
  {
    if ( node->i_val.tt_ )
    {
      if ( iscleared(g, (const TValue *)&node->i_key) )
      {
        if ( (node->i_val.tt_ & 0x40) != 0 )
        {
          if ( (*(_BYTE *)(node->i_val.value_.i + 9) & 3) != 0 )
            v7 = 1;
          hasclears = 1;
        }
        else
        {
          hasclears = 1;
        }
      }
      else if ( (node->i_val.tt_ & 0x40) != 0 && (*(_BYTE *)(node->i_val.value_.i + 9) & 3) != 0 )
      {
        reallymarkobject(g, node->i_val.value_.gc);
        v4 = 1;
      }
    }
    else
    {
      removeentry(node);
    }
    ++node;
  }
  if ( g->gcstate )
  {
    if ( v7 )
    {
      h->gclist = g->ephemeron;
      g->ephemeron = (GCObject_0 *)h;
    }
    else if ( hasclears )
    {
      h->gclist = g->allweak;
      g->allweak = (GCObject_0 *)h;
    }
  }
  else
  {
    h->gclist = g->grayagain;
    g->grayagain = (GCObject_0 *)h;
  }
  return v4;
};

// Line 433: range 00000000152F0A71-00000000152F0B24
void __fastcall traversestrongtable(global_State_0 *g, Table_0 *h)
{
  Node_0 *v2; // rbp
  unsigned int i; // ebx
  TValue *v4; // rax
  Node_0 *j; // rbx
  GCObject_0 *gc; // rsi

  v2 = &h->node[1 << h->lsizenode];
  for ( i = 0; h->sizearray > i; ++i )
  {
    v4 = &h->array[i];
    if ( (v4->tt_ & 0x40) != 0 && (*(_BYTE *)(v4->value_.i + 9) & 3) != 0 )
      reallymarkobject(g, v4->value_.gc);
  }
  for ( j = h->node; j < v2; ++j )
  {
    if ( j->i_val.tt_ )
    {
      if ( (j->i_key.tvk.tt_ & 0x40) != 0 )
      {
        gc = j->i_key.nk.value_.gc;
        if ( (gc->marked & 3) != 0 )
          reallymarkobject(g, gc);
      }
      if ( (j->i_val.tt_ & 0x40) != 0 && (*(_BYTE *)(j->i_val.value_.i + 9) & 3) != 0 )
        reallymarkobject(g, j->i_val.value_.gc);
    }
    else
    {
      removeentry(j);
    }
  }
};

// Line 451: range 00000000152F1144-00000000152F126D
lu_mem __fastcall traversetable(global_State_0 *g, Table_0 *h)
{
  Table_0 *metatable; // rbp
  GCObject_0 *v4; // rsi
  __int64 v5; // rax
  const char *p_tt; // rbp
  char *v8; // r13
  char *v9; // rax

  metatable = h->metatable;
  if ( metatable )
  {
    if ( (metatable->flags & 8) != 0 )
      metatable = 0LL;
    else
      metatable = (Table_0 *)luaT_gettm(metatable, TM_MODE_0, g->tmname[3]);
  }
  v4 = (GCObject_0 *)h->metatable;
  if ( v4 && (v4->marked & 3) != 0 )
    reallymarkobject(g, v4);
  if ( metatable
    && (*(_DWORD *)&metatable->tt & 0xF) == 4
    && (p_tt = (const char *)&metatable->next[1].tt,
        v8 = strchr(p_tt, 107),
        v9 = strchr(p_tt, 118),
        v8 != 0LL || v9 != 0LL) )
  {
    h->marked &= ~4u;
    if ( v8 )
    {
      if ( v9 )
      {
        h->gclist = g->allweak;
        g->allweak = (GCObject_0 *)h;
      }
      else
      {
        traverseephemeron(g, h);
      }
    }
    else
    {
      traverseweakvalue(g, h);
    }
  }
  else
  {
    traversestrongtable(g, h);
  }
  if ( h->lastfree )
    v5 = 32LL * (1 << h->lsizenode);
  else
    v5 = 0LL;
  return 16LL * h->sizearray + v5 + 56;
};

// Line 479: range 00000000152F0B25-00000000152F0C64
int __fastcall traverseproto(global_State_0 *g, Proto_0 *f)
{
  LClosure *cache; // rax
  GCObject_0 *source; // rsi
  int i; // r12d
  TValue *v6; // rax
  int j; // r12d
  GCObject_0 *name; // rsi
  int k; // r12d
  GCObject_0 *v10; // rsi
  int m; // r12d
  int sizelocvars; // eax
  GCObject_0 *varname; // rsi

  cache = f->cache;
  if ( cache && (cache->marked & 3) != 0 )
    f->cache = 0LL;
  source = (GCObject_0 *)f->source;
  if ( source && (source->marked & 3) != 0 )
    reallymarkobject(g, source);
  for ( i = 0; f->sizek > i; ++i )
  {
    v6 = &f->k[i];
    if ( (v6->tt_ & 0x40) != 0 && (*(_BYTE *)(v6->value_.i + 9) & 3) != 0 )
      reallymarkobject(g, v6->value_.gc);
  }
  for ( j = 0; f->sizeupvalues > j; ++j )
  {
    name = (GCObject_0 *)f->upvalues[j].name;
    if ( name && (name->marked & 3) != 0 )
      reallymarkobject(g, name);
  }
  for ( k = 0; f->sizep > k; ++k )
  {
    v10 = (GCObject_0 *)f->p[k];
    if ( v10 && (v10->marked & 3) != 0 )
      reallymarkobject(g, v10);
  }
  for ( m = 0; ; ++m )
  {
    sizelocvars = f->sizelocvars;
    if ( sizelocvars <= m )
      break;
    varname = (GCObject_0 *)f->locvars[m].varname;
    if ( varname && (varname->marked & 3) != 0 )
      reallymarkobject(g, varname);
  }
  return 4 * (f->sizelineinfo + f->sizecode + 2 * f->sizep + 4 * f->sizek + 4 * sizelocvars + 4 * f->sizeupvalues + 30);
};

// Line 501: range 00000000152F0C65-00000000152F0CC2
lu_mem __fastcall traverseCclosure(global_State_0 *g, CClosure_0 *cl_0)
{
  int i; // ebx
  int nupvalues; // eax
  GCObject_0 *gc; // rsi

  for ( i = 0; ; ++i )
  {
    nupvalues = cl_0->nupvalues;
    if ( nupvalues <= i )
      break;
    if ( (cl_0->upvalue[i].tt_ & 0x40) != 0 )
    {
      gc = cl_0->upvalue[i].value_.gc;
      if ( (gc->marked & 3) != 0 )
        reallymarkobject(g, gc);
    }
  }
  return 16 * (nupvalues - 1) + 48;
};

// Line 514: range 00000000152F0CC3-00000000152F0D43
lu_mem __fastcall traverseLclosure(global_State_0 *g, LClosure_0 *cl_0)
{
  GCObject_0 *p; // rsi
  int i; // ebx
  int nupvalues; // eax
  UpVal_0 *v6; // rax
  TValue *v; // rdx

  p = (GCObject_0 *)cl_0->p;
  if ( p && (p->marked & 3) != 0 )
    reallymarkobject(g, p);
  for ( i = 0; ; ++i )
  {
    nupvalues = cl_0->nupvalues;
    if ( nupvalues <= i )
      break;
    v6 = cl_0->upvals[i];
    if ( v6 )
    {
      v = v6->v;
      if ( ($0F107F72300CBA7FB0D49582F1E3FF2F *)v6->v == &v6->u || g->gcstate == 8 )
      {
        if ( (v->tt_ & 0x40) != 0 && (*(_BYTE *)(v->value_.i + 9) & 3) != 0 )
          reallymarkobject(g, v->value_.gc);
      }
      else
      {
        v6->u.open.touched = 1;
      }
    }
  }
  return 8 * nupvalues + 32;
};

// Line 530: range 00000000152F1272-00000000152F132B
lu_mem __fastcall traversethread(global_State_0 *g, lua_State_0 *th)
{
  StkId stack; // rbx
  TValue *v4; // rax

  stack = th->stack;
  if ( !stack )
    return 1LL;
  while ( th->top > stack )
  {
    if ( (stack->tt_ & 0x40) != 0 && (*(_BYTE *)(stack->value_.i + 9) & 3) != 0 )
      reallymarkobject(g, stack->value_.gc);
    ++stack;
  }
  if ( g->gcstate == 8 )
  {
    v4 = &th->stack[th->stacksize];
    while ( stack < v4 )
    {
      stack->tt_ = 0;
      ++stack;
    }
    if ( th->twups == th && th->openupval )
    {
      th->twups = g->twups;
      g->twups = th;
    }
  }
  else if ( g->gckind != 1 )
  {
    luaD_shrinkstack(th);
  }
  return 16 * (th->stacksize + 13LL) + 72LL * th->nci;
};

// Line 561: range 00000000152F132D-00000000152F13AF
void __fastcall propagatemark(global_State_0 *g)
{
  GCObject_0 *gray; // rsi
  lu_mem v2; // rax

  gray = g->gray;
  gray->marked |= 4u;
  switch ( gray->tt )
  {
    case 5u:
      g->gray = gray[3].next;
      v2 = traversetable(g, (Table_0 *)gray);
      goto LABEL_3;
    case 6u:
      g->gray = gray[1].next;
      v2 = traverseLclosure(g, (LClosure_0 *)gray);
      goto LABEL_3;
    case 8u:
      g->gray = *(GCObject_0 **)&gray[4].tt;
      *(_QWORD *)&gray[4].tt = g->grayagain;
      g->grayagain = gray;
      gray->marked &= ~4u;
      v2 = traversethread(g, (lua_State_0 *)gray);
      goto LABEL_3;
    case 9u:
      g->gray = gray[7].next;
      v2 = traverseproto(g, (Proto_0 *)gray);
      goto LABEL_3;
    case 0x26u:
      g->gray = gray[1].next;
      v2 = traverseCclosure(g, (CClosure_0 *)gray);
LABEL_3:
      g->GCmemtrav += v2;
      break;
    default:
      return;
  }
};

// Line 603: range 00000000152F13B0-00000000152F13C6
void __fastcall propagateall(global_State_0 *g)
{
  while ( g->gray )
    propagatemark(g);
};

// Line 608: range 00000000152F13C7-00000000152F1419
void __fastcall convergeephemerons(global_State_0 *g)
{
  Table_0 *ephemeron; // rsi
  int v2; // r12d
  GCObject_0 *gclist; // rbx

  do
  {
    ephemeron = (Table_0 *)g->ephemeron;
    g->ephemeron = 0LL;
    v2 = 0;
    while ( ephemeron )
    {
      gclist = ephemeron->gclist;
      if ( traverseephemeron(g, ephemeron) )
      {
        propagateall(g);
        v2 = 1;
      }
      ephemeron = (Table_0 *)gclist;
    }
  }
  while ( v2 );
};

// Line 639: range 00000000152F0D44-00000000152F0DBF
void __fastcall clearkeys(global_State_0 *g, GCObject_0 *l, GCObject_0 *f)
{
  Node_0 *v5; // rbx
  Node_0 *v6; // rbp

  while ( l != f )
  {
    v5 = *(Node_0 **)&l[1].tt;
    v6 = &v5[1 << *(&l->marked + 2)];
    while ( v5 < v6 )
    {
      if ( v5->i_val.tt_ && iscleared(g, (const TValue *)&v5->i_key) )
        v5->i_val.tt_ = 0;
      if ( !v5->i_val.tt_ )
        removeentry(v5);
      ++v5;
    }
    l = l[3].next;
  }
};

// Line 658: range 00000000152F0DC0-00000000152F0E75
void __fastcall clearvalues(global_State_0 *g, GCObject_0 *l, GCObject_0 *f)
{
  unsigned int i; // r15d
  const TValue *v6; // rbx
  Node_0 *j; // rbx
  unsigned __int64 v8; // r12

  while ( l != f )
  {
    v8 = *(_QWORD *)&l[1].tt + 32LL * (1 << *(&l->marked + 2));
    for ( i = 0; *(_DWORD *)(&l->marked + 3) > i; ++i )
    {
      v6 = (const TValue *)&l[1].next[i];
      if ( iscleared(g, v6) )
        v6->tt_ = 0;
    }
    for ( j = *(Node_0 **)&l[1].tt; (unsigned __int64)j < v8; ++j )
    {
      if ( j->i_val.tt_ && iscleared(g, &j->i_val) )
      {
        j->i_val.tt_ = 0;
        removeentry(j);
      }
    }
    l = l[3].next;
  }
};

// Line 680: range 00000000152F16FF-00000000152F172E
void __fastcall luaC_upvdeccount(lua_State_0 *L, UpVal_0 *uv)
{
  lu_mem v2; // rax

  v2 = uv->refcount - 1;
  uv->refcount = v2;
  if ( !v2 && ($0F107F72300CBA7FB0D49582F1E3FF2F *)uv->v == &uv->u )
    luaM_realloc_(L, uv, 0x20uLL, 0LL);
};

// Line 686: range 00000000152F172F-00000000152F1780
void __fastcall freeLclosure(lua_State_0 *L, LClosure_0 *cl_0)
{
  int i; // ebx
  int nupvalues; // eax
  UpVal_0 *v5; // rsi

  for ( i = 0; ; ++i )
  {
    nupvalues = cl_0->nupvalues;
    if ( nupvalues <= i )
      break;
    v5 = cl_0->upvals[i];
    if ( v5 )
      luaC_upvdeccount(L, v5);
  }
  luaM_realloc_(L, cl_0, 8 * nupvalues + 32, 0LL);
};

// Line 698: range 00000000152F1781-00000000152F1833
void __fastcall freeobj(lua_State_0 *L, GCObject_0 *o)
{
  switch ( o->tt )
  {
    case 4u:
      luaS_remove(L, (TString_0 *)o);
      luaM_realloc_(L, o, *(&o->marked + 2) + 1 + 24LL, 0LL);
      break;
    case 5u:
      luaH_free(L, (Table_0 *)o);
      break;
    case 6u:
      freeLclosure(L, (LClosure_0 *)o);
      break;
    case 7u:
      luaM_realloc_(L, o, *(_QWORD *)&o[1].tt + 40LL, 0LL);
      break;
    case 8u:
      luaE_freethread(L, (lua_State_0 *)o);
      break;
    case 9u:
      luaF_freeproto(L, (Proto_0 *)o);
      break;
    case 0x14u:
      luaM_realloc_(L, o, (size_t)&o[1].next[1].marked, 0LL);
      break;
    case 0x26u:
      luaM_realloc_(L, o, 16 * (*(&o->marked + 1) - 1) + 48, 0LL);
      break;
    default:
      return;
  }
};

// Line 735: range 00000000152F1834-00000000152F18AA
GCObject_0 **__fastcall sweeplist(lua_State_0 *L, GCObject_0 **p, lu_mem count)
{
  global_State_0 *l_G; // rax
  unsigned __int8 v5; // r13
  char v6; // r12
  GCObject_0 *v7; // rsi
  lu_mem v8; // rbp

  l_G = L->l_G;
  v5 = l_G->currentwhite ^ 3;
  v6 = l_G->currentwhite & 3;
  while ( 1 )
  {
    v7 = *p;
    if ( !*p )
      break;
    v8 = count - 1;
    if ( !count )
      break;
    if ( (v5 & (v7->marked ^ 3)) != 0 )
    {
      v7->marked = v6 | v7->marked & 0xF8;
      p = &v7->next;
    }
    else
    {
      *p = v7->next;
      freeobj(L, v7);
    }
    count = v8;
  }
  if ( !v7 )
    return 0LL;
  return p;
};

// Line 758: range 00000000152F18AC-00000000152F18D3
GCObject_0 **__fastcall sweeptolive(lua_State_0 *L, GCObject_0 **p)
{
  GCObject_0 **v2; // rbx
  GCObject_0 **result; // rax

  v2 = p;
  do
  {
    result = sweeplist(L, p, 1uLL);
    p = result;
  }
  while ( v2 == result );
  return result;
};

// Line 779: range 00000000152F158C-00000000152F15D4
void __fastcall checkSizes(lua_State_0 *L, global_State_0 *g)
{
  l_mem GCdebt; // rbp
  int size; // esi

  if ( g->gckind != 1 )
  {
    GCdebt = g->GCdebt;
    size = g->strt.size;
    if ( g->strt.nuse < size / 4 )
      luaS_resize(L, size / 2);
    g->GCestimate += g->GCdebt - GCdebt;
  }
};

// Line 789: range 00000000152F0E76-00000000152F0EB7
GCObject_0 *__fastcall udata2finalize(global_State_0 *g)
{
  GCObject_0 *result; // rax
  lu_byte v2; // dl

  result = g->tobefnz;
  g->tobefnz = result->next;
  result->next = g->allgc;
  g->allgc = result;
  v2 = result->marked & 0xF7;
  result->marked = v2;
  if ( (unsigned __int8)(g->gcstate - 2) <= 3u )
    result->marked = g->currentwhite & 3 | v2 & 0xF8;
  return result;
};

// Line 801: range 00000000152F1129-00000000152F1143
void __fastcall dothecall(lua_State_0 *L, void *ud)
{
  luaD_callnoyield(L, L->top - 2, 0);
};

// Line 807: range 00000000152F0F6E-00000000152F10A3
void __fastcall GCTM(lua_State_0 *L, int propagateerrors)
{
  global_State_0 *l_G; // r12
  const TValue *v4; // rax
  lu_byte allowhook; // r14
  lu_byte gcrunning; // r13
  StkId top; // rdx
  __int64 v8; // rdi
  int v9; // eax
  StkId v10; // rdx
  const char *v11; // rdx
  TValue v; // [rsp+0h] [rbp-38h] BYREF

  l_G = L->l_G;
  v.value_.i = (lua_Integer)udata2finalize(l_G);
  v.tt_ = *(_BYTE *)(v.value_.i + 8) | 0x40;
  v4 = luaT_gettmbyobj(L, &v, TM_GC_0);
  if ( v4 )
  {
    if ( (v4->tt_ & 0xF) == 6 )
    {
      allowhook = L->allowhook;
      gcrunning = l_G->gcrunning;
      L->allowhook = 0;
      l_G->gcrunning = 0;
      top = L->top;
      v8 = *(_QWORD *)&v4->tt_;
      top->value_.i = v4->value_.i;
      *(_QWORD *)&top->tt_ = v8;
      L->top[1] = (TValue)_mm_loadu_si128((const __m128i *)&v);
      L->top += 2;
      L->ci->callstatus |= 0x100u;
      v9 = luaD_pcall(L, dothecall, 0LL, (char *)&L->top[-2] - (char *)L->stack, 0LL);
      L->ci->callstatus &= ~0x100u;
      L->allowhook = allowhook;
      l_G->gcrunning = gcrunning;
      if ( v9 != 0 && propagateerrors != 0 )
      {
        if ( v9 == 2 )
        {
          v10 = L->top;
          if ( (v10[-1].tt_ & 0xF) == 4 )
            v11 = (const char *)(v10[-1].value_.i + 24);
          else
            v11 = "no message";
          luaO_pushfstring(L, "error in __gc metamethod (%s)", v11);
          v9 = 5;
        }
        luaD_throw(L, v9);
      }
    }
  }
};

// Line 844: range 00000000152F10D2-00000000152F1127
int __fastcall runafewfinalizers(lua_State_0 *L)
{
  global_State_0 *l_G; // rbp
  unsigned int i; // ebx
  GCObject_0 *tobefnz; // rax
  int v4; // eax

  l_G = L->l_G;
  for ( i = 0; ; ++i )
  {
    tobefnz = l_G->tobefnz;
    if ( !tobefnz || l_G->gcfinnum <= i )
      break;
    GCTM(L, 1);
  }
  if ( tobefnz )
    v4 = 2 * l_G->gcfinnum;
  else
    v4 = 0;
  l_G->gcfinnum = v4;
  return i;
};

// Line 859: range 00000000152F10A5-00000000152F10D1
void __fastcall callallpendingfinalizers(lua_State_0 *L)
{
  global_State_0 *l_G; // rbp

  l_G = L->l_G;
  while ( l_G->tobefnz )
    GCTM(L, 0);
};

// Line 869: range 00000000152F0EB8-00000000152F0EC8
GCObject_0 **__fastcall findlast(GCObject_0 **p)
{
  GCObject_0 **result; // rax

  for ( result = p; *result; result = (GCObject_0 **)*result )
    ;
  return result;
};

// Line 880: range 00000000152F0EC9-00000000152F0F0B
void __fastcall separatetobefnz(global_State_0 *g, int all)
{
  GCObject_0 **p_finobj; // rbx
  GCObject_0 **p_next; // rax
  GCObject_0 *v4; // rdx

  p_finobj = &g->finobj;
  p_next = findlast(&g->tobefnz);
  while ( 1 )
  {
    v4 = *p_finobj;
    if ( !*p_finobj )
      break;
    if ( all | v4->marked & 3 )
    {
      *p_finobj = v4->next;
      v4->next = *p_next;
      *p_next = v4;
      p_next = &v4->next;
    }
    else
    {
      p_finobj = (GCObject_0 **)*p_finobj;
    }
  }
};

// Line 902: range 00000000152F1AA1-00000000152F1B43
void __fastcall luaC_checkfinalizer(lua_State_0 *L, GCObject_0 *o, Table_0 *mt)
{
  global_State_0 *l_G; // r12
  GCObject_0 *sweepgc; // rsi
  GCObject_0 *i; // rdx

  l_G = L->l_G;
  if ( (o->marked & 8) == 0 && mt && (mt->flags & 4) == 0 && luaT_gettm(mt, TM_GC_0, l_G->tmname[2]) )
  {
    if ( (unsigned __int8)(l_G->gcstate - 2) <= 3u )
    {
      o->marked = l_G->currentwhite & 3 | o->marked & 0xF8;
      sweepgc = (GCObject_0 *)l_G->sweepgc;
      if ( sweepgc == o )
        l_G->sweepgc = sweeptolive(L, &sweepgc->next);
    }
    for ( i = (GCObject_0 *)&l_G->allgc; i->next != o; i = i->next )
      ;
    i->next = o->next;
    o->next = l_G->finobj;
    l_G->finobj = o;
    o->marked |= 8u;
  }
};

// Line 940: range 00000000152F15D5-00000000152F1636
void __fastcall setpause(global_State_0 *g)
{
  signed __int64 v1; // rcx
  __int64 gcpause; // rsi
  __int64 v3; // rcx

  v1 = g->GCestimate / 0x64;
  gcpause = g->gcpause;
  if ( gcpause >= 0x7FFFFFFFFFFFFFFFLL / v1 )
    v3 = 0x7FFFFFFFFFFFFFFFLL;
  else
    v3 = gcpause * v1;
  luaE_setdebt(g, g->totalbytes + g->GCdebt - v3);
};

// Line 959: range 00000000152F18D4-00000000152F18F0
void __fastcall entersweep(lua_State_0 *L)
{
  global_State_0 *l_G; // rbx

  l_G = L->l_G;
  l_G->gcstate = 2;
  l_G->sweepgc = sweeplist(L, &l_G->allgc, 1uLL);
};

// Line 967: range 00000000152F1B48-00000000152F1BB4
void __fastcall luaC_freeallobjects(lua_State_0 *L)
{
  global_State_0 *l_G; // rbx

  l_G = L->l_G;
  separatetobefnz(l_G, 1);
  callallpendingfinalizers(L);
  l_G->currentwhite = 3;
  l_G->gckind = 0;
  sweeplist(L, &l_G->finobj, 0xFFFFFFFFFFFFFFFFLL);
  sweeplist(L, &l_G->allgc, 0xFFFFFFFFFFFFFFFFLL);
  sweeplist(L, &l_G->fixedgc, 0xFFFFFFFFFFFFFFFFLL);
};

// Line 982: range 00000000152F141A-00000000152F1587
l_mem __fastcall atomic(lua_State_0 *L)
{
  global_State_0 *l_G; // rbx
  GCObject_0 *grayagain; // r12
  GCObject_0 *gc; // rsi
  lu_mem GCmemtrav; // rbp
  GCObject_0 *weak; // r13
  GCObject_0 *allweak; // r12
  lu_mem v7; // rbp

  l_G = L->l_G;
  grayagain = l_G->grayagain;
  l_G->gcstate = 8;
  l_G->GCmemtrav = 0LL;
  if ( (L->marked & 3) != 0 )
    reallymarkobject(l_G, (GCObject_0 *)L);
  if ( (l_G->l_registry.tt_ & 0x40) != 0 )
  {
    gc = l_G->l_registry.value_.gc;
    if ( (gc->marked & 3) != 0 )
      reallymarkobject(l_G, gc);
  }
  markmt(l_G);
  remarkupvals(l_G);
  propagateall(l_G);
  GCmemtrav = l_G->GCmemtrav;
  l_G->gray = grayagain;
  propagateall(l_G);
  l_G->GCmemtrav = 0LL;
  convergeephemerons(l_G);
  clearvalues(l_G, l_G->weak, 0LL);
  clearvalues(l_G, l_G->allweak, 0LL);
  weak = l_G->weak;
  allweak = l_G->allweak;
  v7 = l_G->GCmemtrav + GCmemtrav;
  separatetobefnz(l_G, 0);
  l_G->gcfinnum = 1;
  markbeingfnz(l_G);
  propagateall(l_G);
  l_G->GCmemtrav = 0LL;
  convergeephemerons(l_G);
  clearkeys(l_G, l_G->ephemeron, 0LL);
  clearkeys(l_G, l_G->allweak, 0LL);
  clearvalues(l_G, l_G->weak, weak);
  clearvalues(l_G, l_G->allweak, allweak);
  luaS_clearcache(l_G);
  l_G->currentwhite ^= 3u;
  return l_G->GCmemtrav + v7;
};

// Line 1030: range 00000000152F18F1-00000000152F194C
lu_mem __fastcall sweepstep(lua_State_0 *L, global_State_0 *g, int nextstate, GCObject_0 **nextlist)
{
  lu_byte v5; // r12
  GCObject_0 **sweepgc; // rsi
  l_mem GCdebt; // r13
  GCObject_0 **v9; // rax

  v5 = nextstate;
  sweepgc = g->sweepgc;
  if ( sweepgc )
  {
    GCdebt = g->GCdebt;
    v9 = sweeplist(L, sweepgc, 0x55uLL);
    g->sweepgc = v9;
    g->GCestimate += g->GCdebt - GCdebt;
    if ( v9 )
      return 595LL;
  }
  g->gcstate = v5;
  g->sweepgc = nextlist;
  return 0LL;
};

// Line 1045: range 00000000152F194E-00000000152F1A9C
lu_mem __fastcall singlestep(lua_State_0 *L)
{
  global_State_0 *l_G; // rbx
  __int64 GCmemtrav; // r12

  l_G = L->l_G;
  switch ( l_G->gcstate )
  {
    case 0u:
      l_G->GCmemtrav = 0LL;
      propagatemark(l_G);
      if ( !l_G->gray )
        l_G->gcstate = 1;
      GCmemtrav = l_G->GCmemtrav;
      break;
    case 1u:
      propagateall(L->l_G);
      GCmemtrav = atomic(L);
      entersweep(L);
      l_G->GCestimate = l_G->totalbytes + l_G->GCdebt;
      break;
    case 2u:
      GCmemtrav = sweepstep(L, L->l_G, 3, &l_G->finobj);
      break;
    case 3u:
      GCmemtrav = sweepstep(L, L->l_G, 4, &l_G->tobefnz);
      break;
    case 4u:
      GCmemtrav = sweepstep(L, L->l_G, 5, 0LL);
      break;
    case 5u:
      l_G->mainthread->marked = l_G->currentwhite & 3 | l_G->mainthread->marked & 0xF8;
      checkSizes(L, l_G);
      l_G->gcstate = 6;
      GCmemtrav = 0LL;
      break;
    case 6u:
      if ( l_G->tobefnz && l_G->gckind != 1 )
      {
        GCmemtrav = 7LL * runafewfinalizers(L);
      }
      else
      {
        l_G->gcstate = 7;
        GCmemtrav = 0LL;
      }
      break;
    case 7u:
      l_G->GCmemtrav = 8LL * l_G->strt.size;
      restartcollection(l_G);
      l_G->gcstate = 0;
      GCmemtrav = l_G->GCmemtrav;
      break;
    default:
      GCmemtrav = 0LL;
      break;
  }
  return GCmemtrav;
};

// Line 1104: range 00000000152F1BB5-00000000152F1BDE
void __fastcall luaC_runtilstate(lua_State_0 *L, int statesmask)
{
  global_State_0 *l_G; // r12

  l_G = L->l_G;
  while ( ((statesmask >> l_G->gcstate) & 1) == 0 )
    singlestep(L);
};

// Line 1116: range 00000000152F0F0C-00000000152F0F6D
l_mem __fastcall getdebt(global_State_0 *g)
{
  int gcstepmul; // esi
  __int64 v2; // rcx

  gcstepmul = g->gcstepmul;
  if ( g->GCdebt <= 0 )
    return 0LL;
  v2 = g->GCdebt / 200 + 1;
  if ( 0x7FFFFFFFFFFFFFFFLL / gcstepmul <= v2 )
    return 0x7FFFFFFFFFFFFFFFLL;
  else
    return v2 * gcstepmul;
};

// Line 1129: range 00000000152F1BDF-00000000152F1C64
void __fastcall luaC_step(lua_State_0 *L)
{
  global_State_0 *l_G; // rbp
  l_mem v2; // rbx

  l_G = L->l_G;
  v2 = getdebt(l_G);
  if ( l_G->gcrunning )
  {
    do
      v2 -= singlestep(L);
    while ( v2 >= -2399 && l_G->gcstate != 7 );
    if ( l_G->gcstate == 7 )
    {
      setpause(l_G);
    }
    else
    {
      luaE_setdebt(l_G, 200 * (v2 / l_G->gcstepmul));
      runafewfinalizers(L);
    }
  }
  else
  {
    luaE_setdebt(l_G, -24000LL);
  }
};

// Line 1159: range 00000000152F1C66-00000000152F1CD0
void __fastcall luaC_fullgc(lua_State_0 *L, int isemergency)
{
  global_State_0 *l_G; // rbp

  l_G = L->l_G;
  if ( isemergency )
    l_G->gckind = 1;
  if ( l_G->gcstate <= 1u )
    entersweep(L);
  luaC_runtilstate(L, 128);
  luaC_runtilstate(L, -129);
  luaC_runtilstate(L, 64);
  luaC_runtilstate(L, 128);
  l_G->gckind = 0;
  setpause(l_G);
};
