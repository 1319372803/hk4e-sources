// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/buff/buff.cpp

// Line 19: range 0000000015553BE8-0000000015553DB8
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const Buff *buff)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  bool v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  bool IsPermanent; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rbx
  bool IsPersistent; // al
  common::milog::MiLogStream *v22; // rax
  unsigned int val; // [rsp+14h] [rbp-2Ch] BYREF
  unsigned int BuffUid; // [rsp+18h] [rbp-28h] BYREF
  unsigned int BuffType; // [rsp+1Ch] [rbp-24h] BYREF
  unsigned int InstancedModifierId; // [rsp+20h] [rbp-20h] BYREF
  unsigned int LeftTimeMs; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned __int64 v29[3]; // [rsp+28h] [rbp-18h] BYREF

  v2 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(stream, (const char (*)[10])"[buff_id:");
  val = Buff::getBuffId(buff);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v3, (const char (*)[11])",buff_uid:");
  BuffUid = Buff::getBuffUid(buff);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &BuffUid);
  v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])",buff_type:");
  BuffType = Buff::getBuffType(buff);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &BuffType);
  v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         v7,
         (const char (*)[24])",instanced_modifier_id:");
  InstancedModifierId = Buff::getInstancedModifierId(buff);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &InstancedModifierId);
  v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])",expire_time_ms_:");
  v29[0] = Buff::getExpireTimeMs(buff);
  v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, v29);
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])",left_time_ms_:");
  LeftTimeMs = Buff::getLeftTimeMs(buff);
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &LeftTimeMs);
  v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])",from_team:");
  v15 = Buff::getFromTeam(buff);
  v16 = common::milog::MiLogStream::operator<<(v14, v15);
  v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])",is_permanent:");
  IsPermanent = Buff::getIsPermanent(buff);
  v19 = common::milog::MiLogStream::operator<<(v17, IsPermanent);
  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v19, (const char (*)[16])",is_persistent:");
  IsPersistent = Buff::getIsPersistent(buff);
  v22 = common::milog::MiLogStream::operator<<(v20, IsPersistent);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v22, (const char (*)[2])"]");
  return stream;
};

// Line 34: range 0000000015553DBA-0000000015554003
int32_t __cdecl Buff::init(Buff *const this)
{
  BuffExcelConfigMgr *p_buff_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  bool v4; // cl
  bool is_persistent; // cl
  const data::BuffExcelConfig *buff_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_buff_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.buff_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  buff_config_ptr = data::BuffExcelConfigMgrBase::findBuffExcelConfig(p_buff_config_mgr, this->buff_id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( buff_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)buff_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&buff_config_ptr->time);
    }
    v4 = buff_config_ptr->time < 0.0;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_permanent_);
    }
    this->is_permanent_ = v4;
    if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->is_persistent >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)buff_config_ptr + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->is_persistent >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load1(&buff_config_ptr->is_persistent);
    }
    is_persistent = buff_config_ptr->is_persistent;
    if ( *(char *)(((unsigned __int64)&this->is_persistent_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_persistent_);
    this->is_persistent_ = is_persistent;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/buff.cpp",
      "init",
      38);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v8,
           (const char (*)[36])"findBuffExcelConfig fails, buff_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->buff_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 48: range 0000000015554004-0000000015554176
uint32_t __cdecl Buff::getGroupId(const Buff *const this)
{
  BuffExcelConfigMgr *p_buff_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  const data::BuffExcelConfig *buff_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_buff_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.buff_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  buff_config_ptr = data::BuffExcelConfigMgrBase::findBuffExcelConfig(p_buff_config_mgr, this->buff_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( buff_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&buff_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&buff_config_ptr->group_id);
    }
    return buff_config_ptr->group_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/buff.cpp",
      "getGroupId",
      52);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v6,
           (const char (*)[36])"findBuffExcelConfig fails, buff_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->buff_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 60: range 0000000015554178-000000001555429A
int32_t __cdecl Buff::recover(Buff *const this, uint64_t player_time_ms)
{
  uint64_t v2; // rcx
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->left_time_ms_);
  }
  if ( this->left_time_ms_ )
  {
    v2 = this->left_time_ms_ + player_time_ms;
    if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->expire_time_ms_);
    this->expire_time_ms_ = v2;
    this->left_time_ms_ = 0;
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/buff/buff.cpp",
      "recover",
      66);
    v3 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v5, (const char (*)[15])"[BUFF] recover");
    operator<<(v3, this);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  return 0;
};

// Line 72: range 000000001555429C-00000000155543B4
int32_t __cdecl Buff::pause(Buff *const this, uint64_t player_time_ms)
{
  uint32_t LeftTime; // edx
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  LeftTime = Buff::getLeftTime(this, player_time_ms);
  if ( *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_time_ms_);
  }
  this->left_time_ms_ = LeftTime;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->expire_time_ms_);
  this->expire_time_ms_ = 0LL;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/buff/buff.cpp",
    "pause",
    75);
  v3 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v5, (const char (*)[13])"[BUFF] pause");
  operator<<(v3, this);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0;
};

