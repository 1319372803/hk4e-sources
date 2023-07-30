// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/type_info.h

// Line 124: range 000000000CF96BB0-000000000CF96E80
const unsigned __int8 *__fastcall mysqlpp::mysql_ti_sql_type_info_lookup::operator[](
        const mysqlpp::mysql_ti_sql_type_info_lookup *const this,
        const std::type_info *ti)
{
  std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::const_iterator v2; // rax
  std::type_info *v4; // r12
  __int64 v5; // r15
  __int64 v6; // rdi
  _QWORD *v7; // rdi
  const char *v8; // r12
  size_t v9; // rax
  char *exception; // r12
  char *v11; // rsi
  char *v12; // rdx
  std::forward_iterator_tag v13; // cl
  char *v14; // rdi
  char *__beg[2]; // [rsp+0h] [rbp-1D8h] BYREF
  char v16; // [rsp+10h] [rbp-1C8h] BYREF
  std::type_info *__k; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v18[7]; // [rsp+28h] [rbp-1B0h] BYREF
  std::locale v19; // [rsp+60h] [rbp-178h] BYREF
  int v20; // [rsp+68h] [rbp-170h]
  char *v21; // [rsp+70h] [rbp-168h]
  __int64 v22; // [rsp+78h] [rbp-160h]
  char v23; // [rsp+80h] [rbp-158h] BYREF
  __int64 v24[28]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v25; // [rsp+170h] [rbp-68h]
  __int64 v26; // [rsp+178h] [rbp-60h]
  __int64 v27; // [rsp+180h] [rbp-58h]
  __int64 v28; // [rsp+188h] [rbp-50h]
  __int64 v29; // [rsp+190h] [rbp-48h]

  __k = ti;
  v2._M_node = std::_Rb_tree<std::type_info const*,std::pair<std::type_info const* const,unsigned char>,std::_Select1st<std::pair<std::type_info const* const,unsigned char>>,mysqlpp::type_info_cmp,std::allocator<std::pair<std::type_info const* const,unsigned char>>>::find(
                 &this->map_._M_t,
                 &__k)._M_node;
  if ( (std::_Rb_tree_header *)v2._M_node == &this->map_._M_t._M_impl.std::_Rb_tree_header )
  {
    std::ios_base::ios_base((std::ios_base *)v24);
    v24[27] = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    v24[0] = (__int64)&`vtable for'std::ios + 16;
    v25 = 0;
    v28 = 0LL;
    v4 = (std::type_info *)*((_QWORD *)&edata + 1);
    v5 = *((_QWORD *)&edata + 2);
    v29 = 0LL;
    v6 = *((_QWORD *)v4 - 3);
    __k = v4;
    v7 = (__int64 *)((char *)&v18[-1] + v6);
    *v7 = v5;
    std::ios::init(v7, 0LL);
    memset(&v18[1], 0, 48);
    v24[0] = (__int64)&`vtable for'std::ostringstream + 64;
    __k = (std::type_info *)((char *)&`vtable for'std::ostringstream + 24);
    v18[0] = (__int64)&`vtable for'std::streambuf + 16;
    std::locale::locale(&v19);
    v20 = 16;
    v23 = 0;
    v18[0] = (__int64)&`vtable for'std::stringbuf + 16;
    v21 = &v23;
    v22 = 0LL;
    std::ios::init(v24, v18);
    std::__ostream_insert<char,std::char_traits<char>>(&__k, "Failed to find MySQL C API type ID for ", 39LL);
    v8 = (const char *)((**((_BYTE **)ti + 1) == 42) + *((_QWORD *)ti + 1));
    v9 = strlen(v8);
    std::__ostream_insert<char,std::char_traits<char>>(&__k, v8, v9);
    exception = (char *)__cxa_allocate_exception(0x28uLL);
    std::stringbuf::str(__beg, v18);
    v11 = __beg[0];
    v12 = __beg[1];
    *(_QWORD *)exception = &`vtable for'mysqlpp::Exception + 2;
    *((_QWORD *)exception + 1) = exception + 24;
    std::string::_M_construct<char *>((std::string *const)(exception + 8), v11, &v12[(_QWORD)v11], v13);
    v14 = __beg[0];
    *(_QWORD *)exception = &`vtable for'mysqlpp::TypeLookupFailed + 2;
    if ( v14 != &v16 )
      operator delete(v14);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'mysqlpp::TypeLookupFailed,
      (void (__fastcall *)(void *))mysqlpp::TypeLookupFailed::~TypeLookupFailed);
  }
  return (const unsigned __int8 *)&v2._M_node[1]._M_parent;
};
