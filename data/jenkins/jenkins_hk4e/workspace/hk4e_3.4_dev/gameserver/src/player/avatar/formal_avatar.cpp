// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/formal_avatar.cpp

// Line 34: range 00000000161EE486-00000000161EE4D1
FetterComp *__cdecl FormalAvatar::getFetterComp(const FormalAvatar *const this)
{
  FetterComp *v1; // rbx
  std::shared_ptr<FetterComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::findComp<FetterComp>((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)v3);
  v1 = std::__shared_ptr_access<FetterComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FetterComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<FetterComp>::~shared_ptr(v3);
  return v1;
};

// Line 35: range 00000000161EE4D2-00000000161EE51D
ExpeditionComp *__cdecl FormalAvatar::getExpeditionComp(const FormalAvatar *const this)
{
  ExpeditionComp *v1; // rbx
  std::shared_ptr<ExpeditionComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::findComp<ExpeditionComp>((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)v3);
  v1 = std::__shared_ptr_access<ExpeditionComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ExpeditionComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<ExpeditionComp>::~shared_ptr(v3);
  return v1;
};

// Line 38: range 00000000161EE51E-00000000161EE52C
proto::AvatarType __cdecl FormalAvatar::getAvatarType(const FormalAvatar *const this)
{
  return 1;
};

// Line 44: range 00000000161EE52E-00000000161EE659
std::string *__cdecl FormalAvatar::getDesc[abi:cxx11](std::string *retstr, const FormalAvatar *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-51h] BYREF
  std::string __lhs; // [rsp+20h] [rbp-50h] BYREF
  std::string __rhs; // [rsp+40h] [rbp-30h] BYREF

  Avatar::getDesc[abi:cxx11](&__rhs, this);
  std::allocator<char>::allocator(&__a, this);
  std::string::basic_string<std::allocator<char>>(&__lhs, "formal_avatar:", &__a);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &__lhs, &__rhs);
  std::string::~string(&__lhs);
  std::allocator<char>::~allocator(&__a);
  std::string::~string(&__rhs);
  return retstr;
};

// Line 49: range 00000000161EE65A-00000000161EE80F
int32_t __cdecl FormalAvatar::constructComps(FormalAvatar *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( Avatar::constructComps(this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "constructComps",
      52);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v2,
      (const char (*)[30])"Avatar::constructComps failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::addComp<FetterComp>(&this->EcsBase<FormalAvatar,FormalAvatarCompBase,3>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "constructComps",
      57);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v2,
      (const char (*)[26])"addComp FetterComp failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::addComp<ExpeditionComp>(&this->EcsBase<FormalAvatar,FormalAvatarCompBase,3>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "constructComps",
      62);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v2,
      (const char (*)[30])"addComp ExpeditionComp failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 70: range 00000000161EE810-00000000161EEA64
int32_t __cdecl FormalAvatar::onLogin(FormalAvatar *const this)
{
  common::milog::MiLogStream *v1; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *v8; // [rsp+18h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *comp_type; // [rsp+20h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *formal_avatar_comp_ptr; // [rsp+28h] [rbp-58h]
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_end; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  if ( Avatar::onLogin(this) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "onLogin",
      73);
    v1 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v13,
           (const char (*)[37])"Avatar::onLogin fail, formal_avatar:");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v1, this);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::begin((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_begin);
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::end((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_end);
    while ( EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v8 = EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(&__for_begin);
      comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v8);
      formal_avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v8);
      v3 = (unsigned __int64)std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)formal_avatar_comp_ptr);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8(v3);
      v4 = *(_QWORD *)v3 + 24LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8(*(_QWORD *)v3 + 24LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v4)(v3) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/formal_avatar.cpp",
          "onLogin",
          80);
        v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v13,
               (const char (*)[26])"onLogin fails comp_type: ");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, comp_type);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" formal_avatar:");
        common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v7, this);
        common::milog::MiLogStream::~MiLogStream(&v13);
        return -1;
      }
      EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 89: range 00000000161EEA66-00000000161EECBA
int32_t __cdecl FormalAvatar::onDisconnect(FormalAvatar *const this)
{
  common::milog::MiLogStream *v1; // rdx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *v8; // [rsp+18h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *comp_type; // [rsp+20h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *formal_avatar_comp_ptr; // [rsp+28h] [rbp-58h]
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_end; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  if ( Avatar::onDisconnect(this) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "onDisconnect",
      92);
    v1 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v13,
           (const char (*)[42])"Avatar::onDisconnect fail, formal_avatar:");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v1, this);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::begin((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_begin);
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::end((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_end);
    while ( EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v8 = EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(&__for_begin);
      comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v8);
      formal_avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v8);
      v3 = (unsigned __int64)std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)formal_avatar_comp_ptr);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8(v3);
      v4 = *(_QWORD *)v3 + 32LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8(*(_QWORD *)v3 + 32LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v4)(v3) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/formal_avatar.cpp",
          "onDisconnect",
          99);
        v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v13,
               (const char (*)[31])"onDisconnect fails comp_type: ");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, comp_type);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" formal_avatar:");
        common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v7, this);
        common::milog::MiLogStream::~MiLogStream(&v13);
        return -1;
      }
      EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 108: range 00000000161EECBC-00000000161EF079
int32_t __cdecl FormalAvatar::fromBin(FormalAvatar *const this, const proto::AvatarBin *avatar_bin)
{
  common::milog::MiLogStream *v2; // rdx
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // al
  unsigned int v9; // eax
  __int64 v10; // rdx
  char v11; // al
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v17; // rax
  const proto::FormalAvatarBin *formal_avatar_bin; // [rsp+18h] [rbp-78h]
  const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *v19; // [rsp+28h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *comp_type; // [rsp+30h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *formal_avatar_comp_ptr; // [rsp+38h] [rbp-58h]
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_end; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-30h] BYREF

  if ( Avatar::fromBin(this, avatar_bin) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "fromBin",
      111);
    v2 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v24,
           (const char (*)[32])"Avatar::fromBin failed, avatar:");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v2, this);
    common::milog::MiLogStream::~MiLogStream(&v24);
    return -1;
  }
  else
  {
    formal_avatar_bin = proto::AvatarBin::formal_avatar(avatar_bin);
    v4 = proto::FormalAvatarBin::exp(formal_avatar_bin);
    v5 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
    LOBYTE(avatar_bin) = v5 != 0;
    v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= v5);
    if ( (_BYTE)v6 )
      __asan_report_store4(&this->exp_, avatar_bin, v6);
    this->exp_ = v4;
    v7 = proto::FormalAvatarBin::avatar_repeat_count(formal_avatar_bin);
    v8 = *(_BYTE *)(((unsigned __int64)&this->avatar_repeat_count_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(avatar_bin) = v8 != 0;
      __asan_report_store4(&this->avatar_repeat_count_, avatar_bin, v7);
    }
    this->avatar_repeat_count_ = v7;
    LOBYTE(v9) = proto::FormalAvatarBin::is_focus(formal_avatar_bin);
    v10 = v9;
    v11 = *(_BYTE *)(((unsigned __int64)&this->is_focus_ >> 3) + 0x7FFF8000);
    if ( v11 < 0 )
    {
      LOBYTE(avatar_bin) = v11 != 0;
      __asan_report_store1(&this->is_focus_, avatar_bin, v10);
    }
    this->is_focus_ = v10;
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::begin((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_begin);
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::end((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_end);
    while ( EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v19 = EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(&__for_begin);
      comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v19);
      formal_avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v19);
      v12 = (unsigned __int64)std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)formal_avatar_comp_ptr);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v12);
      v13 = *(_QWORD *)v12 + 40LL;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(*(_QWORD *)v12 + 40LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, const proto::FormalAvatarBin *))v13)(
             v12,
             formal_avatar_bin) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/formal_avatar.cpp",
          "fromBin",
          122);
        v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v24,
                (const char (*)[26])"fromBin fails comp_type: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, comp_type);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v15,
                (const char (*)[16])" formal_avatar:");
        common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v16, this);
        common::milog::MiLogStream::~MiLogStream(&v24);
        return -1;
      }
      EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator++(&__for_begin);
    }
    v17 = proto::FormalAvatarBin::taken_promote_reward_level_list(formal_avatar_bin);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v17, &this->taken_promote_reward_level_vec_);
    return 0;
  }
};

