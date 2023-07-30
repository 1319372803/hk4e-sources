// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/fungus_fighter_activity.cpp

// Line 37: range 0000000015069976-0000000015069B15
void __cdecl FungusData::fromBin(FungusData *const this, const proto::FungusBin *fungus_bin)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx
  bool is_cultivate; // cl
  uint32_t v5; // ecx
  uint32_t v6; // ecx

  v2 = proto::FungusBin::fungus_id(fungus_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->fungus_id = v2;
  v3 = proto::FungusBin::name_id(fungus_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->name_id);
  }
  this->name_id = v3;
  is_cultivate = proto::FungusBin::is_cultivate(fungus_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cultivate >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cultivate >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_cultivate);
  }
  this->is_cultivate = is_cultivate;
  v5 = proto::FungusBin::capture_order(fungus_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->capture_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->capture_order);
  }
  this->capture_order = v5;
  v6 = proto::FungusBin::min_cultivate_step(fungus_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_cultivate_step >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_cultivate_step >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_cultivate_step);
  }
  this->min_cultivate_step = v6;
};

// Line 46: range 0000000015069B16-0000000015069CB4
void __cdecl FungusData::toBin(const FungusData *const this, proto::FungusBin *fungus_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusBin::set_fungus_id(fungus_bin, this->fungus_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusBin::set_name_id(fungus_bin, this->name_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cultivate >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cultivate >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_cultivate);
  }
  proto::FungusBin::set_is_cultivate(fungus_bin, this->is_cultivate);
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->capture_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusBin::set_capture_order(fungus_bin, this->capture_order);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_cultivate_step >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_cultivate_step >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusBin::set_min_cultivate_step(fungus_bin, this->min_cultivate_step);
};

// Line 55: range 0000000015069CB6-0000000015069E54
void __cdecl FungusData::toClient(const FungusData *const this, proto::FungusDetail *fungus_detail)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusDetail::set_fungus_id(fungus_detail, this->fungus_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusDetail::set_name_id(fungus_detail, this->name_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cultivate >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cultivate >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_cultivate);
  }
  proto::FungusDetail::set_is_cultivate(fungus_detail, this->is_cultivate);
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->capture_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusDetail::set_capture_order(fungus_detail, this->capture_order);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_cultivate_step >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_cultivate_step >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusDetail::set_min_cultivate_step(fungus_detail, this->min_cultivate_step);
};

// Line 64: range 0000000015069E56-0000000015069F53
void __cdecl FungusTrainingDungeonData::fromBin(
        FungusTrainingDungeonData *const this,
        const proto::FungusTrainingDungeonBin *bin)
{
  uint32_t v2; // ecx
  bool is_open; // cl
  uint32_t v4; // ecx

  v2 = proto::FungusTrainingDungeonBin::dungeon_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->dungeon_id = v2;
  is_open = proto::FungusTrainingDungeonBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  v4 = proto::FungusTrainingDungeonBin::best_score(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = v4;
};

// Line 71: range 0000000015069F54-000000001506A052
void __cdecl FungusTrainingDungeonData::toBin(
        const FungusTrainingDungeonData *const this,
        proto::FungusTrainingDungeonBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingDungeonBin::set_dungeon_id(bin, this->dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::FungusTrainingDungeonBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingDungeonBin::set_best_score(bin, this->best_score);
};

// Line 78: range 000000001506A054-000000001506A152
void __cdecl FungusTrainingDungeonData::toClient(
        const FungusTrainingDungeonData *const this,
        proto::FungusTrainingDungeonDetail *fungus_training_detail)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingDungeonDetail::set_dungeon_id(fungus_training_detail, this->dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::FungusTrainingDungeonDetail::set_is_open(fungus_training_detail, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingDungeonDetail::set_best_score(fungus_training_detail, this->best_score);
};

// Line 85: range 000000001506A154-000000001506AABC
int32_t __cdecl FungusFighterActivity::fromScheduleBin(
        FungusFighterActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FungusData *v5; // rax
  unsigned int *v6; // rcx
  FungusData *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int *v10; // rcx
  bool *v11; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >,bool> v12; // rax
  common::milog::MiLogStream *v13; // r14
  uint32_t v14; // edx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  FungusTrainingDungeonData *v19; // rax
  unsigned int *v20; // rcx
  FungusTrainingDungeonData *v21; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  const proto::FungusTrainingProgressBin *v24; // rax
  int32_t result; // eax
  bool is_open; // [rsp+17h] [rbp-179h] BYREF
  google::protobuf::RepeatedPtrField<proto::FungusBin>::const_iterator __for_begin; // [rsp+18h] [rbp-178h] BYREF
  google::protobuf::RepeatedPtrField<proto::FungusBin>::const_iterator __for_end; // [rsp+20h] [rbp-170h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-168h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+30h] [rbp-160h]
  const proto::FungusFighterScheduleBin *schedule_bin; // [rsp+38h] [rbp-158h]
  const google::protobuf::RepeatedPtrField<proto::FungusBin> *__for_range; // [rsp+40h] [rbp-150h]
  const google::protobuf::RepeatedPtrField<proto::FungusPlotStageBin> *__for_range_0; // [rsp+48h] [rbp-148h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+50h] [rbp-140h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-138h]
  const unsigned int *unlock_camp_id; // [rsp+60h] [rbp-130h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_2; // [rsp+68h] [rbp-128h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+70h] [rbp-120h]
  const unsigned int *unlock_cultivate_id; // [rsp+78h] [rbp-118h]
  const google::protobuf::RepeatedPtrField<proto::FungusTrainingDungeonBin> *__for_range_3; // [rsp+80h] [rbp-110h]
  const proto::FungusTrainingDungeonBin *training_dungeon_bin; // [rsp+88h] [rbp-108h]
  const proto::FungusPlotStageBin *plot_stage_bin; // [rsp+90h] [rbp-100h]
  const proto::FungusBin *fungus_bin; // [rsp+98h] [rbp-F8h]
  common::milog::MiLogStream v44; // [rsp+A0h] [rbp-F0h] BYREF
  char v45[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:131 64 12 23 fungus_dungeon_data:129 96 20 14 fungus_data:90";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -217841664;
  v4[536862724] = -202116109;
  std::unordered_map<unsigned int,FungusData>::clear(&this->fungus_id_data_map_);
  schedule_bin = proto::ActivityScheduleBin::fungus_fighter_bin(bin);
  __for_range = proto::FungusFighterScheduleBin::fungus_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FungusBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FungusBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FungusBin const>::operator!=(&__for_begin, &__for_end) )
  {
    fungus_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FungusBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 96) = 0;
    *(_DWORD *)(v2 + 100) = 0;
    *(_BYTE *)(v2 + 104) = 0;
    *(_DWORD *)(v2 + 108) = 0;
    *(_DWORD *)(v2 + 112) = 0;
    FungusData::fromBin((FungusData *const)(v2 + 96), fungus_bin);
    *(_DWORD *)(v2 + 48) = *(_DWORD *)(v2 + 96);
    v5 = std::move<FungusData &>((FungusData *)(v2 + 96));
    v8 = std::unordered_map<unsigned int,FungusData>::emplace<unsigned int &,FungusData>(
           &this->fungus_id_data_map_,
           (unsigned int *)(v2 + 48),
           v5,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "fromScheduleBin",
        95);
      v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v44,
             (const char (*)[37])"[FungusFighter] Duplicate fungus_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::FungusBin const>::operator++(&__for_begin);
  }
  std::map<unsigned int,bool>::clear(&this->fungus_plot_stage_map_);
  __for_range_0 = proto::FungusFighterScheduleBin::fungus_plot_stage_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FungusPlotStageBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FungusPlotStageBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FungusPlotStageBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FungusPlotStageBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FungusPlotStageBin>::iterator *)&__for_end) )
  {
    plot_stage_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FungusPlotStageBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::FungusPlotStageBin> *const)&__for_begin);
    is_open = proto::FungusPlotStageBin::is_open(plot_stage_bin);
    *(_DWORD *)(v2 + 48) = proto::FungusPlotStageBin::stage_id(plot_stage_bin);
    v12 = std::map<unsigned int,bool>::emplace<unsigned int,bool>(
            &this->fungus_plot_stage_map_,
            (unsigned int *)(v2 + 48),
            &is_open,
            v10,
            v11);
    if ( !v12.second )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "fromScheduleBin",
        103);
      v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v44,
              (const char (*)[42])"[FungusFighter] Duplicate plot stage id: ");
      *(_DWORD *)(v2 + 48) = proto::FungusPlotStageBin::stage_id(plot_stage_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::FungusPlotStageBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::FungusPlotStageBin> *const)&__for_begin);
  }
  v14 = proto::FungusFighterScheduleBin::capture_order(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_order_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_order_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->capture_order_);
  }
  this->capture_order_ = v14;
  std::unordered_set<unsigned int>::clear(&this->unlock_camp_id_set_);
  __for_range_1 = proto::FungusFighterScheduleBin::unlock_camp_id_list(schedule_bin);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_0 != __for_end_0 )
  {
    unlock_camp_id = __for_begin_0;
    v15 = std::unordered_set<unsigned int>::emplace<unsigned int const&>(
            &this->unlock_camp_id_set_,
            __for_begin_0,
            (const unsigned int *)&this->unlock_camp_id_set_);
    if ( !v15.second )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "fromScheduleBin",
        113);
      v16 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v44,
              (const char (*)[33])"[FungusFighter] unlock camp id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, unlock_camp_id);
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    ++__for_begin_0;
  }
  std::unordered_set<unsigned int>::clear(&this->unlock_cultivate_id_set_);
  __for_range_2 = proto::FungusFighterScheduleBin::unlock_cultivate_id_list(schedule_bin);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_2);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_2);
  while ( __for_begin_1 != __for_end_1 )
  {
    unlock_cultivate_id = __for_begin_1;
    v17 = std::unordered_set<unsigned int>::emplace<unsigned int const&>(
            &this->unlock_cultivate_id_set_,
            __for_begin_1,
            (const unsigned int *)&this->unlock_cultivate_id_set_);
    if ( !v17.second )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "fromScheduleBin",
        122);
      v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v44,
              (const char (*)[38])"[FungusFighter] unlock cultivate id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, unlock_cultivate_id);
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    ++__for_begin_1;
  }
  std::map<unsigned int,FungusTrainingDungeonData>::clear(&this->fungus_training_dungeon_map_);
  __for_range_3 = proto::FungusFighterScheduleBin::fungus_training_dungeon_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FungusTrainingDungeonBin>::begin(__for_range_3).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FungusTrainingDungeonBin>::end(__for_range_3).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FungusTrainingDungeonBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FungusTrainingDungeonBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::FungusTrainingDungeonBin>::iterator *)&__for_end) )
  {
    training_dungeon_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FungusTrainingDungeonBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::FungusTrainingDungeonBin> *const)&__for_begin);
    *(_DWORD *)(v2 + 64) = 0;
    *(_BYTE *)(v2 + 68) = 1;
    *(_DWORD *)(v2 + 72) = 0;
    FungusTrainingDungeonData::fromBin((FungusTrainingDungeonData *const)(v2 + 64), training_dungeon_bin);
    *(_DWORD *)(v2 + 48) = *(_DWORD *)(v2 + 64);
    v19 = std::move<FungusTrainingDungeonData &>((FungusTrainingDungeonData *)(v2 + 64));
    v22 = std::map<unsigned int,FungusTrainingDungeonData>::emplace<unsigned int &,FungusTrainingDungeonData>(
            &this->fungus_training_dungeon_map_,
            (unsigned int *)(v2 + 48),
            v19,
            v20,
            v21);
    if ( !v22.second )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "fromScheduleBin",
        134);
      v23 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v44,
              (const char (*)[48])"[FungusFighter] Duplicate training_dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v44);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::FungusTrainingDungeonBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::FungusTrainingDungeonBin> *const)&__for_begin);
  }
  v24 = proto::FungusFighterScheduleBin::fungus_training_progress_bin(schedule_bin);
  if ( FungusFighterRuntimeMgr::fromProgressBin(&this->runtime_mgr_, v24) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "fromScheduleBin",
      140);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v44,
      (const char (*)[39])"[FungusFighter] fromProgressBin failed");
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  result = 0;
  if ( v45 == (char *)v2 )
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

// Line 146: range 000000001506AABE-000000001506AF32
int32_t __cdecl FungusFighterActivity::toScheduleBin(
        const FungusFighterActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  proto::FungusTrainingProgressBin *v4; // rax
  std::unordered_map<unsigned int,FungusData>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,FungusData>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  proto::FungusFighterScheduleBin *schedule_bin; // [rsp+20h] [rbp-B0h]
  const std::unordered_map<unsigned int,FungusData> *__for_range; // [rsp+28h] [rbp-A8h]
  const std::map<unsigned int,bool> *__for_range_0; // [rsp+30h] [rbp-A0h]
  const std::map<unsigned int,FungusTrainingDungeonData> *__for_range_1; // [rsp+38h] [rbp-98h]
  const std::pair<unsigned int const,FungusTrainingDungeonData> *v12; // [rsp+40h] [rbp-90h]
  std::tuple_element<0,const std::pair<unsigned int const,FungusTrainingDungeonData> >::type *__0; // [rsp+48h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int const,FungusTrainingDungeonData> >::type *fungus_dungeon_data; // [rsp+50h] [rbp-80h]
  proto::FungusTrainingDungeonBin *fungus_dungeon_bin; // [rsp+58h] [rbp-78h]
  const std::pair<unsigned int const,bool> *v16; // [rsp+60h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *stage_id; // [rsp+68h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_open; // [rsp+70h] [rbp-60h]
  proto::FungusPlotStageBin *plot_stage_bin; // [rsp+78h] [rbp-58h]
  const std::pair<unsigned int const,FungusData> *v20; // [rsp+80h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,FungusData> >::type *_; // [rsp+88h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,FungusData> >::type *fungus_data; // [rsp+90h] [rbp-40h]
  proto::FungusBin *fungus_bin; // [rsp+98h] [rbp-38h]
  common::milog::MiLogStream v24; // [rsp+A0h] [rbp-30h] BYREF

  schedule_bin = proto::ActivityScheduleBin::mutable_fungus_fighter_bin(bin);
  __for_range = &this->fungus_id_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,FungusData>::begin(&this->fungus_id_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,FungusData>::end(&this->fungus_id_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,FungusData>,false>(&__for_begin, &__for_end) )
  {
    v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusData>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,FungusData>(v20);
    fungus_data = (std::tuple_element<1,const std::pair<unsigned int const,FungusData> >::type *)std::get<1ul,unsigned int const,FungusData>(v20);
    fungus_bin = proto::FungusFighterScheduleBin::add_fungus_bin_list(schedule_bin);
    FungusData::toBin(fungus_data, fungus_bin);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusData>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->fungus_plot_stage_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false>::__node_type *)std::map<unsigned int,bool>::begin(&this->fungus_plot_stage_map_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false>::__node_type *)std::map<unsigned int,bool>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Self *)&__for_end) )
  {
    v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> > *const)&__for_begin);
    stage_id = std::get<0ul,unsigned int const,bool>(v16);
    is_open = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v16);
    plot_stage_bin = proto::FungusFighterScheduleBin::add_fungus_plot_stage_bin_list(schedule_bin);
    if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FungusPlotStageBin::set_stage_id(plot_stage_bin, *stage_id);
    if ( *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_open & 7) >= *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_open);
    }
    proto::FungusPlotStageBin::set_is_open(plot_stage_bin, *is_open);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_order_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_order_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FungusFighterScheduleBin::set_capture_order(schedule_bin, this->capture_order_);
  v2 = proto::FungusFighterScheduleBin::mutable_unlock_camp_id_list(schedule_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->unlock_camp_id_set_, v2);
  v3 = proto::FungusFighterScheduleBin::mutable_unlock_cultivate_id_list(schedule_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->unlock_cultivate_id_set_,
    v3);
  __for_range_1 = &this->fungus_training_dungeon_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false>::__node_type *)std::map<unsigned int,FungusTrainingDungeonData>::begin(&this->fungus_training_dungeon_map_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false>::__node_type *)std::map<unsigned int,FungusTrainingDungeonData>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self *)&__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> > *const)&__for_begin);
    __0 = std::get<0ul,unsigned int const,FungusTrainingDungeonData>(v12);
    fungus_dungeon_data = (std::tuple_element<1,const std::pair<unsigned int const,FungusTrainingDungeonData> >::type *)std::get<1ul,unsigned int const,FungusTrainingDungeonData>(v12);
    fungus_dungeon_bin = proto::FungusFighterScheduleBin::add_fungus_training_dungeon_bin_list(schedule_bin);
    FungusTrainingDungeonData::toBin(fungus_dungeon_data, fungus_dungeon_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> > *const)&__for_begin);
  }
  v4 = proto::FungusFighterScheduleBin::mutable_fungus_training_progress_bin(schedule_bin);
  if ( FungusFighterRuntimeMgr::toProgressBin(&this->runtime_mgr_, v4) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "toScheduleBin",
      169);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v24,
      (const char (*)[37])"[FungusFighter] toProgressBin failed");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  return 0;
};

