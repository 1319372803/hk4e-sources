// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/fetter/fetter_comp.cpp

// Line 32: range 00000000150AC1E2-00000000150AC25D
int32_t __cdecl FetterComp::onLogin(FetterComp *const this)
{
  std::vector<data::FetterCondType> fetter_cond_type_vec; // [rsp+10h] [rbp-30h] BYREF

  memset(&fetter_cond_type_vec, 0, sizeof(fetter_cond_type_vec));
  std::vector<data::FetterCondType>::vector(&fetter_cond_type_vec);
  FetterComp::checkRefreshFetterComp(this, 1, &fetter_cond_type_vec);
  std::vector<data::FetterCondType>::~vector(&fetter_cond_type_vec);
  return 0;
};

// Line 38: range 00000000150AC25E-00000000150AC26C
int32_t __cdecl FetterComp::onDisconnect(FetterComp *const this)
{
  return 0;
};

// Line 43: range 00000000150AC26E-00000000150AC3E3
int32_t __cdecl FetterComp::fromFormalAvatarBin(
        FetterComp *const this,
        const proto::FormalAvatarBin *formal_avatar_bin)
{
  __int64 v2; // rdx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  const unsigned int *v8; // rbx
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  const unsigned int *v10; // rax
  std::set<unsigned int> *v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rdx
  char v14; // al
  const proto::AvatarFetterBin *data; // [rsp+18h] [rbp-48h]
  std::set<unsigned int> v17; // [rsp+20h] [rbp-40h] BYREF

  data = proto::FormalAvatarBin::fetter(formal_avatar_bin);
  v2 = proto::AvatarFetterBin::level(data);
  v3 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(formal_avatar_bin) = v3 != 0;
    __asan_report_store4(&this->level_, formal_avatar_bin, v2);
  }
  this->level_ = v2;
  v4 = proto::AvatarFetterBin::exp(data);
  v5 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
  LOBYTE(formal_avatar_bin) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->exp_, formal_avatar_bin, v6);
  this->exp_ = v4;
  v7 = proto::AvatarFetterBin::rewarded_fetter_level_list(data);
  v8 = google::protobuf::RepeatedField<unsigned int>::end(v7);
  v9 = proto::AvatarFetterBin::rewarded_fetter_level_list(data);
  v10 = google::protobuf::RepeatedField<unsigned int>::begin(v9);
  std::set<unsigned int>::set<unsigned int const*>(&v17, v10, v8);
  v11 = &v17;
  std::set<unsigned int>::operator=(&this->rewarded_fetter_level_set_, &v17);
  std::set<unsigned int>::~set(&v17);
  LOBYTE(v12) = proto::AvatarFetterBin::is_login_on_birthday(data);
  v13 = v12;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v11) = v14 != 0;
    __asan_report_store1(&this->is_login_on_birthday_, v11, v13);
  }
  this->is_login_on_birthday_ = v13;
  return 0;
};

// Line 53: range 00000000150AC3E4-00000000150AC5AD
int32_t __cdecl FetterComp::toFormalAvatarBin(const FetterComp *const this, proto::FormalAvatarBin *formal_avatar_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::AvatarFetterBin *data; // [rsp+30h] [rbp-10h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  data = proto::FormalAvatarBin::mutable_fetter(formal_avatar_bin);
  proto::AvatarFetterBin::Clear(data);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  proto::AvatarFetterBin::set_level(data, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->exp_);
  }
  proto::AvatarFetterBin::set_exp(data, this->exp_);
  __for_range = &this->rewarded_fetter_level_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->rewarded_fetter_level_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->rewarded_fetter_level_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::AvatarFetterBin::add_rewarded_fetter_level_list(data, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_login_on_birthday_);
  proto::AvatarFetterBin::set_is_login_on_birthday(data, this->is_login_on_birthday_);
  return 0;
};

// Line 67: range 00000000150AC5AE-00000000150AC5E7
int32_t __cdecl FetterComp::toClient(const FetterComp *const this, proto::AvatarInfo *avatar_info)
{
  proto::AvatarFetterInfo *v2; // rdx

  v2 = proto::AvatarInfo::mutable_fetter_info(avatar_info);
  FetterComp::toClientFetterInfo(this, v2);
  return 0;
};

// Line 74: range 00000000150AC5E8-00000000150AC9BC
void __cdecl FetterComp::toClientFetterInfo(const FetterComp *const this, proto::AvatarFetterInfo *fetter_info)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  proto::FetterState *p_state; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  const std::unordered_map<unsigned int,std::shared_ptr<FetterData>> *__for_range_0; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,std::shared_ptr<FetterData> > *v11; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<FetterData> > >::type *_; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<FetterData> > >::type *fetter_data_ptr; // [rsp+48h] [rbp-48h]
  FetterData *fetter_data; // [rsp+50h] [rbp-40h]
  proto::FetterData *proto_fetter_data; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-30h] BYREF

  proto::AvatarFetterInfo::Clear(fetter_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->exp_);
  }
  proto::AvatarFetterInfo::set_exp_number(fetter_info, this->exp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  proto::AvatarFetterInfo::set_exp_level(fetter_info, this->level_);
  __for_range = &this->rewarded_fetter_level_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->rewarded_fetter_level_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->rewarded_fetter_level_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::AvatarFetterInfo::add_rewarded_fetter_level_list(fetter_info, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->fetter_data_map_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::begin(&this->fetter_data_map_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<FetterData>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false> *)&__for_end) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false,false> *const)&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<FetterData>>(v11);
    fetter_data_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<FetterData> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<FetterData>>(v11);
    if ( std::operator==<FetterData>(fetter_data_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/fetter/fetter_comp.cpp",
        "toClientFetterInfo",
        86);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v16,
        (const char (*)[24])"fetter_data_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v4 = std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)fetter_data_ptr);
      p_state = &v4->state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_state);
      }
      if ( v4->state != FETTER_STATE_CONCEAL )
      {
        fetter_data = std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)fetter_data_ptr);
        proto_fetter_data = proto::AvatarFetterInfo::add_fetter_list(fetter_info);
        if ( *(_BYTE *)(((unsigned __int64)fetter_data >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)fetter_data >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(fetter_data);
        }
        proto::FetterData::set_fetter_id(proto_fetter_data, fetter_data->fetter_id);
        if ( *(_BYTE *)(((unsigned __int64)&fetter_data->state >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)fetter_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fetter_data->state >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&fetter_data->state);
        }
        proto::FetterData::set_fetter_state(proto_fetter_data, fetter_data->state);
        v6 = proto::FetterData::mutable_cond_index_list(proto_fetter_data);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&fetter_data->cond_index_vec, v6);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false,false> *const)&__for_begin);
  }
};

// Line 102: range 00000000150AC9BE-00000000150ACA8D
int32_t __cdecl FetterComp::init(FetterComp *const this, bool is_on_create)
{
  std::vector<data::FetterCondType> fetter_cond_type_vec; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  if ( !this->level_ )
    this->level_ = 1;
  if ( is_on_create )
  {
    memset(&fetter_cond_type_vec, 0, sizeof(fetter_cond_type_vec));
    std::vector<data::FetterCondType>::vector(&fetter_cond_type_vec);
    FetterComp::checkRefreshFetterComp(this, 0, &fetter_cond_type_vec);
    std::vector<data::FetterCondType>::~vector(&fetter_cond_type_vec);
  }
  return 0;
};

// Line 115: range 00000000150ACA8E-00000000150ACB57
// local variable allocation has failed, the output may be wrong!
void __cdecl FetterComp::clearAll(FetterComp *const this, bool notify)
{
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_, notify, &this->level_);
  }
  this->level_ = 1;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->exp_, (((_BYTE)this + 20) & 7u) + 3, v2);
  this->exp_ = 0;
  std::set<unsigned int>::clear(&this->rewarded_fetter_level_set_);
  std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::clear(&this->fetter_data_map_);
  if ( notify )
    FetterComp::notifyClient(this);
};

