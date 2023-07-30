// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/instable_spray_activity.cpp

// Line 30: range 000000001452DC04-000000001452E0C8
int32_t __cdecl InstableSprayActivity::fromScheduleBin(
        InstableSprayActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r12
  int32_t result; // eax
  bool v9; // al
  const google::protobuf::RepeatedPtrField<proto::InstableSprayTeamInfoBin> *v10; // rax
  unsigned int *v11; // rcx
  InstableSprayActivity::StageData *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >,bool> v13; // rax
  const google::protobuf::RepeatedField<long unsigned int> *v14; // rax
  std::remove_reference<InstableSprayActivity::StageData&>::type *v15; // [rsp+10h] [rbp-100h]
  common::milog::MiLogStream *v16; // [rsp+18h] [rbp-F8h]
  proto::ActivityScheduleBin::DetailCase val; // [rsp+30h] [rbp-E0h] BYREF
  unsigned int Uid; // [rsp+34h] [rbp-DCh] BYREF
  google::protobuf::RepeatedPtrField<proto::InstableSprayStageBin>::const_iterator __for_begin; // [rsp+38h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::InstableSprayStageBin>::const_iterator __for_end; // [rsp+40h] [rbp-D0h] BYREF
  const proto::InstableSprayScheduleBin *schedule_bin; // [rsp+48h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::InstableSprayStageBin> *__for_range; // [rsp+50h] [rbp-C0h]
  const proto::InstableSprayStageBin *stage_bin; // [rsp+58h] [rbp-B8h]
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 13 stage_data:39";
  *(_QWORD *)(v2 + 16) = InstableSprayActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( proto::ActivityScheduleBin::detail_case(bin) == kInstableSprayBin )
  {
    schedule_bin = proto::ActivityScheduleBin::instable_spray_bin(bin);
    __for_range = proto::InstableSprayScheduleBin::stage_bin_list(schedule_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::InstableSprayStageBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::InstableSprayStageBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::InstableSprayStageBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::InstableSprayStageBin const>::operator*(&__for_begin);
      InstableSprayActivity::StageData::StageData((InstableSprayActivity::StageData *const)(v2 + 32));
      *(_DWORD *)(v2 + 32) = proto::InstableSprayStageBin::max_score(stage_bin);
      *(_BYTE *)(v2 + 36) = proto::InstableSprayStageBin::is_open(stage_bin);
      v9 = proto::InstableSprayStageBin::is_finished(stage_bin) || *(_DWORD *)(v2 + 32);
      *(_BYTE *)(v2 + 37) = v9;
      v10 = proto::InstableSprayStageBin::team_info_bin_list(stage_bin);
      common::tools::MiscUtils::fromRepeated<InstableSprayDungeonTeamInfo,proto::InstableSprayTeamInfoBin,int (InstableSprayDungeonTeamInfo::*)(proto::InstableSprayTeamInfoBin const&)>(
        (std::vector<InstableSprayDungeonTeamInfo> *)(v2 + 40),
        v10,
        (int (*)(InstableSprayDungeonTeamInfo *, const proto::InstableSprayTeamInfoBin *))InstableSprayDungeonTeamInfo::fromBin);
      v15 = std::move<InstableSprayActivity::StageData &>((InstableSprayActivity::StageData *)(v2 + 32));
      Uid = proto::InstableSprayStageBin::stage_id(stage_bin);
      v13 = std::map<unsigned int,InstableSprayActivity::StageData>::emplace<unsigned int,InstableSprayActivity::StageData>(
              &this->stage_data_map_,
              &Uid,
              v15,
              v11,
              v12);
      if ( !v13.second )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/instable_spray_activity.cpp",
          "fromScheduleBin",
          46);
        v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v24,
                (const char (*)[45])"[INSTABLE_SPRAY] stage not found, stage_id: ");
        Uid = proto::InstableSprayStageBin::stage_id(stage_bin);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &Uid);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      InstableSprayActivity::StageData::~StageData((InstableSprayActivity::StageData *const)(v2 + 32));
      google::protobuf::internal::RepeatedPtrIterator<proto::InstableSprayStageBin const>::operator++(&__for_begin);
    }
    v14 = proto::InstableSprayScheduleBin::in_dungeon_guid_list(schedule_bin);
    common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(v14, &this->in_dungeon_avatar_guid_vec_);
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/instable_spray_activity.cpp",
      "fromScheduleBin",
      33);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v24,
           (const char (*)[48])"[INSTABLE_SPRAY] schedule bin case mismatched: ");
    val = proto::ActivityScheduleBin::detail_case(bin);
    v6 = common::milog::MiLogStream::operator<<<proto::ActivityScheduleBin::DetailCase,(proto::ActivityScheduleBin::DetailCase*)0>(
           v5,
           &val);
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0;
  }
  if ( v25 == (char *)v2 )
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

// Line 55: range 000000001452E0CA-000000001452E31F
int32_t __cdecl InstableSprayActivity::toScheduleBin(
        const InstableSprayActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedPtrField<proto::InstableSprayTeamInfoBin> *v2; // rax
  google::protobuf::RepeatedField<long unsigned int> *v3; // rax
  std::map<unsigned int,InstableSprayActivity::StageData>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::map<unsigned int,InstableSprayActivity::StageData>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  proto::InstableSprayScheduleBin *schedule_bin; // [rsp+20h] [rbp-40h]
  const std::map<unsigned int,InstableSprayActivity::StageData> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,InstableSprayActivity::StageData> *v9; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,InstableSprayActivity::StageData> >::type *stage_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,InstableSprayActivity::StageData> >::type *stage_data; // [rsp+40h] [rbp-20h]
  proto::InstableSprayStageBin *stage_bin; // [rsp+48h] [rbp-18h]

  schedule_bin = proto::ActivityScheduleBin::mutable_instable_spray_bin(bin);
  __for_range = &this->stage_data_map_;
  __for_begin._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::begin(&this->stage_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::end(&this->stage_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,InstableSprayActivity::StageData>(v9);
    stage_data = (std::tuple_element<1,const std::pair<unsigned int const,InstableSprayActivity::StageData> >::type *)std::get<1ul,unsigned int const,InstableSprayActivity::StageData>(v9);
    stage_bin = proto::InstableSprayScheduleBin::add_stage_bin_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::InstableSprayStageBin::set_stage_id(stage_bin, *stage_id);
    if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::InstableSprayStageBin::set_max_score(stage_bin, stage_data->max_score);
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_data->is_open);
    }
    proto::InstableSprayStageBin::set_is_open(stage_bin, stage_data->is_open);
    if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)stage_data + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load1(&stage_data->is_finished);
    }
    proto::InstableSprayStageBin::set_is_finished(stage_bin, stage_data->is_finished);
    v2 = proto::InstableSprayStageBin::mutable_team_info_bin_list(stage_bin);
    common::tools::MiscUtils::vectorToRepeated<InstableSprayDungeonTeamInfo,proto::InstableSprayTeamInfoBin,int (InstableSprayDungeonTeamInfo::*)(proto::InstableSprayTeamInfoBin&)const>(
      &stage_data->team_info_vec,
      v2,
      (int (*)(const InstableSprayDungeonTeamInfo *, proto::InstableSprayTeamInfoBin *))InstableSprayDungeonTeamInfo::toBin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator++(&__for_begin);
  }
  v3 = proto::InstableSprayScheduleBin::mutable_in_dungeon_guid_list(schedule_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned long,unsigned long>(&this->in_dungeon_avatar_guid_vec_, v3);
  return 0;
};

// Line 71: range 000000001452E320-000000001452E5A3
int32_t __cdecl InstableSprayActivity::toClient(InstableSprayActivity *const this, proto::ActivityInfo *activity_info)
{
  google::protobuf::RepeatedPtrField<proto::InstableSprayTeamInfo> *v3; // rax
  std::map<unsigned int,InstableSprayActivity::StageData>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::map<unsigned int,InstableSprayActivity::StageData>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  proto::InstableSprayDetailInfo *detail_info; // [rsp+20h] [rbp-70h]
  std::map<unsigned int,InstableSprayActivity::StageData> *__for_range; // [rsp+28h] [rbp-68h]
  const std::pair<unsigned int const,InstableSprayActivity::StageData> *v8; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,InstableSprayActivity::StageData> >::type *stage_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,InstableSprayActivity::StageData> >::type *stage_data; // [rsp+40h] [rbp-50h]
  proto::InstableSprayStageInfo *stage_info; // [rsp+48h] [rbp-48h]
  common::milog::MiLogStream v12; // [rsp+50h] [rbp-40h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/instable_spray_activity.cpp",
      "toClient",
      74);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v12,
      (const char (*)[47])"[INSTABLE_SPRAY] BaseActivity::toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_instable_spray_info(activity_info);
    __for_range = &this->stage_data_map_;
    __for_begin._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::begin(&this->stage_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::end(&this->stage_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator*(&__for_begin);
      stage_id = std::get<0ul,unsigned int const,InstableSprayActivity::StageData>(v8);
      stage_data = (std::tuple_element<1,const std::pair<unsigned int const,InstableSprayActivity::StageData> >::type *)std::get<1ul,unsigned int const,InstableSprayActivity::StageData>(v8);
      stage_info = proto::InstableSprayDetailInfo::add_stage_info_list(detail_info);
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InstableSprayStageInfo::set_stage_id(stage_info, *stage_id);
      if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::InstableSprayStageInfo::set_max_score(stage_info, stage_data->max_score);
      if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)stage_data + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load1(&stage_data->is_finished);
      }
      proto::InstableSprayStageInfo::set_is_finished(stage_info, stage_data->is_finished);
      v3 = proto::InstableSprayStageInfo::mutable_team_info_list(stage_info);
      common::tools::MiscUtils::vectorToRepeated<InstableSprayDungeonTeamInfo,proto::InstableSprayTeamInfo,int (InstableSprayDungeonTeamInfo::*)(proto::InstableSprayTeamInfo&)const>(
        &stage_data->team_info_vec,
        v3,
        (int (*)(const InstableSprayDungeonTeamInfo *, proto::InstableSprayTeamInfo *))InstableSprayDungeonTeamInfo::toClient);
      std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 90: range 000000001452E5A4-000000001452E5FA
int32_t __cdecl InstableSprayActivity::init(InstableSprayActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    InstableSprayActivity::registerObserver(this);
  return 0;
};

// Line 99: range 000000001452E5FC-000000001452E616
void __cdecl InstableSprayActivity::onStart(InstableSprayActivity *const this)
{
  InstableSprayActivity::registerObserver(this);
};

// Line 104: range 000000001452E618-000000001452E67A
void __cdecl InstableSprayActivity::onLogin(InstableSprayActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
    InstableSprayActivity::recallInDungeonAvatars(this);
  BaseActivity::onLogin(this);
};

// Line 113: range 000000001452E67C-000000001452E85E
void __cdecl InstableSprayActivity::onPreStart(InstableSprayActivity *const this)
{
  const unsigned int *v1; // rcx
  InstableSprayActivity::StageData *v2; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >,bool> v3; // rax
  bool v4; // bl
  common::milog::MiLogStream *v5; // rax
  std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-68h] BYREF
  const std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig> *__for_range; // [rsp+20h] [rbp-60h]
  const std::pair<unsigned int const,data::InstableSprayStageExcelConfig> *v9; // [rsp+28h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,data::InstableSprayStageExcelConfig> >::type *stage_id; // [rsp+30h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InstableSprayStageExcelConfig> >::type *_; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v12; // [rsp+40h] [rbp-40h] BYREF
  InstableSprayActivity::StageData v13; // [rsp+50h] [rbp-30h] BYREF

  std::map<unsigned int,InstableSprayActivity::StageData>::clear(&this->stage_data_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_instable_spray_mgr.instable_spray_stage_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::InstableSprayStageExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false>::operator*(&__for_begin);
    stage_id = std::get<0ul,unsigned int const,data::InstableSprayStageExcelConfig>(v9);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::InstableSprayStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::InstableSprayStageExcelConfig>(v9);
    v13.max_score = 0;
    v13.is_open = 0;
    v13.is_finished = 0;
    memset(&v13.team_info_vec, 0, sizeof(v13.team_info_vec));
    std::vector<InstableSprayDungeonTeamInfo>::vector(&v13.team_info_vec);
    v3 = std::map<unsigned int,InstableSprayActivity::StageData>::emplace<unsigned int const&,InstableSprayActivity::StageData>(
           &this->stage_data_map_,
           stage_id,
           &v13,
           v1,
           v2);
    v4 = !v3.second;
    InstableSprayActivity::StageData::~StageData(&v13);
    if ( v4 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/instable_spray_activity.cpp",
        "onPreStart",
        119);
      v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)&v13,
             (const char (*)[21])"duplicate stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v13);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InstableSprayStageExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 125: range 000000001452E860-000000001452E880
void __cdecl InstableSprayActivity::onClear(InstableSprayActivity *const this)
{
  std::map<unsigned int,InstableSprayActivity::StageData>::clear(&this->stage_data_map_);
};

// Line 130: range 000000001452E882-000000001452ED82
int32_t __cdecl InstableSprayActivity::execAction(
        InstableSprayActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // r13
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::pointer v10; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v12; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Self __y; // [rsp+10h] [rbp-B0h] BYREF
  InstableSprayActivity::StageData *stage_data; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:141 64 8 8 iter:147";
  *(_QWORD *)(v2 + 16) = InstableSprayActivity::execAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_INSTABLE_SPRAY_STAGE )
  {
    if ( std::vector<std::string>::empty(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/instable_spray_activity.cpp",
        "execAction",
        138);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v15, (const char (*)[18])"params not enough");
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
    }
    else
    {
      *(_DWORD *)(v2 + 48) = 0;
      v6 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v6, (unsigned int *)(v2 + 48), 1) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/instable_spray_activity.cpp",
          "execAction",
          144);
        v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v15,
               (const char (*)[18])"strToNum failed: ");
        v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v8);
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = -1;
      }
      else
      {
        *(std::map<unsigned int,InstableSprayActivity::StageData>::iterator *)(v2 + 64) = std::map<unsigned int,InstableSprayActivity::StageData>::find(
                                                                                            &this->stage_data_map_,
                                                                                            (const std::map<unsigned int,InstableSprayActivity::StageData>::key_type *)(v2 + 48));
        __y._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::end(&this->stage_data_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Self *)(v2 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/instable_spray_activity.cpp",
            "execAction",
            150);
          v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                 &v15,
                 (const char (*)[28])"stage not found, stage_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v15);
          result = -1;
        }
        else
        {
          v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> > *const)(v2 + 64));
          stage_data = &v10->second;
          p_is_open = &v10->second.is_open;
          if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_open);
          }
          if ( stage_data->is_open )
          {
            common::milog::MiLogStream::create(
              &v15,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/instable_spray_activity.cpp",
              "execAction",
              156);
            v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v15,
                    (const char (*)[34])"stage is already open, stage_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v15);
            result = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)stage_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_open >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_store1(&stage_data->is_open);
            }
            stage_data->is_open = 1;
            BaseActivity::notifyClientData(this, 0);
            result = 0;
          }
        }
      }
    }
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
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

// Line 172: range 000000001452EDD6-000000001452EE73
bool __cdecl InstableSprayActivity::checkCondIsMeet(
        InstableSprayActivity *const this,
        const data::NewActivityCond *cond)
{
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Base_ptr M_node; // rbx
  std::map<unsigned int,InstableSprayActivity::StageData>::iterator v3; // rax
  InstableSprayActivity::checkCondIsMeet::<lambda(const std::pair<unsigned int const, InstableSprayActivity::StageData>&)> v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type != NEW_ACTIVITY_COND_FINISH_ANY_INSTABLE_SPRAY_CHALLENGE_STAGE )
    return BaseActivity::checkCondIsMeet(this, cond);
  M_node = std::map<unsigned int,InstableSprayActivity::StageData>::end(&this->stage_data_map_)._M_node;
  v3._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::begin(&this->stage_data_map_)._M_node;
  return std::any_of<std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>,InstableSprayActivity::checkCondIsMeet(data::NewActivityCond const&)::{lambda(std::pair<unsigned int const,InstableSprayActivity::StageData> const&)#1}>(
           v3,
           (std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >)M_node,
           v4);
};