// Line 132: range 00000000161EF07A-00000000161EF43A
int32_t __cdecl FormalAvatar::toBin(FormalAvatar *const this, proto::AvatarBin *avatar_bin)
{
  common::milog::MiLogStream *v2; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  google::protobuf::RepeatedField<unsigned int> *v9; // rax
  proto::FormalAvatarBin *formal_avatar_bin; // [rsp+18h] [rbp-78h]
  const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *v11; // [rsp+28h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *comp_type; // [rsp+30h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *formal_avatar_comp_ptr; // [rsp+38h] [rbp-58h]
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_end; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-30h] BYREF

  if ( Avatar::toBin(this, avatar_bin) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "toBin",
      135);
    v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v16,
           (const char (*)[30])"Avatar::toBin failed, avatar:");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v2, this);
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
  else
  {
    formal_avatar_bin = proto::AvatarBin::mutable_formal_avatar(avatar_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->exp_);
    }
    proto::FormalAvatarBin::set_exp(formal_avatar_bin, this->exp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_repeat_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_repeat_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->avatar_repeat_count_);
    }
    proto::FormalAvatarBin::set_avatar_repeat_count(formal_avatar_bin, this->avatar_repeat_count_);
    if ( *(char *)(((unsigned __int64)&this->is_focus_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_focus_);
    proto::FormalAvatarBin::set_is_focus(formal_avatar_bin, this->is_focus_);
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::begin((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_begin);
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::end((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_end);
    while ( EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v11 = EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(&__for_begin);
      comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v11);
      formal_avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v11);
      v4 = (unsigned __int64)std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)formal_avatar_comp_ptr);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8(v4);
      v5 = *(_QWORD *)v4 + 48LL;
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8(*(_QWORD *)v4 + 48LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::FormalAvatarBin *))v5)(v4, formal_avatar_bin) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/formal_avatar.cpp",
          "toBin",
          146);
        v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v16,
               (const char (*)[24])"toBin fails comp_type: ");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, comp_type);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" formal_avatar:");
        common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v8, this);
        common::milog::MiLogStream::~MiLogStream(&v16);
        return -1;
      }
      EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator++(&__for_begin);
    }
    v9 = proto::FormalAvatarBin::mutable_taken_promote_reward_level_list(formal_avatar_bin);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->taken_promote_reward_level_vec_, v9);
    return 0;
  }
};

// Line 156: range 00000000161EF43C-00000000161EFA3C
int32_t __cdecl FormalAvatar::toClient(const FormalAvatar *const this, proto::AvatarInfo *avatar_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t result; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v14; // rax
  _DWORD *v15; // rdx
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+18h] [rbp-D8h] BYREF
  const FormalAvatar *__for_range; // [rsp+20h] [rbp-D0h]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+28h] [rbp-C8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > *v21; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *comp_type; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *formal_avatar_comp_ptr; // [rsp+48h] [rbp-A8h]
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_begin; // [rsp+50h] [rbp-A0h] BYREF
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_end; // [rsp+60h] [rbp-90h] BYREF
  common::milog::MiLogStream v26; // [rsp+70h] [rbp-80h] BYREF
  char v27[96]; // [rsp+90h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 promote_level:178";
  *(_QWORD *)(v2 + 16) = FormalAvatar::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( Avatar::toClient(this, avatar_info) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "toClient",
      159);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v26,
           (const char (*)[31])"Avatar::toClient fail, avatar:");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = -1;
  }
  else
  {
    __for_range = this;
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::begin((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_begin);
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::end((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_end);
    while ( EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v21 = EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(&__for_begin);
      comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v21);
      formal_avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v21);
      v7 = (unsigned __int64)std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)formal_avatar_comp_ptr);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(v7);
      v8 = *(_QWORD *)v7 + 56LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8(*(_QWORD *)v7 + 56LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::AvatarInfo *))v8)(v7, avatar_info) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/formal_avatar.cpp",
          "toClient",
          166);
        v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v26,
               (const char (*)[25])"client fails comp_type: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, comp_type);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v10,
                (const char (*)[16])" formal_avatar:");
        common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v11, this);
        common::milog::MiLogStream::~MiLogStream(&v26);
        result = -1;
        goto LABEL_29;
      }
      EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator++(&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_focus_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_focus_);
    proto::AvatarInfo::set_is_focus(avatar_info, this->is_focus_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__for_end);
    p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__for_end)->design_config.txt_config_mgr.avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->avatar_id_);
    }
    avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(p_avatar_config_mgr, this->avatar_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__for_end);
    if ( avatar_config_ptr )
    {
      __for_range_0 = &avatar_config_ptr->avatar_promote_reward_level_list;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&avatar_config_ptr->avatar_promote_reward_level_list)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(&avatar_config_ptr->avatar_promote_reward_level_list)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v14 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        *(_DWORD *)(v2 + 32) = *v15;
        if ( !common::tools::MiscUtils::isContains<unsigned int>(
                &this->taken_promote_reward_level_vec_,
                (const unsigned int *)(v2 + 32)) )
          proto::AvatarInfo::add_pending_promote_reward_list(avatar_info, *(_DWORD *)(v2 + 32));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/formal_avatar.cpp",
        "toClient",
        175);
      v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v26,
              (const char (*)[41])"findAvatarExcelConfig failed, avatar_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->avatar_id_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = -1;
    }
  }
LABEL_29:
  if ( v27 == (char *)v2 )
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

// Line 189: range 00000000161EFA3E-00000000161EFAF8
int32_t __cdecl FormalAvatar::toClient(const FormalAvatar *const this, proto::SceneAvatarInfo *avatar_info)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( !Avatar::toClient(this, avatar_info) )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/avatar/formal_avatar.cpp",
    "toClient",
    192);
  v2 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v4,
         (const char (*)[31])"Avatar::toClient fail, avatar:");
  common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v2, this);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return -1;
};

// Line 200: range 00000000161EFAFA-00000000161EFCC7
int32_t __cdecl FormalAvatar::init(FormalAvatar *const this, bool is_on_create)
{
  FetterComp *FetterComp; // rax
  ExpeditionComp *ExpeditionComp; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( Avatar::init(this, is_on_create) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "init",
      203);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v5, (const char (*)[18])"Avatar::init fail");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    FetterComp = FormalAvatar::getFetterComp(this);
    if ( FetterComp::init(FetterComp, is_on_create) )
    {
      common::milog::MiLogStream::create(
        &v5,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/formal_avatar.cpp",
        "init",
        208);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"init Fetter failed");
      common::milog::MiLogStream::~MiLogStream(&v5);
      return -1;
    }
    else
    {
      ExpeditionComp = FormalAvatar::getExpeditionComp(this);
      if ( ExpeditionComp::init(ExpeditionComp) )
      {
        common::milog::MiLogStream::create(
          &v5,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/formal_avatar.cpp",
          "init",
          213);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v5,
          (const char (*)[23])"init Expedition failed");
        common::milog::MiLogStream::~MiLogStream(&v5);
        return -1;
      }
      else
      {
        return 0;
      }
    }
  }
};

// Line 221: range 00000000161EFCC8-00000000161EFD98
void __cdecl FormalAvatar::onDailyRefresh(FormalAvatar *const this)
{
  FetterComp *FetterComp; // r14
  std::allocator<data::FetterCondType> __a; // [rsp+17h] [rbp-49h] BYREF
  std::initializer_list<data::FetterCondType> __l; // [rsp+18h] [rbp-48h] BYREF

  FetterComp = FormalAvatar::getFetterComp(this);
  __l._M_array = (std::initializer_list<data::FetterCondType>::iterator)0x900000008LL;
  std::allocator<data::FetterCondType>::allocator(&__a);
  std::vector<data::FetterCondType>::vector(
    (std::vector<data::FetterCondType> *const)&__l._M_len,
    (std::initializer_list<data::FetterCondType>)__PAIR128__(2LL, &__l),
    &__a);
  FetterComp::checkRefreshFetterCompAndNotifyClient(FetterComp, (const std::vector<data::FetterCondType> *)&__l._M_len);
  std::vector<data::FetterCondType>::~vector((std::vector<data::FetterCondType> *const)&__l._M_len);
  std::allocator<data::FetterCondType>::~allocator(&__a);
};

// Line 227: range 00000000161EFD9A-00000000161EFE19
void __cdecl FormalAvatar::getAvatarPropMap(const FormalAvatar *const this, PropValueMap *map)
{
  Avatar::getAvatarPropMap(this, map);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->exp_);
  }
  appendIntPropValue(map, 0x3E9u, this->exp_);
};

