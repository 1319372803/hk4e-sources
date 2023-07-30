// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/opentracing-cpp/include/opentracing/variant/variant.hpp

// Line 212: range 0000000014EA9E64-0000000014EA9EA2
void __fastcall opentracing::v3::util::detail::variant_helper<std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        const std::size_t type_index,
        void *data)
{
  if ( type_index != 5 )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    type_index = (const std::size_t)data;
    __asan_report_load8(data);
LABEL_6:
    opentracing::v3::util::detail::variant_helper<opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      type_index,
      data);
    return;
  }
  if ( *(void **)data != (char *)data + 16 )
    operator delete(*(void **)data);
};

// Line 214: range 0000000014EA9EE2-0000000014EA9EF6
void __fastcall opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        const std::size_t type_index,
        void *data)
{
  if ( type_index != 9 )
    opentracing::v3::util::detail::variant_helper<double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      type_index,
      data);
};

// Line 214: range 0000000014EA9E3A-0000000014EA9E4E
void __fastcall opentracing::v3::util::detail::variant_helper<decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        const std::size_t type_index,
        void *data)
{
  if ( type_index != 3 )
    opentracing::v3::util::detail::variant_helper<char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      type_index,
      data);
};

// Line 214: range 0000000014EA9ECD-0000000014EA9EE1
void __fastcall opentracing::v3::util::detail::variant_helper<double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        const std::size_t type_index,
        void *data)
{
  if ( type_index != 8 )
    opentracing::v3::util::detail::variant_helper<long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      type_index,
      data);
};

// Line 214: range 0000000014EA9EB8-0000000014EA9ECC
void __fastcall opentracing::v3::util::detail::variant_helper<long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        const std::size_t type_index,
        void *data)
{
  if ( type_index != 7 )
    opentracing::v3::util::detail::variant_helper<unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      type_index,
      data);
};

// Line 214: range 0000000014EA9E4F-0000000014EA9E63
void __fastcall opentracing::v3::util::detail::variant_helper<opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        const std::size_t type_index,
        void *data)
{
  if ( type_index != 4 )
    opentracing::v3::util::detail::variant_helper<decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      type_index,
      data);
};

// Line 214: range 0000000014EA9D13-0000000014EA9E39
void __fastcall opentracing::v3::util::detail::variant_helper<opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        const std::size_t type_index,
        void *data)
{
  std::_Hashtable<std::string,std::pair<const std::string,opentracing::v3::Value>,std::allocator<std::pair<const std::string,opentracing::v3::Value> >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> > *v2; // rbx

  if ( !type_index )
  {
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(data);
      opentracing::v3::util::detail::variant_helper<opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        (const std::size_t)data,
        data);
    }
    else
    {
      v2 = *(std::_Hashtable<std::string,std::pair<const std::string,opentracing::v3::Value>,std::allocator<std::pair<const std::string,opentracing::v3::Value> >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> > **)data;
      if ( *(_QWORD *)data )
      {
        std::_Hashtable<std::string,std::pair<std::string const,opentracing::v3::Value>,std::allocator<std::pair<std::string const,opentracing::v3::Value>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::~_Hashtable(*(std::_Hashtable<std::string,std::pair<const std::string,opentracing::v3::Value>,std::allocator<std::pair<const std::string,opentracing::v3::Value> >,std::__detail::_Select1st,std::equal_to<std::string >,std::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> > *const *)data);
        operator delete(v2, 0x38uLL);
      }
    }
  }
};

// Line 214: range 0000000014EA9EA3-0000000014EA9EB7
void __fastcall opentracing::v3::util::detail::variant_helper<unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        const std::size_t type_index,
        void *data)
{
  if ( type_index != 6 )
    opentracing::v3::util::detail::variant_helper<std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
      type_index,
      data);
};

// Line 236: range 0000000014EAA9F1-0000000014EAAA53
void __fastcall opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
        const std::size_t old_type_index,
        const void *old_value,
        void *new_value)
{
  char v3; // al
  char v4; // cl
  char v5; // al

  if ( old_type_index == 9 )
  {
    v3 = *(_BYTE *)(((unsigned __int64)old_value >> 3) + 0x7FFF8000);
    if ( v3 <= ((unsigned __int8)old_value & 7) && v3 )
    {
      __asan_report_load1(old_value);
    }
    else
    {
      v4 = *(_BYTE *)old_value;
      v5 = *(_BYTE *)(((unsigned __int64)new_value >> 3) + 0x7FFF8000);
      old_value = (const void *)((unsigned __int8)new_value & 7);
      if ( v5 > (char)old_value || !v5 )
      {
        *(_BYTE *)new_value = v4;
        return;
      }
    }
    old_type_index = (const std::size_t)new_value;
    __asan_report_store1(new_value);
  }
  opentracing::v3::util::detail::variant_helper<double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
    old_type_index,
    old_value,
    new_value);
};

