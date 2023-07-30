// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/fields.hpp

// Line 139: range 0000000019BE3336-0000000019BE3464
bool __fastcall boost::beast::http::basic_fields<std::allocator<char>>::key_compare::operator()(
        const boost::beast::http::basic_fields<std::allocator<char> >::key_compare *const this,
        const boost::beast::http::basic_fields<std::allocator<char> >::value_type *lhs,
        boost::beast::string_view rhs)
{
  const char *ptr; // r12
  std::size_t len; // r13
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r14
  boost::beast::string_view v7; // rax
  bool result; // al
  __int64 v9; // rax
  boost::beast::string_view v10; // rax
  boost::beast::string_view v11; // rax
  __gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::beast::string_view,boost::beast::string_view) const::<lambda(char,char)> > v12; // [rsp+0h] [rbp-88h]
  char v13[120]; // [rsp+10h] [rbp-78h] BYREF

  ptr = rhs.ptr_;
  len = rhs.len_;
  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v5 = v9;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 7 rhs:141";
  *(_QWORD *)(v5 + 16) = boost::beast::http::basic_fields<std::allocator<char>>::key_compare::operator();
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  *(_QWORD *)(v5 + 32) = ptr;
  *(_QWORD *)(v5 + 40) = len;
  v7 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string(lhs);
  if ( *(_BYTE *)(((v5 + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v5 + 40);
LABEL_10:
    v10 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string(lhs);
    if ( v10.len_ <= (unsigned __int64)ptr )
    {
      v11 = boost::beast::http::basic_fields<std::allocator<char>>::value_type::name_string(lhs);
      result = std::__lexicographical_compare_impl<char const*,char const*,__gnu_cxx::__ops::_Iter_comp_iter<boost::beast::iless::operator()(boost::basic_string_view<char,std::char_traits<char>>,boost::basic_string_view<char,std::char_traits<char>>)::{lambda(char,char)#1}>>(
                 v11.ptr_,
                 &v11.ptr_[v11.len_],
                 *(const char **)(v5 + 32),
                 &ptr[*(_QWORD *)(v5 + 32)],
                 v12);
    }
    else
    {
      result = 0;
    }
    goto LABEL_5;
  }
  ptr = *(const char **)(v5 + 40);
  if ( v7.len_ >= (unsigned __int64)ptr )
    goto LABEL_10;
  result = 1;
LABEL_5:
  if ( v13 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