// Line 81: range 00000000155543B6-0000000015554664
int32_t __cdecl Buff::fromBin(Buff *const this, const proto::AvatarBuffBin *buff_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // edx
  uint32_t v6; // ecx
  uint32_t v7; // edx
  int32_t result; // eax
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<long unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<long unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 14 avatar_guid:86";
  *(_QWORD *)(v2 + 16) = Buff::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_permanent_);
  }
  if ( this->is_permanent_ )
    v5 = -1;
  else
    v5 = proto::AvatarBuffBin::left_time(buff_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_time_ms_);
  }
  this->left_time_ms_ = v5;
  v6 = proto::AvatarBuffBin::buff_uid(buff_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->buff_uid_);
  }
  this->buff_uid_ = v6;
  v7 = proto::AvatarBuffBin::buff_type(buff_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_type_);
  }
  this->buff_type_ = v7;
  std::set<unsigned long>::clear(&this->onadded_avatars_set_);
  __for_range = proto::AvatarBuffBin::onadded_avatars_list(buff_bin);
  __for_begin = google::protobuf::RepeatedField<unsigned long>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned long>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      __asan_report_load8(__for_begin);
    *(_QWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned long>::insert(
      &this->onadded_avatars_set_,
      (const std::set<long unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  result = 0;
  if ( v12 == (char *)v2 )
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

// Line 95: range 0000000015554666-0000000015554939
int32_t __cdecl Buff::toBin(const Buff *const this, uint64_t player_time_ms, proto::AvatarBuffBin *buff_bin)
{
  common::milog::MiLogStream *v3; // rdx
  uint32_t LeftTime; // edx
  uint64_t *v6; // rax
  std::set<long unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  std::set<long unsigned int>::iterator __for_end; // [rsp+38h] [rbp-48h] BYREF
  const std::set<long unsigned int> *__for_range; // [rsp+40h] [rbp-40h]
  uint64_t avatar_guid; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+50h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_persistent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_persistent_);
  if ( !this->is_persistent_ )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/buff/buff.cpp",
      "toBin",
      98);
    v3 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v12,
           (const char (*)[32])"buff is not persistent.buff_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->buff_id_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_permanent_);
    }
    if ( !this->is_permanent_ )
    {
      LeftTime = Buff::getLeftTime(this, player_time_ms);
      proto::AvatarBuffBin::set_left_time(buff_bin, LeftTime);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->buff_uid_);
    }
    proto::AvatarBuffBin::set_buff_uid(buff_bin, this->buff_uid_);
    if ( *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->buff_type_);
    }
    proto::AvatarBuffBin::set_buff_type(buff_bin, this->buff_type_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    proto::AvatarBuffBin::set_buff_id(buff_bin, this->buff_id_);
    proto::AvatarBuffBin::clear_onadded_avatars_list(buff_bin);
    __for_range = &this->onadded_avatars_set_;
    __for_begin._M_node = std::set<unsigned long>::begin(&this->onadded_avatars_set_)._M_node;
    __for_end._M_node = std::set<unsigned long>::end(&this->onadded_avatars_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (uint64_t *)std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        v6 = (uint64_t *)__asan_report_load8(v6);
      avatar_guid = *v6;
      proto::AvatarBuffBin::add_onadded_avatars_list(buff_bin, avatar_guid);
      std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 119: range 000000001555493A-0000000015554A47
int32_t __cdecl Buff::toClient(const Buff *const this, proto::ServerBuff *proto_server_buff)
{
  uint32_t InstancedModifierId; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->buff_uid_);
  }
  proto::ServerBuff::set_server_buff_uid(proto_server_buff, this->buff_uid_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::ServerBuff::set_server_buff_id(proto_server_buff, this->buff_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->buff_type_);
  }
  proto::ServerBuff::set_server_buff_type(proto_server_buff, this->buff_type_);
  InstancedModifierId = Buff::getInstancedModifierId(this);
  proto::ServerBuff::set_instanced_modifier_id(proto_server_buff, InstancedModifierId);
  return 0;
};

