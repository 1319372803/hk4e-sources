// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/system/detail/std_interoperability.hpp

// Line 25: range 000000000BF0E7EE-000000000BF0E83B
void __cdecl boost::system::detail::std_category::~std_category(boost::system::detail::std_category *const this)
{
  __int64 *v1; // rdx

  v1 = &`vtable for'boost::system::detail::std_category + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v1;
  std::_V2::error_category::~error_category((std::_V2::error_category *)this);
};

// Line 25: range 000000000BF0E83C-000000000BF0E866
void __cdecl boost::system::detail::std_category::~std_category(boost::system::detail::std_category *const this)
{
  boost::system::detail::std_category::~std_category(this);
  operator delete(this, 0x10uLL);
};

// Line 33: range 000000000BEE2FF6-000000000BEE3078
void __cdecl boost::system::detail::std_category::std_category(
        boost::system::detail::std_category *const this,
        const boost::system::error_category *pc)
{
  __int64 *v2; // rdx

  std::_V2::error_category::error_category((std::_V2::error_category *const)this);
  v2 = &`vtable for'boost::system::detail::std_category + 2;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(_QWORD *)this->baseclass_0 = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pc_ = pc;
};

// Line 37: range 000000000BEE307A-000000000BEE3109
const char *__cdecl boost::system::detail::std_category::name(const boost::system::detail::std_category *const this)
{
  __int64 (__fastcall ***pc)(const boost::system::error_category *); // rdx
  __int64 (__fastcall ***v2)(const boost::system::error_category *); // rax
  __int64 (__fastcall **v3)(const boost::system::error_category *); // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  pc = (__int64 (__fastcall ***)(const boost::system::error_category *))this->pc_;
  v2 = pc;
  if ( *(_BYTE *)(((unsigned __int64)pc >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *v2;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return (const char *)(*v3)((const boost::system::error_category *)pc);
};

// Line 42: range 000000000BEE310A-000000000BEE3214
std::string *__cdecl boost::system::detail::std_category::message[abi:cxx11](
        std::string *retstr,
        const boost::system::detail::std_category *const this,
        int ev)
{
  __int64 pc; // rsi
  const boost::system::error_category *v4; // rax
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(std::string *, __int64, _QWORD); // r8

  if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  pc = (__int64)this->pc_;
  v4 = this->pc_;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(v4->_vptr_error_category + 4);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(void (__fastcall **)(std::string *, __int64, _QWORD))v5;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    pc = 32LL;
    __asan_report_store_n(retstr, 32LL);
  }
  v6(retstr, pc, (unsigned int)ev);
  return retstr;
};

// Line 47: range 000000000BEE3216-000000000BEE32D9
std::error_condition __cdecl boost::system::detail::std_category::default_error_condition(
        const boost::system::detail::std_category *const this,
        int ev)
{
  const boost::system::error_category *pc; // rdx
  const boost::system::error_category *v3; // rax
  unsigned __int64 v4; // rax
  const boost::system::error_category *v5; // rdx
  boost::system::error_condition v6; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  pc = this->pc_;
  v3 = pc;
  if ( *(_BYTE *)(((unsigned __int64)pc >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(v3->_vptr_error_category + 1);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_QWORD *)&v6.val_ = (*(__int64 (__fastcall **)(const boost::system::error_category *, _QWORD))v4)(
                          pc,
                          (unsigned int)ev);
  v6.cat_ = v5;
  return boost::system::error_condition::operator std::error_condition(&v6);
};

// Line 77: range 000000000BEE361C-000000000BEE3AFC
bool __cdecl boost::system::detail::std_category::equivalent(
        const boost::system::detail::std_category *const this,
        int code,
        const std::error_condition *condition)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  const std::_V2::error_category *v6; // rdi
  const boost::system::error_category *pc; // r14
  int v8; // eax
  const boost::system::error_category *v9; // rcx
  const boost::system::error_category *v10; // rax
  unsigned __int64 v11; // rax
  const std::_V2::error_category *v12; // r14
  const std::_V2::error_category *v13; // rax
  const boost::system::error_category *v14; // rax
  const std::_V2::error_category *v15; // r14
  const std::_V2::error_category *v16; // rax
  const boost::system::error_category *v18; // r14
  int v19; // eax
  const boost::system::error_category *v20; // rax
  const std::_V2::error_category *v21; // rax
  const boost::system::detail::std_category *v22; // rax
  const boost::system::error_category *v23; // r14
  int v24; // eax
  const boost::system::error_category *v25; // rax
  bool result; // al
  unsigned __int64 v27; // rax
  const boost::system::error_category *v28; // rdx
  const boost::system::detail::std_category *pc2; // [rsp+28h] [rbp-78h]
  char v32[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 5 bn:80";
  *(_QWORD *)(v3 + 16) = boost::system::detail::std_category::equivalent;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = std::error_condition::category(condition);
  if ( std::_V2::error_category::operator==(v6, (const std::_V2::error_category *)this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    pc = this->pc_;
    v8 = std::error_condition::value(condition);
    boost::system::error_condition::error_condition((boost::system::error_condition *const)(v3 + 32), v8, pc);
    if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->pc_;
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(v10->_vptr_error_category + 2);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_38:
    result = (*(__int64 (__fastcall **)(const boost::system::error_category *, _QWORD, unsigned __int64))v11)(
               v9,
               (unsigned int)code,
               v3 + 32);
    goto LABEL_44;
  }
  v12 = (const std::_V2::error_category *)std::_V2::generic_category(v6);
  v13 = std::error_condition::category(condition);
  if ( std::_V2::error_category::operator==(v13, v12)
    || (v14 = boost::system::generic_category(),
        v15 = boost::system::error_category::operator std::_V2::error_category const&(v14),
        v16 = std::error_condition::category(condition),
        std::_V2::error_category::operator==(v16, v15)) )
  {
    v18 = boost::system::generic_category();
    v19 = std::error_condition::value(condition);
    boost::system::error_condition::error_condition((boost::system::error_condition *const)(v3 + 32), v19, v18);
    if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->pc_;
    v20 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(v20->_vptr_error_category + 2);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_38;
  }
  v21 = std::error_condition::category(condition);
  if ( v21 )
    v22 = (const boost::system::detail::std_category *)__dynamic_cast(
                                                         v21,
                                                         (const struct __class_type_info *)&`typeinfo for'std::_V2::error_category,
                                                         (const struct __class_type_info *)&`typeinfo for'boost::system::detail::std_category,
                                                         0LL);
  else
    v22 = 0LL;
  pc2 = v22;
  if ( v22 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v22->pc_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v23 = pc2->pc_;
    v24 = std::error_condition::value(condition);
    boost::system::error_condition::error_condition((boost::system::error_condition *const)(v3 + 32), v24, v23);
    if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->pc_;
    v25 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(v25->_vptr_error_category + 2);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_38;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v27 = *(_QWORD *)this->baseclass_0 + 40LL;
  if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 32) = (*(__int64 (__fastcall **)(const boost::system::detail::std_category *const, _QWORD))v27)(
                           this,
                           (unsigned int)code);
  *(_QWORD *)(v3 + 40) = v28;
  result = std::operator==((const std::error_condition *)(v3 + 32), condition);
LABEL_44:
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 106: range 000000000BEE3AFE-000000000BEE4010
bool __cdecl boost::system::detail::std_category::equivalent(
        const boost::system::detail::std_category *const this,
        const std::error_code *code,
        int condition)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  const std::_V2::error_category *v6; // rdi
  const boost::system::error_category *pc; // r14
  int v8; // eax
  const boost::system::error_category *v9; // rcx
  const boost::system::error_category *v10; // rax
  unsigned __int64 v11; // rax
  const std::_V2::error_category *v12; // r14
  const std::_V2::error_category *v13; // rax
  const boost::system::error_category *v14; // rax
  const std::_V2::error_category *v15; // r14
  const std::_V2::error_category *v16; // rax
  const boost::system::error_category *v18; // r14
  int v19; // eax
  const boost::system::error_category *v20; // rax
  const std::_V2::error_category *v21; // rax
  const boost::system::detail::std_category *v22; // rax
  const boost::system::error_category *v23; // r14
  int v24; // eax
  const boost::system::error_category *v25; // rax
  bool result; // al
  const boost::system::error_category *v27; // rcx
  std::_V2 *v28; // rdi
  __int64 v29; // r12
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  const boost::system::detail::std_category *pc2; // [rsp+28h] [rbp-78h]
  char v35[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 6 bc:122";
  *(_QWORD *)(v3 + 16) = boost::system::detail::std_category::equivalent;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = std::error_code::category(code);
  if ( std::_V2::error_category::operator==(v6, (const std::_V2::error_category *)this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    pc = this->pc_;
    v8 = std::error_code::value(code);
    boost::system::error_code::error_code((boost::system::error_code *const)(v3 + 32), v8, pc);
    if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->pc_;
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(v10->_vptr_error_category + 3);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_38:
    result = (*(__int64 (__fastcall **)(const boost::system::error_category *, unsigned __int64, _QWORD))v11)(
               v9,
               v3 + 32,
               (unsigned int)condition);
    goto LABEL_48;
  }
  v12 = (const std::_V2::error_category *)std::_V2::generic_category(v6);
  v13 = std::error_code::category(code);
  if ( std::_V2::error_category::operator==(v13, v12)
    || (v14 = boost::system::generic_category(),
        v15 = boost::system::error_category::operator std::_V2::error_category const&(v14),
        v16 = std::error_code::category(code),
        std::_V2::error_category::operator==(v16, v15)) )
  {
    v18 = boost::system::generic_category();
    v19 = std::error_code::value(code);
    boost::system::error_code::error_code((boost::system::error_code *const)(v3 + 32), v19, v18);
    if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->pc_;
    v20 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(v20->_vptr_error_category + 3);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_38;
  }
  v21 = std::error_code::category(code);
  if ( v21 )
    v22 = (const boost::system::detail::std_category *)__dynamic_cast(
                                                         v21,
                                                         (const struct __class_type_info *)&`typeinfo for'std::_V2::error_category,
                                                         (const struct __class_type_info *)&`typeinfo for'boost::system::detail::std_category,
                                                         0LL);
  else
    v22 = 0LL;
  pc2 = v22;
  if ( v22 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v22->pc_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v23 = pc2->pc_;
    v24 = std::error_code::value(code);
    boost::system::error_code::error_code((boost::system::error_code *const)(v3 + 32), v24, v23);
    if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = this->pc_;
    v25 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(v25->_vptr_error_category + 3);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_38;
  }
  v27 = boost::system::generic_category();
  if ( *(_BYTE *)(((unsigned __int64)&this->pc_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v28 = (std::_V2 *)this->pc_;
  if ( boost::system::error_category::operator==((const boost::system::error_category *const)v28, v27) )
  {
    v29 = std::_V2::generic_category(v28);
    std::_V2::generic_category(v28);
    v30 = std::_V2::generic_category(v28);
    if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v31 = *(_QWORD *)v30 + 56LL;
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    result = (*(__int64 (__fastcall **)(__int64, const std::error_code *, _QWORD))v31)(
               v29,
               code,
               (unsigned int)condition);
  }
  else
  {
    result = 0;
  }
LABEL_48:
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 208: range 000000000BEE3369-000000000BEE361A
const std::_V2::error_category *__cdecl boost::system::detail::to_std_category(
        const boost::system::error_category *cat)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  boost::system::detail::std_category *v4; // r14
  std::unique_ptr<boost::system::detail::std_category> *v5; // rax
  std::_Rb_tree_iterator<std::pair<const boost::system::error_category* const,std::unique_ptr<boost::system::detail::std_category> > >::pointer v6; // rax
  const std::_V2::error_category *result; // rax
  std::map<const boost::system::error_category*,std::unique_ptr<boost::system::detail::std_category>>::key_type __x; // [rsp+18h] [rbp-C8h] BYREF
  std::pair<const boost::system::error_category* const,std::unique_ptr<boost::system::detail::std_category> > v9; // [rsp+20h] [rbp-C0h] BYREF
  char v10[176]; // [rsp+30h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 8 4 i:62 64 8 4 p:66 96 16 4 r:68";
  *(_QWORD *)(v1 + 16) = boost::system::detail::to_std_category;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  if ( !(_BYTE)`guard variable for'boost::system::detail::to_std_category(boost::system::error_category const&)::map_
    && __cxa_guard_acquire(&`guard variable for'boost::system::detail::to_std_category(boost::system::error_category const&)::map_) )
  {
    std::map<boost::system::error_category const*,std::unique_ptr<boost::system::detail::std_category>>::map(&boost::system::detail::to_std_category(boost::system::error_category const&)::map_);
    __cxa_guard_release(&`guard variable for'boost::system::detail::to_std_category(boost::system::error_category const&)::map_);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<boost::system::error_category const*,std::unique_ptr<boost::system::detail::std_category>>::~map,
      &boost::system::detail::to_std_category(boost::system::error_category const&)::map_,
      &_dso_handle);
  }
  __x = cat;
  *(std::map<const boost::system::error_category*,std::unique_ptr<boost::system::detail::std_category>>::iterator *)(v1 + 32) = std::map<boost::system::error_category const*,std::unique_ptr<boost::system::detail::std_category>>::find(&boost::system::detail::to_std_category(boost::system::error_category const&)::map_, &__x);
  __x = (std::map<const boost::system::error_category*,std::unique_ptr<boost::system::detail::std_category>>::key_type)std::map<boost::system::error_category const*,std::unique_ptr<boost::system::detail::std_category>>::end(&boost::system::detail::to_std_category(boost::system::error_category const&)::map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const boost::system::error_category* const,std::unique_ptr<boost::system::detail::std_category> > >::_Self *)(v1 + 32),
         (const std::_Rb_tree_iterator<std::pair<const boost::system::error_category* const,std::unique_ptr<boost::system::detail::std_category> > >::_Self *)&__x) )
  {
    v4 = (boost::system::detail::std_category *)operator new(0x10uLL);
    boost::system::detail::std_category::std_category(v4, cat);
    std::unique_ptr<boost::system::detail::std_category>::unique_ptr<std::default_delete<boost::system::detail::std_category>,void>(
      (std::unique_ptr<boost::system::detail::std_category> *const)(v1 + 64),
      v4);
    v5 = std::move<std::unique_ptr<boost::system::detail::std_category> &>((std::unique_ptr<boost::system::detail::std_category> *)(v1 + 64));
    __x = cat;
    std::pair<boost::system::error_category const* const,std::unique_ptr<boost::system::detail::std_category>>::pair<boost::system::error_category const*,std::unique_ptr<boost::system::detail::std_category>,true>(
      &v9,
      &__x,
      v5);
    *(std::pair<std::_Rb_tree_iterator<std::pair<const boost::system::error_category* const,std::unique_ptr<boost::system::detail::std_category> > >,bool> *)(v1 + 96) = std::map<boost::system::error_category const*,std::unique_ptr<boost::system::detail::std_category>>::insert(&boost::system::detail::to_std_category(boost::system::error_category const&)::map_, &v9);
    std::pair<boost::system::error_category const* const,std::unique_ptr<boost::system::detail::std_category>>::~pair(&v9);
    *(_QWORD *)(v1 + 32) = *(_QWORD *)(v1 + 96);
    std::unique_ptr<boost::system::detail::std_category>::~unique_ptr((std::unique_ptr<boost::system::detail::std_category> *const)(v1 + 64));
  }
  v6 = std::_Rb_tree_iterator<std::pair<boost::system::error_category const* const,std::unique_ptr<boost::system::detail::std_category>>>::operator->((const std::_Rb_tree_iterator<std::pair<const boost::system::error_category* const,std::unique_ptr<boost::system::detail::std_category> > > *const)(v1 + 32));
  result = (const std::_V2::error_category *)std::unique_ptr<boost::system::detail::std_category>::operator*(&v6->second);
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