// Line 128: range 00000000150ACB58-00000000150ACD49
void __cdecl FetterComp::notifyClient(FetterComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::AvatarFetterDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  proto::AvatarFetterInfo *v5; // rdx
  FormalAvatar *formal_avatar; // r14
  google::protobuf::Map<long unsigned int,proto::AvatarFetterInfo>::key_type key; // [rsp+10h] [rbp-90h] BYREF
  google::protobuf::Map<long unsigned int,proto::AvatarFetterInfo> *info_map; // [rsp+18h] [rbp-88h]
  std::shared_ptr<proto::AvatarFetterDataNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:129";
  *(_QWORD *)(v1 + 16) = FetterComp::notifyClient;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::AvatarFetterDataNotify>();
  v4 = std::__shared_ptr_access<proto::AvatarFetterDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarFetterDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  info_map = proto::AvatarFetterDataNotify::mutable_fetter_info_map(v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  key = Avatar::getGuid(this->formal_avatar_);
  v5 = google::protobuf::Map<unsigned long,proto::AvatarFetterInfo>::operator[](info_map, &key);
  FetterComp::toClientFetterInfo(this, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  formal_avatar = this->formal_avatar_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::AvatarFetterDataNotify>(&__r);
  Avatar::sendMessage(formal_avatar, (common::minet::ConstMessagePtr *)&__r);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::AvatarFetterDataNotify>::~shared_ptr((std::shared_ptr<proto::AvatarFetterDataNotify> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 136: range 00000000150ACD4A-00000000150AD145
std::string *__cdecl FetterComp::getDesc[abi:cxx11](std::string *retstr, const FetterComp *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  unsigned int AvatarId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rcx
  const char *v11; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // r14
  unsigned int *v13; // rax
  unsigned int *v14; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v17[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 6 it:140 64 16 6 ss:137";
  *(_QWORD *)(v2 + 16) = FetterComp::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64),
         "[avatar_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  AvatarId = Avatar::getAvatarId(this->formal_avatar_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, AvatarId);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, ",level:");
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, this->level_);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, ",exp:");
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->exp_);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, this->exp_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64),
    ",rewarded_level:");
  *(std::set<unsigned int>::iterator *)(v2 + 32) = std::set<unsigned int>::begin(&this->rewarded_fetter_level_set_);
  while ( 1 )
  {
    __y._M_node = std::set<unsigned int>::end(&this->rewarded_fetter_level_set_)._M_node;
    if ( !std::operator!=((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 32), &__y) )
      break;
    __y._M_node = std::set<unsigned int>::begin(&this->rewarded_fetter_level_set_)._M_node;
    if ( std::operator!=((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 32), &__y) )
      v11 = "|";
    else
      v11 = byte_25685560;
    v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64),
            v11);
    v13 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 32));
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, *v14);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 32));
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64),
    "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 149: range 00000000150AD146-00000000150AD1B5
int32_t __cdecl FetterComp::toShowAvatarInfo(const FetterComp *const this, proto::ShowAvatarInfo *show_avatar_info)
{
  proto::AvatarFetterInfo *v2; // rax
  google::protobuf::uint32 level; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  level = this->level_;
  v2 = proto::ShowAvatarInfo::mutable_fetter_info(show_avatar_info);
  proto::AvatarFetterInfo::set_exp_level(v2, level);
  return 0;
};

