// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_share_cd_comp.cpp

// Line 22: range 00000000179B8314-00000000179B843D
void __cdecl ShareCDInfo::fromBin(ShareCDInfo *const this, const proto::ShareCDInfoBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  uint64_t use_time; // rax
  __int64 v8; // rdx
  char v9; // al
  const proto::ShareCDInfoBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::ShareCDInfoBin::share_cd_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->share_cd_id = v2;
  v4 = proto::ShareCDInfoBin::config_index(bina);
  v5 = *(_BYTE *)(((unsigned __int64)&this->config_index >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->config_index, bin, v6);
  this->config_index = v4;
  use_time = proto::ShareCDInfoBin::last_use_time(bina);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_use_time >> 3) + 0x7FFF8000) )
    use_time = __asan_report_store8(&this->last_use_time, bin);
  this->last_use_time = use_time;
  v8 = proto::ShareCDInfoBin::cd_token(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->cd_token >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(bin) = v9 != 0;
    __asan_report_store4(&this->cd_token, bin, v8);
  }
  this->cd_token = v8;
};

// Line 30: range 00000000179B843E-00000000179B8567
void __cdecl ShareCDInfo::toBin(const ShareCDInfo *const this, proto::ShareCDInfoBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::ShareCDInfoBin::set_share_cd_id(bin, this->share_cd_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->config_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_index);
  }
  proto::ShareCDInfoBin::set_config_index(bin, this->config_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_use_time >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::ShareCDInfoBin::set_last_use_time(bin, this->last_use_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_token >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_token >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cd_token);
  }
  proto::ShareCDInfoBin::set_cd_token(bin, this->cd_token);
};