// Line 129: range 0000000015554A48-0000000015554B84
int32_t __cdecl Buff::toClient(const Buff *const this, uint64_t avatar_guid, proto::ServerBuff *proto_server_buff)
{
  google::protobuf::uint32 ModifierIdByAvatarGuid; // edx
  bool isModifierAdded; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buff_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->buff_uid_);
  }
  proto::ServerBuff::set_server_buff_uid(proto_server_buff, this->buff_uid_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::ServerBuff::set_server_buff_id(proto_server_buff, this->buff_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->buff_type_);
  }
  proto::ServerBuff::set_server_buff_type(proto_server_buff, this->buff_type_);
  ModifierIdByAvatarGuid = Buff::getModifierIdByAvatarGuid(this, avatar_guid);
  proto::ServerBuff::set_instanced_modifier_id(proto_server_buff, ModifierIdByAvatarGuid);
  isModifierAdded = Buff::isModifierAdded(this, avatar_guid);
  proto::ServerBuff::set_is_modifier_added(proto_server_buff, isModifierAdded);
  return 0;
};

// Line 140: range 0000000015554B86-0000000015554D8D
__int64 __fastcall Buff::start(Buff *const this, uint32_t buff_time, uint64_t now_player_time_ms)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint64_t v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 22 now_player_time_ms:139";
  *(_QWORD *)(v3 + 16) = Buff::start;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = now_player_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_permanent_);
  }
  if ( this->is_permanent_ )
    buff_time = -1;
  v6 = buff_time + *(_QWORD *)(v3 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->expire_time_ms_);
  this->expire_time_ms_ = v6;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/buff/buff.cpp",
    "start",
    146);
  v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         &v13,
         (const char (*)[27])"[BUFF] now_player_time_ms:");
  v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" start:");
  operator<<(v9, this);
  common::milog::MiLogStream::~MiLogStream(&v13);
  result = 0LL;
  if ( v14 == (char *)v3 )
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

// Line 152: range 0000000015554D8E-0000000015554FDB
int32_t __cdecl Buff::extend(Buff *const this, uint32_t buff_time)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_permanent_);
  }
  if ( this->is_permanent_ )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/buff.cpp",
      "extend",
      156);
    v2 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v6,
           (const char (*)[39])"permanent buff cannot extend, buff_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->buff_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->expire_time_ms_);
    if ( this->expire_time_ms_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->expire_time_ms_);
      this->expire_time_ms_ += buff_time;
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/buff/buff.cpp",
        "extend",
        165);
      v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v6, (const char (*)[14])"[BUFF] extend");
      operator<<(v5, this);
      common::milog::MiLogStream::~MiLogStream(&v6);
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/buff.cpp",
        "extend",
        161);
      v4 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v6,
             (const char (*)[30])"buff is not started, buff_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->buff_id_);
      common::milog::MiLogStream::~MiLogStream(&v6);
      return -1;
    }
  }
};

// Line 171: range 0000000015554FDC-00000000155550E6
bool __cdecl Buff::isExpired(const Buff *const this, uint64_t player_time_ms)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_permanent_);
  }
  if ( this->is_permanent_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->expire_time_ms_);
  if ( !this->expire_time_ms_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->left_time_ms_);
    }
    if ( this->left_time_ms_ )
      return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->expire_time_ms_);
  return player_time_ms >= this->expire_time_ms_;
};

// Line 187: range 00000000155550E8-0000000015555201
uint32_t __cdecl Buff::getLeftTime(const Buff *const this, uint64_t player_time_ms)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 37) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_permanent_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_permanent_);
  }
  if ( this->is_permanent_ )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->expire_time_ms_);
  if ( this->expire_time_ms_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->expire_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->expire_time_ms_);
    if ( player_time_ms >= this->expire_time_ms_ )
      return 0;
    else
      return this->expire_time_ms_ - player_time_ms;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->left_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->left_time_ms_);
    }
    return this->left_time_ms_;
  }
};

// Line 204: range 0000000015555202-00000000155552D5
void __fastcall Buff::addOnAddedAvatar(Buff *const this, uint64_t avatar_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 15 avatar_guid:203";
  *(_QWORD *)(v2 + 16) = Buff::addOnAddedAvatar;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = avatar_guid;
  std::set<unsigned long>::insert(
    &this->onadded_avatars_set_,
    (const std::set<long unsigned int>::value_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 209: range 00000000155552D6-00000000155553AB
__int64 __fastcall Buff::isModifierAdded(const Buff *const this, uint64_t avatar_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // eax
  __int64 result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 15 avatar_guid:208";
  *(_QWORD *)(v2 + 16) = Buff::isModifierAdded;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = avatar_guid;
  LOBYTE(v5) = common::tools::MiscUtils::isContains<std::set<unsigned long> const,unsigned long>(
                 &this->onadded_avatars_set_,
                 (const unsigned __int64 *)(v2 + 32));
  result = v5 ^ 1u;
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

// Line 214: range 00000000155553AC-000000001555547F
void __fastcall Buff::recordModifierAdded(Buff *const this, uint64_t avatar_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 15 avatar_guid:213";
  *(_QWORD *)(v2 + 16) = Buff::recordModifierAdded;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = avatar_guid;
  std::set<unsigned long>::erase(&this->onadded_avatars_set_, (const std::set<long unsigned int>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
