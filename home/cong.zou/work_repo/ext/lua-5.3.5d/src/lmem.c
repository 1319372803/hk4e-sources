// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lmem.c

// Line 49: range 00000000152F1D86-00000000152F1DE8
void *__fastcall luaM_growaux_(lua_State_0 *L, void *block, int *size, size_t size_elems, int limit, const char *what)
{
  int v7; // ebx
  int v8; // eax
  void *result; // rax

  v7 = limit;
  v8 = *size;
  if ( *size < limit / 2 )
  {
    v7 = 2 * v8;
    if ( 2 * v8 <= 3 )
      v7 = 4;
  }
  else if ( v8 >= limit )
  {
    luaG_runerror(L, "too many %s (limit is %d)", what, (unsigned int)limit);
  }
  result = luaM_realloc_(L, block, size_elems * v8, size_elems * v7);
  *size = v7;
  return result;
};

// Line 68: range 00000000152F1CD2-00000000152F1CE0
void __fastcall __noreturn luaM_toobig(lua_State_0 *L)
{
  luaG_runerror(L, "memory allocation error: block too big");
};

// Line 77: range 00000000152F1CE5-00000000152F1D81
void *__fastcall luaM_realloc_(lua_State_0 *L, void *block, size_t osize, size_t nsize)
{
  global_State_0 *l_G; // rbp
  size_t v7; // r14
  void *result; // rax

  l_G = L->l_G;
  if ( block )
    v7 = osize;
  else
    v7 = 0LL;
  result = l_G->frealloc(l_G->ud, block, osize, nsize);
  if ( nsize != 0 && result == 0LL )
  {
    if ( l_G->version )
    {
      luaC_fullgc(L, 1);
      result = l_G->frealloc(l_G->ud, block, osize, nsize);
    }
    if ( !result )
      luaD_throw(L, 4);
  }
  l_G->GCdebt = l_G->GCdebt + nsize - v7;
  return result;
};