// Line 45: range 00000000179B8568-00000000179B863B
int32_t __cdecl PlayerShareCDComp::fromBin(PlayerShareCDComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  const proto::PlayerShareCDCompBin *proto_comp_bin; // [rsp+10h] [rbp-60h]
  const google::protobuf::Map<unsigned int,proto::ShareCDInfoBin> *__for_range; // [rsp+18h] [rbp-58h]
  google::protobuf::Map<unsigned int,proto::ShareCDInfoBin>::const_reference p_share_cd_id; // [rsp+20h] [rbp-50h]
  std::map<unsigned int,ShareCDInfo>::mapped_type *info; // [rsp+28h] [rbp-48h]
  google::protobuf::Map<unsigned int,proto::ShareCDInfoBin>::const_iterator __for_begin; // [rsp+30h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,proto::ShareCDInfoBin>::const_iterator __for_end; // [rsp+50h] [rbp-20h] BYREF

  proto_comp_bin = proto::PlayerDataBin::share_cd_bin(player_data_bin);
  std::map<unsigned int,ShareCDInfo>::clear(&this->share_cd_info_map_);
  __for_range = proto::PlayerShareCDCompBin::share_cd_info_map(proto_comp_bin);
  google::protobuf::Map<unsigned int,proto::ShareCDInfoBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::ShareCDInfoBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_share_cd_id = google::protobuf::Map<unsigned int,proto::ShareCDInfoBin>::const_iterator::operator*(&__for_begin);
    info = std::map<unsigned int,ShareCDInfo>::operator[](&this->share_cd_info_map_, &p_share_cd_id->first);
    ShareCDInfo::fromBin(info, &p_share_cd_id->second);
    google::protobuf::Map<unsigned int,proto::ShareCDInfoBin>::const_iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 58: range 00000000179B863C-00000000179B871D
int32_t __cdecl PlayerShareCDComp::toBin(PlayerShareCDComp *const this, proto::PlayerDataBin *player_data_bin)
{
  std::map<unsigned int,ShareCDInfo>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,ShareCDInfo>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::PlayerShareCDCompBin *proto_comp_bin; // [rsp+28h] [rbp-38h]
  google::protobuf::Map<unsigned int,proto::ShareCDInfoBin> *share_cd_info_map_bin; // [rsp+30h] [rbp-30h]
  std::map<unsigned int,ShareCDInfo> *__for_range; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,ShareCDInfo> *v8; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,ShareCDInfo> >::type *share_cd_id; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,ShareCDInfo> >::type *share_cd_info; // [rsp+50h] [rbp-10h]
  proto::ShareCDInfoBin *info_bin; // [rsp+58h] [rbp-8h]

  proto_comp_bin = proto::PlayerDataBin::mutable_share_cd_bin(player_data_bin);
  share_cd_info_map_bin = proto::PlayerShareCDCompBin::mutable_share_cd_info_map(proto_comp_bin);
  __for_range = &this->share_cd_info_map_;
  __for_begin._M_node = std::map<unsigned int,ShareCDInfo>::begin(&this->share_cd_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ShareCDInfo>::end(&this->share_cd_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,ShareCDInfo>>::operator*(&__for_begin);
    share_cd_id = std::get<0ul,unsigned int const,ShareCDInfo>(v8);
    share_cd_info = (std::tuple_element<1,const std::pair<unsigned int const,ShareCDInfo> >::type *)std::get<1ul,unsigned int const,ShareCDInfo>(v8);
    info_bin = google::protobuf::Map<unsigned int,proto::ShareCDInfoBin>::operator[](share_cd_info_map_bin, share_cd_id);
    ShareCDInfo::toBin(share_cd_info, info_bin);
    std::_Rb_tree_iterator<std::pair<unsigned int const,ShareCDInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 70: range 00000000179B871E-00000000179B8CC9
int32_t __cdecl PlayerShareCDComp::notifyAllData(PlayerShareCDComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ShareCDExcelConfigMgr *p_share_cd_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::vector<data::CoolDownInfo>::size_type config_index; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  std::map<unsigned int,ShareCDInfo>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,ShareCDInfo>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  google::protobuf::Map<unsigned int,proto::ShareCDInfo> *share_cd_info_map; // [rsp+28h] [rbp-138h]
  std::map<unsigned int,ShareCDInfo> *__for_range; // [rsp+30h] [rbp-130h]
  const std::pair<unsigned int const,ShareCDInfo> *v16; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,ShareCDInfo> >::type *share_cd_id; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,ShareCDInfo> >::type *share_cd_data; // [rsp+48h] [rbp-118h]
  const data::ShareCDExcelConfig *share_cd_config_ptr; // [rsp+50h] [rbp-110h]
  proto::ShareCDInfo *proto_info; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v21; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+70h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+90h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 96 9 notify:71";
  *(_QWORD *)(v1 + 16) = PlayerShareCDComp::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450896) = -202116109;
  proto::AllShareCDDataNotify::AllShareCDDataNotify((proto::AllShareCDDataNotify *const)(v1 + 32));
  share_cd_info_map = proto::AllShareCDDataNotify::mutable_share_cd_info_map((proto::AllShareCDDataNotify *const)(v1 + 32));
  __for_range = &this->share_cd_info_map_;
  __for_begin._M_node = std::map<unsigned int,ShareCDInfo>::begin(&this->share_cd_info_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ShareCDInfo>::end(&this->share_cd_info_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,ShareCDInfo>>::operator*(&__for_begin);
    share_cd_id = std::get<0ul,unsigned int const,ShareCDInfo>(v16);
    share_cd_data = (std::tuple_element<1,const std::pair<unsigned int const,ShareCDInfo> >::type *)std::get<1ul,unsigned int const,ShareCDInfo>(v16);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    p_share_cd_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.share_cd_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)share_cd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)share_cd_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)share_cd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(share_cd_id);
    }
    share_cd_config_ptr = data::ShareCDExcelConfigMgrBase::findShareCDExcelConfig(p_share_cd_config_mgr, *share_cd_id);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( !share_cd_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_share_cd_comp.cpp",
        "notifyAllData",
        79);
      v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v22,
             (const char (*)[43])"findShareCDExcelConfig fails, share_cd_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, share_cd_id);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v6 = 11101;
      goto LABEL_24;
    }
    if ( *(_BYTE *)(((unsigned __int64)&share_cd_data->config_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)share_cd_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&share_cd_data->config_index >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&share_cd_data->config_index);
    }
    config_index = share_cd_data->config_index;
    if ( config_index >= std::vector<data::CoolDownInfo>::size(&share_cd_config_ptr->cool_down_list) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_share_cd_comp.cpp",
        "notifyAllData",
        85);
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v22,
             (const char (*)[36])"shareCD index invalid, share_cd_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, share_cd_id);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])", index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &share_cd_data->config_index);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v6 = 11102;
      goto LABEL_24;
    }
    proto_info = google::protobuf::Map<unsigned int,proto::ShareCDInfo>::operator[](share_cd_info_map, share_cd_id);
    if ( *(_BYTE *)(((unsigned __int64)share_cd_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)share_cd_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)share_cd_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(share_cd_id);
    }
    proto::ShareCDInfo::set_share_cd_id(proto_info, *share_cd_id);
    if ( *(_BYTE *)(((unsigned __int64)&share_cd_data->last_use_time >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    proto::ShareCDInfo::set_cd_start_time(proto_info, share_cd_data->last_use_time);
    if ( *(_BYTE *)(((unsigned __int64)&share_cd_data->config_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)share_cd_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&share_cd_data->config_index >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&share_cd_data->config_index);
    }
    proto::ShareCDInfo::set_index(proto_info, share_cd_data->config_index);
    std::_Rb_tree_iterator<std::pair<unsigned int const,ShareCDInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  v6 = 0;
LABEL_24:
  proto::AllShareCDDataNotify::~AllShareCDDataNotify((proto::AllShareCDDataNotify *const)(v1 + 32));
  result = v6;
  if ( v23 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
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

// Line 100: range 00000000179B8CCA-00000000179B8D39
int32_t __cdecl PlayerShareCDComp::onLogin(PlayerShareCDComp *const this, bool is_new_player)
{
  void (__fastcall **v2)(PlayerShareCDComp *const); // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (void (__fastcall **)(PlayerShareCDComp *const))(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  (*v2)(this);
  return 0;
};

// Line 107: range 00000000179B8D3A-00000000179B8DA9
void __cdecl PlayerShareCDComp::onEnterScene(PlayerShareCDComp *const this, ScenePtr *p_scene_ptr, bool is_reenter)
{
  void (__fastcall **v3)(PlayerShareCDComp *const); // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (void (__fastcall **)(PlayerShareCDComp *const))(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  (*v3)(this);
};

// Line 113: range 00000000179B8DAA-00000000179B93DF
__int64 __fastcall PlayerShareCDComp::updateShareCD(
        PlayerShareCDComp *const this,
        uint32_t share_cd_id,
        uint32_t index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::vector<data::CoolDownInfo>::size_type v9; // r15
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  char *v14; // rsi
  uint32_t v15; // ecx
  char v16; // al
  uint32_t v17; // ecx
  char v18; // dl
  __int64 v19; // rdx
  uint64_t v20; // rdx
  std::vector<data::CoolDownInfo>::size_type v21; // rsi
  std::vector<data::CoolDownInfo>::const_reference v22; // rdx
  uint32_t *p_token; // rax
  uint32_t token; // ecx
  char v25; // al
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  const data::ShareCDExcelConfig *share_cd_config_ptr; // [rsp+10h] [rbp-D0h]
  ShareCDInfo *share_cd_info; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v34; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v35; // [rsp+30h] [rbp-B0h] BYREF
  char v36[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 share_cd_id:112 48 4 9 index:112 64 8 15 cur_time_ms:114";
  *(_QWORD *)(v3 + 16) = PlayerShareCDComp::updateShareCD;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = share_cd_id;
  *(_DWORD *)(v3 + 48) = index;
  *(_QWORD *)(v3 + 64) = common::tools::TimeUtils::getNowMs();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  share_cd_config_ptr = data::ShareCDExcelConfigMgrBase::findShareCDExcelConfig(
                          &v6->design_config.txt_config_mgr.share_cd_config_mgr,
                          *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( share_cd_config_ptr )
  {
    v9 = *(unsigned int *)(v3 + 48);
    if ( v9 < std::vector<data::CoolDownInfo>::size(&share_cd_config_ptr->cool_down_list) )
    {
      if ( *(char *)(((unsigned __int64)&share_cd_config_ptr->is_use_real_time >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&share_cd_config_ptr->is_use_real_time);
      if ( !share_cd_config_ptr->is_use_real_time )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        *(_QWORD *)(v3 + 64) = PlayerBasicComp::getPlayerTimeMs(BasicComp);
      }
      v14 = (char *)(v3 + 32);
      share_cd_info = std::map<unsigned int,ShareCDInfo>::operator[](
                        &this->share_cd_info_map_,
                        (const std::map<unsigned int,ShareCDInfo>::key_type *)(v3 + 32));
      v15 = *(_DWORD *)(v3 + 32);
      v16 = *(_BYTE *)(((unsigned __int64)share_cd_info >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v14) = v16 != 0;
        __asan_report_store4(share_cd_info, v14, share_cd_info);
      }
      share_cd_info->share_cd_id = v15;
      v17 = *(_DWORD *)(v3 + 48);
      v18 = *(_BYTE *)(((unsigned __int64)&share_cd_info->config_index >> 3) + 0x7FFF8000);
      LOBYTE(v14) = v18 != 0;
      v19 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)share_cd_info + 4) & 7) + 3) >= v18);
      if ( (_BYTE)v19 )
        __asan_report_store4(&share_cd_info->config_index, v14, v19);
      share_cd_info->config_index = v17;
      v20 = *(_QWORD *)(v3 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&share_cd_info->last_use_time >> 3) + 0x7FFF8000) )
        __asan_report_store8(&share_cd_info->last_use_time, v14);
      share_cd_info->last_use_time = v20;
      v21 = *(unsigned int *)(v3 + 48);
      v22 = std::vector<data::CoolDownInfo>::operator[](&share_cd_config_ptr->cool_down_list, v21);
      p_token = &v22->token;
      if ( *(_BYTE *)(((unsigned __int64)p_token >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_token & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_token >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_token);
      }
      token = v22->token;
      v25 = *(_BYTE *)(((unsigned __int64)&share_cd_info->cd_token >> 3) + 0x7FFF8000);
      if ( v25 != 0 && v25 <= 3 )
      {
        LOBYTE(v21) = v25 != 0;
        __asan_report_store4(&share_cd_info->cd_token, v21, &share_cd_info->cd_token);
      }
      share_cd_info->cd_token = token;
      if ( *(_BYTE *)(((unsigned __int64)&share_cd_config_ptr->is_use_external_system >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)share_cd_config_ptr + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&share_cd_config_ptr->is_use_external_system >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load1(&share_cd_config_ptr->is_use_external_system);
      }
      if ( share_cd_config_ptr->is_use_external_system )
        PlayerShareCDComp::sendShareCDNotify(this, *(_DWORD *)(v3 + 32), *(_QWORD *)(v3 + 64), *(_DWORD *)(v3 + 48));
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_share_cd_comp.cpp",
        "updateShareCD",
        146);
      v26 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v35,
              (const char (*)[28])"updateShareCD, share_cd_id:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 32));
      v28 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v27, (const char (*)[17])", last_use_time:");
      v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v28,
              (const unsigned __int64 *)(v3 + 64));
      v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])", index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v35);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_share_cd_comp.cpp",
        "updateShareCD",
        124);
      v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v35,
              (const char (*)[36])"shareCD index invalid, share_cd_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])", index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v35);
      result = 11102LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_share_cd_comp.cpp",
      "updateShareCD",
      119);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v35,
           (const char (*)[43])"findShareCDExcelConfig fails, share_cd_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = 11101LL;
  }
  if ( v36 == (char *)v3 )
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