// Line 177: range 000000001452ED84-000000001452EDD5
bool __cdecl InstableSprayActivity::checkCondIsMeet(data::NewActivityCond const&)::{lambda(std::pair<unsigned int const,InstableSprayActivity::StageData> const&)#1}::operator()(
        const InstableSprayActivity::checkCondIsMeet::<lambda(const std::pair<unsigned int const, InstableSprayActivity::StageData>&)> *const __closure,
        const std::pair<unsigned int const,InstableSprayActivity::StageData> *p)
{
  if ( *(_BYTE *)(((unsigned __int64)&p->second.is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)p + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&p->second.is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&p->second.is_finished);
  }
  return p->second.is_finished;
};

// Line 190: range 000000001452EE74-000000001452EF95
void __cdecl InstableSprayActivity::clearByGm(InstableSprayActivity *const this)
{
  bool *p_is_open; // rax
  std::map<unsigned int,InstableSprayActivity::StageData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,InstableSprayActivity::StageData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,InstableSprayActivity::StageData> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,InstableSprayActivity::StageData> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,InstableSprayActivity::StageData> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,InstableSprayActivity::StageData> >::type *stage_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->stage_data_map_;
  __for_begin._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::begin(&this->stage_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::end(&this->stage_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,InstableSprayActivity::StageData>(__in);
    stage_data = std::get<1ul,unsigned int const,InstableSprayActivity::StageData>(__in);
    p_is_open = &stage_data->is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_open);
    }
    stage_data->is_open = 0;
    if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(stage_data);
    }
    stage_data->max_score = 0;
    std::vector<InstableSprayDungeonTeamInfo>::clear(&stage_data->team_info_vec);
    std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator++(&__for_begin);
  }
};

// Line 200: range 000000001452EF96-000000001452F1C2
void __fastcall InstableSprayActivity::openStageByGm(InstableSprayActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::pointer v6; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:199 64 8 8 iter:201";
  *(_QWORD *)(v2 + 16) = InstableSprayActivity::openStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,InstableSprayActivity::StageData>::iterator *)(v2 + 64) = std::map<unsigned int,InstableSprayActivity::StageData>::find(
                                                                                      &this->stage_data_map_,
                                                                                      (const std::map<unsigned int,InstableSprayActivity::StageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "openStageByGm",
      204);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v9,
           (const char (*)[28])"stage not found, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> > *const)(v2 + 64));
    p_is_open = &v6->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_open);
    }
    v6->second.is_open = 1;
    BaseActivity::notifyClientData(this, 0);
  }
  if ( v10 == (char *)v2 )
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

// Line 212: range 000000001452F1C4-000000001452F2AD
void __cdecl InstableSprayActivity::openAllStageByGm(InstableSprayActivity *const this)
{
  bool *p_is_open; // rax
  std::map<unsigned int,InstableSprayActivity::StageData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,InstableSprayActivity::StageData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,InstableSprayActivity::StageData> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,InstableSprayActivity::StageData> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,InstableSprayActivity::StageData> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,InstableSprayActivity::StageData> >::type *stage_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->stage_data_map_;
  __for_begin._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::begin(&this->stage_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::end(&this->stage_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,InstableSprayActivity::StageData>(__in);
    stage_data = std::get<1ul,unsigned int const,InstableSprayActivity::StageData>(__in);
    p_is_open = &stage_data->is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_open);
    }
    stage_data->is_open = 1;
    std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
};

// Line 221: range 000000001452F3EE-000000001452FBDD
int32_t __cdecl InstableSprayActivity::enterInstableSprayDungeon(
        InstableSprayActivity *const this,
        const proto::InstableSprayEnterDungeonReq *req,
        proto::InstableSprayEnterDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo> *v6; // rax
  int v7; // r14d
  const google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo> *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // edx
  const google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo> *v11; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::vector<InstableSprayDungeonAvatarInfo> *v13; // rax
  InstableSprayActivity::enterInstableSprayDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> v14; // si
  ActivityInstableSprayExcelConfigMgr *p_activity_instable_spray_mgr; // r14
  uint32_t v16; // eax
  common::milog::MiLogStream *v18; // r14
  google::protobuf::uint32 *v19; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+30h] [rbp-170h] BYREF
  int ret; // [rsp+34h] [rbp-16Ch]
  std::tuple_element<0,std::pair<std::shared_ptr<DungeonScene>,int> >::type *_; // [rsp+38h] [rbp-168h]
  std::tuple_element<1,std::pair<std::shared_ptr<DungeonScene>,int> >::type *enter_ret; // [rsp+40h] [rbp-160h]
  const data::InstableSprayStageExcelConfig *stage_config_ptr; // [rsp+48h] [rbp-158h]
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-150h] BYREF
  std::pair<std::shared_ptr<DungeonScene>,int> __in; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v30; // [rsp+80h] [rbp-120h] BYREF
  InstableSprayActivity::EnterDungeonParam p_param; // [rsp+A0h] [rbp-100h] BYREF
  char v32[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 scene_ptr:241 64 24 19 avatar_info_vec:248";
  *(_QWORD *)(v3 + 16) = InstableSprayActivity::enterInstableSprayDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  v6 = proto::InstableSprayEnterDungeonReq::avatar_info_list(req);
  if ( google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo>::empty(v6) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "enterInstableSprayDungeon",
      225);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v30,
      (const char (*)[26])"avatar info list is empty");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = -1;
  }
  else
  {
    v8 = proto::InstableSprayEnterDungeonReq::avatar_info_list(req);
    if ( (unsigned int)google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo>::size(v8) <= 4 )
    {
      v10 = proto::InstableSprayEnterDungeonReq::stage_id(req);
      ret = InstableSprayActivity::checkCanEnterDungeon(this, v10);
      if ( ret )
      {
        v7 = ret;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/instable_spray_activity.cpp",
            "enterInstableSprayDungeon",
            244);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v30, (const char (*)[18])off_253F7420);
          common::milog::MiLogStream::~MiLogStream(&v30);
          v7 = -1;
        }
        else
        {
          std::vector<InstableSprayDungeonAvatarInfo>::vector((std::vector<InstableSprayDungeonAvatarInfo> *const)(v3 + 64));
          v11 = proto::InstableSprayEnterDungeonReq::avatar_info_list(req);
          common::tools::MiscUtils::fromRepeated<InstableSprayDungeonAvatarInfo,proto::InstableSprayAvatarInfo,int (InstableSprayDungeonAvatarInfo::*)(proto::InstableSprayAvatarInfo const&)>(
            (std::vector<InstableSprayDungeonAvatarInfo> *)(v3 + 64),
            v11,
            (int (*)(InstableSprayDungeonAvatarInfo *, const proto::InstableSprayAvatarInfo *))InstableSprayDungeonAvatarInfo::fromClient);
          if ( InstableSprayActivity::checkHasDuplicatedAvatar(
                 this,
                 (const std::vector<InstableSprayDungeonAvatarInfo> *)(v3 + 64)) )
          {
            v7 = -1;
          }
          else
          {
            p_param.stage_id = proto::InstableSprayEnterDungeonReq::stage_id(req);
            p_param.difficulty = proto::InstableSprayEnterDungeonReq::difficulty(req);
            v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
            p_param.cur_scene_id = Scene::getSceneId(v12);
            v13 = std::move<std::vector<InstableSprayDungeonAvatarInfo> &>((std::vector<InstableSprayDungeonAvatarInfo> *)(v3 + 64));
            v14.gap0[0] = (char)v13;
            std::vector<InstableSprayDungeonAvatarInfo>::vector(&p_param.avatar_info_vec, v13);
            std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<InstableSprayActivity::enterInstableSprayDungeon(proto::InstableSprayEnterDungeonReq const&,proto::InstableSprayEnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
              &p_param.callback,
              v14);
            InstableSprayActivity::internalEnterDungeon(&__in, this, &p_param);
            InstableSprayActivity::EnterDungeonParam::~EnterDungeonParam(&p_param);
            _ = std::get<0ul,std::shared_ptr<DungeonScene>,int>(&__in);
            enter_ret = std::get<1ul,std::shared_ptr<DungeonScene>,int>(&__in);
            if ( *(_BYTE *)(((unsigned __int64)enter_ret >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)enter_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_ret >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( *enter_ret )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/instable_spray_activity.cpp",
                "enterInstableSprayDungeon",
                275);
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v30,
                (const char (*)[21])"enter dungeon failed");
              common::milog::MiLogStream::~MiLogStream(&v30);
              if ( *(_BYTE *)(((unsigned __int64)enter_ret >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)enter_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_ret >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v7 = *enter_ret;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v28);
              p_activity_instable_spray_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.activity_instable_spray_mgr;
              v16 = proto::InstableSprayEnterDungeonReq::stage_id(req);
              stage_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig(
                                   p_activity_instable_spray_mgr,
                                   v16);
              std::shared_ptr<Config>::~shared_ptr(&v28);
              if ( !stage_config_ptr || std::vector<unsigned int>::empty(&stage_config_ptr->level_id_list) )
              {
                common::milog::MiLogStream::create(
                  &v30,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/instable_spray_activity.cpp",
                  "enterInstableSprayDungeon",
                  283);
                v18 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        &v30,
                        (const char (*)[44])"stage or level config not found, stage_id: ");
                val = proto::InstableSprayEnterDungeonReq::stage_id(req);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
                common::milog::MiLogStream::~MiLogStream(&v30);
                v7 = -1;
              }
              else
              {
                v19 = (google::protobuf::uint32 *)std::vector<unsigned int>::front(&stage_config_ptr->level_id_list);
                if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto::InstableSprayEnterDungeonRsp::set_level_id(rsp_0, *v19);
                v7 = 0;
              }
            }
            std::pair<std::shared_ptr<DungeonScene>,int>::~pair(&__in);
          }
          std::vector<InstableSprayDungeonAvatarInfo>::~vector((std::vector<InstableSprayDungeonAvatarInfo> *const)(v3 + 64));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "enterInstableSprayDungeon",
        231);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v30,
             (const char (*)[33])"avatar info list is larger than ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        &PlayerAvatarComp::MAX_AVATAR_NUM_IN_TEAM);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v7 = -1;
    }
  }
  result = v7;
  if ( v32 == (char *)v3 )
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