// Line 236: range 0000000014EAA7BD-0000000014EAA807
void __fastcall opentracing::v3::util::detail::variant_helper<char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
        const std::size_t old_type_index,
        const void *old_value,
        void *new_value)
{
  if ( old_type_index == 2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)old_value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(old_value);
    }
    else if ( !*(_BYTE *)(((unsigned __int64)new_value >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)new_value = *(_QWORD *)old_value;
      return;
    }
    old_type_index = (const std::size_t)new_value;
    __asan_report_store8();
  }
  opentracing::v3::util::detail::variant_helper<opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
    old_type_index,
    old_value,
    new_value);
};

// Line 236: range 0000000014EAA809-0000000014EAA83C
void __fastcall opentracing::v3::util::detail::variant_helper<decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
        const std::size_t old_type_index,
        const void *old_value,
        void *new_value)
{
  if ( old_type_index == 3 )
  {
    if ( !*(_BYTE *)(((unsigned __int64)new_value >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)new_value = 0LL;
      return;
    }
    old_type_index = (const std::size_t)new_value;
    __asan_report_store8();
  }
  opentracing::v3::util::detail::variant_helper<char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
    old_type_index,
    old_value,
    new_value);
};

// Line 236: range 0000000014EAA9A3-0000000014EAA9EF
void __fastcall opentracing::v3::util::detail::variant_helper<double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
        const std::size_t old_type_index,
        const void *old_value,
        void *new_value)
{
  if ( old_type_index == 8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)old_value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(old_value);
    }
    else if ( !*(_BYTE *)(((unsigned __int64)new_value >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)new_value = *(_QWORD *)old_value;
      return;
    }
    old_type_index = (const std::size_t)new_value;
    __asan_report_store8();
  }
  opentracing::v3::util::detail::variant_helper<long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
    old_type_index,
    old_value,
    new_value);
};

// Line 236: range 0000000014EAA957-0000000014EAA9A1
void __fastcall opentracing::v3::util::detail::variant_helper<long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
        const std::size_t old_type_index,
        const void *old_value,
        void *new_value)
{
  if ( old_type_index == 7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)old_value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(old_value);
    }
    else if ( !*(_BYTE *)(((unsigned __int64)new_value >> 3) + 0x7FFF8000) )
    {
      *(_QWORD *)new_value = *(_QWORD *)old_value;
      return;
    }
    old_type_index = (const std::size_t)new_value;
    __asan_report_store8();
  }
  opentracing::v3::util::detail::variant_helper<unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
    old_type_index,
    old_value,
    new_value);
};

// Line 236: range 0000000014EAA83E-0000000014EAA88B
void __fastcall opentracing::v3::util::detail::variant_helper<opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
        const std::size_t old_type_index,
        const void *old_value,
        void *new_value)
{
  if ( old_type_index == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)new_value >> 3) + 0x7FFF8000) )
    {
      __asan_report_store16(new_value);
    }
    else if ( !*(_WORD *)(((unsigned __int64)old_value >> 3) + 0x7FFF8000) )
    {
      *(__m128i *)new_value = _mm_loadu_si128((const __m128i *)old_value);
      return;
    }
    old_type_index = (const std::size_t)old_value;
    __asan_report_load16(old_value);
  }
  opentracing::v3::util::detail::variant_helper<decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
    old_type_index,
    old_value,
    new_value);
};