// Line 175: range 000000001506AF34-000000001506B4C2
int32_t __cdecl FungusFighterActivity::toClient(FungusFighterActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::unordered_map<unsigned int,FungusData>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,FungusData>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  proto::FungusFighterDetailInfo *detail_info; // [rsp+30h] [rbp-B0h]
  std::unordered_map<unsigned int,FungusData> *__for_range; // [rsp+38h] [rbp-A8h]
  std::map<unsigned int,bool> *__for_range_0; // [rsp+40h] [rbp-A0h]
  std::map<unsigned int,FungusTrainingDungeonData> *__for_range_1; // [rsp+48h] [rbp-98h]
  const std::pair<unsigned int const,FungusTrainingDungeonData> *v15; // [rsp+50h] [rbp-90h]
  std::tuple_element<0,const std::pair<unsigned int const,FungusTrainingDungeonData> >::type *__0; // [rsp+58h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int const,FungusTrainingDungeonData> >::type *fungus_dungeon_data; // [rsp+60h] [rbp-80h]
  proto::FungusTrainingDungeonDetail *fungus_dungeon_detail; // [rsp+68h] [rbp-78h]
  const std::pair<unsigned int const,bool> *v19; // [rsp+70h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *stage_id; // [rsp+78h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_open; // [rsp+80h] [rbp-60h]
  proto::FungusPlotStageDetail *plot_detail; // [rsp+88h] [rbp-58h]
  std::pair<unsigned int const,FungusData> *__in; // [rsp+90h] [rbp-50h]
  std::tuple_element<0,std::pair<unsigned int const,FungusData> >::type *_; // [rsp+98h] [rbp-48h]
  std::tuple_element<1,std::pair<unsigned int const,FungusData> >::type *fungus_data; // [rsp+A0h] [rbp-40h]
  proto::FungusDetail *fungus_detail; // [rsp+A8h] [rbp-38h]
  common::milog::MiLogStream v27; // [rsp+B0h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "toClient",
      178);
    v2 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v27,
           (const char (*)[52])"[FungusFighter] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    return -1;
  }
  else
  {
    detail_info = proto::ActivityInfo::mutable_fungus_fighter_info(activity_info);
    __for_range = &this->fungus_id_data_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,FungusData>::begin(&this->fungus_id_data_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,FungusData>::end(&this->fungus_id_data_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,FungusData>,false>(&__for_begin, &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,FungusData>(__in);
      fungus_data = std::get<1ul,unsigned int const,FungusData>(__in);
      fungus_detail = proto::FungusFighterDetailInfo::add_fungus_detail_list(detail_info);
      FungusData::toClient(fungus_data, fungus_detail);
      std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false>::operator++(&__for_begin);
    }
    v4 = proto::FungusFighterDetailInfo::mutable_unlock_camp_id_list(detail_info);
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
      &this->unlock_camp_id_set_,
      v4);
    v5 = proto::FungusFighterDetailInfo::mutable_finish_camp_id_list(detail_info);
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
      &this->finish_camp_id_set_,
      v5);
    v6 = proto::FungusFighterDetailInfo::mutable_unlock_cultivate_id_list(detail_info);
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
      &this->unlock_cultivate_id_set_,
      v6);
    __for_range_0 = &this->fungus_plot_stage_map_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false>::__node_type *)std::map<unsigned int,bool>::begin(&this->fungus_plot_stage_map_)._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false>::__node_type *)std::map<unsigned int,bool>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *)&__for_end) )
    {
      v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)&__for_begin);
      stage_id = std::get<0ul,unsigned int const,bool>(v19);
      is_open = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v19);
      plot_detail = proto::FungusFighterDetailInfo::add_plot_stage_detail_list(detail_info);
      if ( *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)stage_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stage_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::FungusPlotStageDetail::set_stage_id(plot_detail, *stage_id);
      if ( *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_open & 7) >= *(_BYTE *)(((unsigned __int64)is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(is_open);
      }
      proto::FungusPlotStageDetail::set_is_open(plot_detail, *is_open);
      std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)&__for_begin);
    }
    __for_range_1 = &this->fungus_training_dungeon_map_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false>::__node_type *)std::map<unsigned int,FungusTrainingDungeonData>::begin(&this->fungus_training_dungeon_map_)._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false>::__node_type *)std::map<unsigned int,FungusTrainingDungeonData>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self *)&__for_end) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> > *const)&__for_begin);
      __0 = std::get<0ul,unsigned int const,FungusTrainingDungeonData>(v15);
      fungus_dungeon_data = (std::tuple_element<1,const std::pair<unsigned int const,FungusTrainingDungeonData> >::type *)std::get<1ul,unsigned int const,FungusTrainingDungeonData>(v15);
      fungus_dungeon_detail = proto::FungusFighterDetailInfo::add_training_dungeon_detail_list(detail_info);
      FungusTrainingDungeonData::toClient(fungus_dungeon_data, fungus_dungeon_detail);
      std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> > *const)&__for_begin);
    }
    if ( FungusFighterRuntimeMgr::toClient(&this->runtime_mgr_, detail_info) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "toClient",
        203);
      v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v27,
             (const char (*)[51])"[FungusFighter] runtime_mgr_ toClient fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      return -1;
    }
    else
    {
      return 0;
    }
  }
};

// Line 210: range 000000001506B4C4-000000001506B6B9
int32_t __cdecl FungusFighterActivity::init(FungusFighterActivity *const this)
{
  FungusFighterActivity *v1; // rdx
  unsigned __int64 v2; // rax
  char v3; // al
  std::unordered_map<unsigned int,data::FungusCampExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,data::FungusCampExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,data::FungusCampExcelConfig> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,data::FungusCampExcelConfig> *v8; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::FungusCampExcelConfig> >::type *camp_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FungusCampExcelConfig> >::type *_; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v11; // [rsp+40h] [rbp-10h] BYREF

  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_8;
  v1 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v2)(v1) )
LABEL_8:
    v3 = 1;
  else
    v3 = 0;
  if ( v3 )
    return 0;
  FungusFighterActivity::registerObserver(this);
  std::unordered_set<unsigned int>::clear(&this->finish_camp_id_set_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr.fungus_camp_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::FungusCampExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::FungusCampExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FungusCampExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FungusCampExcelConfig>,false,false>::operator*(&__for_begin);
    camp_id = std::get<0ul,unsigned int const,data::FungusCampExcelConfig>(v8);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::FungusCampExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FungusCampExcelConfig>(v8);
    if ( *(_BYTE *)(((unsigned __int64)camp_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)camp_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)camp_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( FungusFighterActivity::checkCampFinished(this, *camp_id) )
      std::unordered_set<unsigned int>::emplace<unsigned int const&>(
        &this->finish_camp_id_set_,
        camp_id,
        (const unsigned int *)&this->finish_camp_id_set_);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FungusCampExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 230: range 000000001506B6BA-000000001506B737
void __cdecl FungusFighterActivity::onLogin(FungusFighterActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    BaseActivity::onLogin(this);
    FungusFighterActivity::updateFinishedCampQuestProgress(this);
    BaseActivity::updateAllConds(this);
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 244: range 000000001506B738-000000001506B742
void __cdecl FungusFighterActivity::onPreStart(FungusFighterActivity *const this)
{
  ;
};

// Line 248: range 000000001506B744-000000001506B75E
void __cdecl FungusFighterActivity::onStart(FungusFighterActivity *const this)
{
  FungusFighterActivity::registerObserver(this);
};

// Line 253: range 000000001506B760-000000001506BCC2
void __cdecl FungusFighterActivity::registerObserver(FungusFighterActivity *const this)
{
  unsigned __int64 p_M_last; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<FungusFighterActivity> *EventComp; // [rsp+10h] [rbp-110h]
  std::weak_ptr<FungusFighterActivity> *v5; // [rsp+20h] [rbp-100h]
  std::weak_ptr<FungusFighterActivity> *p_this_wtr; // [rsp+30h] [rbp-F0h]
  PlayerEventComp v7; // [rsp+40h] [rbp-E0h] BYREF

  p_M_last = (unsigned __int64)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_last = v2;
  }
  *(_QWORD *)p_M_last = 1102416563LL;
  *(_QWORD *)(p_M_last + 8) = "2 32 16 12 this_ptr:254 64 16 12 this_wtr:260";
  *(_QWORD *)(p_M_last + 16) = FungusFighterActivity::registerObserver;
  v3 = (_DWORD *)(p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)&v7.event_center_);
  std::dynamic_pointer_cast<FungusFighterActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_M_last + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7.event_center_);
  if ( std::operator==<FungusFighterActivity>(0LL, (const std::shared_ptr<FungusFighterActivity> *)(p_M_last + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_.context_.pending_que_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "registerObserver",
      257);
    common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
      (common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_,
      (const char (*)[69])"[FungusFighter] dynamic_pointer_cast to FungusFighterActivity failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_);
  }
  else
  {
    std::weak_ptr<FungusFighterActivity>::weak_ptr<FungusFighterActivity,void>(
      (std::weak_ptr<FungusFighterActivity> *const)(p_M_last + 64),
      (const std::shared_ptr<FungusFighterActivity> *)(p_M_last + 32));
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->training_gallery_settle_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_this_wtr = (std::weak_ptr<FungusFighterActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<FungusFighterActivity>::weak_ptr(
        (std::weak_ptr<FungusFighterActivity> *const)&v7.event_center_,
        (const std::weak_ptr<FungusFighterActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<FungusFighterActivity,FungusFighterTrainingGallerySettleEvent>(
        &v7,
        p_this_wtr,
        (void (*)(FungusFighterActivity *, const FungusFighterTrainingGallerySettleEvent *))&v7.event_center_);
      std::weak_ptr<Observer>::operator=(&this->training_gallery_settle_wtr_, (std::weak_ptr<Observer> *)&v7);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
      std::weak_ptr<FungusFighterActivity>::~weak_ptr((std::weak_ptr<FungusFighterActivity> *const)&v7.event_center_);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = (std::weak_ptr<FungusFighterActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<FungusFighterActivity>::weak_ptr(
        (std::weak_ptr<FungusFighterActivity> *const)&v7.event_center_,
        (const std::weak_ptr<FungusFighterActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<FungusFighterActivity,PostEnterSceneEvent>(
        (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
        EventComp,
        (void (*)(FungusFighterActivity *, const PostEnterSceneEvent *))&v7.event_center_);
      std::weak_ptr<Observer>::operator=(
        &this->post_enter_scene_wtr_,
        (std::weak_ptr<Observer> *)&v7._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
      std::weak_ptr<FungusFighterActivity>::~weak_ptr((std::weak_ptr<FungusFighterActivity> *const)&v7.event_center_);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = (std::weak_ptr<FungusFighterActivity> *)Player::getEventComp(this->player_);
      std::weak_ptr<FungusFighterActivity>::weak_ptr(
        (std::weak_ptr<FungusFighterActivity> *const)&v7._M_weak_this._M_refcount,
        (const std::weak_ptr<FungusFighterActivity> *)(p_M_last + 64));
      PlayerEventComp::registerObserver<FungusFighterActivity,LeaveSceneEvent>(
        (PlayerEventComp *const)&v7.event_center_,
        v5,
        (void (*)(FungusFighterActivity *, const LeaveSceneEvent *))&v7._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::operator=(&this->leave_scene_wtr_, (std::weak_ptr<Observer> *)&v7.event_center_);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_);
      std::weak_ptr<FungusFighterActivity>::~weak_ptr((std::weak_ptr<FungusFighterActivity> *const)&v7._M_weak_this._M_refcount);
    }
    std::weak_ptr<FungusFighterActivity>::~weak_ptr((std::weak_ptr<FungusFighterActivity> *const)(p_M_last + 64));
  }
  std::shared_ptr<FungusFighterActivity>::~shared_ptr((std::shared_ptr<FungusFighterActivity> *const)(p_M_last + 32));
  if ( &v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last == (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)p_M_last )
  {
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_last = 1172321806LL;
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 276: range 000000001506BCC4-000000001506BE3A
void __cdecl FungusFighterActivity::unregisterObserver(FungusFighterActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax
  PlayerEventComp *v3; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->training_gallery_settle_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->training_gallery_settle_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->training_gallery_settle_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->post_enter_scene_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->post_enter_scene_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->leave_scene_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v3, &this->leave_scene_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->leave_scene_wtr_);
  }
};

// Line 295: range 000000001506BE3C-000000001506BE56
void __cdecl FungusFighterActivity::onSettle(FungusFighterActivity *const this)
{
  FungusFighterActivity::unregisterObserver(this);
};

// Line 300: range 000000001506BE58-000000001506BED2
void __cdecl FungusFighterActivity::onClear(FungusFighterActivity *const this)
{
  std::unordered_map<unsigned int,FungusData>::clear(&this->fungus_id_data_map_);
  std::unordered_set<unsigned int>::clear(&this->unlock_camp_id_set_);
  std::unordered_set<unsigned int>::clear(&this->unlock_cultivate_id_set_);
  std::map<unsigned int,bool>::clear(&this->fungus_plot_stage_map_);
  std::map<unsigned int,FungusTrainingDungeonData>::clear(&this->fungus_training_dungeon_map_);
  FungusFighterRuntimeMgr::clearAll(&this->runtime_mgr_);
};

// Line 310: range 000000001506BED4-000000001506BF2D
void __cdecl FungusFighterActivity::onDailyRefresh(FungusFighterActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 319: range 000000001506BF2E-000000001506C1AE
bool __cdecl FungusFighterActivity::checkCondIsMeet(
        FungusFighterActivity *const this,
        const data::NewActivityCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  bool result; // al
  std::vector<int>::const_reference v9; // rdx
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 camp_id:329";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::checkCondIsMeet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type == NEW_ACTIVITY_COND_FUNGUS_FIGHTER_FINISH_CAMP )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      v9 = std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v9;
      result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                 &this->finish_camp_id_set_,
                 (const unsigned int *)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "checkCondIsMeet",
        326);
      v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v11,
             (const char (*)[28])"[FungusFighter] cond_type: ");
      v6 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
             v5,
             &cond->type);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v6,
             (const char (*)[21])" param num invalid: ");
      val = std::vector<int>::size(&cond->param);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = 0;
    }
  }
  else
  {
    result = BaseActivity::checkCondIsMeet(this, cond);
  }
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

// Line 339: range 000000001506C1B0-000000001506C794
int32_t __cdecl FungusFighterActivity::execAction(
        FungusFighterActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r14
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t v9; // r13d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  common::milog::MiLogStream v18; // [rsp+10h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 cultivate_id:354 64 24 16 stage_id_vec:374";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::execAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_OPEN_FUNGUS_FIGHTER_FUNGUS_PLOT )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
           &action_exec->param,
           (std::vector<unsigned int> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "execAction",
        367);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v18, (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              v13,
              (const char (*)[58])"[FungusFighter] strVecToNumVec failed, action_exec.param:");
      common::milog::MiLogStream::operator<<<std::string>(v14, &action_exec->param);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v9 = -1;
    }
    else
    {
      v9 = FungusFighterActivity::openFungusPlotDungeonStage(this, (const std::vector<unsigned int> *)(v2 + 64), 0);
    }
    goto LABEL_22;
  }
  if ( type <= NEW_ACTIVITY_ACTION_OPEN_FUNGUS_FIGHTER_FUNGUS_PLOT )
  {
    if ( type != NEW_ACTIVITY_ACTION_OPEN_FUNGUS_FIGHTER_FUNGUS_TRAINING )
    {
      if ( type <= NEW_ACTIVITY_ACTION_OPEN_FUNGUS_FIGHTER_FUNGUS_TRAINING )
      {
        if ( type == NEW_ACTIVITY_ACTION_OPEN_FUNGUS_FIGHTER_FUNGUS_CAMP )
        {
          *(_DWORD *)(v2 + 48) = 0;
          if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(&action_exec->param, (unsigned int *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/fungus_fighter_activity.cpp",
              "execAction",
              347);
            v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                   &v18,
                   (const char (*)[25])"parse param fail, param:");
            v7 = common::milog::MiLogStream::operator<<<std::string>(v6, &action_exec->param);
            v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" activity:");
            common::milog::MiLogStream::operator<<<FungusFighterActivity,(FungusFighterActivity*)0>(v8, this);
            common::milog::MiLogStream::~MiLogStream(&v18);
            v9 = -1;
          }
          else
          {
            v9 = FungusFighterActivity::unlockCamp(this, *(_DWORD *)(v2 + 48));
          }
          goto LABEL_27;
        }
        if ( type == NEW_ACTIVITY_ACTION_OPEN_FUNGUS_FIGHTER_FUNGUS_CALTIVATE )
        {
          *(_DWORD *)(v2 + 48) = 0;
          if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(&action_exec->param, (unsigned int *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/fungus_fighter_activity.cpp",
              "execAction",
              357);
            v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    &v18,
                    (const char (*)[25])"parse param fail, param:");
            v11 = common::milog::MiLogStream::operator<<<std::string>(v10, &action_exec->param);
            v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" activity:");
            common::milog::MiLogStream::operator<<<FungusFighterActivity,(FungusFighterActivity*)0>(v12, this);
            common::milog::MiLogStream::~MiLogStream(&v18);
            v9 = -1;
          }
          else
          {
            v9 = FungusFighterActivity::unlockCultivateFungus(this, *(_DWORD *)(v2 + 48));
          }
          goto LABEL_27;
        }
      }
      goto LABEL_26;
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
           &action_exec->param,
           (std::vector<unsigned int> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "execAction",
        377);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v18, (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              v15,
              (const char (*)[58])"[FungusFighter] strVecToNumVec failed, action_exec.param:");
      common::milog::MiLogStream::operator<<<std::string>(v16, &action_exec->param);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v9 = -1;
    }
    else
    {
      v9 = FungusFighterActivity::openFungusTrainingDungeonStage(this, (const std::vector<unsigned int> *)(v2 + 64), 0);
    }
LABEL_22:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
    goto LABEL_27;
  }
