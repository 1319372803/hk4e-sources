// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/blackboard.h

// Line 32: range 000000000E1D2B74-000000000E1D2BC5
void __cdecl BT::Blackboard::Blackboard(BT::Blackboard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::Blackboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_Blackboard = v1;
  std::unordered_map<std::string,std::any>::unordered_map(&this->storage_map_);
};

// Line 37: range 000000000E1D2BC6-000000000E1D2C01
BT::BlackboardPtr __cdecl BT::Blackboard::create()
{
  std::shared_ptr<BT::Blackboard> *v0; // rdi
  BT::Blackboard *v1; // rbx
  BT::BlackboardPtr result; // rax

  v1 = (BT::Blackboard *)operator new(0x40uLL);
  BT::Blackboard::Blackboard(v1);
  std::shared_ptr<BT::Blackboard>::shared_ptr<BT::Blackboard,void>(v0, v1);
  result._M_ptr = (std::__shared_ptr<BT::Blackboard,(__gnu_cxx::_Lock_policy)2>::element_type *)v0;
  return result;
};

// Line 42: range 000000000E225900-000000000E22592A
void __cdecl BT::Blackboard::~Blackboard(BT::Blackboard *const this)
{
  BT::Blackboard::~Blackboard(this);
  operator delete(this, 0x40uLL);
};

// Line 42: range 000000000E2258AE-000000000E2258FF
void __cdecl BT::Blackboard::~Blackboard(BT::Blackboard *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BT::Blackboard + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_Blackboard = v1;
  std::unordered_map<std::string,std::any>::~unordered_map(&this->storage_map_);
};

// Line 59: range 000000000DF3725C-000000000DF37370
std::any *__cdecl BT::Blackboard::getAny(BT::Blackboard *const this, const std::string *key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::any *result; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> __y; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 it:61";
  *(_QWORD *)(v2 + 16) = BT::Blackboard::getAny;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,std::any>::iterator *)(v2 + 32) = std::unordered_map<std::string,std::any>::find(
                                                                       &this->storage_map_,
                                                                       key);
  __y._M_cur = std::unordered_map<std::string,std::any>::end(&this->storage_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::any>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> *)(v2 + 32),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<std::string const,std::any>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::any>,false,true> *const)(v2 + 32))->second;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 70: range 000000000DF4A3FA-000000000DF4A84B
bool __cdecl BT::Blackboard::get<BT::BlackboardInnerPhaseType>(
        const BT::Blackboard *const this,
        const std::string *key,
        BT::BlackboardInnerPhaseType *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r13
  const std::type_info *v7; // rax
  BT::BlackboardInnerPhaseType v8; // ecx
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  const std::type_info *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  bool result; // al
  char *val; // [rsp+20h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> __y; // [rsp+28h] [rbp-98h] BYREF
  const std::any *any_val; // [rsp+30h] [rbp-90h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-80h] BYREF
  char v21[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 it:72";
  *(_QWORD *)(v3 + 16) = BT::Blackboard::get<BT::BlackboardInnerPhaseType>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,std::any>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,std::any>::find(
                                                                             &this->storage_map_,
                                                                             key);
  __y._M_cur = std::unordered_map<std::string,std::any>::end(&this->storage_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::any>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> *)(v3 + 32),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    any_val = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::any>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::any>,false,true> *const)(v3 + 32))->second;
    v7 = std::any::type(any_val);
    if ( std::type_info::operator==((const std::type_info *const)&`typeinfo for'BT::BlackboardInnerPhaseType, v7) )
    {
      v8 = std::any_cast<BT::BlackboardInnerPhaseType>(any_val);
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(value);
      }
      *value = v8;
      v6 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/blackboard.h",
        off_1BB5FE00,
        94);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v20, (const char (*)[17])"blackboard key:[");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, key);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])"] storage type:");
      v12 = std::any::type(any_val);
      val = (char *)std::type_info::name(v12);
      v13 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" need type:");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true>::__node_type *)std::type_info::name((const std::type_info *const)&`typeinfo for'BT::BlackboardInnerPhaseType);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = 0;
    }
  }
  result = v6;
  if ( v21 == (char *)v3 )
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