// Line 236: range 0000000014EAA4ED-0000000014EAA7B8
void __fastcall opentracing::v3::util::detail::variant_helper<opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
        const std::size_t old_type_index,
        const void *old_value,
        void *new_value)
{
  const opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *v3; // r15
  opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *i; // r12
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  _QWORD *v9; // rdi
  opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *v10; // r13
  const opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *type_index; // rsi
  void *v12; // rax
  std::size_t v13; // rdi

  if ( old_type_index != 1 )
  {
    opentracing::v3::util::detail::variant_helper<opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
      old_type_index,
      old_value,
      new_value);
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)old_value >> 3) + 0x7FFF8000) )
  {
    old_type_index = (const std::size_t)old_value;
    __asan_report_load8(old_value);
LABEL_14:
    __asan_handle_no_return(old_type_index);
    __assert_fail(
      "p_",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/opentracing-cpp/include/opentracing/variant/recursive_wrapper.hpp",
      0x66u,
      "const T& opentracing::v3::util::recursive_wrapper<T>::get() const [with T = std::vector<opentracing::v3::Value>]");
  }
  i = *(opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > **)old_value;
  if ( !*(_QWORD *)old_value )
    goto LABEL_14;
  v6 = operator new(0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)i->data.__data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&i->data);
    goto LABEL_16;
  }
  if ( *(_BYTE *)(((unsigned __int64)i >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(i);
    goto LABEL_17;
  }
  v7 = *(_QWORD *)i->data.__data - i->type_index;
  v8 = 0xCCCCCCCCCCCCCCCDLL * (v7 >> 3);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_17:
    v9 = (_QWORD *)v6;
    __asan_report_store8();
    goto LABEL_18;
  }
  *(_QWORD *)v6 = 0LL;
  v9 = (_QWORD *)(v6 + 8);
  if ( *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8();
    goto LABEL_19;
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  v9 = (_QWORD *)(v6 + 16);
  if ( *(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_store8();
    goto LABEL_20;
  }
  *(_QWORD *)(v6 + 16) = 0LL;
  if ( v8 )
  {
    if ( v8 <= 0x333333333333333LL )
    {
      v10 = (opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *)operator new(8 * (v7 >> 3));
      goto LABEL_21;
    }
LABEL_20:
    __asan_handle_no_return(v9);
    std::__throw_bad_alloc();
  }
  v10 = 0LL;
LABEL_21:
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_27;
  }
  *(_QWORD *)v6 = v10;
  if ( *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8();
    goto LABEL_28;
  }
  *(_QWORD *)(v6 + 8) = v10;
  v7 += (__int64)v10;
  if ( *(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_store8();
    goto LABEL_29;
  }
  *(_QWORD *)(v6 + 16) = v7;
  type_index = (const opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *)i->type_index;
  v3 = *(const opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > **)i->data.__data;
  for ( i = v10; ; ++i )
  {
    v7 = (__int64)type_index;
    if ( type_index == v3 )
      break;
    opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant(
      i,
      type_index);
LABEL_29:
    type_index = (const opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *)(v7 + 40);
  }
  if ( *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_36;
  }
  *(_QWORD *)(v6 + 8) = i;
  if ( *(_BYTE *)(((unsigned __int64)new_value >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_store8();
    v13 = (std::size_t)v12;
    __cxa_begin_catch(v12);
    while ( i != v10 )
    {
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10);
      v13 = v10->type_index;
      opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::destroy(
        v10->type_index,
        &v10->data);
      ++v10;
    }
    __asan_handle_no_return(v13);
    __cxa_rethrow();
  }
  *(_QWORD *)new_value = v6;
};

// Line 236: range 0000000014EAA88D-0000000014EAA955
void __fastcall opentracing::v3::util::detail::variant_helper<std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
        const std::size_t old_type_index,
        const void *old_value,
        void *new_value)
{
  char *v5; // rdx
  unsigned __int64 v6; // rcx
  std::size_t v7; // rdi
  void *v8; // rdx

  if ( old_type_index != 5 )
  {
    opentracing::v3::util::detail::variant_helper<opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
      old_type_index,
      old_value,
      new_value);
    return;
  }
  if ( *(_BYTE *)(((unsigned __int64)new_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_8;
  }
  *(_QWORD *)new_value = (char *)new_value + 16;
  if ( *(_BYTE *)(((unsigned __int64)old_value >> 3) + 0x7FFF8000) )
  {
LABEL_8:
    __asan_report_load8(old_value);
    goto LABEL_9;
  }
  v5 = (char *)old_value + 8;
  v6 = ((unsigned __int64)old_value + 8) >> 3;
  if ( !*(_BYTE *)(v6 + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(
      (std::string *const)new_value,
      *(char **)old_value,
      (char *)(*((_QWORD *)old_value + 1) + *(_QWORD *)old_value),
      (std::forward_iterator_tag)v6);
    return;
  }
LABEL_9:
  v7 = (std::size_t)v5;
  __asan_report_load8(v5);
  opentracing::v3::util::detail::variant_helper<unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
    v7,
    old_value,
    v8);
};

// Line 597: range 0000000014EAAA56-0000000014EAB694
void __fastcall opentracing::v3::util::variant<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::variant(
        opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *const this,
        const opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *old)
{
  std::size_t type_index; // rax
  const jaegertracing::samplers::Config *v3; // rdx
  const jaegertracing::reporters::Config *v4; // rcx
  const jaegertracing::propagation::HeadersConfig *v5; // r8
  const jaegertracing::baggage::RestrictionsConfig *v6; // r9
  const std::string *v7; // [rsp+10h] [rbp+8h]
  const std::vector<jaegertracing::Tag> *v8; // [rsp+18h] [rbp+10h]

  if ( *(_BYTE *)(((unsigned __int64)old >> 3) + 0x7FFF8000) )
  {
    this = (opentracing::v3::util::variant<bool,double,long int,long unsigned int,std::string,opentracing::v3::string_view,std::nullptr_t,char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value> >,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value> > > *const)old;
    __asan_report_load8(old);
  }
  else
  {
    type_index = old->type_index;
    if ( !*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      this->type_index = type_index;
      opentracing::v3::util::detail::variant_helper<bool,double,long,unsigned long,std::string,opentracing::v3::string_view,decltype(nullptr),char const*,opentracing::v3::util::recursive_wrapper<std::vector<opentracing::v3::Value>>,opentracing::v3::util::recursive_wrapper<std::unordered_map<std::string,opentracing::v3::Value>>>::copy(
        type_index,
        &old->data,
        &this->data);
      return;
    }
  }
  __asan_report_store8();
  jaegertracing::Config::Config((jaegertracing::Config *const)this, (bool)old, v3, v4, v5, v6, v7, v8);
};