LABEL_26:
  v9 = BaseActivity::execAction(this, action_exec);
LABEL_27:
  result = v9;
  if ( v19 == (char *)v2 )
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

// Line 389: range 000000001506C796-000000001506C7C2
void __cdecl FungusFighterActivity::onContentClosed(FungusFighterActivity *const this)
{
  FungusFighterActivity::unregisterObserver(this);
  FungusFighterRuntimeMgr::clearAll(&this->runtime_mgr_);
};

// Line 398: range 000000001506C7C4-000000001506CB5B
void __cdecl FungusFighterActivity::onEnterScene(
        FungusFighterActivity *const this,
        ScenePtr *p_scene_ptr,
        bool is_reenter)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t DungeonId; // eax
  google::protobuf::RepeatedField<unsigned int> *v11; // rdx
  FungusFighterDungeonContext *dungeon_context; // [rsp+28h] [rbp-198h]
  char v13[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 21 dungeon_scene_ptr:404 64 48 10 notify:418 144 144 23 dungeon_context_opt:409";
  *(_QWORD *)(v3 + 16) = FungusFighterActivity::onEnterScene;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = 62194;
  v5[536862729] = -202116109;
  v5[536862730] = -202116109;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 32));
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 32)) )
    {
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      DungeonScene::getDungeonExtraData<FungusFighterDungeonContext>(
        (std::optional<FungusFighterDungeonContext> *)(v3 + 144),
        v7);
      if ( std::optional<FungusFighterDungeonContext>::has_value((const std::optional<FungusFighterDungeonContext> *const)(v3 + 144)) )
      {
        dungeon_context = std::optional<FungusFighterDungeonContext>::value((std::optional<FungusFighterDungeonContext> *const)(v3 + 144));
        v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( DungeonScene::getDungeonType(v8) == DUNGEON_FUNGUS_FIGHTER_PLOT )
        {
          proto::FungusFighterPlotInfoNotify::FungusFighterPlotInfoNotify((proto::FungusFighterPlotInfoNotify *const)(v3 + 64));
          v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          DungeonId = DungeonScene::getDungeonId(v9);
          proto::FungusFighterPlotInfoNotify::set_dungeon_id(
            (proto::FungusFighterPlotInfoNotify *const)(v3 + 64),
            DungeonId);
          v11 = proto::FungusFighterPlotInfoNotify::mutable_fungus_id_list((proto::FungusFighterPlotInfoNotify *const)(v3 + 64));
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&dungeon_context->fungus_id_vec, v11);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 64));
          proto::FungusFighterPlotInfoNotify::~FungusFighterPlotInfoNotify((proto::FungusFighterPlotInfoNotify *const)(v3 + 64));
        }
      }
      std::optional<FungusFighterDungeonContext>::~optional((std::optional<FungusFighterDungeonContext> *const)(v3 + 144));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 32));
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 426: range 000000001506CB5C-000000001506CB8F
int32_t __cdecl FungusFighterActivity::getAddCoinExceedRetcode(
        const FungusFighterActivity *const this,
        proto::VirtualItem coin_type)
{
  if ( coin_type == ITEM_VIRTUAL_FUNGUS_FIGHTER_CAPTURE_COIN )
    return 10408;
  if ( coin_type == ITEM_VIRTUAL_FUNGUS_FIGHTER_TRAINING_COIN )
    return 10409;
  return -1;
};

// Line 439: range 000000001506CB90-000000001506CBC3
int32_t __cdecl FungusFighterActivity::getSubCoinNotEnoughRetcode(
        const FungusFighterActivity *const this,
        proto::VirtualItem coin_type)
{
  if ( coin_type == ITEM_VIRTUAL_FUNGUS_FIGHTER_CAPTURE_COIN )
    return 10406;
  if ( coin_type == ITEM_VIRTUAL_FUNGUS_FIGHTER_TRAINING_COIN )
    return 10407;
  return -1;
};

// Line 452: range 000000001506CBC4-000000001506CBF0
void __cdecl FungusFighterActivity::onFungusFighterTrainingGallerySettleEvent(
        FungusFighterActivity *const this,
        const FungusFighterTrainingGallerySettleEvent *event)
{
  FungusFighterRuntimeMgr::onFungusFighterTrainingGallerySettleEvent(&this->runtime_mgr_, event);
};

// Line 457: range 000000001506CBF2-000000001506D025
void __cdecl FungusFighterActivity::onPostEnterSceneEvent(
        FungusFighterActivity *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  data::DungeonType DungeonType; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t DungeonId; // eax
  google::protobuf::RepeatedField<unsigned int> *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  data::DungeonType v13; // eax
  char *val; // [rsp+10h] [rbp-1C0h] BYREF
  const FungusFighterDungeonContext *dungeon_context; // [rsp+18h] [rbp-1B8h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-1B0h] BYREF
  char v17[400]; // [rsp+40h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 21 dungeon_scene_ptr:458 64 48 10 notify:474 144 144 23 dungeon_context_opt:463";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 32));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    DungeonScene::getDungeonExtraData<FungusFighterDungeonContext>(
      (std::optional<FungusFighterDungeonContext> *)(v2 + 144),
      v5);
    if ( std::optional<FungusFighterDungeonContext>::has_value((const std::optional<FungusFighterDungeonContext> *const)(v2 + 144)) )
    {
      dungeon_context = std::optional<FungusFighterDungeonContext>::value((std::optional<FungusFighterDungeonContext> *const)(v2 + 144));
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      DungeonType = DungeonScene::getDungeonType(v6);
      if ( DungeonType == DUNGEON_FUNGUS_FIGHTER_TRAINING )
      {
        FungusFighterRuntimeMgr::onPostEnterSceneEvent(&this->runtime_mgr_, event);
      }
      else if ( DungeonType == DUNGEON_FUNGUS_FIGHTER_PLOT )
      {
        proto::FungusFighterPlotInfoNotify::FungusFighterPlotInfoNotify((proto::FungusFighterPlotInfoNotify *const)(v2 + 64));
        v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        DungeonId = DungeonScene::getDungeonId(v8);
        proto::FungusFighterPlotInfoNotify::set_dungeon_id(
          (proto::FungusFighterPlotInfoNotify *const)(v2 + 64),
          DungeonId);
        v10 = proto::FungusFighterPlotInfoNotify::mutable_fungus_id_list((proto::FungusFighterPlotInfoNotify *const)(v2 + 64));
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&dungeon_context->fungus_id_vec, v10);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
        proto::FungusFighterPlotInfoNotify::~FungusFighterPlotInfoNotify((proto::FungusFighterPlotInfoNotify *const)(v2 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "onPostEnterSceneEvent",
          488);
        v11 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(
                &v16,
                (const char (*)[85])"[FungusFighter] unknown dungeon type set FungusFighterDungeonContext, dungeon_type: ");
        v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        v13 = DungeonScene::getDungeonType(v12);
        val = (char *)data::enumValToStr(v13);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
    }
    std::optional<FungusFighterDungeonContext>::~optional((std::optional<FungusFighterDungeonContext> *const)(v2 + 144));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 496: range 000000001506D026-000000001506D04A
void __cdecl FungusFighterActivity::onLeaveSceneEvent(FungusFighterActivity *const this, const LeaveSceneEvent *event)
{
  FungusFighterRuntimeMgr::onLeaveSceneEvent(&this->runtime_mgr_);
};

// Line 501: range 000000001506D04C-000000001506D687
int32_t __cdecl FungusFighterActivity::initEnterSceneAvatar(
        FungusFighterActivity *const this,
        ScenePtr *p_dest_scene_ptr,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-1C4h] BYREF
  std::shared_ptr<Avatar> __x; // [rsp+30h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-1B0h] BYREF
  char v23[400]; // [rsp+60h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 8 23 default_avatar_guid:517 80 16 21 dungeon_scene_ptr:502 112 16 22 default_avatar_ptr:51"
                        "8 144 144 23 dungeon_context_opt:508";
  *(_QWORD *)(v4 + 16) = FungusFighterActivity::initEnterSceneAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862729] = -202116109;
  v6[536862730] = -202116109;
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 80));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "initEnterSceneAvatar",
      505);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v22,
           (const char (*)[51])"[FungusFighter] dungeon_scene_ptr is nullptr, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
    DungeonScene::getDungeonExtraData<FungusFighterDungeonContext>(
      (std::optional<FungusFighterDungeonContext> *)(v4 + 144),
      v9);
    if ( !std::optional<FungusFighterDungeonContext>::has_value((const std::optional<FungusFighterDungeonContext> *const)(v4 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "initEnterSceneAvatar",
        511);
      v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v22,
              (const char (*)[51])"[FungusFighter] dungeon context has not data, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(this->player_);
      *(_QWORD *)(v4 + 48) = PlayerAvatarComp::getChooseAvatarGuid(AvatarComp);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v4 + 112), (uint64_t)v12);
      if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "initEnterSceneAvatar",
          521);
        v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v22,
                (const char (*)[21])"[FungusFighter] uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                v14,
                (const char (*)[22])" default avatar guid:");
        v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v15,
                (const unsigned __int64 *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v16, (const char (*)[18])" avatar not found");
        common::milog::MiLogStream::~MiLogStream(&v22);
        v8 = -1;
      }
      else
      {
        std::shared_ptr<Avatar>::shared_ptr<FormalAvatar,void>(&__x, (const std::shared_ptr<FormalAvatar> *)(v4 + 112));
        std::vector<std::shared_ptr<Avatar>>::push_back(enter_scene_avatar_vec, &__x);
        std::shared_ptr<Avatar>::~shared_ptr(&__x);
        std::shared_ptr<Avatar>::operator=<FormalAvatar>(
          appear_avatar_ptr,
          (const std::shared_ptr<FormalAvatar> *)(v4 + 112));
        v8 = 0;
      }
      std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 112));
    }
    std::optional<FungusFighterDungeonContext>::~optional((std::optional<FungusFighterDungeonContext> *const)(v4 + 144));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 80));
  result = v8;
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
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

// Line 530: range 000000001506D688-000000001506EE2F
int32_t __cdecl FungusFighterActivity::enterFungusFighterPlotDungeon(
        FungusFighterActivity *const this,
        const proto::EnterFungusFighterPlotDungeonReq *req)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FungusFighterActivity *v5; // rdx
  unsigned __int64 v6; // rax
  int32_t v7; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v9; // r14
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v11; // r14
  PlayerSceneComp *v12; // rax
  common::milog::MiLogStream *v13; // r14
  bool v14; // r14
  common::milog::MiLogStream *v15; // r14
  const ActivityFungusFighterExcelConfigMgr *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  int v18; // ecx
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v26; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v27; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  __int32 SceneId; // eax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v49; // r14
  DungeonScene *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // r14
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+10h] [rbp-330h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+18h] [rbp-328h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-320h]
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-318h]
  const data::FungusBaseExcelConfig *base_config_ptr; // [rsp+30h] [rbp-310h]
  const data::FungusPlotDungeonExcelConfig *plot_config_ptr; // [rsp+38h] [rbp-308h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-300h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-2F8h]
  const data::FungusExcelConfig *fungus_config_ptr; // [rsp+50h] [rbp-2F0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-2E8h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_retcode; // [rsp+60h] [rbp-2E0h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+68h] [rbp-2D8h]
  std::shared_ptr<Scene> __r; // [rsp+70h] [rbp-2D0h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+80h] [rbp-2C0h] BYREF
  EnterDungeonOption v69; // [rsp+A0h] [rbp-2A0h] BYREF
  common::milog::MiLogStream v70; // [rsp+C0h] [rbp-280h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+E0h] [rbp-260h] BYREF
  char v72[560]; // [rsp+110h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 14 dungeon_id:578 64 4 13 fungus_id:594 80 4 20 fungus_config_id:608 96 4 13 fungus_id:62"
                        "5 112 16 17 cur_scene_ptr:553 144 48 17 fungus_id_set:592 224 48 24 fungus_config_id_set:593 304"
                        " 136 19 dungeon_context:591";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::enterFungusFighterPlotDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = 61956;
  v4[536862724] = 62194;
  v4[536862726] = -218959118;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v6)(v5) )
  {
    v7 = 10410;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v70,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "enterFungusFighterPlotDungeon",
        538);
      v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v70,
             (const char (*)[43])"[FungusFighter] is not in self world, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 96));
      common::milog::MiLogStream::~MiLogStream(&v70);
      v7 = 512;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpComp = Player::getMpComp(this->player_);
      if ( PlayerMpComp::isInMpMode(MpComp) )
      {
        common::milog::MiLogStream::create(
          &v70,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "enterFungusFighterPlotDungeon",
          544);
        v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v70,
                (const char (*)[33])"[FungusFighter] in mp mode, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 96));
        common::milog::MiLogStream::~MiLogStream(&v70);
        v7 = 1202;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = Player::getSceneComp(this->player_);
        if ( PlayerSceneComp::isInTransfer(v12) )
        {
          v7 = 170;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 112));
          if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v70,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/fungus_fighter_activity.cpp",
              "enterFungusFighterPlotDungeon",
              556);
            v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v70,
                    (const char (*)[40])"[FungusFighter] cur scene is null, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 96));
            common::milog::MiLogStream::~MiLogStream(&v70);
            v7 = -1;
          }
          else
          {
            std::dynamic_pointer_cast<DungeonScene,Scene>(&__r);
            v14 = std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)&__r);
            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
            if ( v14 )
            {
              common::milog::MiLogStream::create(
                &v70,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/fungus_fighter_activity.cpp",
                "enterFungusFighterPlotDungeon",
                561);
              v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v70,
                      (const char (*)[43])"[FungusFighter] player is in dungeon, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 96));
              common::milog::MiLogStream::~MiLogStream(&v70);
              v7 = -1;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&__r);
              config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
              v16 = config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              base_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusBaseExcelConfig(
                                  v16,
                                  this->activity_id_);
              if ( base_config_ptr )
              {
                v18 = proto::EnterFungusFighterPlotDungeonReq::fungus_id_list_size(req);
                if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->fungus_fighter_team_num >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)base_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&base_config_ptr->fungus_fighter_team_num >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( v18 == base_config_ptr->fungus_fighter_team_num )
                {
                  *(_DWORD *)(v2 + 48) = proto::EnterFungusFighterPlotDungeonReq::dungeon_id(req);
                  plot_config_ptr = ActivityFungusFighterExcelConfigMgr::findFungusPlotDungeonExcelConfigByDungeonId(
                                      config_mgr,
                                      *(_DWORD *)(v2 + 48));
                  if ( plot_config_ptr )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&plot_config_ptr->plot_stage_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&plot_config_ptr->plot_stage_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    if ( !FungusFighterActivity::isFungusPlotDungeonStageOpen(this, plot_config_ptr->plot_stage_id) )
                    {
                      common::milog::MiLogStream::create(
                        &v70,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/fungus_fighter_activity.cpp",
                        "enterFungusFighterPlotDungeon",
                        587);
                      v21 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                              &v70,
                              (const char (*)[56])"[FungusFighter] plot stage is not open, plot_stage_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v21,
                        &plot_config_ptr->plot_stage_id);
                      common::milog::MiLogStream::~MiLogStream(&v70);
                      v7 = 10411;
                    }
                    else
                    {
                      FungusFighterDungeonContext::FungusFighterDungeonContext((FungusFighterDungeonContext *const)(v2 + 304));
                      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 144));
                      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 224));
                      __for_range = proto::EnterFungusFighterPlotDungeonReq::fungus_id_list(req);
                      __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
                      __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
                      while ( __for_begin != __for_end )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                                        + 0x7FFF8000) )
                        {
                          __asan_report_load4();
                        }
                        *(_DWORD *)(v2 + 64) = *__for_begin;
                        if ( !common::tools::MiscUtils::isContains<unsigned int>(
                                &plot_config_ptr->valid_fungus_id_list,
                                (const unsigned int *)(v2 + 64)) )
                        {
                          common::milog::MiLogStream::create(
                            &v70,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/activity/fungus_fighter_activity.cpp",
                            "enterFungusFighterPlotDungeon",
                            598);
                          v22 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                  &v70,
                                  (const char (*)[36])"[FungusFighter] invalid fungus_id: ");
                          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v22,
                                  (const unsigned int *)(v2 + 64));
                          v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                                  v23,
                                  (const char (*)[18])", plot_stage_id: ");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v24,
                            &plot_config_ptr->plot_stage_id);
                          common::milog::MiLogStream::~MiLogStream(&v70);
                          v7 = 10412;
                          goto LABEL_100;
                        }
                        fungus_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusExcelConfig(
                                              config_mgr,
                                              *(_DWORD *)(v2 + 64));
                        if ( !fungus_config_ptr )
                        {
                          common::milog::MiLogStream::create(
                            &v70,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/player/activity/fungus_fighter_activity.cpp",
                            "enterFungusFighterPlotDungeon",
                            604);
                          v25 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
                                  &v70,
                                  (const char (*)[82])"[FungusFighter] failed to findFungusExcelConfig valid in plot config, fungus_id: ");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v25,
                            (const unsigned int *)(v2 + 64));
                          common::milog::MiLogStream::~MiLogStream(&v70);
                          v7 = -1;
                          goto LABEL_100;
                        }
                        if ( *(_BYTE *)(((unsigned __int64)&fungus_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&fungus_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4();
                        }
                        *(_DWORD *)(v2 + 80) = fungus_config_ptr->config_id;
                        v26 = std::set<unsigned int>::insert(
                                (std::set<unsigned int> *const)(v2 + 144),
                                (const std::set<unsigned int>::value_type *)(v2 + 64));
                        if ( !v26.second
                          || (v27 = std::set<unsigned int>::insert(
                                      (std::set<unsigned int> *const)(v2 + 224),
                                      (const std::set<unsigned int>::value_type *)(v2 + 80)),
                              !v27.second) )
                        {
                          common::milog::MiLogStream::create(
                            &v70,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/activity/fungus_fighter_activity.cpp",
                            "enterFungusFighterPlotDungeon",
                            611);
                          v29 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                  &v70,
                                  (const char (*)[38])"[FungusFighter] duplicate fungus_id: ");
                          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v29,
                                  (const unsigned int *)(v2 + 64));
                          v31 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                  v30,
                                  (const char (*)[27])", or duplicate config_id: ");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v31,
                            (const unsigned int *)(v2 + 80));
                          common::milog::MiLogStream::~MiLogStream(&v70);
                          v7 = -1;
                          goto LABEL_100;
                        }
                        if ( !FungusFighterActivity::isFungusValidForPlotDungeon(
                                this,
                                *(_DWORD *)(v2 + 64),
                                plot_config_ptr) )
                        {
                          common::milog::MiLogStream::create(
                            &v70,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/activity/fungus_fighter_activity.cpp",
                            "enterFungusFighterPlotDungeon",
                            617);
                          v32 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                                  &v70,
                                  (const char (*)[67])"[FungusFighter] fungus is not cultivated or not exist, fungus_id: ");
                          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v32,
                                  (const unsigned int *)(v2 + 64));
                          v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                  v33,
                                  (const char (*)[8])", uid: ");
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8();
                          *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v34,
                            (const unsigned int *)(v2 + 96));
                          common::milog::MiLogStream::~MiLogStream(&v70);
                          v7 = 10413;
                          goto LABEL_100;
                        }
                        std::vector<unsigned int>::emplace_back<unsigned int &>(
                          (std::vector<unsigned int> *const)(v2 + 304),
                          (unsigned int *)(v2 + 64),
                          (unsigned int *)(v2 + 64));
                        std::vector<unsigned int>::emplace_back<unsigned int &>(
                          (std::vector<unsigned int> *const)(v2 + 328),
                          (unsigned int *)(v2 + 80),
                          (unsigned int *)(v2 + 328));
                        ++__for_begin;
                      }
                      __for_range_0 = &plot_config_ptr->locked_fungus_id_list;
                      __for_begin_0._M_current = std::vector<unsigned int>::begin(&plot_config_ptr->locked_fungus_id_list)._M_current;
                      __for_end_0._M_current = std::vector<unsigned int>::end(&plot_config_ptr->locked_fungus_id_list)._M_current;
                      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                &__for_begin_0,
                                &__for_end_0) )
                      {
                        v35 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
                        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4();
                        }
                        *(_DWORD *)(v2 + 96) = *v35;
                        if ( !common::tools::MiscUtils::isContains<unsigned int>(
                                (std::vector<unsigned int> *)(v2 + 304),
                                (const unsigned int *)(v2 + 96)) )
                        {
                          common::milog::MiLogStream::create(
                            &v70,
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/player/activity/fungus_fighter_activity.cpp",
                            "enterFungusFighterPlotDungeon",
                            629);
                          v36 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                                  &v70,
                                  (const char (*)[63])"[FungusFighter] locked fungus not in final choice, fungus_id: ");
                          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v36,
                                  (const unsigned int *)(v2 + 96));
                          v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                  v37,
                                  (const char (*)[13])"dungeon_id: ");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v38,
                            (const unsigned int *)(v2 + 48));
                          common::milog::MiLogStream::~MiLogStream(&v70);
                          v7 = -1;
                          goto LABEL_100;
                        }
                        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
                      }
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      DungeonComp = Player::getDungeonComp(this->player_);
                      memset(&v69, 0, sizeof(v69));
                      EnterDungeonOption::EnterDungeonOption(&v69);
                      memset(&level_config_id_map, 0, sizeof(level_config_id_map));
                      std::map<unsigned int,unsigned int>::map(&level_config_id_map);
                      v40 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                      SceneId = Scene::getSceneId(v40);
                      PlayerDungeonComp::enterDungeon(
                        &__in,
                        DungeonComp,
                        *(_DWORD *)(v2 + 48),
                        SceneId,
                        0,
                        &level_config_id_map,
                        v69);
                      std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
                      enter_dungeon_retcode = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
                      dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
                      if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                                + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      if ( *enter_dungeon_retcode )
                      {
                        common::milog::MiLogStream::create(
                          &v70,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/fungus_fighter_activity.cpp",
                          "enterFungusFighterPlotDungeon",
                          637);
                        v42 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                &v70,
                                (const char (*)[47])"[FungusFighter] enterDungeon fail, dungeon_id:");
                        v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v42,
                                (const unsigned int *)(v2 + 48));
                        v44 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                                v43,
                                (const char (*)[24])" enter_dungeon_retcode:");
                        v45 = common::milog::MiLogStream::operator<<<int,(int *)0>(v44, enter_dungeon_retcode);
                        v46 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                v45,
                                (const char (*)[6])" uid:");
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v46,
                          (const unsigned int *)(v2 + 96));
                        common::milog::MiLogStream::~MiLogStream(&v70);
                        if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                                  + 0x7FFF8000) )
                        {
                          __asan_report_load4();
                        }
                        v7 = *enter_dungeon_retcode;
                      }
                      else if ( std::operator==<DungeonScene>(0LL, dungeon_scene_ptr)
                             || (v47 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
                                 DungeonScene::getDungeonId(v47) != *(_DWORD *)(v2 + 48)) )
                      {
                        common::milog::MiLogStream::create(
                          &v70,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/fungus_fighter_activity.cpp",
                          "enterFungusFighterPlotDungeon",
                          642);
                        v49 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                &v70,
                                (const char (*)[50])"[FungusFighter] player enter dungeon failed, uid:");
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v49,
                          (const unsigned int *)(v2 + 96));
                        common::milog::MiLogStream::~MiLogStream(&v70);
                        v7 = -1;
                      }
                      else
                      {
                        v50 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                        DungeonScene::setDungeonExtraData<FungusFighterDungeonContext>(
                          v50,
                          (const FungusFighterDungeonContext *)(v2 + 304));
                        common::milog::MiLogStream::create(
                          &v70,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/fungus_fighter_activity.cpp",
                          "enterFungusFighterPlotDungeon",
                          648);
                        v51 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                                &v70,
                                (const char (*)[59])"[FungusFighter] enterFungusFighterPlotDungeon, dungeon_id:");
                        v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v51,
                                (const unsigned int *)(v2 + 48));
                        v53 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                v52,
                                (const char (*)[6])" uid:");
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        *(_DWORD *)(v2 + 96) = Player::getUid(this->player_);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v53,
                          (const unsigned int *)(v2 + 96));
                        common::milog::MiLogStream::~MiLogStream(&v70);
                        v7 = 0;
                      }
                      std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
