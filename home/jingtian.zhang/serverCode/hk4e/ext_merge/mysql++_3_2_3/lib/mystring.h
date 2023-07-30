// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/mystring.h

// Line 234: range 000000000CF8C480-000000000CF8C5DF
// attributes: thunk
void __fastcall mysqlpp::String::~String(mysqlpp::String *const this)
{
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&this->buffer_);
};

// Line 590: range 000000000CF826D0-000000000CF82702
bool __fastcall mysqlpp::String::conv<bool>(const mysqlpp::String *const this, bool a2)
{
  const char *v2; // rax

  if ( !this->buffer_.counted_ )
    return 0;
  v2 = mysqlpp::String::data(this);
  return (unsigned int)strtol(v2, 0LL, 10) != 0;
};

// Line 611: range 000000000CF80050-000000000CF805D4
unsigned __int64 __fastcall mysqlpp::String::do_conv<unsigned long long>(
        const mysqlpp::String *const this,
        const char *type_name)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  std::locale::_Impl *v7; // rax
  std::size_t M_facets_size; // rdi
  std::locale::_Impl *v9; // rax
  std::locale::_Impl **v10; // rdi
  __int64 v11; // rbx
  const char *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // rax
  _QWORD *v18; // rax
  const char *v19; // r15
  const char *v20; // rsi
  mysqlpp::BadConversion *exception; // r13
  size_t v22; // rbx
  const char *v23; // rax
  _QWORD *v24; // rax
  const char *v25; // rsi
  __int64 v26; // [rsp+0h] [rbp-218h]
  std::locale::_Impl *v27; // [rsp+8h] [rbp-210h]
  std::locale::_Impl *v28; // [rsp+10h] [rbp-208h]
  __int64 v29; // [rsp+18h] [rbp-200h]
  __int64 v30; // [rsp+20h] [rbp-1F8h]
  std::locale c; // [rsp+40h] [rbp-1D8h] BYREF
  unsigned __int64 num; // [rsp+48h] [rbp-1D0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-1C0h]
  std::locale v36; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v37[7]; // [rsp+68h] [rbp-1B0h] BYREF
  std::locale v38; // [rsp+A0h] [rbp-178h] BYREF
  int v39; // [rsp+A8h] [rbp-170h]
  void *v40; // [rsp+B0h] [rbp-168h]
  __int64 v41; // [rsp+B8h] [rbp-160h]
  char v42[16]; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v43[4]; // [rsp+D0h] [rbp-148h] BYREF
  char v44; // [rsp+F0h] [rbp-128h]
  __int64 v45; // [rsp+1A8h] [rbp-70h]
  __int16 v46; // [rsp+1B0h] [rbp-68h]
  __int64 v47; // [rsp+1B8h] [rbp-60h]
  __int64 v48; // [rsp+1C0h] [rbp-58h]
  __int64 v49; // [rsp+1C8h] [rbp-50h]
  __int64 v50; // [rsp+1D0h] [rbp-48h]

  if ( !this->buffer_.counted_ )
    return 0LL;
  std::ios_base::ios_base((std::ios_base *)v43);
  v45 = 0LL;
  v3 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[2];
  v47 = 0LL;
  v43[0] = (__int64)&`vtable for'std::ios + 16;
  v46 = 0;
  v4 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[3];
  v48 = 0LL;
  v5 = v4;
  v26 = v4;
  v6 = *(_QWORD *)(v3 - 24);
  v49 = 0LL;
  v50 = 0LL;
  v34 = v3;
  *(__int64 *)((char *)&v34 + v6) = v5;
  v35 = 0LL;
  std::ios::init((char *)&v34 + *(_QWORD *)(v3 - 24), 0LL);
  v7 = (std::locale::_Impl *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[4];
  M_facets_size = v7[-1]._M_facets_size;
  v36._M_impl = v7;
  v27 = v7;
  v9 = (std::locale::_Impl *)`VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[5];
  v10 = (std::locale::_Impl **)((char *)&v36._M_impl + M_facets_size);
  *v10 = v9;
  v28 = v9;
  std::ios::init(v10, 0LL);
  v29 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[1];
  v30 = `VTT for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>[6];
  *(__int64 *)((char *)&v34 + *(_QWORD *)(v29 - 24)) = v30;
  memset(&v37[1], 0, 48);
  v34 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v43[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v36._M_impl = (std::locale::_Impl *)((char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                     + 64);
  v37[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::locale(&v38);
  v39 = 24;
  v42[0] = 0;
  v37[0] = (__int64)&`vtable for'std::stringbuf + 16;
  v40 = v42;
  v41 = 0LL;
  std::ios::init(v43, v37);
  v11 = mysqlpp::String::length(this);
  v12 = mysqlpp::String::data(this);
  std::ostream::write((std::ostream *)&v36, v12, v11);
  v13 = std::locale::classic(&v36);
  std::ios::imbue(&c, v43, v13);
  std::locale::~locale(&c);
  num = 0LL;
  v14 = (_QWORD *)std::istream::_M_extract<unsigned long long>(&v34, &num);
  if ( (*((_BYTE *)v14 + *(_QWORD *)(*v14 - 24LL) + 32) & 5) == 0 )
  {
    v18 = (_QWORD *)std::operator>><char,std::char_traits<char>>(&v34, &c);
    if ( (*((_BYTE *)v18 + *(_QWORD *)(*v18 - 24LL) + 32) & 5) != 0 )
      goto LABEL_4;
    if ( LOBYTE(c._M_impl) == 46 )
    {
      v19 = (const char *)*((_QWORD *)&`typeinfo for'unsigned long long + 1);
      v20 = (const char *)`typeinfo for'float[1];
      if ( v19 != v20 )
      {
        if ( *v19 == 42 )
        {
          if ( *((const char **)&`typeinfo for'double + 1) == v19 )
            goto LABEL_13;
        }
        else
        {
          if ( !strcmp(*((const char **)&`typeinfo for'unsigned long long + 1), v20) )
            goto LABEL_13;
          v25 = (const char *)*((_QWORD *)&`typeinfo for'double + 1);
          if ( v19 == v25 || !strcmp(v19, v25) )
            goto LABEL_13;
        }
        LOBYTE(c._M_impl) = 48;
        while ( 1 )
        {
          v24 = (_QWORD *)std::operator>><char,std::char_traits<char>>(&v34, &c);
          if ( (*((_BYTE *)v24 + *(_QWORD *)(*v24 - 24LL) + 32) & 5) != 0 )
            break;
          if ( LOBYTE(c._M_impl) != 48 )
            goto LABEL_13;
        }
        if ( (v44 & 2) != 0 && LOBYTE(c._M_impl) == 48 )
          goto LABEL_4;
      }
    }
LABEL_13:
    exception = (mysqlpp::BadConversion *)__cxa_allocate_exception(0x60uLL);
    v22 = mysqlpp::String::length(this);
    v23 = mysqlpp::String::data(this);
    mysqlpp::BadConversion::BadConversion(exception, type_name, v23, 0LL, v22);
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'mysqlpp::BadConversion,
      (void (__fastcall *)(void *))mysqlpp::BadConversion::~BadConversion);
  }
  if ( (v44 & 2) == 0 )
    goto LABEL_13;
LABEL_4:
  v15 = num;
  v34 = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 24;
  v43[0] = (__int64)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> + 104;
  v36._M_impl = (std::locale::_Impl *)((char *)&`vtable for'std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>
                                     + 64);
  v37[0] = (__int64)&`vtable for'std::stringbuf + 16;
  if ( v40 != v42 )
    operator delete(v40);
  v37[0] = (__int64)&`vtable for'std::streambuf + 16;
  std::locale::~locale(&v38);
  *(__int64 *)((char *)&v34 + *(_QWORD *)(v29 - 24)) = v30;
  v36._M_impl = v27;
  *(std::locale::_Impl **)((char *)&v36._M_impl + v27[-1]._M_facets_size) = v28;
  v16 = *(_QWORD *)(v3 - 24);
  v34 = v3;
  *(__int64 *)((char *)&v34 + v16) = v26;
  v35 = 0LL;
  v43[0] = (__int64)&`vtable for'std::ios + 16;
  std::ios_base::~ios_base((std::ios_base *)v43);
  return v15;
};