// Line 151: range 00000000179B93E0-00000000179B9CAE
__int64 __fastcall PlayerShareCDComp::checkShareCD(const PlayerShareCDComp *const this, uint32_t share_cd_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,ShareCDInfo> >::pointer v9; // rax
  uint32_t *p_config_index; // rax
  std::vector<data::CoolDownInfo>::size_type config_index; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<data::CoolDownInfo> *p_cool_down_list; // rcx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint64_t last_use_time; // rcx
  float v22; // xmm0_4
  unsigned __int64 v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,ShareCDInfo> >::_Base_ptr M_node; // [rsp+18h] [rbp-E8h] BYREF
  const data::ShareCDExcelConfig *share_cd_config_ptr; // [rsp+20h] [rbp-E0h]
  const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ShareCDInfo> > *iter; // [rsp+28h] [rbp-D8h]
  const ShareCDInfo *share_cd_info; // [rsp+30h] [rbp-D0h]
  const data::CoolDownInfo *info; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v38; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-B0h] BYREF
  char v40[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 buffer_ms:189 48 4 15 share_cd_id:150 64 8 15 cur_time_ms:179";
  *(_QWORD *)(v2 + 16) = PlayerShareCDComp::checkShareCD;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = share_cd_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
  share_cd_config_ptr = data::ShareCDExcelConfigMgrBase::findShareCDExcelConfig(
                          &v5->design_config.txt_config_mgr.share_cd_config_mgr,
                          *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v38);
  if ( !share_cd_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_share_cd_comp.cpp",
      "checkShareCD",
      156);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v39,
           (const char (*)[43])"findShareCDExcelConfig fails, share_cd_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 11101LL;
    goto LABEL_38;
  }
  M_node = std::map<unsigned int,ShareCDInfo>::find(
             &this->share_cd_info_map_,
             (const std::map<unsigned int,ShareCDInfo>::key_type *)(v2 + 48))._M_node;
  iter = (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ShareCDInfo> > *)&M_node;
  *(std::map<unsigned int,ShareCDInfo>::const_iterator *)(v2 + 64) = std::map<unsigned int,ShareCDInfo>::end(&this->share_cd_info_map_);
  if ( std::operator==(
         iter,
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ShareCDInfo> >::_Self *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_share_cd_comp.cpp",
      "checkShareCD",
      164);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v39,
           (const char (*)[26])"first check, share_cd_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0LL;
    goto LABEL_38;
  }
  v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ShareCDInfo>>::operator->(iter);
  share_cd_info = &v9->second;
  p_config_index = &v9->second.config_index;
  if ( *(_BYTE *)(((unsigned __int64)p_config_index >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_config_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_config_index >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(p_config_index);
  }
  config_index = share_cd_info->config_index;
  if ( config_index >= std::vector<data::CoolDownInfo>::size(&share_cd_config_ptr->cool_down_list) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_share_cd_comp.cpp",
      "checkShareCD",
      171);
    v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v39,
            (const char (*)[36])"shareCD index invalid, share_cd_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])", index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &share_cd_info->config_index);
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 11102LL;
    goto LABEL_38;
  }
  p_cool_down_list = &share_cd_config_ptr->cool_down_list;
  if ( *(_BYTE *)(((unsigned __int64)&share_cd_info->config_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)share_cd_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&share_cd_info->config_index >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&share_cd_info->config_index);
  }
  info = std::vector<data::CoolDownInfo>::operator[](p_cool_down_list, share_cd_info->config_index);
  *(_QWORD *)(v2 + 64) = common::tools::TimeUtils::getNowMs();
  if ( *(char *)(((unsigned __int64)&share_cd_config_ptr->is_use_real_time >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&share_cd_config_ptr->is_use_real_time);
  if ( !share_cd_config_ptr->is_use_real_time )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    *(_QWORD *)(v2 + 64) = PlayerBasicComp::getPlayerTimeMs(BasicComp);
  }
  if ( *(_BYTE *)(((unsigned __int64)&share_cd_config_ptr->is_use_external_system >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)share_cd_config_ptr + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&share_cd_config_ptr->is_use_external_system >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load1(&share_cd_config_ptr->is_use_external_system);
  }
  if ( !share_cd_config_ptr->is_use_external_system )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
    *(_DWORD *)(v2 + 32) = ConstValueExcelConfigMgr::getShareCDServerBufferTime(&v17->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v38);
    if ( (unsigned __int64)*(unsigned int *)(v2 + 32) > *(_QWORD *)(v2 + 64) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_share_cd_comp.cpp",
        "checkShareCD",
        192);
      v18 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v39,
              (const char (*)[53])"shareCD error, cur_time_ms < buffer_ms, cur_time_ms:");
      v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v18,
              (const unsigned __int64 *)(v2 + 64));
      v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])", buffer_ms:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v39);
      result = 0xFFFFFFFFLL;
      goto LABEL_38;
    }
    *(_QWORD *)(v2 + 64) -= *(unsigned int *)(v2 + 32);
  }
  if ( *(_BYTE *)(((unsigned __int64)&share_cd_info->last_use_time >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  last_use_time = share_cd_info->last_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&info->cool_down_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&info->cool_down_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&info->cool_down_time);
  }
  v22 = 1000.0 * info->cool_down_time;
  if ( v22 >= 9.223372e18 )
    v23 = (unsigned int)(int)(float)(v22 - 9.223372e18) ^ 0x8000000000000000LL;
  else
    v23 = (unsigned int)(int)v22;
  if ( last_use_time + v23 <= *(_QWORD *)(v2 + 64) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_share_cd_comp.cpp",
      "checkShareCD",
      201);
    v24 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v39,
            (const char (*)[51])"share cd time not ready, check fails. share_cd_id:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 48));
    v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v25,
            (const char (*)[21])", last_use_time(ms):");
    v27 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v26, &share_cd_info->last_use_time);
    v28 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])", CD(s)");
    v29 = common::milog::MiLogStream::operator<<<float,(float *)0>(v28, &info->cool_down_time);
    v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])", now(ms):");
    v31 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v30,
            (const unsigned __int64 *)(v2 + 64));
    v32 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v31, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 11103LL;
  }