LABEL_100:
                      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 224));
                      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 144));
                      FungusFighterDungeonContext::~FungusFighterDungeonContext((FungusFighterDungeonContext *const)(v2 + 304));
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v70,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/fungus_fighter_activity.cpp",
                      "enterFungusFighterPlotDungeon",
                      582);
                    v20 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(
                            &v70,
                            (const char (*)[84])"[FungusFighter] failed to findFungusPlotDungeonExcelConfigByDungeonId, dungeon_id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v2 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v70);
                    v7 = -1;
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v70,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/fungus_fighter_activity.cpp",
                    "enterFungusFighterPlotDungeon",
                    574);
                  v19 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                          &v70,
                          (const char (*)[57])"[FungusFighter] fungus team num is not right, req size: ");
                  *(_DWORD *)(v2 + 96) = proto::EnterFungusFighterPlotDungeonReq::fungus_id_list_size(req);
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v2 + 96));
                  common::milog::MiLogStream::~MiLogStream(&v70);
                  v7 = -1;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v70,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/fungus_fighter_activity.cpp",
                  "enterFungusFighterPlotDungeon",
                  568);
                v17 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                        &v70,
                        (const char (*)[68])"[FungusFighter] failed to findFungusBaseExcelConfig, activity_id_: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->activity_id_);
                common::milog::MiLogStream::~MiLogStream(&v70);
                v7 = -1;
              }
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
        }
      }
    }
  }
  result = v7;
  if ( v72 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
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
  return result;
};

// Line 653: range 000000001506EE30-000000001506FDF5
__int64 __fastcall FungusFighterActivity::enterFungusFighterTrainingDungeon(
        FungusFighterActivity *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FungusFighterActivity *v5; // rdx
  unsigned __int64 v6; // rax
  unsigned int v7; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v9; // rbx
  PlayerSceneComp *v10; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v12; // rbx
  PlayerMpComp *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  bool v18; // r14
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  __int32 SceneId; // eax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v32; // r14
  DungeonScene *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-234h] BYREF
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-230h]
  const data::FungusTrainingDungeonExcelConfig *training_config_ptr; // [rsp+28h] [rbp-228h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_retcode; // [rsp+30h] [rbp-220h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+38h] [rbp-218h]
  std::shared_ptr<Scene> __r; // [rsp+40h] [rbp-210h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+50h] [rbp-200h] BYREF
  common::milog::MiLogStream v45; // [rsp+70h] [rbp-1E0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+90h] [rbp-1C0h] BYREF
  char v47[400]; // [rsp+C0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 dungeon_id:652 48 16 17 cur_scene_ptr:683 80 28 21 enter_dungeon_opt:708 144 136 19 du"
                        "ngeon_context:724";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::enterFungusFighterTrainingDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = -219020288;
  v4[536862724] = 62194;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  *(_DWORD *)(v2 + 32) = dungeon_id;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v6)(v5) )
  {
    v7 = 10410;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "enterFungusFighterTrainingDungeon",
        661);
      v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v45,
             (const char (*)[43])"[FungusFighter] is not in self world, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v45);
      v7 = 512;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = Player::getSceneComp(this->player_);
      if ( PlayerSceneComp::isInTransfer(v10) )
      {
        v7 = 170;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MpComp = Player::getMpComp(this->player_);
        if ( PlayerMpComp::isInMpMode(MpComp) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/fungus_fighter_activity.cpp",
            "enterFungusFighterTrainingDungeon",
            672);
          v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v45,
                  (const char (*)[33])"[FungusFighter] in mp mode, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          common::milog::MiLogStream::~MiLogStream(&v45);
          v7 = 1202;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v13 = Player::getMpComp(this->player_);
          if ( !PlayerMpComp::isAllowEnterPlayerEmpty(v13) )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/fungus_fighter_activity.cpp",
              "enterFungusFighterTrainingDungeon",
              678);
            v14 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    &v45,
                    (const char (*)[53])"[FungusFighter] others is entering self world, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
            v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v15,
                    (const char (*)[14])" dungeon id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v45);
            v7 = 1216;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 48));
            if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 48)) )
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/fungus_fighter_activity.cpp",
                "enterFungusFighterTrainingDungeon",
                686);
              v17 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      &v45,
                      (const char (*)[40])"[FungusFighter] cur scene is null, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
              common::milog::MiLogStream::~MiLogStream(&v45);
              v7 = -1;
            }
            else
            {
              std::dynamic_pointer_cast<DungeonScene,Scene>(&__r);
              v18 = std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)&__r);
              std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&__r);
              if ( v18 )
              {
                common::milog::MiLogStream::create(
                  &v45,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/fungus_fighter_activity.cpp",
                  "enterFungusFighterTrainingDungeon",
                  691);
                v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                        &v45,
                        (const char (*)[43])"[FungusFighter] player is in dungeon, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
                common::milog::MiLogStream::~MiLogStream(&v45);
                v7 = -1;
              }
              else
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&__r);
                config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
                training_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(
                                        config_mgr,
                                        *(_DWORD *)(v2 + 32));
                if ( training_config_ptr )
                {
                  if ( !FungusFighterActivity::isFungusTrainingDungeonOpen(this, *(_DWORD *)(v2 + 32)) )
                  {
                    common::milog::MiLogStream::create(
                      &v45,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/fungus_fighter_activity.cpp",
                      "enterFungusFighterTrainingDungeon",
                      704);
                    v21 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                            &v45,
                            (const char (*)[59])"[FungusFighter] training dungeon is not open, dungeon id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v2 + 32));
                    common::milog::MiLogStream::~MiLogStream(&v45);
                    v7 = 10414;
                  }
                  else
                  {
                    EnterDungeonOption::EnterDungeonOption((EnterDungeonOption *const)(v2 + 80));
                    FungusFighterActivity::getTrainingDungeonEnterOpt(
                      this,
                      (EnterDungeonOption *)(v2 + 80),
                      *(_DWORD *)(v2 + 32),
                      training_config_ptr);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    DungeonComp = Player::getDungeonComp(this->player_);
                    memset(&level_config_id_map, 0, sizeof(level_config_id_map));
                    std::map<unsigned int,unsigned int>::map(&level_config_id_map);
                    v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                    SceneId = Scene::getSceneId(v23);
                    PlayerDungeonComp::enterDungeon(
                      &__in,
                      DungeonComp,
                      *(_DWORD *)(v2 + 32),
                      SceneId,
                      0,
                      &level_config_id_map,
                      *(EnterDungeonOption *)(v2 + 80));
                    std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
                    enter_dungeon_retcode = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
                    dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
                    if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                              + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    if ( *enter_dungeon_retcode )
                    {
                      common::milog::MiLogStream::create(
                        &v45,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/fungus_fighter_activity.cpp",
                        "enterFungusFighterTrainingDungeon",
                        715);
                      v25 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                              &v45,
                              (const char (*)[47])"[FungusFighter] enterDungeon fail, dungeon_id:");
                      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v25,
                              (const unsigned int *)(v2 + 32));
                      v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                              v26,
                              (const char (*)[24])" enter_dungeon_retcode:");
                      v28 = common::milog::MiLogStream::operator<<<int,(int *)0>(v27, enter_dungeon_retcode);
                      v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                              v28,
                              (const char (*)[6])" uid:");
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      val = Player::getUid(this->player_);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
                      common::milog::MiLogStream::~MiLogStream(&v45);
                      if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                                + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      v7 = *enter_dungeon_retcode;
                    }
                    else if ( std::operator==<DungeonScene>(0LL, dungeon_scene_ptr)
                           || (v30 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
                               DungeonScene::getDungeonId(v30) != *(_DWORD *)(v2 + 32)) )
                    {
                      common::milog::MiLogStream::create(
                        &v45,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/fungus_fighter_activity.cpp",
                        "enterFungusFighterTrainingDungeon",
                        720);
                      v32 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                              &v45,
                              (const char (*)[50])"[FungusFighter] player enter dungeon failed, uid:");
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      val = Player::getUid(this->player_);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
                      common::milog::MiLogStream::~MiLogStream(&v45);
                      v7 = -1;
                    }
                    else
                    {
                      FungusFighterDungeonContext::FungusFighterDungeonContext((FungusFighterDungeonContext *const)(v2 + 144));
                      FungusFighterActivity::fillTrainingDungeonContext(
                        this,
                        (FungusFighterDungeonContext *)(v2 + 144),
                        *(_DWORD *)(v2 + 32),
                        training_config_ptr);
                      v33 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                      DungeonScene::setDungeonExtraData<FungusFighterDungeonContext>(
                        v33,
                        (const FungusFighterDungeonContext *)(v2 + 144));
                      common::milog::MiLogStream::create(
                        &v45,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/fungus_fighter_activity.cpp",
                        "enterFungusFighterTrainingDungeon",
                        730);
                      v34 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                              &v45,
                              (const char (*)[63])"[FungusFighter] enterFungusFighterTrainingDungeon, dungeon_id:");
                      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v34,
                              (const unsigned int *)(v2 + 32));
                      v36 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                              v35,
                              (const char (*)[6])" uid:");
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      val = Player::getUid(this->player_);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
                      common::milog::MiLogStream::~MiLogStream(&v45);
                      v7 = 0;
                      FungusFighterDungeonContext::~FungusFighterDungeonContext((FungusFighterDungeonContext *const)(v2 + 144));
                    }
                    std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v45,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/fungus_fighter_activity.cpp",
                    "enterFungusFighterTrainingDungeon",
                    699);
                  v20 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                          &v45,
                          (const char (*)[77])"[FungusFighter] failed to findFungusTrainingDungeonExcelConfig, dungeon_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v2 + 32));
                  common::milog::MiLogStream::~MiLogStream(&v45);
                  v7 = -1;
                }
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 48));
          }
        }
      }
    }
  }
  result = v7;
  if ( v47 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 736: range 000000001506FDF6-0000000015070F81
int32_t __cdecl FungusFighterActivity::restartFungusFigherTrainingDungeon(FungusFighterActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  FungusFighterActivity *v4; // rdx
  unsigned __int64 v5; // rax
  int32_t v6; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v8; // rbx
  PlayerSceneComp *v9; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v11; // rbx
  PlayerMpComp *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  DungeonScene *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-31Ch] BYREF
  PlayerDungeonComp *dungeon_comp; // [rsp+18h] [rbp-318h]
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-310h]
  const data::FungusTrainingDungeonExcelConfig *training_config_ptr; // [rsp+28h] [rbp-308h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *ret; // [rsp+30h] [rbp-300h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dest_dungeon_scene_ptr; // [rsp+38h] [rbp-2F8h]
  std::shared_ptr<Config> v38; // [rsp+40h] [rbp-2F0h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+50h] [rbp-2E0h] BYREF
  common::milog::MiLogStream v40; // [rsp+70h] [rbp-2C0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+90h] [rbp-2A0h] BYREF
  char v42[624]; // [rsp+C0h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 14 dungeon_id:772 48 4 12 ret_code:780 64 16 21 dungeon_scene_ptr:766 96 28 21 enter_dung"
                        "eon_opt:812 160 136 19 dungeon_context:828 368 144 23 dungeon_context_opt:792";
  *(_QWORD *)(v1 + 16) = FungusFighterActivity::restartFungusFigherTrainingDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862723] = 0x4000000;
  v3[536862724] = -218959118;
  v3[536862729] = -218959360;
  v3[536862730] = -218959118;
  v3[536862731] = 62194;
  v3[536862736] = -202116109;
  v3[536862737] = -202116109;
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v5)(v4) )
  {
    v6 = 10410;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "restartFungusFigherTrainingDungeon",
      744);
    v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v40,
           (const char (*)[43])"[FungusFighter] is not in self world, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v40);
    v6 = 512;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInTransfer(v9) )
  {
    v6 = 170;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "restartFungusFigherTrainingDungeon",
      755);
    v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v40,
            (const char (*)[33])"[FungusFighter] in mp mode, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v40);
    v6 = 1202;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isAllowEnterPlayerEmpty(v12) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    dungeon_comp = Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 64));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "restartFungusFigherTrainingDungeon",
        769);
      v14 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v40,
              (const char (*)[56])"[FungusFighter] restart dungeon_scene_ptr is null, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      *(_DWORD *)(v1 + 32) = DungeonScene::getDungeonId(v15);
      v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( DungeonScene::getDungeonResult(v16) == DUNGEON_RESULT_NONE )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "restartFungusFigherTrainingDungeon",
          776);
        v17 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(
                &v40,
                (const char (*)[84])"[FungusFighter] only a settled training dungeon can specially restart, dungeon_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v40);
        v6 = -1;
        goto LABEL_71;
      }
      *(_DWORD *)(v1 + 48) = PlayerDungeonComp::checkRestartDungeon(dungeon_comp, DUNGEON_RESTART_REASON_DIE_RETRY);
      if ( *(_DWORD *)(v1 + 48) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "restartFungusFigherTrainingDungeon",
          783);
        v18 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v40,
                (const char (*)[49])"[FungusFighter] checkRestartDungeon failed, ret:");
        v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v1 + 48));
        v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        common::milog::MiLogStream::~MiLogStream(&v40);
        v6 = *(_DWORD *)(v1 + 48);
        goto LABEL_71;
      }
      v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( DungeonScene::getDungeonType(v21) == DUNGEON_FUNGUS_FIGHTER_TRAINING )
      {
        v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        DungeonScene::getDungeonExtraData<FungusFighterDungeonContext>(
          (std::optional<FungusFighterDungeonContext> *)(v1 + 368),
          v22);
        if ( !std::optional<FungusFighterDungeonContext>::has_value((const std::optional<FungusFighterDungeonContext> *const)(v1 + 368)) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/fungus_fighter_activity.cpp",
            "restartFungusFigherTrainingDungeon",
            795);
          v23 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v40,
                  (const char (*)[57])"[FungusFighter] cur dungeon is not legally entered, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
          common::milog::MiLogStream::~MiLogStream(&v40);
          v6 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v38);
          config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
          std::shared_ptr<Config>::~shared_ptr(&v38);
          training_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(
                                  config_mgr,
                                  *(_DWORD *)(v1 + 32));
          if ( training_config_ptr )
          {
            if ( !FungusFighterActivity::isFungusTrainingDungeonOpen(this, *(_DWORD *)(v1 + 32)) )
            {
              common::milog::MiLogStream::create(
                &v40,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/fungus_fighter_activity.cpp",
                "restartFungusFigherTrainingDungeon",
                808);
              v25 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                      &v40,
                      (const char (*)[59])"[FungusFighter] training dungeon is not open, dungeon id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v1 + 32));
              common::milog::MiLogStream::~MiLogStream(&v40);
              v6 = 10414;
            }
            else
            {
              EnterDungeonOption::EnterDungeonOption((EnterDungeonOption *const)(v1 + 96));
              FungusFighterActivity::getTrainingDungeonEnterOpt(
                this,
                (EnterDungeonOption *)(v1 + 96),
                *(_DWORD *)(v1 + 32),
                training_config_ptr);
              memset(&level_config_id_map, 0, sizeof(level_config_id_map));
              std::map<unsigned int,unsigned int>::map(&level_config_id_map);
              PlayerDungeonComp::restartDungeon(
                &__in,
                dungeon_comp,
                &level_config_id_map,
                *(EnterDungeonOption *)(v1 + 96));
              std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
              ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
              dest_dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
              if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( *ret )
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/fungus_fighter_activity.cpp",
                  "restartFungusFigherTrainingDungeon",
                  819);
                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v40,
                  (const char (*)[38])"[FungusFighter] restartDungeon failed");
                common::milog::MiLogStream::~MiLogStream(&v40);
                if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v6 = *ret;
              }
              else if ( std::operator==<DungeonScene>(0LL, dest_dungeon_scene_ptr) )
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/fungus_fighter_activity.cpp",
                  "restartFungusFigherTrainingDungeon",
                  824);
                v26 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                        &v40,
                        (const char (*)[73])"[FungusFighter] restart dungeon failed, dest dungeon scene is null, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
                common::milog::MiLogStream::~MiLogStream(&v40);
                v6 = -1;
              }
              else
              {
                FungusFighterDungeonContext::FungusFighterDungeonContext((FungusFighterDungeonContext *const)(v1 + 160));
                FungusFighterActivity::fillTrainingDungeonContext(
                  this,
                  (FungusFighterDungeonContext *)(v1 + 160),
                  *(_DWORD *)(v1 + 32),
                  training_config_ptr);
                v27 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dest_dungeon_scene_ptr);
                DungeonScene::setDungeonExtraData<FungusFighterDungeonContext>(
                  v27,
                  (const FungusFighterDungeonContext *)(v1 + 160));
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/fungus_fighter_activity.cpp",
                  "restartFungusFigherTrainingDungeon",
                  836);
                v28 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                        &v40,
                        (const char (*)[64])"[FungusFighter] restartFungusFigherTrainingDungeon, dungeon_id:");
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v28,
                        (const unsigned int *)(v1 + 32));
                v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
                common::milog::MiLogStream::~MiLogStream(&v40);
                v6 = 0;
                FungusFighterDungeonContext::~FungusFighterDungeonContext((FungusFighterDungeonContext *const)(v1 + 160));
              }
              std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/fungus_fighter_activity.cpp",
              "restartFungusFigherTrainingDungeon",
              803);
            v24 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                    &v40,
                    (const char (*)[77])"[FungusFighter] failed to findFungusTrainingDungeonExcelConfig, dungeon_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v1 + 32));
            common::milog::MiLogStream::~MiLogStream(&v40);
            v6 = -1;
          }
        }
        std::optional<FungusFighterDungeonContext>::~optional((std::optional<FungusFighterDungeonContext> *const)(v1 + 368));
        goto LABEL_71;
      }
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "restartFungusFigherTrainingDungeon",
        789);
      v14 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
              &v40,
              (const char (*)[73])"[FungusFighter] cur dungeon is not fungus fighter training dungeon, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    common::milog::MiLogStream::~MiLogStream(&v40);
    v6 = -1;