// Line 234: range 00000000161EFE1A-00000000161F0FB8
int32_t __cdecl FormalAvatar::addExp(
        FormalAvatar *const this,
        uint32_t exp,
        const ActionReason *reason,
        bool is_notify,
        uint32_t item_id,
        uint32_t item_count)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int32_t v9; // r14d
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  AvatarExcelConfigMgr *v13; // rcx
  __int64 v14; // rsi
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rdx
  uint32_t v18; // ecx
  uint32_t v19; // ecx
  __int64 v20; // rdx
  FormalAvatar *v21; // rdx
  unsigned __int64 v22; // rax
  FormalAvatar *v23; // rdx
  unsigned __int64 v24; // rax
  Player *v25; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rcx
  AvatarExcelConfigMgr *v33; // rcx
  proto_log::PlayerLogBodyAvatarAddExp *p_exp; // rdi
  uint32_t v35; // ecx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rcx
  int32_t result; // eax
  std::string v40; // [rsp+0h] [rbp-190h]
  uint32_t level; // [rsp+8h] [rbp-188h]
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // [rsp+8h] [rbp-188h]
  FetterComp *FetterComp; // [rsp+8h] [rbp-188h]
  std::initializer_list<data::FetterCondType> __l; // [rsp+30h] [rbp-160h] BYREF
  const data::AvatarLevelExcelConfig *level_config_ptr; // [rsp+40h] [rbp-150h]
  const data::AvatarLevelExcelConfig *new_level_config_ptr; // [rsp+48h] [rbp-148h]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+50h] [rbp-140h]
  const data::AvatarLevelExcelConfig *level_config_ptr_0; // [rsp+58h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v53; // [rsp+70h] [rbp-120h] BYREF
  common::milog::MiLogStream v54; // [rsp+80h] [rbp-110h] BYREF
  char v55[240]; // [rsp+A0h] [rbp-F0h] BYREF

  *(&v40._anon_0._M_allocated_capacity + 1) = (std::string::size_type)reason;
  HIDWORD(v40._anon_0._M_allocated_capacity) = item_id;
  *(_DWORD *)v40._anon_0._M_local_buf = item_count;
  v6 = (unsigned __int64)v55;
  v40._M_dataplus._M_p = v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 1 10 holder:284 64 16 14 player_ptr:274 96 16 19 add_exp_log_ptr:285 128 24 12 prop_vec:310";
  *(_QWORD *)(v6 + 16) = FormalAvatar::addExp;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -218103808;
  v8[536862725] = -202116109;
  if ( exp )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    LODWORD(__l._M_len) = this->level_;
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->exp_);
    }
    HIDWORD(__l._M_len) = this->exp_;
    this->exp_ += exp;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v53);
    p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    level_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig(p_avatar_config_mgr, this->level_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
    if ( level_config_ptr )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->exp_);
        }
        v12 = this->exp_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->exp);
        }
        if ( v12 < level_config_ptr->exp )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        level = this->level_;
        if ( level >= FormalAvatar::getMaxLevel(this) )
          break;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v53);
        v13 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.avatar_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        new_level_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig(v13, this->level_ + 1);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
        if ( !new_level_config_ptr )
        {
          v14 = (((_BYTE)level_config_ptr + 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&level_config_ptr->exp);
          }
          v15 = level_config_ptr->exp;
          v16 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
          LOBYTE(v14) = v16 != 0;
          v17 = (v16 != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= v16);
          if ( (_BYTE)v17 )
            __asan_report_store4(&this->exp_, v14, v17);
          this->exp_ = v15;
          break;
        }
        if ( FormalAvatar::upgradeLevel(this) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->exp_);
          }
          v18 = this->exp_;
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&level_config_ptr->exp);
          }
          if ( v18 >= level_config_ptr->exp )
            this->exp_ = level_config_ptr->exp;
          break;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->exp_);
        }
        v19 = this->exp_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->exp);
        }
        this->exp_ = v19 - level_config_ptr->exp;
        level_config_ptr = new_level_config_ptr;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      LODWORD(v40._M_string_length) = this->level_;
      if ( LODWORD(v40._M_string_length) >= FormalAvatar::getMaxLevel(this) )
      {
        v20 = (*(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000));
        if ( (_BYTE)v20 )
          __asan_report_store4(&this->exp_, (((_BYTE)this - 116) & 7u) + 3, v20);
        this->exp_ = 0;
      }
      v21 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v22 = *(_QWORD *)this->baseclass_0 + 152LL;
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        v22 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
      (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v22)(v6 + 64, v21);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v6 + 64), 0LL) )
      {
        HIDWORD(__l._M_array) = 0;
        v23 = this;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v24 = *(_QWORD *)this->baseclass_0 + 312LL;
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          v24 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 312LL);
        avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(FormalAvatar *))v24)(v23);
        if ( avatar_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->quality_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->quality_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&avatar_config_ptr->quality_type);
          }
          HIDWORD(__l._M_array) = avatar_config_ptr->quality_type;
        }
        v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
        BasicComp = Player::getBasicComp(v25);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v54, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 0x642u, v40);
        std::string::~string(&v54);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarAddExp>();
        v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->avatar_id_);
        }
        proto_log::PlayerLogBodyAvatarAddExp::set_avatar_id(v27, this->avatar_id_);
        v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        proto_log::PlayerLogBodyAvatarAddExp::set_avatar_quality(v28, HIDWORD(__l._M_array));
        v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        proto_log::PlayerLogBodyAvatarAddExp::set_level_before(v29, __l._M_len);
        v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        proto_log::PlayerLogBodyAvatarAddExp::set_level_after(v30, this->level_);
        v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        proto_log::PlayerLogBodyAvatarAddExp::set_exp_add(v31, exp);
        v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->exp_);
        }
        proto_log::PlayerLogBodyAvatarAddExp::set_exp_value(v32, this->exp_);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v53);
        v33 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v53)->design_config.txt_config_mgr.avatar_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        level_config_ptr_0 = data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig(v33, this->level_);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v53);
        if ( level_config_ptr_0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr_0->exp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr_0->exp >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&level_config_ptr_0->exp);
          }
          if ( level_config_ptr_0->exp )
          {
            p_exp = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
            {
              p_exp = (proto_log::PlayerLogBodyAvatarAddExp *)&this->exp_;
              __asan_report_load4(&this->exp_);
            }
            v35 = 100 * this->exp_;
            if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr_0->exp >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)level_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr_0->exp >> 3)
                                                                                + 0x7FFF8000) )
            {
              p_exp = (proto_log::PlayerLogBodyAvatarAddExp *)&level_config_ptr_0->exp;
              __asan_report_load4(&level_config_ptr_0->exp);
            }
            proto_log::PlayerLogBodyAvatarAddExp::set_exp_percent(p_exp, v35 / level_config_ptr_0->exp);
          }
        }
        v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        proto_log::PlayerLogBodyAvatarAddExp::set_use_material_id(v36, HIDWORD(v40._anon_0._M_allocated_capacity));
        v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        proto_log::PlayerLogBodyAvatarAddExp::set_use_material_num(v37, v40._anon_0._M_allocated_capacity);
        v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        if ( *(_BYTE *)((*(&v40._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((v40._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v40._anon_0._M_allocated_capacity + 1) >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(*(&v40._anon_0._M_allocated_capacity + 1));
        }
        proto_log::PlayerLogBodyAvatarAddExp::set_reason(v38, **((_DWORD **)&v40._anon_0._M_allocated_capacity + 1));
        v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v53, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarAddExp,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyAvatarAddExp> *)(v6 + 96));
        Player::printStatLog(v42, &p_body_ptr, &v53, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v53);
        std::shared_ptr<proto_log::PlayerLogBodyAvatarAddExp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarAddExp> *const)(v6 + 96));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      if ( LODWORD(__l._M_len) != this->level_ )
      {
        FetterComp = FormalAvatar::getFetterComp(this);
        LODWORD(__l._M_array) = 2;
        std::allocator<data::FetterCondType>::allocator((std::allocator<data::FetterCondType> *const)(v6 + 48));
        std::vector<data::FetterCondType>::vector(
          (std::vector<data::FetterCondType> *const)(v6 + 128),
          (std::initializer_list<data::FetterCondType>)__PAIR128__(1LL, &__l),
          (const std::vector<data::FetterCondType>::allocator_type *)(v6 + 48));
        FetterComp::checkRefreshFetterCompAndNotifyClient(
          FetterComp,
          (const std::vector<data::FetterCondType> *)(v6 + 128));
        std::vector<data::FetterCondType>::~vector((std::vector<data::FetterCondType> *const)(v6 + 128));
        std::allocator<data::FetterCondType>::~allocator((std::allocator<data::FetterCondType> *const)(v6 + 48));
      }
      if ( is_notify )
      {
        std::vector<data::PropType>::vector((std::vector<data::PropType> *const)(v6 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->exp_);
        }
        if ( HIDWORD(__l._M_len) != this->exp_ )
        {
          LODWORD(__l._M_array) = 1001;
          std::vector<data::PropType>::push_back(
            (std::vector<data::PropType> *const)(v6 + 128),
            (std::vector<data::PropType>::value_type *)&__l);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        if ( LODWORD(__l._M_len) != this->level_ )
        {
          LODWORD(__l._M_array) = 4001;
          std::vector<data::PropType>::push_back(
            (std::vector<data::PropType> *const)(v6 + 128),
            (std::vector<data::PropType>::value_type *)&__l);
        }
        if ( !std::vector<data::PropType>::empty((const std::vector<data::PropType> *const)(v6 + 128)) )
          Avatar::notifyAvatarProp(this, (const std::vector<data::PropType> *)(v6 + 128));
        std::vector<data::PropType>::~vector((std::vector<data::PropType> *const)(v6 + 128));
      }
      v9 = 0;
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v6 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/formal_avatar.cpp",
        "addExp",
        244);
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v54,
              (const char (*)[37])"findAvatarLevelConfig fails, level_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->level_);
      common::milog::MiLogStream::~MiLogStream(&v54);
      v9 = -1;
    }
  }
  else
  {
    v9 = 0;
  }
  result = v9;
  if ( v40._M_dataplus._M_p == (std::string::pointer)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 329: range 00000000161F0FBA-00000000161F10C5
uint32_t __cdecl FormalAvatar::getTotalExp(FormalAvatar *const this)
{
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  uint32_t total_exp; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v4[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  total_exp = AvatarExcelConfigMgr::getTotalExpToLevel(p_avatar_config_mgr, this->level_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->exp_);
  }
  return this->exp_ + total_exp;
};

// Line 336: range 00000000161F10C6-00000000161F15F1
void __fastcall FormalAvatar::setInitialLevelAndPromoteLevel(
        FormalAvatar *const this,
        uint32_t level,
        uint32_t promote_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rax
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::shared_ptr<Config> v22; // [rsp+10h] [rbp-F0h] BYREF
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-E0h] BYREF
  char v24[192]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 18 total_need_exp:346 48 4 17 cur_total_exp:347 64 4 9 level:335 80 4 17 promote_level:33"
                        "5 96 24 17 action_reason:348";
  *(_QWORD *)(v3 + 16) = FormalAvatar::setInitialLevelAndPromoteLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 64) = level;
  *(_DWORD *)(v3 + 80) = promote_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  if ( this->promote_level_ < *(_DWORD *)(v3 + 80)
    && FormalAvatar::internalUpgradePromoteLevel(this, *(_DWORD *)(v3 + 80) - this->promote_level_) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "setInitialLevelAndPromoteLevel",
      341);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v23,
           (const char (*)[49])"internalUpgradePromoteLevel fail. promote_level:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])" promote_level_:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->promote_level_);
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v9, this);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  if ( this->level_ < *(_DWORD *)(v3 + 64) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    *(_DWORD *)(v3 + 32) = AvatarExcelConfigMgr::getTotalExpToLevel(
                             &v10->design_config.txt_config_mgr.avatar_config_mgr,
                             *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v22);
    *(_DWORD *)(v3 + 48) = FormalAvatar::getTotalExp(this);
    ActionReason::ActionReason((ActionReason *const)(v3 + 96), ACTION_REASON_INIT_AVATAR, ITEM_LIMIT_UNLIMITED);
    if ( *(_DWORD *)(v3 + 32) < *(_DWORD *)(v3 + 48) )
      goto LABEL_18;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v11 = *(_QWORD *)this->baseclass_0 + 520LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 520LL);
    if ( (*(unsigned int (__fastcall **)(FormalAvatar *const, _QWORD, unsigned __int64, __int64, _QWORD, _QWORD))v11)(
           this,
           (unsigned int)(*(_DWORD *)(v3 + 32) - *(_DWORD *)(v3 + 48)),
           v3 + 96,
           1LL,
           0LL,
           0LL) )
    {
LABEL_18:
      v12 = 1;
    }
    else
    {
      v12 = 0;
    }
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/formal_avatar.cpp",
        "setInitialLevelAndPromoteLevel",
        351);
      v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v23, (const char (*)[7])"level:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
      v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])" total_need_exp:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" level_:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->level_);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])" cur_total_exp:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v20, this);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  if ( v24 == (char *)v3 )
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
};