// Line 158: range 00000000150AD1B6-00000000150ADBE4
__int64 __fastcall FetterComp::getFetterLevelReward(FetterComp *const this, uint32_t fetter_level, uint32_t *reward_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *p_y; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  unsigned int v10; // r14d
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>::pointer v11; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v14; // dl
  __int64 v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v27; // rax
  unsigned __int64 v28; // rax
  common::milog::MiLogStream *v29; // r14
  Player *v30; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rcx
  Player *v39; // rax
  PlayerItemComp *v40; // rdi
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> __y; // [rsp+20h] [rbp-160h] BYREF
  const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *config_reward_map; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v46; // [rsp+30h] [rbp-150h] BYREF
  char v47[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 20 cur_fetter_level:173 64 4 7 ret:186 80 4 16 fetter_level:157 96 8 8 iter:161 128 8 16 "
                        "reward_index:159 160 16 14 player_ptr:179 192 24 10 reason:185";
  *(_QWORD *)(v3 + 16) = FetterComp::getFetterLevelReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 80) = fetter_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  *(_DWORD *)(v3 + 64) = Avatar::getAvatarId(this->formal_avatar_);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 128) = std::make_pair<unsigned int,unsigned int &>(
                                                          (unsigned int *)(v3 + 64),
                                                          (unsigned int *)(v3 + 80));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 160));
  config_reward_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->design_config.txt_config_mgr.fetter_config_mgr.avatar_fetter_level_reward_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v3 + 96) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::find(config_reward_map, (const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v3 + 128));
  __y._M_cur = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(config_reward_map)._M_cur;
  p_y = &__y;
  if ( std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/fetter/fetter_comp.cpp",
      "getFetterLevelReward",
      164);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v46,
           (const char (*)[32])"reward config not found, index:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
           v7,
           (const std::pair<unsigned int,unsigned int> *)(v3 + 128));
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v9, this->formal_avatar_);
    common::milog::MiLogStream::~MiLogStream(&v46);
    v10 = 5;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v3 + 96));
    p_second = &v11->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v11->second;
    v14 = *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000);
    LOBYTE(p_y) = v14 != 0;
    v15 = (v14 != 0) & (unsigned __int8)((char)(((unsigned __int8)reward_id & 7) + 3) >= v14);
    if ( (_BYTE)v15 )
      __asan_report_store4(reward_id, p_y, v15);
    *reward_id = second;
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->rewarded_fetter_level_set_,
           (const unsigned int *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/avatar/fetter/fetter_comp.cpp",
        "getFetterLevelReward",
        170);
      v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v46,
              (const char (*)[27])"reward already got, index:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v16,
              (const std::pair<unsigned int,unsigned int> *)(v3 + 128));
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->formal_avatar_);
      common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v18, this->formal_avatar_);
      common::milog::MiLogStream::~MiLogStream(&v46);
      v10 = 163;
    }
    else
    {
      *(_DWORD *)(v3 + 48) = FetterComp::getLevel(this);
      if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 80) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->formal_avatar_);
        formal_avatar = this->formal_avatar_;
        v27 = formal_avatar;
        if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
          v27 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
        v28 = *(_QWORD *)v27->baseclass_0 + 152LL;
        if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
          v28 = __asan_report_load8(v28);
        (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v28)(v3 + 160, formal_avatar);
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fetter/fetter_comp.cpp",
            "getFetterLevelReward",
            182);
          v29 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v46,
                  (const char (*)[30])"player_ptr null avatar_guid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->formal_avatar_);
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true>::__node_type *)Avatar::getGuid(this->formal_avatar_);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v29, (const unsigned __int64 *)&__y);
          common::milog::MiLogStream::~MiLogStream(&v46);
          v10 = -1;
        }
        else
        {
          ActionReason::ActionReason(
            (ActionReason *const)(v3 + 192),
            ACTION_REASON_FETTER_LEVEL_REWARD,
            ITEM_LIMIT_FETTER_LEVEL_REWARD);
          v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          ItemComp = Player::getItemComp(v30);
          if ( *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(reward_id);
          }
          *(_DWORD *)(v3 + 64) = PlayerItemComp::checkGrantReward(
                                   ItemComp,
                                   *reward_id,
                                   (const ActionReason *)(v3 + 192));
          if ( *(_DWORD *)(v3 + 64) )
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/fetter/fetter_comp.cpp",
              "getFetterLevelReward",
              189);
            v32 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v46,
                    (const char (*)[28])"checkGrantReward fail, ret:");
            v33 = common::milog::MiLogStream::operator<<<int,(int *)0>(v32, (const int *)(v3 + 64));
            v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])" index:");
            v35 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                    v34,
                    (const std::pair<unsigned int,unsigned int> *)(v3 + 128));
            v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v35,
                    (const char (*)[12])" reward_id:");
            v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, reward_id);
            v38 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v37, (const char (*)[9])" avatar:");
            if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->formal_avatar_);
            common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v38, this->formal_avatar_);
            common::milog::MiLogStream::~MiLogStream(&v46);
            v10 = *(_DWORD *)(v3 + 64);
          }
          else
          {
            v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            v40 = Player::getItemComp(v39);
            if ( *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              v40 = (PlayerItemComp *)reward_id;
              __asan_report_load4(reward_id);
            }
            PlayerItemComp::grantReward(v40, *reward_id, (const ActionReason *)(v3 + 192), 0LL);
            std::set<unsigned int>::insert(
              &this->rewarded_fetter_level_set_,
              (const std::set<unsigned int>::value_type *)(v3 + 80));
            FetterComp::notifyClient(this);
            v10 = 0;
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v46,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/fetter/fetter_comp.cpp",
          "getFetterLevelReward",
          176);
        v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v46,
                (const char (*)[23])"level not enough, exp:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->exp_);
        v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v20,
                (const char (*)[19])" cur_fetter_level:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v22, (const char (*)[15])" fetter_level:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v3 + 80));
        v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" avatar:");
        if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->formal_avatar_);
        common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v25, this->formal_avatar_);
        common::milog::MiLogStream::~MiLogStream(&v46);
        v10 = 164;
      }
    }
  }
  result = v10;
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 200: range 00000000150ADBE6-00000000150AE7A2
bool __cdecl FetterComp::addExpNumber(FetterComp *const this, uint32_t add_num, const ActionReason *reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // r14
  bool v10; // r14
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __int64 v19; // rdx
  Player *v20; // rax
  PlayerEventComp *EventComp; // r15
  unsigned int *v22; // r8
  unsigned int *v23; // r9
  AvatarExcelConfigMgr *v24; // rcx
  int exp; // edi
  uint32_t v26; // r9d
  bool result; // al
  std::string v28; // [rsp+0h] [rbp-140h]
  uint32_t level; // [rsp+14h] [rbp-12Ch]
  bool v30; // [rsp+14h] [rbp-12Ch]
  uint32_t v31; // [rsp+14h] [rbp-12Ch]
  std::allocator<data::FetterCondType> __a; // [rsp+3Ah] [rbp-106h] BYREF
  bool is_has_change; // [rsp+3Bh] [rbp-105h]
  uint32_t new_exp; // [rsp+3Ch] [rbp-104h]
  uint32_t old_level; // [rsp+40h] [rbp-100h]
  uint32_t old_exp; // [rsp+44h] [rbp-FCh]
  unsigned __int64 val; // [rsp+48h] [rbp-F8h] BYREF
  std::shared_ptr<Config> v40; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v41; // [rsp+60h] [rbp-E0h] BYREF
  std::vector<data::FetterCondType> fetter_cond_type_vec; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v43; // [rsp+90h] [rbp-B0h] BYREF
  char v44[144]; // [rsp+B0h] [rbp-90h] BYREF

  *(&v28._anon_0._M_allocated_capacity + 1) = (std::string::size_type)reason;
  v3 = (unsigned __int64)v44;
  v28._M_string_length = (std::string::size_type)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 22 log_context_holder:212 48 4 19 total_level_exp:254 64 16 14 player_ptr:201";
  *(_QWORD *)(v3 + 16) = FetterComp::addExpNumber;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  formal_avatar = this->formal_avatar_;
  v7 = formal_avatar;
  if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
    v7 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
  v8 = *(_QWORD *)v7->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8);
  (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v8)(v3 + 64, formal_avatar);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/fetter/fetter_comp.cpp",
      "addExpNumber",
      204);
    v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v43,
           (const char (*)[30])"player_ptr null avatar_guid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    val = Avatar::getGuid(this->formal_avatar_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v10 = 0;
  }
  else if ( add_num )
  {
    v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BasicComp = Player::getBasicComp(v13);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v43, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x64Au, v28);
    std::string::~string(&v43);
    is_has_change = 0;
    old_level = FetterComp::getLevel(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->exp_);
    }
    old_exp = this->exp_;
    new_exp = SAFE_ADD<unsigned int,unsigned int>(this->exp_, add_num);
    while ( 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      level = this->level_;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v40);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
      LOBYTE(level) = level < AvatarExcelConfigMgr::getAvatarMaxFetterLevel(&v15->design_config.txt_config_mgr.avatar_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v40);
      if ( !(_BYTE)level )
        break;
      *(_DWORD *)(v3 + 48) = 0;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v41);
      p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      v30 = AvatarExcelConfigMgr::findFetterExpByFetterLevel(p_avatar_config_mgr, this->level_, (uint32_t *)(v3 + 48)) != 0;
      std::shared_ptr<Config>::~shared_ptr(&v41);
      if ( v30 )
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/fetter/fetter_comp.cpp",
          "addExpNumber",
          223);
        v17 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v43,
                (const char (*)[41])"findFetterExpByFetterLevel fail, level_:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->level_);
        common::milog::MiLogStream::~MiLogStream(&v43);
        break;
      }
      if ( new_exp < *(_DWORD *)(v3 + 48) )
        break;
      new_exp -= *(_DWORD *)(v3 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      ++this->level_;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    v31 = this->level_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
    LOBYTE(v31) = v31 >= AvatarExcelConfigMgr::getAvatarMaxFetterLevel(&v18->design_config.txt_config_mgr.avatar_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v41);
    if ( (_BYTE)v31 )
      new_exp = 0;
    v19 = (*(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v19 )
      __asan_report_store4(&this->exp_, (((_BYTE)this + 20) & 7u) + 3, v19);
    this->exp_ = new_exp;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    if ( old_level == this->level_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->exp_);
      }
      if ( old_exp != this->exp_ )
        is_has_change = 1;
    }
    else
    {
      *(_DWORD *)(v3 + 48) = 1;
      std::allocator<data::FetterCondType>::allocator(&__a);
      std::vector<data::FetterCondType>::vector(
        &fetter_cond_type_vec,
        (std::initializer_list<data::FetterCondType>)__PAIR128__(1LL, v3 + 48),
        &__a);
      FetterComp::checkRefreshFetterComp(this, 0, &fetter_cond_type_vec);
      std::vector<data::FetterCondType>::~vector(&fetter_cond_type_vec);
      std::allocator<data::FetterCondType>::~allocator(&__a);
      v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      EventComp = Player::getEventComp(v20);
      if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->formal_avatar_);
      *(_DWORD *)(v3 + 48) = Avatar::getAvatarId(this->formal_avatar_);
      if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->formal_avatar_);
      val = Avatar::getGuid(this->formal_avatar_);
      common::tools::perf::make_shared<FetterLevelUpdateEvent,unsigned long,unsigned int &,unsigned int>(
        (unsigned __int64 *)&v40,
        (unsigned int *)&val,
        &this->level_,
        (unsigned __int64 *)(v3 + 48),
        v22,
        v23);
      std::shared_ptr<BaseEvent>::shared_ptr<FetterLevelUpdateEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v41,
        (std::shared_ptr<FetterLevelUpdateEvent> *)&v40);
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v41);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v41);
      std::shared_ptr<FetterLevelUpdateEvent>::~shared_ptr((std::shared_ptr<FetterLevelUpdateEvent> *const)&v40);
      is_has_change = 1;
    }
    *(_DWORD *)(v3 + 48) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    v24 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    AvatarExcelConfigMgr::findTotalFetterExpByFetterLevel(v24, this->level_, (uint32_t *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v41);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->exp_);
    }
    exp = this->exp_;
    v26 = this->exp_ + *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      exp = (_DWORD)this + 16;
      __asan_report_load4(&this->level_);
    }
    FetterComp::logExpNumberChange(
      this,
      add_num,
      old_level,
      this->level_,
      *((const ActionReason **)&v28._anon_0._M_allocated_capacity + 1),
      v26,
      exp);
    v10 = is_has_change;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/fetter/fetter_comp.cpp",
      "addExpNumber",
      209);
    v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v43, (const char (*)[30])off_256F8420);
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    *(_DWORD *)(v3 + 48) = Player::getUid(v12);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v43);
    v10 = 0;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  result = v10;
  if ( v28._M_string_length == v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 262: range 00000000150AE7A4-00000000150AE953
bool __cdecl FetterComp::checkFetterConditionVec(
        const FetterComp *const this,
        const std::vector<data::FetterConditionConfig> *fetter_condition_config_vec,
        std::vector<unsigned int> *cond_index_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::vector<unsigned int>::size_type v6; // r13
  bool result; // al
  std::vector<data::FetterConditionConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::vector<data::FetterConditionConfig>::const_iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  const std::vector<data::FetterConditionConfig> *__for_range; // [rsp+30h] [rbp-70h]
  const data::FetterConditionConfig *fetter_condition_config; // [rsp+38h] [rbp-68h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 index:264";
  *(_QWORD *)(v3 + 16) = FetterComp::checkFetterConditionVec;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  std::vector<unsigned int>::clear(cond_index_vec);
  *(_DWORD *)(v3 + 32) = 0;
  __for_range = fetter_condition_config_vec;
  __for_begin._M_current = std::vector<data::FetterConditionConfig>::begin(fetter_condition_config_vec)._M_current;
  __for_end._M_current = std::vector<data::FetterConditionConfig>::end(fetter_condition_config_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::FetterConditionConfig const*,std::vector<data::FetterConditionConfig>>(
            &__for_begin,
            &__for_end) )
  {
    fetter_condition_config = __gnu_cxx::__normal_iterator<data::FetterConditionConfig const*,std::vector<data::FetterConditionConfig>>::operator*(&__for_begin);
    ++*(_DWORD *)(v3 + 32);
    if ( FetterComp::checkFetterCondition(this, fetter_condition_config) )
      std::vector<unsigned int>::push_back(cond_index_vec, (const std::vector<unsigned int>::value_type *)(v3 + 32));
    __gnu_cxx::__normal_iterator<data::FetterConditionConfig const*,std::vector<data::FetterConditionConfig>>::operator++(&__for_begin);
  }
  v6 = std::vector<unsigned int>::size(cond_index_vec);
  result = v6 == std::vector<data::FetterConditionConfig>::size(fetter_condition_config_vec);
  if ( v13 == (char *)v3 )
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

// Line 277: range 00000000150AE954-00000000150AFEE3
bool __cdecl FetterComp::checkFetterCondition(
        const FetterComp *const this,
        const data::FetterConditionConfig *cond_config)
{
  bool isDungeonPassed; // r12
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r13
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v12; // rax
  uint32_t *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v16; // rax
  uint32_t *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v20; // rax
  uint32_t *v21; // rdx
  Player *v22; // rax
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::vector<unsigned int>::const_reference v26; // rax
  _DWORD *v27; // rdx
  std::vector<unsigned int>::const_reference v28; // rax
  _DWORD *v29; // rdx
  Player *v30; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v32; // r12
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  Scene *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v39; // rax
  uint32_t *v40; // rdx
  Player *v41; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v45; // rax
  uint32_t *v46; // rdx
  Player *v47; // rax
  PlayerQuestComp *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v51; // rax
  uint32_t *v52; // rdx
  Player *v53; // rax
  PlayerSocialComp *SocialComp; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  std::vector<unsigned int>::const_reference v57; // rax
  _DWORD *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  Player *v60; // rax
  uint32_t v61; // ecx
  int v62; // r15d
  Scene *v63; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v64; // rax
  _DWORD *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  bool result; // al
  uint32_t parent_quest_id; // [rsp+28h] [rbp-168h]
  uint32_t avatar_promote_level; // [rsp+2Ch] [rbp-164h]
  uint32_t quest_id; // [rsp+30h] [rbp-160h]
  uint32_t dungeon_id; // [rsp+34h] [rbp-15Ch]
  uint32_t avatar_level; // [rsp+38h] [rbp-158h]
  uint32_t fetter_level; // [rsp+3Ch] [rbp-154h]
  std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator __for_begin; // [rsp+40h] [rbp-150h] BYREF
  std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator __for_end; // [rsp+48h] [rbp-148h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+50h] [rbp-140h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+58h] [rbp-138h] BYREF
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>> *city_level1_trans_points_map; // [rsp+60h] [rbp-130h]
  const std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+68h] [rbp-128h]
  const std::pair<unsigned int const,std::set<unsigned int> > *v82; // [rsp+70h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<unsigned int> > >::type *scene_id; // [rsp+78h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *level1_trans_point_vec; // [rsp+80h] [rbp-110h]
  std::unordered_set<unsigned int> *unlocked_point_set_0; // [rsp+88h] [rbp-108h]
  const std::set<unsigned int> *__for_range_0; // [rsp+90h] [rbp-100h]
  std::unordered_set<unsigned int> *unlocked_point_set; // [rsp+98h] [rbp-F8h]
  common::milog::MiLogStream v88; // [rsp+A0h] [rbp-F0h] BYREF
  char v89[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v89;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 11 city_id:378 48 4 12 point_id:394 64 8 8 iter:380 96 16 14 player_ptr:278 128 16 13 scene_ptr:388";
  *(_QWORD *)(v3 + 16) = FetterComp::checkFetterCondition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  formal_avatar = this->formal_avatar_;
  v7 = formal_avatar;
  if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
    v7 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
  v8 = *(_QWORD *)v7->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8);
  (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v8)(v3 + 96, formal_avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/fetter/fetter_comp.cpp",
      "checkFetterCondition",
      281);
    v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v88,
           (const char (*)[31])"player is null, formal_avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&cond_config->cond_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond_config->cond_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cond_config->cond_type);
    }
    switch ( cond_config->cond_type )
    {
      case FETTER_COND_FETTER_LEVEL:
        if ( std::vector<unsigned int>::empty(&cond_config->param_list) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fetter/fetter_comp.cpp",
            "checkFetterCondition",
            290);
          v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v88,
                  (const char (*)[39])"param list is empty, fetter_cond_type:");
          v11 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                  v10,
                  &cond_config->cond_type);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v11,
                 (const char (*)[16])" formal_avatar:");
          if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->formal_avatar_);
          break;
        }
        v12 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond_config->param_list,
                                                                                                    0LL);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        fetter_level = *v13;
        isDungeonPassed = fetter_level <= FetterComp::getLevel(this);
        goto LABEL_109;
      case FETTER_COND_AVATAR_LEVEL:
        if ( std::vector<unsigned int>::empty(&cond_config->param_list) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fetter/fetter_comp.cpp",
            "checkFetterCondition",
            300);
          v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v88,
                  (const char (*)[39])"param list is empty, fetter_cond_type:");
          v15 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                  v14,
                  &cond_config->cond_type);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v15,
                 (const char (*)[16])" formal_avatar:");
          if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->formal_avatar_);
          break;
        }
        v16 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond_config->param_list,
                                                                                                    0LL);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        avatar_level = *v17;
        if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->formal_avatar_);
        isDungeonPassed = avatar_level <= Creature::getLevel(this->formal_avatar_);
        goto LABEL_109;
      case FETTER_COND_FINISH_DUNGEON:
        if ( std::vector<unsigned int>::empty(&cond_config->param_list) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fetter/fetter_comp.cpp",
            "checkFetterCondition",
            310);
          v18 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v88,
                  (const char (*)[39])"param list is empty, fetter_cond_type:");
          v19 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                  v18,
                  &cond_config->cond_type);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v19,
                 (const char (*)[16])" formal_avatar:");
          if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->formal_avatar_);
          break;
        }
        v20 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond_config->param_list,
                                                                                                    0LL);
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        dungeon_id = *v21;
        v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        DungeonComp = Player::getDungeonComp(v22);
        isDungeonPassed = PlayerDungeonComp::isDungeonPassed(DungeonComp, dungeon_id);
        goto LABEL_109;
      case FETTER_COND_UNLOCK_TRANS_POINT:
      case FETTER_COND_UNLOCK_AREA:
        if ( std::vector<unsigned int>::size(&cond_config->param_list) <= 1 )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fetter/fetter_comp.cpp",
            "checkFetterCondition",
            321);
          v24 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v88,
                  (const char (*)[41])"param list not enough, fetter_cond_type:");
          v25 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                  v24,
                  &cond_config->cond_type);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v25,
                 (const char (*)[16])" formal_avatar:");
          if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->formal_avatar_);
          break;
        }
        v26 = std::vector<unsigned int>::operator[](&cond_config->param_list, 0LL);
        v27 = v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        *(_DWORD *)(v3 + 32) = *v27;
        v28 = std::vector<unsigned int>::operator[](&cond_config->param_list, 1uLL);
        v29 = v28;
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v28);
        }
        *(_DWORD *)(v3 + 48) = *v29;
        v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        SceneComp = (unsigned int)Player::getSceneComp(v30);
        PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 128), SceneComp);
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fetter/fetter_comp.cpp",
            "checkFetterCondition",
            329);
          v32 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v88,
                  (const char (*)[26])"findScene failed, player:");
          v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          v34 = operator<<(v32, v33);
          v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v34, (const char (*)[13])", scene_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v88);
          isDungeonPassed = 0;
        }
        else
        {
          v36 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          unlocked_point_set = Scene::getAllUnlockPoint(v36);
          isDungeonPassed = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                              unlocked_point_set,
                              (const unsigned int *)(v3 + 48));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
        goto LABEL_109;
      case FETTER_COND_FINISH_QUEST:
        if ( std::vector<unsigned int>::empty(&cond_config->param_list) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fetter/fetter_comp.cpp",
            "checkFetterCondition",
            339);
          v37 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v88,
                  (const char (*)[39])"param list is empty, fetter_cond_type:");
          v38 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                  v37,
                  &cond_config->cond_type);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v38,
                 (const char (*)[16])" formal_avatar:");
          if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->formal_avatar_);
          break;
        }
        v39 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond_config->param_list,
                                                                                                    0LL);
        v40 = v39;
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v39);
        }
        quest_id = *v40;
        v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        QuestComp = Player::getQuestComp(v41);
        isDungeonPassed = PlayerQuestComp::getQuestState(QuestComp, quest_id) == QUEST_STATE_FINISHED;
        goto LABEL_109;
      case FETTER_COND_AVATAR_PROMOTE_LEVEL:
        if ( std::vector<unsigned int>::empty(&cond_config->param_list) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fetter/fetter_comp.cpp",
            "checkFetterCondition",
            359);
          v49 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v88,
                  (const char (*)[39])"param list is empty, fetter_cond_type:");
          v50 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                  v49,
                  &cond_config->cond_type);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v50,
                 (const char (*)[16])" formal_avatar:");
          if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->formal_avatar_);
          break;
        }
        v51 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond_config->param_list,
                                                                                                    0LL);
        v52 = v51;
        if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v51);
        }
        avatar_promote_level = *v52;
        if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->formal_avatar_);
        isDungeonPassed = avatar_promote_level <= Avatar::getPromoteLevel(this->formal_avatar_);
        goto LABEL_109;
      case FETTER_COND_PLAYER_BIRTHDAY:
        v53 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        SocialComp = Player::getSocialComp(v53);
        isDungeonPassed = PlayerSocialComp::getIsLoginOnBirthday(SocialComp);
        goto LABEL_109;
      case FETTER_COND_AVATAR_BIRTHDAY:
        if ( *(char *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_login_on_birthday_);
        isDungeonPassed = this->is_login_on_birthday_;
        goto LABEL_109;
      case FETTER_COND_NOT_OPEN:
        isDungeonPassed = 0;
        goto LABEL_109;
      case FETTER_COND_FINISH_PARENT_QUEST:
        if ( std::vector<unsigned int>::empty(&cond_config->param_list) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/fetter/fetter_comp.cpp",
            "checkFetterCondition",
            349);
          v43 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v88,
                  (const char (*)[39])"param list is empty, fetter_cond_type:");
          v44 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                  v43,
                  &cond_config->cond_type);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v44,
                 (const char (*)[16])" formal_avatar:");
          if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->formal_avatar_);
          break;
        }
        v45 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &cond_config->param_list,
                                                                                                    0LL);
        v46 = v45;
        if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v45);
        }
        parent_quest_id = *v46;
        v47 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v48 = Player::getQuestComp(v47);
        isDungeonPassed = PlayerQuestComp::isParentQuestOnceFinished(v48, parent_quest_id);
        goto LABEL_109;
      case FETTER_COND_UNLOCK_ARENA_BY_CITY_ID:
        if ( !std::vector<unsigned int>::empty(&cond_config->param_list) )
        {
          v57 = std::vector<unsigned int>::operator[](&cond_config->param_list, 0LL);
          v58 = v57;
          if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v57);
          }
          *(_DWORD *)(v3 + 32) = *v58;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 128));
          city_level1_trans_points_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128))->design_config.txt_config_mgr.world_area_config_mgr.city_level1_trans_points_map;
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
          *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::find(city_level1_trans_points_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::key_type *)(v3 + 32));
          __for_end_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::set<unsigned int>>>::end(city_level1_trans_points_map)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>>>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false> *)(v3 + 64),
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false> *)&__for_end_0) )
          {
            common::milog::MiLogStream::create(
              &v88,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/fetter/fetter_comp.cpp",
              "checkFetterCondition",
              383);
            v59 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v88,
                    (const char (*)[34])"no level1 trans point in city_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v88);
            isDungeonPassed = 0;
            goto LABEL_109;
          }
          __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::set<unsigned int>> >,false,false> *const)(v3 + 64))->second;
          __for_begin._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range)._M_cur;
          __for_end._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range)._M_cur;
          while ( 1 )
          {
            if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
                    &__for_begin,
                    &__for_end) )
            {
              isDungeonPassed = 0;
              goto LABEL_109;
            }
            v82 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*(&__for_begin);
            scene_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v82);
            level1_trans_point_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v82);
            v60 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            v61 = (unsigned int)Player::getSceneComp(v60);
            if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(scene_id);
            }
            PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 128), v61);
            if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 128)) )
            {
              v62 = 0;
            }
            else
            {
              v63 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              unlocked_point_set_0 = Scene::getAllUnlockPoint(v63);
              __for_range_0 = level1_trans_point_vec;
              __for_begin_0._M_node = std::set<unsigned int>::begin(level1_trans_point_vec)._M_node;
              __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
              while ( 1 )
              {
                if ( !std::operator!=(&__for_begin_0, &__for_end_0) )
                {
                  v62 = 2;
                  goto LABEL_102;
                }
                v64 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
                v65 = v64;
                if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v64);
                }
                *(_DWORD *)(v3 + 48) = *v65;
                if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                       unlocked_point_set_0,
                       (const unsigned int *)(v3 + 48)) )
                {
                  break;
                }
                std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
              }
              isDungeonPassed = 1;
              v62 = 1;
            }