// Line 263: range 000000001452F2AE-000000001452F3ED
void __cdecl InstableSprayActivity::enterInstableSprayDungeon(proto::InstableSprayEnterDungeonReq const&,proto::InstableSprayEnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const InstableSprayActivity::enterInstableSprayDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<InstableSprayActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 activity_ptr:265";
  *(_QWORD *)(v4 + 16) = InstableSprayActivity::enterInstableSprayDungeon(proto::InstableSprayEnterDungeonReq const&,proto::InstableSprayEnterDungeonRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<InstableSprayActivity>((PlayerActivityComp *const)(v4 + 32));
  if ( std::operator!=<InstableSprayActivity>((const std::shared_ptr<InstableSprayActivity> *)(v4 + 32), 0LL) )
  {
    v7 = std::__shared_ptr_access<InstableSprayActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<InstableSprayActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    InstableSprayActivity::onDungeonSettle(v7, dungeon_scene, notify);
  }
  std::shared_ptr<InstableSprayActivity>::~shared_ptr((std::shared_ptr<InstableSprayActivity> *const)(v4 + 32));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 292: range 000000001452FC28-0000000014530D12
int32_t __cdecl InstableSprayActivity::switchTeam(
        InstableSprayActivity *const this,
        const proto::InstableSpraySwitchTeamReq *req,
        proto::InstableSpraySwitchTeamRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo> *v7; // rax
  const google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo> *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo> *v11; // rax
  uint32_t round; // edx
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v14; // r15
  unsigned __int64 v15; // rax
  int v16; // r15d
  unsigned __int64 *M_current; // r15
  std::vector<long unsigned int>::iterator v18; // rax
  PlayerAvatarComp *v20; // r15
  unsigned __int64 v21; // rax
  std::vector<long unsigned int> *v22; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  Vector3 *p_born_rot; // r15
  Vector3 *p_born_pos; // r14
  Scene *v28; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::vector<unsigned int>::size_type v30; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  google::protobuf::uint32 *v35; // rdx
  DungeonScene *v36; // r14
  std::remove_reference<InstableSprayDungeonContext&>::type *v37; // rax
  int32_t result; // eax
  PlayerSceneComp *mem_func; // [rsp+0h] [rbp-2C0h]
  unsigned int val; // [rsp+30h] [rbp-290h] BYREF
  int ret_0; // [rsp+34h] [rbp-28Ch]
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > v43; // [rsp+38h] [rbp-288h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __i; // [rsp+40h] [rbp-280h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > __first; // [rsp+48h] [rbp-278h] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > __last; // [rsp+50h] [rbp-270h] BYREF
  InstableSprayDungeonContext *context; // [rsp+58h] [rbp-268h]
  std::tuple_element<0,std::pair<std::vector<std::shared_ptr<Avatar>>,int> >::type *avatar_vec; // [rsp+60h] [rbp-260h]
  std::tuple_element<1,std::pair<std::vector<std::shared_ptr<Avatar>>,int> >::type *ret; // [rsp+68h] [rbp-258h]
  const SceneScriptConfig *script_config_ptr; // [rsp+70h] [rbp-250h]
  const data::InstableSprayStageExcelConfig *stage_config_ptr; // [rsp+78h] [rbp-248h]
  std::shared_ptr<Scene> p_dest_scene_ptr; // [rsp+80h] [rbp-240h] BYREF
  std::vector<InstableSprayDungeonAvatarInfo> p_avatar_info_vec; // [rsp+90h] [rbp-230h] BYREF
  std::pair<std::vector<std::shared_ptr<Avatar>>,int> __in; // [rsp+B0h] [rbp-210h] BYREF
  common::milog::MiLogStream v55; // [rsp+D0h] [rbp-1F0h] BYREF
  TransferReason p_reason; // [rsp+F0h] [rbp-1D0h] BYREF
  char v57[400]; // [rsp+130h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 12 stage_id:324 64 4 9 round:325 80 16 21 dungeon_scene_ptr:306 112 24 16 cur_team_vec:34"
                        "1 176 24 12 guid_vec:347 240 80 15 context_opt:312";
  *(_QWORD *)(v4 + 16) = InstableSprayActivity::switchTeam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = -218959360;
  v6[536862725] = 62194;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862730] = -202116109;
  v7 = proto::InstableSpraySwitchTeamReq::avatar_info_list(req);
  if ( google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo>::empty(v7) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "switchTeam",
      296);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v55,
      (const char (*)[26])"avatar info list is empty");
    common::milog::MiLogStream::~MiLogStream(&v55);
    v3 = -1;
  }
  else
  {
    v8 = proto::InstableSpraySwitchTeamReq::avatar_info_list(req);
    if ( (unsigned int)google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo>::size(v8) <= 4 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v4 + 80));
      if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/instable_spray_activity.cpp",
          "switchTeam",
          309);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v55,
          (const char (*)[27])"scene is not dungeon scene");
        common::milog::MiLogStream::~MiLogStream(&v55);
        v3 = -1;
      }
      else
      {
        v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
          (std::optional<InstableSprayDungeonContext> *)(v4 + 240),
          v10);
        if ( !std::optional<InstableSprayDungeonContext>::has_value((const std::optional<InstableSprayDungeonContext> *const)(v4 + 240)) )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/instable_spray_activity.cpp",
            "switchTeam",
            315);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v55, (const char (*)[42])off_253F7620);
          common::milog::MiLogStream::~MiLogStream(&v55);
          v3 = -1;
        }
        else
        {
          context = std::optional<InstableSprayDungeonContext>::value((std::optional<InstableSprayDungeonContext> *const)(v4 + 240));
          if ( *(char *)(((unsigned __int64)&context->is_need_switch_team >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&context->is_need_switch_team);
          if ( !context->is_need_switch_team )
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/instable_spray_activity.cpp",
              "switchTeam",
              321);
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v55,
              (const char (*)[20])"already switch team");
            common::milog::MiLogStream::~MiLogStream(&v55);
            v3 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v4 + 48) = context->stage_id;
            if ( *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v4 + 64) = context->round;
            v11 = proto::InstableSpraySwitchTeamReq::avatar_info_list(req);
            common::tools::MiscUtils::fromRepeated<InstableSprayDungeonAvatarInfo,proto::InstableSprayAvatarInfo,int (InstableSprayDungeonAvatarInfo::*)(proto::InstableSprayAvatarInfo const&)>(
              &context->avatar_info_vec,
              v11,
              (int (*)(InstableSprayDungeonAvatarInfo *, const proto::InstableSprayAvatarInfo *))InstableSprayDungeonAvatarInfo::fromClient);
            if ( InstableSprayActivity::checkHasDuplicatedAvatar(this, &context->avatar_info_vec) )
            {
              v3 = -1;
            }
            else
            {
              InstableSprayActivity::createAvatars(&__in, this, context);
              avatar_vec = std::get<0ul,std::vector<std::shared_ptr<Avatar>>,int>(&__in);
              ret = std::get<1ul,std::vector<std::shared_ptr<Avatar>>,int>(&__in);
              if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( *ret )
              {
                v3 = *ret;
              }
              else
              {
                std::vector<InstableSprayDungeonAvatarInfo>::vector(&p_avatar_info_vec, &context->avatar_info_vec);
                if ( *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                round = context->round;
                if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                InstableSprayActivity::recordSelectedTeamInfo(this, context->stage_id, round, &p_avatar_info_vec);
                std::vector<InstableSprayDungeonAvatarInfo>::~vector(&p_avatar_info_vec);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                AvatarComp = Player::getAvatarComp(this->player_);
                PlayerAvatarComp::getMyAvatarTeamInSceneTeam((std::vector<long unsigned int> *)(v4 + 112), AvatarComp);
                if ( std::vector<std::shared_ptr<Avatar>>::empty(avatar_vec) )
                  goto LABEL_53;
                InstableSprayActivity::setPlayerToBornPosition(this, (const DungeonScenePtr *)(v4 + 80));
                InstableSprayActivity::avatarVecToGuidVec((std::vector<long unsigned int> *)(v4 + 176), avatar_vec);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v14 = Player::getAvatarComp(this->player_);
                std::shared_ptr<Scene>::shared_ptr<DungeonScene,void>(
                  &p_dest_scene_ptr,
                  (const std::shared_ptr<DungeonScene> *)(v4 + 80));
                v15 = (unsigned __int64)std::vector<unsigned long>::front((std::vector<long unsigned int> *const)(v4 + 176));
                if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
                  v15 = __asan_report_load8();
                ret_0 = PlayerAvatarComp::setSceneTeamAndAddToScene(
                          v14,
                          (const std::vector<long unsigned int> *)(v4 + 176),
                          *(_QWORD *)v15,
                          &p_dest_scene_ptr,
                          CHANGE_SCENE_TEAM_REASON_SUMO_ACTIVITY_SWITCH_TEAM);
                std::shared_ptr<Scene>::~shared_ptr(&p_dest_scene_ptr);
                if ( ret_0 )
                {
                  common::milog::MiLogStream::create(
                    &v55,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/instable_spray_activity.cpp",
                    "switchTeam",
                    352);
                  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v55,
                    (const char (*)[19])"switch team failed");
                  common::milog::MiLogStream::~MiLogStream(&v55);
                  v3 = ret_0;
                  v16 = 0;
                }
                else
                {
                  __i._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v4 + 112))._M_current;
                  __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator<unsigned long *>(
                    &__last,
                    &__i);
                  M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v4 + 112))._M_current;
                  v18._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v4 + 112))._M_current;
                  v43._M_current = std::remove_if<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>,InstableSprayActivity::switchTeam(proto::InstableSpraySwitchTeamReq const&,proto::InstableSpraySwitchTeamRsp &)::{lambda(unsigned long const&)#1}>(
                                     v18,
                                     (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current,
                                     (InstableSprayActivity::switchTeam::<lambda(const uint64_t&)>)(v4 + 176))._M_current;
                  __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator<unsigned long *>(
                    &__first,
                    &v43);
                  std::vector<unsigned long>::erase((std::vector<long unsigned int> *const)(v4 + 112), __first, __last);
                  if ( !std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v4 + 112))
                    && !std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v4 + 176)) )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v20 = Player::getAvatarComp(this->player_);
                    v21 = (unsigned __int64)std::vector<unsigned long>::front((std::vector<long unsigned int> *const)(v4 + 176));
                    if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                      v21 = __asan_report_load8();
                    PlayerAvatarComp::delInformalAvatarBatch(
                      v20,
                      (const std::vector<long unsigned int> *)(v4 + 112),
                      *(_QWORD *)v21,
                      1);
                  }
                  v22 = std::move<std::vector<unsigned long> &>((std::vector<long unsigned int> *)(v4 + 176));
                  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)&p_avatar_info_vec, v22);
                  InstableSprayActivity::setInDungeonAvatars(this, (std::vector<long unsigned int> *)&p_avatar_info_vec);
                  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)&p_avatar_info_vec);
                  v16 = 1;
                }
                std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 176));
                if ( v16 == 1 )
                {
LABEL_53:
                  v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
                  script_config_ptr = Scene::getScriptConfig((const Scene *const)v23);
                  if ( script_config_ptr )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    mem_func = Player::getSceneComp(this->player_);
                    memset(&p_reason, 0, sizeof(p_reason));
                    TransferReason::TransferReason(&p_reason);
                    p_born_rot = &script_config_ptr->born_rot;
                    p_born_pos = &script_config_ptr->born_pos;
                    v28 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
                    LOBYTE(p_born_pos) = PlayerSceneComp::jumpToScene(
                                           mem_func,
                                           v28,
                                           p_born_pos,
                                           p_born_rot,
                                           0,
                                           &p_reason) != 0;
                    TransferReason::~TransferReason(&p_reason);
                    if ( (_BYTE)p_born_pos )
                    {
                      common::milog::MiLogStream::create(
                        &v55,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/instable_spray_activity.cpp",
                        "switchTeam",
                        381);
                      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        &v55,
                        (const char (*)[19])"jumpToScene failed");
                      common::milog::MiLogStream::~MiLogStream(&v55);
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v55,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/activity/instable_spray_activity.cpp",
                      "switchTeam",
                      375);
                    v24 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                            &v55,
                            (const char (*)[43])"scene script config is nullptr, scene_id: ");
                    v25 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
                    val = Scene::getSceneId((const Scene *const)v25);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
                    common::milog::MiLogStream::~MiLogStream(&v55);
                  }
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&p_dest_scene_ptr);
                  v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_dest_scene_ptr);
                  stage_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig(
                                       &v29->design_config.txt_config_mgr.activity_instable_spray_mgr,
                                       *(_DWORD *)(v4 + 48));
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_dest_scene_ptr);
                  if ( !stage_config_ptr
                    || (v30 = *(unsigned int *)(v4 + 64),
                        v30 >= std::vector<unsigned int>::size(&stage_config_ptr->level_id_list)) )
                  {
                    common::milog::MiLogStream::create(
                      &v55,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/activity/instable_spray_activity.cpp",
                      "switchTeam",
                      389);
                    v32 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                            &v55,
                            (const char (*)[44])"stage or level config not found, stage_id: ");
                    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v32,
                            (const unsigned int *)(v4 + 48));
                    v34 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                            v33,
                            (const char (*)[10])", round: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v34,
                      (const unsigned int *)(v4 + 64));
                    common::milog::MiLogStream::~MiLogStream(&v55);
                    v3 = -1;
                  }
                  else
                  {
                    v35 = (google::protobuf::uint32 *)std::vector<unsigned int>::operator[](
                                                        &stage_config_ptr->level_id_list,
                                                        *(unsigned int *)(v4 + 64));
                    if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    proto::InstableSpraySwitchTeamRsp::set_level_id(rsp_0, *v35);
                    if ( *(char *)(((unsigned __int64)&context->is_need_switch_team >> 3) + 0x7FFF8000) < 0 )
                      __asan_report_store1(&context->is_need_switch_team);
                    context->is_need_switch_team = 0;
                    v36 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
                    v37 = std::move<InstableSprayDungeonContext &>(context);
                    DungeonScene::setDungeonExtraData<InstableSprayDungeonContext>(v36, v37);
                    v3 = 0;
                  }
                }
                std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 112));
              }
              std::pair<std::vector<std::shared_ptr<Avatar>>,int>::~pair(&__in);
            }
          }
        }
        std::optional<InstableSprayDungeonContext>::~optional((std::optional<InstableSprayDungeonContext> *const)(v4 + 240));
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "switchTeam",
        302);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v55,
             (const char (*)[33])"avatar info list is larger than ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        &PlayerAvatarComp::MAX_AVATAR_NUM_IN_TEAM);
      common::milog::MiLogStream::~MiLogStream(&v55);
      v3 = -1;
    }
  }
  result = v3;
  if ( v57 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 358: range 000000001452FBDE-000000001452FC26
bool __cdecl InstableSprayActivity::switchTeam(proto::InstableSpraySwitchTeamReq const&,proto::InstableSpraySwitchTeamRsp &)::{lambda(unsigned long const&)#1}::operator()(
        const InstableSprayActivity::switchTeam::<lambda(const uint64_t&)> *const __closure,
        const uint64_t *guid)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return common::tools::MiscUtils::isContains<unsigned long>(__closure->__guid_vec, guid);
};

// Line 401: range 0000000014530D14-0000000014531862
int32_t __cdecl InstableSprayActivity::restartInstableSprayDungeon(
        InstableSprayActivity *const this,
        const proto::InstableSprayRestartDungeonReq *req,
        proto::InstableSprayRestartDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo> *v6; // rax
  int32_t v7; // r14d
  const google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo> *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo> *v11; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Avatar *v13; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::vector<InstableSprayDungeonAvatarInfo> *v16; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *DungeonSettleCallback; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  ActivityInstableSprayExcelConfigMgr *p_activity_instable_spray_mgr; // rcx
  common::milog::MiLogStream *v24; // rax
  google::protobuf::uint32 *v25; // rdx
  int32_t result; // eax
  int ret; // [rsp+2Ch] [rbp-224h]
  std::vector<InstableSprayDungeonAvatarInfo>::iterator __for_begin; // [rsp+30h] [rbp-220h] BYREF
  std::vector<InstableSprayDungeonAvatarInfo>::iterator __for_end; // [rsp+38h] [rbp-218h] BYREF
  InstableSprayDungeonContext *context; // [rsp+40h] [rbp-210h]
  std::vector<InstableSprayDungeonAvatarInfo> *__for_range; // [rsp+48h] [rbp-208h]
  std::tuple_element<0,std::pair<std::shared_ptr<DungeonScene>,int> >::type *_; // [rsp+50h] [rbp-200h]
  std::tuple_element<1,std::pair<std::shared_ptr<DungeonScene>,int> >::type *enter_ret; // [rsp+58h] [rbp-1F8h]
  const data::InstableSprayStageExcelConfig *stage_config_ptr; // [rsp+60h] [rbp-1F0h]
  const InstableSprayDungeonAvatarInfo *avatar_info; // [rsp+68h] [rbp-1E8h]
  std::pair<std::shared_ptr<DungeonScene>,int> __in; // [rsp+70h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v38; // [rsp+90h] [rbp-1C0h] BYREF
  InstableSprayActivity::EnterDungeonParam p_param; // [rsp+B0h] [rbp-1A0h] BYREF
  char v40[336]; // [rsp+100h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 16 21 dungeon_scene_ptr:420 80 16 14 avatar_ptr:446 112 24 19 avatar_info_vec:434 176 80 15"
                        " context_opt:426";
  *(_QWORD *)(v3 + 16) = InstableSprayActivity::restartInstableSprayDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862728] = -202116109;
  v6 = proto::InstableSprayRestartDungeonReq::avatar_info_list(req);
  if ( google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo>::empty(v6) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "restartInstableSprayDungeon",
      405);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v38,
      (const char (*)[26])"avatar info list is empty");
    common::milog::MiLogStream::~MiLogStream(&v38);
    v7 = -1;
  }
  else
  {
    v8 = proto::InstableSprayRestartDungeonReq::avatar_info_list(req);
    if ( (unsigned int)google::protobuf::RepeatedPtrField<proto::InstableSprayAvatarInfo>::size(v8) <= 4 )
    {
      ret = InstableSprayActivity::checkCanRestartDungeon(this);
      if ( ret )
      {
        v7 = ret;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v3 + 48));
        if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 48), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/instable_spray_activity.cpp",
            "restartInstableSprayDungeon",
            423);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v38, (const char (*)[31])off_253F78A0);
          common::milog::MiLogStream::~MiLogStream(&v38);
          v7 = -1;
        }
        else
        {
          v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
          DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
            (std::optional<InstableSprayDungeonContext> *)(v3 + 176),
            v10);
          if ( !std::optional<InstableSprayDungeonContext>::has_value((const std::optional<InstableSprayDungeonContext> *const)(v3 + 176)) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/instable_spray_activity.cpp",
              "restartInstableSprayDungeon",
              429);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v38, (const char (*)[31])off_253F78A0);
            common::milog::MiLogStream::~MiLogStream(&v38);
            v7 = -1;
          }
          else
          {
            context = std::optional<InstableSprayDungeonContext>::value((std::optional<InstableSprayDungeonContext> *const)(v3 + 176));
            std::vector<InstableSprayDungeonAvatarInfo>::vector((std::vector<InstableSprayDungeonAvatarInfo> *const)(v3 + 112));
            v11 = proto::InstableSprayRestartDungeonReq::avatar_info_list(req);
            common::tools::MiscUtils::fromRepeated<InstableSprayDungeonAvatarInfo,proto::InstableSprayAvatarInfo,int (InstableSprayDungeonAvatarInfo::*)(proto::InstableSprayAvatarInfo const&)>(
              (std::vector<InstableSprayDungeonAvatarInfo> *)(v3 + 112),
              v11,
              (int (*)(InstableSprayDungeonAvatarInfo *, const proto::InstableSprayAvatarInfo *))InstableSprayDungeonAvatarInfo::fromClient);
            if ( InstableSprayActivity::checkHasDuplicatedAvatar(
                   this,
                   (const std::vector<InstableSprayDungeonAvatarInfo> *)(v3 + 112)) )
            {
              v7 = -1;
            }
            else
            {
              __for_range = &context->avatar_info_vec;
              __for_begin._M_current = std::vector<InstableSprayDungeonAvatarInfo>::begin(&context->avatar_info_vec)._M_current;
              __for_end._M_current = std::vector<InstableSprayDungeonAvatarInfo>::end(&context->avatar_info_vec)._M_current;
              while ( __gnu_cxx::operator!=<InstableSprayDungeonAvatarInfo *,std::vector<InstableSprayDungeonAvatarInfo>>(
                        &__for_begin,
                        &__for_end) )
              {
                avatar_info = __gnu_cxx::__normal_iterator<InstableSprayDungeonAvatarInfo *,std::vector<InstableSprayDungeonAvatarInfo>>::operator*(&__for_begin);
                InstableSprayActivity::findInDungeonAvatar(
                  (InstableSprayActivity *const)(v3 + 80),
                  (const InstableSprayDungeonAvatarInfo *)this);
                if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 80), 0LL) )
                {
                  v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                  if ( Creature::getLifeState(v12) == LIFE_DEAD )
                  {
                    v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                    Avatar::setLifeAlive(v13, 0x70u, 0LL, 1);
                  }
                  v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                  Creature::setCurHpFull(v14, 1);
                }
                std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 80));
                __gnu_cxx::__normal_iterator<InstableSprayDungeonAvatarInfo *,std::vector<InstableSprayDungeonAvatarInfo>>::operator++(&__for_begin);
              }
              if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              p_param.stage_id = context->stage_id;
              if ( *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              p_param.difficulty = context->difficulty;
              v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
              p_param.cur_scene_id = Scene::getSceneId((const Scene *const)v15);
              v16 = std::move<std::vector<InstableSprayDungeonAvatarInfo> &>((std::vector<InstableSprayDungeonAvatarInfo> *)(v3 + 112));
              std::vector<InstableSprayDungeonAvatarInfo>::vector(&p_param.avatar_info_vec, v16);
              v17 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
              DungeonSettleCallback = DungeonScene::getDungeonSettleCallback(v17);
              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function(
                &p_param.callback,
                DungeonSettleCallback);
              InstableSprayActivity::internalEnterDungeon(&__in, this, &p_param);
              InstableSprayActivity::EnterDungeonParam::~EnterDungeonParam(&p_param);
              _ = std::get<0ul,std::shared_ptr<DungeonScene>,int>(&__in);
              enter_ret = std::get<1ul,std::shared_ptr<DungeonScene>,int>(&__in);
              if ( *(_BYTE *)(((unsigned __int64)enter_ret >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)enter_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_ret >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( *enter_ret )
              {
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/instable_spray_activity.cpp",
                  "restartInstableSprayDungeon",
                  468);
                v19 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        &v38,
                        (const char (*)[35])"restart dungeon failed, stage_id: ");
                v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &context->stage_id);
                v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v20,
                        (const char (*)[15])", difficulty: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &context->difficulty);
                common::milog::MiLogStream::~MiLogStream(&v38);
                if ( *(_BYTE *)(((unsigned __int64)enter_ret >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)enter_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_ret >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v7 = *enter_ret;
              }
              else
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)(v3 + 80));
                p_activity_instable_spray_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80))->design_config.txt_config_mgr.activity_instable_spray_mgr;
                if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                stage_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig(
                                     p_activity_instable_spray_mgr,
                                     context->stage_id);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
                if ( !stage_config_ptr || std::vector<unsigned int>::empty(&stage_config_ptr->level_id_list) )
                {
                  common::milog::MiLogStream::create(
                    &v38,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/activity/instable_spray_activity.cpp",
                    "restartInstableSprayDungeon",
                    476);
                  v24 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                          &v38,
                          (const char (*)[44])"stage or level config not found, stage_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &context->stage_id);
                  common::milog::MiLogStream::~MiLogStream(&v38);
                  v7 = -1;
                }
                else
                {
                  v25 = (google::protobuf::uint32 *)std::vector<unsigned int>::front(&stage_config_ptr->level_id_list);
                  if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  proto::InstableSprayRestartDungeonRsp::set_level_id(rsp_0, *v25);
                  v7 = 0;
                }
              }
              std::pair<std::shared_ptr<DungeonScene>,int>::~pair(&__in);
            }
            std::vector<InstableSprayDungeonAvatarInfo>::~vector((std::vector<InstableSprayDungeonAvatarInfo> *const)(v3 + 112));
          }
          std::optional<InstableSprayDungeonContext>::~optional((std::optional<InstableSprayDungeonContext> *const)(v3 + 176));
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 48));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "restartInstableSprayDungeon",
        411);
      v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v38,
             (const char (*)[33])"avatar info list is larger than ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        &PlayerAvatarComp::MAX_AVATAR_NUM_IN_TEAM);
      common::milog::MiLogStream::~MiLogStream(&v38);
      v7 = -1;
    }
  }
  result = v7;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 484: range 0000000014531B5E-0000000014532C07