// Line 358: range 00000000161F15F2-00000000161F1ED3
int32_t __cdecl FormalAvatar::upgradeLevel(FormalAvatar *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  FormalAvatar *v4; // rdx
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  Player *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  FormalAvatar *v15; // rdx
  unsigned __int64 v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  proto_log::AvatarLog *v21; // rax
  Player *v22; // r14
  unsigned int *v23; // r8
  unsigned int *v24; // r9
  Player *v25; // rax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::string v28; // [rsp+0h] [rbp-120h]
  FormalAvatar *thisa; // [rsp+8h] [rbp-118h]
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+18h] [rbp-108h]
  std::shared_ptr<google::protobuf::Message> v31; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+50h] [rbp-D0h] BYREF

  v28._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 1 10 holder:377 48 4 13 old_level:373 64 16 14 player_ptr:359 96 16 26 avatar_upgrade_log_p"
                        "tr:378 128 16 13 event_ptr:396";
  *(_QWORD *)(v1 + 16) = FormalAvatar::upgradeLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556927;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v5)(v1 + 64, v4);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "upgradeLevel",
      362);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v32, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v7 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    v28._anon_0._M_allocated_capacity = (std::string::size_type)data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig(
                                                                  p_avatar_config_mgr,
                                                                  this->level_ + 1);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v31);
    if ( v28._anon_0._M_allocated_capacity )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      *(_DWORD *)(v1 + 48) = this->level_;
      FormalAvatar::internalModifyLevel(this, this->level_ + 1);
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/avatar/formal_avatar.cpp",
        "upgradeLevel",
        375);
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v32,
              (const char (*)[23])"[LEVEL] upgrade level:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->level_);
      common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v11, this);
      common::milog::MiLogStream::~MiLogStream(&v32);
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      BasicComp = Player::getBasicComp(v12);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v32, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32), 0x643u, v28);
      std::string::~string(&v32);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarUpgrade>();
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->avatar_id_);
      }
      proto_log::PlayerLogBodyAvatarUpgrade::set_avatar_id(v14, thisa->avatar_id_);
      v15 = thisa;
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa);
      v16 = *(_QWORD *)thisa->baseclass_0 + 312LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8(*(_QWORD *)thisa->baseclass_0 + 312LL);
      avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(FormalAvatar *))v16)(v15);
      if ( avatar_config_ptr )
      {
        v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->quality_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->quality_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&avatar_config_ptr->quality_type);
        }
        proto_log::PlayerLogBodyAvatarUpgrade::set_avatar_quality(v17, avatar_config_ptr->quality_type);
      }
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      proto_log::PlayerLogBodyAvatarUpgrade::set_level_before(v18, *(_DWORD *)(v1 + 48));
      v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->level_);
      }
      proto_log::PlayerLogBodyAvatarUpgrade::set_level_after(v19, thisa->level_);
      v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgrade,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      v21 = proto_log::PlayerLogBodyAvatarUpgrade::mutable_avatar_log(v20);
      Avatar::getAvatarLog(thisa, v21);
      v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v31, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarUpgrade,void>(
        (std::shared_ptr<google::protobuf::Message> *const)(v1 + 128),
        (const std::shared_ptr<proto_log::PlayerLogBodyAvatarUpgrade> *)(v1 + 96));
      Player::printStatLog(v22, (MessagePtr *)(v1 + 128), &v31, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v1 + 128));
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v31);
      if ( Creature::getLifeState(thisa) == LIFE_ALIVE )
        Creature::setCurHpFull(thisa, 1);
      common::tools::perf::make_shared<AvatarLevelupEvent,unsigned int &,unsigned int &,unsigned int &>(
        (unsigned int *)&v31,
        &thisa->avatar_id_,
        &thisa->level_,
        (unsigned int *)(v1 + 48),
        v23,
        v24);
      std::shared_ptr<BaseEvent>::shared_ptr<AvatarLevelupEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v1 + 128),
        (std::shared_ptr<AvatarLevelupEvent> *)&v31);
      std::shared_ptr<AvatarLevelupEvent>::~shared_ptr((std::shared_ptr<AvatarLevelupEvent> *const)&v31);
      v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      EventComp = Player::getEventComp(v25);
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)&v31,
        (const std::shared_ptr<BaseEvent> *)(v1 + 128));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v31);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v31);
      v7 = 0;
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v1 + 128));
      std::shared_ptr<proto_log::PlayerLogBodyAvatarUpgrade>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarUpgrade> *const)(v1 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/formal_avatar.cpp",
        "upgradeLevel",
        369);
      v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v32,
             (const char (*)[37])"findAvatarLevelConfig fails, level_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->level_);
      common::milog::MiLogStream::~MiLogStream(&v32);
      v7 = -1;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  result = v7;
  if ( v33 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 403: range 00000000161F1ED4-00000000161F2589
__int64 __fastcall FormalAvatar::setLevelByGm(FormalAvatar *const this, uint32_t level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // ecx
  char v11; // dl
  FormalAvatar *v12; // rsi
  __int64 v13; // rdx
  FormalAvatar *v14; // rdx
  unsigned __int64 v15; // rax
  unsigned int *v16; // r8
  unsigned int *v17; // r9
  Player *v18; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  FetterComp *FetterComp; // [rsp+8h] [rbp-138h]
  std::allocator<data::FetterCondType> __a; // [rsp+2Fh] [rbp-111h] BYREF
  std::initializer_list<data::FetterCondType> __l; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-100h] BYREF
  std::vector<data::FetterCondType> fetter_cond_type_vec; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v26; // [rsp+70h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+90h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 old_level:404 48 4 9 level:402 64 16 14 player_ptr:422 96 16 13 event_ptr:425";
  *(_QWORD *)(v2 + 16) = FormalAvatar::setLevelByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = level;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  *(_DWORD *)(v2 + 32) = this->level_;
  HIDWORD(__l._M_array) = FormalAvatar::getMaxLevel(this);
  if ( HIDWORD(__l._M_array) < *(_DWORD *)(v2 + 48) )
    *(_DWORD *)(v2 + 48) = HIDWORD(__l._M_array);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  if ( this->level_ == *(_DWORD *)(v2 + 48) )
  {
    v5 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    __l._M_len = (std::initializer_list<data::FetterCondType>::size_type)data::AvatarExcelConfigMgrBase::findAvatarLevelExcelConfig(
                                                                           p_avatar_config_mgr,
                                                                           this->level_);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( __l._M_len )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/avatar/formal_avatar.cpp",
        "setLevelByGm",
        416);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v26,
             (const char (*)[19])"[LEVEL] set level:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      v12 = this;
      common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v9, this);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v10 = *(_DWORD *)(v2 + 48);
      v11 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v11 != 0;
      v13 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)this - 12) & 7) + 3) >= v11);
      if ( (_BYTE)v13 )
        __asan_report_store4(&this->level_, v12, v13);
      this->level_ = v10;
      Creature::setCurHpFull(this, 1);
      FetterComp = FormalAvatar::getFetterComp(this);
      LODWORD(__l._M_array) = 2;
      std::allocator<data::FetterCondType>::allocator(&__a);
      std::vector<data::FetterCondType>::vector(
        &fetter_cond_type_vec,
        (std::initializer_list<data::FetterCondType>)__PAIR128__(1LL, &__l),
        &__a);
      FetterComp::checkRefreshFetterCompAndNotifyClient(FetterComp, &fetter_cond_type_vec);
      std::vector<data::FetterCondType>::~vector(&fetter_cond_type_vec);
      std::allocator<data::FetterCondType>::~allocator(&__a);
      v14 = this;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v15 = *(_QWORD *)this->baseclass_0 + 152LL;
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
      (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v15)(v2 + 64, v14);
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
      {
        common::tools::perf::make_shared<AvatarLevelupEvent,unsigned int &,unsigned int &,unsigned int &>(
          (unsigned int *)&v24,
          &this->avatar_id_,
          &this->level_,
          (unsigned int *)(v2 + 32),
          v16,
          v17);
        std::shared_ptr<BaseEvent>::shared_ptr<AvatarLevelupEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v2 + 96),
          (std::shared_ptr<AvatarLevelupEvent> *)&v24);
        std::shared_ptr<AvatarLevelupEvent>::~shared_ptr((std::shared_ptr<AvatarLevelupEvent> *const)&v24);
        v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        EventComp = Player::getEventComp(v18);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)&v24,
          (const std::shared_ptr<BaseEvent> *)(v2 + 96));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v24);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v24);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 96));
      }
      v5 = 0;
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/formal_avatar.cpp",
        "setLevelByGm",
        413);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v26,
             (const char (*)[37])"findAvatarLevelConfig fails, level_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->level_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v5 = -1;
    }
  }
  result = v5;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 433: range 00000000161F258A-00000000161F2789