LABEL_102:
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
            if ( v62 && v62 != 2 )
              goto LABEL_109;
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++(&__for_begin);
          }
        }
        common::milog::MiLogStream::create(
          &v88,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/fetter/fetter_comp.cpp",
          "checkFetterCondition",
          375);
        v55 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v88,
                (const char (*)[39])"param list is empty, fetter_cond_type:");
        v56 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                v55,
                &cond_config->cond_type);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v56, (const char (*)[16])" formal_avatar:");
        if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->formal_avatar_);
        break;
      default:
        common::milog::MiLogStream::create(
          &v88,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/fetter/fetter_comp.cpp",
          "checkFetterCondition",
          405);
        v66 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v88,
                (const char (*)[26])"unknown fetter_cond_type:");
        v67 = common::milog::MiLogStream::operator<<<data::FetterCondType,(data::FetterCondType*)0>(
                v66,
                &cond_config->cond_type);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v67, (const char (*)[16])" formal_avatar:");
        if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->formal_avatar_);
        break;
    }
  }
  common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v9, this->formal_avatar_);
  common::milog::MiLogStream::~MiLogStream(&v88);
  isDungeonPassed = 0;
LABEL_109:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  result = isDungeonPassed;
  if ( v89 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 413: range 00000000150AFEE4-00000000150B0920
bool __cdecl FetterComp::checkRefreshFetterComp(
        FetterComp *const this,
        bool is_on_login,
        const std::vector<data::FetterCondType> *fetter_cond_type_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<unsigned int> *p_second; // rcx
  __gnu_cxx::__normal_iterator<const data::FetterCondType*,std::vector<data::FetterCondType> >::reference v7; // rax
  _DWORD *v8; // rdx
  std::vector<unsigned int> *v9; // rcx
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v12; // rax
  unsigned __int64 v13; // rax
  Player *v14; // rax
  PlayerBasicComp *BasicComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v16; // rax
  uint32_t *v17; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterOpen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterOpen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  uint32_t AvatarId; // eax
  Player *v21; // r14
  common::milog::MiLogStream *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  bool result; // al
  std::string v29; // [rsp+0h] [rbp-200h]
  bool is_has_change; // [rsp+2Bh] [rbp-1D5h]
  uint32_t fetter_id; // [rsp+2Ch] [rbp-1D4h]
  std::vector<data::FetterCondType>::const_iterator __for_begin; // [rsp+30h] [rbp-1D0h] BYREF
  std::vector<data::FetterCondType>::const_iterator __for_end; // [rsp+38h] [rbp-1C8h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+40h] [rbp-1C0h] BYREF
  const std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::vector<unsigned int>>> *avatar_fetters_index_map; // [rsp+48h] [rbp-1B8h]
  const std::unordered_map<data::FetterCondType,std::vector<unsigned int>> *cond_fetters_map; // [rsp+50h] [rbp-1B0h]
  const std::vector<data::FetterCondType> *__for_range; // [rsp+58h] [rbp-1A8h]
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *avatar_all_fetters_map; // [rsp+60h] [rbp-1A0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> v40; // [rsp+70h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> v41; // [rsp+80h] [rbp-180h] BYREF
  std::string v42; // [rsp+90h] [rbp-170h] BYREF
  char v43[336]; // [rsp+B0h] [rbp-150h] BYREF

  *(&v29._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v29._M_string_length = (std::string::size_type)fetter_cond_type_vec;
  v29._anon_0._M_local_buf[4] = is_on_login;
  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 1 10 holder:449 48 4 13 cond_type:434 64 8 8 iter:430 96 8 8 iter:421 128 16 9 timer:414 16"
                        "0 16 14 player_ptr:446 192 16 11 log_ptr:452 224 24 24 opened_fetter_id_vec:417";
  *(_QWORD *)(v3 + 16) = FetterComp::checkRefreshFetterComp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 128));
  FetterComp::checkRefreshLoginOnBirthday(this);
  is_has_change = 0;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 224));
  if ( std::vector<data::FetterCondType>::empty((const std::vector<data::FetterCondType> *const)v29._M_string_length) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v40);
    avatar_all_fetters_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.fetter_config_mgr.avatar_all_fetters_map;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v40);
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    *(_DWORD *)(v3 + 48) = Avatar::getAvatarId(this->formal_avatar_);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                 avatar_all_fetters_map,
                                                                                                 (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
    __for_end_0._M_current = (unsigned int *)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(avatar_all_fetters_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end_0) )
    {
      p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 96))->second;
      is_has_change = FetterComp::checkRefreshFettersInVec(this, p_second, (std::vector<unsigned int> *)(v3 + 224));
    }
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    avatar_fetters_index_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.fetter_config_mgr.avatar_fetters_index_map;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v41);
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    *(_DWORD *)(v3 + 48) = Avatar::getAvatarId(this->formal_avatar_);
    *(std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::vector<unsigned int>>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::vector<unsigned int>>>::find(avatar_fetters_index_map, (const std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::vector<unsigned int>>>::key_type *)(v3 + 48));
    __for_end_0._M_current = (unsigned int *)std::unordered_map<unsigned int,std::unordered_map<data::FetterCondType,std::vector<unsigned int>>>::end(avatar_fetters_index_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::vector<unsigned int>>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::vector<unsigned int>> >,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::vector<unsigned int>> >,false> *)&__for_end_0) )
    {
      cond_fetters_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<data::FetterCondType,std::vector<unsigned int>> >,false,false> *const)(v3 + 64))->second;
      __for_range = (const std::vector<data::FetterCondType> *)v29._M_string_length;
      __for_begin._M_current = std::vector<data::FetterCondType>::begin((const std::vector<data::FetterCondType> *const)v29._M_string_length)._M_current;
      __for_end._M_current = std::vector<data::FetterCondType>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<data::FetterCondType const*,std::vector<data::FetterCondType>>(
                &__for_begin,
                &__for_end) )
      {
        v7 = __gnu_cxx::__normal_iterator<data::FetterCondType const*,std::vector<data::FetterCondType>>::operator*(&__for_begin);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        *(_DWORD *)(v3 + 48) = *v8;
        *(std::unordered_map<data::FetterCondType,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<data::FetterCondType,std::vector<unsigned int>>::find(cond_fetters_map, (const std::unordered_map<data::FetterCondType,std::vector<unsigned int>>::key_type *)(v3 + 48));
        __for_end_0._M_current = (unsigned int *)std::unordered_map<data::FetterCondType,std::vector<unsigned int>>::end(cond_fetters_map)._M_cur;
        if ( std::__detail::operator!=<std::pair<data::FetterCondType const,std::vector<unsigned int>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<const data::FetterCondType,std::vector<unsigned int> >,false> *)(v3 + 96),
               (const std::__detail::_Node_iterator_base<std::pair<const data::FetterCondType,std::vector<unsigned int> >,false> *)&__for_end_0) )
        {
          v9 = &std::__detail::_Node_const_iterator<std::pair<data::FetterCondType const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::FetterCondType,std::vector<unsigned int> >,false,false> *const)(v3 + 96))->second;
          is_has_change = (is_has_change | FetterComp::checkRefreshFettersInVec(
                                             this,
                                             v9,
                                             (std::vector<unsigned int> *)(v3 + 224))) != 0;
        }
        __gnu_cxx::__normal_iterator<data::FetterCondType const*,std::vector<data::FetterCondType>>::operator++(&__for_begin);
      }
    }
  }
  if ( !is_on_login && !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 224)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    formal_avatar = this->formal_avatar_;
    v12 = formal_avatar;
    if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
      v12 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
    v13 = *(_QWORD *)v12->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8(v13);
    (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v13)(v3 + 160, formal_avatar);
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 160)) )
    {
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      BasicComp = Player::getBasicComp(v14);
      PlayerBasicComp::getNextTransNo[abi:cxx11](&v42, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x654u, v29);
      std::string::~string(&v42);
      __for_range_0 = (std::vector<unsigned int> *)(v3 + 224);
      *(std::vector<unsigned int>::iterator *)(v3 + 96) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 224));
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96),
                &__for_end_0) )
      {
        v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 96));
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        fetter_id = *v17;
        common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarFetterOpen>();
        v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterOpen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterOpen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        proto_log::PlayerLogBodyAvatarFetterOpen::set_fetter_id(v18, fetter_id);
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterOpen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterOpen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        if ( *(_BYTE *)(((*(&v29._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(&v29._anon_0._M_allocated_capacity + 1) + 8);
        AvatarId = Avatar::getAvatarId(*(const Avatar *const *)(*(&v29._anon_0._M_allocated_capacity + 1) + 8));
        proto_log::PlayerLogBodyAvatarFetterOpen::set_avatar_id(v19, AvatarId);
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v41, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarFetterOpen,void>(
          &v40,
          (const std::shared_ptr<proto_log::PlayerLogBodyAvatarFetterOpen> *)(v3 + 192));
        Player::printStatLog(v21, &v40, &v41, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v40);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v41);
        std::shared_ptr<proto_log::PlayerLogBodyAvatarFetterOpen>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarFetterOpen> *const)(v3 + 192));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 96));
      }
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v42,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/avatar/fetter/fetter_comp.cpp",
    "checkRefreshFetterComp",
    459);
  v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
          (common::milog::MiLogStream *const)&v42,
          (const char (*)[15])"[PERF] avatar:");
  if ( *(_BYTE *)(((*(&v29._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(&v29._anon_0._M_allocated_capacity + 1) + 8);
  v23 = common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(
          v22,
          *(const FormalAvatar **)(*(&v29._anon_0._M_allocated_capacity + 1) + 8));
  v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])" fetter_conds:");
  v25 = common::milog::MiLogStream::operator<<<data::FetterCondType>(
          v24,
          (const std::vector<data::FetterCondType> *)v29._M_string_length);
  v26 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])" cost:");
  *(_DWORD *)(v3 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 128));
  v27 = common::milog::MiLogStream::operator<<<int,(int *)0>(v26, (const int *)(v3 + 48));
  common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v27, (const char (*)[3])"us");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v42);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 224));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 128));
  result = is_has_change;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 465: range 00000000150B0922-00000000150B1383
