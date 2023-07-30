// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/container_hash/extensions.hpp

// Line 66: range 000000000CA1933E-000000000CA1946B
std::size_t __cdecl boost::hash_value<std::string,unsigned int>(const std::pair<std::string,unsigned int> *v)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::size_t result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 seed:68";
  *(_QWORD *)(v1 + 16) = boost::hash_value<std::string,unsigned int>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 32) = 0LL;
  boost::hash_combine<std::string>((std::size_t *)(v1 + 32), &v->first);
  boost::hash_combine<unsigned int>((std::size_t *)(v1 + 32), &v->second);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *(_QWORD *)(v1 + 32);
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

// Line 66: range 0000000012CB7130-0000000012CB725D
std::size_t __cdecl boost::hash_value<unsigned int const,unsigned int>(
        const std::pair<unsigned int const,unsigned int> *v)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::size_t result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 seed:68";
  *(_QWORD *)(v1 + 16) = boost::hash_value<unsigned int const,unsigned int>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 32) = 0LL;
  boost::hash_combine<unsigned int>((std::size_t *)(v1 + 32), (const unsigned int *)v);
  boost::hash_combine<unsigned int>((std::size_t *)(v1 + 32), &v->second);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *(_QWORD *)(v1 + 32);
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

// Line 66: range 000000000D3F23A6-000000000D3F24D3
std::size_t __cdecl boost::hash_value<unsigned int,data::ExhibitionServerTriggerType>(
        const std::pair<unsigned int,data::ExhibitionServerTriggerType> *v)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::size_t result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 seed:68";
  *(_QWORD *)(v1 + 16) = boost::hash_value<unsigned int,data::ExhibitionServerTriggerType>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 32) = 0LL;
  boost::hash_combine<unsigned int>((std::size_t *)(v1 + 32), (const unsigned int *)v);
  boost::hash_combine<data::ExhibitionServerTriggerType>((std::size_t *)(v1 + 32), &v->second);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *(_QWORD *)(v1 + 32);
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

// Line 66: range 000000000CA2C1A2-000000000CA2C2CF
std::size_t __cdecl boost::hash_value<unsigned int,std::string>(const std::pair<unsigned int,std::string > *v)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::size_t result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 seed:68";
  *(_QWORD *)(v1 + 16) = boost::hash_value<unsigned int,std::string>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 32) = 0LL;
  boost::hash_combine<unsigned int>((std::size_t *)(v1 + 32), &v->first);
  boost::hash_combine<std::string>((std::size_t *)(v1 + 32), &v->second);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *(_QWORD *)(v1 + 32);
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

// Line 66: range 000000000C9BAE1E-000000000C9BAF4B
std::size_t __cdecl boost::hash_value<unsigned int,unsigned int>(const std::pair<unsigned int,unsigned int> *v)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::size_t result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 seed:68";
  *(_QWORD *)(v1 + 16) = boost::hash_value<unsigned int,unsigned int>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 32) = 0LL;
  boost::hash_combine<unsigned int>((std::size_t *)(v1 + 32), (const unsigned int *)v);
  boost::hash_combine<unsigned int>((std::size_t *)(v1 + 32), &v->second);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *(_QWORD *)(v1 + 32);
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

// Line 125: range 0000000012AF03F6-0000000012AF042F
std::size_t __cdecl boost::hash_value<unsigned int,std::allocator<unsigned int>>(const std::vector<unsigned int> *v)
{
  const unsigned int *M_current; // rbx
  std::vector<unsigned int>::const_iterator v2; // rax

  M_current = std::vector<unsigned int>::end(v)._M_current;
  v2._M_current = std::vector<unsigned int>::begin(v)._M_current;
  return boost::hash_range<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
           v2,
           (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
};

// Line 155: range 0000000012AEFC19-0000000012AEFC52
std::size_t __cdecl boost::hash_value<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>(
        const std::map<unsigned int,unsigned int> *v)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr M_node; // rbx
  std::map<unsigned int,unsigned int>::const_iterator v2; // rax

  M_node = std::map<unsigned int,unsigned int>::end(v)._M_node;
  v2._M_node = std::map<unsigned int,unsigned int>::begin(v)._M_node;
  return boost::hash_range<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>(
           v2,
           (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >)M_node);
};

// Line 188: range 0000000012CCA146-0000000012CCA154
void __cdecl boost::hash_detail::hash_combine_tuple<3ul,std::tuple<unsigned int,unsigned int,unsigned int>>(
        std::size_t *a1,
        const std::tuple<unsigned int,unsigned int,unsigned int> *a2)
{
  ;
};

// Line 195: range 0000000012C2965C-0000000012C2969F
void __cdecl boost::hash_detail::hash_combine_tuple<0ul,std::tuple<unsigned int,unsigned int,unsigned int>>(
        std::size_t *seed,
        const std::tuple<unsigned int,unsigned int,unsigned int> *v)
{
  const unsigned int *v2; // rdx

  v2 = std::get<0ul,unsigned int,unsigned int,unsigned int>(v);
  boost::hash_combine<unsigned int>(seed, v2);
  boost::hash_detail::hash_combine_tuple<1ul,std::tuple<unsigned int,unsigned int,unsigned int>>(seed, v);
};