LABEL_71:
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 64));
    goto LABEL_72;
  }
  common::milog::MiLogStream::create(
    &v40,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/fungus_fighter_activity.cpp",
    "restartFungusFigherTrainingDungeon",
    761);
  v13 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          &v40,
          (const char (*)[53])"[FungusFighter] others is entering self world, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
  common::milog::MiLogStream::~MiLogStream(&v40);
  v6 = 1216;
LABEL_72:
  result = v6;
  if ( v42 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 842: range 0000000015070F82-000000001507158B
void __cdecl FungusFighterActivity::getTrainingDungeonEnterOpt(
        FungusFighterActivity *const this,
        EnterDungeonOption *dungeon_opt,
        uint32_t dungeon_id,
        const data::FungusTrainingDungeonExcelConfig *training_config)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-C0h]
  const PointScriptConfig *point_config_ptr; // [rsp+28h] [rbp-B8h]
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
  *(_QWORD *)(v4 + 8) = "2 48 4 19 fungus_group_id:848 64 4 19 point_config_id:855";
  *(_QWORD *)(v4 + 16) = FungusFighterActivity::getTrainingDungeonEnterOpt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)dungeon_opt >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)dungeon_opt & 7) >= *(_BYTE *)(((unsigned __int64)dungeon_opt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(dungeon_opt);
  }
  dungeon_opt->is_use_born_pos = 1;
  if ( FungusFighterRuntimeMgr::findDungeonSnapShotData(&this->runtime_mgr_, dungeon_id) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&training_config->fungus_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)training_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&training_config->fungus_group_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 48) = training_config->fungus_group_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                &v7->design_config.lua_config_mgr,
                                *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&training_config->transfer_point_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&training_config->transfer_point_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 64) = training_config->transfer_point_config_id;
      point_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, *(_DWORD *)(v4 + 64));
      if ( point_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)dungeon_opt >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)dungeon_opt & 7) >= *(_BYTE *)(((unsigned __int64)dungeon_opt >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(dungeon_opt);
        }
        dungeon_opt->is_use_born_pos = 0;
        if ( (((unsigned __int8)dungeon_opt + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_opt->enter_pos >> 3)
                                                                  + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&dungeon_opt->enter_pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&dungeon_opt->enter_pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)dungeon_opt + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&dungeon_opt->enter_pos.z + 3) >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store_n(&dungeon_opt->enter_pos, 12LL);
        }
        if ( (((unsigned __int8)point_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_config_ptr->pos >> 3)
                                                                       + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&point_config_ptr->pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->pos.z
                                                                          + 3) >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_config_ptr->pos, 12LL);
        }
        dungeon_opt->enter_pos = point_config_ptr->pos;
        if ( (((unsigned __int8)dungeon_opt + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_opt->enter_rot >> 3)
                                                                   + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&dungeon_opt->enter_rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&dungeon_opt->enter_rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)dungeon_opt + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&dungeon_opt->enter_rot.z + 3) >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store_n(&dungeon_opt->enter_rot, 12LL);
        }
        if ( *(char *)(((unsigned __int64)&point_config_ptr->rot >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&point_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_config_ptr->rot.z
                                                                          + 3) >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_config_ptr->rot, 12LL);
        }
        dungeon_opt->enter_rot = point_config_ptr->rot;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "getTrainingDungeonEnterOpt",
          859);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v17,
               (const char (*)[33])"[FungusFighter] point config id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v4 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v10,
                (const char (*)[29])" NOT found, fungus_group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "getTrainingDungeonEnterOpt",
        852);
      v8 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v17,
             (const char (*)[64])"[FungusFighter] group script config nullptr , fungus_group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
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
};

// Line 869: range 000000001507158C-0000000015071986
void __cdecl FungusFighterActivity::fillTrainingDungeonContext(
        FungusFighterActivity *const this,
        FungusFighterDungeonContext *dungeon_context,
        uint32_t dungeon_id,
        const data::FungusTrainingDungeonExcelConfig *training_config)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rdx
  uint32_t rand_index; // ecx
  uint32_t cur_round; // ecx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  const FungusTrainingShapshotData *snapshot_data_ptr; // [rsp+30h] [rbp-90h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-80h] BYREF
  char v17[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 fungus_id:875";
  *(_QWORD *)(v4 + 16) = FungusFighterActivity::fillTrainingDungeonContext;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  snapshot_data_ptr = FungusFighterRuntimeMgr::findDungeonSnapShotData(&this->runtime_mgr_, dungeon_id);
  if ( snapshot_data_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&snapshot_data_ptr->rand_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)snapshot_data_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&snapshot_data_ptr->rand_index >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    rand_index = snapshot_data_ptr->rand_index;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->rand_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_context->rand_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&dungeon_context->rand_index);
    }
    dungeon_context->rand_index = rand_index;
    std::vector<unsigned int>::operator=(&dungeon_context->monster_pool_vec, &snapshot_data_ptr->monster_pool_vec);
    if ( *(_BYTE *)(((unsigned __int64)&snapshot_data_ptr->cur_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&snapshot_data_ptr->cur_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    cur_round = snapshot_data_ptr->cur_round;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&dungeon_context->cur_round);
    }
    dungeon_context->cur_round = cur_round;
  }
  else
  {
    __for_range = &training_config->valid_fungus_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&training_config->valid_fungus_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&training_config->valid_fungus_id_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 32) = *v7;
      if ( FungusFighterActivity::isFungusValidForDungeon(this, *(_DWORD *)(v4 + 32)) )
        std::set<unsigned int>::insert(
          &dungeon_context->candidate_fungus_id_set,
          (const std::set<unsigned int>::value_type *)(v4 + 32));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( std::set<unsigned int>::empty(&dungeon_context->candidate_fungus_id_set) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "fillTrainingDungeonContext",
        885);
      common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
        &v16,
        (const char (*)[62])"[FungusFighter] valid fungus candidate_fungus_id_set is empty");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_round >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_round >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&dungeon_context->cur_round);
      }
      dungeon_context->cur_round = 1;
    }
  }
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 903: range 0000000015071988-000000001507223E
void __cdecl FungusFighterActivity::logFungusCultivate(
        FungusFighterActivity *const this,
        const proto::FungusCultivateReq *req)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  google::protobuf::uint32 v6; // eax
  google::protobuf::uint32 v7; // eax
  google::protobuf::uint32 v8; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  google::protobuf::RepeatedField<unsigned int> *v10; // rax
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  google::protobuf::RepeatedField<unsigned int> *v14; // rax
  Player *player; // r14
  std::string v16; // [rsp+0h] [rbp-1E0h]
  char *v17; // [rsp+0h] [rbp-1E0h]
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // [rsp+8h] [rbp-1D8h]
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // [rsp+8h] [rbp-1D8h]
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // [rsp+8h] [rbp-1D8h]
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-1D0h]
  std::allocator<unsigned int> __a; // [rsp+37h] [rbp-1A9h] BYREF
  unsigned int val; // [rsp+38h] [rbp-1A8h] BYREF
  uint32_t preset_template_limit; // [rsp+3Ch] [rbp-1A4h]
  std::vector<std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+40h] [rbp-1A0h] BYREF
  std::vector<std::vector<unsigned int>>::const_iterator __for_end; // [rsp+48h] [rbp-198h] BYREF
  const data::FungusCultivateExcelConfig *cultivate_config_ptr; // [rsp+50h] [rbp-190h]
  const std::vector<std::vector<unsigned int>> *temp_vec; // [rsp+58h] [rbp-188h]
  const std::vector<std::vector<unsigned int>> *__for_range; // [rsp+60h] [rbp-180h]
  const std::vector<unsigned int> *n; // [rsp+68h] [rbp-178h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+70h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> v32; // [rsp+80h] [rbp-160h] BYREF
  std::initializer_list<unsigned int> v33; // [rsp+90h] [rbp-150h] BYREF
  google::protobuf::uint32 v34; // [rsp+A0h] [rbp-140h]
  std::string v35; // [rsp+B0h] [rbp-130h] BYREF
  char v36[272]; // [rsp+D0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v36;
  v16._M_dataplus._M_p = v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 10 holder:904 64 16 11 log_ptr:905 96 24 12 step_cnt:909 160 24 14 step_limit:926";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::logFungusCultivate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v35, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xEA7u, v16);
  std::string::~string(&v35);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFungusCultivateSettle>();
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v6 = proto::FungusCultivateReq::cultivate_id(req);
  proto_log::PlayerLogBodyFungusCultivateSettle::set_cultivate_id(v18, v6);
  v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v7 = proto::FungusCultivateReq::cultivate_step(req);
  proto_log::PlayerLogBodyFungusCultivateSettle::set_cultivate_step(v19, v7);
  v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v8 = proto::FungusCultivateReq::time(req);
  proto_log::PlayerLogBodyFungusCultivateSettle::set_time(v20, v8);
  LODWORD(v33._M_array) = proto::FungusCultivateReq::place_step(req);
  HIDWORD(v33._M_array) = proto::FungusCultivateReq::rotate_step(req);
  LODWORD(v33._M_len) = proto::FungusCultivateReq::exchange_step(req);
  HIDWORD(v33._M_len) = proto::FungusCultivateReq::copy_step(req);
  v34 = proto::FungusCultivateReq::undo_step(req);
  __l._M_array = (std::initializer_list<unsigned int>::iterator)&v33;
  __l._M_len = 5LL;
  std::allocator<unsigned int>::allocator(&__a);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96), __l, &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v10 = proto_log::PlayerLogBodyFungusCultivateSettle::mutable_step_cnt(v9);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
    (const std::vector<unsigned int> *)(v2 + 96),
    v10);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  __l._M_array = (std::initializer_list<unsigned int>::iterator)&std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
  v11 = proto::FungusCultivateReq::cultivate_id(req);
  cultivate_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusCultivateExcelConfig(
                           (const data::ActivityFungusFighterExcelConfigMgrBase *const)__l._M_array,
                           v11);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
  if ( cultivate_config_ptr )
  {
    preset_template_limit = 0;
    temp_vec = &cultivate_config_ptr->preset_template;
    __for_range = &cultivate_config_ptr->preset_template;
    __for_begin._M_current = std::vector<std::vector<unsigned int>>::begin(&cultivate_config_ptr->preset_template)._M_current;
    __for_end._M_current = std::vector<std::vector<unsigned int>>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>(
              &__for_begin,
              &__for_end) )
    {
      n = __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator*(&__for_begin);
      if ( !std::vector<unsigned int>::empty(n) )
        ++preset_template_limit;
      __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator++(&__for_begin);
    }
    v33._M_len = 0LL;
    v34 = 0;
    v33._M_array = (std::initializer_list<unsigned int>::iterator)preset_template_limit;
    if ( *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->rotate_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->rotate_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HIDWORD(v33._M_array) = cultivate_config_ptr->rotate_limit;
    if ( *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->exchange_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cultivate_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->exchange_limit >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    LODWORD(v33._M_len) = cultivate_config_ptr->exchange_limit;
    if ( *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->copy_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->copy_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HIDWORD(v33._M_len) = cultivate_config_ptr->copy_limit;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)(v2 + 160),
      (std::initializer_list<unsigned int>)__PAIR128__(5LL, &v33),
      &__a);
    std::allocator<unsigned int>::~allocator(&__a);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusCultivateSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v14 = proto_log::PlayerLogBodyFungusCultivateSettle::mutable_limit_cnt(v13);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
      (const std::vector<unsigned int> *)(v2 + 160),
      v14);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v32, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFungusCultivateSettle,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyFungusCultivateSettle> *)(v2 + 64));
    Player::printStatLog(player, &p_body_ptr, &v32, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v32);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "logFungusCultivate",
      914);
    v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            (common::milog::MiLogStream *const)&v35,
            (const char (*)[22])"invalid cultivate_id:");
    val = proto::FungusCultivateReq::cultivate_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v35);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  std::shared_ptr<proto_log::PlayerLogBodyFungusCultivateSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFungusCultivateSettle> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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
};

