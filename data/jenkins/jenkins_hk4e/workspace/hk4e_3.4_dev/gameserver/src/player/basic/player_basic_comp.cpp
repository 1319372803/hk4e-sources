// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/basic/player_basic_comp.cpp

// Line 64: range 00000000171AB186-00000000171AC332
int32_t __cdecl PlayerBasicComp::fromBin(PlayerBasicComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  char v7; // al
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  uint32_t v11; // ecx
  char v12; // dl
  const std::string *v13; // rsi
  __int64 v14; // rdx
  uint64_t v15; // rax
  bool is_weather_locked; // cl
  char v17; // dl
  __int64 v18; // rdx
  bool is_game_time_locked; // cl
  char v20; // dl
  __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // al
  float v24; // ecx
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // rdx
  char v28; // al
  uint64_t v29; // rax
  uint64_t v30; // rax
  uint32_t login_time; // ecx
  char v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rdx
  char v35; // al
  uint32_t v36; // ecx
  char v37; // dl
  __int64 v38; // rdx
  __int64 updated; // rdx
  char v40; // al
  __int64 v41; // rsi
  const std::string *v42; // rax
  const std::string *v43; // rax
  const std::string *v44; // rsi
  __int64 v45; // rdx
  char v46; // al
  unsigned int v47; // eax
  __int64 v48; // rdx
  char v49; // al
  __int64 v50; // rdx
  char v51; // al
  __int64 v52; // rdx
  char v53; // al
  uint32_t v54; // ecx
  char v55; // dl
  __int64 v56; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator *p_for_end; // rsi
  const unsigned int *v58; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v59; // rax
  common::milog::MiLogStream *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  int32_t result; // eax
  __int64 v64; // rdx
  char v65; // al
  __int64 v66; // rsi
  __int64 v67; // rdx
  unsigned int v68; // eax
  __int64 v69; // rdx
  char v70; // al
  bool is_rebate_mail_received; // cl
  char v72; // dl
  __int64 v73; // rdx
  const std::string *v74; // rax
  google::protobuf::uint32 v75; // edi
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rdx
  char v79; // al
  __int64 logout_time; // rdx
  char v81; // al
  uint32_t v82; // ecx
  char v83; // dl
  __int64 v84; // rdx
  common::milog::MiLogStream *v85; // rax
  uint32_t *p_data_version; // rsi
  __int64 daily_refresh_time; // rdx
  char v88; // al
  bool is_auto_unlock_specific_equip; // cl
  char v90; // dl
  __int64 v91; // rdx
  const std::string *v92; // rax
  __int64 login_platform; // rdx
  char v94; // al
  const std::string *v95; // rsi
  double v96; // rax
  double v97; // rax
  double v98; // rax
  const proto::ContentAuditBin *v99; // rax
  const std::string *v100; // rax
  const std::string *v101; // rax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+10h] [rbp-100h]
  const proto::PlayerBasicCompBin *proto_comp; // [rsp+18h] [rbp-F8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-F0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+28h] [rbp-E8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-E0h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_key; // [rsp+38h] [rbp-D8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v111; // [rsp+80h] [rbp-90h] BYREF
  char v112[112]; // [rsp+A0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v112;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 level:105";
  *(_QWORD *)(v3 + 16) = PlayerBasicComp::fromBin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::basic_bin(player_data_bin);
  v6 = proto::PlayerBasicCompBin::level(proto_comp);
  v7 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(player_data_bin) = v7 != 0;
    __asan_report_store4(&this->level_, player_data_bin, v6);
  }
  this->level_ = v6;
  v8 = proto::PlayerBasicCompBin::exp(proto_comp);
  v9 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
  LOBYTE(player_data_bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->exp_, player_data_bin, v10);
  this->exp_ = v8;
  v13 = proto::PlayerBasicCompBin::nickname[abi:cxx11](proto_comp);
  std::string::operator=(&this->nickname_, v13);
  v11 = proto::PlayerBasicCompBin::total_game_time(proto_comp);
  v12 = *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v12 != 0;
  v14 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v12);
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->game_time_, v13, v14);
  this->game_time_ = v11;
  v15 = proto::PlayerBasicCompBin::trans_no_count(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    v15 = __asan_report_store8(&this->trans_no_count_, v13);
  this->trans_no_count_ = v15;
  is_weather_locked = proto::PlayerBasicCompBin::is_weather_locked(proto_comp);
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this - 95) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->is_weather_locked_, v13, v18);
  this->is_weather_locked_ = is_weather_locked;
  is_game_time_locked = proto::PlayerBasicCompBin::is_game_time_locked(proto_comp);
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this - 94) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_game_time_locked_, v13, v21);
  this->is_game_time_locked_ = is_game_time_locked;
  *(float *)v2.m128i_i32 = proto::PlayerBasicCompBin::persist_stamina_limit(proto_comp);
  v22 = (unsigned int)_mm_cvtsi128_si32(v2);
  v23 = *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(v13) = v23 != 0;
    __asan_report_store4(&this->persist_stamina_limit_, v13, v22);
  }
  LODWORD(this->persist_stamina_limit_) = v22;
  *(float *)v2.m128i_i32 = proto::PlayerBasicCompBin::cur_persist_stamina(proto_comp);
  v24 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v25 = *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v25 != 0;
  v26 = (v25 != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= v25);
  if ( (_BYTE)v26 )
    __asan_report_store4(&this->cur_persist_stamina_, v13, v26);
  this->cur_persist_stamina_ = v24;
  *(float *)v2.m128i_i32 = proto::PlayerBasicCompBin::cur_temporary_stamina(proto_comp);
  v27 = (unsigned int)_mm_cvtsi128_si32(v2);
  v28 = *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v28 != 0;
  if ( v28 != 0 && v28 <= 3 )
    __asan_report_store4(&this->cur_temporary_stamina_, v13, v27);
  LODWORD(this->cur_temporary_stamina_) = v27;
  v29 = proto::PlayerBasicCompBin::player_time_ms(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_time_ms_ >> 3) + 0x7FFF8000) )
    v29 = __asan_report_store8(&this->player_time_ms_, v13);
  this->player_time_ms_ = v29;
  v30 = proto::PlayerBasicCompBin::player_stat_id(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_stat_id_ >> 3) + 0x7FFF8000) )
    v30 = __asan_report_store8(&this->player_stat_id_, v13);
  this->player_stat_id_ = v30;
  login_time = proto::PlayerBasicCompBin::last_login_time(proto_comp);
  v32 = *(_BYTE *)(((unsigned __int64)&this->last_login_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v32 != 0;
  v33 = (v32 != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= v32);
  if ( (_BYTE)v33 )
    __asan_report_store4(&this->last_login_time_, v13, v33);
  this->last_login_time_ = login_time;
  v34 = proto::PlayerBasicCompBin::register_time(proto_comp);
  v35 = *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000);
  if ( v35 != 0 && v35 <= 3 )
  {
    LOBYTE(v13) = v35 != 0;
    __asan_report_store4(&this->register_time_, v13, v34);
  }
  this->register_time_ = v34;
  v36 = proto::PlayerBasicCompBin::total_login_days(proto_comp);
  v37 = *(_BYTE *)(((unsigned __int64)&this->total_login_days_ >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v37 != 0;
  v38 = (v37 != 0) & (unsigned __int8)((char)((((_BYTE)this - 20) & 7) + 3) >= v37);
  if ( (_BYTE)v38 )
    __asan_report_store4(&this->total_login_days_, v13, v38);
  this->total_login_days_ = v36;
  updated = proto::PlayerBasicCompBin::update_login_days_time(proto_comp);
  v40 = *(_BYTE *)(((unsigned __int64)&this->update_login_days_time_ >> 3) + 0x7FFF8000);
  if ( v40 != 0 && v40 <= 3 )
  {
    LOBYTE(v13) = v40 != 0;
    __asan_report_store4(&this->update_login_days_time_, v13, updated);
  }
  this->update_login_days_time_ = updated;
  v41 = proto::PlayerBasicCompBin::language_type(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_language_type_, v41, &this->client_language_type_);
  }
  this->client_language_type_ = v41;
  v42 = proto::PlayerBasicCompBin::client_app_version[abi:cxx11](proto_comp);
  std::string::operator=(&this->client_app_version_, v42);
  v43 = proto::PlayerBasicCompBin::client_device_info[abi:cxx11](proto_comp);
  std::string::operator=(&this->client_device_info_, v43);
  v44 = proto::PlayerBasicCompBin::client_system_version[abi:cxx11](proto_comp);
  std::string::operator=(&this->client_system_version_, v44);
  v45 = proto::PlayerBasicCompBin::online_time(proto_comp);
  v46 = *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000);
  if ( v46 != 0 && v46 <= 3 )
  {
    LOBYTE(v44) = v46 != 0;
    __asan_report_store4(&this->online_time_, v44, v45);
  }
  this->online_time_ = v45;
  LOBYTE(v47) = proto::PlayerBasicCompBin::is_proficient_player(proto_comp);
  v48 = v47;
  v49 = *(_BYTE *)(((unsigned __int64)&this->is_proficient_player_ >> 3) + 0x7FFF8000);
  if ( v49 < 0 )
  {
    LOBYTE(v44) = v49 != 0;
    __asan_report_store1(&this->is_proficient_player_, v44, v48);
  }
  this->is_proficient_player_ = v48;
  v50 = proto::PlayerBasicCompBin::set_language_tag(proto_comp);
  v51 = *(_BYTE *)(((unsigned __int64)&this->set_language_tag_ >> 3) + 0x7FFF8000);
  if ( v51 != 0 && v51 <= 3 )
  {
    LOBYTE(v44) = v51 != 0;
    __asan_report_store4(&this->set_language_tag_, v44, v50);
  }
  this->set_language_tag_ = v50;
  v52 = proto::PlayerBasicCompBin::head_image_avatar_id(proto_comp);
  v53 = *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000);
  if ( v53 != 0 && v53 <= 3 )
  {
    LOBYTE(v44) = v53 != 0;
    __asan_report_store4(&this->profile_picture_, v44, v52);
  }
  this->profile_picture_.avatar_id = v52;
  v54 = proto::PlayerBasicCompBin::profile_picture_costume_id(proto_comp);
  v55 = *(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3) + 0x7FFF8000);
  LOBYTE(v44) = v55 != 0;
  v56 = (v55 != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= v55);
  if ( (_BYTE)v56 )
    __asan_report_store4(&this->profile_picture_.costume_id, v44, v56);
  this->profile_picture_.costume_id = v54;
  __for_range = proto::PlayerBasicCompBin::open_state_map(proto_comp);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::operator!=(&__for_begin, &__for_end) )
      break;
    p_key = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v59 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            &this->open_state_map_,
            (const unsigned int *)p_key,
            &p_key->second,
            (const unsigned int *)&this->open_state_map_,
            v58);
    if ( !v59.second )
    {
      common::milog::MiLogStream::create(
        &v111,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/basic/player_basic_comp.cpp",
        "fromBin",
        100);
      v60 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v111, (const char (*)[15])"duplicate key:");
      v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, (const unsigned int *)p_key);
      v62 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v61, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v3 + 32) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v111);
      result = -1;
      goto LABEL_91;
    }
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlayerBasicCompBin::reward_taken_level_list(proto_comp);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_0);
    }
    *(_DWORD *)(v3 + 32) = *__for_begin_0;
    p_for_end = (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v3 + 32);
    std::unordered_set<unsigned int>::insert(
      &this->reward_taken_level_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
    ++__for_begin_0;
  }
  v64 = proto::PlayerBasicCompBin::guid_seq_id(proto_comp);
  v65 = *(_BYTE *)(((unsigned __int64)&this->guid_seq_id_ >> 3) + 0x7FFF8000);
  if ( v65 != 0 && v65 <= 3 )
  {
    LOBYTE(p_for_end) = v65 != 0;
    __asan_report_store4(&this->guid_seq_id_, p_for_end, v64);
  }
  this->guid_seq_id_ = v64;
  v66 = ((_BYTE)this + 124) & 7;
  v67 = (*(_BYTE *)(((unsigned __int64)&this->is_guid_init_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v66 >= *(_BYTE *)(((unsigned __int64)&this->is_guid_init_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v67 )
    __asan_report_store1(&this->is_guid_init_, v66, v67);
  this->is_guid_init_ = 1;
  LOBYTE(v68) = proto::PlayerBasicCompBin::is_rebate_mail_sent(proto_comp);
  v69 = v68;
  v70 = *(_BYTE *)(((unsigned __int64)&this->is_rebate_mail_sent_ >> 3) + 0x7FFF8000);
  if ( v70 < 0 )
  {
    LOBYTE(v66) = v70 != 0;
    __asan_report_store1(&this->is_rebate_mail_sent_, v66, v69);
  }
  this->is_rebate_mail_sent_ = v69;
  is_rebate_mail_received = proto::PlayerBasicCompBin::is_rebate_mail_received(proto_comp);
  v72 = *(_BYTE *)(((unsigned __int64)&this->is_rebate_mail_received_ >> 3) + 0x7FFF8000);
  LOBYTE(v66) = v72 != 0;
  v73 = (v72 != 0) & (unsigned __int8)((((unsigned __int8)this + 73) & 7) >= v72);
  if ( (_BYTE)v73 )
    __asan_report_store1(&this->is_rebate_mail_received_, v66, v73);
  this->is_rebate_mail_received_ = is_rebate_mail_received;
  v74 = proto::PlayerBasicCompBin::register_cps[abi:cxx11](proto_comp);
  std::string::operator=(&this->register_cps_, v74);
  v75 = proto::PlayerBasicCompBin::cur_json_climate_type(proto_comp);
  v76 = (((_BYTE)this + 76) & 7u) + 3;
  v77 = (*(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v77 )
  {
    v75 = (_DWORD)this + 76;
    __asan_report_store4(&this->cur_json_climate_type_, v76, v77);
  }
  this->cur_json_climate_type_ = v75;
  *(float *)v2.m128i_i32 = proto::PlayerBasicCompBin::cur_climate_meter(proto_comp);
  v78 = (unsigned int)_mm_cvtsi128_si32(v2);
  v79 = *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000);
  if ( v79 != 0 && v79 <= 3 )
  {
    LOBYTE(v76) = v79 != 0;
    __asan_report_store4(&this->cur_climate_meter_, v76, v78);
  }
  LODWORD(this->cur_climate_meter_) = v78;
  logout_time = proto::PlayerBasicCompBin::last_logout_time(proto_comp);
  v81 = *(_BYTE *)(((unsigned __int64)&this->last_logout_time_ >> 3) + 0x7FFF8000);
  if ( v81 != 0 && v81 <= 3 )
  {
    LOBYTE(v76) = v81 != 0;
    __asan_report_store4(&this->last_logout_time_, v76, logout_time);
  }
  this->last_logout_time_ = logout_time;
  v82 = proto::PlayerBasicCompBin::data_version(proto_comp);
  v83 = *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000);
  LOBYTE(v76) = v83 != 0;
  v84 = (v83 != 0) & (unsigned __int8)((char)((((_BYTE)this - 100) & 7) + 3) >= v83);
  if ( (_BYTE)v84 )
    __asan_report_store4(&this->data_version_, v76, v84);
  this->data_version_ = v82;
  common::milog::MiLogStream::create(
    &v111,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/basic/player_basic_comp.cpp",
    "fromBin",
    121);
  v85 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v111,
          (const char (*)[23])"player data_version_: ");
  p_data_version = &this->data_version_;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v85, &this->data_version_);
  common::milog::MiLogStream::~MiLogStream(&v111);
  daily_refresh_time = proto::PlayerBasicCompBin::last_daily_refresh_time(proto_comp);
  v88 = *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000);
  if ( v88 != 0 && v88 <= 3 )
  {
    LOBYTE(p_data_version) = v88 != 0;
    __asan_report_store4(&this->last_daily_refresh_time_, p_data_version, daily_refresh_time);
  }
  this->last_daily_refresh_time_ = daily_refresh_time;
  if ( !this->last_daily_refresh_time_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_logout_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_logout_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_logout_time_);
    }
    this->last_daily_refresh_time_ = this->last_logout_time_;
  }
  is_auto_unlock_specific_equip = proto::PlayerBasicCompBin::is_auto_unlock_specific_equip(proto_comp);
  v90 = *(_BYTE *)(((unsigned __int64)&this->is_auto_unlock_specific_equip_ >> 3) + 0x7FFF8000);
  LOBYTE(p_data_version) = v90 != 0;
  v91 = (v90 != 0) & (unsigned __int8)((((unsigned __int8)this - 92) & 7) >= v90);
  if ( (_BYTE)v91 )
    __asan_report_store1(&this->is_auto_unlock_specific_equip_, p_data_version, v91);
  this->is_auto_unlock_specific_equip_ = is_auto_unlock_specific_equip;
  v92 = proto::PlayerBasicCompBin::online_id[abi:cxx11](proto_comp);
  std::string::operator=(&this->online_id_, v92);
  v95 = proto::PlayerBasicCompBin::psn_id[abi:cxx11](proto_comp);
  std::string::operator=(&this->psn_id_, v95);
  login_platform = proto::PlayerBasicCompBin::last_login_platform(proto_comp);
  v94 = *(_BYTE *)(((unsigned __int64)&this->last_login_platform_ >> 3) + 0x7FFF8000);
  LOBYTE(v95) = v94 != 0;
  if ( v94 != 0 && v94 <= 3 )
    __asan_report_store4(&this->last_login_platform_, v95, login_platform);
  this->last_login_platform_ = login_platform;
  v96 = proto::PlayerBasicCompBin::pivot_client_time(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->pivot_client_time_ >> 3) + 0x7FFF8000) )
    v96 = COERCE_DOUBLE(__asan_report_store8(&this->pivot_client_time_, v95));
  this->pivot_client_time_ = v96;
  v97 = proto::PlayerBasicCompBin::pivot_unix_time(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->pivot_unix_time_ >> 3) + 0x7FFF8000) )
    v97 = COERCE_DOUBLE(__asan_report_store8(&this->pivot_unix_time_, v95));
  this->pivot_unix_time_ = v97;
  v98 = proto::PlayerBasicCompBin::client_total_tick_time(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_ >> 3) + 0x7FFF8000) )
    v98 = COERCE_DOUBLE(__asan_report_store8(&this->client_total_tick_time_, v95));
  this->client_total_tick_time_ = v98;
  v99 = proto::PlayerBasicCompBin::nickname_audit_bin(proto_comp);
  ContentAuditData::fromBin(&this->nickname_audit_data_, v99);
  v100 = proto::PlayerBasicCompBin::ip_country_code[abi:cxx11](proto_comp);
  std::string::operator=(&this->ip_country_code_, v100);
  v101 = proto::PlayerBasicCompBin::ip_region_name[abi:cxx11](proto_comp);
  std::string::operator=(&this->ip_region_name_, v101);
  result = 0;
LABEL_91:
  if ( v112 == (char *)v3 )
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

// Line 142: range 00000000171AC334-00000000171AD053
int32_t __cdecl PlayerBasicComp::toBin(PlayerBasicComp *const this, proto::PlayerDataBin *player_data_bin)
{
  uint32_t GameTime; // eax
  bool isGuest; // al
  uint32_t OnlineTime; // eax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v7; // rsi
  unsigned int *v8; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v9; // rdx
  char v10; // cl
  unsigned int *v11; // rax
  google::protobuf::uint32 *v12; // rdx
  proto::ContentAuditBin *v13; // rax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  proto::PlayerBasicCompBin *proto_comp; // [rsp+28h] [rbp-48h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_open_state_map; // [rsp+30h] [rbp-40h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-38h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v21; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *key; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *value; // [rsp+58h] [rbp-18h]

  proto_comp = proto::PlayerDataBin::mutable_basic_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  proto::PlayerBasicCompBin::set_level(proto_comp, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->exp_);
  }
  proto::PlayerBasicCompBin::set_exp(proto_comp, this->exp_);
  proto::PlayerBasicCompBin::set_nickname(proto_comp, &this->nickname_);
  GameTime = PlayerBasicComp::getGameTime(this);
  proto::PlayerBasicCompBin::set_total_game_time(proto_comp, GameTime);
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->trans_no_count_);
  proto::PlayerBasicCompBin::set_trans_no_count(proto_comp, this->trans_no_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_weather_locked_);
  }
  proto::PlayerBasicCompBin::set_is_weather_locked(proto_comp, this->is_weather_locked_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 94) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_time_locked_);
  }
  proto::PlayerBasicCompBin::set_is_game_time_locked(proto_comp, this->is_game_time_locked_);
  if ( *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->persist_stamina_limit_);
  }
  proto::PlayerBasicCompBin::set_persist_stamina_limit(proto_comp, this->persist_stamina_limit_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_persist_stamina_);
  }
  proto::PlayerBasicCompBin::set_cur_persist_stamina(proto_comp, this->cur_persist_stamina_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_temporary_stamina_);
  }
  proto::PlayerBasicCompBin::set_cur_temporary_stamina(proto_comp, this->cur_temporary_stamina_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_time_ms_);
  proto::PlayerBasicCompBin::set_player_time_ms(proto_comp, this->player_time_ms_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_stat_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_stat_id_);
  proto::PlayerBasicCompBin::set_player_stat_id(proto_comp, this->player_stat_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_login_time_);
  }
  proto::PlayerBasicCompBin::set_last_login_time(proto_comp, this->cur_login_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->register_time_);
  }
  proto::PlayerBasicCompBin::set_register_time(proto_comp, this->register_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_login_days_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_login_days_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_login_days_);
  }
  proto::PlayerBasicCompBin::set_total_login_days(proto_comp, this->total_login_days_);
  if ( *(_BYTE *)(((unsigned __int64)&this->update_login_days_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->update_login_days_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->update_login_days_time_);
  }
  proto::PlayerBasicCompBin::set_update_login_days_time(proto_comp, this->update_login_days_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->client_language_type_);
  }
  proto::PlayerBasicCompBin::set_language_type(proto_comp, this->client_language_type_);
  proto::PlayerBasicCompBin::set_client_app_version(proto_comp, &this->client_app_version_);
  proto::PlayerBasicCompBin::set_client_device_info(proto_comp, &this->client_device_info_);
  proto::PlayerBasicCompBin::set_client_system_version(proto_comp, &this->client_system_version_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  isGuest = Player::isGuest(this->player_);
  proto::PlayerBasicCompBin::set_is_guest(proto_comp, isGuest);
  OnlineTime = PlayerBasicComp::getOnlineTime(this);
  proto::PlayerBasicCompBin::set_online_time(proto_comp, OnlineTime);
  if ( *(char *)(((unsigned __int64)&this->is_proficient_player_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_proficient_player_);
  proto::PlayerBasicCompBin::set_is_proficient_player(proto_comp, this->is_proficient_player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->set_language_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->set_language_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->set_language_tag_);
  }
  proto::PlayerBasicCompBin::set_set_language_tag(proto_comp, this->set_language_tag_);
  if ( *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->profile_picture_);
  }
  proto::PlayerBasicCompBin::set_head_image_avatar_id(proto_comp, this->profile_picture_.avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->profile_picture_.costume_id);
  }
  proto::PlayerBasicCompBin::set_profile_picture_costume_id(proto_comp, this->profile_picture_.costume_id);
  proto_open_state_map = proto::PlayerBasicCompBin::mutable_open_state_map(proto_comp);
  __for_range = &this->open_state_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->open_state_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->open_state_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    key = std::get<0ul,unsigned int const,unsigned int>(v21);
    v5 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v21);
    value = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v6 = *value;
    v7 = key;
    v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_open_state_map, key);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7, v8);
    }
    *v9 = v6;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->reward_taken_level_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_set<unsigned int>::begin(&this->reward_taken_level_set_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v11 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    proto::PlayerBasicCompBin::add_reward_taken_level_list(proto_comp, *v12);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_seq_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid_seq_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->guid_seq_id_);
  }
  proto::PlayerBasicCompBin::set_guid_seq_id(proto_comp, this->guid_seq_id_);
  if ( *(char *)(((unsigned __int64)&this->is_rebate_mail_sent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_rebate_mail_sent_);
  proto::PlayerBasicCompBin::set_is_rebate_mail_sent(proto_comp, this->is_rebate_mail_sent_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_rebate_mail_received_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_rebate_mail_received_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_rebate_mail_received_);
  }
  proto::PlayerBasicCompBin::set_is_rebate_mail_received(proto_comp, this->is_rebate_mail_received_);
  proto::PlayerBasicCompBin::set_register_cps(proto_comp, &this->register_cps_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_json_climate_type_);
  }
  proto::PlayerBasicCompBin::set_cur_json_climate_type(proto_comp, this->cur_json_climate_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_climate_meter_);
  }
  proto::PlayerBasicCompBin::set_cur_climate_meter(proto_comp, this->cur_climate_meter_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_logout_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_logout_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_logout_time_);
  }
  proto::PlayerBasicCompBin::set_last_logout_time(proto_comp, this->last_logout_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_daily_refresh_time_);
  }
  proto::PlayerBasicCompBin::set_last_daily_refresh_time(proto_comp, this->last_daily_refresh_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auto_unlock_specific_equip_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auto_unlock_specific_equip_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_auto_unlock_specific_equip_);
  }
  proto::PlayerBasicCompBin::set_is_auto_unlock_specific_equip(proto_comp, this->is_auto_unlock_specific_equip_);
  proto::PlayerBasicCompBin::set_online_id(proto_comp, &this->online_id_);
  proto::PlayerBasicCompBin::set_psn_id(proto_comp, &this->psn_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_platform_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_login_platform_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_login_platform_);
  }
  proto::PlayerBasicCompBin::set_last_login_platform(proto_comp, this->last_login_platform_);
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->data_version_);
  }
  proto::PlayerBasicCompBin::set_data_version(proto_comp, this->data_version_);
  if ( *(_BYTE *)(((unsigned __int64)&this->pivot_client_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pivot_client_time_);
  proto::PlayerBasicCompBin::set_pivot_client_time(proto_comp, this->pivot_client_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->pivot_unix_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pivot_unix_time_);
  proto::PlayerBasicCompBin::set_pivot_unix_time(proto_comp, this->pivot_unix_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->client_total_tick_time_);
  proto::PlayerBasicCompBin::set_client_total_tick_time(proto_comp, this->client_total_tick_time_);
  v13 = proto::PlayerBasicCompBin::mutable_nickname_audit_bin(proto_comp);
  ContentAuditData::toBin(&this->nickname_audit_data_, v13);
  proto::PlayerBasicCompBin::set_ip_country_code(proto_comp, &this->ip_country_code_);
  proto::PlayerBasicCompBin::set_ip_region_name(proto_comp, &this->ip_region_name_);
  return 0;
};

// Line 212: range 00000000171AD054-00000000171AD1C3
int32_t __cdecl PlayerBasicComp::init(PlayerBasicComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rdx
  char v4; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r12
  std::shared_ptr<Config> v8[2]; // [rsp+10h] [rbp-20h] BYREF

  v1 = ((_BYTE)this + 124) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_guid_init_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_guid_init_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_guid_init_, v1, v2);
  this->is_guid_init_ = 1;
  PlayerBasicComp::initEventObservers(this);
  v3 = PlayerBasicComp::calcWorldLevelLimit(this);
  v4 = *(_BYTE *)(((unsigned __int64)&this->last_world_level_limit_ >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(v1) = v4 != 0;
    __asan_report_store4(&this->last_world_level_limit_, v1, v3);
  }
  this->last_world_level_limit_ = v3;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
  v6 = Config::isAudit(v5) && !PlayerBasicComp::isStateOpen(this, 0x384u);
  std::shared_ptr<Config>::~shared_ptr(v8);
  if ( v6 )
    PlayerBasicComp::setOpenState(this, 0x384u, 1u, 0);
  return 0;
};

// Line 229: range 00000000171AD1C4-00000000171AD555
int32_t __cdecl PlayerBasicComp::onFirstLogin(PlayerBasicComp *const this)
{
  __int64 v1; // rsi
  __m128i v2; // xmm0
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rdx
  float v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  const proto::PlayerLoginReq *SessionLoginReq; // rax
  const std::string *v15; // rax
  PushPlatformManager *p_push_platform_mgr; // rbx
  uint32_t Level; // r13d
  uint32_t ChannelId; // r12d
  uint32_t Uid; // eax
  __int64 v20; // rsi
  uint32_t now; // [rsp+1Ch] [rbp-34h]
  std::shared_ptr<Config> v24[3]; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_, v1, &this->level_);
  }
  this->level_ = 1;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->register_time_, v1, &this->register_time_);
  }
  this->register_time_ = now;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v24);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v24);
  v4 = (int)(float)(ConstValueExcelConfigMgr::getInitGameTime(&v3->design_config.txt_config_mgr.const_value_config_mgr)
                  * 60.0);
  v5 = (((_BYTE)this - 92) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
  {
    v4 = (_DWORD)this + 420;
    __asan_report_store4(&this->game_time_, v5, v6);
  }
  this->game_time_ = v4;
  std::shared_ptr<Config>::~shared_ptr(v24);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_game_time_update_time_, v5, &this->last_game_time_update_time_);
  }
  this->last_game_time_update_time_ = now;
  *(float *)v2.m128i_i32 = PlayerBasicComp::getMaxStamina(this);
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  v8 = *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->cur_persist_stamina_, v5, v9);
  this->cur_persist_stamina_ = v7;
  v10 = ((_BYTE)this - 95) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_weather_locked_, v10, v11);
  this->is_weather_locked_ = 1;
  v12 = ((_BYTE)this - 94) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_game_time_locked_, v12, v13);
  this->is_game_time_locked_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SessionLoginReq = Player::getSessionLoginReq(this->player_);
  v15 = proto::PlayerLoginReq::cps[abi:cxx11](SessionLoginReq);
  std::string::operator=(&this->register_cps_, v15);
  p_push_platform_mgr = &ServiceBox::findService<GameserverService>()->push_platform_mgr;
  Level = PlayerBasicComp::getLevel(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ChannelId = Player::getChannelId(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  v20 = Uid;
  PushPlatformManager::asyncSetPlayerLevelTags(p_push_platform_mgr, Uid, ChannelId, Level);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_daily_refresh_time_, v20, &this->last_daily_refresh_time_);
  }
  this->last_daily_refresh_time_ = now;
  return 0;
};

// Line 256: range 00000000171AD556-00000000171AE1A6
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerBasicComp::onLogin(PlayerBasicComp *const this, bool is_new_player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  uint32_t cur_login_time; // ecx
  char v6; // dl
  __int64 v7; // rdx
  __int64 Now; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  PushPlatformManager *p_push_platform_mgr; // r14
  uint32_t ChannelId; // r15d
  uint32_t Uid; // eax
  __int64 LanguageType; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  char v18; // r15
  char v19; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  char v21; // r15
  common::milog::MiLogStream *v22; // r13
  int32_t result; // eax
  const std::string *v24; // rax
  const std::string *v25; // rax
  common::milog::MiLogStream *v26; // r14
  unsigned __int64 v27; // rax
  const proto::PlayerLoginReq *SessionLoginReq; // rax
  const std::string *v29; // rax
  PlayerSceneComp *SceneComp; // rax
  PlayerEventComp *EventComp; // r13
  proto::LanguageType new_language_type; // [rsp+Ch] [rbp-174h]
  uint32_t old_language_type; // [rsp+10h] [rbp-170h]
  unsigned int val; // [rsp+24h] [rbp-15Ch] BYREF
  const proto::PlayerLoginReq *player_login_req; // [rsp+28h] [rbp-158h]
  std::shared_ptr<PlayerLoginEvent> __r; // [rsp+30h] [rbp-150h] BYREF
  std::shared_ptr<Config> v37; // [rsp+40h] [rbp-140h] BYREF
  std::string value; // [rsp+50h] [rbp-130h] BYREF
  char v39[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 17 ip_proto_data:287 96 96 18 extra_bin_data:303";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::onLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_login_time_);
  }
  if ( this->cur_login_time_ )
  {
    cur_login_time = this->cur_login_time_;
    v6 = *(_BYTE *)(((unsigned __int64)&this->last_login_time_ >> 3) + 0x7FFF8000);
    is_new_player = v6 != 0;
    v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= v6);
    if ( (_BYTE)v7 )
      __asan_report_store4(&this->last_login_time_, is_new_player, v7);
    this->last_login_time_ = cur_login_time;
  }
  Now = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_login_time_, Now, &this->cur_login_time_);
  }
  this->cur_login_time_ = Now;
  v9 = ((_BYTE)this + 52) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_online_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_online_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_online_, v9, v10);
  this->is_online_ = 1;
  v11 = ((_BYTE)this - 93) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_game_time_locked_by_client_, v11, v12);
  this->is_game_time_locked_by_client_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_anticheat_log_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_anticheat_log_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->client_total_tick_time_anticheat_log_count_,
      v11,
      &this->client_total_tick_time_anticheat_log_count_);
  }
  this->client_total_tick_time_anticheat_log_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_log_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_log_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->anticheat_stamina_log_count_, v11, &this->anticheat_stamina_log_count_);
  }
  this->anticheat_stamina_log_count_ = 0;
  PlayerBasicComp::updateTotalLoginDays(this);
  PlayerBasicComp::tryStartGameTimer(this, 0);
  PlayerBasicComp::updateAllOpenStateOnLogin(this);
  p_push_platform_mgr = &ServiceBox::findService<GameserverService>()->push_platform_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->set_language_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->set_language_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->set_language_tag_);
  }
  old_language_type = this->set_language_tag_;
  new_language_type = PlayerBasicComp::getLanguageType(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ChannelId = Player::getChannelId(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  PushPlatformManager::asyncSetPlayerLanguageTags(
    p_push_platform_mgr,
    Uid,
    ChannelId,
    new_language_type,
    old_language_type);
  LanguageType = (unsigned int)PlayerBasicComp::getLanguageType(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->set_language_tag_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->set_language_tag_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->set_language_tag_, LanguageType, &this->set_language_tag_);
  }
  this->set_language_tag_ = LanguageType;
  PlayerBasicComp::tryLevelUp(this, PROP_CHANGE_NONE, 0, 0LL);
  PlayerBasicComp::checkSendRebateReward(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  if ( FeatureSwitchMgr::isIpRegionClosed(&v17->feature_switch_mgr) )
    goto LABEL_33;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) )
    v18 = 1;
  else
LABEL_33:
    v18 = 0;
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( v18 )
  {
    proto::QueryIpRegionData::QueryIpRegionData((proto::QueryIpRegionData *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getPlayerClientIp[abi:cxx11](&value, this->player_);
    proto::QueryIpRegionData::set_ip((proto::QueryIpRegionData *const)(v2 + 32), &value);
    std::string::~string(&value);
    PlayerBasicComp::asyncQueryIpRegionRequst(this, (const proto::QueryIpRegionData *)(v2 + 32));
    proto::QueryIpRegionData::~QueryIpRegionData((proto::QueryIpRegionData *const)(v2 + 32));
  }
  v19 = 0;
  if ( common::tools::MiTimer::isActive(&this->brief_update_timer_) )
    goto LABEL_43;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v19 = 1;
  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  if ( *(_BYTE *)(((unsigned __int64)&v20->brief_data_upload_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->brief_data_upload_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    v20 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v20->brief_data_upload_interval);
  }
  if ( PlayerUnixTimer::startS(
         &this->brief_update_timer_,
         v20->brief_data_upload_interval,
         1,
         "./src/player/basic/player_basic_comp.cpp",
         "onLogin",
         293) )
  {
    v21 = 1;
  }
  else
  {
LABEL_43:
    v21 = 0;
  }
  if ( v19 )
    std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( v21 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&value,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "onLogin",
      295);
    v22 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)&value,
            (const char (*)[39])"brief_update_timer_ start failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&value);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player_login_req = Player::getSessionLoginReq(this->player_);
    v24 = proto::PlayerLoginReq::extra_bin_data[abi:cxx11](player_login_req);
    if ( (unsigned __int8)std::string::empty(v24) != 1 )
    {
      proto::PlayerExtraBinData::PlayerExtraBinData((proto::PlayerExtraBinData *const)(v2 + 96));
      v25 = proto::PlayerLoginReq::extra_bin_data[abi:cxx11](player_login_req);
      if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v2 + 96, v25) != 1 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&value,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/basic/player_basic_comp.cpp",
          "onLogin",
          306);
        v26 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)&value,
                (const char (*)[46])"PlayerExtraBinData ParseFromString fail, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&value);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v27 = (unsigned __int64)(this->_vptr_PlayerCompBase + 4);
        if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          v27 = __asan_report_load8(this->_vptr_PlayerCompBase + 4);
        (*(void (__fastcall **)(PlayerBasicComp *const, unsigned __int64))v27)(this, v2 + 96);
      }
      proto::PlayerExtraBinData::~PlayerExtraBinData((proto::PlayerExtraBinData *const)(v2 + 96));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SessionLoginReq = Player::getSessionLoginReq(this->player_);
    v29 = proto::PlayerLoginReq::cps[abi:cxx11](SessionLoginReq);
    std::string::operator=(&this->cps_, v29);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_json_climate_type_);
    }
    if ( this->cur_json_climate_type_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      SceneComp = Player::getSceneComp(this->player_);
      PlayerSceneComp::setLastAreaPlayType(SceneComp, 1u);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    common::tools::perf::make_shared<PlayerLoginEvent,unsigned int &,unsigned int &>(
      (unsigned int *)&__r,
      &this->last_login_time_,
      &this->cur_login_time_,
      &this->last_login_time_);
    std::shared_ptr<BaseEvent>::shared_ptr<PlayerLoginEvent,void>((std::shared_ptr<BaseEvent> *const)&v37, &__r);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v37);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v37);
    std::shared_ptr<PlayerLoginEvent>::~shared_ptr(&__r);
    result = 0;
  }
  if ( v39 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 326: range 00000000171AE1A8-00000000171AE217
int32_t __cdecl PlayerBasicComp::onLogout(PlayerBasicComp *const this)
{
  __int64 Now; // rsi
  uint32_t *p_last_logout_time; // rdx
  uint64_t NowMs; // rdx

  Now = (unsigned int)common::tools::TimeUtils::getNow();
  p_last_logout_time = &this->last_logout_time_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_logout_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_logout_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_logout_time_, Now, p_last_logout_time);
  }
  this->last_logout_time_ = Now;
  NowMs = common::tools::TimeUtils::getNowMs();
  PlayerBasicComp::notifyPlayerDataToMulti(this, NowMs);
  return 0;
};

// Line 333: range 00000000171AE218-00000000171AE232
void __cdecl PlayerBasicComp::onDailyRefresh(PlayerBasicComp *const this)
{
  PlayerBasicComp::updateTotalLoginDays(this);
};

// Line 338: range 00000000171AE234-00000000171AE33F
bool __cdecl PlayerBasicComp::isFirstLoginToday(const PlayerBasicComp *const this)
{
  time_t DayTime; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_login_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_login_time_);
  }
  if ( !this->last_login_time_ )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_login_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_login_time_);
  }
  DayTime = common::tools::TimeUtils::getDayTime(this->last_login_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_login_time_);
  }
  return DayTime != common::tools::TimeUtils::getDayTime(this->cur_login_time_);
};

// Line 345: range 00000000171AE340-00000000171AE517
void __cdecl PlayerBasicComp::updateTotalLoginDays(PlayerBasicComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  time_t v2; // rdx
  time_t v3; // rcx
  common::milog::MiLogStream *v4; // rax
  uint32_t now; // [rsp+18h] [rbp-48h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  v2 = time_offset;
  v3 = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->update_login_days_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->update_login_days_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->update_login_days_time_);
  }
  if ( !common::tools::TimeUtils::isSameDay(this->update_login_days_time_, v3, v2) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_login_days_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_login_days_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->total_login_days_);
    }
    ++this->total_login_days_;
    if ( *(_BYTE *)(((unsigned __int64)&this->update_login_days_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->update_login_days_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(
        &this->update_login_days_time_,
        (((_BYTE)this - 20) & 7u) + 3,
        &this->update_login_days_time_);
    }
    this->update_login_days_time_ = now;
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "updateTotalLoginDays",
      352);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"total_login_days_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->total_login_days_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 358: range 00000000171AE518-00000000171AE56C
int32_t __cdecl PlayerBasicComp::notifyAllData(PlayerBasicComp *const this)
{
  uint64_t NowMs; // rdx

  PlayerBasicComp::notifyNicknameAuditData(this);
  PlayerBasicComp::notifyAllPlayerLevelRewardData(this);
  PlayerBasicComp::notifyExclusiveRuleData(this);
  NowMs = common::tools::TimeUtils::getNowMs();
  PlayerBasicComp::notifyPlayerDataToMulti(this, NowMs);
  return PlayerBasicComp::notifyAllOpenStateData(this);
};

// Line 368: range 00000000171AE56E-00000000171AE885
int32_t __cdecl PlayerBasicComp::onDisconnect(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r13
  int32_t result; // eax
  uint32_t online_time; // ecx
  int v13; // esi
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 now:370";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::onDisconnect;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  v4 = ((_BYTE)this + 52) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_online_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_online_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_online_, v4, v5);
  this->is_online_ = 0;
  *(_DWORD *)(v1 + 32) = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_login_time_);
  }
  if ( this->cur_login_time_ <= *(_DWORD *)(v1 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->online_time_);
    }
    online_time = this->online_time_;
    v13 = *(_DWORD *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_login_time_);
    }
    this->online_time_ = online_time + v13 - this->cur_login_time_;
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "onDisconnect",
      373);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"cur_login_time:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->cur_login_time_);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" now:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
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

// Line 382: range 00000000171AE886-00000000171AED05
int32_t __cdecl PlayerBasicComp::fromExtraBin(
        PlayerBasicComp *const this,
        const proto::PlayerExtraBinData *player_extra_bin_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<proto::SecurityCheckType,SecurityAntiOfflineData>::mapped_type *v5; // rax
  proto::SecurityCheckType v6; // ecx
  char v7; // dl
  char *v8; // rsi
  __int64 v9; // rdx
  google::protobuf::uint32 v10; // ecx
  char v11; // dl
  __int64 v12; // rdx
  google::protobuf::uint32 v13; // ecx
  char v14; // dl
  __int64 v15; // rdx
  google::protobuf::uint32 v16; // ecx
  char v17; // dl
  __int64 v18; // rdx
  google::protobuf::uint32 v19; // ecx
  char v20; // dl
  __int64 v21; // rdx
  google::protobuf::uint32 v22; // ecx
  char v23; // dl
  __int64 v24; // rdx
  google::protobuf::uint32 v25; // ecx
  char v26; // dl
  __int64 v27; // rdx
  google::protobuf::uint32 v28; // ecx
  char v29; // dl
  __int64 v30; // rdx
  int32_t result; // eax
  const google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin> *__for_range; // [rsp+18h] [rbp-B8h]
  google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_reference p__; // [rsp+20h] [rbp-B0h]
  SecurityAntiOfflineData *data; // [rsp+28h] [rbp-A8h]
  google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_iterator __for_begin; // [rsp+30h] [rbp-A0h] BYREF
  google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_iterator __for_end; // [rsp+50h] [rbp-80h] BYREF
  char v37[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 check_type:386";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::fromExtraBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::map<proto::SecurityCheckType,SecurityAntiOfflineData>::clear(&this->security_anti_offline_data_map_);
  __for_range = proto::PlayerExtraBinData::anti_offline_data_map(player_extra_bin_data);
  google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p__ = google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_iterator::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::SecurityAntiOfflineDataBin::security_check_type(&p__->second);
    v8 = (char *)(v2 + 32);
    v5 = std::map<proto::SecurityCheckType,SecurityAntiOfflineData>::operator[](
           &this->security_anti_offline_data_map_,
           (const std::map<proto::SecurityCheckType,SecurityAntiOfflineData>::key_type *)(v2 + 32));
    data = v5;
    v6 = *(_DWORD *)(v2 + 32);
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v7 != 0;
    v9 = (v7 != 0) & (unsigned __int8)((char)(((unsigned __int8)v5 & 7) + 3) >= v7);
    if ( (_BYTE)v9 )
      __asan_report_store4(v5, v8, v9);
    data->security_check_type = v6;
    v10 = proto::SecurityAntiOfflineDataBin::security_level(&p__->second);
    v11 = *(_BYTE *)(((unsigned __int64)&data->security_level >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v11 != 0;
    v12 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)data + 4) & 7) + 3) >= v11);
    if ( (_BYTE)v12 )
      __asan_report_store4(&data->security_level, v8, v12);
    data->security_level = v10;
    v13 = proto::SecurityAntiOfflineDataBin::succ_num(&p__->second);
    v14 = *(_BYTE *)(((unsigned __int64)&data->succ_num >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v14 != 0;
    v15 = (v14 != 0) & (unsigned __int8)((char)((((_BYTE)data + 8) & 7) + 3) >= v14);
    if ( (_BYTE)v15 )
      __asan_report_store4(&data->succ_num, v8, v15);
    data->succ_num = v13;
    v16 = proto::SecurityAntiOfflineDataBin::empty_num(&p__->second);
    v17 = *(_BYTE *)(((unsigned __int64)&data->empty_num >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v17 != 0;
    v18 = (v17 != 0) & (unsigned __int8)((char)((((_BYTE)data + 12) & 7) + 3) >= v17);
    if ( (_BYTE)v18 )
      __asan_report_store4(&data->empty_num, v8, v18);
    data->empty_num = v16;
    v19 = proto::SecurityAntiOfflineDataBin::decrypt_fail_num(&p__->second);
    v20 = *(_BYTE *)(((unsigned __int64)&data->decrypt_fail_num >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v20 != 0;
    v21 = (v20 != 0) & (unsigned __int8)((char)((((_BYTE)data + 16) & 7) + 3) >= v20);
    if ( (_BYTE)v21 )
      __asan_report_store4(&data->decrypt_fail_num, v8, v21);
    data->decrypt_fail_num = v19;
    v22 = proto::SecurityAntiOfflineDataBin::verify_fail_num(&p__->second);
    v23 = *(_BYTE *)(((unsigned __int64)&data->verify_fail_num >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v23 != 0;
    v24 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)data + 20) & 7) + 3) >= v23);
    if ( (_BYTE)v24 )
      __asan_report_store4(&data->verify_fail_num, v8, v24);
    data->verify_fail_num = v22;
    v25 = proto::SecurityAntiOfflineDataBin::cur_succ_num(&p__->second);
    v26 = *(_BYTE *)(((unsigned __int64)&data->cur_succ_num >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v26 != 0;
    v27 = (v26 != 0) & (unsigned __int8)((char)((((_BYTE)data + 24) & 7) + 3) >= v26);
    if ( (_BYTE)v27 )
      __asan_report_store4(&data->cur_succ_num, v8, v27);
    data->cur_succ_num = v25;
    v28 = proto::SecurityAntiOfflineDataBin::cur_fail_num(&p__->second);
    v29 = *(_BYTE *)(((unsigned __int64)&data->cur_fail_num >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v29 != 0;
    v30 = (v29 != 0) & (unsigned __int8)((char)((((_BYTE)data + 28) & 7) + 3) >= v29);
    if ( (_BYTE)v30 )
      __asan_report_store4(&data->cur_fail_num, v8, v30);
    data->cur_fail_num = v28;
    google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::const_iterator::operator++(&__for_begin);
  }
  result = 0;
  if ( v37 == (char *)v2 )
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

// Line 402: range 00000000171AED06-00000000171AF08A
int32_t __cdecl PlayerBasicComp::toExtraBin(
        PlayerBasicComp *const this,
        proto::PlayerExtraBinData *player_extra_bin_data)
{
  std::tuple_element<1,const std::pair<const proto::SecurityCheckType,SecurityAntiOfflineData> >::type *v2; // rax
  google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::key_type key; // [rsp+1Ch] [rbp-44h] BYREF
  std::map<proto::SecurityCheckType,SecurityAntiOfflineData>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<proto::SecurityCheckType,SecurityAntiOfflineData>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin> *proto_anti_offline_data_map; // [rsp+30h] [rbp-30h]
  std::map<proto::SecurityCheckType,SecurityAntiOfflineData> *__for_range; // [rsp+38h] [rbp-28h]
  const std::pair<const proto::SecurityCheckType,SecurityAntiOfflineData> *v9; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<const proto::SecurityCheckType,SecurityAntiOfflineData> >::type *_; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<const proto::SecurityCheckType,SecurityAntiOfflineData> >::type *data; // [rsp+50h] [rbp-10h]
  proto::SecurityAntiOfflineDataBin *data_bin; // [rsp+58h] [rbp-8h]

  proto_anti_offline_data_map = proto::PlayerExtraBinData::mutable_anti_offline_data_map(player_extra_bin_data);
  __for_range = &this->security_anti_offline_data_map_;
  __for_begin._M_node = std::map<proto::SecurityCheckType,SecurityAntiOfflineData>::begin(&this->security_anti_offline_data_map_)._M_node;
  __for_end._M_node = std::map<proto::SecurityCheckType,SecurityAntiOfflineData>::end(&this->security_anti_offline_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<proto::SecurityCheckType const,SecurityAntiOfflineData>>::operator*(&__for_begin);
    _ = std::get<0ul,proto::SecurityCheckType const,SecurityAntiOfflineData>(v9);
    v2 = (std::tuple_element<1,const std::pair<const proto::SecurityCheckType,SecurityAntiOfflineData> >::type *)std::get<1ul,proto::SecurityCheckType const,SecurityAntiOfflineData>(v9);
    data = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    key = data->security_check_type;
    data_bin = google::protobuf::Map<unsigned int,proto::SecurityAntiOfflineDataBin>::operator[](
                 proto_anti_offline_data_map,
                 &key);
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data);
    }
    proto::SecurityAntiOfflineDataBin::set_security_check_type(data_bin, data->security_check_type);
    if ( *(_BYTE *)(((unsigned __int64)&data->security_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->security_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->security_level);
    }
    proto::SecurityAntiOfflineDataBin::set_security_level(data_bin, data->security_level);
    if ( *(_BYTE *)(((unsigned __int64)&data->succ_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->succ_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->succ_num);
    }
    proto::SecurityAntiOfflineDataBin::set_succ_num(data_bin, data->succ_num);
    if ( *(_BYTE *)(((unsigned __int64)&data->empty_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->empty_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->empty_num);
    }
    proto::SecurityAntiOfflineDataBin::set_empty_num(data_bin, data->empty_num);
    if ( *(_BYTE *)(((unsigned __int64)&data->decrypt_fail_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->decrypt_fail_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->decrypt_fail_num);
    }
    proto::SecurityAntiOfflineDataBin::set_decrypt_fail_num(data_bin, data->decrypt_fail_num);
    if ( *(_BYTE *)(((unsigned __int64)&data->verify_fail_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->verify_fail_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->verify_fail_num);
    }
    proto::SecurityAntiOfflineDataBin::set_verify_fail_num(data_bin, data->verify_fail_num);
    if ( *(_BYTE *)(((unsigned __int64)&data->cur_succ_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->cur_succ_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->cur_succ_num);
    }
    proto::SecurityAntiOfflineDataBin::set_cur_succ_num(data_bin, data->cur_succ_num);
    if ( *(_BYTE *)(((unsigned __int64)&data->cur_fail_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->cur_fail_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&data->cur_fail_num);
    }
    proto::SecurityAntiOfflineDataBin::set_cur_fail_num(data_bin, data->cur_fail_num);
    std::_Rb_tree_iterator<std::pair<proto::SecurityCheckType const,SecurityAntiOfflineData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 421: range 00000000171AF08C-00000000171AF1CB
int32_t __cdecl PlayerBasicComp::start(PlayerBasicComp *const this)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( !common::tools::MiTimer::isActive(&this->climate_meter_timer_)
    && PlayerTimer::startMS(
         &this->climate_meter_timer_,
         0x3E8u,
         1,
         "./src/player/basic/player_basic_comp.cpp",
         "start",
         422) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "start",
      424);
    v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v5,
           (const char (*)[40])"climate_meter_timer_ start failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    PlayerBasicComp::startNaturlaDailyRefreshTimer(this);
    return 0;
  }
};

// Line 432: range 00000000171AF1CC-00000000171AF838
void __cdecl PlayerBasicComp::initEventObservers(PlayerBasicComp *const this)
{
  unsigned __int64 p_M_bucket_count; // r13
  __int64 v2; // rax
  _DWORD *v3; // r14
  PlayerEventComp *event_comp; // [rsp+88h] [rbp-128h]
  PlayerEventComp v5; // [rsp+90h] [rbp-120h] BYREF

  p_M_bucket_count = (unsigned __int64)&v5.event_center_.observer_list_map_._M_h._M_bucket_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_bucket_count = v2;
  }
  *(_QWORD *)p_M_bucket_count = 1102416563LL;
  *(_QWORD *)(p_M_bucket_count + 8) = "2 32 16 12 this_ptr:433 64 16 12 this_wtr:439";
  *(_QWORD *)(p_M_bucket_count + 16) = PlayerBasicComp::initEventObservers;
  v3 = (_DWORD *)(p_M_bucket_count >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerBasicComp>((PlayerBasicComp *)(p_M_bucket_count + 32));
  if ( std::operator==<PlayerBasicComp>(0LL, (const std::shared_ptr<PlayerBasicComp> *)(p_M_bucket_count + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "initEventObservers",
      436);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const char (*)[48])"dynamic_pointer_cast to PlayerBasictComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
  }
  else
  {
    std::weak_ptr<PlayerBasicComp>::weak_ptr<PlayerBasicComp,void>(
      (std::weak_ptr<PlayerBasicComp> *const)(p_M_bucket_count + 64),
      (const std::shared_ptr<PlayerBasicComp> *)(p_M_bucket_count + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerBasicComp>::weak_ptr(
      (std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerBasicComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerBasicComp,FinishParentQuestEvent>(
      &v5,
      (std::weak_ptr<PlayerBasicComp> *)event_comp,
      (void (*)(PlayerBasicComp *, const FinishParentQuestEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5);
    std::weak_ptr<PlayerBasicComp>::~weak_ptr((std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerBasicComp>::weak_ptr(
      (std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerBasicComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerBasicComp,PostEnterSceneEvent>(
      (PlayerEventComp *const)&v5._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerBasicComp> *)event_comp,
      (void (*)(PlayerBasicComp *, const PostEnterSceneEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5._M_weak_this._M_refcount);
    std::weak_ptr<PlayerBasicComp>::~weak_ptr((std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerBasicComp>::weak_ptr(
      (std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerBasicComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerBasicComp,ChangeAvatarEvent>(
      (PlayerEventComp *const)&v5.event_center_,
      (std::weak_ptr<PlayerBasicComp> *)event_comp,
      (void (*)(PlayerBasicComp *, const ChangeAvatarEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5.event_center_);
    std::weak_ptr<PlayerBasicComp>::~weak_ptr((std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerBasicComp>::weak_ptr(
      (std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerBasicComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerBasicComp,EnterCombatEvent>(
      (PlayerEventComp *const)&v5.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerBasicComp> *)event_comp,
      (void (*)(PlayerBasicComp *, const EnterCombatEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerBasicComp>::~weak_ptr((std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerBasicComp>::weak_ptr(
      (std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerBasicComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerBasicComp,LeaveCombatEvent>(
      (PlayerEventComp *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerBasicComp> *)event_comp,
      (void (*)(PlayerBasicComp *, const LeaveCombatEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerBasicComp>::~weak_ptr((std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerBasicComp>::weak_ptr(
      (std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerBasicComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerBasicComp,AvatarCosumeChangeEvent>(
      (PlayerEventComp *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (std::weak_ptr<PlayerBasicComp> *)event_comp,
      (void (*)(PlayerBasicComp *, const AvatarCosumeChangeEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerBasicComp>::~weak_ptr((std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerBasicComp>::weak_ptr(
      (std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<PlayerBasicComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerBasicComp,ClimateMeterFullEvent>(
      (PlayerEventComp *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (std::weak_ptr<PlayerBasicComp> *)event_comp,
      (void (*)(PlayerBasicComp *, const ClimateMeterFullEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerBasicComp>::~weak_ptr((std::weak_ptr<PlayerBasicComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerBasicComp>::~weak_ptr((std::weak_ptr<PlayerBasicComp> *const)(p_M_bucket_count + 64));
  }
  std::shared_ptr<PlayerBasicComp>::~shared_ptr((std::shared_ptr<PlayerBasicComp> *const)(p_M_bucket_count + 32));
  if ( &v5.event_center_.observer_list_map_._M_h._M_bucket_count == (std::_Hashtable<std::type_index,std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,std::allocator<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> > >,std::__detail::_Select1st,std::equal_to<std::type_index>,std::hash<std::type_index>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *)p_M_bucket_count )
  {
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_bucket_count >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_bucket_count = 1172321806LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_bucket_count >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 455: range 00000000171AF83A-00000000171AF940
void __cdecl PlayerBasicComp::onFinishParentQuestEvent(
        PlayerBasicComp *const this,
        const FinishParentQuestEvent *event)
{
  PlayerExcelConfigMgr *p_player_config_mgr; // rcx
  bool CanUnlockWorldLevel; // bl
  bool isLogin; // dl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_player_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.txt_config_mgr.player_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  CanUnlockWorldLevel = PlayerExcelConfigMgr::isParentQuestIdCanUnlockWorldLevel(
                          p_player_config_mgr,
                          event->parent_quest_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( CanUnlockWorldLevel )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    isLogin = Player::isLogin(this->player_);
    PlayerBasicComp::tryUpgradeWorldLevel(this, PROP_CHANGE_FINISH_QUEST, isLogin);
  }
};

// Line 466: range 00000000171AF942-00000000171AF960
void __cdecl PlayerBasicComp::onPostEnterSceneEvent(PlayerBasicComp *const this, const PostEnterSceneEvent *event)
{
  PlayerBasicComp::refreshCurrentClimateServerBuffs(this);
};

// Line 471: range 00000000171AF962-00000000171AF98E
void __cdecl PlayerBasicComp::onChangeAvatarEvent(PlayerBasicComp *const this, const ChangeAvatarEvent *event)
{
  StatLogReporter::onChangeAvatarEvent(&this->stat_log_reporter_, event);
};

// Line 476: range 00000000171AF990-00000000171AF9B4
void __cdecl PlayerBasicComp::onEnterCombatEvent(PlayerBasicComp *const this, const EnterCombatEvent *event)
{
  StatLogReporter::onCombatStateChange(&this->stat_log_reporter_);
};

// Line 481: range 00000000171AF9B6-00000000171AF9DA
void __cdecl PlayerBasicComp::onLeaveCombatEvent(PlayerBasicComp *const this, const LeaveCombatEvent *event)
{
  StatLogReporter::onCombatStateChange(&this->stat_log_reporter_);
};

// Line 486: range 00000000171AF9DC-00000000171AFF99
void __cdecl PlayerBasicComp::onAvatarCostumeChange(PlayerBasicComp *const this, const AvatarCosumeChangeEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t avatar_id; // ecx
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  uint32_t v18; // ecx
  char v19; // dl
  Player *player; // rsi
  __int64 v21; // rdx
  proto::ProfilePicture *v22; // rax
  char v23[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 costume_id:497 64 16 21 formal_avatar_ptr:491 96 32 10 notify:504";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::onAvatarCostumeChange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->profile_picture_);
  }
  avatar_id = this->profile_picture_.avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->avatar_id);
  }
  if ( avatar_id == event->avatar_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&event->avatar_guid >> 3) + 0x7FFF8000) )
      __asan_report_load8(&event->avatar_guid);
    PlayerAvatarComp::findFormalAvatar(
      (const PlayerAvatarComp *const)(v2 + 64),
      (uint64_t)AvatarComp,
      event->avatar_guid);
    if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/basic/player_basic_comp.cpp",
        "onAvatarCostumeChange",
        494);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[32])"find formal avatar fail. guid: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &event->avatar_guid);
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" avatar id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->avatar_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    }
    else
    {
      v11 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      *(_DWORD *)(v2 + 48) = Avatar::getCostumeId(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->profile_picture_.costume_id);
      }
      if ( this->profile_picture_.costume_id != *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/basic/player_basic_comp.cpp",
          "onAvatarCostumeChange",
          502);
        v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                (common::milog::MiLogStream *const)(v2 + 96),
                (const char (*)[50])"[ProfilePicture]onAvatarCostumeChange avatar id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &event->avatar_id);
        v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" costume_id: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                &this->profile_picture_.costume_id);
        v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v15,
                (const char (*)[18])" new costume_id: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        player = this->player_;
        operator<<(v17, player);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        v18 = *(_DWORD *)(v2 + 48);
        v19 = *(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3) + 0x7FFF8000);
        LOBYTE(player) = v19 != 0;
        v21 = (v19 != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= v19);
        if ( (_BYTE)v21 )
          __asan_report_store4(&this->profile_picture_.costume_id, player, v21);
        this->profile_picture_.costume_id = v18;
        proto::ProfilePictureChangeNotify::ProfilePictureChangeNotify((proto::ProfilePictureChangeNotify *const)(v2 + 96));
        v22 = proto::ProfilePictureChangeNotify::mutable_profile_picture((proto::ProfilePictureChangeNotify *const)(v2 + 96));
        ProfilePicture::toClient(&this->profile_picture_, v22);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
        proto::ProfilePictureChangeNotify::~ProfilePictureChangeNotify((proto::ProfilePictureChangeNotify *const)(v2 + 96));
      }
    }
    std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 64));
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 510: range 00000000171AFF9A-00000000171AFFB8
void __cdecl PlayerBasicComp::onClimateMeterFullEvent(PlayerBasicComp *const this, const ClimateMeterFullEvent *event)
{
  PlayerBasicComp::checkTransferPlayerOnTransClimateFull(this);
};

// Line 518: range 00000000171AFFBA-00000000171B034F
uint32_t __cdecl PlayerBasicComp::getOnlineTime(const PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t result; // eax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  uint32_t online_time; // ecx
  int v11; // esi
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 now:523";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::getOnlineTime;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_online_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_online_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_online_);
  }
  if ( !this->is_online_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->online_time_);
    }
    result = this->online_time_;
  }
  else
  {
    *(_DWORD *)(v1 + 32) = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_login_time_);
    }
    if ( this->cur_login_time_ <= *(_DWORD *)(v1 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->online_time_);
      }
      online_time = this->online_time_;
      v11 = *(_DWORD *)(v1 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_login_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_login_time_);
      }
      result = online_time + v11 - this->cur_login_time_;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/basic/player_basic_comp.cpp",
        "getOnlineTime",
        526);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v13, (const char (*)[16])"cur_login_time:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_login_time_);
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" now:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->online_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->online_time_);
      }
      result = this->online_time_;
    }
  }
  if ( v14 == (char *)v1 )
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

// Line 534: range 00000000171B0350-00000000171B04B3
void __cdecl PlayerBasicComp::updateGameTime(PlayerBasicComp *const this)
{
  __int64 v1; // rsi
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t now; // [rsp+18h] [rbp-8h]
  unsigned int diff_time; // [rsp+1Ch] [rbp-4h]

  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_game_time_update_time_);
  }
  if ( this->last_game_time_update_time_ && now > this->last_game_time_update_time_ )
  {
    diff_time = now - this->last_game_time_update_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->game_time_);
    }
    v1 = diff_time;
    v2 = SAFE_ADD<unsigned int,unsigned int>(this->game_time_, diff_time);
    v3 = *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000);
    LOBYTE(v1) = v3 != 0;
    v4 = (v3 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v3);
    if ( (_BYTE)v4 )
      __asan_report_store4(&this->game_time_, v1, v4);
    this->game_time_ = v2;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_game_time_update_time_, v1, &this->last_game_time_update_time_);
  }
  this->last_game_time_update_time_ = now;
};

// Line 546: range 00000000171B04B4-00000000171B0524
uint32_t __cdecl PlayerBasicComp::getGameTime(PlayerBasicComp *const this)
{
  if ( PlayerBasicComp::isGameTimeRunnable(this) )
    PlayerBasicComp::updateGameTime(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->game_time_);
  }
  return this->game_time_;
};

// Line 556: range 00000000171B0526-00000000171B07EE
uint32_t __cdecl PlayerBasicComp::getGameHour(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t result; // eax
  uint32_t hour; // [rsp+1Ch] [rbp-B4h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 20 game_day_seconds:557 64 4 21 game_hour_seconds:558";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::getGameHour;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  *(_DWORD *)(v1 + 48) = ConstValueExcelConfigMgr::getGameDaySeconds(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  *(_DWORD *)(v1 + 64) = ConstValueExcelConfigMgr::getGameHourSeconds(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( *(_DWORD *)(v1 + 48) && *(_DWORD *)(v1 + 64) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->game_time_);
    }
    hour = this->game_time_ % *(_DWORD *)(v1 + 48) / *(_DWORD *)(v1 + 64);
    if ( hour > 0x18 )
      hour -= 24;
    result = hour;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "getGameHour",
      561);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v12, (const char (*)[18])"game_day_seconds:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])" game_hour_seconds:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 64));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0;
  }
  if ( v13 == (char *)v1 )
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

// Line 576: range 00000000171B07F0-00000000171B099C
uint32_t __cdecl PlayerBasicComp::getGameMinuteInDay(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  uint32_t result; // eax
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 20 game_day_seconds:577";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::getGameMinuteInDay;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  *(_DWORD *)(v1 + 32) = ConstValueExcelConfigMgr::getGameDaySeconds(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( *(_DWORD *)(v1 + 32) )
  {
    result = PlayerBasicComp::getGameTime(this) % *(_DWORD *)(v1 + 32);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "getGameMinuteInDay",
      580);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"game_day_seconds:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0;
  }
  if ( v9 == (char *)v1 )
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

// Line 588: range 00000000171B099E-00000000171B0A97
bool __cdecl PlayerBasicComp::checkAndUpdateSetGameTimeCd(PlayerBasicComp *const this)
{
  common::milog::MiLogStream *v2; // rax
  uint64_t now_ms; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  now_ms = common::tools::TimeUtils::getNowMs();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_set_game_time_by_client_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_set_game_time_by_client_time_ms_);
  if ( now_ms <= this->last_set_game_time_by_client_time_ms_ + 1000 )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "checkAndUpdateSetGameTimeCd",
      596);
    v2 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(&v4, (const char (*)[67])off_260483C0);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
      v2,
      &this->last_set_game_time_by_client_time_ms_);
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    this->last_set_game_time_by_client_time_ms_ = now_ms;
  }
  return 1;
};

// Line 602: range 00000000171B0A98-00000000171B0B16
int32_t __cdecl PlayerBasicComp::setGameTime(
        PlayerBasicComp *const this,
        uint32_t game_time,
        uint32_t extra_days,
        bool is_notify_others)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 94) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_time_locked_);
  }
  if ( this->is_game_time_locked_ )
    return 0;
  else
    return PlayerBasicComp::forceSetGameTime(this, game_time, extra_days, is_notify_others);
};

// Line 612: range 00000000171B0B18-00000000171B1479
__int64 __fastcall PlayerBasicComp::forceSetGameTime(
        PlayerBasicComp *const this,
        uint32_t game_time,
        uint32_t extra_days,
        bool is_notify_others)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t OwnerUid; // r14d
  char v9; // al
  unsigned int v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int v18; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  uint32_t v22; // ecx
  char v23; // dl
  Player *player; // rsi
  __int64 v25; // rdx
  __int64 Now; // rsi
  PlayerWorldScene *v27; // rax
  PlayerActivityComp *ActivityComp; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  uint32_t new_game_time; // [rsp+28h] [rbp-128h]
  uint32_t hour; // [rsp+2Ch] [rbp-124h]
  std::shared_ptr<Config> v35; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v36; // [rsp+40h] [rbp-110h] BYREF
  char v37[240]; // [rsp+60h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 20 game_day_seconds:619 48 4 19 cur_day_seconds:627 64 4 19 new_day_seconds:628 80 4 13 g"
                        "ame_time:611 96 16 13 scene_ptr:613 128 16 19 world_scene_ptr:656 160 16 13 event_ptr:664";
  *(_QWORD *)(v4 + 16) = PlayerBasicComp::forceSetGameTime;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  *(_DWORD *)(v4 + 80) = game_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 96));
  if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 96), 0LL) )
    goto LABEL_11;
  v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  OwnerUid = Scene::getOwnerUid(v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( OwnerUid == Player::getUid(this->player_) )
LABEL_11:
    v9 = 0;
  else
    v9 = 1;
  if ( v9 )
  {
    v10 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    *(_DWORD *)(v4 + 32) = ConstValueExcelConfigMgr::getGameDaySeconds(&v11->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v35);
    if ( *(_DWORD *)(v4 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_time_);
      }
      if ( this->game_time_ > *(_DWORD *)(v4 + 80) )
      {
        *(_DWORD *)(v4 + 48) = this->game_time_ % *(_DWORD *)(v4 + 32);
        *(_DWORD *)(v4 + 64) = *(_DWORD *)(v4 + 80) % *(_DWORD *)(v4 + 32);
        if ( *(_DWORD *)(v4 + 64) < *(_DWORD *)(v4 + 48) )
          *(_DWORD *)(v4 + 64) += *(_DWORD *)(v4 + 32);
        if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->game_time_);
        }
        new_game_time = *(_DWORD *)(v4 + 64) - *(_DWORD *)(v4 + 48) + this->game_time_;
        if ( new_game_time < this->game_time_ )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/basic/player_basic_comp.cpp",
            "forceSetGameTime",
            638);
          v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v36, (const char (*)[12])"game_time_:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->game_time_);
          v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v14,
                  (const char (*)[18])" cur_day_seconds:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v4 + 48));
          v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v16,
                  (const char (*)[18])" new_day_seconds:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 64));
          common::milog::MiLogStream::~MiLogStream(&v36);
        }
        else
        {
          *(_DWORD *)(v4 + 80) = new_game_time;
        }
      }
      v18 = SAFE_MULTIPLY<unsigned int,unsigned int>(extra_days, *(_DWORD *)(v4 + 32));
      *(_DWORD *)(v4 + 80) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v4 + 80), v18);
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/basic/player_basic_comp.cpp",
        "forceSetGameTime",
        643);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(&v36, &this->game_time_);
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" ==> ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      player = this->player_;
      operator<<(v21, player);
      common::milog::MiLogStream::~MiLogStream(&v36);
      v22 = *(_DWORD *)(v4 + 80);
      v23 = *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000);
      LOBYTE(player) = v23 != 0;
      v25 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= v23);
      if ( (_BYTE)v25 )
        __asan_report_store4(&this->game_time_, player, v25);
      this->game_time_ = v22;
      Now = (unsigned int)common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_game_time_update_time_, Now, &this->last_game_time_update_time_);
      }
      this->last_game_time_update_time_ = Now;
      if ( is_notify_others )
        PlayerBasicComp::notifyGameTimeChange(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_time_);
      }
      PlayerBasicComp::updateGameTimeQuest(this, this->game_time_);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_time_);
      }
      PlayerBasicComp::tryStartGameTimer(this, this->game_time_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::findMainWorldScene((const PlayerSceneComp *const)(v4 + 128));
      if ( std::operator!=<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v4 + 128)) )
      {
        v27 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        PlayerWorldScene::refreshWeatherOnTime(v27);
      }
      hour = PlayerBasicComp::getGameHour(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ActivityComp = Player::getActivityComp(this->player_);
      PlayerActivityComp::onGameHourChange(ActivityComp, hour);
      common::tools::perf::make_shared<SetGameTimeEvent,unsigned int &>((unsigned int *)(v4 + 160), &this->game_time_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<SetGameTimeEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v35,
        (const std::shared_ptr<SetGameTimeEvent> *)(v4 + 160));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v35);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v35);
      v10 = 0;
      std::shared_ptr<SetGameTimeEvent>::~shared_ptr((std::shared_ptr<SetGameTimeEvent> *const)(v4 + 160));
      std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v4 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/basic/player_basic_comp.cpp",
        "forceSetGameTime",
        622);
      v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v36,
              (const char (*)[18])"game_day_seconds:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v36);
      v10 = -1;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
  result = v10;
  if ( v37 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 671: range 00000000171B147A-00000000171B1640
int32_t __cdecl PlayerBasicComp::notifyGameTime(PlayerBasicComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  uint32_t GameTime; // eax
  std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  uint32_t Uid; // eax
  int32_t v9; // r14d
  int32_t result; // eax
  std::shared_ptr<proto::PlayerGameTimeNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 time_notify_ptr:672";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::notifyGameTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::PlayerGameTimeNotify>();
  v5 = std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  GameTime = PlayerBasicComp::getGameTime(this);
  proto::PlayerGameTimeNotify::set_game_time(v5, GameTime);
  v7 = std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerGameTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  proto::PlayerGameTimeNotify::set_uid(v7, Uid);
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerGameTimeNotify>(&__r);
  v9 = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::PlayerGameTimeNotify>::~shared_ptr((std::shared_ptr<proto::PlayerGameTimeNotify> *const)(v2 + 32));
  result = v9;
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

// Line 680: range 00000000171B1642-00000000171B1873
std::string *__cdecl PlayerBasicComp::getNextTransNo[abi:cxx11](std::string *retstr, PlayerBasicComp *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint64_t v5; // r14
  uint32_t Uid; // eax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-F5h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-F4h]
  char v10[240]; // [rsp+20h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 128 7 buf:681";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::getNextTransNo[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450900) = -202116109;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->trans_no_count_);
  v5 = ++this->trans_no_count_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  snprintf((char *)(v2 + 32), 0x80uLL, off_26048640, Uid, now, v5);
  std::allocator<char>::allocator(&__a, 128LL);
  std::string::basic_string<std::allocator<char>>(retstr, (const char *)(v2 + 32), &__a);
  std::allocator<char>::~allocator(&__a);
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 689: range 00000000171B1874-00000000171B195D
void __cdecl PlayerBasicComp::setIsWeatherLocked(PlayerBasicComp *const this, bool is_weather_locked, bool is_notify)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  Player *player; // rbx
  proto::PropValue prop_value; // [rsp+10h] [rbp-40h] BYREF

  v3 = ((_BYTE)this - 95) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_weather_locked_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_weather_locked_, v3, v4);
  this->is_weather_locked_ = is_weather_locked;
  if ( is_notify )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    buildIntProp(&prop_value, 0x2717u, is_weather_locked);
    Player::notifyPlayerProp(player, &prop_value);
    proto::PropValue::~PropValue(&prop_value);
  }
};

// Line 698: range 00000000171B195E-00000000171B1A5E
void __cdecl PlayerBasicComp::setIsGameTimeLocked(PlayerBasicComp *const this, bool is_game_time_locked)
{
  char is_game_time_locked_by_client; // di
  bool is_in_transfer; // cl

  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_time_locked_by_client_);
  }
  is_game_time_locked_by_client = this->is_game_time_locked_by_client_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 77) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) )
  {
    is_game_time_locked_by_client = (_BYTE)this + 77;
    __asan_report_load1(&this->is_in_transfer_);
  }
  is_in_transfer = this->is_in_transfer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) )
  {
    is_game_time_locked_by_client = (_BYTE)this + 76;
    __asan_report_load1(&this->is_paused_);
  }
  PlayerBasicComp::setGameTimeRunnable(
    this,
    is_game_time_locked,
    this->is_paused_,
    is_in_transfer,
    is_game_time_locked_by_client);
};

// Line 703: range 00000000171B1A60-00000000171B1B61
void __cdecl PlayerBasicComp::setIsGameTimeLockedByClient(
        PlayerBasicComp *const this,
        bool is_game_time_locked_by_client)
{
  bool v2; // r8
  bool is_in_transfer; // cl
  char is_paused; // di

  v2 = is_game_time_locked_by_client;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 77) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_transfer_);
  }
  is_in_transfer = this->is_in_transfer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_paused_);
  }
  is_paused = this->is_paused_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 94) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) )
  {
    is_paused = (_BYTE)this - 94;
    __asan_report_load1(&this->is_game_time_locked_);
  }
  PlayerBasicComp::setGameTimeRunnable(this, this->is_game_time_locked_, is_paused, is_in_transfer, v2);
};

// Line 709: range 00000000171B1B62-00000000171B1CB3
bool __cdecl PlayerBasicComp::isGameTimeRunnable(PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 94) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_time_locked_);
  }
  if ( this->is_game_time_locked_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_paused_);
  }
  if ( this->is_paused_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 77) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_transfer_);
  }
  if ( this->is_in_transfer_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_time_locked_by_client_);
  }
  return !this->is_game_time_locked_by_client_;
};

// Line 715: range 00000000171B1CB4-00000000171B203C
void __cdecl PlayerBasicComp::setGameTimeRunnable(
        PlayerBasicComp *const this,
        bool is_game_time_locked,
        bool is_paused,
        bool is_in_transfer,
        bool is_game_time_locked_by_client)
{
  bool v5; // al
  char IsGameTimeLocked; // al
  char v7; // dl
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  Player *player; // rbx
  bool v17; // al
  __int64 Now; // rsi
  PlayerActivityComp *ActivityComp; // rax
  char old_runnable; // [rsp+29h] [rbp-47h]
  char cur_runnable; // [rsp+2Ah] [rbp-46h]
  bool is_game_time_lock_changed; // [rsp+2Bh] [rbp-45h]
  uint32_t hour; // [rsp+2Ch] [rbp-44h]
  proto::PropValue prop_value; // [rsp+30h] [rbp-40h] BYREF

  old_runnable = PlayerBasicComp::isGameTimeRunnable(this);
  v5 = !is_game_time_locked && !is_paused && !is_in_transfer && !is_game_time_locked_by_client;
  cur_runnable = v5;
  IsGameTimeLocked = PlayerBasicComp::getIsGameTimeLocked(this);
  v7 = is_game_time_locked || is_game_time_locked_by_client;
  is_game_time_lock_changed = v7 != IsGameTimeLocked;
  v8 = ((_BYTE)this - 94) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_game_time_locked_, v8, v9);
  this->is_game_time_locked_ = is_game_time_locked;
  v10 = ((_BYTE)this + 76) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_paused_, v10, v11);
  this->is_paused_ = is_paused;
  v12 = ((_BYTE)this + 77) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_in_transfer_, v12, v13);
  this->is_in_transfer_ = is_in_transfer;
  v14 = ((_BYTE)this - 93) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_game_time_locked_by_client_, v14, v15);
  this->is_game_time_locked_by_client_ = is_game_time_locked_by_client;
  if ( is_game_time_lock_changed )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    v17 = PlayerBasicComp::getIsGameTimeLocked(this);
    buildIntProp(&prop_value, 0x2718u, v17);
    Player::notifyPlayerProp(player, &prop_value);
    proto::PropValue::~PropValue(&prop_value);
  }
  if ( old_runnable != cur_runnable )
  {
    if ( cur_runnable )
    {
      Now = (unsigned int)common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_game_time_update_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_game_time_update_time_, Now, &this->last_game_time_update_time_);
      }
      this->last_game_time_update_time_ = Now;
      PlayerBasicComp::tryStartGameTimer(this, 0);
      PlayerBasicComp::notifyGameTimeChange(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_time_);
      }
      PlayerBasicComp::updateGameTimeQuest(this, this->game_time_);
      hour = PlayerBasicComp::getGameHour(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ActivityComp = Player::getActivityComp(this->player_);
      PlayerActivityComp::onGameHourChange(ActivityComp, hour);
    }
    else
    {
      PlayerBasicComp::updateGameTime(this);
      PlayerBasicComp::stopGameTimer(this);
    }
  }
};

// Line 752: range 00000000171B203E-00000000171B20CF
float __cdecl PlayerBasicComp::getCurStamina(PlayerBasicComp *const this)
{
  float cur_persist_stamina; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_persist_stamina_);
  }
  cur_persist_stamina = this->cur_persist_stamina_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_temporary_stamina_);
  }
  return this->cur_temporary_stamina_ + cur_persist_stamina;
};

// Line 757: range 00000000171B20D0-00000000171B2196
float __cdecl PlayerBasicComp::getMaxStamina(PlayerBasicComp *const this)
{
  __m128i v1; // xmm0
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  PlayerGmComp *GmComp; // rax
  float stamina_limit; // [rsp+18h] [rbp-18h]
  float gm_limit; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getStaminaLimit(&v2->design_config.txt_config_mgr.const_value_config_mgr);
  stamina_limit = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GmComp = Player::getGmComp(this->player_);
  *(float *)v1.m128i_i32 = PlayerGmComp::getGmSetValue<float>(GmComp, 0xAu);
  gm_limit = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  if ( gm_limit <= 0.0 )
    return PlayerBasicComp::getPersistStaminaLimit(this) + stamina_limit;
  else
    return gm_limit;
};

// Line 768: range 00000000171B2198-00000000171B3876
__int64 __fastcall PlayerBasicComp::changeCurStamina(
        PlayerBasicComp *const this,
        float delta,
        unsigned __int64 param,
        bool is_notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rsi
  __m128i cur_temporary_stamina_low; // xmm0
  PlayerGmComp *GmComp; // rax
  float v10; // ecx
  char v11; // dl
  __int64 v12; // rdx
  float *v13; // rax
  float *v14; // rdx
  char v15; // cl
  float *p_b; // rsi
  float v17; // xmm0_4
  uint64_t player_time_ms; // rdx
  __m128i v19; // xmm0
  float *v20; // rax
  float *v21; // rdx
  float v22; // xmm0_4
  __int64 v23; // rdx
  __m128i v24; // xmm0
  float *v25; // rax
  float *v26; // rdx
  float v27; // xmm0_4
  __int64 v28; // rdx
  __int64 v29; // rsi
  __m128i low_limit_low; // xmm0
  uint32_t anticheat_stamina_log_count; // ecx
  Entity *v32; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  proto_log::EntityLog *v34; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // r14
  JsonConfigMgr *p_json_config_mgr; // rcx
  const std::string *v41; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r14
  JsonConfigMgr *v43; // rcx
  const std::string *v44; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rcx
  Player *player; // r14
  float v48; // ecx
  char v49; // dl
  __int64 v50; // rdx
  __int64 v51; // rdi
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r14
  JsonConfigMgr *v65; // rcx
  const std::string *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // r14
  JsonConfigMgr *v69; // rcx
  const std::string *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  Player *v75; // rbx
  Player *v76; // rcx
  proto::PropChangeReason v77; // esi
  Player *v78; // rbx
  Player *v79; // rcx
  proto::PropChangeReason v80; // edx
  __int64 result; // rax
  float __a; // [rsp+24h] [rbp-12Ch] BYREF
  float __b; // [rsp+28h] [rbp-128h] BYREF
  float old_persist_stamina; // [rsp+2Ch] [rbp-124h]
  float old_temporary_stamina_; // [rsp+30h] [rbp-120h]
  float sub_stamina; // [rsp+34h] [rbp-11Ch]
  const StaminaCheckConfig *config; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> v91; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v92; // [rsp+50h] [rbp-100h] BYREF
  proto::PropValue prop_value; // [rsp+70h] [rbp-E0h] BYREF
  char v94[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 25 old_anticheat_stamina:801 48 4 9 delta:767 64 16 11 log_ptr:809 96 16 14 avatar_ptr:810";
  *(_QWORD *)(v4 + 16) = PlayerBasicComp::changeCurStamina;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(float *)(v4 + 48) = delta;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_persist_stamina_);
  }
  old_persist_stamina = this->cur_persist_stamina_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_temporary_stamina_);
  }
  cur_temporary_stamina_low = (__m128i)LODWORD(this->cur_temporary_stamina_);
  old_temporary_stamina_ = this->cur_temporary_stamina_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GmComp = Player::getGmComp(this->player_);
  if ( PlayerGmComp::getIsStaminaInfinite(GmComp) )
  {
    *(float *)cur_temporary_stamina_low.m128i_i32 = PlayerBasicComp::getMaxStamina(this);
    v10 = COERCE_FLOAT(_mm_cvtsi128_si32(cur_temporary_stamina_low));
    v11 = *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000);
    LOBYTE(v7) = v11 != 0;
    v12 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= v11);
    if ( (_BYTE)v12 )
      __asan_report_store4(&this->cur_persist_stamina_, v7, v12);
    this->cur_persist_stamina_ = v10;
  }
  else
  {
    if ( *(float *)(v4 + 48) >= 0.0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_persist_stamina_);
      }
      v19 = (__m128i)*(unsigned int *)(v4 + 48);
      __b = *(float *)v19.m128i_i32 + this->cur_persist_stamina_;
      *(float *)v19.m128i_i32 = PlayerBasicComp::getMaxStamina(this);
      LODWORD(__a) = _mm_cvtsi128_si32(v19);
      v20 = (float *)std::min<float>(&__a, &__b);
      v21 = v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      v22 = *v21;
      v23 = (*(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v23 )
        __asan_report_store4(&this->cur_persist_stamina_, (((_BYTE)this + 44) & 7u) + 3, v23);
      this->cur_persist_stamina_ = v22;
    }
    else
    {
      sub_stamina = -*(float *)(v4 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_persist_stamina_);
      }
      if ( sub_stamina <= this->cur_persist_stamina_ )
      {
        p_b = (float *)((((_BYTE)this + 44) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_persist_stamina_);
        }
        this->cur_persist_stamina_ = this->cur_persist_stamina_ - sub_stamina;
      }
      else
      {
        sub_stamina = sub_stamina - this->cur_persist_stamina_;
        this->cur_persist_stamina_ = 0.0;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_temporary_stamina_);
        }
        __b = this->cur_temporary_stamina_ - sub_stamina;
        __a = 0.0;
        p_b = &__b;
        v13 = (float *)std::max<float>(&__a, &__b);
        v14 = v13;
        v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
        LOBYTE(p_b) = v15 != 0;
        if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
          __asan_report_load4(v13);
        v17 = *v14;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->cur_temporary_stamina_, p_b, &this->cur_temporary_stamina_);
        }
        this->cur_temporary_stamina_ = v17;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_time_ms_);
      player_time_ms = this->player_time_ms_;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_stamina_cost_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_store8(&this->last_stamina_cost_time_ms_, p_b);
      this->last_stamina_cost_time_ms_ = player_time_ms;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v91);
    config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91)->security_config.stamina_check_config;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v91);
    if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)config & 7) >= *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(config);
    }
    if ( config->is_enable )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->anticheat_stamina_);
      }
      *(float *)(v4 + 32) = this->anticheat_stamina_;
      v24 = (__m128i)*(unsigned int *)(v4 + 48);
      __b = *(float *)v24.m128i_i32 + this->anticheat_stamina_;
      *(float *)v24.m128i_i32 = PlayerBasicComp::getCurStamina(this);
      LODWORD(__a) = _mm_cvtsi128_si32(v24);
      v25 = (float *)std::min<float>(&__a, &__b);
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      v27 = *v26;
      v28 = (*(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v28 )
        __asan_report_store4(&this->anticheat_stamina_, (((_BYTE)this - 52) & 7u) + 3, v28);
      this->anticheat_stamina_ = v27;
      v29 = (((_BYTE)config + 4) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config->record_limit >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->record_limit >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&config->record_limit);
      }
      if ( config->record_limit > *(float *)(v4 + 32) )
      {
        low_limit_low = (__m128i)*(unsigned int *)(v4 + 48);
        if ( *(float *)low_limit_low.m128i_i32 > 0.0 )
          goto LABEL_57;
        v29 = (((_BYTE)config + 8) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&config->low_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->low_limit >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&config->low_limit);
        }
        if ( *(float *)(v4 + 32) >= config->low_limit )
        {
          low_limit_low = (__m128i)LODWORD(config->low_limit);
          if ( *(float *)low_limit_low.m128i_i32 > this->anticheat_stamina_ )
          {
LABEL_57:
            if ( *(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_log_count_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_log_count_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->anticheat_stamina_log_count_);
            }
            anticheat_stamina_log_count = this->anticheat_stamina_log_count_;
            if ( *(_BYTE *)(((unsigned __int64)&config->anticheat_log_limit >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->anticheat_log_limit >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->anticheat_log_limit);
            }
            if ( anticheat_stamina_log_count < config->anticheat_log_limit )
            {
              ++this->anticheat_stamina_log_count_;
              common::tools::perf::make_shared<proto_log::AntiCheatBodyStaminaCheckFail>();
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              Player::getCurAvatar((Player *const)(v4 + 96));
              if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 96)) )
              {
                v32 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                v33 = std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
                v34 = proto_log::AntiCheatBodyStaminaCheckFail::mutable_entity_log(v33);
                Entity::getEntityLog(v32, v34);
              }
              v35 = std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              low_limit_low = (__m128i)*(unsigned int *)(v4 + 32);
              proto_log::AntiCheatBodyStaminaCheckFail::set_stamina(v35, (int)*(float *)low_limit_low.m128i_i32);
              v36 = std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->stamina_change_param_);
              }
              proto_log::AntiCheatBodyStaminaCheckFail::set_change_type(v36, this->stamina_change_param_.type);
              v37 = std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.motion_state >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.motion_state >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->stamina_change_param_.motion_state);
              }
              proto_log::AntiCheatBodyStaminaCheckFail::set_motion_state(v37, this->stamina_change_param_.motion_state);
              v38 = std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.skill_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.skill_id >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->stamina_change_param_.skill_id);
              }
              proto_log::AntiCheatBodyStaminaCheckFail::set_skill_id(v38, this->stamina_change_param_.skill_id);
              v39 = std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v91);
              p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91)->design_config.json_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.ability_name_hash >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->stamina_change_param_.ability_name_hash);
              }
              v41 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](
                      p_json_config_mgr,
                      this->stamina_change_param_.ability_name_hash);
              proto_log::AntiCheatBodyStaminaCheckFail::set_ability_name(v39, v41);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v91);
              v42 = std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v91);
              v43 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91)->design_config.json_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.modifier_name_hash >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.modifier_name_hash >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->stamina_change_param_.modifier_name_hash);
              }
              v44 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](
                      v43,
                      this->stamina_change_param_.modifier_name_hash);
              proto_log::AntiCheatBodyStaminaCheckFail::set_modifier_name(v42, v44);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v91);
              v45 = std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.local_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.local_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->stamina_change_param_.local_id);
              }
              proto_log::AntiCheatBodyStaminaCheckFail::set_local_id(v45, this->stamina_change_param_.local_id);
              v46 = std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyStaminaCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.reason >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_.reason >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->stamina_change_param_.reason);
              }
              proto_log::AntiCheatBodyStaminaCheckFail::set_prop_change_reason(v46, this->stamina_change_param_.reason);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              player = this->player_;
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyStaminaCheckFail,void>(
                &v91,
                (const std::shared_ptr<proto_log::AntiCheatBodyStaminaCheckFail> *)(v4 + 64));
              v29 = 29LL;
              Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_STAMINA_CHECK_FAIL, &v91);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v91);
              std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
              std::shared_ptr<proto_log::AntiCheatBodyStaminaCheckFail>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyStaminaCheckFail> *const)(v4 + 64));
            }
            *(float *)low_limit_low.m128i_i32 = PlayerBasicComp::getCurStamina(this);
            v48 = COERCE_FLOAT(_mm_cvtsi128_si32(low_limit_low));
            v49 = *(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_ >> 3) + 0x7FFF8000);
            LOBYTE(v29) = v49 != 0;
            v50 = (v49 != 0) & (unsigned __int8)((char)((((_BYTE)this - 52) & 7) + 3) >= v49);
            if ( (_BYTE)v50 )
              __asan_report_store4(&this->anticheat_stamina_, v29, v50);
            this->anticheat_stamina_ = v48;
          }
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anticheat_stamina_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->anticheat_stamina_);
      }
      if ( this->anticheat_stamina_ != *(float *)(v4 + 32) )
      {
        if ( (((unsigned __int8)this - 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_ >> 3)
                                                            + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&this->stamina_change_param_ >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&this->stamina_change_param_.reason + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 17) & 7) >= *(_BYTE *)((((unsigned __int64)&this->stamina_change_param_.reason + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store_n(&this->stamina_change_param_, 28LL);
        }
        if ( (char)(param & 7) >= *(_BYTE *)((param >> 3) + 0x7FFF8000) && *(_BYTE *)((param >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((param + 27) >> 3) + 0x7FFF8000) != 0
          && (char)((param + 27) & 7) >= *(_BYTE *)(((param + 27) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(param, 28LL);
        }
        v51 = *(_QWORD *)(param + 8);
        *(_QWORD *)&this->stamina_change_param_.type = *(_QWORD *)param;
        *(_QWORD *)&this->stamina_change_param_.skill_id = v51;
        *(_QWORD *)&this->stamina_change_param_.modifier_name_hash = *(_QWORD *)(param + 16);
        this->stamina_change_param_.reason = *(_DWORD *)(param + 24);
        common::milog::MiLogStream::create(
          &v92,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/basic/player_basic_comp.cpp",
          "changeCurStamina",
          830);
        v52 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v92, (const char (*)[7])"delta:");
        v53 = common::milog::MiLogStream::operator<<<float,(float *)0>(v52, (const float *)(v4 + 48));
        v54 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v53,
                (const char (*)[20])" anticheat_stamina:");
        v55 = common::milog::MiLogStream::operator<<<float,(float *)0>(v54, &this->anticheat_stamina_);
        v56 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v55,
                (const char (*)[24])" old_anticheat_stamina:");
        v57 = common::milog::MiLogStream::operator<<<float,(float *)0>(v56, (const float *)(v4 + 32));
        v58 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v57, (const char (*)[7])" type:");
        v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)param);
        v60 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v59, (const char (*)[15])" motion_state:");
        v61 = common::milog::MiLogStream::operator<<<proto::MotionState,(proto::MotionState*)0>(
                v60,
                (const proto::MotionState *)(param + 4));
        v62 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v61, (const char (*)[11])" skill_id:");
        v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v62,
                (const unsigned int *)(param + 8));
        v64 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v63, (const char (*)[10])" ability:");
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v4 + 96));
        v65 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96))->design_config.json_config_mgr;
        if ( *(_BYTE *)(((param + 12) >> 3) + 0x7FFF8000) != 0
          && (char)(((param + 12) & 7) + 3) >= *(_BYTE *)(((param + 12) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(param + 12);
        }
        v66 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](v65, *(_DWORD *)(param + 12));
        v67 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v64, v66);
        v68 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v67, (const char (*)[11])" modifier:");
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v91);
        v69 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v91)->design_config.json_config_mgr;
        if ( *(_BYTE *)(((param + 16) >> 3) + 0x7FFF8000) != 0
          && (char)(((param + 16) & 7) + 3) >= *(_BYTE *)(((param + 16) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(param + 16);
        }
        v70 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](v69, *(_DWORD *)(param + 16));
        v71 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v68, v70);
        v72 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v71, (const char (*)[11])" local_id:");
        v73 = common::milog::MiLogStream::operator<<<int,(int *)0>(v72, (const int *)(param + 20));
        v74 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v73, (const char (*)[9])" reason:");
        common::milog::MiLogStream::operator<<<proto::PropChangeReason,(proto::PropChangeReason*)0>(
          v74,
          (const proto::PropChangeReason *)(param + 24));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v91);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
        common::milog::MiLogStream::~MiLogStream(&v92);
      }
    }
  }
  if ( is_notify )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_persist_stamina_);
    }
    if ( this->cur_persist_stamina_ != old_persist_stamina )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v75 = this->player_;
      buildHundredIntProp(&prop_value, 0x271Bu, this->cur_persist_stamina_);
      Player::notifyPlayerProp(v75, &prop_value);
      proto::PropValue::~PropValue(&prop_value);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v76 = this->player_;
      if ( *(_BYTE *)(((param + 24) >> 3) + 0x7FFF8000) != 0
        && (char)(((param + 24) & 7) + 3) >= *(_BYTE *)(((param + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param + 24);
      }
      v77 = *(_DWORD *)(param + 24);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_persist_stamina_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_persist_stamina_);
      }
      Player::notifyPlayerPropChange(
        v76,
        PROP_CUR_PERSIST_STAMINA,
        old_persist_stamina,
        this->cur_persist_stamina_,
        v77);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_temporary_stamina_);
    }
    if ( this->cur_temporary_stamina_ != old_temporary_stamina_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v78 = this->player_;
      buildHundredIntProp(&prop_value, 0x271Cu, this->cur_temporary_stamina_);
      Player::notifyPlayerProp(v78, &prop_value);
      proto::PropValue::~PropValue(&prop_value);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v79 = this->player_;
      if ( *(_BYTE *)(((param + 24) >> 3) + 0x7FFF8000) != 0
        && (char)(((param + 24) & 7) + 3) >= *(_BYTE *)(((param + 24) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param + 24);
      }
      v80 = *(_DWORD *)(param + 24);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_temporary_stamina_);
      }
      Player::notifyPlayerPropChange(
        v79,
        PROP_CUR_TEMPORARY_STAMINA,
        old_temporary_stamina_,
        this->cur_temporary_stamina_,
        v80);
    }
  }
  result = 0LL;
  if ( v94 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 862: range 00000000171B3878-00000000171B3C09
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerBasicComp::addPersistStaminaLimit(
        PlayerBasicComp *const this,
        float delta,
        bool is_notify,
        proto::PropChangeReason reason)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __m128i v8; // xmm0
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  float *v10; // rax
  float *v11; // rdx
  char v12; // cl
  char *v13; // rsi
  float v14; // xmm0_4
  Player *player; // r13
  float MaxStamina; // xmm0_4
  Player *v17; // r13
  float v18; // xmm0_4
  int32_t result; // eax
  float old_max_stamina; // [rsp+2Ch] [rbp-A4h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-A0h] BYREF
  proto::PropValue prop_value; // [rsp+40h] [rbp-90h] BYREF
  char v26[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 23 max_persist_stamina:863";
  *(_QWORD *)(v4 + 16) = PlayerBasicComp::addPersistStaminaLimit;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  *(float *)v8.m128i_i32 = ConstValueExcelConfigMgr::getMaxPersistStamina(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(v8);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  ConstValueExcelConfigMgr::getMaxTemporaryStamina(&v9->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  *(float *)v8.m128i_i32 = PlayerBasicComp::getMaxStamina(this);
  old_max_stamina = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  if ( *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->persist_stamina_limit_);
  }
  this->persist_stamina_limit_ = this->persist_stamina_limit_ + delta;
  v13 = (char *)(v4 + 32);
  v10 = (float *)std::min<float>(&this->persist_stamina_limit_, (const float *)(v4 + 32));
  v11 = v10;
  v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v12 != 0;
  if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    __asan_report_load4(v10);
  v14 = *v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->persist_stamina_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->persist_stamina_limit_, v13, &this->persist_stamina_limit_);
  }
  this->persist_stamina_limit_ = v14;
  if ( is_notify )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    MaxStamina = PlayerBasicComp::getMaxStamina(this);
    buildHundredIntProp(&prop_value, 0x271Au, MaxStamina);
    Player::notifyPlayerProp(player, &prop_value);
    proto::PropValue::~PropValue(&prop_value);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v17 = this->player_;
    v18 = PlayerBasicComp::getMaxStamina(this);
    Player::notifyPlayerPropChange(v17, PROP_MAX_STAMINA, old_max_stamina, v18, reason);
  }
  result = 0;
  if ( v26 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 881: range 00000000171B3C0A-00000000171B3FBD
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerBasicComp::setTemporaryStamina(
        PlayerBasicComp *const this,
        float temporary_stamina,
        bool is_notify,
        proto::PropChangeReason reason)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __m128i v9; // xmm0
  float *v10; // rax
  float *v11; // rdx
  char v12; // cl
  char *v13; // rsi
  float v14; // xmm0_4
  Player *player; // r13
  Player *v16; // rcx
  int32_t result; // eax
  float old_temporary_stamina; // [rsp+2Ch] [rbp-A4h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-A0h] BYREF
  proto::PropValue prop_value; // [rsp+40h] [rbp-90h] BYREF
  char v24[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 25 max_temporary_stamina:883";
  *(_QWORD *)(v4 + 16) = PlayerBasicComp::setTemporaryStamina;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  ConstValueExcelConfigMgr::getMaxPersistStamina(&v7->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  *(float *)v9.m128i_i32 = ConstValueExcelConfigMgr::getMaxTemporaryStamina(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(v9);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_temporary_stamina_);
  }
  old_temporary_stamina = this->cur_temporary_stamina_;
  this->cur_temporary_stamina_ = temporary_stamina;
  v13 = (char *)(v4 + 32);
  v10 = (float *)std::min<float>(&this->cur_temporary_stamina_, (const float *)(v4 + 32));
  v11 = v10;
  v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v12 != 0;
  if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    __asan_report_load4(v10);
  v14 = *v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_temporary_stamina_, v13, &this->cur_temporary_stamina_);
  }
  this->cur_temporary_stamina_ = v14;
  if ( is_notify )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    buildHundredIntProp(&prop_value, 0x271Cu, this->cur_temporary_stamina_);
    Player::notifyPlayerProp(player, &prop_value);
    proto::PropValue::~PropValue(&prop_value);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v16 = this->player_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_temporary_stamina_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_temporary_stamina_);
    }
    Player::notifyPlayerPropChange(
      v16,
      PROP_CUR_TEMPORARY_STAMINA,
      old_temporary_stamina,
      this->cur_temporary_stamina_,
      reason);
  }
  result = 0;
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 900: range 00000000171B3FBE-00000000171B40BE
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerBasicComp::addExp(
        PlayerBasicComp *const this,
        uint32_t exp,
        const ActionReason *reason,
        bool is_notify,
        std::vector<AddItemResult> *result_vec_ptr)
{
  uint32_t v6; // ecx
  char v7; // dl
  __int64 v8; // rdx
  uint32_t expa; // [rsp+14h] [rbp-1Ch]
  unsigned int old_exp; // [rsp+28h] [rbp-8h]

  expa = exp;
  if ( !exp )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->exp_);
  }
  old_exp = this->exp_;
  *(_QWORD *)&exp = exp;
  v6 = SAFE_ADD<unsigned int,unsigned int>(old_exp, exp);
  v7 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
  LOBYTE(exp) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->exp_, *(_QWORD *)&exp, v8);
  this->exp_ = v6;
  return PlayerBasicComp::tryLevelUp(this, PROP_CHANGE_PLAYER_ADD_EXP, reason, old_exp, expa, is_notify, result_vec_ptr);
};

// Line 912: range 00000000171B40C0-00000000171B4442
int32_t __cdecl PlayerBasicComp::tryLevelUp(
        PlayerBasicComp *const this,
        proto::PropChangeReason prop_reason,
        bool is_notify,
        std::vector<AddItemResult> *result_vec_ptr)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerExcelConfigMgr *p_player_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  int32_t result; // eax
  uint32_t exp; // ecx
  const data::PlayerLevelExcelConfig *player_level_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+60h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 24 17 action_reason:923";
  *(_QWORD *)(v4 + 16) = PlayerBasicComp::tryLevelUp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218103808;
  v6[536862722] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  p_player_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.player_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  player_level_config_ptr = data::PlayerExcelConfigMgrBase::findPlayerLevelExcelConfig(
                              p_player_config_mgr,
                              this->level_);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( player_level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->exp_);
    }
    exp = this->exp_;
    if ( *(_BYTE *)(((unsigned __int64)&player_level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)player_level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_level_config_ptr->exp >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&player_level_config_ptr->exp);
    }
    if ( exp >= player_level_config_ptr->exp )
    {
      ActionReason::ActionReason(
        (ActionReason *const)(v4 + 32),
        ACTION_REASON_PLAYER_LEVEL_LIMIT_UP,
        ITEM_LIMIT_PLAYER_LEVEL_UPGRADE);
      result = PlayerBasicComp::tryLevelUp(
                 this,
                 prop_reason,
                 (const ActionReason *)(v4 + 32),
                 is_notify,
                 result_vec_ptr);
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "tryLevelUp",
      916);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v17,
           (const char (*)[40])"findPlayerLevelExcelConfig fail, level:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->level_);
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = -1;
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 928: range 00000000171B4444-00000000171B44A6
int32_t __cdecl PlayerBasicComp::tryLevelUp(
        PlayerBasicComp *const this,
        proto::PropChangeReason prop_reason,
        const ActionReason *item_reason,
        bool is_notify,
        std::vector<AddItemResult> *result_vec_ptr)
{
  uint32_t Exp; // eax

  Exp = PlayerBasicComp::getExp(this);
  return PlayerBasicComp::tryLevelUp(this, prop_reason, item_reason, Exp, 0, is_notify, result_vec_ptr);
};

// Line 934: range 00000000171B44A8-00000000171B538E
__int64 __fastcall PlayerBasicComp::tryLevelUp(
        PlayerBasicComp *const this,
        proto::PropChangeReason prop_reason,
        const ActionReason *item_reason,
        signed int old_exp,
        uint32_t delta_exp,
        bool is_notify,
        std::vector<AddItemResult> *result_vec_ptr)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  PlayerExcelConfigMgr *p_player_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // ecx
  PlayerExcelConfigMgr *v15; // rcx
  uint32_t v16; // ecx
  uint32_t v17; // eax
  __int64 v18; // rsi
  uint32_t v19; // ecx
  char v20; // dl
  __int64 v21; // rdx
  uint32_t v22; // ecx
  uint32_t v23; // eax
  __int64 v24; // rsi
  uint32_t v25; // ecx
  char v26; // dl
  __int64 v27; // rdx
  Player *player; // r14
  Player *v29; // rcx
  Player *v30; // r14
  Player *v31; // rcx
  proto::PropChangeReason prop_change_reason; // [rsp+20h] [rbp-140h]
  uint32_t level; // [rsp+24h] [rbp-13Ch]
  int old_level; // [rsp+28h] [rbp-138h]
  uint32_t player_max_level; // [rsp+30h] [rbp-130h]
  uint32_t level_limit; // [rsp+34h] [rbp-12Ch]
  uint32_t exp; // [rsp+38h] [rbp-128h]
  const data::PlayerLevelExcelConfig *level_config_ptr; // [rsp+40h] [rbp-120h]
  const data::PlayerLevelExcelConfig *new_level_config_ptr; // [rsp+48h] [rbp-118h]
  std::shared_ptr<Config> v45; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v46; // [rsp+60h] [rbp-100h] BYREF
  proto::PropValue prop_value; // [rsp+80h] [rbp-E0h] BYREF
  char v48[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v7 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "2 48 4 13 delta_exp:933 64 24 14 add_result:988";
  *(_QWORD *)(v7 + 16) = PlayerBasicComp::tryLevelUp;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556943;
  v9[536862722] = -218103808;
  v9[536862723] = -202116109;
  *(_DWORD *)(v7 + 48) = delta_exp;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  old_level = this->level_;
  PlayerBasicComp::calcWorldLevelLimit(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  p_player_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.player_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  level_config_ptr = data::PlayerExcelConfigMgrBase::findPlayerLevelExcelConfig(p_player_config_mgr, this->level_);
  std::shared_ptr<Config>::~shared_ptr(&v45);
  if ( level_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v45);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45);
    player_max_level = PlayerExcelConfigMgr::getPlayerMaxLevel(&v13->design_config.txt_config_mgr.player_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v45);
    for ( level_limit = PlayerBasicComp::getPlayerLevelLimit(this);
          ;
          PlayerBasicComp::tryLogPlayerLevelUp(this, exp, this->exp_, this->level_ - 1, this->level_, level_limit) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->exp_);
      }
      v14 = this->exp_;
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&level_config_ptr->exp);
      }
      if ( v14 < level_config_ptr->exp )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      if ( player_max_level <= this->level_ )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      if ( level_limit <= this->level_ )
        break;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v45);
      v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.player_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      new_level_config_ptr = data::PlayerExcelConfigMgrBase::findPlayerLevelExcelConfig(v15, this->level_ + 1);
      std::shared_ptr<Config>::~shared_ptr(&v45);
      if ( !new_level_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->exp_);
        }
        v16 = this->exp_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->exp);
        }
        if ( v16 - level_config_ptr->exp >= *(_DWORD *)(v7 + 48) )
          v17 = 0;
        else
          v17 = level_config_ptr->exp - this->exp_ + *(_DWORD *)(v7 + 48);
        *(_DWORD *)(v7 + 48) = v17;
        v18 = (((_BYTE)level_config_ptr + 12) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->exp);
        }
        v19 = level_config_ptr->exp;
        v20 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
        LOBYTE(v18) = v20 != 0;
        v21 = (v20 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v20);
        if ( (_BYTE)v21 )
          __asan_report_store4(&this->exp_, v18, v21);
        this->exp_ = v19;
        break;
      }
      if ( PlayerBasicComp::upgradeLevel(this, 0) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->exp_);
        }
        v22 = this->exp_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->exp);
        }
        if ( v22 >= level_config_ptr->exp )
        {
          if ( this->exp_ - level_config_ptr->exp >= *(_DWORD *)(v7 + 48) )
            v23 = 0;
          else
            v23 = level_config_ptr->exp - this->exp_ + *(_DWORD *)(v7 + 48);
          *(_DWORD *)(v7 + 48) = v23;
          v24 = (((_BYTE)level_config_ptr + 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&level_config_ptr->exp);
          }
          v25 = level_config_ptr->exp;
          v26 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
          LOBYTE(v24) = v26 != 0;
          v27 = (v26 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v26);
          if ( (_BYTE)v27 )
            __asan_report_store4(&this->exp_, v24, v27);
          this->exp_ = v25;
        }
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&level_config_ptr->exp);
      }
      exp = level_config_ptr->exp;
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->exp_);
      }
      this->exp_ -= exp;
      level_config_ptr = new_level_config_ptr;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
    }
    PlayerBasicComp::internalCheckAndModifyOverflowedExp(
      this,
      old_level,
      old_exp,
      (uint32_t *)(v7 + 48),
      item_reason,
      result_vec_ptr);
    if ( *(_DWORD *)(v7 + 48) && result_vec_ptr )
    {
      *(_QWORD *)(v7 + 64) = 0LL;
      *(_QWORD *)(v7 + 72) = 0LL;
      *(_QWORD *)(v7 + 80) = 0LL;
      *(_DWORD *)(v7 + 72) = 102;
      *(_DWORD *)(v7 + 76) = *(_DWORD *)(v7 + 48);
      std::vector<AddItemResult>::push_back(result_vec_ptr, (const std::vector<AddItemResult>::value_type *)(v7 + 64));
    }
    if ( is_notify )
    {
      prop_change_reason = prop_reason;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      if ( old_level != this->level_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        player = this->player_;
        buildIntProp(&prop_value, 0x271Du, this->level_);
        Player::notifyPlayerProp(player, &prop_value);
        proto::PropValue::~PropValue(&prop_value);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v29 = this->player_;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->level_);
        }
        Player::notifyPlayerPropChange(v29, PROP_PLAYER_LEVEL, (float)old_level, (float)(int)this->level_, prop_reason);
        prop_change_reason = PROP_CHANGE_AVATAR_UPGRADE;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->exp_);
      }
      if ( old_exp != this->exp_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v30 = this->player_;
        buildIntProp(&prop_value, 0x271Eu, this->exp_);
        Player::notifyPlayerProp(v30, &prop_value);
        proto::PropValue::~PropValue(&prop_value);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v31 = this->player_;
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->exp_);
        }
        Player::notifyPlayerPropChange(v31, PROP_PLAYER_EXP, (float)old_exp, (float)(int)this->exp_, prop_change_reason);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->exp_);
    }
    PlayerBasicComp::tryLogPlayerAddExp(this, item_reason, *(_DWORD *)(v7 + 48), old_exp, this->exp_);
    for ( level = old_level; ; ++level )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      if ( level >= this->level_ )
        break;
      PlayerBasicComp::onOpenStateCond(this, OPEN_STATE_COND_PLAYER_LEVEL, level + 1);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    if ( old_level != this->level_ )
      PlayerBasicComp::tryUpgradeWorldLevel(this, PROP_CHANGE_NONE, is_notify);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "tryLevelUp",
      941);
    v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v46,
            (const char (*)[37])"findPlayerLevelConfig fails, level_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->level_);
    common::milog::MiLogStream::~MiLogStream(&v46);
    result = 0xFFFFFFFFLL;
  }
  if ( v48 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1037: range 00000000171B5390-00000000171B6046
void __fastcall PlayerBasicComp::internalCheckAndModifyOverflowedExp(
        PlayerBasicComp *const this,
        uint32_t old_level,
        uint32_t old_exp,
        unsigned __int64 delta_exp,
        const ActionReason *item_reason,
        std::vector<AddItemResult> *result_vec_ptr)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  __int64 v20; // rsi
  uint32_t v21; // ecx
  char v22; // dl
  __int64 v23; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  PlayerItemComp *ItemComp; // rax
  const data::PlayerLevelExcelConfig *old_player_level_config_ptr; // [rsp+38h] [rbp-178h]
  const data::OverflowTransformExcelConfig *overflow_transform_config_ptr; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Config> v46; // [rsp+50h] [rbp-160h] BYREF
  common::milog::MiLogStream v47; // [rsp+60h] [rbp-150h] BYREF
  char v48[304]; // [rsp+80h] [rbp-130h] BYREF

  v6 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(256LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 32 4 17 overflow_exp:1052 48 4 14 old_level:1036 64 8 18 max_total_exp:1038 96 8 14 total_exp:"
                        "1045 128 24 19 item_param_vec:1082 192 24 11 reason:1091";
  *(_QWORD *)(v6 + 16) = PlayerBasicComp::internalCheckAndModifyOverflowedExp;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -234881024;
  v8[536862725] = -218959118;
  v8[536862726] = -218103808;
  v8[536862727] = -202116109;
  *(_DWORD *)(v6 + 48) = old_level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v46);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
  *(_QWORD *)(v6 + 64) = PlayerExcelConfigMgr::getPlayerMaxTotalExp(&v9->design_config.txt_config_mgr.player_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v46);
  if ( !*(_QWORD *)(v6 + 64) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "internalCheckAndModifyOverflowedExp",
      1041);
    v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v47,
            (const char (*)[35])"getPlayerMaxTotalExp fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_48:
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v47);
    goto LABEL_60;
  }
  *(_QWORD *)(v6 + 96) = PlayerBasicComp::getTotalExp(this);
  if ( *(_QWORD *)(v6 + 96) <= *(_QWORD *)(v6 + 64) )
    goto LABEL_60;
  *(_DWORD *)(v6 + 32) = *(_QWORD *)(v6 + 96) - *(_QWORD *)(v6 + 64);
  if ( *(_DWORD *)(v6 + 32) != *(_QWORD *)(v6 + 96) - *(_QWORD *)(v6 + 64) )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->exp_);
  }
  if ( this->exp_ < *(_DWORD *)(v6 + 32) )
  {
LABEL_13:
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "internalCheckAndModifyOverflowedExp",
      1055);
    v11 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(&v47, (const char (*)[61])off_26048CA0);
    v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v11,
            (const unsigned __int64 *)(v6 + 96));
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" max_total_exp:");
    v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v13,
            (const unsigned __int64 *)(v6 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" overflow_exp:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v6 + 32));
    v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" exp_: ");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->exp_);
    v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v19, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v47);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->exp_);
    }
    *(_DWORD *)(v6 + 32) = this->exp_;
  }
  v20 = (unsigned int)(delta_exp & 7) + 3;
  if ( *(_BYTE *)((delta_exp >> 3) + 0x7FFF8000) != 0
    && (char)((delta_exp & 7) + 3) >= *(_BYTE *)((delta_exp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(delta_exp);
  }
  if ( *(_DWORD *)delta_exp < *(_DWORD *)(v6 + 32) )
    v21 = 0;
  else
    v21 = *(_DWORD *)delta_exp - *(_DWORD *)(v6 + 32);
  v22 = *(_BYTE *)((delta_exp >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((char)((delta_exp & 7) + 3) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store4(delta_exp, v20, v23);
  *(_DWORD *)delta_exp = v21;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->exp_);
  }
  this->exp_ -= *(_DWORD *)(v6 + 32);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v46);
  v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
  old_player_level_config_ptr = data::PlayerExcelConfigMgrBase::findPlayerLevelExcelConfig(
                                  &v24->design_config.txt_config_mgr.player_config_mgr,
                                  *(_DWORD *)(v6 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v46);
  if ( !old_player_level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "internalCheckAndModifyOverflowedExp",
      1065);
    v25 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v47,
            (const char (*)[44])"findPlayerLevelExcelConfig fail, old_level:");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v6 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_48;
  }
  if ( *(_BYTE *)(((unsigned __int64)&old_player_level_config_ptr->total_exp >> 3) + 0x7FFF8000) )
    __asan_report_load8(&old_player_level_config_ptr->total_exp);
  if ( old_player_level_config_ptr->total_exp + old_exp >= *(_QWORD *)(v6 + 64) && *(_DWORD *)(v6 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)item_reason >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_reason >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_reason);
    }
    if ( item_reason->reason_type != ACTION_REASON_FORGE_RETURN )
    {
      if ( *(_BYTE *)(((unsigned __int64)item_reason >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_reason >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_reason);
      }
      if ( item_reason->reason_type == ACTION_REASON_OVERFLOW_TRANSFORM )
        goto LABEL_44;
      if ( *(_BYTE *)(((unsigned __int64)&item_reason->is_by_overflow_transform >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)item_reason + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&item_reason->is_by_overflow_transform >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load1(&item_reason->is_by_overflow_transform);
      }
      if ( item_reason->is_by_overflow_transform )
      {
LABEL_44:
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/basic/player_basic_comp.cpp",
          "internalCheckAndModifyOverflowedExp",
          1077);
        v27 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v47,
                (const char (*)[40])"item already transformed, overflow_exp:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v6 + 32));
        v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" reason:");
        v30 = operator<<(v29, item_reason);
        v31 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                v30,
                (const char (*)[27])" is_by_overflow_transform:");
        if ( *(_BYTE *)(((unsigned __int64)&item_reason->is_by_overflow_transform >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)item_reason + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&item_reason->is_by_overflow_transform >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load1(&item_reason->is_by_overflow_transform);
        }
        v32 = common::milog::MiLogStream::operator<<(v31, item_reason->is_by_overflow_transform);
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v32, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        goto LABEL_48;
      }
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v6 + 128));
      if ( PlayerBasicComp::calcExpOverflowTransformItem(*(_DWORD *)(v6 + 32), (std::vector<ItemParam> *)(v6 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/basic/player_basic_comp.cpp",
          "internalCheckAndModifyOverflowedExp",
          1085);
        v33 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v47,
                (const char (*)[49])"calcExpOverflowTransformItem fail, overflow_exp:");
        v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v33,
                (const unsigned int *)(v6 + 32));
        v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])" reason:");
        v36 = operator<<(v35, item_reason);
        v37 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v36, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v37, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v47);
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v46);
        v38 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
        overflow_transform_config_ptr = OverflowTransformExcelConfigMgr::findOverflowTransformConfigByItemId(
                                          &v38->design_config.txt_config_mgr.overflow_transform_config_mgr,
                                          0x66u);
        std::shared_ptr<Config>::~shared_ptr(&v46);
        if ( overflow_transform_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&overflow_transform_config_ptr->transform_item_limit_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&overflow_transform_config_ptr->transform_item_limit_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&overflow_transform_config_ptr->transform_item_limit_type);
          }
          ActionReason::ActionReason(
            (ActionReason *const)(v6 + 192),
            ACTION_REASON_OVERFLOW_TRANSFORM,
            overflow_transform_config_ptr->transform_item_limit_type);
          *(_BYTE *)(v6 + 213) = 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          ItemComp = Player::getItemComp(this->player_);
          PlayerItemComp::addItemBatch(
            ItemComp,
            (const std::vector<ItemParam> *)(v6 + 128),
            (const ActionReason *)(v6 + 192),
            result_vec_ptr);
        }
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v6 + 128));
    }
  }
LABEL_60:
  if ( v48 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1098: range 00000000171B6048-00000000171B65C5
__int64 __fastcall PlayerBasicComp::calcExpOverflowTransformItem(
        uint32_t overflow_exp,
        std::vector<ItemParam> *item_param_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int transform_count; // [rsp+14h] [rbp-CCh]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const data::OverflowTransformExcelConfig *overflow_transform_config_ptr; // [rsp+28h] [rbp-B8h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+30h] [rbp-B0h]
  const data::IdCountConfig *id_count_config; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 overflow_exp:1097 64 16 15 item_param:1121";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::calcExpOverflowTransformItem;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = overflow_exp;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  overflow_transform_config_ptr = OverflowTransformExcelConfigMgr::findOverflowTransformConfigByItemId(
                                    &v5->design_config.txt_config_mgr.overflow_transform_config_mgr,
                                    0x66u);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( overflow_transform_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&overflow_transform_config_ptr->transform_base_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&overflow_transform_config_ptr->transform_base_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&overflow_transform_config_ptr->transform_base_count);
    }
    if ( overflow_transform_config_ptr->transform_base_count )
    {
      v10 = *(_DWORD *)(v2 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&overflow_transform_config_ptr->transform_base_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&overflow_transform_config_ptr->transform_base_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&overflow_transform_config_ptr->transform_base_count);
      }
      transform_count = v10 / overflow_transform_config_ptr->transform_base_count;
      if ( transform_count )
      {
        std::vector<ItemParam>::clear(item_param_vec);
        __for_range = &overflow_transform_config_ptr->transform_results;
        __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&overflow_transform_config_ptr->transform_results)._M_current;
        __for_end._M_current = std::vector<data::IdCountConfig>::end(&overflow_transform_config_ptr->transform_results)._M_current;
        while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                  &__for_begin,
                  &__for_end) )
        {
          id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
          *(_DWORD *)(v2 + 64) = 0;
          *(_DWORD *)(v2 + 68) = 0;
          *(_DWORD *)(v2 + 72) = 0;
          *(_DWORD *)(v2 + 76) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&id_count_config->id);
          }
          *(_DWORD *)(v2 + 64) = id_count_config->id;
          if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&id_count_config->count);
          }
          *(_DWORD *)(v2 + 68) = SAFE_MULTIPLY<unsigned int,unsigned int>(id_count_config->count, transform_count);
          std::vector<ItemParam>::push_back(item_param_vec, (const std::vector<ItemParam>::value_type *)(v2 + 64));
          __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
        }
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/basic/player_basic_comp.cpp",
          "calcExpOverflowTransformItem",
          1114);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v20,
                (const char (*)[28])"transform_count is 0, type:");
        v12 = common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
                v11,
                &overflow_transform_config_ptr->transform_type);
        v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" overflow_exp:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/basic/player_basic_comp.cpp",
        "calcExpOverflowTransformItem",
        1107);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v20,
             (const char (*)[33])"transform_base_count is 0, type:");
      v8 = common::milog::MiLogStream::operator<<<data::OverflowTransformType,(data::OverflowTransformType*)0>(
             v7,
             &overflow_transform_config_ptr->transform_type);
      v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" overflow_exp:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "calcExpOverflowTransformItem",
      1102);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v20,
      (const char (*)[35])"no transform config for player exp");
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  if ( v21 == (char *)v2 )
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

// Line 1131: range 00000000171B65C6-00000000171B6615
void __cdecl PlayerBasicComp::increasePlayerStatId(PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_stat_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_stat_id_);
  ++this->player_stat_id_;
};

// Line 1136: range 00000000171B6616-00000000171B6913
int32_t __cdecl PlayerBasicComp::upgradeLevel(PlayerBasicComp *const this, bool is_notify)
{
  Player *player; // rbx
  PlayerLoginComp *LoginComp; // rax
  PlayerEventComp *EventComp; // rbx
  PushPlatformManager *p_push_platform_mgr; // rbx
  uint32_t Level; // r13d
  uint32_t ChannelId; // r12d
  uint32_t Uid; // eax
  unsigned int __args_0; // [rsp+1Ch] [rbp-74h] BYREF
  std::shared_ptr<PlayerLevelupEvent> __r; // [rsp+20h] [rbp-70h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-60h] BYREF
  proto::PropValue prop_value; // [rsp+40h] [rbp-50h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  ++this->level_;
  if ( is_notify )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    buildIntProp(&prop_value, 0x271Du, this->level_);
    Player::notifyPlayerProp(player, &prop_value);
    proto::PropValue::~PropValue(&prop_value);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  LoginComp = Player::getLoginComp(this->player_);
  PlayerLoginComp::refreshLoginReward(LoginComp, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  __args_0 = this->level_ - 1;
  common::tools::perf::make_shared<PlayerLevelupEvent,unsigned int &,unsigned int>(
    (unsigned int *)&__r,
    &this->level_,
    &__args_0,
    &this->level_);
  std::shared_ptr<BaseEvent>::shared_ptr<PlayerLevelupEvent,void>(&p_event_ptr, &__r);
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  std::shared_ptr<PlayerLevelupEvent>::~shared_ptr(&__r);
  p_push_platform_mgr = &ServiceBox::findService<GameserverService>()->push_platform_mgr;
  Level = PlayerBasicComp::getLevel(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ChannelId = Player::getChannelId(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  PushPlatformManager::asyncSetPlayerLevelTags(p_push_platform_mgr, Uid, ChannelId, Level);
  return 0;
};

// Line 1154: range 00000000171B6914-00000000171B719C
__int64 __fastcall PlayerBasicComp::setLevelByGm(PlayerBasicComp *const this, uint32_t level, bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  char v6; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r15
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  __int64 v11; // rsi
  uint32_t v12; // ecx
  char v13; // al
  __int64 v14; // rdx
  PlayerLoginComp *LoginComp; // rax
  PlayerEventComp *EventComp; // r14
  Player *player; // r14
  Player *v18; // rcx
  Player *v19; // r14
  Player *v20; // rcx
  unsigned int levela; // [rsp+24h] [rbp-10Ch]
  int old_exp; // [rsp+28h] [rbp-108h]
  std::shared_ptr<PlayerLevelupEvent> __r; // [rsp+30h] [rbp-100h] BYREF
  std::shared_ptr<Config> v25; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-E0h] BYREF
  proto::PropValue prop_value; // [rsp+70h] [rbp-C0h] BYREF
  char v28[144]; // [rsp+A0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 old_level:1162 64 4 10 level:1153";
  *(_QWORD *)(v3 + 16) = PlayerBasicComp::setLevelByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = level;
  v6 = 0;
  v8 = 1;
  if ( *(_DWORD *)(v3 + 64) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v6 = 1;
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    if ( PlayerExcelConfigMgr::getPlayerMaxLevel(&v7->design_config.txt_config_mgr.player_config_mgr) >= *(_DWORD *)(v3 + 64) )
      v8 = 0;
  }
  if ( v6 )
    std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "setLevelByGm",
      1157);
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v26,
           (const char (*)[24])"level not valid, level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v11 = (((_BYTE)this + 36) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->exp_);
    }
    old_exp = this->exp_;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    *(_DWORD *)(v3 + 48) = this->level_;
    PlayerBasicComp::calcWorldLevelLimit(this);
    v12 = *(_DWORD *)(v3 + 64);
    v13 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
    if ( v13 != 0 && v13 <= 3 )
    {
      LOBYTE(v11) = v13 != 0;
      __asan_report_store4(&this->level_, v11, &this->level_);
    }
    this->level_ = v12;
    v14 = (*(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v14 )
      __asan_report_store4(&this->exp_, (((_BYTE)this + 36) & 7u) + 3, v14);
    this->exp_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    LoginComp = Player::getLoginComp(this->player_);
    PlayerLoginComp::refreshLoginReward(LoginComp, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    common::tools::perf::make_shared<PlayerLevelupEvent,unsigned int &,unsigned int &>(
      (unsigned int *)&__r,
      &this->level_,
      (unsigned int *)(v3 + 48),
      &this->level_);
    std::shared_ptr<BaseEvent>::shared_ptr<PlayerLevelupEvent,void>((std::shared_ptr<BaseEvent> *const)&v25, &__r);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v25);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v25);
    std::shared_ptr<PlayerLevelupEvent>::~shared_ptr(&__r);
    if ( is_notify )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      player = this->player_;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      buildIntProp(&prop_value, 0x271Du, this->level_);
      Player::notifyPlayerProp(player, &prop_value);
      proto::PropValue::~PropValue(&prop_value);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v18 = this->player_;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      Player::notifyPlayerPropChange(
        v18,
        PROP_PLAYER_LEVEL,
        (float)*(int *)(v3 + 48),
        (float)(int)this->level_,
        PROP_CHANGE_LEVELUP);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v19 = this->player_;
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->exp_);
      }
      buildIntProp(&prop_value, 0x271Eu, this->exp_);
      Player::notifyPlayerProp(v19, &prop_value);
      proto::PropValue::~PropValue(&prop_value);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v20 = this->player_;
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->exp_);
      }
      Player::notifyPlayerPropChange(v20, PROP_PLAYER_EXP, (float)old_exp, (float)(int)this->exp_, PROP_CHANGE_LEVELUP);
    }
    for ( levela = *(_DWORD *)(v3 + 48) + 1; ; ++levela )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      if ( levela > this->level_ )
        break;
      PlayerBasicComp::onOpenStateCond(this, OPEN_STATE_COND_PLAYER_LEVEL, levela);
    }
    PlayerBasicComp::tryUpgradeWorldLevel(this, PROP_CHANGE_GM, is_notify);
    result = 0LL;
  }
  if ( v28 == (char *)v3 )
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

// Line 1187: range 00000000171B719E-00000000171B791E
__int64 __fastcall PlayerBasicComp::takePlayerLevelReward(PlayerBasicComp *const this, __int32 level)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int32 M_allocated_capacity_high; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *p_reward_id; // rdi
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  uint32_t v15; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  uint32_t Exp; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  proto_log::RewardLog *v19; // rcx
  PlayerItemComp *v20; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  proto_log::RewardLog *v22; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v25; // [rsp+0h] [rbp-130h]
  PlayerBasicComp *thisa; // [rsp+8h] [rbp-128h]
  const data::PlayerLevelExcelConfig *player_level_config_ptr; // [rsp+18h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v29; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+60h] [rbp-D0h] BYREF

  v25._M_string_length = (std::string::size_type)this;
  HIDWORD(v25._M_dataplus._M_p) = level;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 11 holder:1208 48 4 10 level:1186 64 16 12 log_ptr:1212 96 24 18 action_reason:1201";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::takePlayerLevelReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = level;
  if ( PlayerBasicComp::getLevel(this) >= *(_DWORD *)(v2 + 48) )
  {
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->reward_taken_level_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      M_allocated_capacity_high = 629;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
      *(&v25._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::PlayerExcelConfigMgrBase::findPlayerLevelExcelConfig(
                                                                            &v6->design_config.txt_config_mgr.player_config_mgr,
                                                                            *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
      if ( !*(&v25._anon_0._M_allocated_capacity + 1) )
        goto LABEL_12;
      if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(*(&v25._anon_0._M_allocated_capacity + 1) + 24);
      }
      if ( *(_DWORD *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24) )
      {
        ActionReason::ActionReason(
          (ActionReason *const)(v2 + 96),
          ACTION_REASON_PLAYER_UPGRADE_REWARD,
          ITEM_LIMIT_PLAYER_LEVEL_UPGRADE);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ItemComp = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(*(&v25._anon_0._M_allocated_capacity + 1) + 24);
        }
        HIDWORD(v25._anon_0._M_allocated_capacity) = PlayerItemComp::checkGrantReward(
                                                       ItemComp,
                                                       *(_DWORD *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24),
                                                       (const ActionReason *)(v2 + 96));
        if ( HIDWORD(v25._anon_0._M_allocated_capacity) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/basic/player_basic_comp.cpp",
            "takePlayerLevelReward",
            1205);
          v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 &v30,
                 (const char (*)[34])"checkGrantReward fail, reward_id:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 (const unsigned int *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24));
          v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v10, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v30);
          M_allocated_capacity_high = HIDWORD(v25._anon_0._M_allocated_capacity);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          BasicComp = Player::getBasicComp(this->player_);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v30, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x3EEu, v25);
          std::string::~string(&v30);
          std::unordered_set<unsigned int>::insert(
            &thisa->reward_taken_level_set_,
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          p_reward_id = Player::getItemComp(thisa->player_);
          if ( *(_BYTE *)(((unsigned __int64)&player_level_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&player_level_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            p_reward_id = (PlayerItemComp *)&player_level_config_ptr->reward_id;
            __asan_report_load4(&player_level_config_ptr->reward_id);
          }
          PlayerItemComp::grantReward(
            p_reward_id,
            player_level_config_ptr->reward_id,
            (const ActionReason *)(v2 + 96),
            0LL);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyTakePlayerLevelReward>();
          v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          proto_log::PlayerLogBodyTakePlayerLevelReward::set_take_level(v13, *(_DWORD *)(v2 + 48));
          v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v15 = PlayerBasicComp::getLevel(thisa);
          proto_log::PlayerLogBodyTakePlayerLevelReward::set_cur_level(v14, v15);
          v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          Exp = PlayerBasicComp::getExp(thisa);
          proto_log::PlayerLogBodyTakePlayerLevelReward::set_cur_exp(v16, Exp);
          v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v19 = proto_log::PlayerLogBodyTakePlayerLevelReward::mutable_reward_log(v18);
          if ( *(_BYTE *)(((unsigned __int64)&player_level_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&player_level_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&player_level_config_ptr->reward_id);
          }
          proto_log::RewardLog::set_reward_id(v19, player_level_config_ptr->reward_id);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          v20 = Player::getItemComp(thisa->player_);
          v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakePlayerLevelReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v22 = proto_log::PlayerLogBodyTakePlayerLevelReward::mutable_reward_log(v21);
          PlayerItemComp::getRewardLog(v20, v22);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          player = thisa->player_;
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v29, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTakePlayerLevelReward,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyTakePlayerLevelReward> *)(v2 + 64));
          Player::printStatLog(player, &p_body_ptr, &v29, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v29);
          M_allocated_capacity_high = 0;
          std::shared_ptr<proto_log::PlayerLogBodyTakePlayerLevelReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTakePlayerLevelReward> *const)(v2 + 64));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
        }
      }
      else
      {
LABEL_12:
        M_allocated_capacity_high = -1;
      }
    }
  }
  else
  {
    M_allocated_capacity_high = 140;
  }
  result = M_allocated_capacity_high;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1225: range 00000000171B7920-00000000171B7C48
void __cdecl PlayerBasicComp::setNickName(PlayerBasicComp *const this, const std::string *nick_name)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerEventComp *EventComp; // r14
  std::allocator<char> __a; // [rsp+1Fh] [rbp-101h] BYREF
  std::shared_ptr<NickNameEvent> __r; // [rsp+20h] [rbp-100h] BYREF
  char v8[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 event_ptr:1231 64 32 21 trimed_nick_name:1227 128 32 20 nickname_before:1228";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::setNickName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(&__a, nick_name);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 128), off_26045360, &__a);
  common::tools::StringUtils::trim((std::string *)(v2 + 64), nick_name, (const std::string *)(v2 + 128), 1);
  std::string::~string((void *)(v2 + 128));
  std::allocator<char>::~allocator(&__a);
  std::string::basic_string(v2 + 128, &this->nickname_);
  std::string::operator=(&this->nickname_, v2 + 64);
  common::tools::perf::make_shared<NickNameEvent>();
  std::shared_ptr<BaseEvent>::shared_ptr<NickNameEvent,void>((std::shared_ptr<BaseEvent> *const)(v2 + 32), &__r);
  std::shared_ptr<NickNameEvent>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::shared_ptr<BaseEvent>::shared_ptr(
    (std::shared_ptr<BaseEvent> *const)&__r,
    (const std::shared_ptr<BaseEvent> *)(v2 + 32));
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 32));
  std::string::~string((void *)(v2 + 128));
  std::string::~string((void *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1236: range 00000000171B7C4A-00000000171B7FD1
int32_t __cdecl PlayerBasicComp::checkNickName(PlayerBasicComp *const this, const std::string *nick_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-E1h] BYREF
  unsigned int val; // [rsp+20h] [rbp-E0h] BYREF
  uint32_t nickname_max_length; // [rsp+24h] [rbp-DCh]
  uint32_t nickname_max_digits_num; // [rsp+28h] [rbp-D8h]
  int32_t ret; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-C0h] BYREF
  std::string s; // [rsp+50h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 21 trimed_nick_name:1238";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::checkNickName;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::allocator<char>::allocator(&__a, nick_name);
  std::string::basic_string<std::allocator<char>>(&s, off_26045360, &__a);
  common::tools::StringUtils::trim((std::string *)(v2 + 32), nick_name, &s, 1);
  std::string::~string(&s);
  std::allocator<char>::~allocator(&__a);
  if ( (unsigned __int8)std::string::empty(v2 + 32) )
  {
    v5 = 134;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    nickname_max_length = ConstValueExcelConfigMgr::getNicknameMaxLength(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    nickname_max_digits_num = ConstValueExcelConfigMgr::getNicknameMaxDigitsNum(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    ret = Hk4eUtils::checkStrUtf8Len((const std::string *)(v2 + 32), nickname_max_length);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&s,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/basic/player_basic_comp.cpp",
        "checkNickName",
        1248);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             (common::milog::MiLogStream *const)&s,
             (const char (*)[29])"checkStrUtf8Len fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
      v5 = ret;
    }
    else if ( Hk4eUtils::checkStrUtf8DigitsNum((const std::string *)(v2 + 32), nickname_max_digits_num) )
    {
      v5 = 133;
    }
    else
    {
      v5 = 0;
    }
  }
  std::string::~string((void *)(v2 + 32));
  result = v5;
  if ( v18 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 1261: range 00000000171B7FD2-00000000171B7FE5
const std::string *__cdecl PlayerBasicComp::getNickName[abi:cxx11](PlayerBasicComp *const this)
{
  return &this->nickname_;
};

// Line 1267: range 00000000171B7FE6-00000000171B80DC
bool __cdecl PlayerBasicComp::isStateOpen(const PlayerBasicComp *const this, uint32_t type)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const data::OpenStateConfig *open_state_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  open_state_config_ptr = data::OpenStateExcelConfigMgrBase::findOpenStateConfig(
                            &v2->design_config.txt_config_mgr.open_state_config_mgr,
                            type);
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( !open_state_config_ptr )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->default_state >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)open_state_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->default_state >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&open_state_config_ptr->default_state);
  }
  return open_state_config_ptr->default_state || PlayerBasicComp::getOpenStateValue(this, type) != 0;
};

// Line 1283: range 00000000171B80DE-00000000171B8270
__int64 __fastcall PlayerBasicComp::getOpenStateValue(const PlayerBasicComp *const this, uint32_t type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 type:1282 64 8 9 iter:1284";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::getOpenStateValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = type;
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        &this->open_state_map_,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->open_state_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second;
  }
  if ( v9 == (char *)v2 )
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

// Line 1290: range 00000000171B8272-00000000171B8641
__int64 __fastcall PlayerBasicComp::setOpenState(
        PlayerBasicComp *const this,
        uint32_t key,
        uint32_t value,
        bool is_notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v7; // rdx
  unsigned int *p_second; // rax
  char v9; // al
  int v10; // r14d
  char *v11; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  char v14; // cl
  PlayerQuestComp *QuestComp; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  std::shared_ptr<OpenStateChangeEvent> __r; // [rsp+30h] [rbp-C0h] BYREF
  char v22[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 8 key:1289 48 4 10 value:1289 64 8 9 iter:1291 96 16 14 event_ptr:1304";
  *(_QWORD *)(v4 + 16) = PlayerBasicComp::setOpenState;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 32) = key;
  *(_DWORD *)(v4 + 48) = value;
  *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->open_state_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 32));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->open_state_map_)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 64),
          &__y) )
    goto LABEL_9;
  v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 64));
  p_second = &v7->second;
  if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(p_second);
  }
  if ( v7->second == *(_DWORD *)(v4 + 48) )
    v9 = 1;
  else
LABEL_9:
    v9 = 0;
  if ( !v9 )
  {
    v10 = *(_DWORD *)(v4 + 48);
    v11 = (char *)(v4 + 32);
    v12 = std::map<unsigned int,unsigned int>::operator[](
            &this->open_state_map_,
            (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 32));
    v13 = v12;
    v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
    {
      LOBYTE(v11) = v14 != 0;
      __asan_report_store4(v12, v11, v12);
    }
    *v13 = v10;
    if ( is_notify )
      PlayerBasicComp::notifyOpenStateData(this, *(_DWORD *)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    QuestComp = Player::getQuestComp(this->player_);
    PlayerQuestComp::tryAcceptQuestByCond(QuestComp, QUEST_COND_OPEN_STATE_EQUAL, is_notify, 0);
    common::tools::perf::make_shared<OpenStateChangeEvent,unsigned int &,unsigned int &>(
      (unsigned int *)&__r,
      (unsigned int *)(v4 + 32),
      (unsigned int *)(v4 + 48),
      (unsigned int *)(v4 + 32));
    std::shared_ptr<BaseEvent>::shared_ptr<OpenStateChangeEvent,void>(
      (std::shared_ptr<BaseEvent> *const)(v4 + 96),
      &__r);
    std::shared_ptr<OpenStateChangeEvent>::~shared_ptr(&__r);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr(
      (std::shared_ptr<BaseEvent> *const)&__r,
      (const std::shared_ptr<BaseEvent> *)(v4 + 96));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
    if ( *(_DWORD *)(v4 + 32) == 1 && *(_DWORD *)(v4 + 48) )
      PlayerBasicComp::checkSendRebateReward(this);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 96));
  }
  result = 0LL;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1317: range 00000000171B8642-00000000171B89D9
__int64 __fastcall PlayerBasicComp::setOpenStateByClient(PlayerBasicComp *const this, uint32_t key, uint32_t value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const data::OpenStateConfig *open_state_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-80h] BYREF
  char v18[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 key:1316";
  *(_QWORD *)(v3 + 16) = PlayerBasicComp::setOpenStateByClient;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = key;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  open_state_config_ptr = data::OpenStateExcelConfigMgrBase::findOpenStateConfig(
                            &v6->design_config.txt_config_mgr.open_state_config_mgr,
                            *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( !open_state_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "setOpenStateByClient",
      1322);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v17,
           (const char (*)[25])"findOpenStateConfig key:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->allow_client_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)open_state_config_ptr + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->allow_client_open >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&open_state_config_ptr->allow_client_open);
  }
  if ( !open_state_config_ptr->allow_client_open )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "setOpenStateByClient",
      1327);
    v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"key:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           v12,
           (const char (*)[29])" not allow client open. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  result = PlayerBasicComp::setOpenState(this, *(_DWORD *)(v3 + 32), value, 1);
LABEL_15:
  if ( v18 == (char *)v3 )
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

// Line 1335: range 00000000171B89DA-00000000171B8D39
__int64 __fastcall PlayerBasicComp::notifyOpenStateData(PlayerBasicComp *const this, uint32_t key)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<proto::OpenStateChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // r14d
  char *v11; // rsi
  unsigned int *v12; // rax
  unsigned int *v13; // rdx
  char v14; // cl
  Player *player; // r14
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+10h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_state_map; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<proto::OpenStateChangeNotify> __r; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 key:1334 64 8 9 iter:1338 96 16 15 notify_ptr:1336";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::notifyOpenStateData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = key;
  common::tools::perf::make_shared<proto::OpenStateChangeNotify>();
  v5 = std::__shared_ptr_access<proto::OpenStateChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::OpenStateChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto_state_map = proto::OpenStateChangeNotify::mutable_open_state_map(v5);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->open_state_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->open_state_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "notifyOpenStateData",
      1341);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v20,
           (const char (*)[27])"open_state not found. key:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = -1;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v8->second;
    v11 = (char *)(v2 + 48);
    v12 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
            proto_state_map,
            (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    v13 = v12;
    v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
    {
      LOBYTE(v11) = v14 != 0;
      __asan_report_store4(v12, v11, v12);
    }
    *v13 = second;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::OpenStateChangeNotify>(&__r);
    v7 = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  std::shared_ptr<proto::OpenStateChangeNotify>::~shared_ptr((std::shared_ptr<proto::OpenStateChangeNotify> *const)(v2 + 96));
  result = v7;
  if ( v21 == (char *)v2 )
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

// Line 1350: range 00000000171B8D3A-00000000171B9019
int32_t __cdecl PlayerBasicComp::notifyAllOpenStateData(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::OpenStateUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v7; // rsi
  unsigned int *v8; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v9; // rdx
  char v10; // cl
  Player *player; // r14
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_state_map; // [rsp+28h] [rbp-A8h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::pair<unsigned int const,unsigned int> *v17; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *key; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *value; // [rsp+48h] [rbp-88h]
  std::shared_ptr<proto::OpenStateUpdateNotify> __r; // [rsp+50h] [rbp-80h] BYREF
  char v21[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:1351";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::notifyAllOpenStateData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::OpenStateUpdateNotify>();
  v4 = std::__shared_ptr_access<proto::OpenStateUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::OpenStateUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  proto_state_map = proto::OpenStateUpdateNotify::mutable_open_state_map(v4);
  __for_range = &this->open_state_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->open_state_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->open_state_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    key = std::get<0ul,unsigned int const,unsigned int>(v17);
    v5 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v17);
    value = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v6 = *value;
    v7 = key;
    v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_state_map, key);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7, v8);
    }
    *v9 = v6;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::OpenStateUpdateNotify>(&__r);
  LODWORD(player) = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::OpenStateUpdateNotify>::~shared_ptr((std::shared_ptr<proto::OpenStateUpdateNotify> *const)(v1 + 32));
  result = (int)player;
  if ( v21 == (char *)v1 )
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

// Line 1362: range 00000000171B901A-00000000171B9160
void __cdecl PlayerBasicComp::onOpenStateCond(
        PlayerBasicComp *const this,
        data::OpenStateCondType cond_type,
        uint32_t param)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const std::vector<unsigned int> *open_state_vec_ptr; // [rsp+30h] [rbp-30h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+40h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v11);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11);
  open_state_vec_ptr = OpenStateExcelConfigMgr::findOpenStateByCond(
                         &v3->design_config.txt_config_mgr.open_state_config_mgr,
                         cond_type,
                         param);
  std::shared_ptr<Config>::~shared_ptr(v11);
  if ( open_state_vec_ptr )
  {
    __for_range = open_state_vec_ptr;
    __for_begin._M_current = std::vector<unsigned int>::begin(open_state_vec_ptr)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(open_state_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v4 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      PlayerBasicComp::tryUpdateOpenStateCond(this, *v5, 1);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
};

// Line 1376: range 00000000171B9162-00000000171B95E3
void __fastcall PlayerBasicComp::tryUpdateOpenStateCond(
        PlayerBasicComp *const this,
        uint32_t open_state_type,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  const data::OpenStateCond *v10; // rax
  _BOOL4 v11; // r14d
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::vector<data::OpenStateCond>::const_iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::vector<data::OpenStateCond>::const_iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  const data::OpenStateConfig *open_state_config_ptr; // [rsp+30h] [rbp-F0h]
  const std::vector<data::OpenStateCond> *__for_range; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 20 open_state_type:1375 64 24 20 open_state_cond:1401";
  *(_QWORD *)(v3 + 16) = PlayerBasicComp::tryUpdateOpenStateCond;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = open_state_type;
  if ( !(unsigned int)PlayerBasicComp::getOpenStateValue(this, *(_DWORD *)(v3 + 48)) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    open_state_config_ptr = data::OpenStateExcelConfigMgrBase::findOpenStateConfig(
                              &v6->design_config.txt_config_mgr.open_state_config_mgr,
                              *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( open_state_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->allow_client_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)open_state_config_ptr + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->allow_client_open >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load1(&open_state_config_ptr->allow_client_open);
      }
      if ( !open_state_config_ptr->allow_client_open )
      {
        if ( *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->default_state >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)open_state_config_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&open_state_config_ptr->default_state >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load1(&open_state_config_ptr->default_state);
        }
        if ( !open_state_config_ptr->default_state )
        {
          if ( !std::vector<data::OpenStateCond>::size(&open_state_config_ptr->cond) )
            goto LABEL_21;
          __for_range = &open_state_config_ptr->cond;
          __for_begin._M_current = std::vector<data::OpenStateCond>::begin(&open_state_config_ptr->cond)._M_current;
          __for_end._M_current = std::vector<data::OpenStateCond>::end(&open_state_config_ptr->cond)._M_current;
          while ( __gnu_cxx::operator!=<data::OpenStateCond const*,std::vector<data::OpenStateCond>>(
                    &__for_begin,
                    &__for_end) )
          {
            v10 = __gnu_cxx::__normal_iterator<data::OpenStateCond const*,std::vector<data::OpenStateCond>>::operator*(&__for_begin);
            data::OpenStateCond::OpenStateCond((data::OpenStateCond *const)(v3 + 64), v10);
            v11 = PlayerBasicComp::checkSingleOpenStateCond(
                    this,
                    *(data::OpenStateCondType *)(v3 + 72),
                    *(_DWORD *)(v3 + 76),
                    *(_DWORD *)(v3 + 80));
            data::OpenStateCond::~OpenStateCond((data::OpenStateCond *const)(v3 + 64));
            if ( !v11 )
              goto LABEL_21;
            __gnu_cxx::__normal_iterator<data::OpenStateCond const*,std::vector<data::OpenStateCond>>::operator++(&__for_begin);
          }
        }
        PlayerBasicComp::setOpenState(this, *(_DWORD *)(v3 + 48), 1u, is_notify);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/basic/player_basic_comp.cpp",
        "tryUpdateOpenStateCond",
        1384);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v19,
             (const char (*)[25])"findOpenStateConfig key:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
  }
LABEL_21:
  if ( v20 == (char *)v3 )
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
};

// Line 1414: range 00000000171B95E4-00000000171B99D4
bool __cdecl PlayerBasicComp::checkSingleOpenStateCond(
        PlayerBasicComp *const this,
        data::OpenStateCondType cond_type,
        uint32_t param,
        uint32_t param2)
{
  bool v4; // r14
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  PlayerGCGComp *GCGComp; // rax
  PlayerQuestComp *QuestComp; // rax
  uint32_t v10; // eax
  ParentQuest *v11; // rax
  int v13; // r15d
  uint32_t ReputationComp; // eax
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  int v17; // r15d
  PlayerOfferingComp *OfferingComp; // rax
  bool result; // al
  char v22[112]; // [rsp+30h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 19 reputation_ptr:1434";
  *(_QWORD *)(v5 + 16) = PlayerBasicComp::checkSingleOpenStateCond;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  switch ( cond_type )
  {
    case OPEN_STATE_COND_PLAYER_LEVEL:
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      v4 = param <= this->level_;
      break;
    case OPEN_STATE_COND_QUEST:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      QuestComp = Player::getQuestComp(this->player_);
      v4 = PlayerQuestComp::getQuestState(QuestComp, param) == QUEST_STATE_FINISHED;
      break;
    case OPEN_STATE_COND_PARENT_QUEST:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v10 = (unsigned int)Player::getQuestComp(this->player_);
      PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v5 + 32), v10);
      if ( std::operator!=<ParentQuest>((const std::shared_ptr<ParentQuest> *)(v5 + 32), 0LL)
        && (v11 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32)),
            ParentQuest::getTotalFinishCount(v11)) )
      {
        v4 = 1;
        v13 = 0;
      }
      else
      {
        v13 = 1;
      }
      std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v5 + 32));
      if ( v13 )
        goto LABEL_40;
      break;
    case OPEN_STATE_CITY_REPUTATION_LEVEL:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ReputationComp = (unsigned int)Player::getReputationComp(this->player_);
      PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v5 + 32), ReputationComp);
      if ( std::operator!=<CityReputation>((const std::shared_ptr<CityReputation> *)(v5 + 32), 0LL)
        && (v15 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32)),
            param2 <= CityReputation::getLevel(v15)) )
      {
        v4 = 1;
        v17 = 0;
      }
      else
      {
        v17 = 1;
      }
      std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v5 + 32));
      if ( v17 )
        goto LABEL_40;
      break;
    case OPEN_STATE_OFFERING_LEVEL:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      OfferingComp = Player::getOfferingComp(this->player_);
      if ( PlayerOfferingComp::findOfferingLevel(OfferingComp, param) < param2 )
        goto LABEL_40;
      v4 = 1;
      break;
    case OPEN_STATE_COND_GCG_LEVEL:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      GCGComp = Player::getGCGComp(this->player_);
      v4 = param <= PlayerGCGComp::getLevel(GCGComp);
      break;
    default:
LABEL_40:
      v4 = 0;
      break;
  }
  result = v4;
  if ( v22 == (char *)v5 )
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

// Line 1458: range 00000000171B99D6-00000000171B9AEF
void __cdecl PlayerBasicComp::updateAllOpenStateOnLogin(PlayerBasicComp *const this)
{
  std::unordered_map<unsigned int,data::OpenStateConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,data::OpenStateConfig>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,data::OpenStateConfig> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,data::OpenStateConfig> *v4; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::OpenStateConfig> >::type *open_state_type; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OpenStateConfig> >::type *open_state_config; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v7; // [rsp+40h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.open_state_config_mgr.open_state_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v7);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::OpenStateConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::OpenStateConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::OpenStateConfig>,false>(&__for_begin, &__for_end) )
  {
    v4 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::operator*(&__for_begin);
    open_state_type = std::get<0ul,unsigned int const,data::OpenStateConfig>(v4);
    open_state_config = (std::tuple_element<1,const std::pair<unsigned int const,data::OpenStateConfig> >::type *)std::get<1ul,unsigned int const,data::OpenStateConfig>(v4);
    if ( *(_BYTE *)(((unsigned __int64)open_state_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)open_state_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)open_state_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(open_state_type);
    }
    PlayerBasicComp::tryUpdateOpenStateCond(this, *open_state_type, 1);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OpenStateConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 1469: range 00000000171B9AF0-00000000171B9C8D
int32_t __cdecl PlayerBasicComp::notifyServerTime(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::ServerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  Player *player; // r14
  int32_t result; // eax
  google::protobuf::uint64 now_ms; // [rsp+18h] [rbp-88h]
  std::shared_ptr<proto::ServerTimeNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:1470";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::notifyServerTime;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::ServerTimeNotify>();
  now_ms = common::tools::TimeUtils::getNowMs();
  v4 = std::__shared_ptr_access<proto::ServerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ServerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  proto::ServerTimeNotify::set_server_time(v4, now_ms);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::ServerTimeNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::ServerTimeNotify>::~shared_ptr((std::shared_ptr<proto::ServerTimeNotify> *const)(v1 + 32));
  result = 0;
  if ( v9 == (char *)v1 )
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

// Line 1479: range 00000000171B9C8E-00000000171BA034
void __cdecl PlayerBasicComp::tryStartGameTimer(PlayerBasicComp *const this, uint32_t game_time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  uint32_t game_timea; // [rsp+4h] [rbp-CCh]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  game_timea = game_time;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 21 game_day_seconds:1486 64 4 22 game_hour_seconds:1487";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::tryStartGameTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  if ( PlayerBasicComp::isGameTimeRunnable(this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getGameDaySeconds(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    *(_DWORD *)(v2 + 64) = ConstValueExcelConfigMgr::getGameHourSeconds(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( *(_DWORD *)(v2 + 48) && *(_DWORD *)(v2 + 64) )
    {
      PlayerBasicComp::stopGameTimer(this);
      if ( !game_time )
        game_timea = PlayerBasicComp::getGameTime(this);
      if ( PlayerUnixTimer::startS(
             &this->gametime_timer_,
             *(_DWORD *)(v2 + 64) - game_timea % *(_DWORD *)(v2 + 64),
             0,
             "./src/player/basic/player_basic_comp.cpp",
             "tryStartGameTimer",
             1501) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/basic/player_basic_comp.cpp",
          "tryStartGameTimer",
          1503);
        v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v13,
                (const char (*)[15])"addTimer fails");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v10, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/basic/player_basic_comp.cpp",
        "tryStartGameTimer",
        1490);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v13,
             (const char (*)[18])"game_day_seconds:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v8,
             (const char (*)[20])" game_hour_seconds:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
  if ( v14 == (char *)v2 )
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

// Line 1509: range 00000000171BA036-00000000171BA056
void __cdecl PlayerBasicComp::stopGameTimer(PlayerBasicComp *const this)
{
  common::tools::MiTimer::cancel(&this->gametime_timer_);
};

// Line 1515: range 00000000171BA058-00000000171BA280
void __cdecl PlayerBasicComp::onGameTimer(PlayerBasicComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerSceneComp *SceneComp; // rax
  PlayerWorldScene *v6; // rax
  PlayerActivityComp *ActivityComp; // rax
  uint32_t game_time; // [rsp+18h] [rbp-68h]
  uint32_t hour; // [rsp+1Ch] [rbp-64h]
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 20 world_scene_ptr:1524";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::onGameTimer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  game_time = PlayerBasicComp::getGameTime(this);
  PlayerBasicComp::updateGameTimeQuest(this, game_time);
  PlayerBasicComp::notifyGameTimeChange(this);
  PlayerBasicComp::tryStartGameTimer(this, game_time);
  hour = PlayerBasicComp::getGameHour(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  PlayerSceneComp::onGameHourChange(SceneComp, hour);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::findMainWorldScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator!=<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v2 + 32)) )
  {
    v6 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerWorldScene::refreshWeatherOnTime(v6);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ActivityComp = Player::getActivityComp(this->player_);
  PlayerActivityComp::onGameHourChange(ActivityComp, hour);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1533: range 00000000171BA282-00000000171BA335
void __cdecl PlayerBasicComp::notifyPlayerDataToMulti(PlayerBasicComp *const this, uint64_t now_ms)
{
  PlayerActivityComp *ActivityComp; // rdx
  PlayerAvatarComp *AvatarComp; // rdx

  PlayerBasicComp::notifyPlayerBriefData(this, now_ms);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ActivityComp = Player::getActivityComp(this->player_);
  PlayerActivityComp::updateActivitySocialData(ActivityComp, now_ms);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  AvatarComp = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::notifyShowAvatarInfo(AvatarComp, now_ms);
};

// Line 1540: range 00000000171BA336-00000000171BA5C7
void __cdecl PlayerBasicComp::notifyPlayerBriefData(PlayerBasicComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  proto::PlayerBasicBriefData *v5; // rdx
  PlayerMpComp *MpComp; // r14
  proto::PlayerMpBriefData *v7; // rax
  PlayerSocialComp *SocialComp; // r14
  proto::PlayerSocialBriefData *v9; // rax
  PlayerHomeComp *HomeComp; // r14
  proto::PlayerHomeBriefData *v11; // rax
  char v12[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 11 notify:1541";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::notifyPlayerBriefData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::SyncPlayerBriefNotify::SyncPlayerBriefNotify((proto::SyncPlayerBriefNotify *const)(v2 + 32));
  v5 = proto::SyncPlayerBriefNotify::mutable_basic_brief_data((proto::SyncPlayerBriefNotify *const)(v2 + 32));
  PlayerBasicComp::fillBasicBriefData(this, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  v7 = proto::SyncPlayerBriefNotify::mutable_mp_brief_data((proto::SyncPlayerBriefNotify *const)(v2 + 32));
  PlayerMpComp::fillMpBriefData(MpComp, v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SocialComp = Player::getSocialComp(this->player_);
  v9 = proto::SyncPlayerBriefNotify::mutable_social_brief_data((proto::SyncPlayerBriefNotify *const)(v2 + 32));
  PlayerSocialComp::fillSocialBriefData(SocialComp, v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  HomeComp = Player::getHomeComp(this->player_);
  v11 = proto::SyncPlayerBriefNotify::mutable_home_brief_data((proto::SyncPlayerBriefNotify *const)(v2 + 32));
  PlayerHomeComp::fillHomeBriefData(HomeComp, v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  sendProtoToSocialService<proto::SyncPlayerBriefNotify>(this->player_, (proto::SyncPlayerBriefNotify *)(v2 + 32));
  proto::SyncPlayerBriefNotify::~SyncPlayerBriefNotify((proto::SyncPlayerBriefNotify *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1550: range 00000000171BA5C8-00000000171BA76B
void __cdecl PlayerBasicComp::notifyPlayerIpRegionData(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  PlayerSocialComp *SocialComp; // r14
  proto::PlayerSocialBriefData *v5; // rax
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 11 notify:1551";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::notifyPlayerIpRegionData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::SyncPlayerIpRegionNotify::SyncPlayerIpRegionNotify((proto::SyncPlayerIpRegionNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SocialComp = Player::getSocialComp(this->player_);
  v5 = proto::SyncPlayerIpRegionNotify::mutable_social_brief_data((proto::SyncPlayerIpRegionNotify *const)(v1 + 32));
  PlayerSocialComp::fillSocialBriefData(SocialComp, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  sendProtoToSocialService<proto::SyncPlayerIpRegionNotify>(this->player_, (proto::SyncPlayerIpRegionNotify *)(v1 + 32));
  proto::SyncPlayerIpRegionNotify::~SyncPlayerIpRegionNotify((proto::SyncPlayerIpRegionNotify *const)(v1 + 32));
  if ( v6 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1558: range 00000000171BA76C-00000000171BAA60
int32_t __cdecl PlayerBasicComp::updateGameTimeQuest(PlayerBasicComp *const this, uint32_t game_time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  PlayerQuestComp *QuestComp; // rax
  uint32_t game_day; // [rsp+18h] [rbp-B8h]
  uint32_t game_hour; // [rsp+1Ch] [rbp-B4h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 21 game_day_seconds:1559 64 4 22 game_hour_seconds:1560";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::updateGameTimeQuest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getGameDaySeconds(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  *(_DWORD *)(v2 + 64) = ConstValueExcelConfigMgr::getGameHourSeconds(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( *(_DWORD *)(v2 + 48) && *(_DWORD *)(v2 + 64) )
  {
    game_day = game_time / *(_DWORD *)(v2 + 48);
    game_hour = game_time % *(_DWORD *)(v2 + 48) / *(_DWORD *)(v2 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    QuestComp = Player::getQuestComp(this->player_);
    PlayerQuestComp::updateQuestContentProgress(
      QuestComp,
      QUEST_CONTENT_GAME_TIME_TICK,
      game_day,
      game_hour,
      UPDATE_SET,
      1u);
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "updateGameTimeQuest",
      1563);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"game_day_seconds:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" game_hour_seconds:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  if ( v16 == (char *)v2 )
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

// Line 1575: range 00000000171BAA62-00000000171BAD6C
void __cdecl PlayerBasicComp::notifyGameTimeChange(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t OwnerUid; // r14d
  char v7; // al
  uint32_t Uid; // eax
  Scene *v9; // rax
  char v10[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 scene_ptr:1576 64 32 16 time_notify:1585";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::notifyGameTimeChange;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( Scene::isHomeScene(v4) )
      goto LABEL_12;
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    OwnerUid = Scene::getOwnerUid(v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    if ( OwnerUid == Player::getUid(this->player_) )
      v7 = 1;
    else
LABEL_12:
      v7 = 0;
    if ( v7 )
    {
      proto::PlayerGameTimeNotify::PlayerGameTimeNotify((proto::PlayerGameTimeNotify *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_time_);
      }
      proto::PlayerGameTimeNotify::set_game_time((proto::PlayerGameTimeNotify *const)(v1 + 64), this->game_time_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      proto::PlayerGameTimeNotify::set_uid((proto::PlayerGameTimeNotify *const)(v1 + 64), Uid);
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      Scene::notifyAllPlayer<proto::PlayerGameTimeNotify>(v9, (proto::PlayerGameTimeNotify *)(v1 + 64), 0);
      proto::PlayerGameTimeNotify::~PlayerGameTimeNotify((proto::PlayerGameTimeNotify *const)(v1 + 64));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1594: range 00000000171BAD6E-00000000171BB0CB
void __cdecl PlayerBasicComp::tryLogPlayerAddExp(
        PlayerBasicComp *const this,
        const ActionReason *item_reason,
        uint32_t add_exp,
        uint32_t old_exp,
        uint32_t new_exp)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  Player *player; // r14
  std::string v12; // [rsp+0h] [rbp-100h]
  uint32_t new_expa; // [rsp+4h] [rbp-FCh]
  uint32_t add_expa; // [rsp+Ch] [rbp-F4h]
  google::protobuf::uint32 *item_reasona; // [rsp+10h] [rbp-F0h]
  PlayerBasicComp *thisa; // [rsp+18h] [rbp-E8h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-D1h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-C0h] BYREF
  std::string v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v12._anon_0._M_allocated_capacity = (std::string::size_type)item_reason;
  HIDWORD(v12._M_string_length) = add_exp;
  LODWORD(v12._M_string_length) = old_exp;
  HIDWORD(v12._M_dataplus._M_p) = new_exp;
  v5 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 23 log_context_holder:1597 64 16 20 add_exp_log_ptr:1598";
  *(_QWORD *)(v5 + 16) = PlayerBasicComp::tryLogPlayerAddExp;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( v12._M_string_length != HIDWORD(v12._M_dataplus._M_p) )
  {
    std::allocator<char>::allocator(&__a, item_reason);
    std::string::basic_string<std::allocator<char>>(&v20, byte_25FB4240, &__a);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 4u, v12);
    std::string::~string(&v20);
    std::allocator<char>::~allocator(&__a);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyAddExp>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyAddExp::set_add_exp(v8, add_expa);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyAddExp::set_exp_after(v9, new_expa);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)item_reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_reasona >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_reasona);
    }
    proto_log::PlayerLogBodyAddExp::set_reason(v10, *item_reasona);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAddExp,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyAddExp> *)(v5 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyAddExp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAddExp> *const)(v5 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  if ( v21 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1607: range 00000000171BB132-00000000171BB55C
void __cdecl PlayerBasicComp::tryLogPlayerLevelUp(
        PlayerBasicComp *const this,
        uint32_t add_exp,
        uint32_t new_exp,
        uint32_t old_level,
        uint32_t new_level,
        uint32_t level_limit)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  PlayerAvatarComp *AvatarComp; // r14
  Player *player; // r14
  std::string v16; // [rsp+0h] [rbp-120h]
  google::protobuf::uint32 level_limita; // [rsp+4h] [rbp-11Ch]
  google::protobuf::uint32 new_levela; // [rsp+8h] [rbp-118h]
  google::protobuf::uint32 old_levela; // [rsp+Ch] [rbp-114h]
  uint32_t new_expa; // [rsp+10h] [rbp-110h]
  uint32_t add_expa; // [rsp+14h] [rbp-10Ch]
  PlayerBasicComp *thisa; // [rsp+18h] [rbp-108h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-F1h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-E0h] BYREF
  std::string v26; // [rsp+50h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+70h] [rbp-B0h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v16._anon_0._M_allocated_capacity) = add_exp;
  *(_DWORD *)v16._anon_0._M_local_buf = new_exp;
  HIDWORD(v16._M_string_length) = old_level;
  LODWORD(v16._M_string_length) = new_level;
  HIDWORD(v16._M_dataplus._M_p) = level_limit;
  v6 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 1 23 log_context_holder:1610 64 16 21 level_up_log_ptr:1611 96 16 25 level_up_ext_log_ptr:1617";
  *(_QWORD *)(v6 + 16) = PlayerBasicComp::tryLogPlayerLevelUp;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -219021312;
  v8[536862723] = -202178560;
  if ( HIDWORD(v16._M_string_length) != LODWORD(v16._M_string_length) )
  {
    std::allocator<char>::allocator(&__a, add_exp);
    std::string::basic_string<std::allocator<char>>(&v26, byte_25FB4240, &__a);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 5u, v16);
    std::string::~string(&v26);
    std::allocator<char>::~allocator(&__a);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyLevelUp>();
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    proto_log::PlayerLogBodyLevelUp::set_add_exp(v9, add_expa);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    proto_log::PlayerLogBodyLevelUp::set_exp_after(v10, new_expa);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    proto_log::PlayerLogBodyLevelUp::set_level_before(v11, old_levela);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    proto_log::PlayerLogBodyLevelUp::set_level_after(v12, new_levela);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    proto_log::PlayerLogBodyLevelUp::set_level_limit(v13, level_limita);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyExtLevelUp>();
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    AvatarComp = Player::getAvatarComp(thisa->player_);
    std::function<ForeachPolicy ()(Avatar &)>::function<PlayerBasicComp::tryLogPlayerLevelUp(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v26,
      (PlayerBasicComp::tryLogPlayerLevelUp::<lambda(Avatar&)>)(v6 + 96));
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v26);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v26);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyExtLevelUp,void>(
      &p_body_ext_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyExtLevelUp> *)(v6 + 96));
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyLevelUp,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyLevelUp> *)(v6 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyExtLevelUp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyExtLevelUp> *const)(v6 + 96));
    std::shared_ptr<proto_log::PlayerLogBodyLevelUp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyLevelUp> *const)(v6 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
  }
  if ( v27 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1618: range 00000000171BB0CC-00000000171BB131
ForeachPolicy __cdecl PlayerBasicComp::tryLogPlayerLevelUp(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int)::{lambda(Avatar &)#1}::operator()(
        const PlayerBasicComp::tryLogPlayerLevelUp::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtLevelUp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtLevelUp,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__level_up_ext_log_ptr);
  v3 = proto_log::PlayerLogBodyExtLevelUp::add_avatar_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 1628: range 00000000171BB55E-00000000171BBC9C
void __cdecl PlayerBasicComp::logOperatePlayerChangeNickName(
        PlayerBasicComp *const this,
        const std::string *nickname_before)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  const std::string *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  bool *p_is_ip_port_log_report; // rax
  bool is_ip_port_log_report; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  uint32_t PlayerClientPort; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  uint32_t PlayerGatePort; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  Player *player; // r14
  std::string nickname_beforea; // [rsp+0h] [rbp-F0h]
  const std::string *nickname_beforeb; // [rsp+0h] [rbp-F0h]
  PlayerBasicComp *thisa; // [rsp+8h] [rbp-E8h]
  bool is_audit_open; // [rsp+1Bh] [rbp-D5h]
  uint32_t submit_limit; // [rsp+1Ch] [rbp-D4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v30; // [rsp+30h] [rbp-C0h] BYREF
  std::string value; // [rsp+40h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+60h] [rbp-90h] BYREF

  nickname_beforea._M_string_length = (std::string::size_type)this;
  nickname_beforea._M_dataplus._M_p = (std::string::pointer)nickname_before;
  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1629 64 16 12 log_ptr:1631";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::logOperatePlayerChangeNickName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&value, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xA91u, nickname_beforea);
  std::string::~string(&value);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyNickNameChange>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyNickNameChange::set_nickname_before(v6, nickname_beforeb);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v8 = PlayerBasicComp::getNickName[abi:cxx11](thisa);
  proto_log::PlayerLogBodyNickNameChange::set_nickname_after(v7, v8);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  p_is_ip_port_log_report = &v9->is_ip_port_log_report;
  if ( *(_BYTE *)(((unsigned __int64)p_is_ip_port_log_report >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_ip_port_log_report & 7) >= *(_BYTE *)(((unsigned __int64)p_is_ip_port_log_report >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_ip_port_log_report);
  }
  is_ip_port_log_report = v9->is_ip_port_log_report;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v30);
  if ( is_ip_port_log_report )
  {
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    Player::getPlayerClientIpForStatLog[abi:cxx11](&value, thisa->player_);
    proto_log::PlayerLogBodyNickNameChange::set_client_ip(v12, &value);
    std::string::~string(&value);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    PlayerClientPort = Player::getPlayerClientPort(thisa->player_);
    proto_log::PlayerLogBodyNickNameChange::set_client_port(v13, PlayerClientPort);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    Player::getPlayerGateIp[abi:cxx11](&value, thisa->player_);
    proto_log::PlayerLogBodyNickNameChange::set_gate_ip(v15, &value);
    std::string::~string(&value);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    PlayerGatePort = Player::getPlayerGatePort(thisa->player_);
    proto_log::PlayerLogBodyNickNameChange::set_gate_port(v16, PlayerGatePort);
  }
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->nickname_audit_data_.submit_count >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(&thisa->nickname_audit_data_.submit_count);
  }
  proto_log::PlayerLogBodyNickNameChange::set_submit_count(v18, thisa->nickname_audit_data_.submit_count);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
  is_audit_open = FeatureSwitchMgr::isNicknameAuditEnabled(&v19->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v30);
  v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyNickNameChange::set_is_audit_open(v20, is_audit_open);
  if ( is_audit_open )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
    submit_limit = FeatureSwitchMgr::getMonthlySubmitNicknameLimit(&v21->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v30);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->nickname_audit_data_.submit_count >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->nickname_audit_data_.submit_count);
    }
    if ( submit_limit > thisa->nickname_audit_data_.submit_count )
    {
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNickNameChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->nickname_audit_data_.submit_count >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->nickname_audit_data_.submit_count);
      }
      proto_log::PlayerLogBodyNickNameChange::set_left_submit_count(
        v22,
        submit_limit - thisa->nickname_audit_data_.submit_count);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v30, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyNickNameChange,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyNickNameChange> *)(v2 + 64));
  Player::printStatLog(player, &p_body_ptr, &v30, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v30);
  std::shared_ptr<proto_log::PlayerLogBodyNickNameChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyNickNameChange> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v32 == (char *)v2 )
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

// Line 1659: range 00000000171BBC9E-00000000171BBD7E
bool __cdecl PlayerBasicComp::isPaused(const PlayerBasicComp *const this)
{
  PlayerMpComp *MpComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isConnected(this->player_) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_paused_);
  }
  return this->is_paused_;
};

// Line 1677: range 00000000171BBD80-00000000171BBE80
void __cdecl PlayerBasicComp::setIsPaused(PlayerBasicComp *const this, bool is_paused)
{
  bool is_game_time_locked_by_client; // r8
  bool is_in_transfer; // cl

  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_time_locked_by_client_);
  }
  is_game_time_locked_by_client = this->is_game_time_locked_by_client_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 77) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_transfer_);
  }
  is_in_transfer = this->is_in_transfer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 94) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) )
  {
    is_paused = (_BYTE)this - 94;
    __asan_report_load1(&this->is_game_time_locked_);
  }
  PlayerBasicComp::setGameTimeRunnable(
    this,
    this->is_game_time_locked_,
    is_paused,
    is_in_transfer,
    is_game_time_locked_by_client);
};

// Line 1683: range 00000000171BBE82-00000000171BBF83
void __cdecl PlayerBasicComp::setIsInTransfer(PlayerBasicComp *const this, bool is_in_transfer)
{
  bool is_game_time_locked_by_client; // r8
  bool v3; // cl
  char is_paused; // di

  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_game_time_locked_by_client_);
  }
  is_game_time_locked_by_client = this->is_game_time_locked_by_client_;
  v3 = is_in_transfer;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_paused_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_paused_);
  }
  is_paused = this->is_paused_;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 94) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_ >> 3) + 0x7FFF8000) )
  {
    is_paused = (_BYTE)this - 94;
    __asan_report_load1(&this->is_game_time_locked_);
  }
  PlayerBasicComp::setGameTimeRunnable(this, this->is_game_time_locked_, is_paused, v3, is_game_time_locked_by_client);
};

// Line 1688: range 00000000171BBF84-00000000171BC01E
void __cdecl PlayerBasicComp::setClientInfo(PlayerBasicComp *const this, const proto::PlayerLoginReq *login_req)
{
  uint32_t v2; // edx
  const std::string *v3; // rax
  const std::string *v4; // rax
  const std::string *v5; // rax

  v2 = proto::PlayerLoginReq::language_type(login_req);
  PlayerBasicComp::setLanguageType(this, v2);
  v3 = proto::PlayerLoginReq::device_info[abi:cxx11](login_req);
  std::string::operator=(&this->client_device_info_, v3);
  v4 = proto::PlayerLoginReq::system_version[abi:cxx11](login_req);
  std::string::operator=(&this->client_system_version_, v4);
  v5 = proto::PlayerLoginReq::client_version[abi:cxx11](login_req);
  std::string::operator=(&this->client_app_version_, v5);
};

// Line 1696: range 00000000171BC020-00000000171BC081
proto::LanguageType __cdecl PlayerBasicComp::getLanguageType(const PlayerBasicComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->client_language_type_);
  }
  if ( this->client_language_type_ )
    return this->client_language_type_;
  else
    return 1;
};

// Line 1706: range 00000000171BC082-00000000171BC422
__int64 __fastcall PlayerBasicComp::setLanguageType(PlayerBasicComp *const this, uint32_t language_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  bool *p_is_enable_setting_new_language; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  __int64 v15; // rsi
  __int64 result; // rax
  common::milog::MiLogStream v17; // [rsp+10h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 language_type:1705 64 16 15 config_ptr:1712";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::setLanguageType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = language_type;
  if ( !proto::LanguageType_IsValid(*(_DWORD *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "setLanguageType",
      1709);
    v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v17, (const char (*)[15])"language_type ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" invalid");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    p_is_enable_setting_new_language = &v8->is_enable_setting_new_language;
    if ( *(_BYTE *)(((unsigned __int64)p_is_enable_setting_new_language >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_enable_setting_new_language & 7) >= *(_BYTE *)(((unsigned __int64)p_is_enable_setting_new_language >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_enable_setting_new_language);
    }
    if ( !v8->is_enable_setting_new_language
      && (v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            &v10->new_language_type_set,
            (const unsigned int *)(v2 + 48))) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/basic/player_basic_comp.cpp",
        "setLanguageType",
        1715);
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v17, (const char (*)[15])"language_type:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v13, (const char (*)[20])off_26049A80);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v14, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = -1;
    }
    else
    {
      v15 = *(unsigned int *)(v2 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->client_language_type_, v15, &this->client_language_type_);
      }
      this->client_language_type_ = v15;
      v7 = 0;
    }
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  }
  result = v7;
  if ( v18 == (char *)v2 )
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

// Line 1723: range 00000000171BC424-00000000171BC654
void __cdecl PlayerBasicComp::notifyPlayerTime(PlayerBasicComp *const this, bool is_paused, uint64_t player_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto::PlayerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::PlayerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  std::__shared_ptr_access<proto::PlayerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  Player *player; // r14
  google::protobuf::uint64 now_ms; // [rsp+28h] [rbp-88h]
  std::shared_ptr<proto::PlayerTimeNotify> __r; // [rsp+30h] [rbp-80h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 notify_ptr:1731";
  *(_QWORD *)(v3 + 16) = PlayerBasicComp::notifyPlayerTime;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( Player::isConnected(this->player_) )
  {
    now_ms = common::tools::TimeUtils::getNowMs();
    common::tools::perf::make_shared<proto::PlayerTimeNotify>();
    v6 = std::__shared_ptr_access<proto::PlayerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    proto::PlayerTimeNotify::set_is_paused(v6, is_paused);
    v7 = std::__shared_ptr_access<proto::PlayerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    proto::PlayerTimeNotify::set_player_time(v7, player_time);
    v8 = std::__shared_ptr_access<proto::PlayerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerTimeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    proto::PlayerTimeNotify::set_server_time(v8, now_ms);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerTimeNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::PlayerTimeNotify>::~shared_ptr((std::shared_ptr<proto::PlayerTimeNotify> *const)(v3 + 32));
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1741: range 00000000171BC656-00000000171BC8AA
void __cdecl PlayerBasicComp::notifyAllPlayerLevelRewardData(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned int *v4; // rax
  unsigned int *v5; // rdx
  std::__shared_ptr_access<proto::PlayerLevelRewardUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *player; // r14
  unsigned int level; // [rsp+14h] [rbp-9Ch]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  std::shared_ptr<proto::PlayerLevelRewardUpdateNotify> __r; // [rsp+30h] [rbp-80h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:1742";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::notifyAllPlayerLevelRewardData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::PlayerLevelRewardUpdateNotify>();
  __for_range = &this->reward_taken_level_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->reward_taken_level_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->reward_taken_level_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    level = *v5;
    v6 = std::__shared_ptr_access<proto::PlayerLevelRewardUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerLevelRewardUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    proto::PlayerLevelRewardUpdateNotify::add_level_list(v6, level);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerLevelRewardUpdateNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::PlayerLevelRewardUpdateNotify>::~shared_ptr((std::shared_ptr<proto::PlayerLevelRewardUpdateNotify> *const)(v1 + 32));
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1752: range 00000000171BC8AC-00000000171BCABC
void __cdecl PlayerBasicComp::notifyExclusiveRuleData(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  ExclusiveRuleExcelConfigMgr *p_exclusive_rule_config_mgr; // r14
  uint32_t PlatformType; // eax
  std::shared_ptr<Config> v6; // [rsp+10h] [rbp-C0h] BYREF
  char v7[176]; // [rsp+20h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 11 notify:1753";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::notifyExclusiveRuleData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::ExclusiveRuleNotify::ExclusiveRuleNotify((proto::ExclusiveRuleNotify *const)(v1 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  p_exclusive_rule_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.exclusive_rule_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  PlatformType = Player::getPlatformType(this->player_);
  ExclusiveRuleExcelConfigMgr::fillExclusvieNotifyByPlatformType(
    p_exclusive_rule_config_mgr,
    PlatformType,
    (proto::ExclusiveRuleNotify *)(v1 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::ExclusiveRuleNotify::~ExclusiveRuleNotify((proto::ExclusiveRuleNotify *const)(v1 + 48));
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1759: range 00000000171BCABE-00000000171BCB14
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBasicComp::setIsProficientPlayer(PlayerBasicComp *const this, bool is_proficient)
{
  if ( *(char *)(((unsigned __int64)&this->is_proficient_player_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_proficient_player_, is_proficient, &this->is_proficient_player_);
  this->is_proficient_player_ = is_proficient;
};

// Line 1765: range 00000000171BCB16-00000000171BCF31
uint32_t __cdecl PlayerBasicComp::calcWorldLevelLimit(const PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  PlayerExcelConfigMgr *p_player_config_mgr; // rcx
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  uint32_t result; // eax
  char v10; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t level; // [rsp+14h] [rbp-BCh]
  bool v14; // [rsp+14h] [rbp-BCh]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-90h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 16 world_level:1766";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::calcWorldLevelLimit;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  p_player_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.player_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  v5 = PlayerExcelConfigMgr::findWorldLevelByPlayerLevel(p_player_config_mgr, this->level_, (uint32_t *)(v1 + 32)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "calcWorldLevelLimit",
      1769);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v17,
           (const char (*)[42])"findWorldLevelByPlayerLevel fail, level_:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->level_);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0;
  }
  else
  {
    v10 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->level_);
    }
    level = this->level_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    v14 = 0;
    if ( level == PlayerExcelConfigMgr::findPlayerLevelLimitByWorldLevel(
                    &v11->design_config.txt_config_mgr.player_config_mgr,
                    *(_DWORD *)(v1 + 32)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v16);
      v10 = 1;
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
      if ( data::PlayerExcelConfigMgrBase::findPlayerLevelLockExcelConfig(
             &v12->design_config.txt_config_mgr.player_config_mgr,
             *(_DWORD *)(v1 + 32) + 1) )
      {
        if ( PlayerBasicComp::isWorldLevelCondSatisfied(this, *(_DWORD *)(v1 + 32) + 1) )
          v14 = 1;
      }
    }
    if ( v10 )
      std::shared_ptr<Config>::~shared_ptr(&v16);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( v14 )
      ++*(_DWORD *)(v1 + 32);
    result = *(_DWORD *)(v1 + 32);
  }
  if ( v18 == (char *)v1 )
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

// Line 1784: range 00000000171BCF32-00000000171BD2FA
__int64 __fastcall PlayerBasicComp::isWorldLevelCondSatisfied(const PlayerBasicComp *const this, uint32_t world_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  __int64 result; // rax
  PlayerQuestComp *QuestComp; // rcx
  char v11; // al
  const data::PlayerLevelLockExcelConfig *level_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 world_level:1783";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::isWorldLevelCondSatisfied;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = world_level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  level_config_ptr = data::PlayerExcelConfigMgrBase::findPlayerLevelLockExcelConfig(
                       &v5->design_config.txt_config_mgr.player_config_mgr,
                       *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->unlock_main_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->unlock_main_quest_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config_ptr->unlock_main_quest_id);
    }
    if ( !level_config_ptr->unlock_main_quest_id )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    QuestComp = Player::getQuestComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->unlock_main_quest_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->unlock_main_quest_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config_ptr->unlock_main_quest_id);
    }
    if ( !PlayerQuestComp::isParentQuestOnceFinished(QuestComp, level_config_ptr->unlock_main_quest_id) )
      v11 = 1;
    else
LABEL_17:
      v11 = 0;
    if ( v11 )
    {
      result = 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->unlock_player_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_config_ptr->unlock_player_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&level_config_ptr->unlock_player_level);
      }
      if ( !level_config_ptr->unlock_player_level )
        goto LABEL_27;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->level_);
      }
      if ( this->level_ < level_config_ptr->unlock_player_level )
        result = 0LL;
      else
LABEL_27:
        result = 1LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "isWorldLevelCondSatisfied",
      1788);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v14,
           (const char (*)[50])"findPlayerLevelLockExcelConfig fail, world_level:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0LL;
  }
  if ( v15 == (char *)v2 )
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

// Line 1804: range 00000000171BD2FC-00000000171BD991
void __fastcall PlayerBasicComp::tryUpgradeWorldLevel(
        PlayerBasicComp *const this,
        proto::PropChangeReason prop_reason,
        bool is_notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<PlayerWorldLevelLimitUpEvent> *v14; // rax
  Player *player; // r14
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  PlayerWorld *v21; // rax
  unsigned int val; // [rsp+1Ch] [rbp-124h] BYREF
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-120h] BYREF
  proto::PropValue prop_value; // [rsp+40h] [rbp-100h] BYREF
  char v26[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 22 world_level_limit:1805 64 4 26 old_world_level_limit:1822 80 4 16 prop_reason:1803 96 "
                        "16 14 event_ptr:1825 128 16 14 world_ptr:1832";
  *(_QWORD *)(v3 + 16) = PlayerBasicComp::tryUpgradeWorldLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 80) = prop_reason;
  *(_DWORD *)(v3 + 48) = PlayerBasicComp::calcWorldLevelLimit(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_world_level_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_world_level_limit_);
  }
  if ( this->last_world_level_limit_ != *(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_world_level_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_world_level_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_world_level_limit_);
    }
    if ( this->last_world_level_limit_ > *(_DWORD *)(v3 + 48) && *(_DWORD *)(v3 + 80) != 12 )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/basic/player_basic_comp.cpp",
        "tryUpgradeWorldLevel",
        1816);
      v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v24, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             v7,
             (const char (*)[26])" last_world_level_limit_:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->last_world_level_limit_);
      v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v9,
              (const char (*)[20])" world_level_limit:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" reason:");
      common::milog::MiLogStream::operator<<<proto::PropChangeReason,(proto::PropChangeReason*)0>(
        v12,
        (const proto::PropChangeReason *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->last_world_level_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_world_level_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_world_level_limit_);
    }
    *(_DWORD *)(v3 + 64) = this->last_world_level_limit_;
    this->last_world_level_limit_ = *(_DWORD *)(v3 + 48);
    common::tools::perf::make_shared<PlayerWorldLevelLimitUpEvent,unsigned int &,unsigned int &>(
      (unsigned int *)(v3 + 96),
      (unsigned int *)(v3 + 48),
      (unsigned int *)(v3 + 64),
      (unsigned int *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    v14 = std::move<std::shared_ptr<PlayerWorldLevelLimitUpEvent> &>((std::shared_ptr<PlayerWorldLevelLimitUpEvent> *)(v3 + 96));
    std::shared_ptr<BaseEvent>::shared_ptr<PlayerWorldLevelLimitUpEvent,void>(
      (std::shared_ptr<BaseEvent> *const)(v3 + 128),
      v14);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 128));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    buildIntProp(&prop_value, 0x2737u, *(unsigned int *)(v3 + 48));
    Player::notifyPlayerProp(player, &prop_value);
    proto::PropValue::~PropValue(&prop_value);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "tryUpgradeWorldLevel",
      1829);
    v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v24, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v17,
            (const char (*)[20])" world_level_limit ");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
    v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v19, (const char (*)[5])off_26016EA0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 128));
    if ( std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 128), 0LL) )
    {
      v21 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      PlayerWorld::autoAdjustLevel(v21, *(_DWORD *)(v3 + 48), is_notify);
    }
    PlayerBasicComp::tryLevelUp(this, *(proto::PropChangeReason *)(v3 + 80), is_notify, 0LL);
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 128));
    std::shared_ptr<PlayerWorldLevelLimitUpEvent>::~shared_ptr((std::shared_ptr<PlayerWorldLevelLimitUpEvent> *const)(v3 + 96));
  }
  if ( v26 == (char *)v3 )
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

// Line 1844: range 00000000171BD992-00000000171BDC02
uint32_t __cdecl PlayerBasicComp::getPlayerLevelLimit(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  uint32_t result; // eax
  const data::PlayerLevelLockExcelConfig *level_lock_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 22 world_level_limit:1845";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::getPlayerLevelLimit;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = PlayerBasicComp::calcWorldLevelLimit(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  level_lock_config_ptr = data::PlayerExcelConfigMgrBase::findPlayerLevelLockExcelConfig(
                            &v4->design_config.txt_config_mgr.player_config_mgr,
                            *(_DWORD *)(v1 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( level_lock_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&level_lock_config_ptr->player_level_upper_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_lock_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_lock_config_ptr->player_level_upper_limit >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&level_lock_config_ptr->player_level_upper_limit);
    }
    result = level_lock_config_ptr->player_level_upper_limit;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "getPlayerLevelLimit",
      1849);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v11,
           (const char (*)[51])"findPlayerLevelLockExcelConfig fail, world_level: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0;
  }
  if ( v12 == (char *)v1 )
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

// Line 1857: range 00000000171BDC04-00000000171BDE19
uint32_t __cdecl PlayerBasicComp::getWorldLevel(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rcx
  uint32_t Level; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 world_ptr:1858";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::getWorldLevel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "getWorldLevel",
      1861);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v8,
           (const char (*)[27])"world_ptr is null, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    Level = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Level = PlayerWorld::getLevel(v6);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 32));
  result = Level;
  if ( v9 == (char *)v1 )
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

// Line 1869: range 00000000171BDE1A-00000000171BDFD3
uint64_t __cdecl PlayerBasicComp::getTotalExp(const PlayerBasicComp *const this)
{
  PlayerExcelConfigMgr *p_player_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  uint64_t total_exp; // rcx
  const data::PlayerLevelExcelConfig *player_level_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  p_player_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.player_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_);
  }
  player_level_config_ptr = data::PlayerExcelConfigMgrBase::findPlayerLevelExcelConfig(
                              p_player_config_mgr,
                              this->level_);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( player_level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&player_level_config_ptr->total_exp >> 3) + 0x7FFF8000) )
      __asan_report_load8(&player_level_config_ptr->total_exp);
    total_exp = player_level_config_ptr->total_exp;
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->exp_);
    }
    return total_exp + this->exp_;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "getTotalExp",
      1873);
    v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v7,
           (const char (*)[40])"findPlayerLevelExcelConfig fail, level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->level_);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0LL;
  }
};

// Line 1880: range 00000000171BDFD4-00000000171BE3BA
uint64_t __fastcall PlayerBasicComp::genGuid(PlayerBasicComp *const this, GuidType type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rcx
  uint64_t result; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  unsigned __int64 v13; // rcx
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-90h] BYREF
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 type:1879";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::genGuid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = type;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guid_init_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guid_init_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_guid_init_);
  }
  if ( !this->is_guid_init_ )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "genGuid",
      1883);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v14,
           (const char (*)[28])"called before init, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->guid_seq_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->guid_seq_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->guid_seq_id_);
    }
    v7 = ++this->guid_seq_id_;
    if ( v7 > std::numeric_limits<unsigned int>::max() >> 1 )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/basic/player_basic_comp.cpp",
        "genGuid",
        1889);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v14, (const char (*)[24])off_2604A0A0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->guid_seq_id_);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])", type:");
      v11 = common::milog::MiLogStream::operator<<<GuidType,(GuidType*)0>(v10, (const GuidType *)(v2 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])", player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v12, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v13 = (unsigned __int64)Player::getUid(this->player_) << 32;
    if ( *(_BYTE *)(((unsigned __int64)&this->guid_seq_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->guid_seq_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->guid_seq_id_);
    }
    result = v13 + this->guid_seq_id_;
  }
  if ( v15 == (char *)v2 )
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

// Line 1897: range 00000000171BE3BC-00000000171BEA8B
int32_t __cdecl PlayerBasicComp::fillBasicBriefData(
        PlayerBasicComp *const this,
        proto::PlayerBasicBriefData *basic_brief_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::string *v5; // rdx
  uint32_t Level; // edx
  uint32_t WorldLevel; // edx
  google::protobuf::uint32 Now; // edx
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v10; // rax
  char *v11; // rsi
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  __int64 AvatarId; // rdx
  char v14; // al
  __int64 v15; // rdx
  uint32_t Exp; // edx
  uint32_t Hcoin; // edx
  uint32_t Scoin; // edx
  uint32_t Mcoin; // edx
  uint32_t PlatformType; // edx
  PlayerAvatarComp *v21; // rax
  google::protobuf::uint32 PlayerGenderType; // edx
  int32_t result; // eax
  __int64 choose_avatar_guid; // [rsp+10h] [rbp-90h]
  const PlayerItemComp *item_comp; // [rsp+18h] [rbp-88h]
  std::string value; // [rsp+20h] [rbp-80h] BYREF
  char v28[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 avatar_ptr:1905";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::fillBasicBriefData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = PlayerBasicComp::getNickName[abi:cxx11](this);
  proto::PlayerBasicBriefData::set_nickname(basic_brief_data, v5);
  Level = PlayerBasicComp::getLevel(this);
  proto::PlayerBasicBriefData::set_level(basic_brief_data, Level);
  WorldLevel = PlayerBasicComp::getWorldLevel(this);
  proto::PlayerBasicBriefData::set_world_level(basic_brief_data, WorldLevel);
  Now = common::tools::TimeUtils::getNow();
  proto::PlayerBasicBriefData::set_last_login_time(basic_brief_data, Now);
  if ( *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->profile_picture_);
  }
  if ( !this->profile_picture_.avatar_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    choose_avatar_guid = PlayerAvatarComp::getChooseAvatarGuid(AvatarComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v10 = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 32), (uint64_t)v10, choose_avatar_guid);
    v11 = (char *)(v2 + 32);
    if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 32)) )
    {
      v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      AvatarId = Avatar::getAvatarId(v12);
      v14 = *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v11) = v14 != 0;
        __asan_report_store4(&this->profile_picture_, v11, AvatarId);
      }
      this->profile_picture_.avatar_id = AvatarId;
      v15 = (*(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3) + 0x7FFF8000));
      if ( (_BYTE)v15 )
        __asan_report_store4(&this->profile_picture_.costume_id, (((_BYTE)this + 60) & 7u) + 3, v15);
      this->profile_picture_.costume_id = 0;
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
  }
  Exp = PlayerBasicComp::getExp(this);
  proto::PlayerBasicBriefData::set_exp(basic_brief_data, Exp);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  item_comp = Player::getItemComp(this->player_);
  Hcoin = PlayerItemComp::getHcoin(item_comp);
  proto::PlayerBasicBriefData::set_hcoin(basic_brief_data, Hcoin);
  Scoin = PlayerItemComp::getScoin(item_comp);
  proto::PlayerBasicBriefData::set_scoin(basic_brief_data, Scoin);
  Mcoin = PlayerItemComp::getMcoin(item_comp);
  proto::PlayerBasicBriefData::set_mcoin(basic_brief_data, Mcoin);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  PlatformType = Player::getPlatformType(this->player_);
  proto::PlayerBasicBriefData::set_platform_type(basic_brief_data, PlatformType);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getFriendBriefShowOnlineId[abi:cxx11](&value, this->player_);
  proto::PlayerBasicBriefData::set_online_id(basic_brief_data, &value);
  std::string::~string(&value);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getPsnId[abi:cxx11](&value, this->player_);
  proto::PlayerBasicBriefData::set_psn_id(basic_brief_data, &value);
  std::string::~string(&value);
  if ( *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->profile_picture_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->profile_picture_);
  }
  proto::PlayerBasicBriefData::set_head_image_avatar_id(basic_brief_data, this->profile_picture_.avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->profile_picture_.costume_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->profile_picture_.costume_id);
  }
  proto::PlayerBasicBriefData::set_profile_picture_costume_id(basic_brief_data, this->profile_picture_.costume_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_language_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->client_language_type_);
  }
  proto::PlayerBasicBriefData::set_client_language_type(basic_brief_data, this->client_language_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->register_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->register_time_);
  }
  proto::PlayerBasicBriefData::set_register_time(basic_brief_data, this->register_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v21 = Player::getAvatarComp(this->player_);
  PlayerGenderType = PlayerAvatarComp::getPlayerGenderType(v21);
  proto::PlayerBasicBriefData::set_gender_type(basic_brief_data, PlayerGenderType);
  result = 0;
  if ( v28 == (char *)v2 )
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

// Line 1934: range 00000000171BEA8C-00000000171BF37F
void __cdecl PlayerBasicComp::checkSendRebateReward(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::string *v4; // rax
  uint32_t AccountType; // eax
  std::vector<data::IdCountConfig>::size_type v6; // rax
  const std::string *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRebate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  google::protobuf::RepeatedPtrField<proto_log::ItemLog> *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerMailComp *MailComp; // rax
  common::milog::MiLogStream *v12; // rcx
  Player *v13; // r14
  std::string v14; // [rsp+0h] [rbp-1F0h]
  uint32_t mail_config_id; // [rsp+24h] [rbp-1CCh]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-1C8h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+30h] [rbp-1C0h] BYREF
  const data::RebateConfig *rebate_config_ptr; // [rsp+38h] [rbp-1B8h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+40h] [rbp-1B0h]
  const data::IdCountConfig *id_count_config; // [rsp+48h] [rbp-1A8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-1A0h] BYREF
  std::string p_account_uid; // [rsp+60h] [rbp-190h] BYREF
  char v23[368]; // [rsp+80h] [rbp-170h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v1 = (unsigned __int64)v23;
  v14._M_string_length = (std::string::size_type)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 1 11 holder:1952 64 16 12 log_ptr:1963 96 16 15 item_param:1958 128 24 19 item_param_vec:19"
                        "54 192 24 17 argument_vec:1968 256 24 11 reason:1969";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::checkSendRebateReward;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_rebate_mail_sent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_rebate_mail_sent_);
  if ( !this->is_rebate_mail_sent_ && PlayerBasicComp::isStateOpen(this, 1u) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 96));
    v14._anon_0._M_allocated_capacity = (std::string::size_type)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96))->design_config.db_config_mgr.db_local_config_mgr.rebate_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v4 = Player::getAccountUid[abi:cxx11](this->player_);
    std::string::basic_string(&p_account_uid, v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AccountType = Player::getAccountType(this->player_);
    rebate_config_ptr = data::DbRebateConfigMgr::findRebateConfig(
                          (const data::DbRebateConfigMgr *const)v14._anon_0._M_allocated_capacity,
                          AccountType,
                          &p_account_uid);
    std::string::~string(&p_account_uid);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
    if ( rebate_config_ptr )
    {
      PlayerBasicComp::getNextTransNo[abi:cxx11](&p_account_uid, this);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x3F1u, v14);
      std::string::~string(&p_account_uid);
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v1 + 128));
      v6 = std::vector<data::IdCountConfig>::size(&rebate_config_ptr->id_count_config_vec);
      std::vector<ItemParam>::reserve((std::vector<ItemParam> *const)(v1 + 128), v6);
      __for_range = &rebate_config_ptr->id_count_config_vec;
      __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&rebate_config_ptr->id_count_config_vec)._M_current;
      __for_end._M_current = std::vector<data::IdCountConfig>::end(&rebate_config_ptr->id_count_config_vec)._M_current;
      while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                &__for_begin,
                &__for_end) )
      {
        id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
        *(_DWORD *)(v1 + 96) = 0;
        *(_DWORD *)(v1 + 100) = 0;
        *(_DWORD *)(v1 + 104) = 0;
        *(_DWORD *)(v1 + 108) = 0;
        ItemParam::fromIdCountConfig((ItemParam *const)(v1 + 96), id_count_config);
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v1 + 128),
          (const std::vector<ItemParam>::value_type *)(v1 + 96));
        __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
      }
      common::tools::perf::make_shared<proto_log::PlayerLogBodyRebate>();
      v14._anon_0._M_allocated_capacity = (std::string::size_type)std::__shared_ptr_access<proto_log::PlayerLogBodyRebate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRebate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((*(&v14._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(&v14._anon_0._M_allocated_capacity + 1) + 24);
      v7 = Player::getAccountUid[abi:cxx11](*(const Player *const *)(*(&v14._anon_0._M_allocated_capacity + 1) + 24));
      proto_log::PlayerLogBodyRebate::set_account_uid(
        (proto_log::PlayerLogBodyRebate *const)v14._anon_0._M_allocated_capacity,
        v7);
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyRebate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRebate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v9 = proto_log::PlayerLogBodyRebate::mutable_item_list(v8);
      common::tools::MiscUtils::vectorToRepeated<ItemParam,proto_log::ItemLog,void (ItemParam::*)(proto_log::ItemLog&)const>(
        (const std::vector<ItemParam> *)(v1 + 128),
        v9,
        (void (*)(const ItemParam *, proto_log::ItemLog *))ItemParam::toItemLog);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v1 + 96));
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      mail_config_id = ConstValueExcelConfigMgr::getRebateMailId(&v10->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
      std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 192));
      ActionReason::ActionReason((ActionReason *const)(v1 + 256), ACTION_REASON_REBATE, ITEM_LIMIT_REBATE);
      if ( *(_BYTE *)(((*(&v14._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(&v14._anon_0._M_allocated_capacity + 1) + 24);
      MailComp = Player::getMailComp(*(Player *const *)(*(&v14._anon_0._M_allocated_capacity + 1) + 24));
      if ( PlayerMailComp::addMailById(
             MailComp,
             mail_config_id,
             7u,
             (const std::vector<ItemParam> *)(v1 + 128),
             (const std::vector<std::string> *)(v1 + 192),
             (const ActionReason *)(v1 + 256)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&p_account_uid,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/basic/player_basic_comp.cpp",
          "checkSendRebateReward",
          1972);
        v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                (common::milog::MiLogStream *const)&p_account_uid,
                (const char (*)[26])"addMailById fail, player:");
        if ( *(_BYTE *)(((*(&v14._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(&v14._anon_0._M_allocated_capacity + 1) + 24);
        operator<<(v12, *(const Player **)(*(&v14._anon_0._M_allocated_capacity + 1) + 24));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_account_uid);
      }
      else
      {
        if ( *(char *)(((*(&v14._anon_0._M_allocated_capacity + 1) + 72) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(
            *(&v14._anon_0._M_allocated_capacity + 1) + 72,
            mail_config_id,
            *(&v14._anon_0._M_allocated_capacity + 1) + 72);
        *(_BYTE *)(*(&v14._anon_0._M_allocated_capacity + 1) + 72) = 1;
        if ( *(_BYTE *)(((*(&v14._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(&v14._anon_0._M_allocated_capacity + 1) + 24);
        v13 = *(Player **)(*(&v14._anon_0._M_allocated_capacity + 1) + 24);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)(v1 + 96),
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRebate,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyRebate> *)(v1 + 64));
        Player::printStatLog(v13, &p_body_ptr, (MessagePtr *)(v1 + 96), 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v1 + 96));
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 192));
      std::shared_ptr<proto_log::PlayerLogBodyRebate>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRebate> *const)(v1 + 64));
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v1 + 128));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
    }
  }
  if ( v14._M_string_length == v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1982: range 00000000171BF380-00000000171BF67E
bool __cdecl PlayerBasicComp::changeCurJsonClimateType(
        PlayerBasicComp *const this,
        data::JsonClimateType json_climate_type,
        std::vector<proto::PropValue> *notify_prop_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  bool v6; // r14
  __int64 v7; // rdx
  PlayerEventComp *EventComp; // r14
  bool result; // al
  unsigned int cur_json_climate_type; // [rsp+2Ch] [rbp-B4h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-B0h] BYREF
  proto::PropValue __args_0; // [rsp+40h] [rbp-A0h] BYREF
  char v14[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 event_ptr:1989";
  *(_QWORD *)(v3 + 16) = PlayerBasicComp::changeCurJsonClimateType;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_json_climate_type_);
  }
  if ( json_climate_type == this->cur_json_climate_type_ )
  {
    v6 = 0;
  }
  else
  {
    v7 = (*(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store4(&this->cur_json_climate_type_, (((_BYTE)this + 76) & 7u) + 3, v7);
    this->cur_json_climate_type_ = json_climate_type;
    buildIntProp(&__args_0, 0x2734u, this->cur_json_climate_type_);
    std::vector<proto::PropValue>::emplace_back<proto::PropValue>(notify_prop_vec, &__args_0, &__args_0);
    proto::PropValue::~PropValue(&__args_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_json_climate_type_);
    }
    cur_json_climate_type = this->cur_json_climate_type_;
    common::tools::perf::make_shared<ChangeClimateTypeEvent,unsigned int>(
      (unsigned int *)(v3 + 32),
      &cur_json_climate_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr<ChangeClimateTypeEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<ChangeClimateTypeEvent> *)(v3 + 32));
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    v6 = 1;
    std::shared_ptr<ChangeClimateTypeEvent>::~shared_ptr((std::shared_ptr<ChangeClimateTypeEvent> *const)(v3 + 32));
  }
  result = v6;
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

// Line 1996: range 00000000171BF680-00000000171C011C
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBasicComp::changeCurClimateMeter(
        PlayerBasicComp *const this,
        data::JsonClimateType json_climate_type,
        float delta,
        bool is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __m128i v7; // xmm0
  data::ClimateTrendType v8; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 ConfigClimate; // rax
  const float *v11; // rax
  float *v12; // rax
  float *v13; // rdx
  char v14; // cl
  const float *v15; // rsi
  float v16; // xmm0_4
  __int64 v17; // rdx
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned __int64 v20; // rax
  __m128i v21; // xmm0
  PlayerEventComp *v22; // r14
  float CurClimateMeter; // [rsp+8h] [rbp-1A8h]
  float deltaa; // [rsp+10h] [rbp-1A0h]
  float __b; // [rsp+24h] [rbp-18Ch] BYREF
  float __a; // [rsp+28h] [rbp-188h] BYREF
  data::ClimateTrendType trend_type; // [rsp+2Ch] [rbp-184h]
  float total_ratio; // [rsp+30h] [rbp-180h]
  data::JsonClimateType old_json_climate_type; // [rsp+34h] [rbp-17Ch]
  float delta_climate_meter; // [rsp+38h] [rbp-178h]
  float old_climate_meter; // [rsp+3Ch] [rbp-174h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-170h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-160h] BYREF
  proto::PropValue __args_0; // [rsp+70h] [rbp-140h] BYREF
  char v36[272]; // [rsp+A0h] [rbp-110h] BYREF

  deltaa = delta;
  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 22 max_climate_meter:2011 64 16 14 event_ptr:2041 96 24 20 notify_prop_vec:2033 160 32 17"
                        " debug_string:1998";
  *(_QWORD *)(v4 + 16) = PlayerBasicComp::changeCurClimateMeter;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  *(_OWORD *)&delta = LODWORD(delta);
  if ( delta < 0.0 )
    v8 = Fade;
  else
    v8 = Rise;
  trend_type = v8;
  std::string::basic_string(v4 + 160);
  *(float *)v7.m128i_i32 = PlayerBasicComp::calcTotalClimateMeterResistRatio(
                             this,
                             json_climate_type,
                             Other_2,
                             trend_type,
                             (std::string *)(v4 + 160));
  total_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  if ( total_ratio != 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_json_climate_type_);
    }
    old_json_climate_type = this->cur_json_climate_type_;
    if ( json_climate_type != this->cur_json_climate_type_ )
    {
      this->cur_json_climate_type_ = json_climate_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cur_climate_meter_, (((_BYTE)this + 76) & 7u) + 3, &this->cur_climate_meter_);
      }
      this->cur_climate_meter_ = 0.0;
    }
    delta_climate_meter = total_ratio * deltaa;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 64));
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    ConfigClimate = (unsigned __int64)JsonConfigMgr::getConfigClimate(&v9->design_config.json_config_mgr);
    if ( *(_BYTE *)((ConfigClimate >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ConfigClimate >> 3) + 0x7FFF8000) <= 3 )
      ConfigClimate = __asan_report_load4(ConfigClimate);
    *(_DWORD *)(v4 + 48) = *(_DWORD *)ConfigClimate;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_climate_meter_);
    }
    old_climate_meter = this->cur_climate_meter_;
    __b = this->cur_climate_meter_ + delta_climate_meter;
    v11 = std::min<float>((const float *)(v4 + 48), &__b);
    __a = 0.0;
    v15 = v11;
    v12 = (float *)std::max<float>(&__a, v11);
    v13 = v12;
    v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    LOBYTE(v15) = v14 != 0;
    if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
      __asan_report_load4(v12);
    v16 = *v13;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_climate_meter_, v15, &this->cur_climate_meter_);
    }
    this->cur_climate_meter_ = v16;
    if ( this->cur_climate_meter_ == 0.0 )
    {
      v17 = (*(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v17 )
        __asan_report_store4(&this->cur_json_climate_type_, (((_BYTE)this + 76) & 7u) + 3, v17);
      this->cur_json_climate_type_ = Normal;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_json_climate_type_);
    }
    if ( old_json_climate_type != this->cur_json_climate_type_ )
    {
      __a = *(float *)&this->cur_json_climate_type_;
      common::tools::perf::make_shared<ChangeClimateTypeEvent,unsigned int>(
        (unsigned int *)(v4 + 64),
        (unsigned int *)&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<ChangeClimateTypeEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<ChangeClimateTypeEvent> *)(v4 + 64));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<ChangeClimateTypeEvent>::~shared_ptr((std::shared_ptr<ChangeClimateTypeEvent> *const)(v4 + 64));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_json_climate_type_);
    }
    if ( old_json_climate_type != this->cur_json_climate_type_ )
      goto LABEL_38;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_climate_meter_);
    }
    if ( this->cur_climate_meter_ != old_climate_meter )
    {
LABEL_38:
      if ( is_notify )
      {
        std::vector<proto::PropValue>::vector((std::vector<proto::PropValue> *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_json_climate_type_);
        }
        buildIntProp(&__args_0, 0x2734u, this->cur_json_climate_type_);
        std::vector<proto::PropValue>::emplace_back<proto::PropValue>(
          (std::vector<proto::PropValue> *const)(v4 + 96),
          &__args_0,
          &__args_0);
        proto::PropValue::~PropValue(&__args_0);
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_climate_meter_);
        }
        buildHundredIntProp(&__args_0, 0x2733u, this->cur_climate_meter_);
        std::vector<proto::PropValue>::emplace_back<proto::PropValue>(
          (std::vector<proto::PropValue> *const)(v4 + 96),
          &__args_0,
          &__args_0);
        proto::PropValue::~PropValue(&__args_0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::notifyPlayerPropList(this->player_, (const std::vector<proto::PropValue> *)(v4 + 96));
        std::vector<proto::PropValue>::~vector((std::vector<proto::PropValue> *const)(v4 + 96));
      }
      CurClimateMeter = PlayerBasicComp::getCurClimateMeter(this);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_event_ptr);
      v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_event_ptr);
      v20 = (unsigned __int64)JsonConfigMgr::getConfigClimate(&v19->design_config.json_config_mgr);
      if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v20 >> 3) + 0x7FFF8000) <= 3 )
        v20 = __asan_report_load4(v20);
      v21 = (__m128i)*(unsigned int *)v20;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_event_ptr);
      if ( CurClimateMeter >= *(float *)v21.m128i_i32 )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/basic/player_basic_comp.cpp",
          "changeCurClimateMeter",
          2040);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v34, (const char (*)[13])"climate full");
        common::milog::MiLogStream::~MiLogStream(&v34);
        LODWORD(__a) = PlayerBasicComp::getCurJsonClimateType(this);
        *(float *)v21.m128i_i32 = PlayerBasicComp::getCurClimateMeter(this);
        __b = COERCE_FLOAT(_mm_cvtsi128_si32(v21));
        common::tools::perf::make_shared<ClimateMeterFullEvent,float,data::JsonClimateType>(
          (float *)(v4 + 64),
          (data::JsonClimateType *)&__b,
          &__a,
          (data::JsonClimateType *)&__b);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v22 = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<ClimateMeterFullEvent,void>(
          &p_event_ptr,
          (const std::shared_ptr<ClimateMeterFullEvent> *)(v4 + 64));
        PlayerEventComp::notifyEvent(v22, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        std::shared_ptr<ClimateMeterFullEvent>::~shared_ptr((std::shared_ptr<ClimateMeterFullEvent> *const)(v4 + 64));
      }
      PlayerBasicComp::refreshCurrentClimateServerBuffs(this);
    }
  }
  std::string::~string((void *)(v4 + 160));
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 2049: range 00000000171C011E-00000000171C018E
void __cdecl PlayerBasicComp::resetCurClimateMeter(PlayerBasicComp *const this, bool is_notify)
{
  bool v2; // dl

  v2 = is_notify;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_climate_meter_);
  }
  PlayerBasicComp::changeCurClimateMeter(this, Normal, -this->cur_climate_meter_, v2);
};

// Line 2055: range 00000000171C0190-00000000171C0942
void __fastcall PlayerBasicComp::addResistClimateMixin(
        PlayerBasicComp *const this,
        BaseAbilityMixinWtr *p_mixin_wtr,
        std::vector<unsigned int> *p_climate_type_vec,
        uint32_t source_type,
        uint32_t trend_type,
        float resist_ratio,
        uint32_t avatar_stage_type,
        Avatar *avatar)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  _DWORD *v10; // r12
  common::milog::MiLogStream *v11; // r14
  std::vector<unsigned int> *v12; // rax
  std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::string *v15; // rax
  ClimateResistInfo *v16; // rax
  ClimateResistInfo *v17; // rdx
  common::milog::MiLogStream *v18; // r15
  char v19; // r14
  std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  std::allocator<char> __a; // [rsp+3Fh] [rbp-211h] BYREF
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-210h] BYREF
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-1F0h] BYREF
  char v40[464]; // [rsp+80h] [rbp-1D0h] BYREF

  v8 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_3(416LL);
    if ( v9 )
      v8 = v9;
  }
  *(_QWORD *)v8 = 1102416563LL;
  *(_QWORD *)(v8 + 8) = "8 48 4 16 source_type:2053 64 4 15 trend_type:2053 80 4 17 resist_ratio:2054 96 4 22 avatar_stag"
                        "e_type:2054 112 8 16 avatar_guid:2082 144 16 14 mixin_ptr:2070 176 16 17 modifier_ptr:2074 208 136 9 info:2062";
  *(_QWORD *)(v8 + 16) = PlayerBasicComp::addResistClimateMixin;
  v10 = (_DWORD *)(v8 >> 3);
  v10[536862720] = -235802127;
  v10[536862721] = -234556943;
  v10[536862722] = -234556924;
  v10[536862723] = 61956;
  v10[536862723] = -234881024;
  v10[536862724] = 62194;
  v10[536862725] = 62194;
  v10[536862726] = 62194;
  v10[536862730] = -218103808;
  v10[536862731] = -202116109;
  v10[536862732] = -202116109;
  *(_DWORD *)(v8 + 48) = source_type;
  *(_DWORD *)(v8 + 64) = trend_type;
  *(float *)(v8 + 80) = resist_ratio;
  *(_DWORD *)(v8 + 96) = avatar_stage_type;
  if ( std::list<ClimateResistInfo>::size(&this->climate_resist_list_) <= 0x64 )
  {
    ClimateResistInfo::ClimateResistInfo((ClimateResistInfo *const)(v8 + 208));
    std::weak_ptr<BaseAbilityMixin>::operator=((std::weak_ptr<BaseAbilityMixin> *const)(v8 + 208), p_mixin_wtr);
    v12 = std::move<std::vector<unsigned int> &>(p_climate_type_vec);
    std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v8 + 224), v12);
    *(_DWORD *)(v8 + 248) = *(_DWORD *)(v8 + 48);
    *(_DWORD *)(v8 + 252) = *(_DWORD *)(v8 + 64);
    *(_DWORD *)(v8 + 256) = *(_DWORD *)(v8 + 80);
    *(_DWORD *)(v8 + 260) = *(_DWORD *)(v8 + 96);
    *(_QWORD *)(v8 + 264) = Avatar::getGuid(avatar);
    std::weak_ptr<BaseAbilityMixin>::lock((const std::weak_ptr<BaseAbilityMixin> *const)(v8 + 144));
    if ( std::operator!=<BaseAbilityMixin>((const std::shared_ptr<BaseAbilityMixin> *)(v8 + 144), 0LL) )
    {
      v13 = std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 144));
      BaseAbilityMixin::getAbilityName[abi:cxx11]((std::string *)&v39, v13);
      std::string::operator=(v8 + 272, &v39);
      std::string::~string(&v39);
      std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 144));
      BaseAbilityMixin::getModifier((const BaseAbilityMixin *const)(v8 + 176));
      if ( std::operator!=<ActorModifier>(0LL, (const std::shared_ptr<ActorModifier> *)(v8 + 176)) )
      {
        v14 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 176));
        v15 = ActorModifier::getName[abi:cxx11](v14);
        std::string::operator=(v8 + 304, v15);
      }
      *(_DWORD *)(v8 + 336) = Avatar::getAvatarId(avatar);
      std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v8 + 176));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ClimateResistInfo::printLog((const ClimateResistInfo *const)(v8 + 208), this->player_, 0, 0);
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(v8 + 264);
    v16 = std::move<ClimateResistInfo &>((ClimateResistInfo *)(v8 + 208));
    std::list<ClimateResistInfo>::emplace_back<ClimateResistInfo>(&this->climate_resist_list_, v16, v17);
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "addResistClimateMixin",
      2087);
    v18 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v38,
            (const char (*)[23])"addResistClimateMixin:");
    v19 = 0;
    if ( std::operator==<BaseAbilityMixin>((const std::shared_ptr<BaseAbilityMixin> *)(v8 + 144), 0LL) )
    {
      std::allocator<char>::allocator(&__a, 0LL);
      v19 = 1;
      std::string::basic_string<std::allocator<char>>((std::string *const)&v39, byte_25FB4240, &__a);
    }
    else
    {
      v20 = std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v8 + 144));
      BaseAbilityMixin::getDesc[abi:cxx11]((std::string *)&v39, v20);
    }
    v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)&v39);
    v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])" source_type:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v8 + 48));
    v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])" trend_type:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v8 + 64));
    v26 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v25,
            (const char (*)[20])" avatar_stage_type:");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v8 + 96));
    v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v27, (const char (*)[14])" avatar_guid:");
    v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v28,
            (const unsigned __int64 *)(v8 + 112));
    v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v29, (const char (*)[15])" resist_ratio:");
    v31 = common::milog::MiLogStream::operator<<<float,(float *)0>(v30, (const float *)(v8 + 80));
    v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v32, this->player_);
    std::string::~string(&v39);
    if ( v19 )
      std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::~MiLogStream(&v38);
    std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(v8 + 144));
    ClimateResistInfo::~ClimateResistInfo((ClimateResistInfo *const)(v8 + 208));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "addResistClimateMixin",
      2058);
    v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v39,
            (const char (*)[29])"climate_resist_list_.size():");
    *(_QWORD *)(v8 + 112) = std::list<ClimateResistInfo>::size(&this->climate_resist_list_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)(v8 + 112));
    common::milog::MiLogStream::~MiLogStream(&v39);
  }
  if ( v40 == (char *)v8 )
  {
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v8 = 1172321806LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v8 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v8 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 2094: range 00000000171C0D2A-00000000171C0D63
void __cdecl PlayerBasicComp::delResistClimateMixin(PlayerBasicComp *const this, BaseAbilityMixinPtr *p_mixin_ptr)
{
  std::list<ClimateResistInfo>::remove_if<PlayerBasicComp::delResistClimateMixin(std::shared_ptr<BaseAbilityMixin>)::{lambda(ClimateResistInfo const&)#1}>(
    &this->climate_resist_list_,
    (PlayerBasicComp::delResistClimateMixin::<lambda(const ClimateResistInfo&)>)__PAIR128__(
                                                                                  (unsigned __int64)this,
                                                                                  (unsigned __int64)p_mixin_ptr));
};

// Line 2095: range 00000000171C0944-00000000171C0D29
bool __cdecl PlayerBasicComp::delResistClimateMixin(std::shared_ptr<BaseAbilityMixin>)::{lambda(ClimateResistInfo const&)#1}::operator()(
        const PlayerBasicComp::delResistClimateMixin::<lambda(const ClimateResistInfo&)> *const __closure,
        const ClimateResistInfo *info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  BaseAbilityMixinPtr *mixin_ptr; // r14
  bool v6; // al
  bool v7; // dl
  PlayerBasicComp *this; // rax
  common::milog::MiLogStream *v9; // r15
  char v10; // r14
  std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *p_this; // rdi
  PlayerBasicComp *v14; // rax
  bool result; // al
  std::allocator<char> __a; // [rsp+2Dh] [rbp-B3h] BYREF
  bool is_target; // [rsp+2Eh] [rbp-B2h]
  bool is_to_remove; // [rsp+2Fh] [rbp-B1h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v22[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 24 to_remove_mixin_ptr:2103";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::delResistClimateMixin(std::shared_ptr<BaseAbilityMixin>)::{lambda(ClimateResistInfo const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  mixin_ptr = __closure->__mixin_ptr;
  std::weak_ptr<BaseAbilityMixin>::lock((const std::weak_ptr<BaseAbilityMixin> *const)(v2 + 32));
  is_target = std::operator==<BaseAbilityMixin,BaseAbilityMixin>(
                (const std::shared_ptr<BaseAbilityMixin> *)(v2 + 32),
                mixin_ptr);
  std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(v2 + 32));
  v6 = std::__weak_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::expired(&info->base_ability_mixin_wtr) || is_target;
  is_to_remove = v6;
  if ( v6 )
  {
    v7 = !is_target;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__this);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      this = (PlayerBasicComp *)__asan_report_load8(&this->player_);
    ClimateResistInfo::printLog(info, this->player_, 1, v7);
    std::weak_ptr<BaseAbilityMixin>::lock((const std::weak_ptr<BaseAbilityMixin> *const)(v2 + 32));
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "operator()",
      2105);
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v20,
           (const char (*)[23])"delResistClimateMixin:");
    v10 = 0;
    if ( std::operator==<BaseAbilityMixin>((const std::shared_ptr<BaseAbilityMixin> *)(v2 + 32), 0LL) )
    {
      std::allocator<char>::allocator(&__a, 0LL);
      v10 = 1;
      std::string::basic_string<std::allocator<char>>(&val, "null", &__a);
    }
    else
    {
      v11 = std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      BaseAbilityMixin::getDesc[abi:cxx11](&val, v11);
    }
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
    p_this = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    {
      p_this = (common::milog::MiLogStream *)&__closure->__this;
      __asan_report_load8(&__closure->__this);
    }
    v14 = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&v14->player_ >> 3) + 0x7FFF8000) )
    {
      p_this = (common::milog::MiLogStream *)&v14->player_;
      v14 = (PlayerBasicComp *)__asan_report_load8(&v14->player_);
    }
    operator<<(p_this, v14->player_);
    std::string::~string(&val);
    if ( v10 )
      std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::~MiLogStream(&v20);
    std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(v2 + 32));
  }
  result = is_to_remove;
  if ( v22 == (char *)v2 )
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

// Line 2115: range 00000000171C0D64-00000000171C0E48
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerBasicComp::onClimateAreaChange(PlayerBasicComp *const this, float meter_inherit_ratio)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::optional<float> v5; // rdx OVERLAPPED
  std::optional<float> meter_inherit_ratio_opt; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 24 meter_inherit_ratio:2114";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::onClimateAreaChange;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(float *)(v2 + 32) = meter_inherit_ratio;
  std::optional<float>::optional<float &,true>(&meter_inherit_ratio_opt, (float *)(v2 + 32));
  v5 = meter_inherit_ratio_opt;
  PlayerBasicComp::updateClimateMeter(this, 0LL, v5);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2121: range 00000000171C0E4A-00000000171C216D
void __fastcall PlayerBasicComp::updateClimateMeter(
        PlayerBasicComp *const this,
        uint64_t now_ms,
        __int64 meter_inherit_ratio_opt,
        __m128i y_low)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerSceneComp *SceneComp; // rax
  char v8; // al
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  float x; // xmm0_4
  float z; // xmm0_4
  __int64 v13; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  data::JsonClimateType ClimateTypeByClimateAreaId; // ecx
  char v17; // dl
  __int64 v18; // rsi
  __int64 v19; // rdx
  PlayerWatcherComp *WatcherComp; // rcx
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  unsigned __int64 v25; // rax
  void (__fastcall *v26)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Vector3 *, _QWORD); // r15
  PlayerSceneComp *v27; // rax
  uint32_t PrevWeatherAreaId; // eax
  PlayerSceneComp *v29; // r14
  char v30; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  bool *p_is_gm_talk_open; // rax
  PlayerGmComp *GmComp; // rax
  char v34; // r15
  float v35; // xmm0_4
  char v36; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  unsigned __int64 ConfigClimate; // rax
  char v39; // r15
  PlayerEventComp *v40; // r14
  float CurClimateMeter; // [rsp+14h] [rbp-1CCh]
  bool is_has_change; // [rsp+36h] [rbp-1AAh]
  bool is_need_update; // [rsp+37h] [rbp-1A9h]
  data::JsonClimateType __args_1; // [rsp+38h] [rbp-1A8h] BYREF
  int __u; // [rsp+3Ch] [rbp-1A4h] BYREF
  data::JsonClimateType prev_area_climate_type; // [rsp+40h] [rbp-1A0h]
  uint32_t cur_climate_area_id; // [rsp+44h] [rbp-19Ch]
  const Vector3 *pos; // [rsp+48h] [rbp-198h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+50h] [rbp-190h] BYREF
  common::milog::MiLogStream v52; // [rsp+60h] [rbp-180h] BYREF
  proto::PropValue __x; // [rsp+80h] [rbp-160h] BYREF
  char v54[304]; // [rsp+B0h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 1 43 is_force_clear_different_climate_meter:2166 64 8 28 meter_inherit_ratio_opt:2120 96 16"
                        " 15 avatar_ptr:2128 128 16 14 scene_ptr:2140 160 16 14 event_ptr:2212 192 24 20 notify_prop_vec:2133";
  *(_QWORD *)(v4 + 16) = PlayerBasicComp::updateClimateMeter;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_QWORD *)(v4 + 64) = meter_inherit_ratio_opt;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 77) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_transfer_);
  }
  if ( !this->is_in_transfer_ )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::getEnterSceneState(SceneComp) > ENTER_SCENE_NOTIFY )
    v8 = 1;
  else
LABEL_11:
    v8 = 0;
  if ( !v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v4 + 96));
    if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 96)) )
    {
      std::vector<proto::PropValue>::vector((std::vector<proto::PropValue> *const)(v4 + 192));
      is_has_change = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_area_climate_type_);
      }
      prev_area_climate_type = this->cur_area_climate_type_;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 128));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/basic/player_basic_comp.cpp",
          "updateClimateMeter",
          2143);
        v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v52,
               (const char (*)[27])"scene_ptr is null, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v9, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v52);
      }
      else
      {
        v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        pos = Entity::getPosition((const Entity *const)v10);
        is_need_update = std::optional<float>::has_value((const std::optional<float> *const)(v4 + 64));
        if ( getPlaneDistance(&this->check_climate_position_, pos) > 0.5 )
        {
          if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(pos);
          }
          x = pos->x;
          if ( *(_BYTE *)(((unsigned __int64)&this->check_climate_position_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->check_climate_position_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(
              &this->check_climate_position_,
              ((unsigned __int8)pos & 7u) + 3,
              &this->check_climate_position_);
          }
          this->check_climate_position_.x = x;
          if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&pos->z);
          }
          z = pos->z;
          if ( *(_BYTE *)(((unsigned __int64)&this->check_climate_position_.z >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->check_climate_position_.z >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(
              &this->check_climate_position_.z,
              (((_BYTE)pos + 8) & 7u) + 3,
              &this->check_climate_position_.z);
          }
          this->check_climate_position_.z = z;
          is_need_update = 1;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->check_climate_position_.y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_climate_position_.y >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->check_climate_position_.y);
        }
        y_low = (__m128i)LODWORD(this->check_climate_position_.y);
        if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&pos->y);
        }
        if ( std::fabs(*(float *)y_low.m128i_i32 - pos->y) > 10.0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&pos->y);
          }
          y_low = (__m128i)LODWORD(pos->y);
          v13 = (*(_BYTE *)(((unsigned __int64)&this->check_climate_position_.y >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_climate_position_.y >> 3) + 0x7FFF8000));
          if ( (_BYTE)v13 )
            __asan_report_store4(&this->check_climate_position_.y, (((_BYTE)this - 28) & 7u) + 3, v13);
          LODWORD(this->check_climate_position_.y) = y_low.m128i_i32[0];
          is_need_update = 1;
        }
        if ( is_need_update )
        {
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cur_area_climate_type_);
          }
          cur_climate_area_id = Scene::getClimateAreaIdByPos(v14, pos, this->cur_area_climate_type_);
          *(_BYTE *)(v4 + 48) = 1;
          v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          v18 = cur_climate_area_id;
          ClimateTypeByClimateAreaId = Scene::getClimateTypeByClimateAreaId(v15, cur_climate_area_id, (bool *)(v4 + 48));
          v17 = *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000);
          LOBYTE(v18) = v17 != 0;
          v19 = (v17 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v17);
          if ( (_BYTE)v19 )
            __asan_report_store4(&this->cur_area_climate_type_, v18, v19);
          this->cur_area_climate_type_ = ClimateTypeByClimateAreaId;
          if ( prev_area_climate_type != this->cur_area_climate_type_ )
          {
            if ( !std::optional<float>::has_value((const std::optional<float> *const)(v4 + 64)) && *(_BYTE *)(v4 + 48) )
            {
              __u = 0;
              std::optional<float>::operator=<int>((std::optional<float> *const)(v4 + 64), &__u);
            }
            is_has_change = 1;
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->cur_area_climate_type_);
            }
            if ( this->cur_area_climate_type_ )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              WatcherComp = Player::getWatcherComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->cur_area_climate_type_);
              }
              PlayerWatcherComp::triggerEnterClimateAreaEvent(WatcherComp, this->cur_area_climate_type_);
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->cur_area_climate_type_);
            }
            buildIntProp(&__x, 0x2736u, (unsigned int)this->cur_area_climate_type_);
            std::vector<proto::PropValue>::push_back((std::vector<proto::PropValue> *const)(v4 + 192), &__x);
            proto::PropValue::~PropValue(&__x);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->cur_climate_area_id_);
          }
          if ( cur_climate_area_id != this->cur_climate_area_id_ )
          {
            this->cur_climate_area_id_ = cur_climate_area_id;
            buildIntProp(&__x, 0x2735u, this->cur_climate_area_id_);
            std::vector<proto::PropValue>::push_back((std::vector<proto::PropValue> *const)(v4 + 192), &__x);
            proto::PropValue::~PropValue(&__x);
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->cur_area_climate_type_);
            }
            buildIntProp(&__x, 0x2736u, (unsigned int)this->cur_area_climate_type_);
            std::vector<proto::PropValue>::push_back((std::vector<proto::PropValue> *const)(v4 + 192), &__x);
            proto::PropValue::~PropValue(&__x);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            EventComp = Player::getEventComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&this->cur_area_climate_type_);
            }
            __u = this->cur_area_climate_type_;
            common::tools::perf::make_shared<ChangeClimateAreaEvent,unsigned int,unsigned int &>(
              (unsigned int *)(v4 + 160),
              (unsigned int *)&__u,
              &this->cur_climate_area_id_,
              (unsigned int *)&__u);
            std::shared_ptr<BaseEvent>::shared_ptr<ChangeClimateAreaEvent,void>(
              &p_event_ptr,
              (std::shared_ptr<ChangeClimateAreaEvent> *)(v4 + 160));
            PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
            std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
            std::shared_ptr<ChangeClimateAreaEvent>::~shared_ptr((std::shared_ptr<ChangeClimateAreaEvent> *const)(v4 + 160));
            is_has_change = 1;
          }
          v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          v24 = v23;
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v23);
          v25 = (unsigned __int64)(v24->_vptr_DescribalBase + 47);
          if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
            v25 = __asan_report_load8(v24->_vptr_DescribalBase + 47);
          v26 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Vector3 *, _QWORD))v25;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v27 = Player::getSceneComp(this->player_);
          PrevWeatherAreaId = PlayerSceneComp::getPrevWeatherAreaId(v27);
          v26(v4 + 160, v24, &this->check_climate_position_, PrevWeatherAreaId);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v29 = Player::getSceneComp(this->player_);
          std::shared_ptr<WeatherArea>::shared_ptr(
            (std::shared_ptr<WeatherArea> *const)&p_event_ptr,
            (const std::shared_ptr<WeatherArea> *)(v4 + 160));
          PlayerSceneComp::updateCurrentWeatherArea(v29, (WeatherAreaPtr *)&p_event_ptr);
          std::shared_ptr<WeatherArea>::~shared_ptr((std::shared_ptr<WeatherArea> *const)&p_event_ptr);
          std::shared_ptr<WeatherArea>::~shared_ptr((std::shared_ptr<WeatherArea> *const)(v4 + 160));
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
      v30 = 0;
      if ( !now_ms )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_area_climate_type_);
        }
        if ( prev_area_climate_type == this->cur_area_climate_type_ )
          goto LABEL_100;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 93) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_game_time_locked_by_client_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_game_time_locked_by_client_);
      }
      if ( this->is_game_time_locked_by_client_ )
        goto LABEL_100;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_event_ptr);
      v30 = 1;
      v31 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_event_ptr);
      p_is_gm_talk_open = &v31->is_gm_talk_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_gm_talk_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_gm_talk_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_gm_talk_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_gm_talk_open);
      }
      if ( !v31->is_gm_talk_open )
        goto LABEL_99;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      GmComp = Player::getGmComp(this->player_);
      if ( !PlayerGmComp::getGmSetValue<bool>(GmComp, 2u) )
LABEL_99:
        v34 = 1;
      else
LABEL_100:
        v34 = 0;
      if ( v30 )
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_event_ptr);
      if ( v34 )
      {
        __u = 0;
        v35 = std::optional<float>::value_or<int>((const std::optional<float> *const)(v4 + 64), &__u);
        is_has_change = (is_has_change | PlayerBasicComp::updateClimateMeterByCurAreaClimate(
                                           this,
                                           (std::vector<proto::PropValue> *)(v4 + 192),
                                           v35)) != 0;
      }
      if ( !std::vector<proto::PropValue>::empty((const std::vector<proto::PropValue> *const)(v4 + 192)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::notifyPlayerPropList(this->player_, (const std::vector<proto::PropValue> *)(v4 + 192));
      }
      if ( is_has_change )
        PlayerBasicComp::refreshCurrentClimateServerBuffs(this);
      v36 = 0;
      if ( !is_has_change )
        goto LABEL_116;
      CurClimateMeter = PlayerBasicComp::getCurClimateMeter(this);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_event_ptr);
      v36 = 1;
      v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_event_ptr);
      ConfigClimate = (unsigned __int64)JsonConfigMgr::getConfigClimate(&v37->design_config.json_config_mgr);
      if ( *(_BYTE *)((ConfigClimate >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((ConfigClimate >> 3) + 0x7FFF8000) <= 3 )
        ConfigClimate = __asan_report_load4(ConfigClimate);
      y_low = (__m128i)*(unsigned int *)ConfigClimate;
      if ( CurClimateMeter >= *(float *)y_low.m128i_i32 )
        v39 = 1;
      else
LABEL_116:
        v39 = 0;
      if ( v36 )
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_event_ptr);
      if ( v39 )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/basic/player_basic_comp.cpp",
          "updateClimateMeter",
          2211);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v52, (const char (*)[13])"climate full");
        common::milog::MiLogStream::~MiLogStream(&v52);
        __u = PlayerBasicComp::getCurJsonClimateType(this);
        *(float *)y_low.m128i_i32 = PlayerBasicComp::getCurClimateMeter(this);
        __args_1 = _mm_cvtsi128_si32(y_low);
        common::tools::perf::make_shared<ClimateMeterFullEvent,float,data::JsonClimateType>(
          (float *)(v4 + 160),
          &__args_1,
          (float *)&__u,
          &__args_1);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v40 = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<ClimateMeterFullEvent,void>(
          &p_event_ptr,
          (const std::shared_ptr<ClimateMeterFullEvent> *)(v4 + 160));
        PlayerEventComp::notifyEvent(v40, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        std::shared_ptr<ClimateMeterFullEvent>::~shared_ptr((std::shared_ptr<ClimateMeterFullEvent> *const)(v4 + 160));
      }
      std::vector<proto::PropValue>::~vector((std::vector<proto::PropValue> *const)(v4 + 192));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
  }
  if ( v54 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2218: range 00000000171C216E-00000000171C324D
// local variable allocation has failed, the output may be wrong!
bool __cdecl PlayerBasicComp::updateClimateMeterByCurAreaClimate(
        PlayerBasicComp *const this,
        std::vector<proto::PropValue> *notify_prop_vec,
        float meter_inherit_ratio)
{
  bool v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  data::JsonClimateType cur_area_climate_type; // ecx
  __m128i v9; // xmm0
  signed int v10; // ecx
  __m128i v11; // xmm0
  std::__shared_ptr_access<data::ConfigClimateInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  float v13; // xmm0_4
  const float *v14; // rax
  float *v15; // rax
  float *v16; // rdx
  char v17; // cl
  const float *v18; // rsi
  float v19; // xmm0_4
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  int v33; // r15d
  __m128i cur_climate_meter_low; // xmm0
  float v35; // xmm0_4
  unsigned __int64 v36; // rax
  uint64_t rest_climate_damping_time_ms; // rax
  float v38; // xmm0_4
  const float *v39; // rax
  float *v40; // rax
  float *v41; // rdx
  char v42; // cl
  const float *v43; // rsi
  float v44; // xmm0_4
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rcx
  bool result; // al
  float __b; // [rsp+2Ch] [rbp-184h] BYREF
  float __a; // [rsp+30h] [rbp-180h] BYREF
  float total_ratio; // [rsp+34h] [rbp-17Ch]
  const data::ConfigClimate *config_climate; // [rsp+38h] [rbp-178h]
  std::shared_ptr<Config> v65; // [rsp+40h] [rbp-170h] BYREF
  proto::PropValue __args_0; // [rsp+50h] [rbp-160h] BYREF
  char v67[304]; // [rsp+80h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 16 total_ratio:2273 48 4 15 fade_speed:2274 64 4 24 delta_climate_meter:2275 80 4 22 old_"
                        "climate_meter:2276 96 16 28 config_climate_info_ptr:2237 128 32 17 debug_string:2272 192 32 17 d"
                        "ebug_string:2226";
  *(_QWORD *)(v4 + 16) = PlayerBasicComp::updateClimateMeterByCurAreaClimate;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862725] = -218959118;
  v6[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v65);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65);
  config_climate = JsonConfigMgr::getConfigClimate(&v7->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v65);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_area_climate_type_);
  }
  if ( this->cur_area_climate_type_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->rest_climate_damping_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->rest_climate_damping_time_ms_, (((_BYTE)this + 20) & 7u) + 3);
    this->rest_climate_damping_time_ms_ = -1LL;
    cur_area_climate_type = this->cur_area_climate_type_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_json_climate_type_);
    }
    if ( cur_area_climate_type == this->cur_json_climate_type_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v65);
      v10 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65)
          + 93080;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_json_climate_type_);
      }
      JsonConfigMgr::findClimateInfoConfig((const JsonConfigMgr *const)(v4 + 96), (data::JsonClimateType)v10);
      std::shared_ptr<Config>::~shared_ptr(&v65);
      if ( std::operator!=<data::ConfigClimateInfo>(0LL, (const std::shared_ptr<data::ConfigClimateInfo> *)(v4 + 96)) )
      {
        std::string::basic_string(v4 + 128);
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_json_climate_type_);
        }
        *(float *)v11.m128i_i32 = PlayerBasicComp::calcTotalClimateMeterResistRatio(
                                    this,
                                    this->cur_json_climate_type_,
                                    Climate,
                                    Rise,
                                    (std::string *)(v4 + 128));
        *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(v11);
        v12 = std::__shared_ptr_access<data::ConfigClimateInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigClimateInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v12->temperature_options >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->temperature_options >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<data::ConfigClimateInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->temperature_options);
        }
        *(float *)(v4 + 48) = *(float *)(v4 + 32) * v12->temperature_options.speed;
        v13 = 0.001 * (float)(1000.0 * *(float *)(v4 + 48));
        *(float *)(v4 + 64) = v13;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_climate_meter_);
        }
        *(float *)(v4 + 80) = this->cur_climate_meter_;
        __b = *(float *)(v4 + 64) + this->cur_climate_meter_;
        v14 = std::min<float>(&config_climate->common.length, &__b);
        __a = 0.0;
        v18 = v14;
        v15 = (float *)std::max<float>(&__a, v14);
        v16 = v15;
        v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
        LOBYTE(v18) = v17 != 0;
        if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
          __asan_report_load4(v15);
        v19 = *v16;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->cur_climate_meter_, v18, &this->cur_climate_meter_);
        }
        this->cur_climate_meter_ = v19;
        if ( this->cur_climate_meter_ == *(float *)(v4 + 80) )
        {
          v3 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 192),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/basic/player_basic_comp.cpp",
            "updateClimateMeterByCurAreaClimate",
            2248);
          v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                  (common::milog::MiLogStream *const)(v4 + 192),
                  (const char (*)[6])"Rise:");
          v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v20,
                  (const std::string *)(v4 + 128));
          v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v21,
                  (const char (*)[14])" total_ratio:");
          v23 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, (const float *)(v4 + 32));
          v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])" rise_speed:");
          v25 = common::milog::MiLogStream::operator<<<float,(float *)0>(v24, (const float *)(v4 + 48));
          v26 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v25,
                  (const char (*)[22])" delta_climate_meter:");
          v27 = common::milog::MiLogStream::operator<<<float,(float *)0>(v26, (const float *)(v4 + 64));
          v28 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v27,
                  (const char (*)[20])" old_climate_meter:");
          v29 = common::milog::MiLogStream::operator<<<float,(float *)0>(v28, (const float *)(v4 + 80));
          v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v29,
                  (const char (*)[21])" cur_climate_meter_:");
          v31 = common::milog::MiLogStream::operator<<<float,(float *)0>(v30, &this->cur_climate_meter_);
          v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v32, this->player_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->cur_climate_meter_);
          }
          buildHundredIntProp(&__args_0, 0x2733u, this->cur_climate_meter_);
          std::vector<proto::PropValue>::emplace_back<proto::PropValue>(notify_prop_vec, &__args_0, &__args_0);
          proto::PropValue::~PropValue(&__args_0);
          v3 = 1;
        }
        std::string::~string((void *)(v4 + 128));
        v33 = 0;
      }
      else
      {
        v33 = 1;
      }
      std::shared_ptr<data::ConfigClimateInfo>::~shared_ptr((std::shared_ptr<data::ConfigClimateInfo> *const)(v4 + 96));
      if ( v33 == 1 )
        v3 = 0;
    }
    else
    {
      std::string::basic_string(v4 + 192);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_area_climate_type_);
      }
      *(float *)v9.m128i_i32 = PlayerBasicComp::calcTotalClimateMeterResistRatio(
                                 this,
                                 this->cur_area_climate_type_,
                                 Climate,
                                 Rise,
                                 (std::string *)(v4 + 192));
      total_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
      if ( total_ratio == 0.0 )
      {
        v3 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_climate_meter_);
        }
        this->cur_climate_meter_ = this->cur_climate_meter_ * meter_inherit_ratio;
        buildHundredIntProp(&__args_0, 0x2733u, this->cur_climate_meter_);
        std::vector<proto::PropValue>::emplace_back<proto::PropValue>(notify_prop_vec, &__args_0, &__args_0);
        proto::PropValue::~PropValue(&__args_0);
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_area_climate_type_);
        }
        v3 = PlayerBasicComp::changeCurJsonClimateType(this, this->cur_area_climate_type_, notify_prop_vec);
      }
      std::string::~string((void *)(v4 + 192));
    }
    goto LABEL_86;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_climate_meter_);
  }
  cur_climate_meter_low = (__m128i)LODWORD(this->cur_climate_meter_);
  if ( *(float *)cur_climate_meter_low.m128i_i32 <= 0.0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_area_climate_type_);
    }
    v3 = PlayerBasicComp::changeCurJsonClimateType(this, this->cur_area_climate_type_, notify_prop_vec);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->rest_climate_damping_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->rest_climate_damping_time_ms_);
    if ( this->rest_climate_damping_time_ms_ == -1LL )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_climate->common.miscs >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_climate->common.miscs >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_climate->common.miscs);
      }
      v35 = (float)(config_climate->common.miscs.damping_time * 1000.0) + 0.5;
      if ( v35 >= 9.223372e18 )
        v36 = (unsigned int)(int)(float)(v35 - 9.223372e18) ^ 0x8000000000000000LL;
      else
        v36 = (unsigned int)(int)v35;
      this->rest_climate_damping_time_ms_ = v36;
LABEL_82:
      v3 = 0;
      goto LABEL_86;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->rest_climate_damping_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->rest_climate_damping_time_ms_);
    if ( this->rest_climate_damping_time_ms_ )
    {
      rest_climate_damping_time_ms = this->rest_climate_damping_time_ms_;
      if ( rest_climate_damping_time_ms < 0x3E8 )
        rest_climate_damping_time_ms = 1000LL;
      this->rest_climate_damping_time_ms_ = rest_climate_damping_time_ms - 1000;
      goto LABEL_82;
    }
    std::string::basic_string(v4 + 128);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_json_climate_type_);
    }
    *(float *)cur_climate_meter_low.m128i_i32 = PlayerBasicComp::calcTotalClimateMeterResistRatio(
                                                  this,
                                                  this->cur_json_climate_type_,
                                                  Climate,
                                                  Fade,
                                                  (std::string *)(v4 + 128));
    *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(cur_climate_meter_low);
    if ( *(_BYTE *)(((unsigned __int64)&config_climate->common.miscs.fade_speed >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_climate + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_climate->common.miscs.fade_speed >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&config_climate->common.miscs.fade_speed);
    }
    *(float *)(v4 + 48) = *(float *)(v4 + 32) * config_climate->common.miscs.fade_speed;
    v38 = 0.001 * (float)(1000.0 * *(float *)(v4 + 48));
    *(float *)(v4 + 64) = v38;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_climate_meter_);
    }
    *(float *)(v4 + 80) = this->cur_climate_meter_;
    __b = this->cur_climate_meter_ - *(float *)(v4 + 64);
    v39 = std::min<float>(&config_climate->common.length, &__b);
    __a = 0.0;
    v43 = v39;
    v40 = (float *)std::max<float>(&__a, v39);
    v41 = v40;
    v42 = *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000);
    LOBYTE(v43) = v42 != 0;
    if ( v42 != 0 && (char)(((unsigned __int8)v40 & 7) + 3) >= v42 )
      __asan_report_load4(v40);
    v44 = *v41;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_climate_meter_, v43, &this->cur_climate_meter_);
    }
    this->cur_climate_meter_ = v44;
    if ( this->cur_climate_meter_ == *(float *)(v4 + 80) )
    {
      v3 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/basic/player_basic_comp.cpp",
        "updateClimateMeterByCurAreaClimate",
        2280);
      v45 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)(v4 + 192),
              (const char (*)[6])"Fade:");
      v46 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v45, (const std::string *)(v4 + 128));
      v47 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v46, (const char (*)[14])" total_ratio:");
      v48 = common::milog::MiLogStream::operator<<<float,(float *)0>(v47, (const float *)(v4 + 32));
      v49 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v48, (const char (*)[13])" fade_speed:");
      v50 = common::milog::MiLogStream::operator<<<float,(float *)0>(v49, (const float *)(v4 + 48));
      v51 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v50,
              (const char (*)[22])" delta_climate_meter:");
      v52 = common::milog::MiLogStream::operator<<<float,(float *)0>(v51, (const float *)(v4 + 64));
      v53 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v52,
              (const char (*)[20])" old_climate_meter:");
      v54 = common::milog::MiLogStream::operator<<<float,(float *)0>(v53, (const float *)(v4 + 80));
      v55 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v54,
              (const char (*)[21])" cur_climate_meter_:");
      v56 = common::milog::MiLogStream::operator<<<float,(float *)0>(v55, &this->cur_climate_meter_);
      v57 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v56, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v57, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_climate_meter_);
      }
      buildHundredIntProp(&__args_0, 0x2733u, this->cur_climate_meter_);
      std::vector<proto::PropValue>::emplace_back<proto::PropValue>(notify_prop_vec, &__args_0, &__args_0);
      proto::PropValue::~PropValue(&__args_0);
      v3 = 1;
    }
    std::string::~string((void *)(v4 + 128));
  }
LABEL_86:
  result = v3;
  if ( v67 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2297: range 00000000171C324E-00000000171C392A
void __cdecl PlayerBasicComp::refreshCurrentClimateServerBuffs(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rax
  _DWORD *v5; // rdx
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v7; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  PlayerAvatarComp *v10; // rax
  PlayerAvatarComp *v11; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-1C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-1B8h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+20h] [rbp-1B0h]
  std::set<unsigned int> *__for_range_0; // [rsp+28h] [rbp-1A8h]
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-1A0h] BYREF
  char v27[384]; // [rsp+50h] [rbp-180h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 13 sbuff_id:2310 64 24 18 del_sbuff_vec:2301 128 24 18 add_sbuff_vec:2301 192 48 18 add_s"
                        "buff_set:2299 272 48 18 del_sbuff_set:2299";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::refreshCurrentClimateServerBuffs;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862727] = -219021312;
  v3[536862728] = 62194;
  v3[536862730] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 192));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 272));
  PlayerBasicComp::calcCurrentClimateServerBuffs(
    this,
    (std::set<unsigned int> *)(v1 + 192),
    (std::set<unsigned int> *)(v1 + 272));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
  __for_range = (std::set<unsigned int> *)(v1 + 272);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 272))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 272))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 48) = *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( PlayerAvatarComp::isHasTeamBuff(AvatarComp, *(_DWORD *)(v1 + 48)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v7 = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::delTeamBuff(v7, *(_DWORD *)(v1 + 48));
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v1 + 64),
        (const std::vector<unsigned int>::value_type *)(v1 + 48));
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = (std::set<unsigned int> *)(v1 + 192);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 192))._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v1 + 48) = *v9;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v10 = Player::getAvatarComp(this->player_);
    if ( !PlayerAvatarComp::isHasTeamBuff(v10, *(_DWORD *)(v1 + 48)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v11 = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::addTeamBuff(v11, *(_DWORD *)(v1 + 48), 0);
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v1 + 128),
        (const std::vector<unsigned int>::value_type *)(v1 + 48));
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 128))
    || !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "refreshCurrentClimateServerBuffs",
      2320);
    v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v26, (const char (*)[15])"add_sbuff_set:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int>(v13, (const std::set<unsigned int> *)(v1 + 192));
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])" del_sbuff_set:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int>(v15, (const std::set<unsigned int> *)(v1 + 272));
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])" add_sbuff_vec:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int>(v17, (const std::vector<unsigned int> *)(v1 + 128));
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])" del_sbuff_vec:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int>(v19, (const std::vector<unsigned int> *)(v1 + 64));
    v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v21, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 272));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 192));
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 2327: range 00000000171C392C-00000000171C4188
__int64 __fastcall PlayerBasicComp::checkAndSetLastRefreshTime(
        PlayerBasicComp *const this,
        uint32_t now,
        bool *is_cross_month)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  time_t TimeDay; // r14
  time_t v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r12
  time_t v26; // rdx
  int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rcx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  unsigned int *p_val; // rsi
  uint32_t v38; // ecx
  char v39; // al
  unsigned int val; // [rsp+28h] [rbp-A8h] BYREF
  uint32_t time_offset_sec; // [rsp+2Ch] [rbp-A4h]
  std::shared_ptr<Config> v43; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v44; // [rsp+40h] [rbp-90h] BYREF
  char v45[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 now:2326";
  *(_QWORD *)(v3 + 16) = PlayerBasicComp::checkAndSetLastRefreshTime;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = now;
  v6 = (unsigned __int8)is_cross_month & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)is_cross_month >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)is_cross_month >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(is_cross_month, v6, v7);
  *is_cross_month = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_daily_refresh_time_);
  }
  if ( this->last_daily_refresh_time_ == *(_DWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "checkAndSetLastRefreshTime",
      2331);
    v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v44,
           (const char (*)[25])"last_daily_refresh_time:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->last_daily_refresh_time_);
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" equal now:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_11:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    result = 0LL;
    goto LABEL_35;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_daily_refresh_time_);
  }
  if ( this->last_daily_refresh_time_ > *(_DWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/basic/player_basic_comp.cpp",
      "checkAndSetLastRefreshTime",
      2336);
    v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v44,
            (const char (*)[25])"last_daily_refresh_time:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->last_daily_refresh_time_);
    v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])" larger than now:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_11;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v43);
  v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
  time_offset_sec = ConstValueExcelConfigMgr::getTimeOffsetSec(&v18->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v43);
  TimeDay = common::tools::TimeUtils::getTimeDay(*(unsigned int *)(v3 + 32), time_offset_sec);
  v20 = time_offset_sec;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_daily_refresh_time_);
  }
  if ( TimeDay == common::tools::TimeUtils::getTimeDay(this->last_daily_refresh_time_, v20) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "checkAndSetLastRefreshTime",
      2342);
    v21 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v44,
            (const char (*)[25])"last_daily_refresh_time:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->last_daily_refresh_time_);
    v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v22, (const char (*)[21])off_2604AE80);
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 32));
    v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    result = 0LL;
  }
  else
  {
    v26 = time_offset_sec;
    if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_daily_refresh_time_);
    }
    LOBYTE(v27) = common::tools::TimeUtils::isSameMonth(*(unsigned int *)(v3 + 32), this->last_daily_refresh_time_, v26);
    v28 = v27 ^ 1u;
    v29 = (*(_BYTE *)(((unsigned __int64)is_cross_month >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)(((unsigned __int8)is_cross_month & 7) >= *(_BYTE *)(((unsigned __int64)is_cross_month >> 3) + 0x7FFF8000));
    if ( (_BYTE)v29 )
      __asan_report_store1(is_cross_month, v28, v29);
    *is_cross_month = v28;
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "checkAndSetLastRefreshTime",
      2347);
    v30 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v44,
            (const char (*)[38])"last_daily_refresh_time_ update. old:");
    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &this->last_daily_refresh_time_);
    v32 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v31, (const char (*)[7])" new: ");
    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 32));
    v34 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v33, (const char (*)[17])" is_cross_month:");
    if ( *(_BYTE *)(((unsigned __int64)is_cross_month >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_cross_month & 7) >= *(_BYTE *)(((unsigned __int64)is_cross_month >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_cross_month);
    }
    v35 = common::milog::MiLogStream::operator<<(v34, *is_cross_month);
    v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    p_val = &val;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v38 = *(_DWORD *)(v3 + 32);
    v39 = *(_BYTE *)(((unsigned __int64)&this->last_daily_refresh_time_ >> 3) + 0x7FFF8000);
    if ( v39 != 0 && v39 <= 3 )
    {
      LOBYTE(p_val) = v39 != 0;
      __asan_report_store4(&this->last_daily_refresh_time_, p_val, &this->last_daily_refresh_time_);
    }
    this->last_daily_refresh_time_ = v38;
    result = 1LL;
  }
LABEL_35:
  if ( v45 == (char *)v3 )
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

// Line 2354: range 00000000171C418A-00000000171C44AA
void __cdecl PlayerBasicComp::startNaturlaDailyRefreshTimer(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // ebx
  common::milog::MiLogStream *v10; // rcx
  uint32_t interval_ms; // [rsp+1Ch] [rbp-A4h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 8 now:2355 48 4 8 day:2356 64 4 22 next_refresh_time:2357";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::startNaturlaDailyRefreshTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116348;
  *(_DWORD *)(v1 + 32) = common::tools::TimeUtils::getNow();
  *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::getTimeDay(*(unsigned int *)(v1 + 32), 0LL);
  *(_DWORD *)(v1 + 64) = common::tools::TimeUtils::getDailyStartTime((unsigned int)(*(_DWORD *)(v1 + 48) + 1), 0LL);
  if ( *(_DWORD *)(v1 + 64) > *(_DWORD *)(v1 + 32) )
  {
    common::tools::MiTimer::cancel(&this->natural_daily_refresh_timer_);
    v9 = 1000 * (*(_DWORD *)(v1 + 64) - *(_DWORD *)(v1 + 32));
    interval_ms = v9 + common::tools::RandomUtils::rand<int>(1000, 5000);
    if ( PlayerUnixTimer::startMS(
           &this->natural_daily_refresh_timer_,
           interval_ms,
           0,
           "./src/player/basic/player_basic_comp.cpp",
           "startNaturlaDailyRefreshTimer",
           2365) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/basic/player_basic_comp.cpp",
        "startNaturlaDailyRefreshTimer",
        2367);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v12,
              (const char (*)[21])" start timer failed!");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "startNaturlaDailyRefreshTimer",
      2360);
    v4 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v12, (const char (*)[5])"now:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" day:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])" next_refresh_time:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 64));
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( v13 == (char *)v1 )
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
};

// Line 2372: range 00000000171C44AC-00000000171C4577
void __cdecl PlayerBasicComp::onNaturalDailyRefresh(PlayerBasicComp *const this, uint64_t a2)
{
  PlayerEventComp *EventComp; // rbx
  std::shared_ptr<NaturalDailyRefreshEvent> __r; // [rsp+10h] [rbp-30h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  common::tools::perf::make_shared<NaturalDailyRefreshEvent>();
  std::shared_ptr<BaseEvent>::shared_ptr<NaturalDailyRefreshEvent,void>(&p_event_ptr, &__r);
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  std::shared_ptr<NaturalDailyRefreshEvent>::~shared_ptr(&__r);
  PlayerBasicComp::startNaturlaDailyRefreshTimer(this);
};

// Line 2379: range 00000000171C4578-00000000171C507C
float __cdecl PlayerBasicComp::calcTotalClimateMeterResistRatio(
        PlayerBasicComp *const this,
        data::JsonClimateType cur_json_climate_type,
        data::ClimateSourceType source_type,
        data::ClimateTrendType trend_type,
        std::string *debug_string)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v10; // r14
  char v11; // al
  const char *v12; // rax
  __int64 v13; // r15
  char v14; // r14
  std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  float *v18; // rax
  float *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  float result; // xmm0_4
  float v24; // [rsp+18h] [rbp-318h]
  std::allocator<char> __a; // [rsp+36h] [rbp-2FAh] BYREF
  bool is_first; // [rsp+37h] [rbp-2F9h]
  float v29; // [rsp+38h] [rbp-2F8h] BYREF
  unsigned int value; // [rsp+3Ch] [rbp-2F4h] BYREF
  float total_resist_ratio; // [rsp+40h] [rbp-2F0h]
  float total_ratio; // [rsp+44h] [rbp-2ECh]
  std::_List_iterator<ClimateResistInfo>::_Self __y; // [rsp+48h] [rbp-2E8h] BYREF
  uint64_t cur_avatar_guid; // [rsp+50h] [rbp-2E0h]
  const ClimateResistInfo *info; // [rsp+58h] [rbp-2D8h]
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-2D0h] BYREF
  std::string val; // [rsp+80h] [rbp-2B0h] BYREF
  char v38[656]; // [rsp+A0h] [rbp-290h] BYREF

  v5 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(608LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 8 9 iter:2396 80 16 15 avatar_ptr:2385 112 16 14 mixin_ptr:2423 144 392 7 ss:2391";
  *(_QWORD *)(v5 + 16) = PlayerBasicComp::calcTotalClimateMeterResistRatio;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862736] = -218103808;
  v7[536862737] = -202116109;
  v7[536862738] = -202116109;
  if ( std::list<ClimateResistInfo>::empty(&this->climate_resist_list_) )
  {
    v24 = 1.0;
  }
  else
  {
    cur_avatar_guid = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v5 + 80));
    if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v5 + 80)) )
    {
      v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
      cur_avatar_guid = Avatar::getGuid(v8);
    }
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v5 + 144);
    std::operator<<<std::char_traits<char>>(v5 + 160, "{");
    is_first = 1;
    total_resist_ratio = 0.0;
    *(std::list<ClimateResistInfo>::iterator *)(v5 + 48) = std::list<ClimateResistInfo>::begin(&this->climate_resist_list_);
    while ( 1 )
    {
      __y._M_node = std::list<ClimateResistInfo>::end(&this->climate_resist_list_)._M_node;
      if ( !std::operator!=((const std::_List_iterator<ClimateResistInfo>::_Self *)(v5 + 48), &__y) )
        break;
      info = std::_List_iterator<ClimateResistInfo>::operator*((const std::_List_iterator<ClimateResistInfo> *const)(v5 + 48));
      if ( std::__weak_ptr<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2>::expired(&info->base_ability_mixin_wtr) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ClimateResistInfo::printLog(info, this->player_, 1, 1);
        std::_List_const_iterator<ClimateResistInfo>::_List_const_iterator(
          (std::_List_const_iterator<ClimateResistInfo> *const)&__y,
          (const std::_List_const_iterator<ClimateResistInfo>::iterator *)(v5 + 48));
        *(std::list<ClimateResistInfo>::iterator *)(v5 + 48) = std::list<ClimateResistInfo>::erase(
                                                                 &this->climate_resist_list_,
                                                                 (std::list<ClimateResistInfo>::const_iterator)__y._M_node);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        AvatarComp = Player::getAvatarComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&info->avatar_guid >> 3) + 0x7FFF8000) )
          __asan_report_load8(&info->avatar_guid);
        if ( (unsigned __int8)PlayerAvatarComp::isMyAvatarInSceneTeam(AvatarComp, info->avatar_guid) != 1 )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/basic/player_basic_comp.cpp",
            "calcTotalClimateMeterResistRatio",
            2407);
          v10 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                  &v36,
                  (const char (*)[65])"resist_climate_mixin's source avatar is not in team! mixin_info:");
          ClimateResistInfo::getDesc[abi:cxx11](&val, info);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v36);
          std::_List_iterator<ClimateResistInfo>::operator++((std::_List_iterator<ClimateResistInfo> *const)(v5 + 48));
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&info->avatar_stage_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->avatar_stage_type >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&info->avatar_stage_type);
          }
          if ( info->avatar_stage_type != 1 )
            goto LABEL_28;
          if ( *(_BYTE *)(((unsigned __int64)&info->avatar_guid >> 3) + 0x7FFF8000) )
            __asan_report_load8(&info->avatar_guid);
          if ( cur_avatar_guid == info->avatar_guid )
          {
LABEL_28:
            if ( *(_BYTE *)(((unsigned __int64)&info->avatar_stage_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)info + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->avatar_stage_type >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(&info->avatar_stage_type);
            }
            if ( info->avatar_stage_type != 2 )
              goto LABEL_44;
            if ( *(_BYTE *)(((unsigned __int64)&info->avatar_guid >> 3) + 0x7FFF8000) )
              __asan_report_load8(&info->avatar_guid);
            if ( cur_avatar_guid != info->avatar_guid )
            {
              if ( !std::vector<unsigned int>::empty(&info->climate_type_vec) )
              {
                value = cur_json_climate_type;
                if ( !common::tools::MiscUtils::isContains<unsigned int>(&info->climate_type_vec, &value) )
                  goto LABEL_46;
              }
LABEL_44:
              if ( *(_BYTE *)(((unsigned __int64)&info->source_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&info->source_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&info->source_type);
              }
              if ( info->source_type != 3 && info->source_type != source_type )
                goto LABEL_46;
              if ( *(_BYTE *)(((unsigned __int64)&info->trend_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)info + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&info->trend_type >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&info->trend_type);
              }
              if ( info->trend_type == 3 || info->trend_type == trend_type )
                v11 = 1;
              else
LABEL_46:
                v11 = 0;
              if ( v11 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&info->resist_ratio >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&info->resist_ratio >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&info->resist_ratio);
                }
                total_resist_ratio = info->resist_ratio + total_resist_ratio;
                std::weak_ptr<BaseAbilityMixin>::lock((const std::weak_ptr<BaseAbilityMixin> *const)(v5 + 112));
                if ( is_first )
                {
                  is_first = 0;
                  v12 = byte_25FB4240;
                }
                else
                {
                  v12 = ";";
                }
                v13 = std::operator<<<std::char_traits<char>>(v5 + 160, v12);
                v14 = 0;
                if ( std::operator==<BaseAbilityMixin>((const std::shared_ptr<BaseAbilityMixin> *)(v5 + 112), 0LL) )
                {
                  std::allocator<char>::allocator(&__a, 0LL);
                  v14 = 1;
                  std::string::basic_string<std::allocator<char>>(&val, "null", &__a);
                }
                else
                {
                  v15 = std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
                  BaseAbilityMixin::getDesc[abi:cxx11](&val, v15);
                }
                v16 = std::operator<<<char>(v13, &val);
                v17 = std::operator<<<std::char_traits<char>>(v16, " ratio:");
                if ( *(_BYTE *)(((unsigned __int64)&info->resist_ratio >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&info->resist_ratio >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&info->resist_ratio);
                }
                std::ostream::operator<<(v17, *(double *)_mm_cvtsi32_si128(LODWORD(info->resist_ratio)).m128i_i64);
                std::string::~string(&val);
                if ( v14 )
                  std::allocator<char>::~allocator(&__a);
                std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(v5 + 112));
              }
            }
          }
          std::_List_iterator<ClimateResistInfo>::operator++((std::_List_iterator<ClimateResistInfo> *const)(v5 + 48));
        }
      }
    }
    *(float *)&value = total_resist_ratio + 1.0;
    v29 = 0.0;
    v18 = (float *)std::max<float>(&v29, (const float *)&value);
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    total_ratio = *v19;
    v20 = std::operator<<<std::char_traits<char>>(v5 + 160, " total:");
    v21 = std::ostream::operator<<(v20, *(double *)_mm_cvtsi32_si128(LODWORD(total_ratio)).m128i_i64);
    std::operator<<<std::char_traits<char>>(v21, "}");
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&val, v5 + 144);
    std::string::operator=(debug_string, &val);
    std::string::~string(&val);
    v24 = total_ratio;
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v5 + 144);
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 80));
  }
  result = v24;
  if ( v38 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 2440: range 00000000171C507E-00000000171C5718
std::string *__cdecl ClimateResistInfo::getDesc[abi:cxx11](std::string *retstr, const ClimateResistInfo *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  bool is_first; // [rsp+13h] [rbp-27Dh]
  uint32_t climate_type; // [rsp+14h] [rbp-27Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-278h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-270h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-268h]
  std::string v19; // [rsp+30h] [rbp-260h] BYREF
  char v20[576]; // [rsp+50h] [rbp-240h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 14 mixin_ptr:2443 80 392 7 ss:2441";
  *(_QWORD *)(v2 + 16) = ClimateResistInfo::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 80);
  std::operator<<<std::char_traits<char>>(v2 + 96, "{");
  std::weak_ptr<BaseAbilityMixin>::lock((const std::weak_ptr<BaseAbilityMixin> *const)(v2 + 48));
  if ( std::operator!=<BaseAbilityMixin>(0LL, (const std::shared_ptr<BaseAbilityMixin> *)(v2 + 48)) )
  {
    v5 = std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    BaseAbilityMixin::getDesc[abi:cxx11](&v19, v5);
    std::operator<<<char>(v2 + 96, &v19);
    std::string::~string(&v19);
  }
  else
  {
    std::operator<<<std::char_traits<char>>(v2 + 96, "[null]");
  }
  std::operator<<<std::char_traits<char>>(v2 + 96, " climate_type_vec:{");
  is_first = 1;
  __for_range = &this->climate_type_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->climate_type_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->climate_type_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    climate_type = *v7;
    if ( !is_first )
      std::operator<<<std::char_traits<char>>(v2 + 96, ",");
    is_first = 0;
    std::ostream::operator<<(v2 + 96, climate_type);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::operator<<<std::char_traits<char>>(v2 + 96, "}");
  v8 = std::operator<<<std::char_traits<char>>(v2 + 96, " source_type:");
  if ( *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->source_type);
  }
  std::ostream::operator<<(v8, this->source_type);
  v9 = std::operator<<<std::char_traits<char>>(v2 + 96, " trend_type:");
  if ( *(_BYTE *)(((unsigned __int64)&this->trend_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trend_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->trend_type);
  }
  std::ostream::operator<<(v9, this->trend_type);
  v10 = std::operator<<<std::char_traits<char>>(v2 + 96, " resist_ratio:");
  if ( *(_BYTE *)(((unsigned __int64)&this->resist_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->resist_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->resist_ratio);
  }
  std::ostream::operator<<(v10, *(double *)_mm_cvtsi32_si128(LODWORD(this->resist_ratio)).m128i_i64);
  v11 = std::operator<<<std::char_traits<char>>(v2 + 96, " avatar_stage_type:");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_stage_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_stage_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avatar_stage_type);
  }
  std::ostream::operator<<(v11, this->avatar_stage_type);
  v12 = std::operator<<<std::char_traits<char>>(v2 + 96, " avatar_guid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_guid);
  std::ostream::operator<<(v12, this->avatar_guid);
  std::operator<<<std::char_traits<char>>(v2 + 96, "}");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 80);
  std::shared_ptr<BaseAbilityMixin>::~shared_ptr((std::shared_ptr<BaseAbilityMixin> *const)(v2 + 48));
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 80);
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return retstr;
};

// Line 2471: range 00000000171C571A-00000000171C5ABD
void __cdecl ClimateResistInfo::printLog(
        const ClimateResistInfo *const this,
        Player *player,
        bool is_del,
        bool is_expire)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::string v14; // [rsp+0h] [rbp-E0h]
  bool is_expirea; // [rsp+8h] [rbp-D8h]
  bool is_dela; // [rsp+Ch] [rbp-D4h]
  Player *playera; // [rsp+10h] [rbp-D0h]
  const ClimateResistInfo *thisa; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-B0h] BYREF
  std::string v21; // [rsp+40h] [rbp-A0h] BYREF
  char v22[128]; // [rsp+60h] [rbp-80h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v14._anon_0._M_allocated_capacity = (std::string::size_type)player;
  BYTE4(v14._M_string_length) = is_del;
  LOBYTE(v14._M_string_length) = is_expire;
  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 11 holder:2472 64 16 12 log_ptr:2473";
  *(_QWORD *)(v4 + 16) = ClimateResistInfo::printLog;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x5F7u, v14);
  std::string::~string(&v21);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyResistClimateMixinChange>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyResistClimateMixinChange::set_op(v8, is_dela);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyResistClimateMixinChange::set_is_expire(v9, is_expirea);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyResistClimateMixinChange::set_ability(v10, &thisa->ability_name);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyResistClimateMixinChange::set_modifier(v11, &thisa->modifier_name);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->avatar_id);
  }
  proto_log::PlayerLogBodyResistClimateMixinChange::set_avatar_id(v12, thisa->avatar_id);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyResistClimateMixinChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->resist_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->resist_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->resist_ratio);
  }
  proto_log::PlayerLogBodyResistClimateMixinChange::set_ratio(v13, (int)(float)(10000.0 * thisa->resist_ratio));
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyResistClimateMixinChange,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyResistClimateMixinChange> *)(v4 + 64));
  Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyResistClimateMixinChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyResistClimateMixinChange> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2485: range 00000000171C5ABE-00000000171C614D
void __cdecl PlayerBasicComp::calcCurrentClimateServerBuffs(
        const PlayerBasicComp *const this,
        std::set<unsigned int> *add_sbuff_set,
        std::set<unsigned int> *del_sbuff_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const unsigned int *M_current; // r14
  const unsigned int *v8; // rcx
  const unsigned int *v9; // r14
  const unsigned int *v10; // rcx
  const std::set<unsigned int>::value_type *v11; // rdx
  float threshold_ratio; // xmm1_4
  const std::set<unsigned int>::value_type *v13; // rdx
  const unsigned int *v14; // r14
  const unsigned int *v15; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v16; // rax
  _DWORD *v17; // rdx
  float threshold_amount; // [rsp+2Ch] [rbp-134h]
  std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::const_iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  const data::ConfigClimateCommon *config_climate_common; // [rsp+40h] [rbp-120h]
  const std::unordered_map<data::JsonClimateType,std::vector<unsigned int>> *__for_range; // [rsp+48h] [rbp-118h]
  const std::unordered_map<data::JsonClimateType,std::vector<unsigned int>> *__for_range_0; // [rsp+50h] [rbp-110h]
  const std::vector<unsigned int> *config_sbuff_vec; // [rsp+58h] [rbp-108h]
  const std::vector<unsigned int> *config_sbuff_vec_0; // [rsp+60h] [rbp-100h]
  std::set<unsigned int> *__for_range_1; // [rsp+68h] [rbp-F8h]
  const std::pair<const data::JsonClimateType,std::vector<unsigned int> > *v28; // [rsp+70h] [rbp-F0h]
  std::tuple_element<0,const std::pair<const data::JsonClimateType,std::vector<unsigned int> > >::type *__0; // [rsp+78h] [rbp-E8h]
  std::tuple_element<1,const std::pair<const data::JsonClimateType,std::vector<unsigned int> > >::type *sbuff_vec_0; // [rsp+80h] [rbp-E0h]
  const std::pair<const data::JsonClimateType,std::vector<unsigned int> > *v31; // [rsp+88h] [rbp-D8h]
  std::tuple_element<0,const std::pair<const data::JsonClimateType,std::vector<unsigned int> > >::type *_; // [rsp+90h] [rbp-D0h]
  std::tuple_element<1,const std::pair<const data::JsonClimateType,std::vector<unsigned int> > >::type *sbuff_vec; // [rsp+98h] [rbp-C8h]
  std::shared_ptr<Config> v34; // [rsp+A0h] [rbp-C0h] BYREF
  char v35[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 sbuff_id:2521 64 8 9 iter:2495 96 8 9 jter:2514";
  *(_QWORD *)(v3 + 16) = PlayerBasicComp::calcCurrentClimateServerBuffs;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  config_climate_common = (const data::ConfigClimateCommon *)JsonConfigMgr::getConfigClimate(&v6->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v34);
  __for_range = &config_climate_common->debuffs;
  __for_begin._M_cur = std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::begin(&config_climate_common->debuffs)._M_cur;
  __for_end._M_cur = std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::end(&config_climate_common->debuffs)._M_cur;
  while ( std::__detail::operator!=<std::pair<data::JsonClimateType const,std::vector<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v31 = std::__detail::_Node_const_iterator<std::pair<data::JsonClimateType const,std::vector<unsigned int>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,data::JsonClimateType const,std::vector<unsigned int>>(v31);
    sbuff_vec = (std::tuple_element<1,const std::pair<const data::JsonClimateType,std::vector<unsigned int> > >::type *)std::get<1ul,data::JsonClimateType const,std::vector<unsigned int>>(v31);
    M_current = std::vector<unsigned int>::end(sbuff_vec)._M_current;
    v8 = std::vector<unsigned int>::begin(sbuff_vec)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      del_sbuff_set,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v8,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    std::__detail::_Node_const_iterator<std::pair<data::JsonClimateType const,std::vector<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &config_climate_common->area_buffs;
  __for_begin._M_cur = std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::begin(&config_climate_common->area_buffs)._M_cur;
  __for_end._M_cur = std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<data::JsonClimateType const,std::vector<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v28 = std::__detail::_Node_const_iterator<std::pair<data::JsonClimateType const,std::vector<unsigned int>>,false,false>::operator*(&__for_begin);
    __0 = std::get<0ul,data::JsonClimateType const,std::vector<unsigned int>>(v28);
    sbuff_vec_0 = (std::tuple_element<1,const std::pair<const data::JsonClimateType,std::vector<unsigned int> > >::type *)std::get<1ul,data::JsonClimateType const,std::vector<unsigned int>>(v28);
    v9 = std::vector<unsigned int>::end(sbuff_vec_0)._M_current;
    v10 = std::vector<unsigned int>::begin(sbuff_vec_0)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      del_sbuff_set,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v10,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v9);
    std::__detail::_Node_const_iterator<std::pair<data::JsonClimateType const,std::vector<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  *(std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::find(&config_climate_common->debuffs, &this->cur_json_climate_type_);
  __for_end._M_cur = std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::end(&config_climate_common->debuffs)._M_cur;
  if ( std::__detail::operator!=<std::pair<data::JsonClimateType const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::JsonClimateType,std::vector<unsigned int> >,false> *)(v3 + 64),
         &__for_end) )
  {
    config_sbuff_vec = &std::__detail::_Node_const_iterator<std::pair<data::JsonClimateType const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::JsonClimateType,std::vector<unsigned int> >,false,false> *const)(v3 + 64))->second;
    if ( std::vector<unsigned int>::size(config_sbuff_vec) )
    {
      v11 = std::vector<unsigned int>::operator[](config_sbuff_vec, 0LL);
      std::set<unsigned int>::insert(add_sbuff_set, v11);
      if ( std::vector<unsigned int>::size(config_sbuff_vec) > 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_climate_common->threshold_ratio >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_climate_common + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_climate_common->threshold_ratio >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&config_climate_common->threshold_ratio);
        }
        threshold_ratio = config_climate_common->threshold_ratio;
        if ( *(_BYTE *)(((unsigned __int64)config_climate_common >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)config_climate_common >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(config_climate_common);
        }
        threshold_amount = config_climate_common->length * threshold_ratio;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_climate_meter_);
        }
        if ( this->cur_climate_meter_ >= threshold_amount )
        {
          v13 = std::vector<unsigned int>::operator[](config_sbuff_vec, 1uLL);
          std::set<unsigned int>::insert(add_sbuff_set, v13);
        }
      }
    }
  }
  *(std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::find(&config_climate_common->area_buffs, &this->cur_area_climate_type_);
  __for_end._M_cur = std::unordered_map<data::JsonClimateType,std::vector<unsigned int>>::end(&config_climate_common->area_buffs)._M_cur;
  if ( std::__detail::operator!=<std::pair<data::JsonClimateType const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::JsonClimateType,std::vector<unsigned int> >,false> *)(v3 + 96),
         &__for_end) )
  {
    config_sbuff_vec_0 = &std::__detail::_Node_const_iterator<std::pair<data::JsonClimateType const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::JsonClimateType,std::vector<unsigned int> >,false,false> *const)(v3 + 96))->second;
    v14 = std::vector<unsigned int>::end(config_sbuff_vec_0)._M_current;
    v15 = std::vector<unsigned int>::begin(config_sbuff_vec_0)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      add_sbuff_set,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v15,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v14);
  }
  __for_range_1 = add_sbuff_set;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::JsonClimateType,std::vector<unsigned int> >,false>::__node_type *)std::set<unsigned int>::begin(add_sbuff_set)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::JsonClimateType,std::vector<unsigned int> >,false>::__node_type *)std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v16 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v16);
    }
    *(_DWORD *)(v3 + 48) = *v17;
    std::set<unsigned int>::erase(del_sbuff_set, (const std::set<unsigned int>::key_type *)(v3 + 48));
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  if ( v35 == (char *)v3 )
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
};

// Line 2529: range 00000000171C614E-00000000171C66C8
std::string *__cdecl PlayerBasicComp::getClimateInfoByGm[abi:cxx11](
        std::string *retstr,
        const PlayerBasicComp *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r14
  const char *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  const char *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  std::list<ClimateResistInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-270h] BYREF
  std::list<ClimateResistInfo>::const_iterator __for_end; // [rsp+18h] [rbp-268h] BYREF
  const std::list<ClimateResistInfo> *__for_range; // [rsp+20h] [rbp-260h]
  const ClimateResistInfo *info; // [rsp+28h] [rbp-258h]
  std::string v21; // [rsp+30h] [rbp-250h] BYREF
  char v22[560]; // [rsp+50h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 7 ss:2530";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::getClimateInfoByGm[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 64, "climate_area_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_climate_area_id_);
  }
  v6 = std::ostream::operator<<(v5, this->cur_climate_area_id_);
  v7 = std::operator<<<std::char_traits<char>>(v6, " area_climate_type:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_area_climate_type_);
  }
  v8 = data::enumValToStr(this->cur_area_climate_type_);
  v9 = std::operator<<<std::char_traits<char>>(v7, v8);
  std::operator<<<std::char_traits<char>>(v9, "\n");
  v10 = std::operator<<<std::char_traits<char>>(v2 + 64, "climate_type:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_json_climate_type_);
  }
  v11 = data::enumValToStr(this->cur_json_climate_type_);
  v12 = std::operator<<<std::char_traits<char>>(v10, v11);
  v13 = std::operator<<<std::char_traits<char>>(v12, " climate_meter:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_meter_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_climate_meter_);
  }
  v14 = std::ostream::operator<<(v13, *(double *)_mm_cvtsi32_si128(LODWORD(this->cur_climate_meter_)).m128i_i64);
  std::operator<<<std::char_traits<char>>(v14, "\n");
  std::operator<<<std::char_traits<char>>(v2 + 64, "ResistClimateMixin:[\n");
  __for_range = &this->climate_resist_list_;
  __for_begin._M_node = std::list<ClimateResistInfo>::begin(&this->climate_resist_list_)._M_node;
  __for_end._M_node = std::list<ClimateResistInfo>::end(&this->climate_resist_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    info = std::_List_const_iterator<ClimateResistInfo>::operator*(&__for_begin);
    ClimateResistInfo::getDesc[abi:cxx11](&v21, info);
    v15 = std::operator<<<char>(v2 + 64, &v21);
    std::operator<<<std::char_traits<char>>(v15, "\n");
    std::string::~string(&v21);
    std::_List_const_iterator<ClimateResistInfo>::operator++(&__for_begin);
  }
  std::operator<<<std::char_traits<char>>(v2 + 64, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 48);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/basic/player_basic_comp.cpp",
    "getClimateInfoByGm",
    2540);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>((common::milog::MiLogStream *const)&v21, retstr);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 2546: range 00000000171C66CA-00000000171C75EF
void __cdecl PlayerBasicComp::checkTransferPlayerOnTransClimateFull(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4; // al
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v6; // rcx
  Scene *v7; // r14
  uint32_t Uid; // eax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  __m128i v20; // xmm0
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v21; // rax
  _DWORD *v22; // rdx
  unsigned int v23; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  unsigned int v31; // eax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rcx
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  proto::EnterReason TransClimateEnterSceneReason; // eax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  PlayerSceneComp *SceneComp; // r14
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  Scene *v45; // rax
  uint32_t first_trans_point_id; // [rsp+18h] [rbp-228h]
  float target_distance; // [rsp+1Ch] [rbp-224h]
  uint32_t point_type; // [rsp+20h] [rbp-220h]
  float dist; // [rsp+24h] [rbp-21Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-218h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-210h] BYREF
  const data::ConfigClimateArea *config_climate_area_ptr; // [rsp+38h] [rbp-208h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-200h]
  Vector3 pos; // [rsp+48h] [rbp-1F8h] BYREF
  Vector3 pos2; // [rsp+54h] [rbp-1ECh] BYREF
  std::shared_ptr<Config> v56; // [rsp+60h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v57; // [rsp+70h] [rbp-1D0h] BYREF
  TransferReason p_reason; // [rsp+90h] [rbp-1B0h] BYREF
  char v59[368]; // [rsp+D0h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 48 4 13 scene_id:2568 64 4 20 target_point_id:2577 80 4 19 trans_point_id:2579 96 12 8 pos:256"
                        "2 128 12 8 rot:2562 160 16 14 scene_ptr:2556 192 16 19 tran_point_ptr:2606 224 56 11 reason:2613";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::checkTransferPlayerOnTransClimateFull;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -219020288;
  v3[536862724] = -219020288;
  v3[536862725] = -219021312;
  v3[536862726] = -219021312;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_json_climate_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_json_climate_type_);
  }
  if ( !JsonConfigMgr::isTransClimate(this->cur_json_climate_type_) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_area_climate_type_);
  }
  if ( !JsonConfigMgr::isTransClimate(this->cur_area_climate_type_) )
LABEL_10:
    v4 = 1;
  else
    v4 = 0;
  if ( !v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::resetCurClimateMeter(BasicComp, 1);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 77) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_transfer_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_in_transfer_);
    }
    if ( !this->is_in_transfer_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 160));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v57,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/basic/player_basic_comp.cpp",
          "checkTransferPlayerOnTransClimateFull",
          2559);
        v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v57,
               (const char (*)[26])"getCurScene fail, player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v6, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v57);
      }
      else
      {
        Vector3::Vector3((Vector3 *const)(v1 + 96), 0.0, 0.0, 0.0);
        Vector3::Vector3((Vector3 *const)(v1 + 128), 0.0, 0.0, 0.0);
        v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        if ( Scene::getPlayerLocation(v7, Uid, (Vector3 *)(v1 + 96), (Vector3 *)(v1 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v57,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/basic/player_basic_comp.cpp",
            "checkTransferPlayerOnTransClimateFull",
            2565);
          v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                 &v57,
                 (const char (*)[32])"getPlayerLocation fail, player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v10 = operator<<(v9, this->player_);
          v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" scene:");
          v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v11, v12);
          common::milog::MiLogStream::~MiLogStream(&v57);
        }
        else
        {
          v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          *(_DWORD *)(v1 + 48) = Scene::getSceneId(v13);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v56);
          p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.json_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->cur_climate_area_id_);
          }
          config_climate_area_ptr = JsonConfigMgr::findClimateAreaConfig(
                                      p_json_config_mgr,
                                      *(_DWORD *)(v1 + 48),
                                      this->cur_climate_area_id_);
          std::shared_ptr<Config>::~shared_ptr(&v56);
          if ( config_climate_area_ptr )
          {
            first_trans_point_id = 0;
            *(_DWORD *)(v1 + 64) = 0;
            v20 = 0LL;
            target_distance = 0.0;
            __for_range = &config_climate_area_ptr->trans_points;
            __for_begin._M_current = std::vector<unsigned int>::begin(&config_climate_area_ptr->trans_points)._M_current;
            __for_end._M_current = std::vector<unsigned int>::end(&config_climate_area_ptr->trans_points)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
            {
              v21 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
              v22 = v21;
              if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v21);
              }
              *(_DWORD *)(v1 + 80) = *v22;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v56);
              v23 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
              JsonConfigMgr::findScenePoint((const JsonConfigMgr *const)(v1 + 192), v23 + 93080, *(_DWORD *)(v1 + 48));
              std::shared_ptr<Config>::~shared_ptr(&v56);
              if ( std::operator==<data::ConfigScenePoint>(
                     0LL,
                     (const std::shared_ptr<data::ConfigScenePoint> *)(v1 + 192)) )
              {
                common::milog::MiLogStream::create(
                  &v57,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/basic/player_basic_comp.cpp",
                  "checkTransferPlayerOnTransClimateFull",
                  2584);
                v24 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v57,
                        (const char (*)[31])"findScenePoint fail, scene_id:");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v24,
                        (const unsigned int *)(v1 + 48));
                v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v25,
                        (const char (*)[17])" trans_point_id:");
                v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v26,
                        (const unsigned int *)(v1 + 80));
                v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" player:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                operator<<(v28, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v57);
              }
              else
              {
                if ( !first_trans_point_id )
                  first_trans_point_id = *(_DWORD *)(v1 + 80);
                v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
                if ( Scene::isPointUnlocked(v29, *(_DWORD *)(v1 + 80)) )
                {
                  v30 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
                  Vector3::Vector3(&pos2, &v30->pos);
                  *(float *)v20.m128i_i32 = getPlaneDistance((const Vector3 *)(v1 + 96), &pos2);
                  dist = COERCE_FLOAT(_mm_cvtsi128_si32(v20));
                  if ( !*(_DWORD *)(v1 + 64) || (v20 = (__m128i)LODWORD(target_distance), target_distance > dist) )
                  {
                    *(_DWORD *)(v1 + 64) = *(_DWORD *)(v1 + 80);
                    v20 = (__m128i)LODWORD(dist);
                    target_distance = dist;
                  }
                }
              }
              std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v1 + 192));
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
            }
            if ( !*(_DWORD *)(v1 + 64) )
              *(_DWORD *)(v1 + 64) = first_trans_point_id;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v56);
            v31 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
            JsonConfigMgr::findScenePoint((const JsonConfigMgr *const)(v1 + 192), v31 + 93080, *(_DWORD *)(v1 + 48));
            std::shared_ptr<Config>::~shared_ptr(&v56);
            if ( std::operator==<data::ConfigScenePoint>(
                   0LL,
                   (const std::shared_ptr<data::ConfigScenePoint> *)(v1 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v57,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/basic/player_basic_comp.cpp",
                "checkTransferPlayerOnTransClimateFull",
                2609);
              v32 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v57,
                      (const char (*)[31])"findScenePoint fail, scene_id:");
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v32,
                      (const unsigned int *)(v1 + 48));
              v34 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v33,
                      (const char (*)[18])" target_point_id:");
              v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v34,
                      (const unsigned int *)(v1 + 64));
              v36 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v35, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v36, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v57);
            }
            else
            {
              v37 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
              if ( *(_BYTE *)(((unsigned __int64)&v37->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v37->type >> 3) + 0x7FFF8000) <= 3 )
              {
                v37 = (std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v37->type);
              }
              point_type = v37->type;
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_area_climate_type_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(&this->cur_area_climate_type_);
              }
              TransClimateEnterSceneReason = JsonConfigMgr::getTransClimateEnterSceneReason(this->cur_area_climate_type_);
              TransferReason::TransferReason((TransferReason *const)(v1 + 224), TransClimateEnterSceneReason);
              *(_DWORD *)(v1 + 228) = *(_DWORD *)(v1 + 64);
              *(_DWORD *)(v1 + 232) = point_type;
              v39 = (unsigned __int64)std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
              if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
                v39 = __asan_report_load8(v39);
              v40 = *(_QWORD *)v39 + 32LL;
              if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
                v39 = __asan_report_load8(*(_QWORD *)v39 + 32LL);
              v41 = (*(__int64 (__fastcall **)(unsigned __int64))v40)(v39);
              std::string::operator=(v1 + 240, v41);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              SceneComp = Player::getSceneComp(this->player_);
              TransferReason::TransferReason(&p_reason, (const TransferReason *)(v1 + 224));
              v43 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
              Vector3::Vector3(&pos2, &v43->tran_rot);
              v44 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
              Vector3::Vector3(&pos, &v44->tran_pos);
              v45 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
              PlayerSceneComp::jumpToScene(SceneComp, v45, &pos, &pos2, point_type, &p_reason);
              TransferReason::~TransferReason(&p_reason);
              TransferReason::~TransferReason((TransferReason *const)(v1 + 224));
            }
            std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v1 + 192));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/basic/player_basic_comp.cpp",
              "checkTransferPlayerOnTransClimateFull",
              2572);
            v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v57,
                    (const char (*)[38])"findClimateAreaConfig fail, scene_id:");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v1 + 48));
            v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v16,
                    (const char (*)[18])" climate_area_id:");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    &this->cur_climate_area_id_);
            v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v19, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v57);
          }
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 160));
    }
  }
  if ( v59 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2621: range 00000000171C75F0-00000000171C7624
bool __cdecl PlayerBasicComp::isGameDayHour(PlayerBasicComp *const this)
{
  uint32_t game_hour; // [rsp+1Ch] [rbp-4h]

  game_hour = PlayerBasicComp::getGameHour(this);
  return game_hour > 5 && game_hour <= 0x11;
};

// Line 2627: range 00000000171C7626-00000000171C765A
bool __cdecl PlayerBasicComp::isGameNightHour(PlayerBasicComp *const this)
{
  uint32_t game_hour; // [rsp+1Ch] [rbp-4h]

  game_hour = PlayerBasicComp::getGameHour(this);
  return game_hour > 0x11 || game_hour <= 5;
};

// Line 2634: range 00000000171C765C-00000000171C7EAF
void __fastcall PlayerBasicComp::checkAndUpdateClientTotalTickTime(
        PlayerBasicComp *const this,
        double client_total_tick_time)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint64_t NowMs; // rax
  double v6; // xmm0_8
  double v7; // xmm0_8
  uint32_t client_total_tick_time_anticheat_log_count; // ecx
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  double v10; // xmm0_8
  unsigned __int64 v11; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  double v13; // xmm0_8
  unsigned __int64 v14; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  double v16; // xmm0_8
  unsigned __int64 v17; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  double v19; // xmm0_8
  unsigned __int64 v20; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  double v22; // xmm0_8
  unsigned __int64 v23; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  double v26; // xmm0_8
  Player *player; // r14
  double v28; // xmm0_8
  double pivot_unix_time; // xmm1_8
  double *v30; // rax
  double v31; // xmm0_8
  double unix_time; // [rsp+10h] [rbp-B0h]
  ClientTotalTickTimeConfig *config; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<google::protobuf::Message> v34; // [rsp+20h] [rbp-A0h] BYREF
  char v35[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 27 client_total_tick_time:2633 64 16 12 log_ptr:2646";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::checkAndUpdateClientTotalTickTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(double *)(v2 + 32) = client_total_tick_time;
  if ( *(double *)(v2 + 32) != 0.0 )
  {
    NowMs = common::tools::TimeUtils::getNowMs();
    if ( (NowMs & 0x8000000000000000LL) != 0LL )
      v6 = (double)(int)(NowMs & 1 | (NowMs >> 1)) + (double)(int)(NowMs & 1 | (NowMs >> 1));
    else
      v6 = (double)(int)NowMs;
    unix_time = v6 * 0.001;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->security_config.client_total_tick_time_config;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
    if ( *(_BYTE *)(((unsigned __int64)&this->pivot_client_time_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->pivot_client_time_);
    if ( this->pivot_client_time_ > *(double *)(v2 + 32) )
      goto LABEL_14;
    v7 = *(double *)(v2 + 32) - this->pivot_client_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->pivot_unix_time_ >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(&this->pivot_unix_time_);
    if ( v7 > unix_time - this->pivot_unix_time_ )
    {
LABEL_14:
      if ( *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_anticheat_log_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_anticheat_log_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->client_total_tick_time_anticheat_log_count_);
      }
      client_total_tick_time_anticheat_log_count = this->client_total_tick_time_anticheat_log_count_;
      if ( *(_BYTE *)(((unsigned __int64)&config->anticheat_log_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->anticheat_log_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->anticheat_log_limit);
      }
      if ( client_total_tick_time_anticheat_log_count < config->anticheat_log_limit )
      {
        ++this->client_total_tick_time_anticheat_log_count_;
        common::tools::perf::make_shared<proto_log::AntiCheatBodyClientTickTimeCheckFail>();
        v9 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->pivot_client_time_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->pivot_client_time_);
        v10 = 1000.0 * this->pivot_client_time_;
        if ( v10 >= 9.223372036854776e18 )
          v11 = (unsigned int)(int)(v10 - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v11 = (unsigned int)(int)v10;
        proto_log::AntiCheatBodyClientTickTimeCheckFail::set_pivot_client_time(v9, v11);
        v12 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->pivot_unix_time_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->pivot_unix_time_);
        v13 = 1000.0 * this->pivot_unix_time_;
        if ( v13 >= 9.223372036854776e18 )
          v14 = (unsigned int)(int)(v13 - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v14 = (unsigned int)(int)v13;
        proto_log::AntiCheatBodyClientTickTimeCheckFail::set_pivot_unix_time(v12, v14);
        v15 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v16 = 1000.0 * *(double *)(v2 + 32);
        if ( v16 >= 9.223372036854776e18 )
          v17 = (unsigned int)(int)(v16 - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v17 = (unsigned int)(int)v16;
        proto_log::AntiCheatBodyClientTickTimeCheckFail::set_client_total_tick_time(v15, v17);
        v18 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v19 = 1000.0 * unix_time;
        if ( 1000.0 * unix_time >= 9.223372036854776e18 )
          v20 = (unsigned int)(int)(v19 - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v20 = (unsigned int)(int)v19;
        proto_log::AntiCheatBodyClientTickTimeCheckFail::set_unix_time(v18, v20);
        v21 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) )
          __asan_report_load8(config);
        v22 = 1000.0 * config->max_delay_time;
        if ( v22 >= 9.223372036854776e18 )
          v23 = (unsigned int)(int)(v22 - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v23 = (unsigned int)(int)v22;
        proto_log::AntiCheatBodyClientTickTimeCheckFail::set_total_tick_max_delay_time(v21, v23);
        v24 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->pivot_unix_time_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->pivot_unix_time_);
        proto_log::AntiCheatBodyClientTickTimeCheckFail::set_delta_server_time(
          v24,
          (unsigned int)(int)(1000.0 * (unix_time - this->pivot_unix_time_)));
        v25 = std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyClientTickTimeCheckFail,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v26 = *(double *)(v2 + 32);
        if ( *(_BYTE *)(((unsigned __int64)&this->pivot_client_time_ >> 3) + 0x7FFF8000) )
          v26 = __asan_report_load8(&this->pivot_client_time_);
        proto_log::AntiCheatBodyClientTickTimeCheckFail::set_delta_client_time(
          v25,
          (unsigned int)(int)(1000.0 * (v26 - this->pivot_client_time_)));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyClientTickTimeCheckFail,void>(
          &v34,
          (const std::shared_ptr<proto_log::AntiCheatBodyClientTickTimeCheckFail> *)(v2 + 64));
        Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_CLIENT_TICK_TIME_CHECK_FAIL, &v34);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v34);
        std::shared_ptr<proto_log::AntiCheatBodyClientTickTimeCheckFail>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyClientTickTimeCheckFail> *const)(v2 + 64));
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) )
      __asan_report_load8(config);
    v28 = unix_time - config->max_delay_time - *(double *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->pivot_unix_time_ >> 3) + 0x7FFF8000) )
      v28 = __asan_report_load8(&this->pivot_unix_time_);
    pivot_unix_time = this->pivot_unix_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->pivot_client_time_ >> 3) + 0x7FFF8000) )
      v28 = __asan_report_load8(&this->pivot_client_time_);
    if ( v28 >= pivot_unix_time - this->pivot_client_time_ )
    {
      this->pivot_unix_time_ = unix_time - config->max_delay_time;
      this->pivot_client_time_ = *(double *)(v2 + 32);
    }
    v30 = (double *)std::max<double>(&this->client_total_tick_time_, (const double *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v30);
    v31 = *v30;
    if ( *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->client_total_tick_time_, v2 + 32);
    this->client_total_tick_time_ = v31;
  }
  if ( v35 == (char *)v2 )
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

// Line 2666: range 00000000171C7EB0-00000000171C85E9
int32_t __cdecl PlayerBasicComp::onChangeNickName(PlayerBasicComp *const this, const proto::SetPlayerNameReq *req)
{
  std::string *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  GameserverService *v5; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  const std::string *v8; // rdx
  int32_t v9; // r14d
  const std::string *v10; // rax
  uint32_t submit_count; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  __int64 Now; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned int NicknameAuditAutoPassHours; // eax
  unsigned int v25; // ecx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Ah] [rbp-C6h] BYREF
  bool is_audit_wating; // [rsp+1Bh] [rbp-C5h]
  uint32_t auto_pass_time; // [rsp+1Ch] [rbp-C4h]
  std::shared_ptr<Config> v31; // [rsp+20h] [rbp-C0h] BYREF
  std::string s; // [rsp+30h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (std::string *)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::string *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"1 32 32 20 trimed_nickname:2673";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)PlayerBasicComp::onChangeNickName;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  v5 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  v7 = !FeatureSwitchMgr::isNicknameAuditEnabled(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v31);
  if ( v7 )
  {
    v8 = proto::SetPlayerNameReq::nick_name[abi:cxx11](req);
    PlayerBasicComp::setNickName(this, v8);
    v9 = 0;
  }
  else
  {
    std::allocator<char>::allocator(&__a, v5);
    std::string::basic_string<std::allocator<char>>(&s, off_26045360, &__a);
    v10 = proto::SetPlayerNameReq::nick_name[abi:cxx11](req);
    common::tools::StringUtils::trim(v2 + 1, v10, &s, 1);
    std::string::~string(&s);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->nickname_audit_data_.audit_state);
    }
    is_audit_wating = this->nickname_audit_data_.audit_state == 1;
    if ( !is_audit_wating && std::operator==<char>(&this->nickname_, v2 + 1)
      || is_audit_wating && std::operator==<char>(&this->nickname_audit_data_.content, v2 + 1) )
    {
      v9 = 136;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_count >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->nickname_audit_data_.submit_count);
      }
      submit_count = this->nickname_audit_data_.submit_count;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
      LOBYTE(submit_count) = submit_count >= FeatureSwitchMgr::getMonthlySubmitNicknameLimit(&v13->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v31);
      if ( (_BYTE)submit_count )
      {
        v9 = 135;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_count >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->nickname_audit_data_.submit_count);
        }
        ++this->nickname_audit_data_.submit_count;
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&s,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/basic/player_basic_comp.cpp",
          "onChangeNickName",
          2684);
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                (common::milog::MiLogStream *const)&s,
                (const char (*)[13])"audit name: ");
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v14,
                &this->nickname_audit_data_.content);
        v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v15, (const char (*)[5])off_2604BA00);
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, v2 + 1);
        v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" current: ");
        v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &this->nickname_);
        v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" submit count:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                &this->nickname_audit_data_.submit_count);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v21, this->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&s);
        std::string::operator=(&this->nickname_audit_data_, &v2[1]);
        Now = (unsigned int)common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->nickname_audit_data_.submit_time, Now, &this->nickname_audit_data_.submit_time);
        }
        this->nickname_audit_data_.submit_time = Now;
        if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->nickname_audit_data_.audit_state, Now, &this->nickname_audit_data_.audit_state);
        }
        this->nickname_audit_data_.audit_state = 1;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v31);
        v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
        NicknameAuditAutoPassHours = FeatureSwitchMgr::getNicknameAuditAutoPassHours(&v23->feature_switch_mgr);
        v25 = SAFE_MULTIPLY<int,unsigned int>(3600, NicknameAuditAutoPassHours);
        if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->nickname_audit_data_.submit_time);
        }
        auto_pass_time = SAFE_ADD<unsigned int,unsigned int>(this->nickname_audit_data_.submit_time, v25);
        std::shared_ptr<Config>::~shared_ptr(&v31);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::asyncNicknameSignatureAuditRequest(this->player_, v2 + 1, AUDIT_NICKNAME, auto_pass_time);
        v9 = 0;
      }
    }
    std::string::~string(&v2[1]);
  }
  result = v9;
  if ( v33 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 2694: range 00000000171C85EA-00000000171C8604
void __cdecl PlayerBasicComp::onMonthlyRefresh(PlayerBasicComp *const this)
{
  PlayerBasicComp::resetNicknameAuditSubmitCount(this);
};

// Line 2699: range 00000000171C8606-00000000171C8620
void __cdecl PlayerBasicComp::onLoginMonthlyRefresh(PlayerBasicComp *const this)
{
  PlayerBasicComp::resetNicknameAuditSubmitCount(this);
};

// Line 2704: range 00000000171C8622-00000000171C8687
void __cdecl PlayerBasicComp::resetNicknameAuditSubmitCount(PlayerBasicComp *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(&this->nickname_audit_data_.submit_count, (((_BYTE)this - 108) & 7u) + 3, v1);
  this->nickname_audit_data_.submit_count = 0;
  PlayerBasicComp::notifyNicknameAuditData(this);
};

// Line 2710: range 00000000171C8688-00000000171C88E3
void __cdecl PlayerBasicComp::notifyNicknameAuditData(const PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool isNicknameAuditEnabled; // dl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t MonthlySubmitNicknameLimit; // edx
  proto::ContentAuditInfo *info; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 11 notify:2711";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::notifyNicknameAuditData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::PlayerNicknameAuditDataNotify::PlayerNicknameAuditDataNotify((proto::PlayerNicknameAuditDataNotify *const)(v1 + 32));
  info = proto::PlayerNicknameAuditDataNotify::mutable_info((proto::PlayerNicknameAuditDataNotify *const)(v1 + 32));
  ContentAuditData::toClient(&this->nickname_audit_data_, info);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  isNicknameAuditEnabled = FeatureSwitchMgr::isNicknameAuditEnabled(&v4->feature_switch_mgr);
  proto::ContentAuditInfo::set_is_open(info, isNicknameAuditEnabled);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  MonthlySubmitNicknameLimit = FeatureSwitchMgr::getMonthlySubmitNicknameLimit(&v6->feature_switch_mgr);
  proto::ContentAuditInfo::set_submit_limit(info, MonthlySubmitNicknameLimit);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::PlayerNicknameAuditDataNotify::~PlayerNicknameAuditDataNotify((proto::PlayerNicknameAuditDataNotify *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2720: range 00000000171C88E4-00000000171C8E32
void __cdecl PlayerBasicComp::onNicknameAuditResult(
        PlayerBasicComp *const this,
        const std::string *nickname,
        bool is_ok)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  bool is_not_waiting; // [rsp+2Eh] [rbp-A2h]
  bool is_not_consistent; // [rsp+2Fh] [rbp-A1h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 17 old_nickname:2721";
  *(_QWORD *)(v3 + 16) = PlayerBasicComp::onNicknameAuditResult;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  v6 = PlayerBasicComp::getNickName[abi:cxx11](this);
  std::string::basic_string(v3 + 32, v6);
  is_not_waiting = 0;
  is_not_consistent = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->nickname_audit_data_.audit_state);
  }
  if ( this->nickname_audit_data_.audit_state == 1 )
  {
    if ( std::operator==<char>(nickname, &this->nickname_audit_data_.content) )
    {
      if ( is_ok )
      {
        PlayerBasicComp::setNickName(this, nickname);
        PlayerBasicComp::notifyNickname(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(
            &this->nickname_audit_data_.audit_state,
            nickname,
            &this->nickname_audit_data_.audit_state);
        }
        this->nickname_audit_data_.audit_state = 0;
        std::string::operator=(&this->nickname_audit_data_, byte_25FB4240);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(
            &this->nickname_audit_data_.audit_state,
            &this->nickname_audit_data_,
            &this->nickname_audit_data_.audit_state);
        }
        this->nickname_audit_data_.audit_state = 2;
      }
      PlayerBasicComp::notifyNicknameAuditData(this);
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/basic/player_basic_comp.cpp",
        "onNicknameAuditResult",
        2740);
      v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v18, nickname);
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" result: ");
      v9 = common::milog::MiLogStream::operator<<(v8, is_ok);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/basic/player_basic_comp.cpp",
        "onNicknameAuditResult",
        2744);
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v18, nickname);
      v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v10, (const char (*)[25])off_2604BB80);
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v11,
              &this->nickname_audit_data_.content);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v12, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v18);
      is_not_consistent = 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "onNicknameAuditResult",
      2750);
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v18, nickname);
    v14 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            v13,
            (const char (*)[30])" NOT in audit waiting state. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v14, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    is_not_waiting = 1;
  }
  PlayerBasicComp::logNicknameAuditResult(
    this,
    is_ok,
    (const std::string *)(v3 + 32),
    is_not_waiting,
    is_not_consistent);
  std::string::~string((void *)(v3 + 32));
  if ( v19 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2757: range 00000000171C8E34-00000000171C8F6F
void __cdecl PlayerBasicComp::onNicknameAuditByGm(PlayerBasicComp *const this, bool is_ok)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 12 content:2758";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::onNicknameAuditByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::string::basic_string(v2 + 32, &this->nickname_audit_data_);
  PlayerBasicComp::onNicknameAuditResult(this, (const std::string *)(v2 + 32), is_ok);
  std::string::~string((void *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2763: range 00000000171C8F70-00000000171C90D4
void __cdecl PlayerBasicComp::notifyNickname(const PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 11 notify:2764";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::notifyNickname;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::PlayerNicknameNotify::PlayerNicknameNotify((proto::PlayerNicknameNotify *const)(v1 + 32));
  proto::PlayerNicknameNotify::set_nickname((proto::PlayerNicknameNotify *const)(v1 + 32), &this->nickname_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::PlayerNicknameNotify::~PlayerNicknameNotify((proto::PlayerNicknameNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2770: range 00000000171C90D6-00000000171C933F
void __cdecl PlayerBasicComp::checkAndAutoPassNicknameAudit(PlayerBasicComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  bool v2; // bl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned int NicknameAuditAutoPassHours; // eax
  unsigned int v5; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  uint32_t auto_pass_time; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  v2 = !FeatureSwitchMgr::isNicknameAuditEnabled(&v1->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( !v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->nickname_audit_data_.audit_state);
    }
    if ( this->nickname_audit_data_.audit_state == 1 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v9);
      v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
      NicknameAuditAutoPassHours = FeatureSwitchMgr::getNicknameAuditAutoPassHours(&v3->feature_switch_mgr);
      v5 = SAFE_MULTIPLY<int,unsigned int>(3600, NicknameAuditAutoPassHours);
      if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->nickname_audit_data_.submit_time);
      }
      auto_pass_time = SAFE_ADD<unsigned int,unsigned int>(this->nickname_audit_data_.submit_time, v5);
      std::shared_ptr<Config>::~shared_ptr(&v9);
      if ( common::tools::TimeUtils::getNow() >= auto_pass_time )
      {
        PlayerBasicComp::onNicknameAuditResult(this, &this->nickname_audit_data_.content, 1);
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/basic/player_basic_comp.cpp",
          "checkAndAutoPassNicknameAudit",
          2783);
        v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v10,
               (const char (*)[18])"Auto pass audit: ");
        v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v6,
               &this->nickname_audit_data_.content);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v7, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v10);
      }
    }
  }
};

// Line 2788: range 00000000171C9340-00000000171C951C
void __fastcall PlayerBasicComp::SetLastLogoutTimeByGm(PlayerBasicComp *const this, __int64 last_logout_time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 21 last_logout_time:2787";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::SetLastLogoutTimeByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = last_logout_time;
  v5 = *(_DWORD *)(v2 + 32);
  v6 = *(_BYTE *)(((unsigned __int64)&this->last_logout_time_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(last_logout_time) = v6 != 0;
    __asan_report_store4(&this->last_logout_time_, last_logout_time, &this->last_logout_time_);
  }
  this->last_logout_time_ = v5;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/basic/player_basic_comp.cpp",
    "SetLastLogoutTimeByGm",
    2790);
  v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v10,
         (const char (*)[33])"update by gm. last_logout_time_=");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])", player_=");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v9, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v10);
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

// Line 2794: range 00000000171C951E-00000000171C9A32
void __cdecl PlayerBasicComp::logNicknameAuditResult(
        PlayerBasicComp *const this,
        bool is_pass,
        const std::string *nickname_before,
        bool is_not_waiting,
        bool is_not_consistent)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  const std::string *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Player *player; // r14
  std::string v20; // [rsp+0h] [rbp-100h]
  bool is_not_consistenta; // [rsp+4h] [rbp-FCh]
  const std::string *nickname_beforea; // [rsp+8h] [rbp-F8h]
  bool is_not_waitinga; // [rsp+10h] [rbp-F0h]
  bool is_passa; // [rsp+14h] [rbp-ECh]
  PlayerBasicComp *thisa; // [rsp+18h] [rbp-E8h]
  bool is_audit_open; // [rsp+2Bh] [rbp-D5h]
  uint32_t submit_limit; // [rsp+2Ch] [rbp-D4h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v29; // [rsp+40h] [rbp-C0h] BYREF
  std::string v30; // [rsp+50h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+70h] [rbp-90h] BYREF

  *(&v20._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v20._M_string_length = (std::string::size_type)nickname_before;
  v20._anon_0._M_local_buf[4] = is_pass;
  v20._anon_0._M_local_buf[0] = is_not_waiting;
  BYTE4(v20._M_dataplus._M_p) = is_not_consistent;
  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 11 holder:2795 64 16 12 log_ptr:2796";
  *(_QWORD *)(v5 + 16) = PlayerBasicComp::logNicknameAuditResult;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v30, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xA93u, v20);
  std::string::~string(&v30);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyNicknameAuditResult>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyNicknameAuditResult::set_is_audit_pass(v9, is_passa);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyNicknameAuditResult::set_nickname_before(v10, nickname_beforea);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  v12 = PlayerBasicComp::getNickName[abi:cxx11](thisa);
  proto_log::PlayerLogBodyNicknameAuditResult::set_nickname_after(v11, v12);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  is_audit_open = FeatureSwitchMgr::isNicknameAuditEnabled(&v13->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyNicknameAuditResult::set_is_audit_open(v14, is_audit_open);
  if ( is_audit_open )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    submit_limit = FeatureSwitchMgr::getMonthlySubmitNicknameLimit(&v15->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->nickname_audit_data_.submit_count >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->nickname_audit_data_.submit_count);
    }
    if ( submit_limit > thisa->nickname_audit_data_.submit_count )
    {
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->nickname_audit_data_.submit_count >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->nickname_audit_data_.submit_count);
      }
      proto_log::PlayerLogBodyNicknameAuditResult::set_left_submit_count(
        v16,
        submit_limit - thisa->nickname_audit_data_.submit_count);
    }
  }
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyNicknameAuditResult::set_is_not_waiting(v17, is_not_waitinga);
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyNicknameAuditResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyNicknameAuditResult::set_is_not_consistent(v18, is_not_consistenta);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v29, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyNicknameAuditResult,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyNicknameAuditResult> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &v29, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v29);
  std::shared_ptr<proto_log::PlayerLogBodyNicknameAuditResult>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyNicknameAuditResult> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 2816: range 00000000171C9A34-00000000171C9B27
void __cdecl PlayerBasicComp::onReadNicknameAudit(PlayerBasicComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  bool v2; // bl
  std::shared_ptr<Config> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  v2 = !FeatureSwitchMgr::isNicknameAuditEnabled(&v1->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(v3);
  if ( !v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->nickname_audit_data_.audit_state);
    }
    if ( this->nickname_audit_data_.audit_state == 2 )
    {
      this->nickname_audit_data_.audit_state = 0;
      std::string::operator=(&this->nickname_audit_data_, byte_25FB4240);
    }
    PlayerBasicComp::notifyNicknameAuditData(this);
  }
};

// Line 2831: range 00000000171C9B28-00000000171C9BF0
std::string *__cdecl PlayerBasicComp::getAuditNickname[abi:cxx11](
        std::string *retstr,
        const PlayerBasicComp *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.audit_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->nickname_audit_data_.audit_state);
  }
  if ( this->nickname_audit_data_.audit_state == 1 )
  {
    std::string::basic_string(retstr, &this->nickname_audit_data_);
  }
  else
  {
    std::allocator<char>::allocator(&__a, this);
    std::string::basic_string<std::allocator<char>>(retstr, byte_25FB4240, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  return retstr;
};

// Line 2840: range 00000000171C9BF2-00000000171C9C59
void __cdecl PlayerBasicComp::setNicknameSubmitCountByGm(PlayerBasicComp *const this, uint32_t submit_count)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->nickname_audit_data_.submit_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->nickname_audit_data_.submit_count, (((_BYTE)this - 108) & 7u) + 3, v2);
  this->nickname_audit_data_.submit_count = submit_count;
  PlayerBasicComp::notifyNicknameAuditData(this);
};

// Line 2846: range 00000000171CAA08-00000000171CB523
void __cdecl PlayerBasicComp::asyncQueryIpRegionRequst(
        PlayerBasicComp *const this,
        const proto::QueryIpRegionData *ip_proto_data)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r14
  int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  GameserverService *v25; // r14
  bool v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  proto::QueryIpRegionData *ip_proto_dataa; // [rsp+0h] [rbp-330h]
  PlayerBasicComp *thisa; // [rsp+8h] [rbp-328h]
  int v31; // [rsp+10h] [rbp-320h]
  int val; // [rsp+14h] [rbp-31Ch] BYREF
  const QueryIpRegionConfig *ip_region_config; // [rsp+18h] [rbp-318h]
  common::milog::MiLogStream v34; // [rsp+20h] [rbp-310h] BYREF
  char v35[752]; // [rsp+40h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 4 12 options:2856 64 8 22 response_callback:2902 96 16 18 request_timer:2847 128 16 15 conf"
                        "ig_ptr:2848 160 16 18 to_json_timer:2862 192 32 16 json_string:2860 256 32 12 msg_str:2882 320 4"
                        "0 15 status_ret:2863 400 240 17 http_request:2872";
  *(_QWORD *)(v2 + 16) = PlayerBasicComp::asyncQueryIpRegionRequst;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959360;
  v4[536862732] = 62194;
  v4[536862740] = -202116109;
  v4[536862741] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  if ( std::operator==<Config>((const std::shared_ptr<Config> *)(v2 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/basic/player_basic_comp.cpp",
      "asyncQueryIpRegionRequst",
      2851);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v34, (const char (*)[17])"getConfig error.");
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    LOBYTE(ip_region_config) = (unsigned __int8)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))
                             - 16;
    google::protobuf::util::JsonPrintOptions::JsonPrintOptions((google::protobuf::util::JsonPrintOptions *const)(v2 + 48));
    *(_BYTE *)(v2 + 49) = 1;
    *(_BYTE *)(v2 + 51) = 1;
    *(_BYTE *)(v2 + 50) = 1;
    std::string::basic_string(v2 + 192);
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
    google::protobuf::util::MessageToJsonString(
      (google::protobuf::util::Status *)(v2 + 320),
      &ip_proto_data->google::protobuf::Message,
      (int)ip_proto_data,
      this,
      v31,
      (char)ip_region_config,
      (int)v34.log_,
      v34.ostr_ptr_._M_ptr);
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "asyncQueryIpRegionRequst",
      2864);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v34,
           (const char (*)[27])"MessageToJsonString cost: ");
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 160));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 320)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/basic/player_basic_comp.cpp",
        "asyncQueryIpRegionRequst",
        2867);
      v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[34])"MessageToJsonString fails, proto:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v34, ip_proto_dataa);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)&v34);
      std::string::~string(&v34);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 320));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 160));
    if ( v7 == 1 )
    {
      common::minet::http_client::HttpRequest::HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 400));
      std::string::operator=(v2 + 400, ip_region_config);
      std::string::operator=(v2 + 432, &ip_region_config->port);
      *(_DWORD *)(v2 + 624) = 1;
      *(_DWORD *)(v2 + 628) = 1;
      if ( *(char *)(((unsigned __int64)&ip_region_config->is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&ip_region_config->is_ssl);
      *(_BYTE *)(v2 + 632) = ip_region_config->is_ssl;
      std::string::operator=(v2 + 464, &ip_region_config->uri);
      std::string::operator=(v2 + 592, v2 + 192);
      std::string::basic_string(v2 + 256);
      if ( common::minet::http_client::HttpUtils::serializeHttpRequest(
             (const common::minet::http_client::HttpRequest *)(v2 + 400),
             (std::string *)(v2 + 256)) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/basic/player_basic_comp.cpp",
          "asyncQueryIpRegionRequst",
          2885);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v34,
          (const char (*)[26])"serializeHttpRequest fail");
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/basic/player_basic_comp.cpp",
          "asyncQueryIpRegionRequst",
          2889);
        v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               &v34,
               (const char (*)[19])"http_request host:");
        v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 400));
        v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" port:");
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v2 + 432));
        v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uri:");
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v2 + 464));
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" method:");
        v15 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpMethod,(common::minet::http_client::HttpMethod*)0>(
                v14,
                (const common::minet::http_client::HttpMethod *)(v2 + 624));
        v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" version:");
        v17 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpVersion,(common::minet::http_client::HttpVersion*)0>(
                v16,
                (const common::minet::http_client::HttpVersion *)(v2 + 628));
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" is_ssl:");
        v19 = common::milog::MiLogStream::operator<<(v18, *(_BYTE *)(v2 + 632));
        v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" body:");
        v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v2 + 592));
        v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" head_map:");
        v23 = common::milog::MiLogStream::operator<<<std::string,std::string>(
                v22,
                (const std::map<std::string,std::string> *)(v2 + 496));
        v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" msg_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)(v2 + 256));
      }
      common::milog::MiLogStream::~MiLogStream(&v34);
      *(_QWORD *)(v2 + 64) = thisa;
      v25 = ServiceBox::findService<GameserverService>();
      std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerBasicComp::asyncQueryIpRegionRequst(proto::QueryIpRegionData const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
        (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v34,
        *(PlayerBasicComp::asyncQueryIpRegionRequst::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&ip_region_config->timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)ip_region_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ip_region_config->timeout >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&ip_region_config->timeout);
      }
      v26 = GameserverService::asyncHttpRequest(
              v25,
              (const common::minet::http_client::HttpRequest *)(v2 + 400),
              ip_region_config->timeout,
              7u,
              (common::minet::http_client::ResponseCallBackFunc *)&v34) != 0;
      std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&v34);
      if ( v26 )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/basic/player_basic_comp.cpp",
          "asyncQueryIpRegionRequst",
          2978);
        v27 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v34,
                (const char (*)[34])"asyncHttpRequest fail, http body:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)(v2 + 592));
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/basic/player_basic_comp.cpp",
        "asyncQueryIpRegionRequst",
        2981);
      v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v34, (const char (*)[15])"request cost: ");
      val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96));
      common::milog::MiLogStream::operator<<<int,(int *)0>(v28, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
      std::string::~string((void *)(v2 + 256));
      common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 400));
    }
    std::string::~string((void *)(v2 + 192));
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2902: range 00000000171C9CD6-00000000171CAA06
void __fastcall PlayerBasicComp::asyncQueryIpRegionRequst(proto::QueryIpRegionData const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        unsigned __int64 __closure,
        common::minet::http_client::HttpRetcode http_retcode,
        common::minet::http_client::HttpRequest *http_request,
        unsigned __int64 http_response)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t v21; // r14d
  const char *v22; // rdx
  uint32_t v23; // r14d
  const char *v24; // rdx
  Json::Value_0 *v25; // rax
  Json::Value_0 *v26; // rax
  Json::Value_0 *v27; // rax
  Json::Value_0 *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  Json::Value_0 *v32; // rax
  Json::Value_0 *v33; // rax
  char v34; // al
  PlayerBasicComp *v35; // r14
  PlayerBasicComp *v36; // r14
  unsigned __int64 val; // [rsp+38h] [rbp-328h] BYREF
  const std::string *json_str; // [rsp+40h] [rbp-320h]
  common::milog::MiLogStream v41; // [rsp+50h] [rbp-310h] BYREF
  std::function<void()> rollbacker; // [rsp+70h] [rbp-2F0h] BYREF
  char v43[720]; // [rsp+90h] [rbp-2D0h] BYREF

  v4 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(672LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 17 http_retcode:2902 48 32 21 new_country_code:2943 112 32 20 new_region_name:2944 176 40"
                        " 19 http_committer:2904 256 40 15 root_value:2929 336 272 11 reader:2928";
  *(_QWORD *)(v4 + 16) = PlayerBasicComp::asyncQueryIpRegionRequst(proto::QueryIpRegionData const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = -219021312;
  v6[536862723] = 62194;
  v6[536862724] = -219021312;
  v6[536862725] = 62194;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218959360;
  v6[536862730] = 62194;
  v6[536862739] = -202116109;
  v6[536862740] = -202116109;
  *(_DWORD *)(v4 + 32) = http_retcode;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::function<void ()(void)>::function<PlayerBasicComp::asyncQueryIpRegionRequst(proto::QueryIpRegionData const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator() const(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)::{lambda(void)#1},void,void>(
    &rollbacker,
    *(PlayerBasicComp::asyncQueryIpRegionRequst::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)>::operator()::<lambda()> *)__closure);
  common::tools::ScopedCommitter::ScopedCommitter((common::tools::ScopedCommitter *const)(v4 + 176), &rollbacker);
  std::function<void ()(void)>::~function(&rollbacker);
  if ( *(_DWORD *)(v4 + 32) )
    goto LABEL_10;
  if ( *(_BYTE *)((http_response >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((http_response >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(http_response);
  if ( *(_DWORD *)http_response == 200 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&rollbacker,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "operator()",
      2921);
    v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            (common::milog::MiLogStream *const)&rollbacker,
            (const char (*)[58])"asyncQueryIpRegionRequst response_callback: http_retcode:");
    v13 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpRetcode,(common::minet::http_client::HttpRetcode*)0>(
            v12,
            (const common::minet::http_client::HttpRetcode *)(v4 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v13,
            (const char (*)[27])" \n http_request.body size:");
    val = std::string::size(&http_request->body);
    v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &val);
    v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v15,
            (const char (*)[24])" \nhttp_response.status:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v16,
            (const unsigned int *)http_response);
    v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v17,
            (const char (*)[26])" \nhttp_response.head_map:");
    v19 = common::milog::MiLogStream::operator<<<std::string,std::string>(
            v18,
            (const std::map<std::string,std::string> *)(http_response + 8));
    v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v19,
            (const char (*)[22])" \nhttp_response.body:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(http_response + 56));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
    json_str = (const std::string *)(http_response + 56);
    Json::Reader::Reader((Json::Reader *)(v4 + 336));
    Json::Value::Value(v4 + 256, 0LL);
    if ( !Json::Reader::parse((Json::Reader *const)(v4 + 336), json_str, (Json::Value *)(v4 + 256), 1) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&rollbacker,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/basic/player_basic_comp.cpp",
        "operator()",
        2932);
      if ( *(_BYTE *)((http_response >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((http_response >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(http_response);
      v21 = *(_DWORD *)http_response;
      v22 = (const char *)std::string::c_str(json_str);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&rollbacker,
        "parse json failed: %s, status: %u",
        v22,
        v21);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
    }
    else if ( !Json::Value::isObject((const Json::Value_0 *const)(v4 + 256)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&rollbacker,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/basic/player_basic_comp.cpp",
        "operator()",
        2937);
      if ( *(_BYTE *)((http_response >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((http_response >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(http_response);
      v23 = *(_DWORD *)http_response;
      v24 = (const char *)std::string::c_str(json_str);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&rollbacker,
        "root is not object: %s, status: %u",
        v24,
        v23);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
    }
    else if ( Json::Value::isMember((const Json::Value_0 *const)(v4 + 256), "data") )
    {
      v25 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 256), "data");
      v26 = Json::Value::operator[](v25, "country_code");
      Json::Value::asString[abi:cxx11]((Json::String *)(v4 + 48), v26);
      v27 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 256), "data");
      v28 = Json::Value::operator[](v27, "region_name");
      Json::Value::asString[abi:cxx11]((Json::String *)(v4 + 112), v28);
      if ( (unsigned __int8)std::string::empty(v4 + 48) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/basic/player_basic_comp.cpp",
          "operator()",
          2947);
        v29 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v41,
                (const char (*)[58])"asyncQueryIpRegionRequst country_code empty, region_name:");
        v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)(v4 + 112));
        v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])", ip:");
        v32 = Json::Value::operator[]((Json::Value_0 *const)(v4 + 256), "data");
        v33 = Json::Value::operator[](v32, "ip");
        Json::Value::asString[abi:cxx11]((Json::String *)&rollbacker, v33);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, (const std::string *)&rollbacker);
        std::string::~string(&rollbacker);
        common::milog::MiLogStream::~MiLogStream(&v41);
      }
      else
      {
        if ( (unsigned __int8)std::string::empty(v4 + 48) != 1 )
          goto LABEL_26;
        if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        if ( (unsigned __int8)std::string::empty(*(_QWORD *)__closure + 248LL) )
LABEL_26:
          v34 = 1;
        else
          v34 = 0;
        if ( v34 )
        {
          if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure);
          v35 = *(PlayerBasicComp **)__closure;
          std::string::basic_string(&rollbacker, v4 + 48);
          PlayerBasicComp::setIpCountryCode(v35, (std::string *)&rollbacker);
          std::string::~string(&rollbacker);
          if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure);
          v36 = *(PlayerBasicComp **)__closure;
          std::string::basic_string(&rollbacker, v4 + 112);
          PlayerBasicComp::setIpRegionName(v36, (std::string *)&rollbacker);
          std::string::~string(&rollbacker);
        }
        if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        PlayerBasicComp::sendPlayerIpRegionNotify(*(PlayerBasicComp *const *)__closure);
        if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        PlayerBasicComp::notifyPlayerIpRegionData(*(PlayerBasicComp *const *)__closure);
        common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v4 + 176));
      }
      std::string::~string((void *)(v4 + 112));
      std::string::~string((void *)(v4 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&rollbacker,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/basic/player_basic_comp.cpp",
        "operator()",
        2965);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&rollbacker,
        "query ip region response missing field <data>.");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
    }
    Json::Value::~Value((Json::Value_0 *const)(v4 + 256));
    Json::Reader::~Reader((Json::Reader *const)(v4 + 336));
  }
  else
  {
LABEL_10:
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&rollbacker,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/basic/player_basic_comp.cpp",
      "operator()",
      2916);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           (common::milog::MiLogStream *const)&rollbacker,
           (const char (*)[45])"asyncQueryIpRegionRequst fail. http_retcode:");
    v8 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpRetcode,(common::minet::http_client::HttpRetcode*)0>(
           v7,
           (const common::minet::http_client::HttpRetcode *)(v4 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           v8,
           (const char (*)[23])" \n http_response.body:");
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
            v9,
            (const std::string *)(http_response + 56));
    v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v10,
            (const char (*)[24])" \nhttp_response.status:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)http_response);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&rollbacker);
  }
  common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v4 + 176));
  if ( v43 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF804C) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8050) = -168430091;
  }
};

// Line 2904: range 00000000171C9C5A-00000000171C9CD5
void __cdecl PlayerBasicComp::asyncQueryIpRegionRequst(proto::QueryIpRegionData const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator() const(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)::{lambda(void)#1}::operator()(
        const PlayerBasicComp::asyncQueryIpRegionRequst::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)>::operator()::<lambda()> *const __closure)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( (unsigned __int8)std::string::empty(&__closure->__this->ip_country_code_) != 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    PlayerBasicComp::sendPlayerIpRegionNotify(__closure->__this);
  }
};

// Line 2985: range 00000000171CB524-00000000171CB6EF
int32_t __cdecl PlayerBasicComp::sendPlayerIpRegionNotify(PlayerBasicComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t v4; // r14d
  int32_t result; // eax
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 11 notify:2986";
  *(_QWORD *)(v1 + 16) = PlayerBasicComp::sendPlayerIpRegionNotify;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::PlayerIpRegionNotify::PlayerIpRegionNotify((proto::PlayerIpRegionNotify *const)(v1 + 32));
  if ( std::operator==<char>(&this->ip_country_code_, "CN") )
  {
    proto::PlayerIpRegionNotify::set_ip_code((proto::PlayerIpRegionNotify *const)(v1 + 32), &this->ip_region_name_);
  }
  else if ( (unsigned __int8)std::string::empty(&this->ip_country_code_) != 1 )
  {
    proto::PlayerIpRegionNotify::set_ip_code((proto::PlayerIpRegionNotify *const)(v1 + 32), &this->ip_country_code_);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v4 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::PlayerIpRegionNotify::~PlayerIpRegionNotify((proto::PlayerIpRegionNotify *const)(v1 + 32));
  result = v4;
  if ( v6 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
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