uint32_t __cdecl FormalAvatar::getMaxLevel(FormalAvatar *const this)
{
  const AvatarExcelConfigMgr *p_avatar_config_mgr; // rdi
  uint32_t promote_level; // edx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  data::ElementType InitElemType; // eax
  char *val; // [rsp+10h] [rbp-50h] BYREF
  const data::AvatarPromoteExcelConfig *avatar_promote_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.avatar_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    p_avatar_config_mgr = (const AvatarExcelConfigMgr *)&this->promote_level_;
    __asan_report_load4(&this->promote_level_);
  }
  promote_level = this->promote_level_;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_avatar_config_mgr = (const AvatarExcelConfigMgr *)&this->avatar_id_;
    __asan_report_load4(&this->avatar_id_);
  }
  avatar_promote_config_ptr = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(
                                p_avatar_config_mgr,
                                this->avatar_id_,
                                promote_level);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( avatar_promote_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_promote_config_ptr->unlock_max_level);
    }
    return avatar_promote_config_ptr->unlock_max_level;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/formal_avatar.cpp",
      "getMaxLevel",
      437);
    v3 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v12,
           (const char (*)[51])"findAvatarPromoteExcelConfig fails, promote_level:");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->promote_level_);
    v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v4, (const char (*)[15])" element_type:");
    InitElemType = Avatar::getInitElemType(this);
    val = (char *)data::enumValToStr(InitElemType);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v5, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    return 0;
  }
};