std::pair<std::shared_ptr<DungeonScene>,int> *__cdecl InstableSprayActivity::internalEnterDungeon(
        std::pair<std::shared_ptr<DungeonScene>,int> *retstr,
        InstableSprayActivity *const this,
        InstableSprayActivity::EnterDungeonParam *p_param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ActivityInstableSprayExcelConfigMgr *p_activity_instable_spray_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  ActivityInstableSprayExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<unsigned int>::const_reference v11; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  InstableSprayDungeonAvatarInfo *v14; // r14
  InstableSprayDungeonAvatarInfo *M_current; // r15
  InstableSprayDungeonAvatarInfo *v16; // rdi
  PlayerDungeonComp *DungeonComp; // r14
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v21; // rax
  DungeonScene *v22; // r14
  std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *v23; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::vector<InstableSprayDungeonAvatarInfo> *v25; // rax
  DungeonScene *v26; // r14
  std::remove_reference<InstableSprayDungeonContext&>::type *v27; // rax
  DungeonScene *v28; // rcx
  std::shared_ptr<DungeonScene> *v29; // rsi
  int __y; // [rsp+24h] [rbp-24Ch] BYREF
  __int64 __x; // [rsp+28h] [rbp-248h] BYREF
  const data::InstableSprayStageExcelConfig *stage_config_ptr; // [rsp+30h] [rbp-240h]
  const data::InstableSprayDifficultyExcelConfig *difficulty_config_ptr; // [rsp+38h] [rbp-238h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_ret; // [rsp+40h] [rbp-230h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+48h] [rbp-228h]
  std::pair<std::nullptr_t,int> __p; // [rsp+50h] [rbp-220h] BYREF
  std::pair<std::nullptr_t,int> v40; // [rsp+60h] [rbp-210h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+70h] [rbp-200h] BYREF
  std::vector<InstableSprayDungeonAvatarInfo> p_avatar_info_vec; // [rsp+90h] [rbp-1E0h] BYREF
  EnterDungeonOption v43; // [rsp+B0h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v44; // [rsp+D0h] [rbp-1A0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+F0h] [rbp-180h] BYREF
  char v46[336]; // [rsp+120h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 level_id:508 64 4 14 dungeon_id:549 80 8 20 level_config_ptr:510 112 24 22 check_avata"
                        "r_valid:518 176 72 11 context:572";
  *(_QWORD *)(v3 + 16) = InstableSprayActivity::internalEnterDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  p_activity_instable_spray_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.activity_instable_spray_mgr;
  if ( *(_BYTE *)(((unsigned __int64)p_param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig(
                       p_activity_instable_spray_mgr,
                       p_param->stage_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v40);
  if ( stage_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v40);
    v8 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.activity_instable_spray_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&p_param->difficulty >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_param->difficulty >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    difficulty_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayDifficultyExcelConfig(
                              v8,
                              p_param->difficulty);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v40);
    if ( difficulty_config_ptr )
    {
      if ( std::vector<unsigned int>::empty(&stage_config_ptr->level_id_list) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/instable_spray_activity.cpp",
          "internalEnterDungeon",
          503);
        v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v44,
                (const char (*)[38])"stage level list is empty, stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &p_param->stage_id);
        common::milog::MiLogStream::~MiLogStream(&v44);
        __y = -1;
        __x = 0LL;
        v40 = std::make_pair<decltype(nullptr),int>(&__x, &__y);
        std::pair<std::shared_ptr<DungeonScene>,int>::pair<decltype(nullptr),int,true>(retstr, &v40);
      }
      else
      {
        v11 = std::vector<unsigned int>::front(&stage_config_ptr->level_id_list);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *v11;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v40);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
        *(_QWORD *)(v3 + 80) = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
                                 &v12->design_config.txt_config_mgr.activity_instable_spray_mgr,
                                 *(_DWORD *)(v3 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v40);
        if ( *(_QWORD *)(v3 + 80) )
        {
          *(_QWORD *)(v3 + 112) = v3 + 80;
          *(_QWORD *)(v3 + 120) = v3 + 48;
          *(_QWORD *)(v3 + 128) = this;
          v14 = (InstableSprayDungeonAvatarInfo *)std::move<InstableSprayActivity::internalEnterDungeon(InstableSprayActivity::EnterDungeonParam)::{lambda(InstableSprayDungeonAvatarInfo const&)#1} &>((InstableSprayActivity::internalEnterDungeon::<lambda(const InstableSprayDungeonAvatarInfo&)> *)(v3 + 112));
          M_current = std::vector<InstableSprayDungeonAvatarInfo>::end(&p_param->avatar_info_vec)._M_current;
          v16 = std::vector<InstableSprayDungeonAvatarInfo>::begin(&p_param->avatar_info_vec)._M_current;
          if ( *(char *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&v14[1].avatar_id + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v14 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v14[1].avatar_id + 7) >> 3)
                                                             + 0x7FFF8000) )
          {
            v16 = v14;
            __asan_report_load_n(v14, 24LL);
          }
          if ( !std::all_of<__gnu_cxx::__normal_iterator<InstableSprayDungeonAvatarInfo *,std::vector<InstableSprayDungeonAvatarInfo>>,InstableSprayActivity::internalEnterDungeon(InstableSprayActivity::EnterDungeonParam)::{lambda(InstableSprayDungeonAvatarInfo const&)#1}>(
                  (__gnu_cxx::__normal_iterator<InstableSprayDungeonAvatarInfo*,std::vector<InstableSprayDungeonAvatarInfo> >)v16,
                  (__gnu_cxx::__normal_iterator<InstableSprayDungeonAvatarInfo*,std::vector<InstableSprayDungeonAvatarInfo> >)M_current,
                  *(InstableSprayActivity::internalEnterDungeon::<lambda(const InstableSprayDungeonAvatarInfo&)> *)&v14->avatar_id) )
          {
            __y = -1;
            __x = 0LL;
            v40 = std::make_pair<decltype(nullptr),int>(&__x, &__y);
            std::pair<std::shared_ptr<DungeonScene>,int>::pair<decltype(nullptr),int,true>(retstr, &v40);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 64) = stage_config_ptr->dungeon_id;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            DungeonComp = Player::getDungeonComp(this->player_);
            memset(&v43, 0, sizeof(v43));
            EnterDungeonOption::EnterDungeonOption(&v43);
            memset(&level_config_id_map, 0, sizeof(level_config_id_map));
            std::map<unsigned int,unsigned int>::map(&level_config_id_map);
            if ( *(_BYTE *)(((unsigned __int64)&p_param->cur_scene_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&p_param->cur_scene_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            PlayerDungeonComp::enterDungeon(
              &__in,
              DungeonComp,
              *(_DWORD *)(v3 + 64),
              p_param->cur_scene_id,
              0,
              &level_config_id_map,
              v43);
            std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
            enter_ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
            dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
            if ( *(_BYTE *)(((unsigned __int64)enter_ret >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)enter_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_ret >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( *enter_ret )
            {
              common::milog::MiLogStream::create(
                &v44,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/instable_spray_activity.cpp",
                "internalEnterDungeon",
                553);
              v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                      &v44,
                      (const char (*)[50])"enter instable spray dungeon failed, dungeon_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream(&v44);
              __x = 0LL;
              __p = std::make_pair<decltype(nullptr),int &>(&__x, enter_ret);
              std::pair<std::shared_ptr<DungeonScene>,int>::pair<decltype(nullptr),int,true>(retstr, &__p);
            }
            else if ( std::operator==<DungeonScene>(dungeon_scene_ptr, 0LL)
                   || (v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
                       DungeonScene::getDungeonId(v19) != *(_DWORD *)(v3 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v44,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/instable_spray_activity.cpp",
                "internalEnterDungeon",
                558);
              v21 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v44,
                      (const char (*)[35])"enter dungeon failed, dungeon_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream(&v44);
              __y = -1;
              __x = 0LL;
              v40 = std::make_pair<decltype(nullptr),int>(&__x, &__y);
              std::pair<std::shared_ptr<DungeonScene>,int>::pair<decltype(nullptr),int,true>(retstr, &v40);
            }
            else
            {
              v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              v23 = std::move<std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)> &>(&p_param->callback);
              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function(
                (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v44,
                v23);
              DungeonScene::registerDungeonSettleCallback(v22, (DungeonSettleCallback *)&v44);
              std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v44);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AvatarComp = Player::getAvatarComp(this->player_);
              PlayerAvatarComp::delAllBuffs(AvatarComp);
              std::vector<InstableSprayDungeonAvatarInfo>::vector(&p_avatar_info_vec, &p_param->avatar_info_vec);
              if ( *(_BYTE *)(((unsigned __int64)p_param >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)p_param >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              InstableSprayActivity::recordSelectedTeamInfo(this, p_param->stage_id, 0, &p_avatar_info_vec);
              std::vector<InstableSprayDungeonAvatarInfo>::~vector(&p_avatar_info_vec);
              InstableSprayDungeonContext::InstableSprayDungeonContext((InstableSprayDungeonContext *const)(v3 + 176));
              if ( *(_BYTE *)(((unsigned __int64)p_param >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)p_param >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v3 + 176) = p_param->stage_id;
              if ( *(_BYTE *)(((unsigned __int64)&p_param->difficulty >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)p_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_param->difficulty >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v3 + 180) = p_param->difficulty;
              v25 = std::move<std::vector<InstableSprayDungeonAvatarInfo> &>(&p_param->avatar_info_vec);
              std::vector<InstableSprayDungeonAvatarInfo>::operator=(
                (std::vector<InstableSprayDungeonAvatarInfo> *const)(v3 + 216),
                v25);
              v26 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              v27 = std::move<InstableSprayDungeonContext &>((InstableSprayDungeonContext *)(v3 + 176));
              DungeonScene::setDungeonExtraData<InstableSprayDungeonContext>(v26, v27);
              v28 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
              if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->initial_dungeon_level >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)difficulty_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->initial_dungeon_level >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              DungeonScene::setReviseLevel(v28, difficulty_config_ptr->initial_dungeon_level);
              __y = 0;
              v29 = std::move<std::shared_ptr<DungeonScene> &>(dungeon_scene_ptr);
              if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3)
                                                                    + 0x7FFF8000) )
              {
                v29 = (std::shared_ptr<DungeonScene> *)24;
                __asan_report_store_n(retstr, 24LL);
              }
              std::make_pair<std::shared_ptr<DungeonScene>,int>(retstr, v29, &__y);
              InstableSprayDungeonContext::~InstableSprayDungeonContext((InstableSprayDungeonContext *const)(v3 + 176));
            }
            std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/instable_spray_activity.cpp",
            "internalEnterDungeon",
            513);
          v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v44,
                  (const char (*)[25])"level config not found: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v44);
          __y = -1;
          __x = 0LL;
          v40 = std::make_pair<decltype(nullptr),int>(&__x, &__y);
          std::pair<std::shared_ptr<DungeonScene>,int>::pair<decltype(nullptr),int,true>(retstr, &v40);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "internalEnterDungeon",
        497);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v44,
             (const char (*)[30])"difficulty config not found: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &p_param->difficulty);
      common::milog::MiLogStream::~MiLogStream(&v44);
      __y = -1;
      __x = 0LL;
      v40 = std::make_pair<decltype(nullptr),int>(&__x, &__y);
      std::pair<std::shared_ptr<DungeonScene>,int>::pair<decltype(nullptr),int,true>(retstr, &v40);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "internalEnterDungeon",
      489);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v44,
           (const char (*)[25])"stage config not found: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &p_param->stage_id);
    common::milog::MiLogStream::~MiLogStream(&v44);
    __y = -1;
    __x = 0LL;
    v40 = std::make_pair<decltype(nullptr),int>(&__x, &__y);
    std::pair<std::shared_ptr<DungeonScene>,int>::pair<decltype(nullptr),int,true>(retstr, &v40);
  }
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF801C) = 0LL;
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
  return retstr;
};

// Line 518: range 0000000014531864-0000000014531B5D
bool __cdecl InstableSprayActivity::internalEnterDungeon(InstableSprayActivity::EnterDungeonParam)::{lambda(InstableSprayDungeonAvatarInfo const&)#1}::operator()(
        const InstableSprayActivity::internalEnterDungeon::<lambda(const InstableSprayDungeonAvatarInfo&)> *const __closure,
        const InstableSprayDungeonAvatarInfo *info)
{
  __int64 level_config_ptr; // rax
  common::milog::MiLogStream *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  __int64 this; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  bool v9; // bl
  common::milog::MiLogStream *v10; // rdx
  unsigned int value; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<FormalAvatar> __a; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&info->is_trial >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&info->is_trial);
  if ( !info->is_trial )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    this = (__int64)__closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)(this + 24) >> 3) + 0x7FFF8000) )
      this = __asan_report_load8();
    AvatarComp = Player::getAvatarComp(*(Player *const *)(this + 24));
    if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)&__a, (uint64_t)AvatarComp);
    v9 = std::operator==<FormalAvatar>(&__a, 0LL);
    std::shared_ptr<FormalAvatar>::~shared_ptr(&__a);
    if ( v9 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "operator()",
        534);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v13,
              (const char (*)[34])"player doesn't has avatar, guid: ");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &info->avatar_id);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return 0;
    }
    return 1;
  }
  if ( *(_BYTE *)(((unsigned __int64)info >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  value = info->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  level_config_ptr = (__int64)__closure->__level_config_ptr;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__level_config_ptr >> 3) + 0x7FFF8000) )
    level_config_ptr = __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<unsigned int>(
         (const std::vector<unsigned int> *)(*(_QWORD *)level_config_ptr + 64LL),
         &value) )
  {
    return 1;
  }
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/instable_spray_activity.cpp",
    "operator()",
    525);
  v3 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
         &v13,
         (const char (*)[36])"trial avatar is invalid, level_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__level_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, __closure->__level_id);
  v5 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v4, (const char (*)[20])", trial_avatar_id: ");
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &info->avatar_id);
  common::milog::MiLogStream::~MiLogStream(&v13);
  return 0;
};