bool __cdecl FetterComp::checkRefreshFettersInVec(
        FetterComp *const this,
        const std::vector<unsigned int> *fetter_id_vec,
        std::vector<unsigned int> *opened_fetter_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  __int64 v11; // rsi
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // ecx
  char v14; // al
  std::shared_ptr<FetterData> *v15; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  std::vector<unsigned int> *v20; // rax
  __int64 v21; // rdx
  std::vector<unsigned int> *v22; // rax
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false,false>,bool> >::type *v23; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false,false>::pointer v25; // rax
  std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rdx
  proto::FetterState *p_state; // rax
  proto::FetterState state; // r14d
  std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  proto::FetterState *v30; // rax
  std::vector<unsigned int> *p_cond_index_vec; // r14
  std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  proto::FetterState *v35; // rax
  std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  proto::FetterState *v37; // rax
  char v38; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false,false>::pointer v39; // rax
  bool result; // al
  bool is_has_change; // [rsp+27h] [rbp-169h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false> __y; // [rsp+38h] [rbp-158h] BYREF
  const FetterExcelConfigMgr *fetter_config_mgr; // [rsp+40h] [rbp-150h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  const data::FetterConfig *fetter_config_ptr; // [rsp+50h] [rbp-140h]
  FetterData *data; // [rsp+58h] [rbp-138h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false,false>,bool> >::type *iter; // [rsp+60h] [rbp-130h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false,false>,bool> >::type *inserted; // [rsp+68h] [rbp-128h]
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false,false>,bool> __in; // [rsp+70h] [rbp-120h] BYREF
  common::milog::MiLogStream v53; // [rsp+80h] [rbp-110h] BYREF
  char v54[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 fetter_id:469 64 16 12 data_ptr:477 96 16 16 old_data_ptr:510 128 24 23 temp_cond_index_vec:467";
  *(_QWORD *)(v3 + 16) = FetterComp::checkRefreshFettersInVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  is_has_change = 0;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 128));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  fetter_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.fetter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  __for_range = fetter_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(fetter_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(fetter_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 48) = *v7;
    fetter_config_ptr = FetterExcelConfigMgr::findFetterConfig(fetter_config_mgr, *(_DWORD *)(v3 + 48));
    if ( fetter_config_ptr )
    {
      common::tools::perf::make_shared<FetterData>();
      v11 = 0LL;
      if ( std::operator==<FetterData>((const std::shared_ptr<FetterData> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/fetter/fetter_comp.cpp",
          "checkRefreshFettersInVec",
          480);
        v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v53,
                (const char (*)[29])"data_ptr is null, fetter_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v53);
      }
      else
      {
        data = std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v13 = *(_DWORD *)(v3 + 48);
        v14 = *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(v11) = v14 != 0;
          __asan_report_store4(data, v11, data);
        }
        data->fetter_id = v13;
        if ( !std::vector<data::FetterConditionConfig>::empty(&fetter_config_ptr->conceal_conds)
          && FetterComp::checkFetterConditionVec(
               this,
               &fetter_config_ptr->conceal_conds,
               (std::vector<unsigned int> *)(v3 + 128)) )
        {
          v17 = (*(_BYTE *)(((unsigned __int64)&data->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->state >> 3) + 0x7FFF8000));
          if ( (_BYTE)v17 )
            __asan_report_store4(&data->state, (((_BYTE)data + 4) & 7u) + 3, v17);
          data->state = FETTER_STATE_CONCEAL;
        }
        else if ( FetterComp::checkFetterConditionVec(
                    this,
                    &fetter_config_ptr->open_conds,
                    (std::vector<unsigned int> *)(v3 + 128)) )
        {
          if ( FetterComp::checkFetterConditionVec(
                 this,
                 &fetter_config_ptr->finish_conds,
                 (std::vector<unsigned int> *)(v3 + 128)) )
          {
            v18 = (*(_BYTE *)(((unsigned __int64)&data->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->state >> 3) + 0x7FFF8000));
            if ( (_BYTE)v18 )
              __asan_report_store4(&data->state, (((_BYTE)data + 4) & 7u) + 3, v18);
            data->state = FETTER_STATE_FINISH;
          }
          else
          {
            v19 = (*(_BYTE *)(((unsigned __int64)&data->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->state >> 3) + 0x7FFF8000));
            if ( (_BYTE)v19 )
              __asan_report_store4(&data->state, (((_BYTE)data + 4) & 7u) + 3, v19);
            data->state = FETTER_STATE_OPEN;
            v20 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v3 + 128));
            std::vector<unsigned int>::operator=(&data->cond_index_vec, v20);
          }
        }
        else
        {
          v21 = (*(_BYTE *)(((unsigned __int64)&data->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->state >> 3) + 0x7FFF8000));
          if ( (_BYTE)v21 )
            __asan_report_store4(&data->state, (((_BYTE)data + 4) & 7u) + 3, v21);
          data->state = FETTER_STATE_NOT_OPEN;
          v22 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v3 + 128));
          std::vector<unsigned int>::operator=(&data->cond_index_vec, v22);
        }
        __in = std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::emplace<unsigned int &,std::shared_ptr<FetterData>&>(
                 &this->fetter_data_map_,
                 (unsigned int *)(v3 + 48),
                 (std::shared_ptr<FetterData> *)(v3 + 64),
                 (unsigned int *)&this->fetter_data_map_,
                 v15);
        iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData>>,false,false>,bool>(&__in);
        v23 = std::get<1ul,std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData>>,false,false>,bool>(&__in);
        inserted = v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v23 & 7) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v23);
        }
        if ( !*inserted
          && (__y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::end(&this->fetter_data_map_)._M_cur,
              std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<FetterData>>,false>(iter, &__y)) )
        {
          v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData>>,false,false>::operator->(iter);
          std::shared_ptr<FetterData>::shared_ptr((std::shared_ptr<FetterData> *const)(v3 + 96), &v25->second);
          if ( std::__shared_ptr<FetterData,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<FetterData,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 96)) )
          {
            v26 = std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            p_state = &v26->state;
            if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_state);
            }
            state = v26->state;
            v29 = std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v30 = &v29->state;
            if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v30);
            }
            if ( state != v29->state
              || (p_cond_index_vec = &std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->cond_index_vec,
                  v32 = std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
                  std::operator!=<unsigned int,std::allocator<unsigned int>>(&v32->cond_index_vec, p_cond_index_vec)) )
            {
              v34 = std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              v35 = &v34->state;
              if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v35);
              }
              if ( v34->state != FETTER_STATE_NOT_OPEN )
                goto LABEL_59;
              v36 = std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v37 = &v36->state;
              if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v37);
              }
              if ( v36->state == FETTER_STATE_NOT_OPEN )