// Line 939: range 0000000015072240-00000000150722D1
int32_t __cdecl FungusFighterActivity::onFungusFighterTrainingSelectFungusReq(
        FungusFighterActivity *const this,
        const proto::FungusFighterTrainingSelectFungusReq *req)
{
  FungusFighterActivity *v2; // rdx
  unsigned __int64 v3; // rax

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v3)(v2) )
    return 10410;
  else
    return FungusFighterRuntimeMgr::onFungusFighterTrainingSelectFungusReq(&this->runtime_mgr_, req);
};

// Line 948: range 00000000150722D2-00000000150723F4
int32_t __cdecl FungusFighterActivity::onFungusFighterClearTrainingRuntimeDataReq(
        FungusFighterActivity *const this,
        uint32_t dungeon_id)
{
  FungusFighterActivity *v2; // rdx
  unsigned __int64 v3; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v3)(v2) )
    return 10410;
  if ( FungusFighterRuntimeMgr::getIsRunning(&this->runtime_mgr_) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "onFungusFighterClearTrainingRuntimeDataReq",
      955);
    common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
      &v5,
      (const char (*)[63])"[FungusFighter] cannot clear bin data when in training dungeon");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    FungusFighterRuntimeMgr::clearDungeonSnapshot(&this->runtime_mgr_, dungeon_id);
    return 0;
  }
};

// Line 964: range 00000000150723F6-0000000015072487
int32_t __cdecl FungusFighterActivity::onFungusFighterUseBackupFungusReq(
        FungusFighterActivity *const this,
        const proto::FungusFighterUseBackupFungusReq *req)
{
  FungusFighterActivity *v2; // rdx
  unsigned __int64 v3; // rax

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v3)(v2) )
    return 10410;
  else
    return FungusFighterRuntimeMgr::onFungusFighterUseBackupFungusReq(&this->runtime_mgr_, req);
};

// Line 973: range 0000000015072488-0000000015072A47
void __fastcall FungusFighterActivity::recordFinalScore(
        FungusFighterActivity *const this,
        uint32_t dungeon_id,
        uint32_t *final_score,
        unsigned __int64 is_new_record)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  FungusFighterActivity *v7; // rdx
  unsigned __int64 v8; // rax
  char v9; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::pointer v10; // rdx
  bool *p_is_open; // rax
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::pointer v14; // rdx
  uint32_t best_score; // ecx
  unsigned int v16; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::pointer v17; // rdx
  uint32_t *p_best_score; // rax
  PlayerEventComp *EventComp; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self __y; // [rsp+28h] [rbp-D8h] BYREF
  std::shared_ptr<FungusFighterTrainingNewRecordScoreEvent> __r; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 dungeon_id:972 64 8 8 iter:980";
  *(_QWORD *)(v4 + 16) = FungusFighterActivity::recordFinalScore;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = dungeon_id;
  if ( *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) != 0
    && (char)(is_new_record & 7) >= *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(is_new_record);
  }
  *(_BYTE *)is_new_record = 0;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_13;
  v7 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v8)(v7) )
LABEL_13:
    v9 = 1;
  else
    v9 = 0;
  if ( v9 )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "recordFinalScore",
      977);
    common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
      &v25,
      (const char (*)[66])"[FungusFighter] activity content closed and will not record score");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    *(std::map<unsigned int,FungusTrainingDungeonData>::iterator *)(v4 + 64) = std::map<unsigned int,FungusTrainingDungeonData>::find(
                                                                                 &this->fungus_training_dungeon_map_,
                                                                                 (const std::map<unsigned int,FungusTrainingDungeonData>::key_type *)(v4 + 48));
    __y._M_node = std::map<unsigned int,FungusTrainingDungeonData>::end(&this->fungus_training_dungeon_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self *)(v4 + 64),
           &__y) )
    {
      goto LABEL_21;
    }
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> > *const)(v4 + 64));
    p_is_open = &v10->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( !v10->second.is_open )
LABEL_21:
      v12 = 1;
    else
      v12 = 0;
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "recordFinalScore",
        983);
      v13 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
              &v25,
              (const char (*)[64])"[FungusFighter] corresponding dungeon is not open, dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> > *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v14->second.best_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->second.best_score >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      best_score = v14->second.best_score;
      if ( *(_BYTE *)(((unsigned __int64)final_score >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)final_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)final_score >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( best_score < *final_score )
      {
        v16 = *final_score;
        v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> > *const)(v4 + 64));
        p_best_score = &v17->second.best_score;
        if ( *(_BYTE *)(((unsigned __int64)p_best_score >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_best_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_best_score >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_store4(p_best_score);
        }
        v17->second.best_score = v16;
        if ( *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) != 0
          && (char)(is_new_record & 7) >= *(_BYTE *)((is_new_record >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(is_new_record);
        }
        *(_BYTE *)is_new_record = 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        common::tools::perf::make_shared<FungusFighterTrainingNewRecordScoreEvent,unsigned int &,unsigned int const&>(
          (unsigned int *)&__r,
          (const unsigned int *)(v4 + 48),
          final_score,
          (const unsigned int *)(v4 + 48));
        std::shared_ptr<BaseEvent>::shared_ptr<FungusFighterTrainingNewRecordScoreEvent,void>(&p_event_ptr, &__r);
        PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
        std::shared_ptr<FungusFighterTrainingNewRecordScoreEvent>::~shared_ptr(&__r);
        BaseActivity::notifyClientData(this, 0);
      }
    }
  }
  if ( v26 == (char *)v4 )
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

// Line 998: range 0000000015072A48-0000000015072C65
bool __cdecl FungusFighterActivity::checkCampFinished(FungusFighterActivity *const this, uint32_t camp_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  bool result; // al
  bool camp_fungus_all_captured; // [rsp+1Fh] [rbp-91h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  const std::set<unsigned int> *fungus_id_set; // [rsp+30h] [rbp-80h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-78h]
  std::shared_ptr<Config> v13; // [rsp+40h] [rbp-70h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 camp_fungus_id:1001";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::checkCampFinished;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  fungus_id_set = ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(
                    &v5->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr,
                    camp_id);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  camp_fungus_all_captured = 1;
  __for_range = fungus_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(fungus_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(fungus_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,FungusData>,unsigned int>(
            &this->fungus_id_data_map_,
            (const unsigned int *)(v2 + 32)) )
    {
      camp_fungus_all_captured = 0;
      break;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  result = camp_fungus_all_captured;
  if ( v14 == (char *)v2 )
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

// Line 1014: range 0000000015072C66-00000000150730A5
void __cdecl FungusFighterActivity::updateFinishedCampQuestProgress(FungusFighterActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v4; // rdx
  common::milog::MiLogStream *v5; // rax
  uint32_t *v7; // rdx
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-F0h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-E0h]
  const data::FungusCampExcelConfig *fungus_camp_config_ptr; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<Config> v14; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+80h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 12 camp_id:1017 48 4 12 task_id:1025 64 24 23 update_task_id_vec:1016";
  *(_QWORD *)(v1 + 16) = FungusFighterActivity::updateFinishedCampQuestProgress;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
  __for_range = &this->finish_camp_id_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->finish_camp_id_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->finish_camp_id_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v4 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    fungus_camp_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusCampExcelConfig(
                               config_mgr,
                               *(_DWORD *)(v1 + 32));
    if ( fungus_camp_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&fungus_camp_config_ptr->task_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&fungus_camp_config_ptr->task_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = fungus_camp_config_ptr->task_id;
      if ( *(_DWORD *)(v1 + 48) && !(unsigned int)BaseActivity::getQuestContentValue(this, *(_DWORD *)(v1 + 48)) )
        std::vector<unsigned int>::emplace_back<unsigned int &>(
          (std::vector<unsigned int> *const)(v1 + 64),
          (unsigned int *)(v1 + 48),
          (unsigned int *)(v1 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "updateFinishedCampQuestProgress",
        1022);
      v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v15,
             (const char (*)[38])"[FungusFighter] cannot find camp_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v1 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    BaseActivity::updateQuestContent(this, *v7);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  if ( v16 == (char *)v1 )
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
};

// Line 1042: range 00000000150730A6-0000000015073565
int32_t __cdecl FungusFighterActivity::openFungusPlotDungeonStage(
        FungusFighterActivity *const this,
        const std::vector<unsigned int> *stage_id_vec,
        bool is_force)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rdx
  bool *v7; // r8
  common::milog::MiLogStream *v8; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::map<unsigned int,bool>::mapped_type *v11; // rax
  _BYTE *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  bool v17; // [rsp+2Bh] [rbp-B5h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-A0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-80h] BYREF
  char v25[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 stage_id:1045";
  *(_QWORD *)(v3 + 16) = FungusFighterActivity::openFungusPlotDungeonStage;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  ret = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v23);
  __for_range = stage_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(stage_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(stage_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v6;
    if ( data::ActivityFungusFighterExcelConfigMgrBase::findFungusPlotDungeonExcelConfig(
           config_mgr,
           *(_DWORD *)(v3 + 32)) )
    {
      v17 = 1;
      v9 = std::map<unsigned int,bool>::emplace<unsigned int &,bool>(
             &this->fungus_plot_stage_map_,
             (unsigned int *)(v3 + 32),
             &v17,
             (unsigned int *)&this->fungus_plot_stage_map_,
             v7);
      if ( !v9.second )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "openFungusPlotDungeonStage",
          1055);
        v10 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                &v24,
                (const char (*)[54])"[FungusFighter] duplicate open plot stage, stage_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v24);
        if ( is_force )
        {
          v11 = std::map<unsigned int,bool>::operator[](
                  &this->fungus_plot_stage_map_,
                  (const std::map<unsigned int,bool>::key_type *)(v3 + 32));
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(v11);
          }
          *v12 = 1;
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/fungus_fighter_activity.cpp",
            "openFungusPlotDungeonStage",
            1059);
          v13 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v24,
                  (const char (*)[59])"[FungusFighter] plot stage force openned by gm, stage_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
        else
        {
          ret = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "openFungusPlotDungeonStage",
        1049);
      v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v24,
             (const char (*)[49])"[FungusFighter] cannot find stage id, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v24);
      ret = -1;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/fungus_fighter_activity.cpp",
    "openFungusPlotDungeonStage",
    1070);
  v14 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          &v24,
          (const char (*)[53])"[FungusFighter] open plot stage succ, stage_id_vec: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v14, stage_id_vec);
  common::milog::MiLogStream::~MiLogStream(&v24);
  result = ret;
  if ( v25 == (char *)v3 )
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

// Line 1075: range 0000000015073566-00000000150736F6
_BOOL8 __fastcall FungusFighterActivity::isFungusPlotDungeonStageOpen(
        const FungusFighterActivity *const this,
        uint32_t stage_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::pointer v5; // rdx
  bool *p_second; // rax
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1074 64 8 9 iter:1076";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::isFungusPlotDungeonStageOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  *(std::map<unsigned int,bool>::const_iterator *)(v2 + 64) = std::map<unsigned int,bool>::find(
                                                                &this->fungus_plot_stage_map_,
                                                                (const std::map<unsigned int,bool>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,bool>::end(&this->fungus_plot_stage_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_second);
    }
    result = v5->second;
  }
  else
  {
    result = 0LL;
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

// Line 1085: range 00000000150736F8-0000000015073E25
int32_t __cdecl FungusFighterActivity::openFungusTrainingDungeonStage(
        FungusFighterActivity *const this,
        const std::vector<unsigned int> *stage_id_vec,
        bool is_force)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rdx
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::pointer v12; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  FungusTrainingDungeonData *v17; // rax
  unsigned int *v18; // rcx
  FungusTrainingDungeonData *v19; // r8
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-16Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-158h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-150h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self __y; // [rsp+48h] [rbp-148h] BYREF
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+50h] [rbp-140h]
  const std::vector<unsigned int> *__for_range; // [rsp+58h] [rbp-138h]
  const std::vector<unsigned int> *dungeon_id_vec_ptr; // [rsp+60h] [rbp-130h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-128h]
  std::shared_ptr<Config> v36; // [rsp+70h] [rbp-120h] BYREF
  common::milog::MiLogStream v37; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v38; // [rsp+A0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v39; // [rsp+C0h] [rbp-D0h] BYREF
  char v40[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 stage_id:1088 48 4 24 training_dungeon_id:1097 64 8 9 iter:1099 96 12 26 training_dungeon_data:1114";
  *(_QWORD *)(v3 + 16) = FungusFighterActivity::openFungusTrainingDungeonStage;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202177536;
  ret = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v36);
  __for_range = stage_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(stage_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(stage_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v6;
    dungeon_id_vec_ptr = ActivityFungusFighterExcelConfigMgr::findFungusTrainingDungeonIdVecByStageId(
                           config_mgr,
                           *(_DWORD *)(v3 + 32));
    if ( dungeon_id_vec_ptr )
    {
      __for_range_0 = dungeon_id_vec_ptr;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(dungeon_id_vec_ptr)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *v8;
        *(std::map<unsigned int,FungusTrainingDungeonData>::iterator *)(v3 + 64) = std::map<unsigned int,FungusTrainingDungeonData>::find(
                                                                                     &this->fungus_training_dungeon_map_,
                                                                                     (const std::map<unsigned int,FungusTrainingDungeonData>::key_type *)(v3 + 48));
        __y._M_node = std::map<unsigned int,FungusTrainingDungeonData>::end(&this->fungus_training_dungeon_map_)._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self *)(v3 + 64),
               &__y) )
        {
          if ( is_force )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/fungus_fighter_activity.cpp",
              "openFungusTrainingDungeonStage",
              1104);
            v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                   &v37,
                   (const char (*)[49])"[FungusFighter] dungeon opened by gm, stage_id: ");
            v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v9,
                    (const unsigned int *)(v3 + 32));
            v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v10,
                    (const char (*)[15])", dungeon_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v37);
            v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> > *const)(v3 + 64));
            p_is_open = &v12->second.is_open;
            if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(p_is_open);
            }
            v12->second.is_open = 1;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/fungus_fighter_activity.cpp",
              "openFungusTrainingDungeonStage",
              1109);
            v14 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    &v38,
                    (const char (*)[53])"[FungusFighter] dungeon duplicate opened, stage_id: ");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v3 + 32));
            v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v15,
                    (const char (*)[15])", dungeon_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v38);
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(v3 + 96) = 0;
          *(_BYTE *)(v3 + 100) = 1;
          *(_DWORD *)(v3 + 104) = 0;
          *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 48);
          v17 = std::move<FungusTrainingDungeonData &>((FungusTrainingDungeonData *)(v3 + 96));
          std::map<unsigned int,FungusTrainingDungeonData>::emplace<unsigned int &,FungusTrainingDungeonData>(
            &this->fungus_training_dungeon_map_,
            (unsigned int *)(v3 + 48),
            v17,
            v18,
            v19);
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/fungus_fighter_activity.cpp",
            "openFungusTrainingDungeonStage",
            1118);
          v20 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v39,
                  (const char (*)[61])"[FungusFighter] open training dungeon stage succ, stage_id: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v3 + 32));
          v22 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v21,
                  (const char (*)[24])", training_dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v39);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "openFungusTrainingDungeonStage",
        1093);
      v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v39,
             (const char (*)[56])"[FungusFighter] cannot find stage id config, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v39);
      ret = -1;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  common::milog::MiLogStream::create(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/fungus_fighter_activity.cpp",
    "openFungusTrainingDungeonStage",
    1123);
  v23 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
          &v39,
          (const char (*)[57])"[FungusFighter] open training stage succ, stage_id_vec: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v23, stage_id_vec);
  common::milog::MiLogStream::~MiLogStream(&v39);
  result = ret;
  if ( v40 == (char *)v3 )
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