// Line 583: range 0000000014532C08-0000000014533432
int32_t __cdecl InstableSprayActivity::initEnterSceneAvatar(
        InstableSprayActivity *const this,
        ScenePtr *p_dest_scene_ptr,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  std::shared_ptr<Avatar> *v14; // rdx
  std::vector<std::shared_ptr<Avatar>> *v15; // rdx
  const std::shared_ptr<Avatar> *v16; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+34h] [rbp-18Ch] BYREF
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-188h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+40h] [rbp-180h] BYREF
  InstableSprayDungeonContext *context; // [rsp+48h] [rbp-178h]
  std::tuple_element<0,std::pair<std::vector<std::shared_ptr<Avatar>>,int> >::type *avatar_vec; // [rsp+50h] [rbp-170h]
  std::tuple_element<1,std::pair<std::vector<std::shared_ptr<Avatar>>,int> >::type *ret; // [rsp+58h] [rbp-168h]
  std::vector<long unsigned int> *__for_range; // [rsp+60h] [rbp-160h]
  const unsigned __int64 *guid; // [rsp+68h] [rbp-158h]
  std::vector<long unsigned int> p_guid_vec; // [rsp+70h] [rbp-150h] BYREF
  std::pair<std::vector<std::shared_ptr<Avatar>>,int> __in; // [rsp+90h] [rbp-130h] BYREF
  char v30[272]; // [rsp+B0h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 16 21 dungeon_scene_ptr:590 80 16 14 avatar_ptr:608 112 80 15 context_opt:596";
  *(_QWORD *)(v5 + 16) = InstableSprayActivity::initEnterSceneAvatar;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = 62194;
  v7[536862723] = 62194;
  v7[536862726] = -202116109;
  if ( std::operator==<Scene>(p_dest_scene_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__in,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "initEnterSceneAvatar",
      587);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&__in,
      (const char (*)[19])"dest scene is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in);
    v4 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v5 + 48));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v5 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__in,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "initEnterSceneAvatar",
        593);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             (common::milog::MiLogStream *const)&__in,
             (const char (*)[38])"dest scene is not dungeon, scene_id: ");
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dest_scene_ptr);
      val = Scene::getSceneId(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in);
      v4 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
      DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
        (std::optional<InstableSprayDungeonContext> *)(v5 + 112),
        v10);
      if ( !std::optional<InstableSprayDungeonContext>::has_value((const std::optional<InstableSprayDungeonContext> *const)(v5 + 112)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__in,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/instable_spray_activity.cpp",
          "initEnterSceneAvatar",
          599);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          (common::milog::MiLogStream *const)&__in,
          (const char (*)[38])"dungeon is not instable spray dungeon");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in);
        v4 = -1;
      }
      else if ( !std::vector<unsigned long>::empty(&this->in_dungeon_avatar_guid_vec_) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getCurAvatar((Player *const)(v5 + 80));
        std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (std::shared_ptr<Avatar> *)(v5 + 80));
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 80));
        __for_range = &this->in_dungeon_avatar_guid_vec_;
        __for_begin._M_current = std::vector<unsigned long>::begin(&this->in_dungeon_avatar_guid_vec_)._M_current;
        __for_end._M_current = std::vector<unsigned long>::end(&this->in_dungeon_avatar_guid_vec_)._M_current;
        while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
        {
          guid = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          AvatarComp = Player::getAvatarComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v5 + 80), (uint64_t)AvatarComp);
          if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v5 + 80), 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&__in,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/instable_spray_activity.cpp",
              "initEnterSceneAvatar",
              611);
            v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    (common::milog::MiLogStream *const)&__in,
                    (const char (*)[25])"avatar not found, guid: ");
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, guid);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__in);
            v4 = -1;
            v13 = 0;
          }
          else
          {
            if ( std::operator==<Avatar>(appear_avatar_ptr, 0LL) )
              std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (const std::shared_ptr<Avatar> *)(v5 + 80));
            v14 = std::move<std::shared_ptr<Avatar> &>((std::shared_ptr<Avatar> *)(v5 + 80));
            std::vector<std::shared_ptr<Avatar>>::emplace_back<std::shared_ptr<Avatar>>(
              enter_scene_avatar_vec,
              v14,
              v14);
            v13 = 1;
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 80));
          if ( v13 != 1 )
            goto LABEL_35;
          __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
        }
        v4 = 0;
      }
      else
      {
        context = std::optional<InstableSprayDungeonContext>::value((std::optional<InstableSprayDungeonContext> *const)(v5 + 112));
        InstableSprayActivity::createAvatars(&__in, this, context);
        avatar_vec = std::get<0ul,std::vector<std::shared_ptr<Avatar>>,int>(&__in);
        ret = std::get<1ul,std::vector<std::shared_ptr<Avatar>>,int>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *ret )
        {
          v4 = *ret;
        }
        else
        {
          v15 = std::move<std::vector<std::shared_ptr<Avatar>> &>(avatar_vec);
          std::vector<std::shared_ptr<Avatar>>::operator=(enter_scene_avatar_vec, v15);
          if ( !std::vector<std::shared_ptr<Avatar>>::empty(enter_scene_avatar_vec) )
          {
            v16 = std::vector<std::shared_ptr<Avatar>>::front(enter_scene_avatar_vec);
            std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, v16);
            InstableSprayActivity::avatarVecToGuidVec(&p_guid_vec, enter_scene_avatar_vec);
            InstableSprayActivity::setInDungeonAvatars(this, &p_guid_vec);
            std::vector<unsigned long>::~vector(&p_guid_vec);
          }
          v4 = 0;
        }
        std::pair<std::vector<std::shared_ptr<Avatar>>,int>::~pair(&__in);
      }
LABEL_35:
      std::optional<InstableSprayDungeonContext>::~optional((std::optional<InstableSprayDungeonContext> *const)(v5 + 112));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v5 + 48));
  }
  result = v4;
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 642: range 0000000014533434-00000000145337E0
void __cdecl InstableSprayActivity::registerObserver(InstableSprayActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<InstableSprayActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<InstableSprayActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
  std::weak_ptr<Observer> __r; // [rsp+30h] [rbp-B0h] BYREF
  std::enable_shared_from_this<BaseActivity> v7; // [rsp+40h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:643 64 16 12 this_wtr:644";
  *(_QWORD *)(v1 + 16) = InstableSprayActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<InstableSprayActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<InstableSprayActivity>::weak_ptr<InstableSprayActivity,void>(
    (std::weak_ptr<InstableSprayActivity> *const)(v1 + 64),
    (const std::shared_ptr<InstableSprayActivity> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<InstableSprayActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<InstableSprayActivity>::weak_ptr(
      (std::weak_ptr<InstableSprayActivity> *const)&v7,
      (const std::weak_ptr<InstableSprayActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<InstableSprayActivity,LeaveSceneEvent>(
      (PlayerEventComp *const)&__r,
      p_this_wtr,
      (void (*)(InstableSprayActivity *, const LeaveSceneEvent *))&v7);
    std::weak_ptr<Observer>::operator=(&this->leave_scene_obs_wtr_, &__r);
    std::weak_ptr<Observer>::~weak_ptr(&__r);
    std::weak_ptr<InstableSprayActivity>::~weak_ptr((std::weak_ptr<InstableSprayActivity> *const)&v7);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = (std::weak_ptr<InstableSprayActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<InstableSprayActivity>::weak_ptr(
      (std::weak_ptr<InstableSprayActivity> *const)&__r,
      (const std::weak_ptr<InstableSprayActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<InstableSprayActivity,PostEnterSceneEvent>(
      (PlayerEventComp *const)&v7,
      EventComp,
      (void (*)(InstableSprayActivity *, const PostEnterSceneEvent *))&__r);
    std::weak_ptr<Observer>::operator=(&this->post_enter_scene_obs_wtr_, (std::weak_ptr<Observer> *)&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<InstableSprayActivity>::~weak_ptr((std::weak_ptr<InstableSprayActivity> *const)&__r);
  }
  std::weak_ptr<InstableSprayActivity>::~weak_ptr((std::weak_ptr<InstableSprayActivity> *const)(v1 + 64));
  std::shared_ptr<InstableSprayActivity>::~shared_ptr((std::shared_ptr<InstableSprayActivity> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
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

// Line 656: range 00000000145337E2-00000000145339FF
_BOOL8 __fastcall InstableSprayActivity::isStageOpen(const InstableSprayActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::pointer v7; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-A0h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 stage_id:655 64 8 8 iter:657";
  *(_QWORD *)(v2 + 16) = InstableSprayActivity::isStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,InstableSprayActivity::StageData>::const_iterator *)(v2 + 64) = std::map<unsigned int,InstableSprayActivity::StageData>::find(
                                                                                            &this->stage_data_map_,
                                                                                            (const std::map<unsigned int,InstableSprayActivity::StageData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "isStageOpen",
      660);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v10,
           (const char (*)[28])"stage not found, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> > *const)(v2 + 64));
    p_is_open = &v7->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    result = v7->second.is_open;
  }
  if ( v11 == (char *)v2 )
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

// Line 667: range 0000000014533A00-0000000014533D42
int32_t __cdecl InstableSprayActivity::checkCanEnterDungeon(const InstableSprayActivity *const this, uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  int ret; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:675";
  *(_QWORD *)(v2 + 16) = InstableSprayActivity::checkCanEnterDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ret = InstableSprayActivity::checkPlayerStatus(this, stage_id);
  if ( ret )
  {
    v5 = ret;
    goto LABEL_18;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "checkCanEnterDungeon",
      678);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v11, (const char (*)[24])off_253F8020);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( Scene::getSceneType(v7) != SCENE_DUNGEON )
    {
      v5 = 0;
      goto LABEL_17;
    }
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "checkCanEnterDungeon",
      684);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v11,
           (const char (*)[27])"player is in dungeon, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v11);
  v5 = -1;
LABEL_17:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
LABEL_18:
  result = v5;
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

// Line 691: range 0000000014533D44-000000001453427F
int32_t __cdecl InstableSprayActivity::checkCanRestartDungeon(const InstableSprayActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  int v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-140h] BYREF
  int ret; // [rsp+14h] [rbp-13Ch]
  InstableSprayDungeonContext *context; // [rsp+18h] [rbp-138h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-130h] BYREF
  char v15[272]; // [rsp+40h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 16 13 scene_ptr:692 80 16 21 dungeon_scene_ptr:699 112 80 15 context_opt:707";
  *(_QWORD *)(v1 + 16) = InstableSprayActivity::checkCanRestartDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 48));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "checkCanRestartDungeon",
      695);
    v4 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v14, (const char (*)[24])off_253F8020);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v1 + 80));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "checkCanRestartDungeon",
        702);
      v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v14,
             (const char (*)[31])"player is not in dungeon, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v5 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
        (std::optional<InstableSprayDungeonContext> *)(v1 + 112),
        v7);
      if ( !std::optional<InstableSprayDungeonContext>::has_value((const std::optional<InstableSprayDungeonContext> *const)(v1 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/instable_spray_activity.cpp",
          "checkCanRestartDungeon",
          710);
        v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(&v14, (const char (*)[56])off_253F8180);
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        val = DungeonScene::getDungeonId(v9);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v14);
        v5 = -1;
      }
      else
      {
        context = std::optional<InstableSprayDungeonContext>::value((std::optional<InstableSprayDungeonContext> *const)(v1 + 112));
        if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        ret = InstableSprayActivity::checkPlayerStatus(this, context->stage_id);
        if ( ret )
          v5 = ret;
        else
          v5 = 0;
      }
      std::optional<InstableSprayDungeonContext>::~optional((std::optional<InstableSprayDungeonContext> *const)(v1 + 112));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 80));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 48));
  result = v5;
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 725: range 0000000014534280-0000000014534749
int32_t __cdecl InstableSprayActivity::checkPlayerStatus(const InstableSprayActivity *const this, uint32_t stage_id)
{
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v3; // rbx
  PlayerSceneComp *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "checkPlayerStatus",
      729);
    v3 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v10, (const char (*)[24])off_253F8220);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return 512;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInTransfer(v5) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/instable_spray_activity.cpp",
      "checkPlayerStatus",
      736);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v10,
           (const char (*)[28])"player is in transfer, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_26;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( !PlayerMpComp::isInMpMode(MpComp) )
  {
    if ( BaseActivity::isSettled(this) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "checkPlayerStatus",
        749);
      v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v10,
             (const char (*)[26])"activity is settled, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      if ( InstableSprayActivity::isStageOpen(this, stage_id) )
        return 0;
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "checkPlayerStatus",
        755);
      v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v10,
             (const char (*)[24])"stage is not open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
LABEL_26:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/instable_spray_activity.cpp",
    "checkPlayerStatus",
    742);
  v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v10, (const char (*)[17])"in mp mode, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 1202;
};