// Line 70: range 000000000DF803FE-000000000DF8084F
bool __cdecl BT::Blackboard::get<int>(const BT::Blackboard *const this, const std::string *key, int *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r13
  const std::type_info *v7; // rax
  int v8; // ecx
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  const std::type_info *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r13
  bool result; // al
  char *val; // [rsp+20h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> __y; // [rsp+28h] [rbp-98h] BYREF
  const std::any *any_val; // [rsp+30h] [rbp-90h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-80h] BYREF
  char v21[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 it:72";
  *(_QWORD *)(v3 + 16) = BT::Blackboard::get<int>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,std::any>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,std::any>::find(
                                                                             &this->storage_map_,
                                                                             key);
  __y._M_cur = std::unordered_map<std::string,std::any>::end(&this->storage_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::any>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> *)(v3 + 32),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    any_val = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::any>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::any>,false,true> *const)(v3 + 32))->second;
    v7 = std::any::type(any_val);
    if ( std::type_info::operator==((const std::type_info *const)&`typeinfo for'int, v7) )
    {
      v8 = std::any_cast<int>(any_val);
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(value);
      }
      *value = v8;
      v6 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/blackboard.h",
        off_1BB5FE00,
        94);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v20, (const char (*)[17])"blackboard key:[");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, key);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])"] storage type:");
      v12 = std::any::type(any_val);
      val = (char *)std::type_info::name(v12);
      v13 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" need type:");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true>::__node_type *)std::type_info::name((const std::type_info *const)&`typeinfo for'int);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = 0;
    }
  }
  result = v6;
  if ( v21 == (char *)v3 )
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

// Line 70: range 000000000D894A2C-000000000D894E81
bool __cdecl BT::Blackboard::get<std::map<proto::GCGDiceSideType,unsigned int>>(
        const BT::Blackboard *const this,
        const std::string *key,
        std::map<proto::GCGDiceSideType,unsigned int> *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r13
  const std::type_info *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  const std::type_info *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  bool result; // al
  char *val; // [rsp+20h] [rbp-D0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> __y; // [rsp+28h] [rbp-C8h] BYREF
  const std::any *any_val; // [rsp+30h] [rbp-C0h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-B0h] BYREF
  std::map<proto::GCGDiceSideType,unsigned int> v20; // [rsp+60h] [rbp-90h] BYREF
  char v21[96]; // [rsp+90h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 it:72";
  *(_QWORD *)(v3 + 16) = BT::Blackboard::get<std::map<proto::GCGDiceSideType,unsigned int>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,std::any>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,std::any>::find(
                                                                             &this->storage_map_,
                                                                             key);
  __y._M_cur = std::unordered_map<std::string,std::any>::end(&this->storage_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::any>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> *)(v3 + 32),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    any_val = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::any>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::any>,false,true> *const)(v3 + 32))->second;
    v7 = std::any::type(any_val);
    if ( std::type_info::operator==(
           (const std::type_info *const)&`typeinfo for'std::map<proto::GCGDiceSideType,unsigned int>,
           v7) )
    {
      std::any_cast<std::map<proto::GCGDiceSideType,unsigned int>>(&v20, any_val);
      std::map<proto::GCGDiceSideType,unsigned int>::operator=(value, &v20);
      std::map<proto::GCGDiceSideType,unsigned int>::~map(&v20);
      v6 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/blackboard.h",
        off_1BA27E00,
        94);
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v19, (const char (*)[17])"blackboard key:[");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, key);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])"] storage type:");
      v11 = std::any::type(any_val);
      val = (char *)std::type_info::name(v11);
      v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&val);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" need type:");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true>::__node_type *)std::type_info::name((const std::type_info *const)&`typeinfo for'std::map<proto::GCGDiceSideType,unsigned int>);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = 0;
    }
  }
  result = v6;
  if ( v21 == (char *)v3 )
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