// Line 195: range 0000000012C85160-0000000012C851A3
void __cdecl boost::hash_detail::hash_combine_tuple<1ul,std::tuple<unsigned int,unsigned int,unsigned int>>(
        std::size_t *seed,
        const std::tuple<unsigned int,unsigned int,unsigned int> *v)
{
  const unsigned int *v2; // rdx

  v2 = std::get<1ul,unsigned int,unsigned int,unsigned int>(v);
  boost::hash_combine<unsigned int>(seed, v2);
  boost::hash_detail::hash_combine_tuple<2ul,std::tuple<unsigned int,unsigned int,unsigned int>>(seed, v);
};

// Line 195: range 0000000012CB6F42-0000000012CB6F85
void __cdecl boost::hash_detail::hash_combine_tuple<2ul,std::tuple<unsigned int,unsigned int,unsigned int>>(
        std::size_t *seed,
        const std::tuple<unsigned int,unsigned int,unsigned int> *v)
{
  const unsigned int *v2; // rdx

  v2 = std::get<2ul,unsigned int,unsigned int,unsigned int>(v);
  boost::hash_combine<unsigned int>(seed, v2);
  boost::hash_detail::hash_combine_tuple<3ul,std::tuple<unsigned int,unsigned int,unsigned int>>(seed, v);
};

// Line 202: range 0000000012BA122B-0000000012BA1340
std::size_t __cdecl boost::hash_detail::hash_tuple<std::tuple<unsigned int,unsigned int,unsigned int>>(
        const std::tuple<unsigned int,unsigned int,unsigned int> *v)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::size_t result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 seed:204";
  *(_QWORD *)(v1 + 16) = boost::hash_detail::hash_tuple<std::tuple<unsigned int,unsigned int,unsigned int>>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)(v1 + 32) = 0LL;
  boost::hash_detail::hash_combine_tuple<0ul,std::tuple<unsigned int,unsigned int,unsigned int>>(
    (std::size_t *)(v1 + 32),
    v);
  if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = *(_QWORD *)(v1 + 32);
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

// Line 212: range 0000000012AEF136-0000000012AEF14F
std::size_t __cdecl boost::hash_value<unsigned int,unsigned int,unsigned int>(
        const std::tuple<unsigned int,unsigned int,unsigned int> *v)
{
  return boost::hash_detail::hash_tuple<std::tuple<unsigned int,unsigned int,unsigned int>>(v);
};

// Line 356: range 000000000D52F9DE-000000000D52FA33
std::size_t __cdecl boost::hash<data::ExhibitionServerTriggerType>::operator()(
        const boost::hash<data::ExhibitionServerTriggerType> *const this,
        const data::ExhibitionServerTriggerType *val)
{
  if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(val);
  }
  return boost::hash_value<data::ExhibitionServerTriggerType>((data::ExhibitionServerTriggerType)*val);
};

// Line 356: range 00000000129E7866-00000000129E7883
std::size_t __cdecl boost::hash<std::map<unsigned int,unsigned int>>::operator()(
        const boost::hash<std::map<unsigned int,unsigned int> > *const this,
        const std::map<unsigned int,unsigned int> *val)
{
  return boost::hash_value<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>(val);
};

// Line 356: range 000000000C9808D8-000000000C9808F5
std::size_t __cdecl boost::hash<std::pair<std::string,unsigned int>>::operator()(
        const boost::hash<std::pair<std::string,unsigned int> > *const this,
        const std::pair<std::string,unsigned int> *val)
{
  return boost::hash_value<std::string,unsigned int>(val);
};

// Line 356: range 0000000012C85424-0000000012C85441
std::size_t __cdecl boost::hash<std::pair<unsigned int const,unsigned int>>::operator()(
        const boost::hash<std::pair<unsigned int const,unsigned int> > *const this,
        const std::pair<unsigned int const,unsigned int> *val)
{
  return boost::hash_value<unsigned int const,unsigned int>(val);
};

// Line 356: range 000000000D2FA796-000000000D2FA7B3
std::size_t __cdecl boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType>>::operator()(
        const boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType> > *const this,
        const std::pair<unsigned int,data::ExhibitionServerTriggerType> *val)
{
  return boost::hash_value<unsigned int,data::ExhibitionServerTriggerType>(val);
};

// Line 356: range 000000000C997760-000000000C99777D
std::size_t __cdecl boost::hash<std::pair<unsigned int,std::string>>::operator()(
        const boost::hash<std::pair<unsigned int,std::string > > *const this,
        const std::pair<unsigned int,std::string > *val)
{
  return boost::hash_value<unsigned int,std::string>(val);
};

// Line 356: range 000000000C8FB9E0-000000000C8FB9FD
std::size_t __cdecl boost::hash<std::pair<unsigned int,unsigned int>>::operator()(
        const boost::hash<std::pair<unsigned int,unsigned int> > *const this,
        const std::pair<unsigned int,unsigned int> *val)
{
  return boost::hash_value<unsigned int,unsigned int>(val);
};

// Line 356: range 00000000129E555E-00000000129E557B
std::size_t __cdecl boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>::operator()(
        const boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> > *const this,
        const std::tuple<unsigned int,unsigned int,unsigned int> *val)
{
  return boost::hash_value<unsigned int,unsigned int,unsigned int>(val);
};

// Line 356: range 00000000129E83C0-00000000129E83DD
std::size_t __cdecl boost::hash<std::vector<unsigned int>>::operator()(
        const boost::hash<std::vector<unsigned int> > *const this,
        const std::vector<unsigned int> *val)
{
  return boost::hash_value<unsigned int,std::allocator<unsigned int>>(val);
};