// Line 763: range 000000001453474A-0000000014535298
void __cdecl InstableSprayActivity::onDungeonSettle(
        InstableSprayActivity *const this,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v10; // rax
  uint32_t stage_id; // r14d
  std::__shared_ptr_access<InstableSprayScoreEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t v13; // r14d
  std::__shared_ptr_access<InstableSprayScoreEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  uint32_t *p_score; // rax
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<InstableSprayScoreEvent> *v17; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  const std::string *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  bool is_success; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  google::protobuf::uint32 *v26; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  google::protobuf::uint32 *v28; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r14
  google::protobuf::uint32 *v30; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  Player *player; // r14
  std::shared_ptr<proto_log::PlayerLogBodyInstableSprayDungeonSettle> *v33; // rax
  std::string v34; // [rsp+0h] [rbp-1D0h]
  const proto::DungeonSettleNotify *const notifya; // [rsp+8h] [rbp-1C8h]
  DungeonScene *const dungeon_scenea; // [rsp+10h] [rbp-1C0h]
  InstableSprayActivity *thisa; // [rsp+18h] [rbp-1B8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Self __y; // [rsp+28h] [rbp-1A8h] BYREF
  const InstableSprayDungeonContext *context; // [rsp+30h] [rbp-1A0h]
  InstableSprayActivity::StageData *stage_data; // [rsp+38h] [rbp-198h]
  proto::InstableSprayDungeonSettleInfo *settle_info; // [rsp+40h] [rbp-190h]
  const std::vector<unsigned int> *score_vec; // [rsp+48h] [rbp-188h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v44; // [rsp+60h] [rbp-170h] BYREF
  char v45[336]; // [rsp+80h] [rbp-150h] BYREF

  *(&v34._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v34._anon_0._M_allocated_capacity = (std::string::size_type)dungeon_scene;
  v34._M_string_length = (std::string::size_type)notify;
  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 holder:810 64 4 15 total_score:784 80 8 8 iter:772 112 16 11 log_ptr:811 144 16 13 eve"
                        "nt_ptr:798 176 80 15 context_opt:765";
  *(_QWORD *)(v3 + 16) = InstableSprayActivity::onDungeonSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862728] = -202116109;
  DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
    (std::optional<InstableSprayDungeonContext> *)(v3 + 176),
    dungeon_scene);
  if ( !std::optional<InstableSprayDungeonContext>::has_value((const std::optional<InstableSprayDungeonContext> *const)(v3 + 176)) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/instable_spray_activity.cpp",
      "onDungeonSettle",
      768);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v44,
           (const char (*)[52])"dungeon is not instable spray dungeon, dungeon_id: ");
    *(_DWORD *)(v3 + 64) = DungeonScene::getDungeonId(dungeon_scene);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  else
  {
    context = std::optional<InstableSprayDungeonContext>::value((std::optional<InstableSprayDungeonContext> *const)(v3 + 176));
    *(std::map<unsigned int,InstableSprayActivity::StageData>::iterator *)(v3 + 80) = std::map<unsigned int,InstableSprayActivity::StageData>::find(
                                                                                        &this->stage_data_map_,
                                                                                        &context->stage_id);
    __y._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::end(&this->stage_data_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Self *)(v3 + 80),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/instable_spray_activity.cpp",
        "onDungeonSettle",
        775);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v44,
             (const char (*)[28])"stage not found, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &context->stage_id);
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    else
    {
      stage_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> > *const)(v3 + 80))->second;
      settle_info = proto::DungeonSettleNotify::mutable_instable_spray_settle_info((proto::DungeonSettleNotify *const)v34._M_string_length);
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::InstableSprayDungeonSettleInfo::set_stage_id(settle_info, context->stage_id);
      if ( *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)context + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->difficulty >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::InstableSprayDungeonSettleInfo::set_difficulty(settle_info, context->difficulty);
      v8 = proto::InstableSprayDungeonSettleInfo::mutable_score_list(settle_info);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&context->score_vec, v8);
      M_current = std::vector<unsigned int>::end(&context->score_vec)._M_current;
      v10._M_current = std::vector<unsigned int>::begin(&context->score_vec)._M_current;
      *(_DWORD *)(v3 + 64) = std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                               v10,
                               (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                               0);
      if ( proto::DungeonSettleNotify::is_success((const proto::DungeonSettleNotify *const)v34._M_string_length) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)stage_data + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&stage_data->is_finished >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_store1(&stage_data->is_finished);
        }
        stage_data->is_finished = 1;
        if ( *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)stage_data >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( stage_data->max_score < *(_DWORD *)(v3 + 64) )
        {
          stage_data->max_score = *(_DWORD *)(v3 + 64);
          proto::InstableSprayDungeonSettleInfo::set_is_new_record(settle_info, 1);
        }
        common::tools::perf::make_shared<InstableSprayScoreEvent,unsigned int const&,unsigned int &>(
          (const unsigned int *)(v3 + 144),
          &context->stage_id,
          (const unsigned int *)(v3 + 64),
          &context->stage_id);
        if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        stage_id = context->stage_id;
        v12 = std::__shared_ptr_access<InstableSprayScoreEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<InstableSprayScoreEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&v12->stage_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->stage_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (std::__shared_ptr_access<InstableSprayScoreEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v12->stage_id);
        }
        v12->stage_id = stage_id;
        v13 = *(_DWORD *)(v3 + 64);
        v14 = std::__shared_ptr_access<InstableSprayScoreEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<InstableSprayScoreEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        p_score = &v14->score;
        if ( *(_BYTE *)(((unsigned __int64)p_score >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_score >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_score);
        }
        v14->score = v13;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        v17 = std::move<std::shared_ptr<InstableSprayScoreEvent> &>((std::shared_ptr<InstableSprayScoreEvent> *)(v3 + 144));
        std::shared_ptr<BaseEvent>::shared_ptr<InstableSprayScoreEvent,void>(&p_event_ptr, v17);
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        BaseActivity::updateAllConds(this);
        std::shared_ptr<InstableSprayScoreEvent>::~shared_ptr((std::shared_ptr<InstableSprayScoreEvent> *const)(v3 + 144));
      }
      BaseActivity::notifyClientData(this, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v44, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xE57u, v34);
      std::string::~string(&v44);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyInstableSprayDungeonSettle>();
      v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      v20 = DungeonScene::getTransaction[abi:cxx11](dungeon_scenea);
      proto_log::PlayerLogBodyInstableSprayDungeonSettle::set_transaction(v19, v20);
      v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      DungeonId = DungeonScene::getDungeonId(dungeon_scenea);
      proto_log::PlayerLogBodyInstableSprayDungeonSettle::set_dungeon_id(v21, DungeonId);
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      is_success = proto::DungeonSettleNotify::is_success(notifya);
      proto_log::PlayerLogBodyInstableSprayDungeonSettle::set_is_success(v23, is_success);
      score_vec = &context->score_vec;
      if ( std::vector<unsigned int>::size(&context->score_vec) )
      {
        v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        v26 = (google::protobuf::uint32 *)std::vector<unsigned int>::operator[](score_vec, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyInstableSprayDungeonSettle::set_gallery1_score(v25, *v26);
      }
      if ( std::vector<unsigned int>::size(score_vec) > 1 )
      {
        v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        v28 = (google::protobuf::uint32 *)std::vector<unsigned int>::operator[](score_vec, 1uLL);
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyInstableSprayDungeonSettle::set_gallery2_score(v27, *v28);
      }
      if ( std::vector<unsigned int>::size(score_vec) > 2 )
      {
        v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        v30 = (google::protobuf::uint32 *)std::vector<unsigned int>::operator[](score_vec, 2uLL);
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyInstableSprayDungeonSettle::set_gallery3_score(v29, *v30);
      }
      v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInstableSprayDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      proto_log::PlayerLogBodyInstableSprayDungeonSettle::set_total_score(v31, *(_DWORD *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(
        (std::shared_ptr<google::protobuf::Message> *const)&p_event_ptr,
        0LL);
      v33 = std::move<std::shared_ptr<proto_log::PlayerLogBodyInstableSprayDungeonSettle> &>((std::shared_ptr<proto_log::PlayerLogBodyInstableSprayDungeonSettle> *)(v3 + 112));
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyInstableSprayDungeonSettle,void>(
        (std::shared_ptr<google::protobuf::Message> *const)(v3 + 144),
        v33);
      Player::printStatLog(player, (MessagePtr *)(v3 + 144), (MessagePtr *)&p_event_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 144));
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&p_event_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyInstableSprayDungeonSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyInstableSprayDungeonSettle> *const)(v3 + 112));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
  }
  std::optional<InstableSprayDungeonContext>::~optional((std::optional<InstableSprayDungeonContext> *const)(v3 + 176));
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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
};

// Line 833: range 000000001453529A-0000000014535AFD
AvatarPtr __cdecl InstableSprayActivity::findInDungeonAvatar(
        InstableSprayActivity *const this,
        const InstableSprayDungeonAvatarInfo *avatar_info)
{
  const InstableSprayDungeonAvatarInfo *v2; // rdx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // r14d
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 TrialAvatarId; // rcx
  common::milog::MiLogStream *v13; // rdx
  AvatarPtr result; // rax
  PlayerAvatarComp *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  int v17; // r14d
  uint32_t v18; // r14d
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  int v24; // r14d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint64_t v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  const InstableSprayDungeonAvatarInfo *avatar_infoa; // [rsp+8h] [rbp-F8h]
  unsigned int val; // [rsp+2Ch] [rbp-D4h] BYREF
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+40h] [rbp-C0h]
  const unsigned __int64 *guid; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-B0h] BYREF
  char v38[144]; // [rsp+70h] [rbp-90h] BYREF

  avatar_infoa = v2;
  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 21 mirror_avatar_ptr:854 64 16 21 formal_avatar_ptr:860";
  *(_QWORD *)(v3 + 16) = InstableSprayActivity::findInDungeonAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  __for_range = (std::vector<long unsigned int> *)&avatar_info[61].is_trial;
  __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)&avatar_info[61].is_trial)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)&avatar_info[61].is_trial)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    guid = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(char *)(((unsigned __int64)&avatar_infoa->is_trial >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&avatar_infoa->is_trial);
    if ( avatar_infoa->is_trial )
    {
      if ( *(_BYTE *)(((unsigned __int64)&avatar_info[1].is_trial >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(*(Player *const *)&avatar_info[1].is_trial);
      if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerAvatarComp::findAvatar<TrialAvatar>((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)AvatarComp);
      if ( std::operator==<TrialAvatar>((const std::shared_ptr<TrialAvatar> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/instable_spray_activity.cpp",
          "findInDungeonAvatar",
          842);
        v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v37,
               (const char (*)[31])"trial avatar not found, guid: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, guid);
        v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", avatar_id: ");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &avatar_infoa->avatar_id);
        common::milog::MiLogStream::~MiLogStream(&v37);
        v10 = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        TrialAvatarId = TrialAvatar::getTrialAvatarId(v11);
        if ( *(_BYTE *)(((unsigned __int64)avatar_infoa >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( TrialAvatarId == avatar_infoa->avatar_id )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/instable_spray_activity.cpp",
            "findInDungeonAvatar",
            847);
          v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v37,
                  (const char (*)[41])"trial avatar already exists, avatar_id: ");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &avatar_infoa->avatar_id);
          common::milog::MiLogStream::~MiLogStream(&v37);
          std::shared_ptr<Avatar>::shared_ptr<TrialAvatar,void>(
            (std::shared_ptr<Avatar> *const)this,
            (std::shared_ptr<TrialAvatar> *)(v3 + 64));
          v10 = 1;
        }
        else
        {
          v10 = 2;
        }
      }
      std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v3 + 64));
      if ( v10 && v10 != 2 )
        goto LABEL_47;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&avatar_info[1].is_trial >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = Player::getAvatarComp(*(Player *const *)&avatar_info[1].is_trial);
      if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v3 + 32), (uint64_t)v15);
      if ( std::operator==<MirrorAvatar>((const std::shared_ptr<MirrorAvatar> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/instable_spray_activity.cpp",
          "findInDungeonAvatar",
          857);
        v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v37,
                (const char (*)[32])"mirror avatar not found, guid: ");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v16, guid);
        common::milog::MiLogStream::~MiLogStream(&v37);
        v17 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&avatar_info[1].is_trial >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v18 = (unsigned int)Player::getAvatarComp(*(Player *const *)&avatar_info[1].is_trial);
        v19 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Avatar::getAvatarId(v19);
        PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 64), v18);
        if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/instable_spray_activity.cpp",
            "findInDungeonAvatar",
            863);
          v20 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v37,
                  (const char (*)[46])"formal avatar not found, mirror_avatar_guid: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, guid);
          v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v21,
                  (const char (*)[14])", avatar_id: ");
          v23 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          val = Avatar::getAvatarId(v23);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
          common::milog::MiLogStream::~MiLogStream(&v37);
          v24 = 0;
        }
        else
        {
          v25 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v26 = Avatar::getGuid(v25);
          if ( *(_BYTE *)(((unsigned __int64)avatar_infoa >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( v26 == avatar_infoa->avatar_id )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/instable_spray_activity.cpp",
              "findInDungeonAvatar",
              868);
            v27 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v37,
                    (const char (*)[37])"mirror avatar already exists, guid: ");
            v28 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v27, guid);
            v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v28,
                    (const char (*)[14])", avatar_id: ");
            v30 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
            val = Avatar::getAvatarId(v30);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
            common::milog::MiLogStream::~MiLogStream(&v37);
            std::shared_ptr<Avatar>::shared_ptr<MirrorAvatar,void>(
              (std::shared_ptr<Avatar> *const)this,
              (std::shared_ptr<MirrorAvatar> *)(v3 + 32));
            v24 = 1;
          }
          else
          {
            v24 = 2;
          }
        }
        std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 64));
        if ( v24 )
        {
          if ( v24 == 2 )
            v17 = 2;
          else
            v17 = 1;
        }
        else
        {
          v17 = 0;
        }
      }
      std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v3 + 32));
      if ( v17 && v17 != 2 )
        goto LABEL_47;
    }
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, 0LL);
LABEL_47:
  if ( v38 == (char *)v3 )
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
  result._M_ptr = (std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 877: range 0000000014535BA4-0000000014537AE7
std::pair<std::vector<std::shared_ptr<Avatar>>,int> *__cdecl InstableSprayActivity::createAvatars(
        std::pair<std::vector<std::shared_ptr<Avatar>>,int> *retstr,
        InstableSprayActivity *const this,
        const InstableSprayDungeonContext *context)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  ActivityInstableSprayExcelConfigMgr *p_activity_instable_spray_mgr; // rcx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int> *p_level_id_list; // rcx
  std::vector<unsigned int>::const_reference v11; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Avatar *v15; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  float MaxEnergy; // xmm0_4
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::shared_ptr<Avatar> *v20; // rax
  int v21; // r14d
  common::milog::MiLogStream *v22; // rax
  uint32_t AvatarComp; // esi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  int v27; // r14d
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  float v30; // xmm0_4
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  PlayerAvatarComp *v32; // r14
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::shared_ptr<TrialAvatar> *v38; // rax
  PlayerAvatarComp *v39; // r14
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  _BOOL4 v43; // r14d
  common::milog::MiLogStream *v44; // r14
  PlayerAvatarComp *v45; // r14
  common::milog::MiLogStream *v46; // r14
  const unsigned __int64 *v47; // rax
  int v48; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  float v51; // xmm0_4
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  std::shared_ptr<Avatar> *v54; // rax
  std::vector<std::shared_ptr<Avatar>> *v55; // rsi
  std::initializer_list<long unsigned int> __l; // [rsp+10h] [rbp-2F0h]
  std::vector<unsigned int>::size_type round; // [rsp+20h] [rbp-2E0h]
  std::allocator<long unsigned int> __a; // [rsp+43h] [rbp-2BDh] BYREF
  int __y; // [rsp+44h] [rbp-2BCh] BYREF
  std::vector<InstableSprayDungeonAvatarInfo>::const_iterator __for_begin; // [rsp+48h] [rbp-2B8h] BYREF
  std::vector<InstableSprayDungeonAvatarInfo>::const_iterator __for_end; // [rsp+50h] [rbp-2B0h] BYREF
  unsigned __int64 __args_0; // [rsp+58h] [rbp-2A8h] BYREF
  const data::InstableSprayStageExcelConfig *stage_config_ptr; // [rsp+60h] [rbp-2A0h]
  const data::InstableSprayLevelExcelConfig *level_config_ptr; // [rsp+68h] [rbp-298h]
  const std::vector<InstableSprayDungeonAvatarInfo> *__for_range; // [rsp+70h] [rbp-290h]
  const InstableSprayDungeonAvatarInfo *avatar_info; // [rsp+78h] [rbp-288h]
  std::shared_ptr<Config> v70; // [rsp+80h] [rbp-280h] BYREF
  std::vector<std::shared_ptr<Avatar>> __x; // [rsp+90h] [rbp-270h] BYREF
  common::milog::MiLogStream v72; // [rsp+B0h] [rbp-250h] BYREF
  char v73[560]; // [rsp+D0h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 16 cur_level_id:895 64 4 7 ret:963 80 16 25 in_dungeon_avatar_ptr:916 112 16 20 trial_av"
                        "atar_ptr:942 144 16 14 avatar_ptr:974 176 24 14 avatar_vec:903 240 24 21 create_avatar_vec:905 3"
                        "04 24 26 mirror_avatar_guid_vec:962 368 32 10 record:940 432 40 12 commiter:907";
  *(_QWORD *)(v3 + 16) = InstableSprayActivity::createAvatars;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -218959360;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  if ( std::vector<InstableSprayDungeonAvatarInfo>::empty(&context->avatar_info_vec) )
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "createAvatars",
      881);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v72,
           (const char (*)[47])"dungeon context has no avatar info, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &context->stage_id);
    common::milog::MiLogStream::~MiLogStream(&v72);
    __y = -1;
    memset(&__x, 0, sizeof(__x));
    std::vector<std::shared_ptr<Avatar>>::vector(&__x);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