// Line 70: range 000000000D895212-000000000D895667
bool __cdecl BT::Blackboard::get<std::map<unsigned int,unsigned int>>(
        const BT::Blackboard *const this,
        const std::string *key,
        std::map<unsigned int,unsigned int> *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r13
  const std::type_info *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  const std::type_info *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  bool result; // al
  char *val; // [rsp+20h] [rbp-D0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> __y; // [rsp+28h] [rbp-C8h] BYREF
  const std::any *any_val; // [rsp+30h] [rbp-C0h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-B0h] BYREF
  std::map<unsigned int,unsigned int> v20; // [rsp+60h] [rbp-90h] BYREF
  char v21[96]; // [rsp+90h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 it:72";
  *(_QWORD *)(v3 + 16) = BT::Blackboard::get<std::map<unsigned int,unsigned int>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,std::any>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,std::any>::find(
                                                                             &this->storage_map_,
                                                                             key);
  __y._M_cur = std::unordered_map<std::string,std::any>::end(&this->storage_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::any>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> *)(v3 + 32),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    any_val = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::any>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::any>,false,true> *const)(v3 + 32))->second;
    v7 = std::any::type(any_val);
    if ( std::type_info::operator==((const std::type_info *const)&`typeinfo for'std::map<unsigned int,unsigned int>, v7) )
    {
      std::any_cast<std::map<unsigned int,unsigned int>>(&v20, any_val);
      std::map<unsigned int,unsigned int>::operator=(value, &v20);
      std::map<unsigned int,unsigned int>::~map(&v20);
      v6 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/blackboard.h",
        off_1BA27E00,
        94);
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v19, (const char (*)[17])"blackboard key:[");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, key);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])"] storage type:");
      v11 = std::any::type(any_val);
      val = (char *)std::type_info::name(v11);
      v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&val);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" need type:");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true>::__node_type *)std::type_info::name((const std::type_info *const)&`typeinfo for'std::map<unsigned int,unsigned int>);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = 0;
    }
  }
  result = v6;
  if ( v21 == (char *)v3 )
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

// Line 70: range 000000000D89D25E-000000000D89D69B
bool __cdecl BT::Blackboard::get<std::shared_ptr<BT::ActionPlanMgr>>(
        const BT::Blackboard *const this,
        const std::string *key,
        std::shared_ptr<BT::ActionPlanMgr> *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r13
  const std::type_info *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  const std::type_info *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  bool result; // al
  char *val; // [rsp+20h] [rbp-B0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> __y; // [rsp+28h] [rbp-A8h] BYREF
  const std::any *any_val; // [rsp+30h] [rbp-A0h]
  std::any __any; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-80h] BYREF
  char v21[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 it:72";
  *(_QWORD *)(v3 + 16) = BT::Blackboard::get<std::shared_ptr<BT::ActionPlanMgr>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,std::any>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,std::any>::find(
                                                                             &this->storage_map_,
                                                                             key);
  __y._M_cur = std::unordered_map<std::string,std::any>::end(&this->storage_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::any>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> *)(v3 + 32),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    any_val = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::any>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::any>,false,true> *const)(v3 + 32))->second;
    v7 = std::any::type(any_val);
    if ( std::type_info::operator==((const std::type_info *const)&`typeinfo for'std::shared_ptr<BT::ActionPlanMgr>, v7) )
    {
      std::any_cast<std::shared_ptr<BT::ActionPlanMgr>>(&__any);
      std::shared_ptr<BT::ActionPlanMgr>::operator=(value, (std::shared_ptr<BT::ActionPlanMgr> *)&__any);
      std::shared_ptr<BT::ActionPlanMgr>::~shared_ptr((std::shared_ptr<BT::ActionPlanMgr> *const)&__any);
      v6 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/blackboard.h",
        off_1BA27E00,
        94);
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v20, (const char (*)[17])"blackboard key:[");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, key);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])"] storage type:");
      v11 = std::any::type(any_val);
      val = (char *)std::type_info::name(v11);
      v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&val);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" need type:");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true>::__node_type *)std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<BT::ActionPlanMgr>);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = 0;
    }
  }
  result = v6;
  if ( v21 == (char *)v3 )
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

// Line 70: range 000000000D89CA6E-000000000D89CEAB
bool __cdecl BT::Blackboard::get<std::shared_ptr<GCGAIController>>(
        const BT::Blackboard *const this,
        const std::string *key,
        std::shared_ptr<GCGAIController> *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r13
  const std::type_info *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  const std::type_info *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  bool result; // al
  char *val; // [rsp+20h] [rbp-B0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> __y; // [rsp+28h] [rbp-A8h] BYREF
  const std::any *any_val; // [rsp+30h] [rbp-A0h]
  std::any __any; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-80h] BYREF
  char v21[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 it:72";
  *(_QWORD *)(v3 + 16) = BT::Blackboard::get<std::shared_ptr<GCGAIController>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,std::any>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,std::any>::find(
                                                                             &this->storage_map_,
                                                                             key);
  __y._M_cur = std::unordered_map<std::string,std::any>::end(&this->storage_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::any>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> *)(v3 + 32),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    any_val = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::any>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::any>,false,true> *const)(v3 + 32))->second;
    v7 = std::any::type(any_val);
    if ( std::type_info::operator==((const std::type_info *const)&`typeinfo for'std::shared_ptr<GCGAIController>, v7) )
    {
      std::any_cast<std::shared_ptr<GCGAIController>>(&__any);
      std::shared_ptr<GCGAIController>::operator=(value, (std::shared_ptr<GCGAIController> *)&__any);
      std::shared_ptr<GCGAIController>::~shared_ptr((std::shared_ptr<GCGAIController> *const)&__any);
      v6 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/blackboard.h",
        off_1BA27E00,
        94);
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v20, (const char (*)[17])"blackboard key:[");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, key);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])"] storage type:");
      v11 = std::any::type(any_val);
      val = (char *)std::type_info::name(v11);
      v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&val);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" need type:");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true>::__node_type *)std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<GCGAIController>);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = 0;
    }
  }
  result = v6;
  if ( v21 == (char *)v3 )
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

