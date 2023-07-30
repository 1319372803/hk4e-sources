// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/utility.cpp

// Line 31: range 000000000CF9CD10-000000000CF9CD4A
void __fastcall mysqlpp::internal::str_to_lwr(std::string *s)
{
  char *M_p; // rbx
  int v3; // edi

  M_p = s->_M_dataplus._M_p;
  if ( s->_M_string_length )
  {
    do
    {
      v3 = *M_p++;
      *(M_p - 1) = tolower(v3);
    }
    while ( &s->_M_dataplus._M_p[s->_M_string_length] != M_p );
  }
};

// Line 39: range 000000000CF9CD50-000000000CF9CE0E
void __fastcall mysqlpp::internal::str_to_lwr(std::string *ls, const char *mcs)
{
  const char *v2; // r14
  size_t v4; // rax
  int v5; // edi
  std::string::pointer v6; // rax
  char v7; // al
  std::string::size_type M_string_length; // rbp
  char v9; // r12
  std::string::pointer M_p; // rax
  std::string::size_type v11; // r15
  std::string::size_type M_allocated_capacity; // rdx

  v2 = mcs;
  v4 = strlen(mcs);
  std::string::reserve(ls, v4);
  v5 = *mcs;
  if ( *mcs )
  {
    do
    {
      v7 = tolower(v5);
      M_string_length = ls->_M_string_length;
      ++v2;
      v9 = v7;
      M_p = ls->_M_dataplus._M_p;
      v11 = M_string_length + 1;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)ls->_M_dataplus._M_p == &ls->_anon_0 )
        M_allocated_capacity = 15LL;
      else
        M_allocated_capacity = ls->_anon_0._M_allocated_capacity;
      if ( v11 > M_allocated_capacity )
      {
        std::string::_M_mutate(ls, ls->_M_string_length, 0LL, 0LL, 1LL);
        M_p = ls->_M_dataplus._M_p;
      }
      M_p[M_string_length] = v9;
      v6 = ls->_M_dataplus._M_p;
      ls->_M_string_length = v11;
      v6[M_string_length + 1] = 0;
      v5 = *v2;
    }
    while ( *v2 );
  }
};