LABEL_27:
    std::make_pair<std::vector<std::shared_ptr<Avatar>>,int>(retstr, &__x, &__y);
    std::vector<std::shared_ptr<Avatar>>::~vector(&__x);
    goto LABEL_100;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v70);
  p_activity_instable_spray_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v70)->design_config.txt_config_mgr.activity_instable_spray_mgr;
  if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  stage_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig(
                       p_activity_instable_spray_mgr,
                       context->stage_id);
  std::shared_ptr<Config>::~shared_ptr(&v70);
  if ( !stage_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/instable_spray_activity.cpp",
      "createAvatars",
      887);
    v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v72,
           (const char (*)[35])"stage config not found, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &context->stage_id);
    common::milog::MiLogStream::~MiLogStream(&v72);
    __y = -1;
    memset(&__x, 0, sizeof(__x));
    std::vector<std::shared_ptr<Avatar>>::vector(&__x);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    goto LABEL_27;
  }
  if ( *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  round = context->round;
  if ( round >= std::vector<unsigned int>::size(&stage_config_ptr->level_id_list) )
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/instable_spray_activity.cpp",
      "createAvatars",
      892);
    v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v72, (const char (*)[32])off_253F8920);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &context->round);
    common::milog::MiLogStream::~MiLogStream(&v72);
    __y = -1;
    memset(&__x, 0, sizeof(__x));
    std::vector<std::shared_ptr<Avatar>>::vector(&__x);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    goto LABEL_27;
  }
  p_level_id_list = &stage_config_ptr->level_id_list;
  if ( *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v11 = std::vector<unsigned int>::operator[](p_level_id_list, context->round);
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 48) = *v11;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v70);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v70);
  level_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
                       &v12->design_config.txt_config_mgr.activity_instable_spray_mgr,
                       *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v70);
  if ( !level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/instable_spray_activity.cpp",
      "createAvatars",
      899);
    v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v72,
            (const char (*)[35])"level config not found, level_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v72);
    __y = -1;
    memset(&__x, 0, sizeof(__x));
    std::vector<std::shared_ptr<Avatar>>::vector(&__x);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 32LL);
    }
    goto LABEL_27;
  }
  std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v3 + 176));
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 240));
  std::function<void ()(void)>::function<InstableSprayActivity::createAvatars(InstableSprayDungeonContext const&)::{lambda(void)#1},void,void>(
    (std::function<void()> *const)&v72,
    (InstableSprayActivity::createAvatars::<lambda()>)__PAIR128__((unsigned __int64)this, v3 + 240));
  common::tools::ScopedCommitter::ScopedCommitter(
    (common::tools::ScopedCommitter *const)(v3 + 432),
    (std::function<void()> *)&v72);
  std::function<void ()(void)>::~function((std::function<void()> *const)&v72);
  __for_range = &context->avatar_info_vec;
  __for_begin._M_current = std::vector<InstableSprayDungeonAvatarInfo>::begin(&context->avatar_info_vec)._M_current;
  __for_end._M_current = std::vector<InstableSprayDungeonAvatarInfo>::end(&context->avatar_info_vec)._M_current;
  while ( __gnu_cxx::operator!=<InstableSprayDungeonAvatarInfo const*,std::vector<InstableSprayDungeonAvatarInfo>>(
            &__for_begin,
            &__for_end) )
  {
    avatar_info = __gnu_cxx::__normal_iterator<InstableSprayDungeonAvatarInfo const*,std::vector<InstableSprayDungeonAvatarInfo>>::operator*(&__for_begin);
    InstableSprayActivity::findInDungeonAvatar(
      (InstableSprayActivity *const)(v3 + 80),
      (const InstableSprayDungeonAvatarInfo *)this);
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 80), 0LL) )
    {
      v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( Creature::getLifeState(v14) == LIFE_DEAD )
      {
        v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        Avatar::setLifeAlive(v15, 0x70u, 0LL, 1);
      }
      v16 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v70, 0LL);
      v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      MaxEnergy = Creature::getMaxEnergy(v17);
      Creature::setCurEnergy(v16, MaxEnergy, 1, (FightPropNtfParamPtr *)&v70);
      std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v70);
      v19 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      Creature::setCurHpFull(v19, 1);
      v20 = std::move<std::shared_ptr<Avatar> &>((std::shared_ptr<Avatar> *)(v3 + 80));
      std::vector<std::shared_ptr<Avatar>>::emplace_back<std::shared_ptr<Avatar>>(
        (std::vector<std::shared_ptr<Avatar>> *const)(v3 + 176),
        v20,
        v20);
      v21 = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&avatar_info->is_trial >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&avatar_info->is_trial);
      if ( avatar_info->is_trial )
      {
        if ( *(_BYTE *)(((unsigned __int64)avatar_info >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __y = avatar_info->avatar_id;
        if ( !common::tools::MiscUtils::isContains<unsigned int>(
                &level_config_ptr->trail_avatar_list,
                (const unsigned int *)&__y) )
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/instable_spray_activity.cpp",
            "createAvatars",
            936);
          v22 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v72,
                  (const char (*)[33])"is not trial avatar, avatar_id: ");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v22, &avatar_info->avatar_id);
          common::milog::MiLogStream::~MiLogStream(&v72);
          __y = -1;
          memset(&__x, 0, sizeof(__x));
          std::vector<std::shared_ptr<Avatar>>::vector(&__x);
          if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store_n(retstr, 32LL);
          }
          std::make_pair<std::vector<std::shared_ptr<Avatar>>,int>(retstr, &__x, &__y);
          std::vector<std::shared_ptr<Avatar>>::~vector(&__x);
LABEL_63:
          v21 = 1;
          goto LABEL_93;
        }
        proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v3 + 368));
        proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v3 + 368), 0xAu);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)avatar_info >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        PlayerAvatarComp::createTrialAvatar((PlayerAvatarComp *const)(v3 + 112), AvatarComp, avatar_info->avatar_id);
        if ( std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v3 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/instable_spray_activity.cpp",
            "createAvatars",
            945);
          v24 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v72,
                  (const char (*)[41])"createTrialAvatar fail, trial_avatar_id:");
          v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v24, &avatar_info->avatar_id);
          v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          __y = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)&__y);
          common::milog::MiLogStream::~MiLogStream(&v72);
          __y = -1;
          memset(&__x, 0, sizeof(__x));
          std::vector<std::shared_ptr<Avatar>>::vector(&__x);
          if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store_n(retstr, 32LL);
          }
          goto LABEL_52;
        }
        v28 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v70, 0LL);
        v29 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        v30 = Creature::getMaxEnergy(v29);
        Creature::setCurEnergy(v28, v30, 0, (FightPropNtfParamPtr *)&v70);
        std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v70);
        v31 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        Creature::setCurHpFull(v31, 0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v32 = Player::getAvatarComp(this->player_);
        std::shared_ptr<TrialAvatar>::shared_ptr(
          (std::shared_ptr<TrialAvatar> *const)(v3 + 144),
          (const std::shared_ptr<TrialAvatar> *)(v3 + 112));
        PlayerAvatarComp::addTrialAvatar(
          (PlayerAvatarComp *const)&v70,
          (TrialAvatarPtr *)v32,
          (const proto::TrialAvatarGrantRecord *)(v3 + 144));
        LOBYTE(v32) = std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)&v70);
        std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)&v70);
        std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v3 + 144));
        if ( (_BYTE)v32 )
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/instable_spray_activity.cpp",
            "createAvatars",
            953);
          v33 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v72,
                  (const char (*)[40])"addTrialAvatar failed, trial_avatar_id:");
          v34 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          *(_DWORD *)(v3 + 64) = TrialAvatar::getTrialAvatarId(v34);
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v3 + 64));
          v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v35, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          __y = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)&__y);
          common::milog::MiLogStream::~MiLogStream(&v72);
          __y = -1;
          memset(&__x, 0, sizeof(__x));
          std::vector<std::shared_ptr<Avatar>>::vector(&__x);
          if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store_n(retstr, 32LL);
          }
LABEL_52:
          std::make_pair<std::vector<std::shared_ptr<Avatar>>,int>(retstr, &__x, &__y);
          std::vector<std::shared_ptr<Avatar>>::~vector(&__x);
          v27 = 0;
        }
        else
        {
          v37 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          __args_0 = Avatar::getGuid(v37);
          std::vector<unsigned long>::emplace_back<unsigned long>(
            (std::vector<long unsigned int> *const)(v3 + 240),
            &__args_0,
            &__args_0);
          v38 = std::move<std::shared_ptr<TrialAvatar> &>((std::shared_ptr<TrialAvatar> *)(v3 + 112));
          std::vector<std::shared_ptr<Avatar>>::emplace_back<std::shared_ptr<TrialAvatar>>(
            (std::vector<std::shared_ptr<Avatar>> *const)(v3 + 176),
            v38,
            v38);
          v27 = 1;
        }
        std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v3 + 112));
        proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v3 + 368));
        if ( v27 == 1 )
          goto LABEL_92;
        goto LABEL_63;
      }
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 304));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v39 = Player::getAvatarComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)avatar_info >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      __args_0 = avatar_info->avatar_id;
      __l._M_array = &__args_0;
      __l._M_len = 1LL;
      std::allocator<unsigned long>::allocator(&__a);
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)&__x, __l, &__a);
      *(_DWORD *)(v3 + 64) = PlayerAvatarComp::addMirrorAvatars(
                               v39,
                               (const std::vector<long unsigned int> *)&__x,
                               (std::vector<long unsigned int> *)(v3 + 304),
                               AVATAR_SNAPSHOT_TYPE_NONE);
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)&__x);
      std::allocator<unsigned long>::~allocator(&__a);
      if ( *(_DWORD *)(v3 + 64) )
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/instable_spray_activity.cpp",
          "createAvatars",
          966);
        v40 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v72,
                (const char (*)[45])"addMirrorAvatars failed, formal_avatar_guid:");
        v41 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v40, &avatar_info->avatar_id);
        v42 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v41, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __y = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)&__y);
        common::milog::MiLogStream::~MiLogStream(&v72);
        memset(&__x, 0, sizeof(__x));
        std::vector<std::shared_ptr<Avatar>>::vector(&__x);
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store_n(retstr, 32LL);
        }
        std::make_pair<std::vector<std::shared_ptr<Avatar>>,int &>(retstr, &__x, (int *)(v3 + 64));
        std::vector<std::shared_ptr<Avatar>>::~vector(&__x);
        v43 = 0;
      }
      else if ( std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 304)) == 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v45 = Player::getAvatarComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)std::vector<unsigned long>::operator[](
                                             (std::vector<long unsigned int> *const)(v3 + 304),
                                             0LL) >> 3)
                      + 0x7FFF8000) )
          __asan_report_load8();
        PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 144), (uint64_t)v45);
        if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 144), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/instable_spray_activity.cpp",
            "createAvatars",
            977);
          v46 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v72,
                  (const char (*)[25])"avatar not found, guid: ");
          v47 = std::vector<unsigned long>::operator[]((std::vector<long unsigned int> *const)(v3 + 304), 0LL);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v46, v47);
          common::milog::MiLogStream::~MiLogStream(&v72);
          __y = -1;
          memset(&__x, 0, sizeof(__x));
          std::vector<std::shared_ptr<Avatar>>::vector(&__x);
          if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store_n(retstr, 32LL);
          }
          std::make_pair<std::vector<std::shared_ptr<Avatar>>,int>(retstr, &__x, &__y);
          std::vector<std::shared_ptr<Avatar>>::~vector(&__x);
          v48 = 0;
        }
        else
        {
          v49 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          std::shared_ptr<FightPropNtfParam>::shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v70, 0LL);
          v50 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          v51 = Creature::getMaxEnergy(v50);
          Creature::setCurEnergy(v49, v51, 0, (FightPropNtfParamPtr *)&v70);
          std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v70);
          v52 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          Creature::setCurHpFull(v52, 0);
          v53 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          __args_0 = Avatar::getGuid(v53);
          std::vector<unsigned long>::emplace_back<unsigned long>(
            (std::vector<long unsigned int> *const)(v3 + 240),
            &__args_0,
            &__args_0);
          v54 = std::move<std::shared_ptr<Avatar> &>((std::shared_ptr<Avatar> *)(v3 + 144));
          std::vector<std::shared_ptr<Avatar>>::emplace_back<std::shared_ptr<Avatar>>(
            (std::vector<std::shared_ptr<Avatar>> *const)(v3 + 176),
            v54,
            v54);
          v48 = 1;
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 144));
        v43 = v48 == 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/instable_spray_activity.cpp",
          "createAvatars",
          971);
        v44 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v72,
                (const char (*)[40])"added mirror avatar num incorrect, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __y = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)&__y);
        common::milog::MiLogStream::~MiLogStream(&v72);
        __y = -1;
        memset(&__x, 0, sizeof(__x));
        std::vector<std::shared_ptr<Avatar>>::vector(&__x);
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store_n(retstr, 32LL);
        }
        std::make_pair<std::vector<std::shared_ptr<Avatar>>,int>(retstr, &__x, &__y);
        std::vector<std::shared_ptr<Avatar>>::~vector(&__x);
        v43 = 0;
      }
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 304));
      if ( v43 )
      {
LABEL_92:
        v21 = 2;
        goto LABEL_93;
      }
      v21 = 1;
    }
LABEL_93:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 80));
    if ( v21 && v21 != 2 )
      goto LABEL_99;
    __gnu_cxx::__normal_iterator<InstableSprayDungeonAvatarInfo const*,std::vector<InstableSprayDungeonAvatarInfo>>::operator++(&__for_begin);
  }
  common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v3 + 432));
  __y = 0;
  v55 = std::move<std::vector<std::shared_ptr<Avatar>> &>((std::vector<std::shared_ptr<Avatar>> *)(v3 + 176));
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second + 7) >> 3) + 0x7FFF8000) )
  {
    v55 = (std::vector<std::shared_ptr<Avatar>> *)32;
    __asan_report_store_n(retstr, 32LL);
  }
  std::make_pair<std::vector<std::shared_ptr<Avatar>>,int>(retstr, v55, &__y);
LABEL_99:
  common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v3 + 432));
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 240));
  std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v3 + 176));
LABEL_100:
  if ( v73 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 907: range 0000000014535AFE-0000000014535BA3
void __cdecl InstableSprayActivity::createAvatars(InstableSprayDungeonContext const&)::{lambda(void)#1}::operator()(
        const InstableSprayActivity::createAvatars::<lambda()> *const __closure)
{
  __int64 this; // rax
  PlayerAvatarComp *AvatarComp; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)(this + 24) >> 3) + 0x7FFF8000) )
    this = __asan_report_load8();
  AvatarComp = Player::getAvatarComp(*(Player *const *)(this + 24));
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    AvatarComp = (PlayerAvatarComp *)__closure;
    __asan_report_load8();
  }
  PlayerAvatarComp::delInformalAvatarBatch(AvatarComp, __closure->__create_avatar_vec, 0LL, 0);
};

// Line 992: range 0000000014537AE8-0000000014537C7E
void __cdecl InstableSprayActivity::recallInDungeonAvatars(InstableSprayActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( !std::vector<unsigned long>::empty(&this->in_dungeon_avatar_guid_vec_) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/instable_spray_activity.cpp",
      "recallInDungeonAvatars",
      997);
    v1 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v4,
           (const char (*)[25])"recallInDungeonAvatars: ");
    common::milog::MiLogStream::operator<<<unsigned long>(v1, &this->in_dungeon_avatar_guid_vec_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(AvatarComp, &this->in_dungeon_avatar_guid_vec_) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "recallInDungeonAvatars",
        1000);
      v3 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v4,
             (const char (*)[64])"delInformalAvatarBatchAndReplaceByAvatarTeam failed, guid_vec: ");
      common::milog::MiLogStream::operator<<<unsigned long>(v3, &this->in_dungeon_avatar_guid_vec_);
      common::milog::MiLogStream::~MiLogStream(&v4);
    }
    std::vector<unsigned long>::clear(&this->in_dungeon_avatar_guid_vec_);
  }
};

// Line 1006: range 0000000014537C80-0000000014537EBC
void __cdecl InstableSprayActivity::onLeaveSceneEvent(InstableSprayActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  char v6[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 22 dungeon_scene_ptr:1008 80 80 16 context_opt:1013";
  *(_QWORD *)(v2 + 16) = InstableSprayActivity::onLeaveSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 48));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 48)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
      (std::optional<InstableSprayDungeonContext> *)(v2 + 80),
      v5);
    if ( std::optional<InstableSprayDungeonContext>::has_value((const std::optional<InstableSprayDungeonContext> *const)(v2 + 80)) )
      InstableSprayActivity::recallInDungeonAvatars(this);
    std::optional<InstableSprayDungeonContext>::~optional((std::optional<InstableSprayDungeonContext> *const)(v2 + 80));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 48));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 1022: range 0000000014537EBE-0000000014538004
std::vector<long unsigned int> *__cdecl InstableSprayActivity::avatarVecToGuidVec(
        std::vector<long unsigned int> *retstr,
        const std::vector<std::shared_ptr<Avatar>> *avatar_vec)
{
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::vector<std::shared_ptr<Avatar>>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::vector<std::shared_ptr<Avatar>>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 __args_0; // [rsp+28h] [rbp-48h] BYREF
  const std::vector<std::shared_ptr<Avatar>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::shared_ptr<Avatar> *avatar_ptr; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-30h] BYREF

  std::vector<unsigned long>::vector(retstr);
  __for_range = avatar_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<Avatar>>::begin(avatar_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Avatar>>::end(avatar_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Avatar> const*,std::vector<std::shared_ptr<Avatar>>>(
            &__for_begin,
            &__for_end) )
  {
    avatar_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> const*,std::vector<std::shared_ptr<Avatar>>>::operator*(&__for_begin);
    if ( std::operator==<Avatar>(avatar_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "avatarVecToGuidVec",
        1028);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v9, (const char (*)[19])"avatar ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    else
    {
      v2 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_ptr);
      __args_0 = Avatar::getGuid(v2);
      std::vector<unsigned long>::emplace_back<unsigned long>(retstr, &__args_0, &__args_0);
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> const*,std::vector<std::shared_ptr<Avatar>>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 1037: range 0000000014538006-00000000145384F3
void __cdecl InstableSprayActivity::setInDungeonAvatars(
        InstableSprayActivity *const this,
        std::vector<long unsigned int> *p_guid_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  PlayerAvatarComp *AvatarComp; // rcx
  char v7; // r15
  common::milog::MiLogStream *v8; // rax
  PlayerAvatarComp *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<long unsigned int> *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  const unsigned __int64 *guid; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Avatar> __a; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 25 need_recall_guid_vec:1039";
  *(_QWORD *)(v2 + 16) = InstableSprayActivity::setInDungeonAvatars;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v2 + 32));
  __for_range = &this->in_dungeon_avatar_guid_vec_;
  __for_begin._M_current = std::vector<unsigned long>::begin(&this->in_dungeon_avatar_guid_vec_)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(&this->in_dungeon_avatar_guid_vec_)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    guid = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
    v5 = 0;
    if ( common::tools::MiscUtils::isContains<unsigned long>(p_guid_vec, guid) )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)&__a, (uint64_t)AvatarComp);
    v5 = 1;
    if ( std::operator!=<Avatar>(&__a, 0LL) )
      v7 = 1;
    else