LABEL_59:
                v38 = 0;
              else
                v38 = 1;
              if ( v38 )
                std::vector<unsigned int>::push_back(
                  opened_fetter_id_vec,
                  (const std::vector<unsigned int>::value_type *)(v3 + 48));
              v39 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData>>,false,false>::operator->(iter);
              std::shared_ptr<FetterData>::operator=(&v39->second, (const std::shared_ptr<FetterData> *)(v3 + 64));
              is_has_change = 1;
            }
          }
          std::shared_ptr<FetterData>::~shared_ptr((std::shared_ptr<FetterData> *const)(v3 + 96));
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&data->state >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->state >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&data->state);
          }
          if ( data->state != FETTER_STATE_NOT_OPEN )
            std::vector<unsigned int>::push_back(
              opened_fetter_id_vec,
              (const std::vector<unsigned int>::value_type *)(v3 + 48));
          is_has_change = 1;
        }
      }
      std::shared_ptr<FetterData>::~shared_ptr((std::shared_ptr<FetterData> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/fetter/fetter_comp.cpp",
        "checkRefreshFettersInVec",
        474);
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v53,
             (const char (*)[34])"findFetterConfig fail, fetter_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->formal_avatar_);
      common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v10, this->formal_avatar_);
      common::milog::MiLogStream::~MiLogStream(&v53);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
  result = is_has_change;
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 538: range 00000000150B1384-00000000150B13BB
void __cdecl FetterComp::checkRefreshFetterCompAndNotifyClient(
        FetterComp *const this,
        const std::vector<data::FetterCondType> *fetter_cond_type_vec)
{
  if ( FetterComp::checkRefreshFetterComp(this, 0, fetter_cond_type_vec) )
    FetterComp::notifyClient(this);
};