// Line 444: range 00000000161F278A-00000000161F3424
int32_t __cdecl FormalAvatar::checkUpgradePromoteLevel(FormalAvatar *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  FormalAvatar *v4; // rdx
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  uint32_t promote_level; // r14d
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  const AvatarExcelConfigMgr *p_promote_level; // rdi
  uint32_t v14; // edx
  common::milog::MiLogStream *v15; // rax
  uint32_t level; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  const AvatarExcelConfigMgr *p_avatar_id; // rdi
  uint32_t v21; // edx
  common::milog::MiLogStream *v22; // rax
  Player *v23; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t v25; // ecx
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  ItemParam *v32; // rax
  ItemParam *v33; // rax
  Player *v34; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-144h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  const data::AvatarPromoteExcelConfig *cur_avatar_promote_config_ptr; // [rsp+30h] [rbp-130h]
  const data::AvatarPromoteExcelConfig *avatar_promote_config_ptr; // [rsp+38h] [rbp-128h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+40h] [rbp-120h]
  const data::IdCountConfig *id_count_config; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v47; // [rsp+50h] [rbp-110h] BYREF
  char v48[240]; // [rsp+70h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 22 next_promote_level:471 64 16 14 player_ptr:445 96 16 13 del_param:499 128 24 17 del_param_vec:487";
  *(_QWORD *)(v1 + 16) = FormalAvatar::checkUpgradePromoteLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v5)(v1 + 64, v4);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "checkUpgradePromoteLevel",
      448);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v47, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v47);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->promote_level_);
    }
    promote_level = this->promote_level_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 96));
    p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.txt_config_mgr.avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->avatar_id_);
    }
    v10 = promote_level >= AvatarExcelConfigMgr::getAvatarMaxPromoteLevel(p_avatar_config_mgr, this->avatar_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/avatar/formal_avatar.cpp",
        "checkUpgradePromoteLevel",
        454);
      v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v47,
              (const char (*)[32])"avatar is on max promote level:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->promote_level_);
      common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v12, this);
      common::milog::MiLogStream::~MiLogStream(&v47);
      v7 = 111;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v1 + 96));
      p_promote_level = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.txt_config_mgr.avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3)
                                                             + 0x7FFF8000) )
      {
        p_promote_level = (const AvatarExcelConfigMgr *)&this->promote_level_;
        __asan_report_load4(&this->promote_level_);
      }
      v14 = this->promote_level_;
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_promote_level = (const AvatarExcelConfigMgr *)&this->avatar_id_;
        __asan_report_load4(&this->avatar_id_);
      }
      cur_avatar_promote_config_ptr = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(
                                        p_promote_level,
                                        this->avatar_id_,
                                        v14);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
      if ( cur_avatar_promote_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        level = this->level_;
        if ( *(_BYTE *)(((unsigned __int64)&cur_avatar_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cur_avatar_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cur_avatar_promote_config_ptr->unlock_max_level);
        }
        if ( level >= cur_avatar_promote_config_ptr->unlock_max_level )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->promote_level_);
          }
          *(_DWORD *)(v1 + 48) = this->promote_level_ + 1;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v1 + 96));
          p_avatar_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.txt_config_mgr.avatar_config_mgr;
          v21 = *(_DWORD *)(v1 + 48);
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            p_avatar_id = (const AvatarExcelConfigMgr *)&this->avatar_id_;
            __asan_report_load4(&this->avatar_id_);
          }
          avatar_promote_config_ptr = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(
                                        p_avatar_id,
                                        this->avatar_id_,
                                        v21);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
          if ( avatar_promote_config_ptr )
          {
            v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            BasicComp = Player::getBasicComp(v23);
            v25 = PlayerBasicComp::getLevel(BasicComp);
            if ( *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->required_player_level >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->required_player_level >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&avatar_promote_config_ptr->required_player_level);
            }
            if ( v25 >= avatar_promote_config_ptr->required_player_level )
            {
              std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v1 + 128));
              __for_range = &avatar_promote_config_ptr->cost_items;
              __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&avatar_promote_config_ptr->cost_items)._M_current;
              __for_end._M_current = std::vector<data::IdCountConfig>::end(&avatar_promote_config_ptr->cost_items)._M_current;
              while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                        &__for_begin,
                        &__for_end) )
              {
                id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
                *(_DWORD *)(v1 + 96) = 0;
                *(_DWORD *)(v1 + 100) = 0;
                *(_DWORD *)(v1 + 104) = 0;
                *(_DWORD *)(v1 + 108) = 0;
                if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&id_count_config->id);
                }
                *(_DWORD *)(v1 + 96) = id_count_config->id;
                if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4(&id_count_config->count);
                }
                *(_DWORD *)(v1 + 100) = id_count_config->count;
                v32 = std::move<ItemParam &>((ItemParam *)(v1 + 96));
                std::vector<ItemParam>::emplace_back<ItemParam>((std::vector<ItemParam> *const)(v1 + 128), v32, v32);
                __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
              }
              if ( *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->scoin_cost >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->scoin_cost >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&avatar_promote_config_ptr->scoin_cost);
              }
              if ( avatar_promote_config_ptr->scoin_cost )
              {
                *(_DWORD *)(v1 + 96) = 0;
                *(_DWORD *)(v1 + 100) = 0;
                *(_DWORD *)(v1 + 104) = 0;
                *(_DWORD *)(v1 + 108) = 0;
                *(_DWORD *)(v1 + 96) = 202;
                *(_DWORD *)(v1 + 100) = avatar_promote_config_ptr->scoin_cost;
                v33 = std::move<ItemParam &>((ItemParam *)(v1 + 96));
                std::vector<ItemParam>::emplace_back<ItemParam>((std::vector<ItemParam> *const)(v1 + 128), v33, v33);
              }
              v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              ItemComp = Player::getItemComp(v34);
              if ( PlayerItemComp::checkSubItemBatch(ItemComp, (const std::vector<ItemParam> *)(v1 + 128)) )
              {
                common::milog::MiLogStream::create(
                  &v47,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/avatar/formal_avatar.cpp",
                  "checkUpgradePromoteLevel",
                  507);
                v36 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v47,
                        (const char (*)[31])"checkSubItemBatch failed, uid:");
                v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
                val = Player::getUid(v37);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
                common::milog::MiLogStream::~MiLogStream(&v47);
                v7 = 609;
              }
              else
              {
                v7 = 0;
              }
              std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v1 + 128));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v47,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/avatar/formal_avatar.cpp",
                "checkUpgradePromoteLevel",
                482);
              v26 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v47,
                      (const char (*)[33])"player level not enough. avatar:");
              v27 = common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v26, this);
              v28 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      v27,
                      (const char (*)[21])" next_promote_level:");
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v28,
                      (const unsigned int *)(v1 + 48));
              v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])" player:");
              v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              operator<<(v30, v31);
              common::milog::MiLogStream::~MiLogStream(&v47);
              v7 = 117;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/avatar/formal_avatar.cpp",
              "checkUpgradePromoteLevel",
              475);
            v22 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v47,
                    (const char (*)[56])"findAvatarPromoteExcelConfig fails, next_promote_level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v47);
            v7 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/avatar/formal_avatar.cpp",
            "checkUpgradePromoteLevel",
            467);
          v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  &v47,
                  (const char (*)[14])"avatar level:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->level_);
          v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])off_25B990C0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v19,
            &cur_avatar_promote_config_ptr->unlock_max_level);
          common::milog::MiLogStream::~MiLogStream(&v47);
          v7 = 108;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/formal_avatar.cpp",
          "checkUpgradePromoteLevel",
          461);
        v15 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                &v47,
                (const char (*)[56])"findAvatarPromoteExcelConfig fails, next_promote_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->promote_level_);
        common::milog::MiLogStream::~MiLogStream(&v47);
        v7 = -1;
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
  result = v7;
  if ( v48 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 517: range 00000000161F3426-00000000161F3CA7
int32_t __cdecl FormalAvatar::upgradePromoteLevel(FormalAvatar *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  FormalAvatar *v4; // rdx
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  const AvatarExcelConfigMgr *p_avatar_config_mgr; // rdi
  uint32_t v9; // edx
  common::milog::MiLogStream *v10; // rax
  ItemParam *v11; // rax
  ItemParam *v12; // rax
  Player *v13; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned int *v17; // r8
  unsigned int *v18; // r9
  Player *v19; // rax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-174h]
  int32_t reta; // [rsp+1Ch] [rbp-174h]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  const data::AvatarPromoteExcelConfig *avatar_promote_config_ptr; // [rsp+28h] [rbp-168h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+30h] [rbp-160h]
  const data::IdCountConfig *id_count_config; // [rsp+38h] [rbp-158h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-150h] BYREF
  char v30[304]; // [rsp+60h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 4 22 next_promote_level:525 48 4 21 old_promote_level:560 64 8 10 reason:552 96 16 14 playe"
                        "r_ptr:518 128 16 13 event_ptr:565 160 16 13 del_param:537 192 24 17 del_param_vec:533";
  *(_QWORD *)(v1 + 16) = FormalAvatar::upgradePromoteLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v5 = *(_QWORD *)this->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
  (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v5)(v1 + 96, v4);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "upgradePromoteLevel",
      521);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v29, (const char (*)[19])"player_ptr is null");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v29);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->promote_level_);
    }
    *(_DWORD *)(v1 + 32) = this->promote_level_ + 1;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 160));
    p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160))->design_config.txt_config_mgr.avatar_config_mgr;
    v9 = *(_DWORD *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_avatar_config_mgr = (const AvatarExcelConfigMgr *)&this->avatar_id_;
      __asan_report_load4(&this->avatar_id_);
    }
    avatar_promote_config_ptr = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(
                                  p_avatar_config_mgr,
                                  this->avatar_id_,
                                  v9);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 160));
    if ( avatar_promote_config_ptr )
    {
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v1 + 192));
      __for_range = &avatar_promote_config_ptr->cost_items;
      __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&avatar_promote_config_ptr->cost_items)._M_current;
      *(std::vector<data::IdCountConfig>::const_iterator *)(v1 + 64) = std::vector<data::IdCountConfig>::end(&avatar_promote_config_ptr->cost_items);
      while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                &__for_begin,
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v1 + 64)) )
      {
        id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
        *(_DWORD *)(v1 + 160) = 0;
        *(_DWORD *)(v1 + 164) = 0;
        *(_DWORD *)(v1 + 168) = 0;
        *(_DWORD *)(v1 + 172) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&id_count_config->id);
        }
        *(_DWORD *)(v1 + 160) = id_count_config->id;
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&id_count_config->count);
        }
        *(_DWORD *)(v1 + 164) = id_count_config->count;
        v11 = std::move<ItemParam &>((ItemParam *)(v1 + 160));
        std::vector<ItemParam>::emplace_back<ItemParam>((std::vector<ItemParam> *const)(v1 + 192), v11, v11);
        __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->scoin_cost >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&avatar_promote_config_ptr->scoin_cost >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&avatar_promote_config_ptr->scoin_cost);
      }
      if ( avatar_promote_config_ptr->scoin_cost )
      {
        *(_DWORD *)(v1 + 160) = 0;
        *(_DWORD *)(v1 + 164) = 0;
        *(_DWORD *)(v1 + 168) = 0;
        *(_DWORD *)(v1 + 172) = 0;
        *(_DWORD *)(v1 + 160) = 202;
        *(_DWORD *)(v1 + 164) = avatar_promote_config_ptr->scoin_cost;
        v12 = std::move<ItemParam &>((ItemParam *)(v1 + 160));
        std::vector<ItemParam>::emplace_back<ItemParam>((std::vector<ItemParam> *const)(v1 + 192), v12, v12);
      }
      SubItemReason::SubItemReason((SubItemReason *const)(v1 + 64), ACTION_REASON_AVATAR_PROMOTE);
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      ItemComp = Player::getItemComp(v13);
      ret = PlayerItemComp::subItemBatch(
              ItemComp,
              (const std::vector<ItemParam> *)(v1 + 192),
              (const SubItemReason *)(v1 + 64));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/avatar/formal_avatar.cpp",
          "upgradePromoteLevel",
          556);
        v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v29,
                (const char (*)[26])"subItemBatch failed, uid:");
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        *(_DWORD *)(v1 + 48) = Player::getUid(v16);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v29);
        v7 = ret;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->promote_level_);
        }
        *(_DWORD *)(v1 + 48) = this->promote_level_;
        reta = FormalAvatar::internalUpgradePromoteLevel(this, 1u);
        if ( !reta )
        {
          common::tools::perf::make_shared<AvatarPromoteEvent,unsigned int &,unsigned int &,unsigned int &>(
            (unsigned int *)(v1 + 160),
            &this->avatar_id_,
            &this->promote_level_,
            (unsigned int *)(v1 + 48),
            v17,
            v18);
          std::shared_ptr<BaseEvent>::shared_ptr<AvatarPromoteEvent,void>(
            (std::shared_ptr<BaseEvent> *const)(v1 + 128),
            (std::shared_ptr<AvatarPromoteEvent> *)(v1 + 160));
          std::shared_ptr<AvatarPromoteEvent>::~shared_ptr((std::shared_ptr<AvatarPromoteEvent> *const)(v1 + 160));
          v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
          EventComp = Player::getEventComp(v19);
          std::shared_ptr<BaseEvent>::shared_ptr(
            (std::shared_ptr<BaseEvent> *const)(v1 + 160),
            (const std::shared_ptr<BaseEvent> *)(v1 + 128));
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v1 + 160));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v1 + 160));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v1 + 128));
        }
        v7 = reta;
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v1 + 192));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/formal_avatar.cpp",
        "upgradePromoteLevel",
        529);
      v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v29,
              (const char (*)[56])"findAvatarPromoteExcelConfig fails, next_promote_level:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v29);
      v7 = -1;
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
  result = v7;
  if ( v30 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 574: range 00000000161F3CA8-00000000161F4647
int32_t __cdecl FormalAvatar::internalUpgradePromoteLevel(FormalAvatar *const this, uint32_t add_promote_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  FormalAvatar *v7; // rdx
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rdx
  Player *v10; // rax
  PlayerBasicComp *BasicComp; // rax
  const AvatarExcelConfigMgr *p_avatar_config_mgr; // rdi
  uint32_t v13; // edx
  common::milog::MiLogStream *v14; // rax
  const AvatarExcelConfigMgr *p_avatar_id; // rdi
  uint32_t v16; // edx
  common::milog::MiLogStream *v17; // rax
  FightPropComp *FightPropComp; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  Player *v21; // rax
  TalentComp *TalentComp; // rax
  int32_t result; // eax
  std::string v24; // [rsp+0h] [rbp-150h]
  std::initializer_list<data::PropType> __l; // [rsp+10h] [rbp-140h]
  std::allocator<data::PropType> __a; // [rsp+3Bh] [rbp-115h] BYREF
  uint32_t promote_level_before; // [rsp+3Ch] [rbp-114h]
  const data::AvatarPromoteExcelConfig *avatar_promote_config_ptr_0; // [rsp+40h] [rbp-110h]
  const data::AvatarPromoteExcelConfig *avatar_promote_config_ptr; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v31; // [rsp+50h] [rbp-100h] BYREF
  std::vector<data::PropType> prop_type_vec; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v34;
  v24._M_dataplus._M_p = v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 10 holder:589 64 4 22 next_promote_level:591 80 4 17 promote_level:593 96 16 14 player_ptr:581";
  *(_QWORD *)(v2 + 16) = FormalAvatar::internalUpgradePromoteLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  if ( add_promote_level )
  {
    v7 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v8 = *(_QWORD *)this->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v8)(v2 + 96, v7);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/formal_avatar.cpp",
        "internalUpgradePromoteLevel",
        584);
      v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v33,
             (const char (*)[19])"player_ptr is null");
      common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v9, this);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->promote_level_);
      }
      promote_level_before = this->promote_level_;
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      BasicComp = Player::getBasicComp(v10);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v33, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x641u, v24);
      std::string::~string(&v33);
      if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->promote_level_);
      }
      *(_DWORD *)(v2 + 64) = this->promote_level_ + add_promote_level;
      for ( *(_DWORD *)(v2 + 80) = this->promote_level_ + 1;
            *(_DWORD *)(v2 + 80) <= *(_DWORD *)(v2 + 64);
            ++*(_DWORD *)(v2 + 80) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v31);
        p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.avatar_config_mgr;
        v13 = *(_DWORD *)(v2 + 80);
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          p_avatar_config_mgr = (const AvatarExcelConfigMgr *)&this->avatar_id_;
          __asan_report_load4(&this->avatar_id_);
        }
        avatar_promote_config_ptr_0 = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(
                                        p_avatar_config_mgr,
                                        this->avatar_id_,
                                        v13);
        std::shared_ptr<Config>::~shared_ptr(&v31);
        if ( !avatar_promote_config_ptr_0 )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/avatar/formal_avatar.cpp",
            "internalUpgradePromoteLevel",
            598);
          v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v33,
                  (const char (*)[51])"findAvatarPromoteExcelConfig fails, promote_level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v33);
          v6 = -1;
          goto LABEL_30;
        }
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      p_avatar_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.avatar_config_mgr;
      v16 = *(_DWORD *)(v2 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_avatar_id = (const AvatarExcelConfigMgr *)&this->avatar_id_;
        __asan_report_load4(&this->avatar_id_);
      }
      avatar_promote_config_ptr = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(p_avatar_id, this->avatar_id_, v16);
      std::shared_ptr<Config>::~shared_ptr(&v31);
      if ( avatar_promote_config_ptr )
      {
        FormalAvatar::internalModifyPromoteLevel(this, *(_DWORD *)(v2 + 64));
        FightPropComp = Creature::getFightPropComp(this);
        FightPropComp::flushModifiedProps(FightPropComp, 1);
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/avatar/formal_avatar.cpp",
          "internalUpgradePromoteLevel",
          611);
        v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v33,
                (const char (*)[31])"[LEVEL] upgrade promote_level:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->promote_level_);
        common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v20, this);
        common::milog::MiLogStream::~MiLogStream(&v33);
        if ( Creature::getLifeState(this) == LIFE_ALIVE )
          Creature::setCurHpFull(this, 1);
        *(_DWORD *)(v2 + 80) = 1002;
        __l._M_array = (std::initializer_list<data::PropType>::iterator)(v2 + 80);
        __l._M_len = 1LL;
        std::allocator<data::PropType>::allocator(&__a);
        std::vector<data::PropType>::vector(&prop_type_vec, __l, &__a);
        Avatar::notifyAvatarProp(this, &prop_type_vec);
        std::vector<data::PropType>::~vector(&prop_type_vec);
        std::allocator<data::PropType>::~allocator(&__a);
        v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        Avatar::logPlayerLogAvatarPromote(this, v21, promote_level_before);
        TalentComp = Avatar::getTalentComp(this);
        TalentComp::checkActiveProudSkill(TalentComp);
        __l._M_array = (std::initializer_list<data::PropType>::iterator)FormalAvatar::getFetterComp(this);
        *(_DWORD *)(v2 + 80) = 7;
        std::allocator<data::FetterCondType>::allocator((std::allocator<data::FetterCondType> *const)&__a);
        std::vector<data::FetterCondType>::vector(
          (std::vector<data::FetterCondType> *const)&prop_type_vec,
          (std::initializer_list<data::FetterCondType>)__PAIR128__(1LL, v2 + 80),
          (const std::vector<data::FetterCondType>::allocator_type *)&__a);
        FetterComp::checkRefreshFetterCompAndNotifyClient(
          (FetterComp *const)__l._M_array,
          (const std::vector<data::FetterCondType> *)&prop_type_vec);
        std::vector<data::FetterCondType>::~vector((std::vector<data::FetterCondType> *const)&prop_type_vec);
        std::allocator<data::FetterCondType>::~allocator((std::allocator<data::FetterCondType> *const)&__a);
        Avatar::internalCheckRefreshTeamResonance(this);
        v6 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/formal_avatar.cpp",
          "internalUpgradePromoteLevel",
          606);
        v17 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                &v33,
                (const char (*)[56])"findAvatarPromoteExcelConfig fails, next_promote_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v33);
        v6 = -1;
      }