// Line 1128: range 0000000015073E26-0000000015073FB6
_BOOL8 __fastcall FungusFighterActivity::isFungusTrainingDungeonOpen(
        const FungusFighterActivity *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::pointer v5; // rdx
  bool *p_is_open; // rax
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:1127 64 8 9 iter:1129";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::isFungusTrainingDungeonOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  *(std::map<unsigned int,FungusTrainingDungeonData>::const_iterator *)(v2 + 64) = std::map<unsigned int,FungusTrainingDungeonData>::find(
                                                                                     &this->fungus_training_dungeon_map_,
                                                                                     (const std::map<unsigned int,FungusTrainingDungeonData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,FungusTrainingDungeonData>::end(&this->fungus_training_dungeon_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> > *const)(v2 + 64));
    p_is_open = &v5->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    result = v5->second.is_open;
  }
  else
  {
    result = 0LL;
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

// Line 1138: range 0000000015073FB8-0000000015074148
_BOOL8 __fastcall FungusFighterActivity::isFungusValidForDungeon(
        const FungusFighterActivity *const this,
        uint32_t fungus_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusData>,false,false>::pointer v5; // rdx
  bool *p_is_cultivate; // rax
  _BOOL8 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 fungus_id:1137 64 8 9 iter:1139";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::isFungusValidForDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = fungus_id;
  *(std::unordered_map<unsigned int,FungusData>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,FungusData>::find(
                                                                                &this->fungus_id_data_map_,
                                                                                (const std::unordered_map<unsigned int,FungusData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,FungusData>::end(&this->fungus_id_data_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,FungusData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusData>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusData>,false,false> *const)(v2 + 64));
    p_is_cultivate = &v5->second.is_cultivate;
    if ( *(_BYTE *)(((unsigned __int64)p_is_cultivate >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_cultivate & 7) >= *(_BYTE *)(((unsigned __int64)p_is_cultivate >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_cultivate);
    }
    result = v5->second.is_cultivate;
  }
  else
  {
    result = 0LL;
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

// Line 1148: range 000000001507414A-0000000015074266
_BOOL8 __fastcall FungusFighterActivity::isFungusValidForPlotDungeon(
        const FungusFighterActivity *const this,
        uint32_t fungus_id,
        const data::FungusPlotDungeonExcelConfig *plot_config_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  _BOOL8 result; // rax
  bool v7; // al
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 fungus_id:1147";
  *(_QWORD *)(v3 + 16) = FungusFighterActivity::isFungusValidForPlotDungeon;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = fungus_id;
  if ( FungusFighterActivity::isFungusValidForDungeon(this, *(_DWORD *)(v3 + 32)) )
  {
    result = 1LL;
  }
  else
  {
    v7 = plot_config_ptr
      && common::tools::MiscUtils::isContains<unsigned int>(
           &plot_config_ptr->locked_fungus_id_list,
           (const unsigned int *)(v3 + 32));
    result = v7;
  }
  if ( v9 == (char *)v3 )
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

// Line 1162: range 0000000015074268-00000000150742F2
void __cdecl FungusFighterActivity::onFungusTrainingDungeonMonsterDie(
        FungusFighterActivity *const this,
        uint32_t entity_id)
{
  FungusFighterActivity *v2; // rdx
  unsigned __int64 v3; // rax

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  if ( !(*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v3)(v2) )
    FungusFighterRuntimeMgr::onFungusTrainingDungeonMonsterDie(&this->runtime_mgr_, entity_id);
};

// Line 1171: range 00000000150742F4-0000000015074D57
__int64 __fastcall FungusFighterActivity::fungusCapture(FungusFighterActivity *const this, uint32_t monster_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  FungusFighterActivity *v5; // rdx
  unsigned __int64 v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  FungusData *v16; // rax
  unsigned int *v17; // rcx
  FungusData *v18; // r8
  PlayerEventComp *EventComp; // r14
  PlayerGroupLinkComp *GroupLinkComp; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v21; // rdx
  std::unordered_map<unsigned int,FungusData>::mapped_type *v22; // rdx
  char v23; // al
  uint32_t init_name_id; // r14d
  std::unordered_map<unsigned int,FungusData>::mapped_type *v25; // rdx
  uint32_t *p_name_id; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  const ActivityFungusFighterExcelConfigMgr *activity_fungus_fighter_config_mgr; // [rsp+20h] [rbp-140h]
  const data::FungusExcelConfig *fungus_config_ptr; // [rsp+28h] [rbp-138h]
  const data::FungusCampExcelConfig *camp_config_ptr; // [rsp+30h] [rbp-130h]
  const std::set<unsigned int> *camp_fungus_id_set; // [rsp+38h] [rbp-128h]
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-120h]
  const data::FungusExcelConfig *fungus_config_ptr_0; // [rsp+48h] [rbp-118h]
  std::shared_ptr<FungusFighterCaptureFungusEvent> __r; // [rsp+50h] [rbp-110h] BYREF
  std::shared_ptr<Config> v36; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v37; // [rsp+70h] [rbp-F0h] BYREF
  char v38[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 12 camp_id:1183 48 4 14 fungus_id:1195 64 4 19 camp_fungus_id:1221 80 4 15 monster_id:117"
                        "0 96 20 16 fungus_data:1203";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::fungusCapture;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -217841664;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 80) = monster_id;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v6)(v5) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v36);
    activity_fungus_fighter_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v36);
    fungus_config_ptr = ActivityFungusFighterExcelConfigMgr::findFungusExcelConfigByCaptureMonsterId(
                          activity_fungus_fighter_config_mgr,
                          *(_DWORD *)(v2 + 80));
    if ( fungus_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&fungus_config_ptr->camp_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fungus_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fungus_config_ptr->camp_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = fungus_config_ptr->camp_id;
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
              &this->unlock_camp_id_set_,
              (const unsigned int *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "fungusCapture",
          1186);
        v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
               &v37,
               (const char (*)[26])"camp is lock, monster_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 80));
        v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" camp_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v37);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        camp_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusCampExcelConfig(
                            activity_fungus_fighter_config_mgr,
                            *(_DWORD *)(v2 + 32));
        if ( camp_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&fungus_config_ptr->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&fungus_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = fungus_config_ptr->id;
          if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,FungusData>,unsigned int>(
                 &this->fungus_id_data_map_,
                 (const unsigned int *)(v2 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/fungus_fighter_activity.cpp",
              "fungusCapture",
              1198);
            v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v37,
                    (const char (*)[35])"fungus already capture, fungus_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v37);
            result = 0LL;
          }
          else
          {
            *(_DWORD *)(v2 + 96) = 0;
            *(_DWORD *)(v2 + 100) = 0;
            *(_BYTE *)(v2 + 104) = 0;
            *(_DWORD *)(v2 + 108) = 0;
            *(_DWORD *)(v2 + 112) = 0;
            *(_DWORD *)(v2 + 96) = *(_DWORD *)(v2 + 48);
            if ( *(_BYTE *)(((unsigned __int64)&this->capture_order_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->capture_order_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 108) = ++this->capture_order_;
            v16 = std::move<FungusData &>((FungusData *)(v2 + 96));
            std::unordered_map<unsigned int,FungusData>::emplace<unsigned int &,FungusData>(
              &this->fungus_id_data_map_,
              (unsigned int *)(v2 + 48),
              v16,
              v17,
              v18);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EventComp = Player::getEventComp(this->player_);
            common::tools::perf::make_shared<FungusFighterCaptureFungusEvent,unsigned int &>(
              (unsigned int *)&__r,
              (unsigned int *)(v2 + 48));
            std::shared_ptr<BaseEvent>::shared_ptr<FungusFighterCaptureFungusEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&v36,
              &__r);
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v36);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v36);
            std::shared_ptr<FungusFighterCaptureFungusEvent>::~shared_ptr(&__r);
            if ( FungusFighterActivity::checkCampFinished(this, *(_DWORD *)(v2 + 32)) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              GroupLinkComp = Player::getGroupLinkComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&camp_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)camp_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&camp_config_ptr->group_link_id >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              PlayerGroupLinkComp::finishGroupBundle(GroupLinkComp, camp_config_ptr->group_link_id);
              std::unordered_set<unsigned int>::emplace<unsigned int &>(
                &this->finish_camp_id_set_,
                (unsigned int *)(v2 + 32),
                (unsigned int *)&this->finish_camp_id_set_);
              BaseActivity::updateAllConds(this);
              camp_fungus_id_set = ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(
                                     activity_fungus_fighter_config_mgr,
                                     *(_DWORD *)(v2 + 32));
              __for_range = camp_fungus_id_set;
              __for_begin._M_node = std::set<unsigned int>::begin(camp_fungus_id_set)._M_node;
              __for_end._M_node = std::set<unsigned int>::end(camp_fungus_id_set)._M_node;
              while ( std::operator!=(&__for_begin, &__for_end) )
              {
                v21 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
                if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v2 + 64) = *v21;
                fungus_config_ptr_0 = data::ActivityFungusFighterExcelConfigMgrBase::findFungusExcelConfig(
                                        activity_fungus_fighter_config_mgr,
                                        *(_DWORD *)(v2 + 64));
                if ( !fungus_config_ptr_0 )
                  goto LABEL_43;
                if ( *(_BYTE *)(((unsigned __int64)&fungus_config_ptr_0->init_name_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&fungus_config_ptr_0->init_name_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( !fungus_config_ptr_0->init_name_id )
                  goto LABEL_43;
                v22 = std::unordered_map<unsigned int,FungusData>::operator[](
                        &this->fungus_id_data_map_,
                        (const std::unordered_map<unsigned int,FungusData>::key_type *)(v2 + 64));
                if ( *(_BYTE *)(((unsigned __int64)&v22->name_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)v22 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->name_id >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( !v22->name_id )
                  v23 = 1;
                else
LABEL_43:
                  v23 = 0;
                if ( v23 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&fungus_config_ptr_0->init_name_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&fungus_config_ptr_0->init_name_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  init_name_id = fungus_config_ptr_0->init_name_id;
                  v25 = std::unordered_map<unsigned int,FungusData>::operator[](
                          &this->fungus_id_data_map_,
                          (const std::unordered_map<unsigned int,FungusData>::key_type *)(v2 + 64));
                  p_name_id = &v25->name_id;
                  if ( *(_BYTE *)(((unsigned __int64)p_name_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_name_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_name_id >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_store4(p_name_id);
                  }
                  v25->name_id = init_name_id;
                }
                std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
              }
            }
            BaseActivity::notifyClientData(this, 0);
            result = 0LL;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/fungus_fighter_activity.cpp",
            "fungusCapture",
            1192);
          v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v37,
                  (const char (*)[35])"camp config not found, monster_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 80));
          v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" camp_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v37);
          result = 0xFFFFFFFFLL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "fungusCapture",
        1180);
      v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v37,
             (const char (*)[20])"invalid monster_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v37);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v38 == (char *)v2 )
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

// Line 1238: range 0000000015074D58-00000000150755B1
int32_t __cdecl FungusFighterActivity::fungusCultivate(
        FungusFighterActivity *const this,
        const proto::FungusCultivateReq *req,
        proto::FungusCultivateRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  FungusFighterActivity *v6; // rdx
  unsigned __int64 v7; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false>::pointer v18; // rax
  bool *p_is_cultivate; // rax
  FungusFighterActivity *v20; // rdx
  uint32_t v21; // ecx
  PlayerEventComp *EventComp; // r14
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false> __y; // [rsp+28h] [rbp-108h] BYREF
  const data::FungusCultivateExcelConfig *cultivate_config_ptr; // [rsp+30h] [rbp-100h]
  FungusData *fungus_data; // [rsp+38h] [rbp-F8h]
  std::shared_ptr<FungusFighterCultivateFungusEvent> __r; // [rsp+40h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 17 cultivate_id:1243 64 4 19 cultivate_step:1245 80 4 14 fungus_id:1262 96 8 9 iter:1263";
  *(_QWORD *)(v3 + 16) = FungusFighterActivity::fungusCultivate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v7)(v6) )
  {
    result = 10410;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::FungusCultivateReq::cultivate_id(req);
    proto::FungusCultivateRsp::set_cultivate_id(rsp_0, *(_DWORD *)(v3 + 48));
    *(_DWORD *)(v3 + 64) = proto::FungusCultivateReq::cultivate_step(req);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
    cultivate_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusCultivateExcelConfig(
                             &v9->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr,
                             *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v28);
    if ( cultivate_config_ptr )
    {
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
              &this->unlock_cultivate_id_set_,
              (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "fungusCultivate",
          1254);
        v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v29,
                (const char (*)[33])"cultivate is lock, cultivate_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v29);
        result = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->min_step >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cultivate_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->min_step >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( cultivate_config_ptr->min_step <= *(_DWORD *)(v3 + 64) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->fungus_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)cultivate_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->fungus_id >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 80) = cultivate_config_ptr->fungus_id;
          *(std::unordered_map<unsigned int,FungusData>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,FungusData>::find(
                                                                                  &this->fungus_id_data_map_,
                                                                                  (const std::unordered_map<unsigned int,FungusData>::key_type *)(v3 + 80));
          __y._M_cur = std::unordered_map<unsigned int,FungusData>::end(&this->fungus_id_data_map_)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,FungusData>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false> *)(v3 + 96),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/fungus_fighter_activity.cpp",
              "fungusCultivate",
              1266);
            v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v29,
                    (const char (*)[35])"fungus has not capture, fungus_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream(&v29);
            result = -1;
          }
          else
          {
            v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false> *const)(v3 + 96));
            fungus_data = &v18->second;
            p_is_cultivate = &v18->second.is_cultivate;
            if ( *(_BYTE *)(((unsigned __int64)p_is_cultivate >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_cultivate & 7) >= *(_BYTE *)(((unsigned __int64)p_is_cultivate >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_cultivate);
            }
            if ( !fungus_data->is_cultivate )
            {
              fungus_data->is_cultivate = 1;
              v20 = this;
              if ( *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->task_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->task_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              BaseActivity::updateQuestContent(v20, cultivate_config_ptr->task_id);
            }
            if ( *(_BYTE *)(((unsigned __int64)&fungus_data->min_cultivate_step >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)fungus_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fungus_data->min_cultivate_step >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( !fungus_data->min_cultivate_step || fungus_data->min_cultivate_step > *(_DWORD *)(v3 + 64) )
            {
              v21 = *(_DWORD *)(v3 + 64);
              if ( *(_BYTE *)(((unsigned __int64)&fungus_data->min_cultivate_step >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)fungus_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fungus_data->min_cultivate_step >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(&fungus_data->min_cultivate_step);
              }
              fungus_data->min_cultivate_step = v21;
              proto::FungusCultivateRsp::set_is_new_record(rsp_0, 1);
              BaseActivity::notifyClientData(this, 0);
            }
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EventComp = Player::getEventComp(this->player_);
            common::tools::perf::make_shared<FungusFighterCultivateFungusEvent,unsigned int &,unsigned int &>(
              (unsigned int *)&__r,
              (unsigned int *)(v3 + 48),
              (unsigned int *)(v3 + 64),
              (unsigned int *)(v3 + 48));
            std::shared_ptr<BaseEvent>::shared_ptr<FungusFighterCultivateFungusEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&v28,
              &__r);
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v28);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v28);
            std::shared_ptr<FungusFighterCultivateFungusEvent>::~shared_ptr(&__r);
            FungusFighterActivity::logFungusCultivate(this, req);
            result = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/fungus_fighter_activity.cpp",
            "fungusCultivate",
            1259);
          v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v29,
                  (const char (*)[24])"invalid cultivate_step:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v3 + 64));
          v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" min_step:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  &cultivate_config_ptr->min_step);
          v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v15,
                  (const char (*)[15])" cultivate_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v29);
          result = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "fungusCultivate",
        1249);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v29,
              (const char (*)[22])"invalid cultivate_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = -1;
    }
  }
  if ( v30 == (char *)v3 )
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

// Line 1290: range 00000000150755B2-0000000015075A9A
int32_t __cdecl FungusFighterActivity::fungusRename(
        FungusFighterActivity *const this,
        const proto::FungusRenameReq *req,
        proto::FungusRenameRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  FungusFighterActivity *v6; // rdx
  unsigned __int64 v7; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t v15; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false>::pointer v16; // rdx
  uint32_t *p_name_id; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false> __y; // [rsp+20h] [rbp-D0h] BYREF
  const data::FungusExcelConfig *fungus_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 fungus_id:1295 48 4 12 name_id:1297 64 8 9 iter:1309";
  *(_QWORD *)(v3 + 16) = FungusFighterActivity::fungusRename;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v7)(v6) )
  {
    result = 10410;
  }
  else
  {
    *(_DWORD *)(v3 + 32) = proto::FungusRenameReq::fungus_id(req);
    proto::FungusRenameRsp::set_fungus_id(rsp_0, *(_DWORD *)(v3 + 32));
    *(_DWORD *)(v3 + 48) = proto::FungusRenameReq::name_id(req);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    fungus_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusExcelConfig(
                          &v9->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr,
                          *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( fungus_config_ptr )
    {
      if ( !common::tools::MiscUtils::isContains<unsigned int>(
              &fungus_config_ptr->name_id_list,
              (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "fungusRename",
          1306);
        v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v22,
                (const char (*)[17])"invalid name_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" fungus_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
      }
      else
      {
        *(std::unordered_map<unsigned int,FungusData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,FungusData>::find(
                                                                                &this->fungus_id_data_map_,
                                                                                (const std::unordered_map<unsigned int,FungusData>::key_type *)(v3 + 32));
        __y._M_cur = std::unordered_map<unsigned int,FungusData>::end(&this->fungus_id_data_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,FungusData>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false> *)(v3 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/fungus_fighter_activity.cpp",
            "fungusRename",
            1312);
          v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v22,
                  (const char (*)[35])"fungus has not capture, fungus_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v22);
          result = -1;
        }
        else
        {
          v15 = *(_DWORD *)(v3 + 48);
          v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false> *const)(v3 + 64));
          p_name_id = &v16->second.name_id;
          if ( *(_BYTE *)(((unsigned __int64)p_name_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_name_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_name_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_name_id);
          }
          v16->second.name_id = v15;
          proto::FungusRenameRsp::set_name_id(rsp_0, *(_DWORD *)(v3 + 48));
          BaseActivity::notifyClientData(this, 0);
          result = 0;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "fungusRename",
        1301);
      v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v22,
              (const char (*)[19])"invalid fungus_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = -1;
    }
  }
  if ( v23 == (char *)v3 )
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

// Line 1323: range 0000000015075A9C-0000000015075B83
__int64 __fastcall FungusFighterActivity::unlockCamp(FungusFighterActivity *const this, uint32_t camp_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 camp_id:1322";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::unlockCamp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = camp_id;
  std::unordered_set<unsigned int>::emplace<unsigned int &>(
    &this->unlock_camp_id_set_,
    (unsigned int *)(v2 + 32),
    (unsigned int *)(v2 + 32));
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
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

// Line 1331: range 0000000015075B84-0000000015075C6B
__int64 __fastcall FungusFighterActivity::unlockCultivateFungus(
        FungusFighterActivity *const this,
        uint32_t cultivate_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 cultivate_id:1330";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::unlockCultivateFungus;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cultivate_id;
  std::unordered_set<unsigned int>::emplace<unsigned int &>(
    &this->unlock_cultivate_id_set_,
    (unsigned int *)(v2 + 32),
    (unsigned int *)(v2 + 32));
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
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

// Line 1340: range 0000000015075C6C-0000000015075EAF
__int64 __fastcall FungusFighterActivity::isFungusCaptured(
        FungusFighterActivity *const this,
        uint32_t monster_id,
        unsigned __int64 is_captured)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  bool v9; // cl
  const data::FungusExcelConfig *fungus_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 monster_id:1339";
  *(_QWORD *)(v3 + 16) = FungusFighterActivity::isFungusCaptured;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = monster_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  fungus_config_ptr = ActivityFungusFighterExcelConfigMgr::findFungusExcelConfigByCaptureMonsterId(
                        &v6->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr,
                        *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( fungus_config_ptr )
  {
    v9 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,FungusData>,unsigned int>(
           &this->fungus_id_data_map_,
           &fungus_config_ptr->id);
    if ( *(_BYTE *)((is_captured >> 3) + 0x7FFF8000) != 0
      && (char)(is_captured & 7) >= *(_BYTE *)((is_captured >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_captured);
    }
    *(_BYTE *)is_captured = v9;
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "isFungusCaptured",
      1344);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v13,
           (const char (*)[20])"invalid monster_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0xFFFFFFFFLL;
  }
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

// Line 1354: range 0000000015075EB0-0000000015076619
__int64 __fastcall FungusFighterActivity::captureFungusByGm(FungusFighterActivity *const this, uint32_t fungus_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  FungusData *v8; // rax
  unsigned int *v9; // rcx
  FungusData *v10; // r8
  PlayerEventComp *EventComp; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rdx
  std::unordered_map<unsigned int,FungusData>::mapped_type *v13; // rdx
  char v14; // al
  uint32_t init_name_id; // r14d
  std::unordered_map<unsigned int,FungusData>::mapped_type *v16; // rdx
  uint32_t *p_name_id; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  const ActivityFungusFighterExcelConfigMgr *activity_fungus_fighter_config_mgr; // [rsp+28h] [rbp-138h]
  const data::FungusExcelConfig *fungus_config_ptr; // [rsp+30h] [rbp-130h]
  const std::set<unsigned int> *camp_fungus_id_set; // [rsp+38h] [rbp-128h]
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-120h]
  const data::FungusExcelConfig *fungus_config_ptr_0; // [rsp+48h] [rbp-118h]
  std::shared_ptr<FungusFighterCaptureFungusEvent> __r; // [rsp+50h] [rbp-110h] BYREF
  std::shared_ptr<Config> v26; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 camp_id:1374 64 4 19 camp_fungus_id:1382 80 4 14 fungus_id:1353 96 20 16 fungus_data:1367";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::captureFungusByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -217841664;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 80) = fungus_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  activity_fungus_fighter_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v26);
  fungus_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusExcelConfig(
                        activity_fungus_fighter_config_mgr,
                        *(_DWORD *)(v2 + 80));
  if ( fungus_config_ptr )
  {
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,FungusData>,unsigned int>(
           &this->fungus_id_data_map_,
           (const unsigned int *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "captureFungusByGm",
        1364);
      v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v27,
             (const char (*)[35])"fungus already capture, fungus_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0LL;
    }
    else
    {
      *(_DWORD *)(v2 + 96) = 0;
      *(_DWORD *)(v2 + 100) = 0;
      *(_BYTE *)(v2 + 104) = 0;
      *(_DWORD *)(v2 + 108) = 0;
      *(_DWORD *)(v2 + 112) = 0;
      *(_DWORD *)(v2 + 96) = *(_DWORD *)(v2 + 80);
      if ( *(_BYTE *)(((unsigned __int64)&this->capture_order_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->capture_order_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 108) = ++this->capture_order_;
      v8 = std::move<FungusData &>((FungusData *)(v2 + 96));
      std::unordered_map<unsigned int,FungusData>::emplace<unsigned int &,FungusData>(
        &this->fungus_id_data_map_,
        (unsigned int *)(v2 + 80),
        v8,
        v9,
        v10);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      common::tools::perf::make_shared<FungusFighterCaptureFungusEvent,unsigned int &>(
        (unsigned int *)&__r,
        (unsigned int *)(v2 + 80));
      std::shared_ptr<BaseEvent>::shared_ptr<FungusFighterCaptureFungusEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v26,
        &__r);
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v26);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v26);
      std::shared_ptr<FungusFighterCaptureFungusEvent>::~shared_ptr(&__r);
      if ( *(_BYTE *)(((unsigned __int64)&fungus_config_ptr->camp_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)fungus_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fungus_config_ptr->camp_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = fungus_config_ptr->camp_id;
      if ( FungusFighterActivity::checkCampFinished(this, *(_DWORD *)(v2 + 48)) )
      {
        std::unordered_set<unsigned int>::emplace<unsigned int &>(
          &this->finish_camp_id_set_,
          (unsigned int *)(v2 + 48),
          (unsigned int *)&this->finish_camp_id_set_);
        BaseActivity::updateAllConds(this);
        camp_fungus_id_set = ActivityFungusFighterExcelConfigMgr::findFungusIdSetByCampId(
                               activity_fungus_fighter_config_mgr,
                               *(_DWORD *)(v2 + 48));
        __for_range = camp_fungus_id_set;
        __for_begin._M_node = std::set<unsigned int>::begin(camp_fungus_id_set)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(camp_fungus_id_set)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 64) = *v12;
          fungus_config_ptr_0 = data::ActivityFungusFighterExcelConfigMgrBase::findFungusExcelConfig(
                                  activity_fungus_fighter_config_mgr,
                                  *(_DWORD *)(v2 + 64));
          if ( !fungus_config_ptr_0 )
            goto LABEL_27;
          if ( *(_BYTE *)(((unsigned __int64)&fungus_config_ptr_0->init_name_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&fungus_config_ptr_0->init_name_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( !fungus_config_ptr_0->init_name_id )
            goto LABEL_27;
          v13 = std::unordered_map<unsigned int,FungusData>::operator[](
                  &this->fungus_id_data_map_,
                  (const std::unordered_map<unsigned int,FungusData>::key_type *)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v13->name_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->name_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( !v13->name_id )
            v14 = 1;
          else
LABEL_27:
            v14 = 0;
          if ( v14 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&fungus_config_ptr_0->init_name_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&fungus_config_ptr_0->init_name_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            init_name_id = fungus_config_ptr_0->init_name_id;
            v16 = std::unordered_map<unsigned int,FungusData>::operator[](
                    &this->fungus_id_data_map_,
                    (const std::unordered_map<unsigned int,FungusData>::key_type *)(v2 + 64));
            p_name_id = &v16->name_id;
            if ( *(_BYTE *)(((unsigned __int64)p_name_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_name_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_name_id >> 3)
                                                                          + 0x7FFF8000) )
            {
              __asan_report_store4(p_name_id);
            }
            v16->name_id = init_name_id;
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
      }
      BaseActivity::notifyClientData(this, 0);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "captureFungusByGm",
      1359);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v27, (const char (*)[19])"invalid fungus_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  if ( v28 == (char *)v2 )
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

// Line 1398: range 000000001507661A-0000000015076CE5
__int64 __fastcall FungusFighterActivity::cultivateByGm(
        FungusFighterActivity *const this,
        uint32_t cultivate_id,
        uint32_t cultivate_step)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false>::pointer v15; // rax
  bool *p_is_cultivate; // rax
  FungusFighterActivity *v17; // rdx
  uint32_t v18; // ecx
  PlayerEventComp *EventComp; // r14
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false> __y; // [rsp+18h] [rbp-108h] BYREF
  const data::FungusCultivateExcelConfig *cultivate_config_ptr; // [rsp+20h] [rbp-100h]
  FungusData *fungus_data; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<FungusFighterCultivateFungusEvent> __r; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v25; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 14 fungus_id:1410 64 4 17 cultivate_id:1397 80 4 19 cultivate_step:1397 96 8 9 iter:1411";
  *(_QWORD *)(v3 + 16) = FungusFighterActivity::cultivateByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = cultivate_id;
  *(_DWORD *)(v3 + 80) = cultivate_step;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  cultivate_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusCultivateExcelConfig(
                           &v6->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr,
                           *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( cultivate_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->min_step >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cultivate_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->min_step >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( cultivate_config_ptr->min_step <= *(_DWORD *)(v3 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->fungus_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cultivate_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->fungus_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = cultivate_config_ptr->fungus_id;
      *(std::unordered_map<unsigned int,FungusData>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,FungusData>::find(
                                                                              &this->fungus_id_data_map_,
                                                                              (const std::unordered_map<unsigned int,FungusData>::key_type *)(v3 + 48));
      __y._M_cur = std::unordered_map<unsigned int,FungusData>::end(&this->fungus_id_data_map_)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,FungusData>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusData>,false> *)(v3 + 96),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fungus_fighter_activity.cpp",
          "cultivateByGm",
          1414);
        v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v26,
                (const char (*)[35])"fungus has not capture, fungus_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FungusData>,false,false> *const)(v3 + 96));
        fungus_data = &v15->second;
        p_is_cultivate = &v15->second.is_cultivate;
        if ( *(_BYTE *)(((unsigned __int64)p_is_cultivate >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_cultivate & 7) >= *(_BYTE *)(((unsigned __int64)p_is_cultivate >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_cultivate);
        }
        if ( !fungus_data->is_cultivate )
        {
          fungus_data->is_cultivate = 1;
          v17 = this;
          if ( *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->task_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cultivate_config_ptr->task_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          BaseActivity::updateQuestContent(v17, cultivate_config_ptr->task_id);
        }
        if ( *(_BYTE *)(((unsigned __int64)&fungus_data->min_cultivate_step >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)fungus_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fungus_data->min_cultivate_step >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !fungus_data->min_cultivate_step || fungus_data->min_cultivate_step > *(_DWORD *)(v3 + 80) )
        {
          v18 = *(_DWORD *)(v3 + 80);
          if ( *(_BYTE *)(((unsigned __int64)&fungus_data->min_cultivate_step >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)fungus_data + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fungus_data->min_cultivate_step >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store4(&fungus_data->min_cultivate_step);
          }
          fungus_data->min_cultivate_step = v18;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        common::tools::perf::make_shared<FungusFighterCultivateFungusEvent,unsigned int &,unsigned int &>(
          (unsigned int *)&__r,
          (unsigned int *)(v3 + 64),
          (unsigned int *)(v3 + 80),
          (unsigned int *)(v3 + 64));
        std::shared_ptr<BaseEvent>::shared_ptr<FungusFighterCultivateFungusEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v25,
          &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v25);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v25);
        std::shared_ptr<FungusFighterCultivateFungusEvent>::~shared_ptr(&__r);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "cultivateByGm",
        1407);
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v26,
             (const char (*)[24])"invalid cultivate_step:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" min_step:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &cultivate_config_ptr->min_step);
      v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" cultivate_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fungus_fighter_activity.cpp",
      "cultivateByGm",
      1402);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v26,
           (const char (*)[22])"invalid cultivate_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 0xFFFFFFFFLL;
  }
  if ( v27 == (char *)v3 )
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

// Line 1434: range 0000000015076CE6-0000000015076D0F
int32_t __cdecl FungusFighterActivity::openFungusPlotDungeonStageByGm(
        FungusFighterActivity *const this,
        const std::vector<unsigned int> *stage_id_vec)
{
  return FungusFighterActivity::openFungusPlotDungeonStage(this, stage_id_vec, 1);
};

// Line 1439: range 0000000015076D10-0000000015076F6D
int32_t __cdecl FungusFighterActivity::closeFungusPlotDungeonStageByGm(
        FungusFighterActivity *const this,
        const std::vector<unsigned int> *stage_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::pointer v6; // rdx
  bool *p_second; // rax
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self __y; // [rsp+20h] [rbp-90h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  char v13[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 stage_id:1440 64 8 9 iter:1442";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::closeFungusPlotDungeonStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  __for_range = stage_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(stage_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(stage_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    *(std::map<unsigned int,bool>::iterator *)(v2 + 64) = std::map<unsigned int,bool>::find(
                                                            &this->fungus_plot_stage_map_,
                                                            (const std::map<unsigned int,bool>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,bool>::end(&this->fungus_plot_stage_map_)._M_node;
    if ( std::operator!=((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Self *)(v2 + 64), &__y) )
    {
      v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,bool> > *const)(v2 + 64));
      p_second = &v6->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(p_second);
      }
      v6->second = 0;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  result = 0;
  if ( v13 == (char *)v2 )
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

// Line 1454: range 0000000015076F6E-0000000015077059
void __cdecl FungusFighterActivity::setIsCloseContentByGm(FungusFighterActivity *const this, bool is_close)
{
  FungusFighterActivity *v2; // rdx
  unsigned __int64 v3; // rax
  char v4; // al

  if ( !is_close )
    goto LABEL_8;
  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(FungusFighterActivity *))v3)(v2) != 1 )
    v4 = 1;
  else
LABEL_8:
    v4 = 0;
  if ( v4 )
    BaseActivity::commonCloseContent(this);
  if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_common_content_closed_);
  this->is_common_content_closed_ = is_close;
  BaseActivity::notifyClientData(this, 0);
};

// Line 1465: range 000000001507705A-0000000015077083
int32_t __cdecl FungusFighterActivity::openFungusTrainingDungeonStageByGm(
        FungusFighterActivity *const this,
        const std::vector<unsigned int> *stage_id_vec)
{
  return FungusFighterActivity::openFungusTrainingDungeonStage(this, stage_id_vec, 1);
};

// Line 1470: range 0000000015077084-000000001507755E
int32_t __cdecl FungusFighterActivity::closeFungusTrainingDungeonStageByGm(
        FungusFighterActivity *const this,
        const std::vector<unsigned int> *stage_id_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::pointer v8; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-FCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-E0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self __y; // [rsp+38h] [rbp-D8h] BYREF
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-C8h]
  const std::vector<unsigned int> *dungeon_id_vec_ptr; // [rsp+50h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-B8h]
  std::shared_ptr<Config> v24; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+90h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 stage_id:1473 48 4 24 training_dungeon_id:1482 64 8 9 iter:1484";
  *(_QWORD *)(v2 + 16) = FungusFighterActivity::closeFungusTrainingDungeonStageByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  ret = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  __for_range = stage_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(stage_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(stage_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    dungeon_id_vec_ptr = ActivityFungusFighterExcelConfigMgr::findFungusTrainingDungeonIdVecByStageId(
                           config_mgr,
                           *(_DWORD *)(v2 + 32));
    if ( dungeon_id_vec_ptr )
    {
      __for_range_0 = dungeon_id_vec_ptr;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(dungeon_id_vec_ptr)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *v7;
        *(std::map<unsigned int,FungusTrainingDungeonData>::iterator *)(v2 + 64) = std::map<unsigned int,FungusTrainingDungeonData>::find(
                                                                                     &this->fungus_training_dungeon_map_,
                                                                                     (const std::map<unsigned int,FungusTrainingDungeonData>::key_type *)(v2 + 48));
        __y._M_node = std::map<unsigned int,FungusTrainingDungeonData>::end(&this->fungus_training_dungeon_map_)._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> >::_Self *)(v2 + 64),
               &__y) )
        {
          v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingDungeonData> > *const)(v2 + 64));
          p_is_open = &v8->second.is_open;
          if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(p_is_open);
          }
          v8->second.is_open = 0;
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/fungus_fighter_activity.cpp",
            "closeFungusTrainingDungeonStageByGm",
            1488);
          v10 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                  &v25,
                  (const char (*)[63])"[FungusFighter] closed training dungeon stage succ, stage_id: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v2 + 32));
          v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v11,
                  (const char (*)[24])", training_dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/fungus_fighter_activity.cpp",
        "closeFungusTrainingDungeonStageByGm",
        1478);
      v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v25,
             (const char (*)[56])"[FungusFighter] cannot find stage id config, stage_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v25);
      ret = -1;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  result = ret;
  if ( v26 == (char *)v2 )
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
