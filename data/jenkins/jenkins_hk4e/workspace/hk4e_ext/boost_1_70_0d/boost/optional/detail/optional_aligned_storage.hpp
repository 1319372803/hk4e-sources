// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/optional/detail/optional_aligned_storage.hpp

// Line 40: range 000000001230307C-0000000012303089
void *__cdecl boost::optional_detail::aligned_storage<luabind::adl::object>::address(
        boost::optional_detail::aligned_storage<luabind::adl::object> *const this)
{
  return this;
};

// Line 40: range 0000000012310D3A-0000000012310D47
void *__cdecl boost::optional_detail::aligned_storage<std::string>::address(
        boost::optional_detail::aligned_storage<std::string > *const this)
{
  return this;
};

// Line 53: range 00000000122FD0D2-00000000122FD199
luabind::adl::object *__cdecl boost::optional_detail::aligned_storage<luabind::adl::object>::ptr_ref(
        boost::optional_detail::aligned_storage<luabind::adl::object> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  luabind::adl::object *result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 caster:55";
  *(_QWORD *)(v1 + 16) = boost::optional_detail::aligned_storage<luabind::adl::object>::ptr_ref;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = boost::optional_detail::aligned_storage<luabind::adl::object>::address(this);
  result = *(luabind::adl::object **)(v1 + 32);
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 53: range 0000000012310880-0000000012310947
std::string *__cdecl boost::optional_detail::aligned_storage<std::string>::ptr_ref(
        boost::optional_detail::aligned_storage<std::string > *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::string *result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 9 caster:55";
  *(_QWORD *)(v1 + 16) = boost::optional_detail::aligned_storage<std::string>::ptr_ref;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(_QWORD *)(v1 + 32) = boost::optional_detail::aligned_storage<std::string>::address(this);
  result = *(std::string **)(v1 + 32);
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 64: range 00000000122F197E-00000000122F1997
luabind::adl::object *__cdecl boost::optional_detail::aligned_storage<luabind::adl::object>::ref(
        boost::optional_detail::aligned_storage<luabind::adl::object> *const this)
{
  return boost::optional_detail::aligned_storage<luabind::adl::object>::ptr_ref(this);
};

// Line 64: range 0000000012310306-000000001231031F
std::string *__cdecl boost::optional_detail::aligned_storage<std::string>::ref(
        boost::optional_detail::aligned_storage<std::string > *const this)
{
  return boost::optional_detail::aligned_storage<std::string>::ptr_ref(this);
};