LABEL_13:
      v7 = 0;
    if ( v5 )
      std::shared_ptr<Avatar>::~shared_ptr(&__a);
    if ( v7 )
      std::vector<unsigned long>::emplace_back<unsigned long const&>(
        (std::vector<long unsigned int> *const)(v2 + 32),
        guid,
        guid);
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  if ( !std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/instable_spray_activity.cpp",
      "setInDungeonAvatars",
      1049);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v18,
           (const char (*)[43])"need recall avatar guid vec is not empty: ");
    common::milog::MiLogStream::operator<<<unsigned long>(v8, (const std::vector<long unsigned int> *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = Player::getAvatarComp(this->player_);
    if ( PlayerAvatarComp::delInformalAvatarBatch(v9, (const std::vector<long unsigned int> *)(v2 + 32), 0LL, 0) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "setInDungeonAvatars",
        1052);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v18,
              (const char (*)[39])"delInDungeonAvatars failed, guid_vec: ");
      common::milog::MiLogStream::operator<<<unsigned long>(v10, (const std::vector<long unsigned int> *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
  v11 = std::move<std::vector<unsigned long> &>(p_guid_vec);
  std::vector<unsigned long>::operator=(&this->in_dungeon_avatar_guid_vec_, v11);
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/instable_spray_activity.cpp",
    "setInDungeonAvatars",
    1057);
  v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v18,
          (const char (*)[21])"in dungeon avatars: ");
  common::milog::MiLogStream::operator<<<unsigned long>(v12, &this->in_dungeon_avatar_guid_vec_);
  common::milog::MiLogStream::~MiLogStream(&v18);
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v2 + 32));
  if ( v19 == (char *)v2 )
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

// Line 1061: range 00000000145384F4-00000000145388EE
void __fastcall InstableSprayActivity::recordSelectedTeamInfo(
        InstableSprayActivity *const this,
        uint32_t stage,
        uint32_t round,
        std::vector<InstableSprayDungeonAvatarInfo> *p_avatar_info_vec)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::pointer v8; // rax
  std::vector<InstableSprayDungeonTeamInfo>::size_type v9; // r15
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 v13; // r15
  std::vector<InstableSprayDungeonAvatarInfo> *v14; // rax
  std::vector<InstableSprayDungeonAvatarInfo> *v15; // rax
  InstableSprayDungeonTeamInfo *v16; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  InstableSprayActivity::StageData *stage_data; // [rsp+30h] [rbp-E0h]
  std::vector<InstableSprayDungeonTeamInfo> *team_info_vec; // [rsp+38h] [rbp-D8h]
  std::vector<InstableSprayDungeonAvatarInfo> v22; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+80h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 10 stage:1060 48 4 10 round:1060 64 8 9 iter:1062";
  *(_QWORD *)(v4 + 16) = InstableSprayActivity::recordSelectedTeamInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 32) = stage;
  *(_DWORD *)(v4 + 48) = round;
  *(std::map<unsigned int,InstableSprayActivity::StageData>::iterator *)(v4 + 64) = std::map<unsigned int,InstableSprayActivity::StageData>::find(
                                                                                      &this->stage_data_map_,
                                                                                      (const std::map<unsigned int,InstableSprayActivity::StageData>::key_type *)(v4 + 32));
  __y._M_node = std::map<unsigned int,InstableSprayActivity::StageData>::end(&this->stage_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> >::_Self *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/instable_spray_activity.cpp",
      "recordSelectedTeamInfo",
      1065);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v23,
           (const char (*)[28])"stage not found, stage_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,InstableSprayActivity::StageData> > *const)(v4 + 64));
    stage_data = &v8->second;
    team_info_vec = &v8->second.team_info_vec;
    v9 = *(unsigned int *)(v4 + 48);
    if ( v9 <= std::vector<InstableSprayDungeonTeamInfo>::size(&v8->second.team_info_vec) )
    {
      v13 = *(unsigned int *)(v4 + 48);
      if ( v13 == std::vector<InstableSprayDungeonTeamInfo>::size(team_info_vec) )
      {
        v14 = std::move<std::vector<InstableSprayDungeonAvatarInfo> &>(p_avatar_info_vec);
        std::vector<InstableSprayDungeonAvatarInfo>::vector(&v22, v14);
        std::vector<InstableSprayDungeonTeamInfo>::emplace_back<InstableSprayDungeonTeamInfo>(
          team_info_vec,
          (InstableSprayDungeonTeamInfo *)&v22,
          (InstableSprayDungeonTeamInfo *)&v22);
      }
      else
      {
        v15 = std::move<std::vector<InstableSprayDungeonAvatarInfo> &>(p_avatar_info_vec);
        std::vector<InstableSprayDungeonAvatarInfo>::vector(&v22, v15);
        v16 = std::vector<InstableSprayDungeonTeamInfo>::operator[](team_info_vec, *(unsigned int *)(v4 + 48));
        InstableSprayDungeonTeamInfo::operator=(v16, (InstableSprayDungeonTeamInfo *)&v22);
      }
      InstableSprayDungeonTeamInfo::~InstableSprayDungeonTeamInfo((InstableSprayDungeonTeamInfo *const)&v22);
      BaseActivity::notifyClientData(this, 0);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "recordSelectedTeamInfo",
        1073);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v23,
              (const char (*)[26])"invalid round, stage_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])", round: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  if ( v24 == (char *)v4 )
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

// Line 1094: range 00000000145388F0-0000000014538F50
void __cdecl InstableSprayActivity::setPlayerToBornPosition(
        InstableSprayActivity *const this,
        const DungeonScenePtr *dungeon_scene_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // r14
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  Entity *v13; // rax
  Avatar *v14; // rax
  Avatar *v15; // rax
  Scene *v16; // r14
  uint32_t Uid; // eax
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 19 cur_avatar_ptr:1104 80 48 20 player_location:1118";
  *(_QWORD *)(v2 + 16) = InstableSprayActivity::setPlayerToBornPosition;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  if ( !std::operator==<DungeonScene>(dungeon_scene_ptr, 0LL) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
    scene_script_config_ptr = Scene::getScriptConfig((const Scene *const)v5);
    if ( scene_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getAvatarComp(this->player_);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 48));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/instable_spray_activity.cpp",
          "setPlayerToBornPosition",
          1107);
        v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v20,
                (const char (*)[24])"getCurAvatar fail, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      else
      {
        v11 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8();
        v12 = *(_QWORD *)v11 + 80LL;
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, Vector3 *))v12)(v11, &scene_script_config_ptr->born_pos);
        v13 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        Entity::setRotation(v13, &scene_script_config_ptr->born_rot);
        v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        Avatar::setLastValidPos(v14, &scene_script_config_ptr->born_pos);
        v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        Avatar::setLastValidRot(v15, &scene_script_config_ptr->born_rot);
        ScenePlayerLocation::ScenePlayerLocation((ScenePlayerLocation *const)(v2 + 80));
        if ( (((unsigned __int8)scene_script_config_ptr - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->born_pos >> 3)
                                                                               + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->born_pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)scene_script_config_ptr - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_pos.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&scene_script_config_ptr->born_pos, 12LL);
        }
        *(Vector3 *)(v2 + 80) = scene_script_config_ptr->born_pos;
        if ( *(char *)(((unsigned __int64)&scene_script_config_ptr->born_rot >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)scene_script_config_ptr - 29) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_rot.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&scene_script_config_ptr->born_rot, 12LL);
        }
        *(Vector3 *)(v2 + 92) = scene_script_config_ptr->born_rot;
        *(Vector3 *)(v2 + 104) = scene_script_config_ptr->born_pos;
        *(Vector3 *)(v2 + 116) = scene_script_config_ptr->born_rot;
        v16 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        Scene::setPlayerLocation(v16, Uid, (const ScenePlayerLocation *)(v2 + 80));
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "setPlayerToBornPosition",
        1100);
      v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v20,
             (const char (*)[29])"getScriptConfig fail, scene:");
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
      v8 = common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v6, v7);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
  if ( v21 == (char *)v2 )
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

// Line 1127: range 0000000014538F52-0000000014539515
int32_t __cdecl InstableSprayActivity::checkHasDuplicatedAvatar(
        const InstableSprayActivity *const this,
        const std::vector<InstableSprayDungeonAvatarInfo> *avatar_info_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  TrialAvatarExcelConfigMgr *p_trial_avatar_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v9; // rax
  int v10; // r15d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  std::vector<InstableSprayDungeonAvatarInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::vector<InstableSprayDungeonAvatarInfo>::const_iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  const std::vector<InstableSprayDungeonAvatarInfo> *__for_range; // [rsp+38h] [rbp-138h]
  const InstableSprayDungeonAvatarInfo *avatar_info; // [rsp+40h] [rbp-130h]
  const data::TrialAvatarExcelConfig *trial_avatar_config_ptr; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-110h] BYREF
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 avatar_id:1132 48 16 22 formal_avatar_ptr:1147 80 48 18 avatar_id_set:1129";
  *(_QWORD *)(v3 + 16) = InstableSprayActivity::checkHasDuplicatedAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 80));
  __for_range = avatar_info_vec;
  __for_begin._M_current = std::vector<InstableSprayDungeonAvatarInfo>::begin(avatar_info_vec)._M_current;
  __for_end._M_current = std::vector<InstableSprayDungeonAvatarInfo>::end(avatar_info_vec)._M_current;
  while ( __gnu_cxx::operator!=<InstableSprayDungeonAvatarInfo const*,std::vector<InstableSprayDungeonAvatarInfo>>(
            &__for_begin,
            &__for_end) )
  {
    avatar_info = __gnu_cxx::__normal_iterator<InstableSprayDungeonAvatarInfo const*,std::vector<InstableSprayDungeonAvatarInfo>>::operator*(&__for_begin);
    *(_DWORD *)(v3 + 32) = 0;
    if ( *(char *)(((unsigned __int64)&avatar_info->is_trial >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&avatar_info->is_trial);
    if ( avatar_info->is_trial )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      p_trial_avatar_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.trial_avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)avatar_info >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      trial_avatar_config_ptr = data::TrialAvatarExcelConfigMgrBase::findTrialAvatarExcelConfig(
                                  p_trial_avatar_config_mgr,
                                  avatar_info->avatar_id);
      std::shared_ptr<Config>::~shared_ptr(&v20);
      if ( !trial_avatar_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/instable_spray_activity.cpp",
          "checkHasDuplicatedAvatar",
          1139);
        v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v21,
               (const char (*)[26])"invalid trial avatar id: ");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &avatar_info->avatar_id);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v2 = -1;
        goto LABEL_28;
      }
      if ( *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&trial_avatar_config_ptr->avatar.avatar_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 32) = trial_avatar_config_ptr->avatar.avatar_id;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)avatar_info >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 48), (uint64_t)AvatarComp);
      if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 48), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/instable_spray_activity.cpp",
          "checkHasDuplicatedAvatar",
          1150);
        v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v22,
               (const char (*)[39])"formal avatar not found, avatar_guid: ");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &avatar_info->avatar_id);
        common::milog::MiLogStream::~MiLogStream(&v22);
        v2 = -1;
        v10 = 0;
      }
      else
      {
        v11 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        *(_DWORD *)(v3 + 32) = Avatar::getAvatarId(v11);
        v10 = 1;
      }
      std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 48));
      if ( v10 != 1 )
        goto LABEL_28;
    }
    v12 = std::set<unsigned int>::emplace<unsigned int &>(
            (std::set<unsigned int> *const)(v3 + 80),
            (unsigned int *)(v3 + 32),
            (unsigned int *)(v3 + 32));
    if ( !v12.second )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/instable_spray_activity.cpp",
        "checkHasDuplicatedAvatar",
        1157);
      v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v22,
              (const char (*)[22])"duplicate avatar id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
      v2 = -1;
      goto LABEL_28;
    }
    __gnu_cxx::__normal_iterator<InstableSprayDungeonAvatarInfo const*,std::vector<InstableSprayDungeonAvatarInfo>>::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_28:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 80));
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 1165: range 0000000014539516-0000000014539C4A
void __cdecl InstableSprayActivity::onPostEnterSceneEvent(
        InstableSprayActivity *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::vector<unsigned int>::size_type v8; // r14
  std::vector<unsigned int>::const_reference v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  InstableSprayDungeonContext *context; // [rsp+10h] [rbp-1C0h]
  const data::InstableSprayStageExcelConfig *stage_config_ptr; // [rsp+18h] [rbp-1B8h]
  const data::InstableSprayLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-1A8h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-190h] BYREF
  char v21[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 13 stage_id:1178 64 4 10 round:1179 80 4 18 next_level_id:1192 96 16 22 dungeon_scene_ptr"
                        ":1167 128 40 11 notify:1200 208 80 16 context_opt:1172";
  *(_QWORD *)(v2 + 16) = InstableSprayActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 96));
  if ( !std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 96), 0LL) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    DungeonScene::getDungeonExtraData<InstableSprayDungeonContext>(
      (std::optional<InstableSprayDungeonContext> *)(v2 + 208),
      v5);
    if ( std::optional<InstableSprayDungeonContext>::has_value((const std::optional<InstableSprayDungeonContext> *const)(v2 + 208)) )
    {
      context = std::optional<InstableSprayDungeonContext>::value((std::optional<InstableSprayDungeonContext> *const)(v2 + 208));
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = context->stage_id;
      if ( *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&context->round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 64) = context->round;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
      stage_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayStageExcelConfig(
                           &v6->design_config.txt_config_mgr.activity_instable_spray_mgr,
                           *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( stage_config_ptr )
      {
        v8 = *(unsigned int *)(v2 + 64);
        if ( v8 < std::vector<unsigned int>::size(&stage_config_ptr->level_id_list) )
        {
          v9 = std::vector<unsigned int>::operator[](&stage_config_ptr->level_id_list, *(unsigned int *)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 80) = *v9;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v19);
          v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
          level_config_ptr = data::ActivityInstableSprayExcelConfigMgrBase::findInstableSprayLevelExcelConfig(
                               &v10->design_config.txt_config_mgr.activity_instable_spray_mgr,
                               *(_DWORD *)(v2 + 80));
          std::shared_ptr<Config>::~shared_ptr(&v19);
          if ( level_config_ptr )
          {
            proto::InstableSprayLevelFinishNotify::InstableSprayLevelFinishNotify((proto::InstableSprayLevelFinishNotify *const)(v2 + 128));
            proto::InstableSprayLevelFinishNotify::set_stage_id(
              (proto::InstableSprayLevelFinishNotify *const)(v2 + 128),
              *(_DWORD *)(v2 + 48));
            proto::InstableSprayLevelFinishNotify::set_round(
              (proto::InstableSprayLevelFinishNotify *const)(v2 + 128),
              *(_DWORD *)(v2 + 64));
            proto::InstableSprayLevelFinishNotify::set_level_id(
              (proto::InstableSprayLevelFinishNotify *const)(v2 + 128),
              *(_DWORD *)(v2 + 80));
            proto::InstableSprayLevelFinishNotify::set_is_skip_black_screen(
              (proto::InstableSprayLevelFinishNotify *const)(v2 + 128),
              1);
            if ( *(char *)(((unsigned __int64)&context->is_need_switch_team >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&context->is_need_switch_team);
            proto::InstableSprayLevelFinishNotify::set_is_need_switch_team(
              (proto::InstableSprayLevelFinishNotify *const)(v2 + 128),
              context->is_need_switch_team);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
            proto::InstableSprayLevelFinishNotify::~InstableSprayLevelFinishNotify((proto::InstableSprayLevelFinishNotify *const)(v2 + 128));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/instable_spray_activity.cpp",
              "onPostEnterSceneEvent",
              1196);
            v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v20,
                    (const char (*)[35])"level config not found, stage_id: ");
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v11,
                    (const unsigned int *)(v2 + 48));
            v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])", round: ");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v2 + 64));
            v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v14,
                    (const char (*)[13])", level_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v20);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/instable_spray_activity.cpp",
          "onPostEnterSceneEvent",
          1183);
        v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v20,
               (const char (*)[35])"stage config not found, stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
    }
    std::optional<InstableSprayDungeonContext>::~optional((std::optional<InstableSprayDungeonContext> *const)(v2 + 208));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