LABEL_38:
  if ( v40 == (char *)v2 )
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

// Line 212: range 00000000179B9CB0-00000000179BA2F0
__int64 __fastcall PlayerShareCDComp::checkAndCostShareCDToken(PlayerShareCDComp *const this, uint32_t share_cd_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ShareCDInfo> >::pointer v9; // rax
  uint32_t *p_config_index; // rax
  std::vector<data::CoolDownInfo>::size_type config_index; // r15
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<data::CoolDownInfo> *p_cool_down_list; // rcx
  uint32_t cd_token; // ecx
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,ShareCDInfo> >::_Base_ptr M_node; // [rsp+10h] [rbp-D0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,ShareCDInfo> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  const data::ShareCDExcelConfig *share_cd_config_ptr; // [rsp+20h] [rbp-C0h]
  const std::_Rb_tree_iterator<std::pair<unsigned int const,ShareCDInfo> > *iter; // [rsp+28h] [rbp-B8h]
  ShareCDInfo *share_cd_info; // [rsp+30h] [rbp-B0h]
  const data::CoolDownInfo *info; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v25; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-90h] BYREF
  char v27[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 share_cd_id:211";
  *(_QWORD *)(v2 + 16) = PlayerShareCDComp::checkAndCostShareCDToken;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = share_cd_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  share_cd_config_ptr = data::ShareCDExcelConfigMgrBase::findShareCDExcelConfig(
                          &v5->design_config.txt_config_mgr.share_cd_config_mgr,
                          *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( share_cd_config_ptr )
  {
    M_node = std::map<unsigned int,ShareCDInfo>::find(
               &this->share_cd_info_map_,
               (const std::map<unsigned int,ShareCDInfo>::key_type *)(v2 + 32))._M_node;
    iter = (const std::_Rb_tree_iterator<std::pair<unsigned int const,ShareCDInfo> > *)&M_node;
    __y._M_node = std::map<unsigned int,ShareCDInfo>::end(&this->share_cd_info_map_)._M_node;
    if ( std::operator==(iter, &__y) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_share_cd_comp.cpp",
        "checkAndCostShareCDToken",
        225);
      v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v26,
             (const char (*)[48])"share_cd_info_map_ do not have share_cd_id, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 11101LL;
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,ShareCDInfo>>::operator->(iter);
      share_cd_info = &v9->second;
      p_config_index = &v9->second.config_index;
      if ( *(_BYTE *)(((unsigned __int64)p_config_index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_config_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_config_index >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(p_config_index);
      }
      config_index = share_cd_info->config_index;
      if ( config_index < std::vector<data::CoolDownInfo>::size(&share_cd_config_ptr->cool_down_list) )
      {
        p_cool_down_list = &share_cd_config_ptr->cool_down_list;
        if ( *(_BYTE *)(((unsigned __int64)&share_cd_info->config_index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)share_cd_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&share_cd_info->config_index >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&share_cd_info->config_index);
        }
        info = std::vector<data::CoolDownInfo>::operator[](p_cool_down_list, share_cd_info->config_index);
        if ( *(_BYTE *)(((unsigned __int64)&share_cd_info->cd_token >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&share_cd_info->cd_token >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&share_cd_info->cd_token);
        }
        cd_token = share_cd_info->cd_token;
        if ( *(_BYTE *)(((unsigned __int64)&info->token >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->token >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&info->token);
        }
        if ( cd_token >= info->token )
        {
          if ( *(_BYTE *)(((unsigned __int64)&share_cd_info->cd_token >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&share_cd_info->cd_token >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&share_cd_info->cd_token);
          }
          v18 = share_cd_info->cd_token;
          if ( *(_BYTE *)(((unsigned __int64)&info->token >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->token >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&info->token);
          }
          share_cd_info->cd_token = v18 - info->token;
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_share_cd_comp.cpp",
            "checkAndCostShareCDToken",
            240);
          v17 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v26,
                  (const char (*)[44])"token not enough, check fails. share_cd_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v26);
          result = 11104LL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_share_cd_comp.cpp",
          "checkAndCostShareCDToken",
          231);
        v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v26,
                (const char (*)[36])"shareCD index invalid, share_cd_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])", index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &share_cd_info->config_index);
        common::milog::MiLogStream::~MiLogStream(&v26);
        result = 11102LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_share_cd_comp.cpp",
      "checkAndCostShareCDToken",
      217);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v26,
           (const char (*)[43])"findShareCDExcelConfig fails, share_cd_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 11101LL;
  }
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

// Line 250: range 00000000179BA2F2-00000000179BA504
void __fastcall PlayerShareCDComp::sendShareCDNotify(
        const PlayerShareCDComp *const this,
        const uint32_t share_cd_id,
        google::protobuf::uint64 cd_start_time,
        google::protobuf::uint32 index)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::Map<unsigned int,proto::ShareCDInfo> *share_cd_info_map; // [rsp+20h] [rbp-F0h]
  proto::ShareCDInfo *proto_info; // [rsp+28h] [rbp-E8h]
  char v11[224]; // [rsp+30h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 15 share_cd_id:249 64 96 10 notify:251";
  *(_QWORD *)(v4 + 16) = PlayerShareCDComp::sendShareCDNotify;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = share_cd_id;
  proto::AllShareCDDataNotify::AllShareCDDataNotify((proto::AllShareCDDataNotify *const)(v4 + 64));
  share_cd_info_map = proto::AllShareCDDataNotify::mutable_share_cd_info_map((proto::AllShareCDDataNotify *const)(v4 + 64));
  proto_info = google::protobuf::Map<unsigned int,proto::ShareCDInfo>::operator[](
                 share_cd_info_map,
                 (const google::protobuf::Map<unsigned int,proto::ShareCDInfo>::key_type *)(v4 + 48));
  proto::ShareCDInfo::set_share_cd_id(proto_info, *(_DWORD *)(v4 + 48));
  proto::ShareCDInfo::set_cd_start_time(proto_info, cd_start_time);
  proto::ShareCDInfo::set_index(proto_info, index);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v4 + 64));
  proto::AllShareCDDataNotify::~AllShareCDDataNotify((proto::AllShareCDDataNotify *const)(v4 + 64));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