LABEL_30:
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "internalUpgradePromoteLevel",
      577);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v33,
           (const char (*)[23])"add_promote_level is 0");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = -1;
  }
  result = v6;
  if ( v24._M_dataplus._M_p == (std::string::pointer)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 631: range 00000000161F4648-00000000161F4E7E
__int64 __fastcall FormalAvatar::setPromoteLevelByGm(FormalAvatar *const this, uint32_t promote_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  AvatarExcelConfigMgr *p_avatar_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const AvatarExcelConfigMgr *p_avatar_id; // rdi
  uint32_t v10; // edx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  data::ElementType InitElemType; // eax
  AvatarExcelConfigMgr *v15; // rcx
  uint32_t v16; // esi
  FormalAvatar *v17; // rdx
  unsigned __int64 v18; // rax
  TalentComp *TalentComp; // rax
  __int64 result; // rax
  bool v21; // [rsp+8h] [rbp-118h]
  std::initializer_list<data::PropType> __l; // [rsp+10h] [rbp-110h]
  FetterComp *__la; // [rsp+10h] [rbp-110h]
  std::allocator<data::PropType> __a; // [rsp+33h] [rbp-EDh] BYREF
  _DWORD v26[5]; // [rsp+34h] [rbp-ECh] BYREF
  char *val; // [rsp+48h] [rbp-D8h] BYREF
  std::vector<data::PropType> prop_type_vec; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 promote_level:630 64 16 14 player_ptr:661";
  *(_QWORD *)(v2 + 16) = FormalAvatar::setPromoteLevelByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = promote_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  if ( this->promote_level_ == *(_DWORD *)(v2 + 48) )
  {
    v5 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    p_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.avatar_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->avatar_id_);
    }
    v21 = AvatarExcelConfigMgr::getAvatarMaxPromoteLevel(p_avatar_config_mgr, this->avatar_id_) < *(_DWORD *)(v2 + 48);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    if ( v21 )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/avatar/formal_avatar.cpp",
        "setPromoteLevelByGm",
        636);
      v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v29,
             (const char (*)[23])"invliad promote_level:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v8, this);
      common::milog::MiLogStream::~MiLogStream(&v29);
      v5 = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 64));
      p_avatar_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.avatar_config_mgr;
      v10 = *(_DWORD *)(v2 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_avatar_id = (const AvatarExcelConfigMgr *)&this->avatar_id_;
        __asan_report_load4(&this->avatar_id_);
      }
      *(_QWORD *)&v26[1] = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(p_avatar_id, this->avatar_id_, v10);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
      if ( *(_QWORD *)&v26[1] )
      {
        FormalAvatar::internalModifyPromoteLevel(this, *(_DWORD *)(v2 + 48));
        if ( *(_DWORD *)(v2 + 48) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v2 + 64));
          v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.txt_config_mgr.avatar_config_mgr;
          v16 = *(_DWORD *)(v2 + 48) - 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->avatar_id_);
          }
          *(_QWORD *)&v26[3] = AvatarExcelConfigMgr::findAvatarPromoteExcelConfig(v15, this->avatar_id_, v16);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
          if ( *(_QWORD *)&v26[3] )
          {
            if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v26[3] + 80LL) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v26[3] + 80LL) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(*(_QWORD *)&v26[3] + 80LL);
            }
            FormalAvatar::internalModifyLevel(this, *(_DWORD *)(*(_QWORD *)&v26[3] + 80LL));
          }
        }
        else
        {
          FormalAvatar::internalModifyLevel(this, 0);
        }
        Creature::setCurHpFull(this, 1);
        val = (char *)0xFA1000003EALL;
        __l._M_array = (std::initializer_list<data::PropType>::iterator)&val;
        __l._M_len = 2LL;
        std::allocator<data::PropType>::allocator(&__a);
        std::vector<data::PropType>::vector(&prop_type_vec, __l, &__a);
        Avatar::notifyAvatarProp(this, &prop_type_vec);
        std::vector<data::PropType>::~vector(&prop_type_vec);
        std::allocator<data::PropType>::~allocator(&__a);
        v17 = this;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v18 = *(_QWORD *)this->baseclass_0 + 152LL;
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
        (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v18)(v2 + 64, v17);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
        {
          TalentComp = Avatar::getTalentComp(this);
          TalentComp::checkActiveProudSkill(TalentComp);
          Avatar::internalCheckRefreshTeamResonance(this);
        }
        __la = FormalAvatar::getFetterComp(this);
        v26[0] = 7;
        std::allocator<data::FetterCondType>::allocator((std::allocator<data::FetterCondType> *const)&__a);
        std::vector<data::FetterCondType>::vector(
          (std::vector<data::FetterCondType> *const)&prop_type_vec,
          (std::initializer_list<data::FetterCondType>)__PAIR128__(1LL, v26),
          (const std::vector<data::FetterCondType>::allocator_type *)&__a);
        FetterComp::checkRefreshFetterCompAndNotifyClient(
          __la,
          (const std::vector<data::FetterCondType> *)&prop_type_vec);
        std::vector<data::FetterCondType>::~vector((std::vector<data::FetterCondType> *const)&prop_type_vec);
        std::allocator<data::FetterCondType>::~allocator((std::allocator<data::FetterCondType> *const)&__a);
        v5 = 0;
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/formal_avatar.cpp",
          "setPromoteLevelByGm",
          643);
        v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v29,
                (const char (*)[43])"findAvatarPromoteExcelConfig fails, level:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" elem_type:");
        InitElemType = Avatar::getInitElemType(this);
        val = (char *)data::enumValToStr(InitElemType);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v5 = -1;
      }
    }
  }
  result = v5;
  if ( v30 == (char *)v2 )
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
  return result;
};