// Line 547: range 00000000150B13BC-00000000150B1801
bool __cdecl FetterComp::isTodayAvatarBirthday(const FetterComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  FetterExcelConfigMgr *p_fetter_config_mgr; // r14
  uint32_t AvatarId; // eax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rcx
  bool isTodayBirthday; // r14
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v10; // rax
  unsigned __int64 v11; // rax
  common::milog::MiLogStream *v12; // r14
  Player *v13; // rax
  PlayerSocialComp *SocialComp; // rax
  bool result; // al
  unsigned __int64 val; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 18 birthday_month:548 48 4 16 birthday_day:549 64 16 14 player_ptr:555";
  *(_QWORD *)(v1 + 16) = FetterComp::isTodayAvatarBirthday;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 64));
  p_fetter_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->design_config.txt_config_mgr.fetter_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  AvatarId = Avatar::getAvatarId(this->formal_avatar_);
  v6 = FetterExcelConfigMgr::findAvatarBirthDay(
         p_fetter_config_mgr,
         AvatarId,
         (uint32_t *)(v1 + 32),
         (uint32_t *)(v1 + 48)) != 0;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/avatar/fetter/fetter_comp.cpp",
      "isTodayAvatarBirthday",
      552);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v17,
           (const char (*)[40])"findAvatarBirthDay fail, formal_avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v7, this->formal_avatar_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    isTodayBirthday = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    formal_avatar = this->formal_avatar_;
    v10 = formal_avatar;
    if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
      v10 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
    v11 = *(_QWORD *)v10->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v11)(v1 + 64, formal_avatar);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/fetter/fetter_comp.cpp",
        "isTodayAvatarBirthday",
        558);
      v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v17,
              (const char (*)[37])" get player_ptr failed avatar_guid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->formal_avatar_);
      val = Avatar::getGuid(this->formal_avatar_);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      isTodayBirthday = 0;
    }
    else
    {
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      SocialComp = Player::getSocialComp(v13);
      isTodayBirthday = PlayerSocialComp::isTodayBirthday(SocialComp, *(_DWORD *)(v1 + 32), *(_DWORD *)(v1 + 48), 0);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  }
  result = isTodayBirthday;
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 565: range 00000000150B1802-00000000150B18B3
void __cdecl FetterComp::checkRefreshLoginOnBirthday(FetterComp *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_login_on_birthday_);
  if ( !this->is_login_on_birthday_ && FetterComp::isTodayAvatarBirthday(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_login_on_birthday_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_login_on_birthday_, v1, &this->is_login_on_birthday_);
    this->is_login_on_birthday_ = 1;
  }
};