// Line 70: range 000000000D8959B4-000000000D895DF1
bool __cdecl BT::Blackboard::get<std::vector<BT::CandidateOnstageCharacterInfo>>(
        const BT::Blackboard *const this,
        const std::string *key,
        std::vector<BT::CandidateOnstageCharacterInfo> *value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r13
  const std::type_info *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  const std::type_info *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  bool result; // al
  char *val; // [rsp+20h] [rbp-C0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> __y; // [rsp+28h] [rbp-B8h] BYREF
  const std::any *any_val; // [rsp+30h] [rbp-B0h]
  std::vector<BT::CandidateOnstageCharacterInfo> __x; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-80h] BYREF
  char v21[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 5 it:72";
  *(_QWORD *)(v3 + 16) = BT::Blackboard::get<std::vector<BT::CandidateOnstageCharacterInfo>>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,std::any>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,std::any>::find(
                                                                             &this->storage_map_,
                                                                             key);
  __y._M_cur = std::unordered_map<std::string,std::any>::end(&this->storage_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::any>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true> *)(v3 + 32),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    any_val = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::any>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::any>,false,true> *const)(v3 + 32))->second;
    v7 = std::any::type(any_val);
    if ( std::type_info::operator==(
           (const std::type_info *const)&`typeinfo for'std::vector<BT::CandidateOnstageCharacterInfo>,
           v7) )
    {
      std::any_cast<std::vector<BT::CandidateOnstageCharacterInfo>>(&__x, any_val);
      std::vector<BT::CandidateOnstageCharacterInfo>::operator=(value, &__x);
      std::vector<BT::CandidateOnstageCharacterInfo>::~vector(&__x);
      v6 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/card_ai/blackboard.h",
        off_1BA27E00,
        94);
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v20, (const char (*)[17])"blackboard key:[");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, key);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])"] storage type:");
      v11 = std::any::type(any_val);
      val = (char *)std::type_info::name(v11);
      v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&val);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" need type:");
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::any>,true>::__node_type *)std::type_info::name((const std::type_info *const)&`typeinfo for'std::vector<BT::CandidateOnstageCharacterInfo>);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = 0;
    }
  }
  result = v6;
  if ( v21 == (char *)v3 )
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