// Line 673: range 00000000161F4E80-00000000161F5130
int32_t __cdecl FormalAvatar::addWeaponExp(FormalAvatar *const this, uint32_t add_exp, bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  signed int EquipComp; // eax
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  FormalAvatar *v9; // rdx
  unsigned __int64 v10; // rax
  Weapon *v11; // rax
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 weapon_ptr:674 64 16 14 player_ptr:680";
  *(_QWORD *)(v3 + 16) = FormalAvatar::addWeaponExp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  EquipComp = (unsigned int)Avatar::getEquipComp(this);
  EquipComp::findEquip<Weapon>((EquipComp *const)(v3 + 32), (data::EquipType)EquipComp);
  if ( std::operator==<Weapon>((const std::shared_ptr<Weapon> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "addWeaponExp",
      677);
    v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v14,
           (const char (*)[27])"findWeapon failed, avatar:");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v7, this);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v8 = -1;
  }
  else
  {
    v9 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = *(_QWORD *)this->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(*(_QWORD *)this->baseclass_0 + 152LL);
    (*(void (__fastcall **)(unsigned __int64, FormalAvatar *))v10)(v3 + 64, v9);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
    {
      v11 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Weapon::addExp(v11, add_exp, is_notify);
    }
    v8 = 0;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v3 + 32));
  result = v8;
  if ( v15 == (char *)v3 )
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

// Line 691: range 00000000161F5132-00000000161F5351
void __cdecl FormalAvatar::internalModifyLevel(FormalAvatar *const this, uint32_t level)
{
  FightPropGuard *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t old_level; // [rsp+1Ch] [rbp-E4h]
  FightPropMap modified_fight_prop_map; // [rsp+20h] [rbp-E0h] BYREF
  char v7[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (FightPropGuard *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (FightPropGuard *)v3;
  }
  *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->creature_set_._M_t._M_impl._M_header._M_color = "1 48 48 20 fight_prop_guard:692";
  v2->creature_set_._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)FormalAvatar::internalModifyLevel;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  FightPropGuard::FightPropGuard(v2 + 1);
  FightPropGuard::addCreature(v2 + 1, this, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  old_level = this->level_;
  this->level_ = level;
  Creature::calcDeltaLevelProp(&modified_fight_prop_map, this, old_level, this->level_);
  FightPropComp::modifyProps(&this->fight_prop_comp_, &modified_fight_prop_map, 0);
  std::map<data::FightPropType,float>::~map(&modified_fight_prop_map);
  FightPropGuard::~FightPropGuard(v2 + 1);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 701: range 00000000161F5352-00000000161F5616
void __cdecl FormalAvatar::internalModifyPromoteLevel(FormalAvatar *const this, uint32_t promote_level)
{
  FightPropGuard *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  FormalAvatar *v5; // rcx
  uint32_t old_promote_level; // [rsp+1Ch] [rbp-E4h]
  FightPropMap modified_fight_prop_map; // [rsp+20h] [rbp-E0h] BYREF
  char v8[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (FightPropGuard *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (FightPropGuard *)v3;
  }
  *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->creature_set_._M_t._M_impl._M_header._M_color = "1 48 48 20 fight_prop_guard:702";
  v2->creature_set_._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)FormalAvatar::internalModifyPromoteLevel;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  FightPropGuard::FightPropGuard(v2 + 1);
  FightPropGuard::addCreature(v2 + 1, this, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  old_promote_level = this->promote_level_;
  this->promote_level_ = promote_level;
  Avatar::getPromoteProp(&modified_fight_prop_map, this, old_promote_level);
  FightPropComp::reduceProps(&this->fight_prop_comp_, &modified_fight_prop_map, 0);
  std::map<data::FightPropType,float>::~map(&modified_fight_prop_map);
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->promote_level_);
  }
  Avatar::getPromoteProp(&modified_fight_prop_map, v5, this->promote_level_);
  FightPropComp::modifyProps(&this->fight_prop_comp_, &modified_fight_prop_map, 0);
  std::map<data::FightPropType,float>::~map(&modified_fight_prop_map);
  FightPropGuard::~FightPropGuard(v2 + 1);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 712: range 00000000161F5618-00000000161F56F9
_BOOL8 __fastcall FormalAvatar::isHasTakenPromoteReward(FormalAvatar *const this, uint32_t promote_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 promote_level:711";
  *(_QWORD *)(v2 + 16) = FormalAvatar::isHasTakenPromoteReward;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = promote_level;
  result = common::tools::MiscUtils::isContains<unsigned int>(
             &this->taken_promote_reward_level_vec_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 722: range 00000000161F56FA-00000000161F58CA
void __fastcall FormalAvatar::recordTakenPromoteReward(FormalAvatar *const this, uint32_t promote_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 promote_level:721";
  *(_QWORD *)(v2 + 16) = FormalAvatar::recordTakenPromoteReward;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = promote_level;
  if ( FormalAvatar::isHasTakenPromoteReward(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "recordTakenPromoteReward",
      725);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v10,
           (const char (*)[42])"AvatarPromoteReward has taken, avatar_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->avatar_id_);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", guid:");
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &this->guid_);
    v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])", promote_level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    std::vector<unsigned int>::push_back(
      &this->taken_promote_reward_level_vec_,
      (const std::vector<unsigned int>::value_type *)(v2 + 32));
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 733: range 00000000161F58CC-00000000161F5B20
int32_t __cdecl FormalAvatar::toShowAvatarInfo(const FormalAvatar *const this, proto::ShowAvatarInfo *show_avatar_info)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *v8; // [rsp+18h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *comp_type; // [rsp+20h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *formal_avatar_comp_ptr; // [rsp+28h] [rbp-58h]
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __for_end; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  if ( Avatar::toShowAvatarInfo(this, show_avatar_info) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/avatar/formal_avatar.cpp",
      "toShowAvatarInfo",
      736);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v13,
      (const char (*)[32])"Avatar::toShowAvatarInfo failed");
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::begin((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_begin);
    EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::end((const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const)&__for_end);
    while ( EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v8 = EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(&__for_begin);
      comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v8);
      formal_avatar_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<FormalAvatarCompBase>>(v8);
      v3 = (unsigned __int64)std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatarCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)formal_avatar_comp_ptr);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8(v3);
      v4 = *(_QWORD *)v3 + 64LL;
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8(*(_QWORD *)v3 + 64LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::ShowAvatarInfo *))v4)(v3, show_avatar_info) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/avatar/formal_avatar.cpp",
          "toShowAvatarInfo",
          743);
        v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v13,
               (const char (*)[35])"toShowAvatarInfo fails comp_type: ");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, comp_type);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" formal_avatar:");
        common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v7, this);
        common::milog::MiLogStream::~MiLogStream(&v13);
        return -1;
      }
      EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 751: range 00000000161F5B22-00000000161F5B43
int32_t __cdecl FormalAvatar::initDefaultWearCostume(FormalAvatar *const this)
{
  FashionComp *FashionComp; // rax

  FashionComp = Avatar::getFashionComp(this);
  return FashionComp::initDefaultWearCostume(FashionComp);
};