// Line 574: range 00000000150B18B4-00000000150B1D6D
void __cdecl FetterComp::logExpNumberChange(
        FetterComp *const this,
        uint32_t add_num,
        uint32_t old_level,
        uint32_t new_level,
        const ActionReason *reason,
        uint32_t all_exp,
        uint32_t left_exp)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  FormalAvatar *formal_avatar; // rsi
  FormalAvatar *v11; // rax
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  Player *v22; // r14
  unsigned __int64 val; // [rsp+28h] [rbp-D8h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+70h] [rbp-90h] BYREF

  v7 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 32 16 14 player_ptr:575 64 16 11 log_ptr:582";
  *(_QWORD *)(v7 + 16) = FetterComp::logExpNumberChange;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -219021312;
  v9[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  formal_avatar = this->formal_avatar_;
  v11 = formal_avatar;
  if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
    v11 = (FormalAvatar *)__asan_report_load8(this->formal_avatar_);
  v12 = *(_QWORD *)v11->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8(v12);
  (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v12)(v7 + 32, formal_avatar);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/fetter/fetter_comp.cpp",
      "logExpNumberChange",
      578);
    v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v31,
            (const char (*)[37])" get player_ptr failed avatar_guid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    val = Avatar::getGuid(this->formal_avatar_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  else
  {
    common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarFetterChangeExp>();
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    AvatarId = Avatar::getAvatarId(this->formal_avatar_);
    proto_log::PlayerLogBodyAvatarFetterChangeExp::set_avatar_id(v14, AvatarId);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    proto_log::PlayerLogBodyAvatarFetterChangeExp::set_change_point(v16, add_num);
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    proto_log::PlayerLogBodyAvatarFetterChangeExp::set_level_before(v17, old_level);
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    proto_log::PlayerLogBodyAvatarFetterChangeExp::set_level_after(v18, new_level);
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    proto_log::PlayerLogBodyAvatarFetterChangeExp::set_all_point(v19, all_exp);
    v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    proto_log::PlayerLogBodyAvatarFetterChangeExp::set_level_point(v20, left_exp);
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarFetterChangeExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    if ( *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(reason);
    }
    proto_log::PlayerLogBodyAvatarFetterChangeExp::set_reason(v21, reason->reason_type);
    v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 32));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarFetterChangeExp,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyAvatarFetterChangeExp> *)(v7 + 64));
    Player::printStatLog(v22, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyAvatarFetterChangeExp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarFetterChangeExp> *const)(v7 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 32));
  if ( v32 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 596: range 00000000150B1D6E-00000000150B1F23
// local variable allocation has failed, the output may be wrong!
void __cdecl FetterComp::setFetterExpByGm(FetterComp *const this, uint32_t exp_number)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rdx
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 reason:599";
  *(_QWORD *)(v2 + 16) = FetterComp::setFetterExpByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_, *(_QWORD *)&exp_number, &this->level_);
  }
  this->level_ = 1;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->exp_, (((_BYTE)this + 20) & 7u) + 3, v5);
  this->exp_ = 0;
  ActionReason::ActionReason((ActionReason *const)(v2 + 32), ACTION_REASON_GM, ITEM_LIMIT_GM);
  if ( FetterComp::addExpNumber(this, exp_number, (const ActionReason *)(v2 + 32)) )
    FetterComp::notifyClient(this);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 607: range 00000000150B1F24-00000000150B2125
__int64 __fastcall FetterComp::closeFetterByGm(FetterComp *const this, uint32_t fetter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __int64 result; // rax
  uint32_t avatar_id; // r14d
  const data::FetterConfig *fetter_config_ptr; // [rsp+18h] [rbp-88h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 fetter_id:606";
  *(_QWORD *)(v2 + 16) = FetterComp::closeFetterByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = fetter_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  fetter_config_ptr = FetterExcelConfigMgr::findFetterConfig(
                        &v5->design_config.txt_config_mgr.fetter_config_mgr,
                        *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( fetter_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&fetter_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)fetter_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fetter_config_ptr->avatar_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&fetter_config_ptr->avatar_id);
    }
    avatar_id = fetter_config_ptr->avatar_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    if ( avatar_id == Avatar::getAvatarId(this->formal_avatar_) )
    {
      std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::erase(
        &this->fetter_data_map_,
        (const std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::key_type *)(v2 + 32));
      result = 0LL;
    }
    else
    {
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
  if ( v10 == (char *)v2 )
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

// Line 622: range 00000000150B2126-00000000150B25A7
__int64 __fastcall FetterComp::setFetterStateByGm(
        FetterComp *const this,
        uint32_t fetter_id,
        proto::FetterState fetter_state)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int v7; // r14d
  uint32_t avatar_id; // r14d
  std::shared_ptr<FetterData> *v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false,false>::pointer v10; // rax
  __int64 v11; // rsi
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  unsigned __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rdx
  std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  char v18; // cl
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false> __y; // [rsp+10h] [rbp-F0h] BYREF
  const data::FetterConfig *fetter_config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v23; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 fetter_id:621 64 8 8 iter:633 96 16 12 data_ptr:632";
  *(_QWORD *)(v3 + 16) = FetterComp::setFetterStateByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = fetter_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  fetter_config_ptr = FetterExcelConfigMgr::findFetterConfig(
                        &v6->design_config.txt_config_mgr.fetter_config_mgr,
                        *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( fetter_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&fetter_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)fetter_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fetter_config_ptr->avatar_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&fetter_config_ptr->avatar_id);
    }
    avatar_id = fetter_config_ptr->avatar_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    if ( avatar_id == Avatar::getAvatarId(this->formal_avatar_) )
    {
      *(_QWORD *)(v3 + 96) = 0LL;
      *(_QWORD *)(v3 + 104) = 0LL;
      *(std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::find(
                                                                                               &this->fetter_data_map_,
                                                                                               (const std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::key_type *)(v3 + 48));
      __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::end(&this->fetter_data_map_)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<FetterData>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false> *)(v3 + 64),
             &__y) )
      {
        common::tools::perf::make_shared<FetterData>();
        std::shared_ptr<FetterData>::operator=(
          (std::shared_ptr<FetterData> *const)(v3 + 96),
          (std::shared_ptr<FetterData> *)&v23);
        std::shared_ptr<FetterData>::~shared_ptr((std::shared_ptr<FetterData> *const)&v23);
        v9 = std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::operator[](
               &this->fetter_data_map_,
               (const std::unordered_map<unsigned int,std::shared_ptr<FetterData>>::key_type *)(v3 + 48));
        std::shared_ptr<FetterData>::operator=(v9, (const std::shared_ptr<FetterData> *)(v3 + 96));
      }
      else
      {
        v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<FetterData> >,false,false> *const)(v3 + 64));
        std::shared_ptr<FetterData>::operator=((std::shared_ptr<FetterData> *const)(v3 + 96), &v10->second);
      }
      v11 = 0LL;
      if ( std::operator==<FetterData>((const std::shared_ptr<FetterData> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/fetter/fetter_comp.cpp",
          "setFetterStateByGm",
          645);
        v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v24,
                (const char (*)[28])"data_ptr is null,fetter_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
        v7 = -1;
      }
      else
      {
        v13 = *(_DWORD *)(v3 + 48);
        v14 = (unsigned __int64)std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
        LOBYTE(v11) = v15 != 0;
        v16 = (v15 != 0) & (unsigned __int8)(v15 <= 3);
        if ( (_BYTE)v16 )
          v14 = __asan_report_store4(v14, v11, v16);
        *(_DWORD *)v14 = v13;
        v17 = std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FetterData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v18 = *(_BYTE *)(((unsigned __int64)&v17->state >> 3) + 0x7FFF8000);
        if ( v18 != 0 && (char)((((_BYTE)v17 + 4) & 7) + 3) >= v18 )
        {
          LOBYTE(v11) = v18 != 0;
          __asan_report_store4(&v17->state, v11, v17);
        }
        v17->state = fetter_state;
        v7 = 0;
      }
      std::shared_ptr<FetterData>::~shared_ptr((std::shared_ptr<FetterData> *const)(v3 + 96));
    }
    else
    {
      v7 = -1;
    }
  }
  else
  {
    v7 = -1;
  }
  result = v7;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 654: range 00000000150B25A8-00000000150B2982
int32_t __cdecl FetterComp::openAllFettersByGM(FetterComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r13
  int32_t result; // eax
  const unsigned int *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type __x; // [rsp+14h] [rbp-BCh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *avatar_all_fetters_map; // [rsp+28h] [rbp-A8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const unsigned int *fetter_id; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-80h] BYREF
  char v16[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 iter:656";
  *(_QWORD *)(v1 + 16) = FetterComp::openAllFettersByGM;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  avatar_all_fetters_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.fetter_config_mgr.avatar_all_fetters_map;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->formal_avatar_);
  __x = Avatar::getAvatarId(this->formal_avatar_);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               avatar_all_fetters_map,
                                                                                               &__x);
  __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(avatar_all_fetters_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v1 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/fetter/fetter_comp.cpp",
      "openAllFettersByGM",
      659);
    v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v15,
           (const char (*)[45])"find avatar_all_fetters_map fail, avatar_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->formal_avatar_);
    __x = Avatar::getAvatarId(this->formal_avatar_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &__x);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v1 + 32))->second;
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      fetter_id = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      if ( (unsigned int)FetterComp::setFetterStateByGm(this, *fetter_id, FETTER_STATE_OPEN) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/fetter/fetter_comp.cpp",
          "openAllFettersByGM",
          666);
        v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v15,
               (const char (*)[37])"setFetterStateByGm error, fetter_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, fetter_id);
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = -1;
        goto LABEL_18;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0;
  }
LABEL_18:
  if ( v16 == (char *)v1 )
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