// Line 100: range 000000000DF7280A-000000000DF72849
void __cdecl BT::Blackboard::set<BT::BlackboardInnerPhaseType>(
        BT::Blackboard *const this,
        const std::string *key,
        const BT::BlackboardInnerPhaseType *value)
{
  std::any *v3; // rdx

  v3 = std::unordered_map<std::string,std::any>::operator[](&this->storage_map_, key);
  std::any::operator=<BT::BlackboardInnerPhaseType const&>(v3, value);
};

// Line 100: range 000000000DDE0BD4-000000000DDE0C13
void __cdecl BT::Blackboard::set<int>(BT::Blackboard *const this, const std::string *key, const int *value)
{
  std::any *v3; // rdx

  v3 = std::unordered_map<std::string,std::any>::operator[](&this->storage_map_, key);
  std::any::operator=<int const&>(v3, value);
};

// Line 100: range 000000000D8951A8-000000000D8951E7
void __cdecl BT::Blackboard::set<std::map<proto::GCGDiceSideType,unsigned int>>(
        BT::Blackboard *const this,
        const std::string *key,
        const std::map<proto::GCGDiceSideType,unsigned int> *value)
{
  std::any *v3; // rdx

  v3 = std::unordered_map<std::string,std::any>::operator[](&this->storage_map_, key);
  std::any::operator=<std::map<proto::GCGDiceSideType,unsigned int> const&>(v3, value);
};

// Line 100: range 000000000D89D7E4-000000000D89D823
void __cdecl BT::Blackboard::set<std::shared_ptr<BT::ActionPlanMgr>>(
        BT::Blackboard *const this,
        const std::string *key,
        const std::shared_ptr<BT::ActionPlanMgr> *value)
{
  std::any *v3; // rdx

  v3 = std::unordered_map<std::string,std::any>::operator[](&this->storage_map_, key);
  std::any::operator=<std::shared_ptr<BT::ActionPlanMgr> const&>(v3, value);
};

// Line 100: range 000000000DF72874-000000000DF728B3
void __cdecl BT::Blackboard::set<std::shared_ptr<GCGAIController>>(
        BT::Blackboard *const this,
        const std::string *key,
        const std::shared_ptr<GCGAIController> *value)
{
  std::any *v3; // rdx

  v3 = std::unordered_map<std::string,std::any>::operator[](&this->storage_map_, key);
  std::any::operator=<std::shared_ptr<GCGAIController> const&>(v3, value);
};

// Line 100: range 000000000D896108-000000000D896147
void __cdecl BT::Blackboard::set<std::vector<BT::CandidateOnstageCharacterInfo>>(
        BT::Blackboard *const this,
        const std::string *key,
        const std::vector<BT::CandidateOnstageCharacterInfo> *value)
{
  std::any *v3; // rdx

  v3 = std::unordered_map<std::string,std::any>::operator[](&this->storage_map_, key);
  std::any::operator=<std::vector<BT::CandidateOnstageCharacterInfo> const&>(v3, value);
};

// Line 105: range 000000000DF37372-000000000DF3739B
void __cdecl BT::Blackboard::clearAny(BT::Blackboard *const this, const std::string *key)
{
  std::unordered_map<std::string,std::any>::erase(&this->storage_map_, key);
};

// Line 110: range 000000000D829ECC-000000000D829EEA
void __cdecl BT::Blackboard::clear(BT::Blackboard *const this)
{
  std::unordered_map<std::string,std::any>::clear(&this->storage_map_);
};

// Line 209: range 000000000D8957CC-000000000D89580B
void __cdecl BT::Blackboard::set<std::map<unsigned int,unsigned int>>(
        BT::Blackboard *const this,
        const std::string *key,
        const std::map<unsigned int,unsigned int> *value)
{
  std::any *v3; // rdx

  v3 = std::unordered_map<std::string,std::any>::operator[](&this->storage_map_, key);
  std::any::operator=<std::map<unsigned int,unsigned int> const&>(v3, value);
};
