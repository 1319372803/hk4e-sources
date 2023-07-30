// File: /home/cong.zou/work_repo/ext/lua-5.3.5d/src/lzio.c

// Line 23: range 00000000152FAA3A-00000000152FAA85
int __fastcall luaZ_fill(ZIO *z)
{
  const char *v1; // rax
  size_t size[2]; // [rsp+8h] [rbp-10h] BYREF

  v1 = z->reader(z->L, z->data, size);
  if ( !v1 )
    return -1;
  if ( !size[0] )
    return -1;
  z->n = size[0] - 1;
  z->p = v1 + 1;
  return *(unsigned __int8 *)v1;
};

// Line 39: range 00000000152FAA87-00000000152FAAA2
void __fastcall luaZ_init(lua_State_0 *L, ZIO *z, lua_Reader reader, void *data)
{
  z->L = L;
  z->reader = reader;
  z->data = data;
  z->n = 0LL;
  z->p = 0LL;
};

// Line 48: range 00000000152FAAA3-00000000152FAB1B
size_t __fastcall luaZ_read(ZIO *z, void *b, size_t n)
{
  size_t v5; // rbp

  while ( n )
  {
    if ( !z->n )
    {
      if ( luaZ_fill(z) == -1 )
        return n;
      ++z->n;
      --z->p;
    }
    v5 = z->n;
    if ( z->n > n )
      v5 = n;
    memcpy(b, z->p, v5);
    z->n -= v5;
    z->p += v5;
    b = (char *)b + v5;
    n -= v5;
  }
  return n;
};
