// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp

// Line 38: range 00000000161DFC4C-00000000161DFD4B
void __cdecl FungusFighterMonsterData::fromBin(
        FungusFighterMonsterData *const this,
        const proto::FungusFighterMonsterBin *bin)
{
  __m128i v2; // xmm0
  uint32_t v3; // ecx
  float v4; // ecx
  bool is_alive; // cl

  v3 = proto::FungusFighterMonsterBin::fungus_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->fungus_id = v3;
  *(float *)v2.m128i_i32 = proto::FungusFighterMonsterBin::cur_hp_percentage(bin);
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_hp_percentage);
  }
  this->cur_hp_percentage = v4;
  is_alive = proto::FungusFighterMonsterBin::is_alive(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_alive);
  }
  this->is_alive = is_alive;
};

// Line 45: range 00000000161DFD4C-00000000161DFE4C
void __cdecl FungusFighterMonsterData::toBin(
        const FungusFighterMonsterData *const this,
        proto::FungusFighterMonsterBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusFighterMonsterBin::set_fungus_id(bin, this->fungus_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusFighterMonsterBin::set_cur_hp_percentage(bin, this->cur_hp_percentage);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_alive);
  }
  proto::FungusFighterMonsterBin::set_is_alive(bin, this->is_alive);
};

// Line 52: range 00000000161DFE4E-00000000161DFF4E
void __cdecl FungusFighterMonsterData::toClient(
        const FungusFighterMonsterData *const this,
        proto::FungusFighterMonsterDetail *fungus_detail)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusFighterMonsterDetail::set_fungus_id(fungus_detail, this->fungus_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_alive);
  }
  proto::FungusFighterMonsterDetail::set_is_alive(fungus_detail, this->is_alive);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusFighterMonsterDetail::set_cur_hp_percentage(fungus_detail, this->cur_hp_percentage);
};

// Line 60: range 00000000161DFF50-00000000161E01EF
__int64 __fastcall FungusFighterMonsterData::init(FungusFighterMonsterData *const this, uint32_t monster_fungus_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  uint32_t v9; // ecx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 20 monster_fungus_id:59";
  *(_QWORD *)(v2 + 16) = FungusFighterMonsterData::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = monster_fungus_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->fungus_id )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "init",
      63);
    v5 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v10,
           (const char (*)[61])"[FungusFighter] monster data already initialized, fungus_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->fungus_id);
    v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])", monster_fungus_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(this);
    }
    this->fungus_id = v9;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->cur_hp_percentage);
    }
    this->cur_hp_percentage = 100.0;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_alive);
    }
    this->is_alive = 1;
    result = 0LL;
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
  return result;
};

// Line 74: range 00000000161E01F0-00000000161E0286
void __cdecl FungusFighterMonsterData::setDead(FungusFighterMonsterData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_hp_percentage >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_hp_percentage);
  }
  this->cur_hp_percentage = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_alive >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_alive);
  }
  this->is_alive = 0;
};

// Line 80: range 00000000161E0288-00000000161E06EC
void __cdecl FungusTrainingShapshotData::fromBin(
        FungusTrainingShapshotData *const this,
        const proto::FungusTrainingShapshotDataBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // edx
  uint32_t v6; // ecx
  uint32_t v7; // edx
  FungusFighterMonsterData *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  const google::protobuf::RepeatedField<unsigned int> *v11; // rax
  const google::protobuf::RepeatedField<unsigned int> *v12; // rax
  uint32_t v13; // edx
  uint32_t v14; // ecx
  const std::string *v15; // rax
  const google::protobuf::RepeatedField<unsigned int> *v16; // rax
  google::protobuf::RepeatedPtrField<proto::FungusFighterMonsterBin>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  google::protobuf::RepeatedPtrField<proto::FungusFighterMonsterBin>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FungusFighterMonsterBin> *__for_range; // [rsp+20h] [rbp-90h]
  const proto::FungusFighterMonsterBin *monster_bin; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-80h] BYREF
  char v22[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 15 monster_data:86";
  *(_QWORD *)(v2 + 16) = FungusTrainingShapshotData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  v5 = proto::FungusTrainingShapshotDataBin::dungeon_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_id = v5;
  v6 = proto::FungusTrainingShapshotDataBin::skill_count(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_count);
  }
  this->skill_count = v6;
  v7 = proto::FungusTrainingShapshotDataBin::cur_round(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round);
  }
  this->cur_round = v7;
  __for_range = proto::FungusTrainingShapshotDataBin::monster_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FungusFighterMonsterBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FungusFighterMonsterBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FungusFighterMonsterBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    monster_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FungusFighterMonsterBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 40) = 0;
    FungusFighterMonsterData::fromBin((FungusFighterMonsterData *const)(v2 + 32), monster_bin);
    v9 = std::unordered_map<unsigned int,FungusFighterMonsterData>::emplace<unsigned int &,FungusFighterMonsterData&>(
           &this->monster_data_map,
           (unsigned int *)(v2 + 32),
           (FungusFighterMonsterData *)(v2 + 32),
           (unsigned int *)&this->monster_data_map,
           v8);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "fromBin",
        90);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v21,
              (const char (*)[46])"[FungusFighter] duplicate monster fungus_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::FungusFighterMonsterBin const>::operator++(&__for_begin);
  }
  v11 = proto::FungusTrainingShapshotDataBin::choosen_monster_list(bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v11, &this->choosen_monster_vec);
  v12 = proto::FungusTrainingShapshotDataBin::backup_monster_list(bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v12, &this->backup_monster_vec);
  v13 = proto::FungusTrainingShapshotDataBin::total_used_time(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_used_time);
  }
  this->total_used_time = v13;
  v14 = proto::FungusTrainingShapshotDataBin::rand_index(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rand_index);
  }
  this->rand_index = v14;
  v15 = proto::FungusTrainingShapshotDataBin::level_transaction[abi:cxx11](bin);
  std::string::operator=(&this->level_transaction, v15);
  v16 = proto::FungusTrainingShapshotDataBin::monster_pool_list(bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v16, &this->monster_pool_vec);
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 103: range 00000000161E06EE-00000000161E0997
void __cdecl FungusTrainingShapshotData::toBin(
        const FungusTrainingShapshotData *const this,
        proto::FungusTrainingShapshotDataBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::unordered_map<unsigned int,FungusFighterMonsterData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,FungusFighterMonsterData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::unordered_map<unsigned int,FungusFighterMonsterData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,FungusFighterMonsterData> *v8; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *monster_data; // [rsp+40h] [rbp-10h]
  proto::FungusFighterMonsterBin *monster_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingShapshotDataBin::set_dungeon_id(bin, this->dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingShapshotDataBin::set_skill_count(bin, this->skill_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingShapshotDataBin::set_cur_round(bin, this->cur_round);
  __for_range = &this->monster_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::begin(&this->monster_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::end(&this->monster_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,FungusFighterMonsterData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,FungusFighterMonsterData>(v8);
    monster_data = (std::tuple_element<1,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *)std::get<1ul,unsigned int const,FungusFighterMonsterData>(v8);
    monster_bin = proto::FungusTrainingShapshotDataBin::add_monster_bin_list(bin);
    FungusFighterMonsterData::toBin(monster_data, monster_bin);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator++(&__for_begin);
  }
  v2 = proto::FungusTrainingShapshotDataBin::mutable_choosen_monster_list(bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->choosen_monster_vec, v2);
  v3 = proto::FungusTrainingShapshotDataBin::mutable_backup_monster_list(bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->backup_monster_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingShapshotDataBin::set_total_used_time(bin, this->total_used_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingShapshotDataBin::set_rand_index(bin, this->rand_index);
  proto::FungusTrainingShapshotDataBin::set_level_transaction(bin, &this->level_transaction);
  v4 = proto::FungusTrainingShapshotDataBin::mutable_monster_pool_list(bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->monster_pool_vec, v4);
};

// Line 121: range 00000000161E0998-00000000161E0E5B
void __cdecl FungusTrainingShapshotData::toClient(
        const FungusTrainingShapshotData *const this,
        proto::FungusTrainingProgressDetail *progress_detail)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rdx
  common::milog::MiLogStream *v8; // rax
  std::unordered_map<unsigned int,FungusFighterMonsterData>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,FungusFighterMonsterData>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const std::unordered_map<unsigned int,FungusFighterMonsterData> *__for_range; // [rsp+28h] [rbp-D8h]
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-C8h]
  const proto::FungusTrainingPoolPreviewDetail *preview_detail_ptr; // [rsp+40h] [rbp-C0h]
  proto::FungusTrainingPoolPreviewDetail *preview_info; // [rsp+48h] [rbp-B8h]
  const std::pair<unsigned int const,FungusFighterMonsterData> *v16; // [rsp+50h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *_; // [rsp+58h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *monster_data; // [rsp+60h] [rbp-A0h]
  proto::FungusFighterMonsterDetail *monster_detail; // [rsp+68h] [rbp-98h]
  std::shared_ptr<Config> v20; // [rsp+70h] [rbp-90h] BYREF
  common::milog::MiLogStream v21; // [rsp+80h] [rbp-80h] BYREF
  char v22[96]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 pool_id:134";
  *(_QWORD *)(v2 + 16) = FungusTrainingShapshotData::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingProgressDetail::set_dungeon_id(progress_detail, this->dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingProgressDetail::set_cur_round(progress_detail, this->cur_round);
  __for_range = &this->monster_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::begin(&this->monster_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::end(&this->monster_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,FungusFighterMonsterData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v16 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,FungusFighterMonsterData>(v16);
    monster_data = (std::tuple_element<1,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *)std::get<1ul,unsigned int const,FungusFighterMonsterData>(v16);
    monster_detail = proto::FungusTrainingProgressDetail::add_monster_detail_list(progress_detail);
    FungusFighterMonsterData::toClient(monster_data, monster_detail);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator++(&__for_begin);
  }
  v5 = proto::FungusTrainingProgressDetail::mutable_choosen_monster_list(progress_detail);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->choosen_monster_vec, v5);
  v6 = proto::FungusTrainingProgressDetail::mutable_backup_monster_list(progress_detail);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->backup_monster_vec, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FungusTrainingProgressDetail::set_total_used_time(progress_detail, this->total_used_time);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_range_0 = &this->monster_pool_vec;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false>::__node_type *)std::vector<unsigned int>::begin(&this->monster_pool_vec)._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v7;
    preview_detail_ptr = ActivityFungusFighterExcelConfigMgr::findMonsterPoolPreviewByPoolId(
                           config_mgr,
                           *(_DWORD *)(v2 + 32));
    if ( preview_detail_ptr )
    {
      preview_info = proto::FungusTrainingProgressDetail::add_monster_pool_preview_list(progress_detail);
      proto::FungusTrainingPoolPreviewDetail::CopyFrom(preview_info, preview_detail_ptr);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "toClient",
        139);
      v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             &v21,
             (const char (*)[58])"[FungusFighter] monster pool cannot find config, pool_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
  }
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 148: range 00000000161E0E5C-00000000161E1470
__int64 __fastcall FungusTrainingShapshotData::init(
        FungusTrainingShapshotData *const this,
        uint32_t target_dungeon_id,
        const FungusFighterDungeonContext *dungeon_context,
        uint32_t activity_id,
        std::string *p_transaction)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::remove_reference<std::string&>::type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  uint32_t initial_skill_count; // ecx
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rdx
  common::milog::MiLogStream *v13; // rax
  FungusFighterMonsterData *v14; // rax
  unsigned int *v15; // rcx
  FungusFighterMonsterData *v16; // r8
  uint32_t rand_index; // ecx
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-D8h]
  const data::FungusBaseExcelConfig *base_config_ptr; // [rsp+40h] [rbp-D0h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+80h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 13 fungus_id:161 48 4 15 activity_id:147 64 12 16 monster_data:163";
  *(_QWORD *)(v5 + 16) = FungusTrainingShapshotData::init;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202177536;
  *(_DWORD *)(v5 + 48) = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_id = target_dungeon_id;
  v8 = std::move<std::string &>(p_transaction);
  std::string::operator=(&this->level_transaction, v8);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v26);
  base_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusBaseExcelConfig(
                      config_mgr,
                      *(_DWORD *)(v5 + 48));
  if ( base_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->initial_skill_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&base_config_ptr->initial_skill_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    initial_skill_count = base_config_ptr->initial_skill_count;
    if ( *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->skill_count);
    }
    this->skill_count = initial_skill_count;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_round);
    }
    this->cur_round = 1;
    std::unordered_map<unsigned int,FungusFighterMonsterData>::clear(&this->monster_data_map);
    __for_range = &dungeon_context->candidate_fungus_id_set;
    __for_begin._M_node = std::set<unsigned int>::begin(&dungeon_context->candidate_fungus_id_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&dungeon_context->candidate_fungus_id_set)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 32) = *v12;
      *(_DWORD *)(v5 + 64) = 0;
      *(_DWORD *)(v5 + 68) = 0;
      *(_BYTE *)(v5 + 72) = 0;
      if ( (unsigned int)FungusFighterMonsterData::init(
                           (FungusFighterMonsterData *const)(v5 + 64),
                           *(_DWORD *)(v5 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "init",
          166);
        v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v27,
                (const char (*)[49])"[FungusFighter] monster init failed, fungus_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      else
      {
        v14 = std::move<FungusFighterMonsterData &>((FungusFighterMonsterData *)(v5 + 64));
        std::unordered_map<unsigned int,FungusFighterMonsterData>::emplace<unsigned int &,FungusFighterMonsterData>(
          &this->monster_data_map,
          (unsigned int *)(v5 + 32),
          v14,
          v15,
          v16);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::clear(&this->choosen_monster_vec);
    std::vector<unsigned int>::clear(&this->backup_monster_vec);
    if ( *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->total_used_time);
    }
    this->total_used_time = 0;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->rand_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_context->rand_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    rand_index = dungeon_context->rand_index;
    if ( *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->rand_index);
    }
    this->rand_index = rand_index;
    std::vector<unsigned int>::operator=(&this->monster_pool_vec, &dungeon_context->monster_pool_vec);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "init",
      155);
    v9 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v27,
           (const char (*)[64])"[FungusFighter] findFungusBaseExcelConfig failed, activity_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  if ( v28 == (char *)v5 )
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
  return result;
};

// Line 180: range 00000000161E1472-00000000161E1601
void __cdecl FungusTrainingShapshotData::clear(FungusTrainingShapshotData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_count);
  }
  this->skill_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round);
  }
  this->cur_round = 0;
  std::unordered_map<unsigned int,FungusFighterMonsterData>::clear(&this->monster_data_map);
  std::vector<unsigned int>::clear(&this->choosen_monster_vec);
  std::vector<unsigned int>::clear(&this->backup_monster_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_used_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_used_time);
  }
  this->total_used_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rand_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rand_index);
  }
  this->rand_index = 0;
  std::vector<unsigned int>::clear(&this->monster_pool_vec);
};

// Line 193: range 00000000161E1602-00000000161E18C8
int32_t __cdecl FungusFighterRuntimeMgr::fromProgressBin(
        FungusFighterRuntimeMgr *const this,
        const proto::FungusTrainingProgressBin *progress_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  FungusTrainingShapshotData *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::FungusTrainingShapshotDataBin>::const_iterator __for_begin; // [rsp+10h] [rbp-190h] BYREF
  google::protobuf::RepeatedPtrField<proto::FungusTrainingShapshotDataBin>::const_iterator __for_end; // [rsp+18h] [rbp-188h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FungusTrainingShapshotDataBin> *__for_range; // [rsp+20h] [rbp-180h]
  const proto::FungusTrainingShapshotDataBin *snapshot_bin; // [rsp+28h] [rbp-178h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-170h] BYREF
  char v14[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 184 17 snapshot_data:196";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::fromProgressBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  v4[536862728] = -202116109;
  __for_range = proto::FungusTrainingProgressBin::fungus_snapshot_data_list(progress_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FungusTrainingShapshotDataBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FungusTrainingShapshotDataBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FungusTrainingShapshotDataBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    snapshot_bin = google::protobuf::internal::RepeatedPtrIterator<proto::FungusTrainingShapshotDataBin const>::operator*(&__for_begin);
    FungusTrainingShapshotData::FungusTrainingShapshotData((FungusTrainingShapshotData *const)(v2 + 32));
    FungusTrainingShapshotData::fromBin((FungusTrainingShapshotData *const)(v2 + 32), snapshot_bin);
    v6 = std::map<unsigned int,FungusTrainingShapshotData>::emplace<unsigned int &,FungusTrainingShapshotData&>(
           &this->dungeon_snapshot_map_,
           (unsigned int *)(v2 + 32),
           (FungusTrainingShapshotData *)(v2 + 32),
           (unsigned int *)&this->dungeon_snapshot_map_,
           v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "fromProgressBin",
        200);
      v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v13,
             (const char (*)[52])"[FungusFighter] duplicate dungeon bin, dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    FungusTrainingShapshotData::~FungusTrainingShapshotData((FungusTrainingShapshotData *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::FungusTrainingShapshotDataBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v14 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 208: range 00000000161E18CA-00000000161E1986
int32_t __cdecl FungusFighterRuntimeMgr::toProgressBin(
        const FungusFighterRuntimeMgr *const this,
        proto::FungusTrainingProgressBin *progress_bin)
{
  std::map<unsigned int,FungusTrainingShapshotData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,FungusTrainingShapshotData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,FungusTrainingShapshotData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,FungusTrainingShapshotData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,FungusTrainingShapshotData> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,FungusTrainingShapshotData> >::type *snapshot_data; // [rsp+40h] [rbp-10h]
  proto::FungusTrainingShapshotDataBin *snapshot_bin; // [rsp+48h] [rbp-8h]

  __for_range = &this->dungeon_snapshot_map_;
  __for_begin._M_node = std::map<unsigned int,FungusTrainingShapshotData>::begin(&this->dungeon_snapshot_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FungusTrainingShapshotData>::end(&this->dungeon_snapshot_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingShapshotData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,FungusTrainingShapshotData>(v6);
    snapshot_data = (std::tuple_element<1,const std::pair<unsigned int const,FungusTrainingShapshotData> >::type *)std::get<1ul,unsigned int const,FungusTrainingShapshotData>(v6);
    snapshot_bin = proto::FungusTrainingProgressBin::add_fungus_snapshot_data_list(progress_bin);
    FungusTrainingShapshotData::toBin(snapshot_data, snapshot_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingShapshotData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 218: range 00000000161E1988-00000000161E1A44
int32_t __cdecl FungusFighterRuntimeMgr::toClient(
        const FungusFighterRuntimeMgr *const this,
        proto::FungusFighterDetailInfo *detail_info)
{
  std::map<unsigned int,FungusTrainingShapshotData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,FungusTrainingShapshotData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,FungusTrainingShapshotData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,FungusTrainingShapshotData> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,FungusTrainingShapshotData> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,FungusTrainingShapshotData> >::type *snapshot_data; // [rsp+40h] [rbp-10h]
  proto::FungusTrainingProgressDetail *progress_detail; // [rsp+48h] [rbp-8h]

  __for_range = &this->dungeon_snapshot_map_;
  __for_begin._M_node = std::map<unsigned int,FungusTrainingShapshotData>::begin(&this->dungeon_snapshot_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FungusTrainingShapshotData>::end(&this->dungeon_snapshot_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingShapshotData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,FungusTrainingShapshotData>(v6);
    snapshot_data = (std::tuple_element<1,const std::pair<unsigned int const,FungusTrainingShapshotData> >::type *)std::get<1ul,unsigned int const,FungusTrainingShapshotData>(v6);
    progress_detail = proto::FungusFighterDetailInfo::add_training_dungeon_progress_detail_list(detail_info);
    FungusTrainingShapshotData::toClient(snapshot_data, progress_detail);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,FungusTrainingShapshotData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 228: range 00000000161E1A46-00000000161E21A4
__int64 __fastcall FungusFighterRuntimeMgr::init(
        FungusFighterRuntimeMgr *const this,
        uint32_t dungeon_id,
        const FungusFighterDungeonContext *dungeon_context)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData> >::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t ActivityId; // eax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData> >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 dungeon_id:227 64 8 8 iter:234";
  *(_QWORD *)(v3 + 16) = FungusFighterRuntimeMgr::init;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = dungeon_id;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( this->is_running_ )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "init",
      231);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v20,
           (const char (*)[53])"[FungusFighter] runtime mgr is running, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
    goto LABEL_30;
  }
  *(std::map<unsigned int,FungusTrainingShapshotData>::iterator *)(v3 + 64) = std::map<unsigned int,FungusTrainingShapshotData>::find(
                                                                                &this->dungeon_snapshot_map_,
                                                                                (const std::map<unsigned int,FungusTrainingShapshotData>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,FungusTrainingShapshotData>::end(&this->dungeon_snapshot_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData> >::_Self *)(v3 + 64),
         &__y) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData> > *const)(v3 + 64));
    FungusTrainingShapshotData::operator=(&this->cur_runtime_data_, &v8->second);
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "init",
      239);
    v9 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v20,
           (const char (*)[64])"[FungusFighter] runtime mgr recover from snapshot, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    if ( std::set<unsigned int>::empty(&dungeon_context->candidate_fungus_id_set) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "init",
        246);
      common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
        &v20,
        (const char (*)[62])"[FungusFighter] valid fungus candidate_fungus_id_set is empty");
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v20, BasicComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ActivityId = BaseActivity::getActivityId(this->activity_);
    v12 = (unsigned int)FungusTrainingShapshotData::init(
                          &this->cur_runtime_data_,
                          *(_DWORD *)(v3 + 48),
                          dungeon_context,
                          ActivityId,
                          (std::string *)&v20) != 0;
    std::string::~string(&v20);
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "init",
        252);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        &v20,
        (const char (*)[46])"[FungusFighter] cur_runtime_data_ init failed");
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
      goto LABEL_30;
    }
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "init",
      255);
    v13 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
            &v20,
            (const char (*)[60])"[FungusFighter] runtime mgr init runtime data, dungeon_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v14,
            (const char (*)[28])", candidate_fungus_id_set: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int>(v15, &dungeon_context->candidate_fungus_id_set);
    v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])", rand_index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &dungeon_context->rand_index);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->has_selected_fungus_);
  }
  this->has_selected_fungus_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->has_used_backup_);
  }
  this->has_used_backup_ = 0;
  std::unordered_map<unsigned int,unsigned int>::clear(&this->alive_fungus_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_life_percentage_);
  }
  this->gadget_life_percentage_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_fungus_num_);
  }
  this->dead_fungus_num_ = 0;
  std::string::clear(&this->room_transaction_);
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_running_);
  this->is_running_ = 1;
  FungusFighterRuntimeMgr::notifyCurRuntimeData(this);
  result = 0LL;
LABEL_30:
  if ( v21 == (char *)v3 )
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

// Line 271: range 00000000161E21A6-00000000161E22B9
_BOOL8 __fastcall FungusFighterRuntimeMgr::isSnapshotExist(FungusFighterRuntimeMgr *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData> >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData> >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 dungeon_id:270";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::isSnapshotExist;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = dungeon_id;
  __y._M_node = std::map<unsigned int,FungusTrainingShapshotData>::end(&this->dungeon_snapshot_map_)._M_node;
  __x._M_node = std::map<unsigned int,FungusTrainingShapshotData>::find(
                  &this->dungeon_snapshot_map_,
                  (const std::map<unsigned int,FungusTrainingShapshotData>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
  if ( v8 == (char *)v2 )
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

// Line 280: range 00000000161E22BA-00000000161E2412
const FungusTrainingShapshotData *__fastcall FungusFighterRuntimeMgr::findDungeonSnapShotData(
        FungusFighterRuntimeMgr *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const FungusTrainingShapshotData *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:279 64 8 8 iter:281";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::findDungeonSnapShotData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  *(std::map<unsigned int,FungusTrainingShapshotData>::iterator *)(v2 + 64) = std::map<unsigned int,FungusTrainingShapshotData>::find(
                                                                                &this->dungeon_snapshot_map_,
                                                                                (const std::map<unsigned int,FungusTrainingShapshotData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,FungusTrainingShapshotData>::end(&this->dungeon_snapshot_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FungusTrainingShapshotData> > *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v7 == (char *)v2 )
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

// Line 290: range 00000000161E2414-00000000161E25AB
void __cdecl FungusFighterRuntimeMgr::clearRuntimeData(FungusFighterRuntimeMgr *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_running_);
  this->is_running_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->has_selected_fungus_);
  }
  this->has_selected_fungus_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->has_used_backup_);
  }
  this->has_used_backup_ = 0;
  FungusTrainingShapshotData::clear(&this->cur_runtime_data_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->alive_fungus_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_life_percentage_);
  }
  this->gadget_life_percentage_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_fungus_num_);
  }
  this->dead_fungus_num_ = 0;
  std::string::clear(&this->room_transaction_);
  FungusFighterRuntimeMgr::notifyCurRuntimeData(this);
};

// Line 303: range 00000000161E25AC-00000000161E2606
void __cdecl FungusFighterRuntimeMgr::clearBinData(FungusFighterRuntimeMgr *const this)
{
  std::map<unsigned int,FungusTrainingShapshotData>::clear(&this->dungeon_snapshot_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BaseActivity::notifyClientData(this->activity_, 0);
};

// Line 309: range 00000000161E2608-00000000161E262E
void __cdecl FungusFighterRuntimeMgr::clearAll(FungusFighterRuntimeMgr *const this)
{
  FungusFighterRuntimeMgr::clearRuntimeData(this);
  FungusFighterRuntimeMgr::clearBinData(this);
};

// Line 315: range 00000000161E2630-00000000161E27D9
void __fastcall FungusFighterRuntimeMgr::clearDungeonSnapshot(FungusFighterRuntimeMgr *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 dungeon_id:314";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::clearDungeonSnapshot;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = dungeon_id;
  if ( std::map<unsigned int,FungusTrainingShapshotData>::erase(
         &this->dungeon_snapshot_map_,
         (const std::map<unsigned int,FungusTrainingShapshotData>::key_type *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BaseActivity::notifyClientData(this->activity_, 0);
  }
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
    "clearDungeonSnapshot",
    320);
  v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v6,
         (const char (*)[46])"[FungusFighter] snapshot cleared, dungeon_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v6);
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

// Line 324: range 00000000161E27DA-00000000161E2908
void __cdecl FungusFighterRuntimeMgr::clearRoundData(FungusFighterRuntimeMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->has_selected_fungus_);
  }
  this->has_selected_fungus_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->has_used_backup_);
  }
  this->has_used_backup_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_life_percentage_);
  }
  this->gadget_life_percentage_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_fungus_num_);
  }
  this->dead_fungus_num_ = 0;
  std::string::clear(&this->room_transaction_);
};

// Line 334: range 00000000161E290A-00000000161E326D
void __cdecl FungusFighterRuntimeMgr::saveShapshot(FungusFighterRuntimeMgr *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(unsigned __int64, std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r8
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  float *v22; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::pointer v23; // rdx
  float *p_cur_hp_percentage; // rax
  FungusTrainingShapshotData *v25; // rax
  common::milog::MiLogStream *v26; // rax
  float v27; // [rsp+4h] [rbp-15Ch]
  float __a; // [rsp+10h] [rbp-150h] BYREF
  float __b; // [rsp+14h] [rbp-14Ch] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false> __y; // [rsp+28h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-130h]
  const std::pair<unsigned int const,unsigned int> *v34; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *entity_id; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *fungus_id; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-110h] BYREF
  char v38[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 10 max_hp:365 48 4 10 cur_hp:366 64 8 21 monster_data_iter:358 96 16 21 dungeon_scene_ptr"
                        ":339 128 16 14 entity_ptr:346 160 16 15 monster_ptr:352";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::saveShapshot;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  FungusFighterRuntimeMgr::getSkillCount(this, &this->cur_runtime_data_.skill_count);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 96));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 96)) )
  {
    __for_range = &this->alive_fungus_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->alive_fungus_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->alive_fungus_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v34 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      entity_id = std::get<0ul,unsigned int const,unsigned int>(v34);
      fungus_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v34);
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v6 = *(_QWORD *)v5->baseclass_0 + 120LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      v7 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v6;
      if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
      {
        *(double *)v1.m128i_i64 = __asan_report_load4();
      }
      v7(v2 + 128, v5, *entity_id);
      if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "saveShapshot",
          349);
        v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v37,
               (const char (*)[51])"[FungusFighter] entity_ptr is nullptr, entity_id: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, entity_id);
        v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", fungus_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, fungus_id);
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
      else
      {
        std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        toPtr<Monster,Entity>((Entity *)(v2 + 160));
        if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "saveShapshot",
            355);
          v11 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v37,
                  (const char (*)[55])"[FungusFighter] entity ptr is not monster, entity_id: ");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, entity_id);
          v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v12,
                  (const char (*)[14])", fungus_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, fungus_id);
          common::milog::MiLogStream::~MiLogStream(&v37);
        }
        else
        {
          *(std::unordered_map<unsigned int,FungusFighterMonsterData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,FungusFighterMonsterData>::find(
                                                                                                &this->cur_runtime_data_.monster_data_map,
                                                                                                fungus_id);
          __y._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::end(&this->cur_runtime_data_.monster_data_map)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,FungusFighterMonsterData>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false> *)(v2 + 64),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
              "saveShapshot",
              361);
            v14 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                    &v37,
                    (const char (*)[71])"[FungusFighter] cannot find fungus_id in monster_data_map, fungus_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, fungus_id);
            common::milog::MiLogStream::~MiLogStream(&v37);
          }
          else
          {
            v15 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            *(float *)v1.m128i_i32 = Creature::getMaxHp(v15);
            *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32(v1);
            v16 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            *(float *)v1.m128i_i32 = Creature::getCurHp(v16);
            *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(v1);
            v1 = (__m128i)0x34000000u;
            if ( *(float *)(v2 + 32) > 0.00000011920929
              && (v1 = (__m128i)0x34000000u, *(float *)(v2 + 48) > 0.00000011920929) )
            {
              __b = 100.0;
              v1 = (__m128i)0x42C80000u;
              *(float *)v1.m128i_i32 = SAFE_MULTIPLY<float,float>(100.0, *(float *)(v2 + 48) / *(float *)(v2 + 32));
              LODWORD(__a) = _mm_cvtsi128_si32(v1);
              v22 = (float *)std::min<float>(&__a, &__b);
              if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
              {
                *(double *)v1.m128i_i64 = __asan_report_load4();
              }
              v27 = *v22;
              v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false> *const)(v2 + 64));
              p_cur_hp_percentage = &v23->second.cur_hp_percentage;
              if ( *(_BYTE *)(((unsigned __int64)p_cur_hp_percentage >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_cur_hp_percentage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_cur_hp_percentage >> 3)
                                                                                      + 0x7FFF8000) )
              {
                __asan_report_store4(p_cur_hp_percentage);
              }
              v23->second.cur_hp_percentage = v27;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v37,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "saveShapshot",
                370);
              v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      &v37,
                      (const char (*)[42])"[FungusFighter] wrong hp status, max_hp: ");
              v18 = common::milog::MiLogStream::operator<<<float,(float *)0>(v17, (const float *)(v2 + 32));
              v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v18,
                      (const char (*)[11])", cur_hp: ");
              v20 = common::milog::MiLogStream::operator<<<float,(float *)0>(v19, (const float *)(v2 + 48));
              v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v20,
                      (const char (*)[14])", entity_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, entity_id);
              common::milog::MiLogStream::~MiLogStream(&v37);
            }
          }
        }
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 160));
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 128));
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    v25 = std::map<unsigned int,FungusTrainingShapshotData>::operator[](
            &this->dungeon_snapshot_map_,
            &this->cur_runtime_data_.dungeon_id);
    FungusTrainingShapshotData::operator=(v25, &this->cur_runtime_data_);
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "saveShapshot",
      378);
    v26 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v37,
            (const char (*)[48])"[FungusFighter] saveShapshot succ, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->cur_runtime_data_.dungeon_id);
    common::milog::MiLogStream::~MiLogStream(&v37);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BaseActivity::notifyClientData(this->activity_, 0);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 383: range 00000000161E326E-00000000161E3BC7
void __cdecl FungusFighterRuntimeMgr::onPostEnterSceneEvent(
        FungusFighterRuntimeMgr *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int v9; // r14d
  uint32_t ActivityId; // eax
  common::milog::MiLogStream *v11; // r14
  Creature *p_skill_count; // rdi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned int val; // [rsp+14h] [rbp-1BCh] BYREF
  const FungusFighterDungeonContext *dungeon_context; // [rsp+18h] [rbp-1B8h]
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-1B0h]
  const data::FungusBaseExcelConfig *base_config_ptr; // [rsp+28h] [rbp-1A8h]
  std::shared_ptr<Config> v27; // [rsp+30h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-190h] BYREF
  char v29[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 dungeon_id:395 48 16 21 dungeon_scene_ptr:384 80 16 12 team_ptr:406 112 144 23 dungeon"
                        "_context_opt:389";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 48));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 48)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    DungeonScene::getDungeonExtraData<FungusFighterDungeonContext>(
      (std::optional<FungusFighterDungeonContext> *)(v2 + 112),
      v5);
    if ( std::optional<FungusFighterDungeonContext>::has_value((const std::optional<FungusFighterDungeonContext> *const)(v2 + 112)) )
    {
      dungeon_context = std::optional<FungusFighterDungeonContext>::value((std::optional<FungusFighterDungeonContext> *const)(v2 + 112));
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      *(_DWORD *)(v2 + 32) = DungeonScene::getDungeonId(v6);
      if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_running_);
      if ( !this->is_running_ )
      {
        if ( (unsigned int)FungusFighterRuntimeMgr::init(this, *(_DWORD *)(v2 + 32), dungeon_context) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "onPostEnterSceneEvent",
            402);
          v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                 &v28,
                 (const char (*)[54])"[FungusFighter] runtime mgr init failed, dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v28);
          goto LABEL_39;
        }
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getAvatarComp(this->player_);
        PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v2 + 80));
        if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v2 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "onPostEnterSceneEvent",
            409);
          v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                 &v28,
                 (const char (*)[53])"[FungusFighter] getTeamEntity team_ptr is null. uid:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
          common::milog::MiLogStream::~MiLogStream(&v28);
          v9 = 0;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v27);
          config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
          std::shared_ptr<Config>::~shared_ptr(&v27);
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ActivityId = BaseActivity::getActivityId(this->activity_);
          base_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusBaseExcelConfig(
                              config_mgr,
                              ActivityId);
          if ( base_config_ptr )
          {
            p_skill_count = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.skill_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.skill_count >> 3)
                                                                  + 0x7FFF8000) )
            {
              p_skill_count = (Creature *)&this->cur_runtime_data_.skill_count;
              __asan_report_load4();
            }
            if ( (unsigned int)Creature::setServerGlobalValue(
                                 p_skill_count,
                                 &base_config_ptr->skill_name,
                                 (float)(int)this->cur_runtime_data_.skill_count,
                                 1) )
            {
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "onPostEnterSceneEvent",
                421);
              v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      &v28,
                      (const char (*)[48])"[FungusFighter] setServerGlobalValue fail, key:");
              v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v13,
                      &base_config_ptr->skill_name);
              v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])", value:");
              v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v15,
                      &this->cur_runtime_data_.skill_count);
              v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
              common::milog::MiLogStream::~MiLogStream(&v28);
              v9 = 0;
            }
            else
            {
              v9 = 1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
              "onPostEnterSceneEvent",
              416);
            v11 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                    &v28,
                    (const char (*)[64])"[FungusFighter] findFungusBaseExcelConfig failed, activity_id: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = BaseActivity::getActivityId(this->activity_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
            common::milog::MiLogStream::~MiLogStream(&v28);
            v9 = 0;
          }
        }
        std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v2 + 80));
        if ( v9 != 1 )
          goto LABEL_39;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->cur_runtime_data_.dungeon_id != *(_DWORD *)(v2 + 32) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "onPostEnterSceneEvent",
            431);
          v18 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
                  &v28,
                  (const char (*)[83])"[FungusFighter] runtime mgr not match post enter scene dungeon, enter_dungeon_id: ");
          v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          val = DungeonScene::getDungeonId(v19);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          v21 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v20,
                  (const char (*)[23])", runtime dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v21,
            &this->cur_runtime_data_.dungeon_id);
          common::milog::MiLogStream::~MiLogStream(&v28);
          goto LABEL_39;
        }
      }
      FungusFighterRuntimeMgr::notifyCurRuntimeData(this);
    }
LABEL_39:
    std::optional<FungusFighterDungeonContext>::~optional((std::optional<FungusFighterDungeonContext> *const)(v2 + 112));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 48));
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 442: range 00000000161E3BC8-00000000161E3C21
void __cdecl FungusFighterRuntimeMgr::onLeaveSceneEvent(FungusFighterRuntimeMgr *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( this->is_running_ )
    FungusFighterRuntimeMgr::clearRuntimeData(this);
};

// Line 450: range 00000000161E3C22-00000000161E4528
void __fastcall FungusFighterRuntimeMgr::onFungusTrainingDungeonMonsterDie(
        FungusFighterRuntimeMgr *const this,
        uint32_t entity_id)
{
  unsigned __int64 p_M_left; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::pointer v8; // rax
  const ActivityFungusFighterExcelConfigMgr *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  Scene *v11; // rax
  uint32_t GalleryComp; // eax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  Scene *v15; // rax
  SceneGalleryComp *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-148h] BYREF
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-140h]
  const data::FungusTrainingDungeonExcelConfig *training_config_ptr; // [rsp+28h] [rbp-138h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-130h] BYREF
  SceneGalleryComp v22; // [rsp+40h] [rbp-120h] BYREF

  p_M_left = (unsigned __int64)&v22.scene_gallery_map_._M_t._M_impl._M_header._M_left;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      p_M_left = v3;
  }
  *(_QWORD *)p_M_left = 1102416563LL;
  *(_QWORD *)(p_M_left + 8) = "6 48 4 13 fungus_id:459 64 4 14 gallery_id:489 80 4 13 entity_id:449 96 8 8 iter:456 128 8"
                              " 21 monster_data_iter:461 160 16 21 dungeon_scene_ptr:476";
  *(_QWORD *)(p_M_left + 16) = FungusFighterRuntimeMgr::onFungusTrainingDungeonMonsterDie;
  v4 = (_DWORD *)(p_M_left >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202178560;
  *(_DWORD *)(p_M_left + 80) = entity_id;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( !this->is_running_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v22.is_enable_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "onFungusTrainingDungeonMonsterDie",
      453);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)&v22.is_enable_,
      (const char (*)[43])"[FungusFighter] runtime mgr is not running");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22.is_enable_);
  }
  else
  {
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(p_M_left + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    &this->alive_fungus_map_,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(p_M_left + 80));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->alive_fungus_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(p_M_left + 96),
           &__y) )
    {
      v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(p_M_left + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v5 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(p_M_left + 48) = v5->second;
      *(std::unordered_map<unsigned int,FungusFighterMonsterData>::iterator *)(p_M_left + 128) = std::unordered_map<unsigned int,FungusFighterMonsterData>::find(
                                                                                                   &this->cur_runtime_data_.monster_data_map,
                                                                                                   (const std::unordered_map<unsigned int,FungusFighterMonsterData>::key_type *)(p_M_left + 48));
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,FungusFighterMonsterData>::end(&this->cur_runtime_data_.monster_data_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,FungusFighterMonsterData>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false> *)(p_M_left + 128),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false> *)&__y) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v22.is_enable_,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "onFungusTrainingDungeonMonsterDie",
          464);
        v6 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
               (common::milog::MiLogStream *const)&v22.is_enable_,
               (const char (*)[71])"[FungusFighter] cannot find fungus_id in monster_data_map, fungus_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v6,
          (const unsigned int *)(p_M_left + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22.is_enable_);
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v22.is_enable_,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "onFungusTrainingDungeonMonsterDie",
          467);
        v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               (common::milog::MiLogStream *const)&v22.is_enable_,
               (const char (*)[48])"[FungusFighter] fungus figher died, fungus_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v7,
          (const unsigned int *)(p_M_left + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22.is_enable_);
        v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false> *const)(p_M_left + 128));
        FungusFighterMonsterData::setDead(&v8->second);
        std::unordered_map<unsigned int,unsigned int>::erase(
          &this->alive_fungus_map_,
          (const std::unordered_map<unsigned int,unsigned int>::key_type *)(p_M_left + 80));
        FungusFighterRuntimeMgr::notifyCurRuntimeData(this);
        if ( std::unordered_map<unsigned int,unsigned int>::empty(&this->alive_fungus_map_) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v22.is_enable_,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "onFungusTrainingDungeonMonsterDie",
            474);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)&v22.is_enable_,
            (const char (*)[39])"[FungusFighter] fungus figher all died");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22.is_enable_);
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getDungeonComp(this->player_);
          PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(p_M_left + 160));
          if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(p_M_left + 160)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v22.is_enable_,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
              "onFungusTrainingDungeonMonsterDie",
              479);
            common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              (common::milog::MiLogStream *const)&v22.is_enable_,
              (const char (*)[45])"[FungusFighter] dungeon_scene_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22.is_enable_);
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v21);
            config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
            std::shared_ptr<Config>::~shared_ptr(&v21);
            v9 = config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            training_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(
                                    v9,
                                    this->cur_runtime_data_.dungeon_id);
            if ( training_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&training_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(p_M_left + 64) = training_config_ptr->gallery_id;
              v11 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_left + 160));
              GalleryComp = (unsigned int)Scene::getGalleryComp(v11);
              SceneGalleryComp::findGallery(&v22, GalleryComp);
              v13 = std::operator==<BaseGallery>(0LL, (const std::shared_ptr<BaseGallery> *)&v22);
              std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)&v22);
              if ( v13 )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v22.is_enable_,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                  "onFungusTrainingDungeonMonsterDie",
                  492);
                v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        (common::milog::MiLogStream *const)&v22.is_enable_,
                        (const char (*)[46])"[FungusFighter] findGallery fail, gallery_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(p_M_left + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22.is_enable_);
              }
              else
              {
                v15 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_left + 160));
                v16 = Scene::getGalleryComp(v15);
                if ( SceneGalleryComp::forceStopAndClearGallery(
                       v16,
                       *(_DWORD *)(p_M_left + 64),
                       0,
                       GALLERY_STOP_FUNGUS_ALL_DIE) )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v22.is_enable_,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                    "onFungusTrainingDungeonMonsterDie",
                    497);
                  v17 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                          (common::milog::MiLogStream *const)&v22.is_enable_,
                          (const char (*)[59])"[FungusFighter] forceStopAndClearGallery fail, gallery_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(p_M_left + 64));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22.is_enable_);
                }
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v22.is_enable_,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "onFungusTrainingDungeonMonsterDie",
                486);
              v10 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                      (common::milog::MiLogStream *const)&v22.is_enable_,
                      (const char (*)[77])"[FungusFighter] failed to findFungusTrainingDungeonExcelConfig, dungeon_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                &this->cur_runtime_data_.dungeon_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22.is_enable_);
            }
          }
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(p_M_left + 160));
        }
      }
    }
  }
  if ( &v22.scene_gallery_map_._M_t._M_impl._M_header._M_left == (std::_Rb_tree_node_base::_Base_ptr *)p_M_left )
  {
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_left = 1172321806LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_left >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 506: range 00000000161E452A-00000000161E5B24
int32_t __cdecl FungusFighterRuntimeMgr::onFungusFighterTrainingSelectFungusReq(
        FungusFighterRuntimeMgr *const this,
        const proto::FungusFighterTrainingSelectFungusReq *req)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t ActivityId; // eax
  common::milog::MiLogStream *v19; // r14
  unsigned int v20; // edi
  unsigned int v21; // esi
  char v22; // al
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v29; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v30; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v34; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v35; // rax
  common::milog::MiLogStream *v37; // rax
  const google::protobuf::RepeatedField<unsigned int> *v38; // rax
  const google::protobuf::RepeatedField<unsigned int> *v39; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v41; // rax
  uint32_t v42; // eax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  Group *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  int32_t result; // eax
  int val; // [rsp+18h] [rbp-318h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-314h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-310h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-308h]
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-300h]
  const data::FungusTrainingDungeonExcelConfig *training_config_ptr; // [rsp+38h] [rbp-2F8h]
  const data::FungusBaseExcelConfig *base_config_ptr; // [rsp+40h] [rbp-2F0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+48h] [rbp-2E8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-2E0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+58h] [rbp-2D8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+60h] [rbp-2D0h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+68h] [rbp-2C8h]
  std::shared_ptr<Config> v65; // [rsp+70h] [rbp-2C0h] BYREF
  common::milog::MiLogStream v66; // [rsp+80h] [rbp-2B0h] BYREF
  char v67[656]; // [rsp+A0h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 14 dungeon_id:525 48 4 20 gallery_group_id:609 64 16 21 dungeon_scene_ptr:513 96 16 13 gr"
                        "oup_ptr:610 128 16 11 evt_ptr:617 160 48 21 all_fungus_id_set:554 240 48 25 choosen_fungus_id_se"
                        "t:555 320 48 24 backup_fungus_id_set:574 400 144 23 dungeon_context_opt:519";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::onFungusFighterTrainingSelectFungusReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862729] = -218959118;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862737] = -202116109;
  v4[536862738] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( !this->is_running_ )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->has_selected_fungus_);
  }
  if ( this->has_selected_fungus_ )
  {
LABEL_10:
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "onFungusFighterTrainingSelectFungusReq",
      510);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v66,
           (const char (*)[29])"[FungusFighter] is_running: ");
    if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_running_);
    v6 = common::milog::MiLogStream::operator<<(v5, this->is_running_);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           v6,
           (const char (*)[23])", has_selected_fungus_");
    if ( *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->has_selected_fungus_);
    }
    common::milog::MiLogStream::operator<<(v7, this->has_selected_fungus_);
    common::milog::MiLogStream::~MiLogStream(&v66);
    v8 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 64));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "onFungusFighterTrainingSelectFungusReq",
        516);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        &v66,
        (const char (*)[45])"[FungusFighter] dungeon_scene_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v66);
      v8 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      DungeonScene::getDungeonExtraData<FungusFighterDungeonContext>(
        (std::optional<FungusFighterDungeonContext> *)(v2 + 400),
        v9);
      if ( !std::optional<FungusFighterDungeonContext>::has_value((const std::optional<FungusFighterDungeonContext> *const)(v2 + 400)) )
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "onFungusFighterTrainingSelectFungusReq",
          522);
        v10 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                &v66,
                (const char (*)[60])"[FungusFighter] dungeon_scene illegal entered, dungeon_id: ");
        v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        *(_DWORD *)(v2 + 48) = DungeonScene::getDungeonId(v11);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v66);
        v8 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = this->cur_runtime_data_.dungeon_id;
        v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( DungeonScene::getDungeonId(v12) == *(_DWORD *)(v2 + 32) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v65);
          config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
          std::shared_ptr<Config>::~shared_ptr(&v65);
          training_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(
                                  config_mgr,
                                  *(_DWORD *)(v2 + 32));
          if ( training_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            ActivityId = BaseActivity::getActivityId(this->activity_);
            base_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusBaseExcelConfig(
                                config_mgr,
                                ActivityId);
            if ( base_config_ptr )
            {
              v20 = proto::FungusFighterTrainingSelectFungusReq::fight_fungus_id_list_size(req);
              if ( *(_BYTE *)(((unsigned __int64)&base_config_ptr->fungus_fighter_team_num >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)base_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&base_config_ptr->fungus_fighter_team_num >> 3)
                                                                               + 0x7FFF8000) )
              {
                v20 = (_DWORD)base_config_ptr + 20;
                __asan_report_load4();
              }
              if ( v20 > base_config_ptr->fungus_fighter_team_num )
                goto LABEL_39;
              v21 = proto::FungusFighterTrainingSelectFungusReq::backup_fungus_id_list_size(req);
              if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->backup_fungus_num >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&training_config_ptr->backup_fungus_num >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( v21 <= training_config_ptr->backup_fungus_num )
                v22 = 0;
              else
LABEL_39:
                v22 = 1;
              if ( v22 )
              {
                common::milog::MiLogStream::create(
                  &v66,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                  "onFungusFighterTrainingSelectFungusReq",
                  549);
                v23 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                        &v66,
                        (const char (*)[62])"[FungusFighter] fungus team size not valid, fight_team_size: ");
                val = proto::FungusFighterTrainingSelectFungusReq::fight_fungus_id_list_size(req);
                v24 = common::milog::MiLogStream::operator<<<int,(int *)0>(v23, &val);
                v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v24,
                        (const char (*)[19])"backup_team_size: ");
                *(_DWORD *)(v2 + 48) = proto::FungusFighterTrainingSelectFungusReq::backup_fungus_id_list_size(req);
                v26 = common::milog::MiLogStream::operator<<<int,(int *)0>(v25, (const int *)(v2 + 48));
                v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v26,
                        (const char (*)[15])", dungeon_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v2 + 32));
                common::milog::MiLogStream::~MiLogStream(&v66);
                v8 = -1;
              }
              else
              {
                std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 160));
                std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 240));
                __for_range = proto::FungusFighterTrainingSelectFungusReq::fight_fungus_id_list(req);
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
                  *(_DWORD *)(v2 + 48) = *__for_begin;
                  if ( !FungusFighterRuntimeMgr::isCurAliveFungusMonster(this, *(_DWORD *)(v2 + 48)) )
                  {
                    common::milog::MiLogStream::create(
                      &v66,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                      "onFungusFighterTrainingSelectFungusReq",
                      560);
                    v28 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                            &v66,
                            (const char (*)[59])"[FungusFighter] fungus not exist or not alive, fungus_id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v28,
                      (const unsigned int *)(v2 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v66);
                    v8 = -1;
                    goto LABEL_90;
                  }
                  v29 = std::set<unsigned int>::insert(
                          (std::set<unsigned int> *const)(v2 + 240),
                          (const std::set<unsigned int>::value_type *)(v2 + 48));
                  if ( !v29.second
                    || (v30 = std::set<unsigned int>::insert(
                                (std::set<unsigned int> *const)(v2 + 160),
                                (const std::set<unsigned int>::value_type *)(v2 + 48)),
                        !v30.second) )
                  {
                    common::milog::MiLogStream::create(
                      &v66,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                      "onFungusFighterTrainingSelectFungusReq",
                      565);
                    v32 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            &v66,
                            (const char (*)[38])"[FungusFighter] duplicate fungus_id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v32,
                      (const unsigned int *)(v2 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v66);
                    v8 = -1;
                    goto LABEL_90;
                  }
                  ++__for_begin;
                }
                if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 240)) )
                {
                  common::milog::MiLogStream::create(
                    &v66,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                    "onFungusFighterTrainingSelectFungusReq",
                    571);
                  common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    &v66,
                    (const char (*)[58])"[FungusFighter] fight choosen_fungus_id_set size is empty");
                  common::milog::MiLogStream::~MiLogStream(&v66);
                  v8 = -1;
                }
                else
                {
                  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 320));
                  __for_range_0 = proto::FungusFighterTrainingSelectFungusReq::backup_fungus_id_list(req);
                  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
                  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
                  while ( __for_begin_0 != __for_end_0 )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v2 + 48) = *__for_begin_0;
                    if ( !FungusFighterRuntimeMgr::isCurAliveFungusMonster(this, *(_DWORD *)(v2 + 48)) )
                    {
                      common::milog::MiLogStream::create(
                        &v66,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                        "onFungusFighterTrainingSelectFungusReq",
                        579);
                      v33 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                              &v66,
                              (const char (*)[59])"[FungusFighter] fungus not exist or not alive, fungus_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v33,
                        (const unsigned int *)(v2 + 48));
                      common::milog::MiLogStream::~MiLogStream(&v66);
                      v8 = -1;
                      goto LABEL_89;
                    }
                    v34 = std::set<unsigned int>::insert(
                            (std::set<unsigned int> *const)(v2 + 320),
                            (const std::set<unsigned int>::value_type *)(v2 + 48));
                    if ( !v34.second
                      || (v35 = std::set<unsigned int>::insert(
                                  (std::set<unsigned int> *const)(v2 + 160),
                                  (const std::set<unsigned int>::value_type *)(v2 + 48)),
                          !v35.second) )
                    {
                      common::milog::MiLogStream::create(
                        &v66,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                        "onFungusFighterTrainingSelectFungusReq",
                        584);
                      v37 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                              &v66,
                              (const char (*)[38])"[FungusFighter] duplicate fungus_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v37,
                        (const unsigned int *)(v2 + 48));
                      common::milog::MiLogStream::~MiLogStream(&v66);
                      v8 = -1;
                      goto LABEL_89;
                    }
                    ++__for_begin_0;
                  }
                  std::vector<unsigned int>::clear(&this->cur_runtime_data_.choosen_monster_vec);
                  v38 = proto::FungusFighterTrainingSelectFungusReq::fight_fungus_id_list(req);
                  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(
                    v38,
                    &this->cur_runtime_data_.choosen_monster_vec);
                  std::vector<unsigned int>::clear(&this->cur_runtime_data_.backup_monster_vec);
                  v39 = proto::FungusFighterTrainingSelectFungusReq::backup_fungus_id_list(req);
                  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(
                    v39,
                    &this->cur_runtime_data_.backup_monster_vec);
                  ret = FungusFighterRuntimeMgr::createFungusMonsters(
                          this,
                          &this->cur_runtime_data_.choosen_monster_vec);
                  if ( ret )
                  {
                    common::milog::MiLogStream::create(
                      &v66,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                      "onFungusFighterTrainingSelectFungusReq",
                      598);
                    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      &v66,
                      (const char (*)[44])"[FungusFighter] createFungusMonsters failed");
                    common::milog::MiLogStream::~MiLogStream(&v66);
                    v8 = ret;
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) != 0
                      && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3)
                                                                        + 0x7FFF8000) )
                    {
                      __asan_report_store1(&this->has_selected_fungus_);
                    }
                    this->has_selected_fungus_ = 1;
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)(v2 + 128));
                    p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.txt_config_mgr.gallery_config_mgr;
                    if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&training_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                                           p_gallery_config_mgr,
                                           training_config_ptr->gallery_id);
                    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
                    if ( gallery_config_ptr )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4();
                      }
                      *(_DWORD *)(v2 + 48) = gallery_config_ptr->control_group_id;
                      v42 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                      Scene::findGroup((Scene *const)(v2 + 96), v42);
                      if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 96), 0LL) )
                      {
                        common::milog::MiLogStream::create(
                          &v66,
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                          "onFungusFighterTrainingSelectFungusReq",
                          613);
                        v43 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                &v66,
                                (const char (*)[45])"[FungusFighter] findGroup failed, group_id: ");
                        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v43,
                                (const unsigned int *)(v2 + 48));
                        v45 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                v44,
                                (const char (*)[15])", dungeon_id: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v45,
                          (const unsigned int *)(v2 + 32));
                        common::milog::MiLogStream::~MiLogStream(&v66);
                        v8 = -1;
                      }
                      else
                      {
                        EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 128), 3202);
                        if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 128), 0LL) )
                        {
                          v46 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                          Group::handleEvent(v46, (EventPtr *)(v2 + 128));
                        }
                        if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4();
                        }
                        FungusFighterRuntimeMgr::logFungusDungeonStart(this, training_config_ptr->training_type);
                        FungusFighterRuntimeMgr::notifyCurRuntimeData(this);
                        common::milog::MiLogStream::create(
                          &v66,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                          "onFungusFighterTrainingSelectFungusReq",
                          625);
                        v47 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                &v66,
                                (const char (*)[50])"[FungusFighter] select fungus finished, choosen: ");
                        v48 = common::milog::MiLogStream::operator<<<unsigned int>(
                                v47,
                                &this->cur_runtime_data_.choosen_monster_vec);
                        v49 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                v48,
                                (const char (*)[11])", backup: ");
                        common::milog::MiLogStream::operator<<<unsigned int>(
                          v49,
                          &this->cur_runtime_data_.backup_monster_vec);
                        common::milog::MiLogStream::~MiLogStream(&v66);
                        v8 = 0;
                        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 128));
                      }
                      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v66,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                        "onFungusFighterTrainingSelectFungusReq",
                        606);
                      v41 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                              &v66,
                              (const char (*)[60])"[FungusFighter] findGalleryExcelConfig failed, gallery_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v41,
                        &training_config_ptr->gallery_id);
                      common::milog::MiLogStream::~MiLogStream(&v66);
                      v8 = -1;
                    }
                  }
LABEL_89:
                  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 320));
                }
LABEL_90:
                std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 240));
                std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 160));
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v66,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "onFungusFighterTrainingSelectFungusReq",
                543);
              v19 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                      &v66,
                      (const char (*)[68])"[FungusFighter] failed to findFungusBaseExcelConfig, activity_id_: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              *(_DWORD *)(v2 + 48) = BaseActivity::getActivityId(this->activity_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v66);
              v8 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v66,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
              "onFungusFighterTrainingSelectFungusReq",
              537);
            v17 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                    &v66,
                    (const char (*)[77])"[FungusFighter] failed to findFungusTrainingDungeonExcelConfig, dungeon_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v66);
            v8 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v66,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "onFungusFighterTrainingSelectFungusReq",
            529);
          v13 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  &v66,
                  (const char (*)[66])"[FungusFighter] dungeon_scene not match runtime mgr, dungeon_id: ");
          v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          *(_DWORD *)(v2 + 48) = DungeonScene::getDungeonId(v14);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v15,
                  (const char (*)[27])", runtime mgr dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v66);
          v8 = -1;
        }
      }
      std::optional<FungusFighterDungeonContext>::~optional((std::optional<FungusFighterDungeonContext> *const)(v2 + 400));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  result = v8;
  if ( v67 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 631: range 00000000161E5B26-00000000161E6DF4
void __cdecl FungusFighterRuntimeMgr::onFungusFighterTrainingGallerySettleEvent(
        FungusFighterRuntimeMgr *const this,
        const FungusFighterTrainingGallerySettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t gallery_id; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  data::FungusTrainingDungeonType v19; // eax
  unsigned int v20; // ecx
  uint32_t v21; // edx
  uint32_t v22; // edx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t cur_round; // ecx
  uint32_t CurDeadFungusMonsterNum; // ecx
  uint32_t v27; // r15d
  uint32_t v28; // r14d
  uint32_t v29; // esi
  common::milog::MiLogStream *v30; // rax
  DungeonScene *v31; // rax
  proto::GalleryStopReason v32; // eax
  data::FungusTrainingDungeonType v33; // r15d
  uint32_t v34; // r14d
  uint32_t v35; // esi
  uint32_t v36; // ecx
  DungeonScene *v37; // rdx
  data::FungusTrainingDungeonType v38; // r15d
  uint32_t v39; // r14d
  uint32_t v40; // esi
  DungeonScene *v41; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  data::FungusTrainingDungeonType training_type; // r15d
  uint32_t v44; // r14d
  uint32_t v45; // esi
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  data::FungusTrainingDungeonType type; // [rsp+Ch] [rbp-234h]
  FungusFighterDungeonContext *dungeon_context; // [rsp+28h] [rbp-218h]
  ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-210h]
  const data::FungusTrainingDungeonExcelConfig *training_config_ptr; // [rsp+38h] [rbp-208h]
  std::shared_ptr<Config> v55; // [rsp+40h] [rbp-200h] BYREF
  common::milog::MiLogStream v56; // [rsp+50h] [rbp-1F0h] BYREF
  char v57[464]; // [rsp+70h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 17 is_new_record:704 64 4 14 dungeon_id:645 80 4 15 final_score:703 96 16 21 dungeon_scen"
                        "e_ptr:632 128 48 10 notify:715 208 144 23 dungeon_context_opt:638";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::onFungusFighterTrainingGallerySettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862731] = -202116109;
  v4[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 96));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "onFungusFighterTrainingGallerySettleEvent",
      635);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v56,
      (const char (*)[45])"[FungusFighter] dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v56);
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    DungeonScene::getDungeonExtraData<FungusFighterDungeonContext>(
      (std::optional<FungusFighterDungeonContext> *)(v2 + 208),
      v5);
    if ( !std::optional<FungusFighterDungeonContext>::has_value((const std::optional<FungusFighterDungeonContext> *const)(v2 + 208)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "onFungusFighterTrainingGallerySettleEvent",
        641);
      v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v56,
             (const char (*)[60])"[FungusFighter] dungeon_scene illegal entered, dungeon_id: ");
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      *(_DWORD *)(v2 + 80) = DungeonScene::getDungeonId(v7);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v56);
    }
    else
    {
      dungeon_context = std::optional<FungusFighterDungeonContext>::value((std::optional<FungusFighterDungeonContext> *const)(v2 + 208));
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 64) = this->cur_runtime_data_.dungeon_id;
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( DungeonScene::getDungeonId(v8) == *(_DWORD *)(v2 + 64) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v55);
        config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v55);
        training_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(
                                config_mgr,
                                *(_DWORD *)(v2 + 64));
        if ( training_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          gallery_id = event->gallery_id;
          if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&training_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( gallery_id == training_config_ptr->gallery_id )
          {
            v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( DungeonScene::getDungeonResult(v18) )
            {
              v42 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              if ( DungeonScene::getDungeonResult(v42) == DUNGEON_RESULT_CANCEL )
              {
                if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                training_type = training_config_ptr->training_type;
                v44 = proto::FungusFighterTrainingSettleInfo::used_time(&event->gallery_settle_info);
                v45 = proto::FungusFighterTrainingSettleInfo::reason(&event->gallery_settle_info);
                FungusFighterRuntimeMgr::logFungusDungeonSettle(this, v45, 0, v44, training_type);
              }
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "onFungusFighterTrainingGallerySettleEvent",
                757);
              v46 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                      &v56,
                      (const char (*)[67])"[FungusFighter] Dungeon settled, will not record, dungeon_result: ");
              v47 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              *(_DWORD *)(v2 + 80) = DungeonScene::getDungeonResult(v47);
              v48 = common::milog::MiLogStream::operator<<<DungeonResult,(DungeonResult*)0>(
                      v46,
                      (const DungeonResult *)(v2 + 80));
              v49 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v48,
                      (const char (*)[13])"dungeon_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v49,
                (const unsigned int *)(v2 + 64));
              common::milog::MiLogStream::~MiLogStream(&v56);
            }
            else if ( proto::FungusFighterTrainingSettleInfo::reason(&event->gallery_settle_info) == GALLERY_STOP_LUA_INTERRUPT_SUCCESS )
            {
              if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              v19 = training_config_ptr->training_type;
              if ( v19 == FUNGUS_TRAINING_DUNGEON_ATTACK )
              {
                v20 = proto::FungusFighterTrainingSettleInfo::used_time(&event->gallery_settle_info);
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.total_used_time >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.total_used_time >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                v21 = SAFE_ADD<unsigned int,unsigned int>(this->cur_runtime_data_.total_used_time, v20);
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.total_used_time >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.total_used_time >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_store4(&this->cur_runtime_data_.total_used_time);
                }
                this->cur_runtime_data_.total_used_time = v21;
              }
              else if ( v19 == FUNGUS_TRAINING_DUNGEON_DEFEND )
              {
                v22 = proto::FungusFighterTrainingSettleInfo::used_time(&event->gallery_settle_info);
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.total_used_time >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.total_used_time >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_store4(&this->cur_runtime_data_.total_used_time);
                }
                this->cur_runtime_data_.total_used_time = v22;
                FungusFighterRuntimeMgr::getCurGadgetLifePercentage(this, &this->gadget_life_percentage_);
                common::milog::MiLogStream::create(
                  &v56,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                  "onFungusFighterTrainingGallerySettleEvent",
                  688);
                v23 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        &v56,
                        (const char (*)[47])"[FungusFighter] succ get gadget life percent: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  &this->gadget_life_percentage_);
                common::milog::MiLogStream::~MiLogStream(&v56);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v56,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                  "onFungusFighterTrainingGallerySettleEvent",
                  693);
                v24 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                        &v56,
                        (const char (*)[54])"[FungusFighter] not valid training_type, dungeon_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v2 + 64));
                common::milog::MiLogStream::~MiLogStream(&v56);
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              cur_round = this->cur_runtime_data_.cur_round;
              if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->round_count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)training_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&training_config_ptr->round_count >> 3)
                                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( cur_round == training_config_ptr->round_count )
              {
                CurDeadFungusMonsterNum = FungusFighterRuntimeMgr::getCurDeadFungusMonsterNum(this);
                if ( *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_store4(&this->dead_fungus_num_);
                }
                this->dead_fungus_num_ = CurDeadFungusMonsterNum;
                *(_DWORD *)(v2 + 80) = 0;
                *(_BYTE *)(v2 + 48) = 0;
                FungusFighterRuntimeMgr::calAndRecordFinalScore(this, (uint32_t *)(v2 + 80), (bool *)(v2 + 48));
                if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                type = training_config_ptr->training_type;
                v27 = proto::FungusFighterTrainingSettleInfo::used_time(&event->gallery_settle_info);
                v28 = *(_DWORD *)(v2 + 80);
                v29 = proto::FungusFighterTrainingSettleInfo::reason(&event->gallery_settle_info);
                FungusFighterRuntimeMgr::logFungusDungeonSettle(this, v29, v28, v27, type);
                common::milog::MiLogStream::create(
                  &v56,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                  "onFungusFighterTrainingGallerySettleEvent",
                  708);
                v30 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                        &v56,
                        (const char (*)[57])"[FungusFighter] finish fungus dungeon succ, dungeon_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v30,
                  (const unsigned int *)(v2 + 64));
                common::milog::MiLogStream::~MiLogStream(&v56);
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                FungusFighterRuntimeMgr::clearDungeonSnapshot(this, this->cur_runtime_data_.dungeon_id);
                v31 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                DungeonScene::settle(v31, DUNGEON_RESULT_SUCCEED);
                proto::FungusFighterTrainingGallerySettleNotify::FungusFighterTrainingGallerySettleNotify((proto::FungusFighterTrainingGallerySettleNotify *const)(v2 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::FungusFighterTrainingGallerySettleNotify::set_settle_round(
                  (proto::FungusFighterTrainingGallerySettleNotify *const)(v2 + 128),
                  this->cur_runtime_data_.cur_round);
                proto::FungusFighterTrainingGallerySettleNotify::set_is_final_settle(
                  (proto::FungusFighterTrainingGallerySettleNotify *const)(v2 + 128),
                  1);
                proto::FungusFighterTrainingGallerySettleNotify::set_final_score(
                  (proto::FungusFighterTrainingGallerySettleNotify *const)(v2 + 128),
                  *(_DWORD *)(v2 + 80));
                proto::FungusFighterTrainingGallerySettleNotify::set_is_new_record(
                  (proto::FungusFighterTrainingGallerySettleNotify *const)(v2 + 128),
                  *(_BYTE *)(v2 + 48));
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.total_used_time >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.total_used_time >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::FungusFighterTrainingGallerySettleNotify::set_total_used_time(
                  (proto::FungusFighterTrainingGallerySettleNotify *const)(v2 + 128),
                  this->cur_runtime_data_.total_used_time);
                if ( *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                proto::FungusFighterTrainingGallerySettleNotify::set_dead_fungus_num(
                  (proto::FungusFighterTrainingGallerySettleNotify *const)(v2 + 128),
                  this->dead_fungus_num_);
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::FungusFighterTrainingGallerySettleNotify::set_gadget_life_percentage(
                  (proto::FungusFighterTrainingGallerySettleNotify *const)(v2 + 128),
                  this->gadget_life_percentage_);
                v32 = proto::FungusFighterTrainingSettleInfo::reason(&event->gallery_settle_info);
                proto::FungusFighterTrainingGallerySettleNotify::set_reason(
                  (proto::FungusFighterTrainingGallerySettleNotify *const)(v2 + 128),
                  v32);
                if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
                proto::FungusFighterTrainingGallerySettleNotify::~FungusFighterTrainingGallerySettleNotify((proto::FungusFighterTrainingGallerySettleNotify *const)(v2 + 128));
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                v33 = training_config_ptr->training_type;
                v34 = proto::FungusFighterTrainingSettleInfo::used_time(&event->gallery_settle_info);
                v35 = proto::FungusFighterTrainingSettleInfo::reason(&event->gallery_settle_info);
                FungusFighterRuntimeMgr::logFungusDungeonSettle(this, v35, 0, v34, v33);
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                v36 = ++this->cur_runtime_data_.cur_round;
                if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_round >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&dungeon_context->cur_round >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_store4(&dungeon_context->cur_round);
                }
                dungeon_context->cur_round = v36;
                v37 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                DungeonScene::setDungeonExtraData<FungusFighterDungeonContext>(v37, dungeon_context);
                if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( training_config_ptr->training_type == FUNGUS_TRAINING_DUNGEON_ATTACK )
                  FungusFighterRuntimeMgr::saveShapshot(this);
                FungusFighterRuntimeMgr::clearRoundData(this);
                FungusFighterRuntimeMgr::transferPlayerToSpecifiedPos(this, training_config_ptr);
              }
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&training_config_ptr->training_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              v38 = training_config_ptr->training_type;
              v39 = proto::FungusFighterTrainingSettleInfo::used_time(&event->gallery_settle_info);
              v40 = proto::FungusFighterTrainingSettleInfo::reason(&event->gallery_settle_info);
              FungusFighterRuntimeMgr::logFungusDungeonSettle(this, v40, 0, v39, v38);
              v41 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              DungeonScene::settle(v41, DUNGEON_RESULT_FAIL);
            }
            FungusFighterRuntimeMgr::removeFungusMonsters(this);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
              "onFungusFighterTrainingGallerySettleEvent",
              663);
            v15 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v56,
                    (const char (*)[52])"[FungusFighter] wrong gallery_id, real gallery_id: ");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &event->gallery_id);
            v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v16,
                    (const char (*)[22])", config gallery_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v17,
              &training_config_ptr->gallery_id);
            common::milog::MiLogStream::~MiLogStream(&v56);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "onFungusFighterTrainingGallerySettleEvent",
            657);
          v13 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                  &v56,
                  (const char (*)[77])"[FungusFighter] failed to findFungusTrainingDungeonExcelConfig, dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v56);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "onFungusFighterTrainingGallerySettleEvent",
          649);
        v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
               &v56,
               (const char (*)[66])"[FungusFighter] dungeon_scene not match runtime mgr, dungeon_id: ");
        v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(_DWORD *)(v2 + 80) = DungeonScene::getDungeonId(v10);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 80));
        v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                v11,
                (const char (*)[27])", runtime mgr dungeon_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v56);
      }
    }
    std::optional<FungusFighterDungeonContext>::~optional((std::optional<FungusFighterDungeonContext> *const)(v2 + 208));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
  if ( v57 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 765: range 00000000161E6DF6-00000000161E7C99
int32_t __cdecl FungusFighterRuntimeMgr::onFungusFighterUseBackupFungusReq(
        FungusFighterRuntimeMgr *const this,
        const proto::FungusFighterUseBackupFungusReq *req)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // rax
  uint32_t ActivityId; // eax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  const google::protobuf::RepeatedField<unsigned int> *v17; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v18; // rdx
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t *v25; // rdx
  char v26; // al
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-23Ch] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-238h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-230h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __rhs; // [rsp+28h] [rbp-228h] BYREF
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-220h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-208h]
  std::shared_ptr<Config> v38; // [rsp+50h] [rbp-200h] BYREF
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v40; // [rsp+80h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v41; // [rsp+A0h] [rbp-1B0h] BYREF
  char v42[400]; // [rsp+C0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 14 dungeon_id:772 64 4 13 team_size:788 80 4 13 fungus_id:808 96 8 14 fight_iter:807 128 "
                        "8 15 backup_iter:810 160 24 27 candidate_fungus_id_vec:800 224 24 21 fight_monster_vec:803 288 2"
                        "4 22 backup_monster_vec:804";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::onFungusFighterUseBackupFungusReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( !this->is_running_ )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->has_used_backup_);
  }
  if ( this->has_used_backup_ )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->has_selected_fungus_);
  }
  if ( !this->has_selected_fungus_ )
  {
LABEL_13:
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "onFungusFighterUseBackupFungusReq",
      769);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v41,
           (const char (*)[29])"[FungusFighter] is_running: ");
    if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_running_);
    v6 = common::milog::MiLogStream::operator<<(v5, this->is_running_);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])", has_used_backup_");
    if ( *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->has_used_backup_);
    }
    v8 = common::milog::MiLogStream::operator<<(v7, this->has_used_backup_);
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           v8,
           (const char (*)[23])", has_selected_fungus_");
    if ( *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_selected_fungus_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->has_selected_fungus_);
    }
    common::milog::MiLogStream::operator<<(v9, this->has_selected_fungus_);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v10 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = this->cur_runtime_data_.dungeon_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v38);
    if ( data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(
           config_mgr,
           *(_DWORD *)(v2 + 48)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ActivityId = BaseActivity::getActivityId(this->activity_);
      if ( data::ActivityFungusFighterExcelConfigMgrBase::findFungusBaseExcelConfig(config_mgr, ActivityId) )
      {
        *(_DWORD *)(v2 + 64) = proto::FungusFighterUseBackupFungusReq::backup_fungus_id_list_size(req);
        if ( *(_DWORD *)(v2 + 64) == 1 )
        {
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 160));
          v17 = proto::FungusFighterUseBackupFungusReq::backup_fungus_id_list(req);
          common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(
            v17,
            (std::vector<unsigned int> *)(v2 + 160));
          std::vector<unsigned int>::vector(
            (std::vector<unsigned int> *const)(v2 + 224),
            &this->cur_runtime_data_.choosen_monster_vec);
          std::vector<unsigned int>::vector(
            (std::vector<unsigned int> *const)(v2 + 288),
            &this->cur_runtime_data_.backup_monster_vec);
          *(std::vector<unsigned int>::iterator *)(v2 + 96) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 224));
          __for_range = (std::vector<unsigned int> *)(v2 + 160);
          __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 160))._M_current;
          __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 160))._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v18 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 80) = *v18;
            M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 288))._M_current;
            v20._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 288))._M_current;
            *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 128) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(v20, (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current, (const unsigned int *)(v2 + 80));
            __rhs._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 288))._M_current;
            if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
                   (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 128),
                   &__rhs) )
            {
              common::milog::MiLogStream::create(
                &v39,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "onFungusFighterUseBackupFungusReq",
                814);
              v21 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      &v39,
                      (const char (*)[55])"[FungusFighter] fungus not in backup team, fungus_id: ");
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v21,
                      (const unsigned int *)(v2 + 80));
              v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])", team: ");
              common::milog::MiLogStream::operator<<<unsigned int>(v23, (const std::vector<unsigned int> *)(v2 + 288));
              common::milog::MiLogStream::~MiLogStream(&v39);
              v10 = -1;
              goto LABEL_58;
            }
            if ( !FungusFighterRuntimeMgr::isCurAliveFungusMonster(this, *(_DWORD *)(v2 + 80)) )
            {
              common::milog::MiLogStream::create(
                &v40,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "onFungusFighterUseBackupFungusReq",
                821);
              v24 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      &v40,
                      (const char (*)[56])"[FungusFighter] backup fungus is not alive, fungus_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v2 + 80));
              common::milog::MiLogStream::~MiLogStream(&v40);
              v10 = -1;
              goto LABEL_58;
            }
            while ( 1 )
            {
              __rhs._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 224))._M_current;
              if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 96),
                      &__rhs) )
                goto LABEL_45;
              v25 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 96));
              if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( !FungusFighterRuntimeMgr::isCurDeadFungusMonster(this, *v25) )
                v26 = 1;
              else
LABEL_45:
                v26 = 0;
              if ( !v26 )
                break;
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(
                (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 96),
                0);
            }
            __rhs._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 224))._M_current;
            if ( __gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
                   (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 96),
                   &__rhs) )
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "onFungusFighterUseBackupFungusReq",
                831);
              v27 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                      &v41,
                      (const char (*)[50])"[FungusFighter] fungus dead num not enough, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
              common::milog::MiLogStream::~MiLogStream(&v41);
              v10 = -1;
              goto LABEL_58;
            }
            std::iter_swap<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
              *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 128),
              *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 96));
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          if ( FungusFighterRuntimeMgr::createFungusMonsters(this, (const std::vector<unsigned int> *)(v2 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
              "onFungusFighterUseBackupFungusReq",
              839);
            common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v41,
              (const char (*)[44])"[FungusFighter] createFungusMonsters failed");
            common::milog::MiLogStream::~MiLogStream(&v41);
            v10 = -1;
          }
          else
          {
            std::vector<unsigned int>::operator=(
              &this->cur_runtime_data_.choosen_monster_vec,
              (const std::vector<unsigned int> *)(v2 + 224));
            std::vector<unsigned int>::operator=(
              &this->cur_runtime_data_.backup_monster_vec,
              (const std::vector<unsigned int> *)(v2 + 288));
            FungusFighterRuntimeMgr::notifyCurRuntimeData(this);
            if ( *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this + 18) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_used_backup_ >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_store1(&this->has_used_backup_);
            }
            this->has_used_backup_ = 1;
            FungusFighterRuntimeMgr::logFungusUseBackup(this, (const std::vector<unsigned int> *)(v2 + 160));
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
              "onFungusFighterUseBackupFungusReq",
              851);
            v28 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    &v41,
                    (const char (*)[61])"[FungusFighter] use backup fungus, candidate_fungus_id_vec: ");
            common::milog::MiLogStream::operator<<<unsigned int>(v28, (const std::vector<unsigned int> *)(v2 + 160));
            common::milog::MiLogStream::~MiLogStream(&v41);
            v10 = 0;
          }
LABEL_58:
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 288));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 224));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "onFungusFighterUseBackupFungusReq",
            791);
          v14 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v41,
                  (const char (*)[50])"[FungusFighter] size not valid, backup_list_size:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 64));
          v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v15,
                  (const char (*)[15])", dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
          v10 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "onFungusFighterUseBackupFungusReq",
          783);
        v13 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                &v41,
                (const char (*)[68])"[FungusFighter] failed to findFungusBaseExcelConfig, activity_id_: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = BaseActivity::getActivityId(this->activity_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v41);
        v10 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "onFungusFighterUseBackupFungusReq",
        777);
      v11 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
              &v41,
              (const char (*)[77])"[FungusFighter] failed to findFungusTrainingDungeonExcelConfig, dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v41);
      v10 = -1;
    }
  }
  result = v10;
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 856: range 00000000161E7C9A-00000000161E7EF7
std::vector<unsigned int> *__cdecl FungusFighterRuntimeMgr::getCurValidBackupFungusIdList(
        std::vector<unsigned int> *retstr,
        FungusFighterRuntimeMgr *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 fungus_id:859";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::getCurValidBackupFungusIdList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->cur_runtime_data_.backup_monster_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->cur_runtime_data_.backup_monster_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->cur_runtime_data_.backup_monster_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    if ( FungusFighterRuntimeMgr::isCurAliveFungusMonster(this, *(_DWORD *)(v2 + 32)) )
      std::vector<unsigned int>::emplace_back<unsigned int &>(
        retstr,
        (unsigned int *)(v2 + 32),
        (unsigned int *)(v2 + 32));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
    "getCurValidBackupFungusIdList",
    866);
  v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v11,
         (const char (*)[26])"[FungusFighter] res_vec: ");
  common::milog::MiLogStream::operator<<<unsigned int>(v6, retstr);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 871: range 00000000161E7EF8-00000000161E8063
void __cdecl FungusFighterRuntimeMgr::notifyCurRuntimeData(FungusFighterRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  proto::FungusTrainingProgressDetail *v4; // rax
  char v5[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:872";
  *(_QWORD *)(v1 + 16) = FungusFighterRuntimeMgr::notifyCurRuntimeData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::FungusFighterRuntimeDataNotify::FungusFighterRuntimeDataNotify((proto::FungusFighterRuntimeDataNotify *const)(v1 + 32));
  v4 = proto::FungusFighterRuntimeDataNotify::mutable_progress_detail((proto::FungusFighterRuntimeDataNotify *const)(v1 + 32));
  FungusTrainingShapshotData::toClient(&this->cur_runtime_data_, v4);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::FungusFighterRuntimeDataNotify::~FungusFighterRuntimeDataNotify((proto::FungusFighterRuntimeDataNotify *const)(v1 + 32));
  if ( v5 == (char *)v1 )
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

// Line 879: range 00000000161E8064-00000000161E81EF
_BOOL8 __fastcall FungusFighterRuntimeMgr::isCurAliveFungusMonster(
        FungusFighterRuntimeMgr *const this,
        uint32_t fungus_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::pointer v5; // rdx
  bool *p_is_alive; // rax
  _BOOL8 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 fungus_id:878 64 8 8 iter:880";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::isCurAliveFungusMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = fungus_id;
  *(std::unordered_map<unsigned int,FungusFighterMonsterData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,FungusFighterMonsterData>::find(
                                                                                        &this->cur_runtime_data_.monster_data_map,
                                                                                        (const std::unordered_map<unsigned int,FungusFighterMonsterData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::end(&this->cur_runtime_data_.monster_data_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,FungusFighterMonsterData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false> *const)(v2 + 64));
    p_is_alive = &v5->second.is_alive;
    if ( *(_BYTE *)(((unsigned __int64)p_is_alive >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_alive & 7) >= *(_BYTE *)(((unsigned __int64)p_is_alive >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_alive);
    }
    result = v5->second.is_alive;
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

// Line 889: range 00000000161E81F0-00000000161E837E
_BOOL8 __fastcall FungusFighterRuntimeMgr::isCurDeadFungusMonster(
        FungusFighterRuntimeMgr *const this,
        uint32_t fungus_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::pointer v5; // rdx
  bool *p_is_alive; // rax
  _BOOL8 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 fungus_id:888 64 8 8 iter:890";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::isCurDeadFungusMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = fungus_id;
  *(std::unordered_map<unsigned int,FungusFighterMonsterData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,FungusFighterMonsterData>::find(
                                                                                        &this->cur_runtime_data_.monster_data_map,
                                                                                        (const std::unordered_map<unsigned int,FungusFighterMonsterData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::end(&this->cur_runtime_data_.monster_data_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,FungusFighterMonsterData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false> *)(v2 + 64),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false> *const)(v2 + 64));
    p_is_alive = &v5->second.is_alive;
    if ( *(_BYTE *)(((unsigned __int64)p_is_alive >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_alive & 7) >= *(_BYTE *)(((unsigned __int64)p_is_alive >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_alive);
    }
    result = !v5->second.is_alive;
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

// Line 899: range 00000000161E8380-00000000161E84A6
std::vector<unsigned int> *__cdecl FungusFighterRuntimeMgr::getAllDeadFungusMonster(
        std::vector<unsigned int> *retstr,
        const FungusFighterRuntimeMgr *const this)
{
  bool *p_is_alive; // rax
  std::unordered_map<unsigned int,FungusFighterMonsterData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,FungusFighterMonsterData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,FungusFighterMonsterData> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,FungusFighterMonsterData> *v7; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *fungus_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *monster_data; // [rsp+38h] [rbp-18h]

  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->cur_runtime_data_.monster_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::begin(&this->cur_runtime_data_.monster_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::end(&this->cur_runtime_data_.monster_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,FungusFighterMonsterData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator*(&__for_begin);
    fungus_id = std::get<0ul,unsigned int const,FungusFighterMonsterData>(v7);
    monster_data = (std::tuple_element<1,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *)std::get<1ul,unsigned int const,FungusFighterMonsterData>(v7);
    p_is_alive = &monster_data->is_alive;
    if ( *(_BYTE *)(((unsigned __int64)p_is_alive >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_alive & 7) >= *(_BYTE *)(((unsigned __int64)p_is_alive >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_alive);
    }
    if ( !monster_data->is_alive )
      std::vector<unsigned int>::push_back(retstr, fungus_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 912: range 00000000161E84A8-00000000161E9578
int32_t __cdecl FungusFighterRuntimeMgr::createFungusMonsters(
        FungusFighterRuntimeMgr *const this,
        const std::vector<unsigned int> *fungus_id_vec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::vector<unsigned int>::const_reference v24; // rdx
  common::milog::MiLogStream *v25; // rax
  std::vector<unsigned int>::const_reference v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::pointer v31; // rdx
  bool *p_is_alive; // rax
  common::milog::MiLogStream *v33; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::pointer v34; // rdx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  unsigned int *v38; // rcx
  unsigned int *v39; // r8
  std::unordered_map<unsigned int,unsigned int> *v41; // [rsp+8h] [rbp-4E8h]
  std::vector<unsigned int>::size_type v42; // [rsp+8h] [rbp-4E8h]
  int v43; // [rsp+8h] [rbp-4E8h]
  unsigned int val; // [rsp+28h] [rbp-4C8h] BYREF
  uint32_t i; // [rsp+2Ch] [rbp-4C4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false> __y; // [rsp+30h] [rbp-4C0h] BYREF
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-4B8h]
  const data::FungusTrainingDungeonExcelConfig *training_config_ptr; // [rsp+40h] [rbp-4B0h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+48h] [rbp-4A8h]
  const data::FungusExcelConfig *fungus_config_ptr; // [rsp+50h] [rbp-4A0h]
  const PointScriptConfig *point_config_ptr; // [rsp+58h] [rbp-498h]
  common::milog::MiLogStream v52; // [rsp+60h] [rbp-490h] BYREF
  char v53[1136]; // [rsp+80h] [rbp-470h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1088LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 14 dungeon_id:929 48 4 19 fungus_group_id:944 64 4 13 fungus_id:967 80 4 19 point_config"
                        "_id:974 96 8 13 data_iter:981 128 16 21 dungeon_scene_ptr:917 160 16 13 group_ptr:951 192 16 15 "
                        "monster_ptr:999 224 144 23 dungeon_context_opt:923 432 520 9 param:992";
  *(_QWORD *)(v3 + 16) = FungusFighterRuntimeMgr::createFungusMonsters;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862731] = -219021312;
  v5[536862732] = -218959118;
  v5[536862733] = 62194;
  v5[536862749] = -218103808;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  v5[536862752] = -202116109;
  v5[536862753] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_running_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_running_);
  if ( !this->is_running_ )
  {
    v2 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getDungeonComp(this->player_);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 128));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "createFungusMonsters",
        920);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        &v52,
        (const char (*)[45])"[FungusFighter] dungeon_scene_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v52);
      v2 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      DungeonScene::getDungeonExtraData<FungusFighterDungeonContext>(
        (std::optional<FungusFighterDungeonContext> *)(v3 + 224),
        v6);
      if ( !std::optional<FungusFighterDungeonContext>::has_value((const std::optional<FungusFighterDungeonContext> *const)(v3 + 224)) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "createFungusMonsters",
          926);
        v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
               &v52,
               (const char (*)[60])"[FungusFighter] dungeon_scene illegal entered, dungeon_id: ");
        v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        val = DungeonScene::getDungeonId(v8);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
        common::milog::MiLogStream::~MiLogStream(&v52);
        v2 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 32) = this->cur_runtime_data_.dungeon_id;
        v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( DungeonScene::getDungeonId(v9) == *(_DWORD *)(v3 + 32) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 192));
          config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192))->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
          training_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(
                                  config_mgr,
                                  *(_DWORD *)(v3 + 32));
          if ( training_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->fungus_group_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)training_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&training_config_ptr->fungus_group_id >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 48) = training_config_ptr->fungus_group_id;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v3 + 192));
            v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                        &v15->design_config.lua_config_mgr,
                                        *(_DWORD *)(v3 + 48));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 192));
            if ( group_script_config_ptr )
            {
              v17 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              Scene::findGroup((Scene *const)(v3 + 160), v17);
              if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 160), 0LL) )
              {
                common::milog::MiLogStream::create(
                  &v52,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                  "createFungusMonsters",
                  954);
                v18 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        &v52,
                        (const char (*)[45])"[FungusFighter] findGroup failed, group_id: ");
                v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v18,
                        (const unsigned int *)(v3 + 48));
                v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v19,
                        (const char (*)[15])", dungeon_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::~MiLogStream(&v52);
                v2 = -1;
              }
              else
              {
                v41 = (std::unordered_map<unsigned int,unsigned int> *)std::vector<unsigned int>::size(fungus_id_vec);
                if ( (unsigned __int64)v41 <= std::vector<unsigned int>::size(&training_config_ptr->point_config_id_list) )
                {
                  for ( i = 0; ; ++i )
                  {
                    v42 = i;
                    if ( v42 >= std::vector<unsigned int>::size(fungus_id_vec) )
                      break;
                    v24 = std::vector<unsigned int>::operator[](fungus_id_vec, i);
                    if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v3 + 64) = *v24;
                    fungus_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusExcelConfig(
                                          config_mgr,
                                          *(_DWORD *)(v3 + 64));
                    if ( !fungus_config_ptr )
                    {
                      common::milog::MiLogStream::create(
                        &v52,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                        "createFungusMonsters",
                        971);
                      v25 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                              &v52,
                              (const char (*)[61])"[FungusFighter] failed to findFungusExcelConfig, fungus_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v3 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v52);
                      v2 = 5;
                      goto LABEL_54;
                    }
                    v26 = std::vector<unsigned int>::operator[](&training_config_ptr->point_config_id_list, i);
                    if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v3 + 80) = *v26;
                    point_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, *(_DWORD *)(v3 + 80));
                    if ( !point_config_ptr )
                    {
                      common::milog::MiLogStream::create(
                        &v52,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                        "createFungusMonsters",
                        978);
                      v27 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              &v52,
                              (const char (*)[33])"[FungusFighter] point config id:");
                      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v27,
                              (const unsigned int *)(v3 + 80));
                      v29 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                              v28,
                              (const char (*)[29])" NOT found, fungus_group_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v3 + 48));
                      common::milog::MiLogStream::~MiLogStream(&v52);
                      v2 = 5;
                      goto LABEL_54;
                    }
                    *(std::unordered_map<unsigned int,FungusFighterMonsterData>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,FungusFighterMonsterData>::find(&this->cur_runtime_data_.monster_data_map, (const std::unordered_map<unsigned int,FungusFighterMonsterData>::key_type *)(v3 + 64));
                    __y._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::end(&this->cur_runtime_data_.monster_data_map)._M_cur;
                    if ( std::__detail::operator==<std::pair<unsigned int const,FungusFighterMonsterData>,false>(
                           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false> *)(v3 + 96),
                           &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v52,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                        "createFungusMonsters",
                        984);
                      v30 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                              &v52,
                              (const char (*)[53])"[FungusFighter] cannot find fungus data, fungus_is: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v30,
                        (const unsigned int *)(v3 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v52);
                      v2 = -1;
                      goto LABEL_54;
                    }
                    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false> *const)(v3 + 96));
                    p_is_alive = &v31->second.is_alive;
                    if ( *(_BYTE *)(((unsigned __int64)p_is_alive >> 3) + 0x7FFF8000) != 0
                      && ((unsigned __int8)p_is_alive & 7) >= *(_BYTE *)(((unsigned __int64)p_is_alive >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load1(p_is_alive);
                    }
                    if ( !v31->second.is_alive )
                    {
                      common::milog::MiLogStream::create(
                        &v52,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                        "createFungusMonsters",
                        989);
                      v33 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                              &v52,
                              (const char (*)[49])"[FungusFighter] fungus is not alive, fungus_id: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v33,
                        (const unsigned int *)(v3 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v52);
                      v2 = -1;
                      goto LABEL_54;
                    }
                    GroupEntityParam::GroupEntityParam((GroupEntityParam *const)(v3 + 432));
                    *(_BYTE *)(v3 + 440) = 0;
                    if ( *(_BYTE *)(((unsigned __int64)&fungus_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&fungus_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    *(_DWORD *)(v3 + 432) = fungus_config_ptr->config_id;
                    std::optional<Vector3>::operator=<Vector3 const&>(
                      (std::optional<Vector3> *const)(v3 + 444),
                      &point_config_ptr->pos);
                    std::optional<Vector3>::operator=<Vector3 const&>(
                      (std::optional<Vector3> *const)(v3 + 460),
                      &point_config_ptr->rot);
                    v34 = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false> *const)(v3 + 96));
                    if ( *(_BYTE *)(((unsigned __int64)&v34->second.cur_hp_percentage >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)v34 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v34->second.cur_hp_percentage >> 3)
                                                                        + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    *(float *)(v3 + 488) = v34->second.cur_hp_percentage;
                    v35 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    Group::createMonster((Group *const)(v3 + 192), (const GroupEntityParam *)v35);
                    if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v3 + 192), 0LL) )
                    {
                      common::milog::MiLogStream::create(
                        &v52,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                        "createFungusMonsters",
                        1002);
                      v36 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                              &v52,
                              (const char (*)[32])"createMonster fails, fungus_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v36,
                        (const unsigned int *)(v3 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v52);
                      v2 = -1;
                      v43 = 0;
                    }
                    else
                    {
                      v37 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                      val = Entity::getEntityId((const Entity *const)v37);
                      std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int &>(
                        &this->alive_fungus_map_,
                        &val,
                        (unsigned int *)(v3 + 64),
                        v38,
                        v39);
                      v43 = 1;
                    }
                    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 192));
                    GroupEntityParam::~GroupEntityParam((GroupEntityParam *const)(v3 + 432));
                    if ( v43 != 1 )
                      goto LABEL_54;
                  }
                  v2 = 0;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v52,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                    "createFungusMonsters",
                    960);
                  v21 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                          &v52,
                          (const char (*)[31])"[FungusFighter] monster_size: ");
                  *(_QWORD *)(v3 + 96) = std::vector<unsigned int>::size(fungus_id_vec);
                  v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                          v21,
                          (const unsigned __int64 *)(v3 + 96));
                  v23 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                          v22,
                          (const char (*)[31])", larger than point_list size:");
                  __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,FungusFighterMonsterData>,false>::__node_type *)std::vector<unsigned int>::size(&training_config_ptr->point_config_id_list);
                  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v23,
                    (const unsigned __int64 *)&__y);
                  common::milog::MiLogStream::~MiLogStream(&v52);
                  v2 = -1;
                }
              }
LABEL_54:
              std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 160));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "createFungusMonsters",
                948);
              v16 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                      &v52,
                      (const char (*)[64])"[FungusFighter] group script config nullptr , fungus_group_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v52);
              v2 = 5;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
              "createFungusMonsters",
              941);
            v14 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                    &v52,
                    (const char (*)[77])"[FungusFighter] failed to findFungusTrainingDungeonExcelConfig, dungeon_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v52);
            v2 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "createFungusMonsters",
            933);
          v10 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  &v52,
                  (const char (*)[66])"[FungusFighter] dungeon_scene not match runtime mgr, dungeon_id: ");
          v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          val = DungeonScene::getDungeonId(v11);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v12,
                  (const char (*)[27])", runtime mgr dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v52);
          v2 = -1;
        }
      }
      std::optional<FungusFighterDungeonContext>::~optional((std::optional<FungusFighterDungeonContext> *const)(v3 + 224));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 128));
  }
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8084) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1088LL, v53);
  }
  return v2;
};

// Line 1013: range 00000000161E957A-00000000161E9AB6
void __cdecl FungusFighterRuntimeMgr::removeFungusMonsters(FungusFighterRuntimeMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  unsigned __int64 v5; // rax
  void (__fastcall *v6)(unsigned __int64, std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r8
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-140h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-130h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+28h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *entity_id; // [rsp+30h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *fungus_id; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-110h] BYREF
  char v19[240]; // [rsp+60h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 22 dungeon_scene_ptr:1014 64 16 15 entity_ptr:1024 96 56 13 temp_map:1021";
  *(_QWORD *)(v1 + 16) = FungusFighterRuntimeMgr::removeFungusMonsters;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 32));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "removeFungusMonsters",
      1017);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v18,
      (const char (*)[45])"[FungusFighter] dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    std::unordered_map<unsigned int,unsigned int>::unordered_map(
      (std::unordered_map<unsigned int,unsigned int> *const)(v1 + 96),
      &this->alive_fungus_map_);
    __for_range = (std::unordered_map<unsigned int,unsigned int> *)(v1 + 96);
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin((std::unordered_map<unsigned int,unsigned int> *const)(v1 + 96))._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end((std::unordered_map<unsigned int,unsigned int> *const)(v1 + 96))._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      entity_id = std::get<0ul,unsigned int const,unsigned int>(v15);
      fungus_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
      v4 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = *(_QWORD *)v4->baseclass_0 + 120LL;
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      v6 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v5;
      if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v6(v1 + 64, v4, *entity_id);
      if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "removeFungusMonsters",
          1027);
        v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v18,
               (const char (*)[51])"[FungusFighter] entity_ptr is nullptr, entity_id: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, entity_id);
        v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", fungus_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, fungus_id);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      else
      {
        v10 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v11 = *(_QWORD *)v10 + 128LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, VisionContext *))v11)(v10, &VisionContext::miss_context);
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v1 + 64));
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    std::unordered_map<unsigned int,unsigned int>::clear(&this->alive_fungus_map_);
    std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v1 + 96));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1036: range 00000000161E9AB8-00000000161E9BA2
uint32_t __cdecl FungusFighterRuntimeMgr::getCurDeadFungusMonsterNum(FungusFighterRuntimeMgr *const this)
{
  bool *p_is_alive; // rax
  uint32_t dead_num; // [rsp+1Ch] [rbp-34h]
  std::unordered_map<unsigned int,FungusFighterMonsterData>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,FungusFighterMonsterData>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,FungusFighterMonsterData> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,FungusFighterMonsterData> *v7; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *fungus_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *monster_data; // [rsp+48h] [rbp-8h]

  dead_num = 0;
  __for_range = &this->cur_runtime_data_.monster_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::begin(&this->cur_runtime_data_.monster_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,FungusFighterMonsterData>::end(&this->cur_runtime_data_.monster_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,FungusFighterMonsterData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator*(&__for_begin);
    fungus_id = std::get<0ul,unsigned int const,FungusFighterMonsterData>(v7);
    monster_data = (std::tuple_element<1,const std::pair<unsigned int const,FungusFighterMonsterData> >::type *)std::get<1ul,unsigned int const,FungusFighterMonsterData>(v7);
    p_is_alive = &monster_data->is_alive;
    if ( *(_BYTE *)(((unsigned __int64)p_is_alive >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_alive & 7) >= *(_BYTE *)(((unsigned __int64)p_is_alive >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_alive);
    }
    if ( !monster_data->is_alive )
      ++dead_num;
    std::__detail::_Node_iterator<std::pair<unsigned int const,FungusFighterMonsterData>,false,false>::operator++(&__for_begin);
  }
  return dead_num;
};

// Line 1049: range 00000000161E9BA4-00000000161EA2A7
void __cdecl FungusFighterRuntimeMgr::calAndRecordFinalScore(
        FungusFighterRuntimeMgr *const this,
        uint32_t *final_score,
        bool *is_new_record)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __m128i base_time_score_low; // xmm0
  float time_param; // xmm1_4
  __m128i v9; // xmm0
  float defend_param; // xmm1_4
  __m128i v11; // xmm0
  float die_param; // xmm1_4
  float v13; // xmm0_4
  uint32_t v14; // edi
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  unsigned int score; // [rsp+2Ch] [rbp-B4h]
  float scorea; // [rsp+2Ch] [rbp-B4h]
  float base_time_score; // [rsp+30h] [rbp-B0h]
  float used_time_score; // [rsp+34h] [rbp-ACh]
  float defend_score; // [rsp+38h] [rbp-A8h]
  float dead_score; // [rsp+3Ch] [rbp-A4h]
  ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-A0h]
  const data::FungusTrainingDungeonExcelConfig *training_config_ptr; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v30; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-80h] BYREF
  char v32[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 dungeon_id:1051";
  *(_QWORD *)(v3 + 16) = FungusFighterRuntimeMgr::calAndRecordFinalScore;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 32) = this->cur_runtime_data_.dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v30);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v30);
  training_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(
                          config_mgr,
                          *(_DWORD *)(v3 + 32));
  if ( training_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->base_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&training_config_ptr->base_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    score = LODWORD(training_config_ptr->base_score);
    if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->base_time_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)training_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&training_config_ptr->base_time_score >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    base_time_score_low = (__m128i)LODWORD(training_config_ptr->base_time_score);
    base_time_score = training_config_ptr->base_time_score;
    if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->time_param >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&training_config_ptr->time_param >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)base_time_score_low.m128i_i64 = __asan_report_load4();
    }
    time_param = training_config_ptr->time_param;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.total_used_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.total_used_time >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)base_time_score_low.m128i_i64 = __asan_report_load4();
    }
    *(float *)base_time_score_low.m128i_i32 = SAFE_MULTIPLY<float,float>(
                                                (float)(int)this->cur_runtime_data_.total_used_time,
                                                time_param);
    used_time_score = COERCE_FLOAT(_mm_cvtsi128_si32(base_time_score_low));
    v9 = (__m128i)LODWORD(base_time_score);
    if ( base_time_score > used_time_score )
    {
      v9 = _mm_cvtsi32_si128(score);
      *(float *)v9.m128i_i32 = SAFE_ADD<float,float>(*(float *)v9.m128i_i32, base_time_score - used_time_score);
      score = _mm_cvtsi128_si32(v9);
    }
    if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->defend_param >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&training_config_ptr->defend_param >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)v9.m128i_i64 = __asan_report_load4();
    }
    defend_param = training_config_ptr->defend_param;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gadget_life_percentage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)v9.m128i_i64 = __asan_report_load4();
    }
    *(float *)v9.m128i_i32 = SAFE_MULTIPLY<float,float>((float)(int)this->gadget_life_percentage_, defend_param);
    defend_score = COERCE_FLOAT(_mm_cvtsi128_si32(v9));
    v11 = _mm_cvtsi32_si128(score);
    *(float *)v11.m128i_i32 = SAFE_ADD<float,float>(*(float *)v11.m128i_i32, defend_score);
    scorea = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
    if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->die_param >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)training_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&training_config_ptr->die_param >> 3)
                                                                          + 0x7FFF8000) )
    {
      *(double *)v11.m128i_i64 = __asan_report_load4();
    }
    die_param = training_config_ptr->die_param;
    if ( *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_fungus_num_ >> 3) + 0x7FFF8000) )
    {
      *(double *)v11.m128i_i64 = __asan_report_load4();
    }
    *(float *)v11.m128i_i32 = SAFE_MULTIPLY<float,float>((float)(int)this->dead_fungus_num_, die_param);
    dead_score = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
    if ( scorea < dead_score )
      v13 = 0.0;
    else
      v13 = scorea - dead_score;
    v14 = (int)v13;
    if ( *(_BYTE *)(((unsigned __int64)final_score >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)final_score & 7) + 3) >= *(_BYTE *)(((unsigned __int64)final_score >> 3) + 0x7FFF8000) )
    {
      v14 = (unsigned int)final_score;
      __asan_report_store4(final_score);
    }
    *final_score = v14;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    FungusFighterActivity::recordFinalScore(this->activity_, *(_DWORD *)(v3 + 32), final_score, is_new_record);
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "calAndRecordFinalScore",
      1076);
    v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v31,
            (const char (*)[30])"[FungusFighter] final_score: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, final_score);
    v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])", dungeon_id: ");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
    v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v18, (const char (*)[18])", is_new_record: ");
    if ( *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_new_record & 7) >= *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_new_record);
    }
    common::milog::MiLogStream::operator<<(v19, *is_new_record);
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "calAndRecordFinalScore",
      1056);
    v6 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
           &v31,
           (const char (*)[77])"[FungusFighter] failed to findFungusTrainingDungeonExcelConfig, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v31);
  }
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1080: range 00000000161EA2A8-00000000161EA985
void __cdecl FungusFighterRuntimeMgr::transferPlayerToSpecifiedPos(
        FungusFighterRuntimeMgr *const this,
        const data::FungusTrainingDungeonExcelConfig *training_config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  Scene *v10; // rax
  bool v11; // r14
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
  PlayerSceneComp *SceneComp; // [rsp+8h] [rbp-118h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-100h]
  const PointScriptConfig *point_config_ptr; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-F0h] BYREF
  TransferReason p_reason; // [rsp+50h] [rbp-D0h] BYREF
  char v28[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 20 fungus_group_id:1081 48 4 20 point_config_id:1088 64 16 14 scene_ptr:1095";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::transferPlayerToSpecifiedPos;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&training_config->fungus_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)training_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&training_config->fungus_group_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 32) = training_config->fungus_group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v5->design_config.lua_config_mgr, *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( group_script_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&training_config->transfer_point_config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&training_config->transfer_point_config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = training_config->transfer_point_config_id;
    point_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, *(_DWORD *)(v2 + 48));
    if ( point_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "transferPlayerToSpecifiedPos",
          1098);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v26,
          (const char (*)[37])"[FungusFighter] player not on scene.");
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = Player::getSceneComp(this->player_);
        TransferReason::TransferReason(&p_reason, ENTER_REASON_FUNGUS_FIGHTER_TRANSFER);
        v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v11 = PlayerSceneComp::jumpToScene(SceneComp, v10, &point_config_ptr->pos, &point_config_ptr->rot, 0, &p_reason) == 0;
        TransferReason::~TransferReason(&p_reason);
        if ( v11 )
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "transferPlayerToSpecifiedPos",
            1103);
          v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v26,
                  (const char (*)[28])"[FungusFighter] dungeon_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  &training_config->dungeon_id);
          v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v13,
                  (const char (*)[21])" move player to pos:");
          v15 = operator<<(v14, &point_config_ptr->pos);
          v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" rot:");
          operator<<(v16, &point_config_ptr->rot);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "transferPlayerToSpecifiedPos",
            1107);
          v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v26,
                  (const char (*)[28])"[FungusFighter] dungeon_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  &training_config->dungeon_id);
          v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v18,
                  (const char (*)[21])" move player to pos:");
          v20 = operator<<(v19, &point_config_ptr->pos);
          v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" rot:");
          v22 = operator<<(v21, &point_config_ptr->rot);
          common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" failed.");
        }
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "transferPlayerToSpecifiedPos",
        1092);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v26,
             (const char (*)[33])"[FungusFighter] point config id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             v8,
             (const char (*)[29])" NOT found, fungus_group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "transferPlayerToSpecifiedPos",
      1085);
    v6 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           &v26,
           (const char (*)[64])"[FungusFighter] group script config nullptr , fungus_group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  if ( v28 == (char *)v2 )
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

// Line 1112: range 00000000161EA986-00000000161EADA3
int32_t __cdecl FungusFighterRuntimeMgr::getSkillCount(FungusFighterRuntimeMgr *const this, uint32_t *skill_count)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  uint32_t ActivityId; // eax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  AbilityComp *AbilityComp; // rax
  uint32_t v12; // edi
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  float sgv_value; // [rsp+1Ch] [rbp-B4h]
  const ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-B0h]
  const data::FungusBaseExcelConfig *base_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 team_ptr:1114";
  *(_QWORD *)(v3 + 16) = FungusFighterRuntimeMgr::getSkillCount;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getAvatarComp(this->player_);
  PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v3 + 32));
  if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "getSkillCount",
      1117);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v19,
           (const char (*)[53])"[FungusFighter] getTeamEntity team_ptr is null. uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ActivityId = BaseActivity::getActivityId(this->activity_);
    base_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusBaseExcelConfig(config_mgr, ActivityId);
    if ( base_config_ptr )
    {
      v10 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      AbilityComp = Creature::getAbilityComp(v10);
      *(float *)v2.m128i_i32 = AbilityComp::getDynamicValue<float>(AbilityComp, &base_config_ptr->skill_name);
      sgv_value = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
      v12 = (int)sgv_value;
      if ( *(_BYTE *)(((unsigned __int64)skill_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_count >> 3) + 0x7FFF8000) )
      {
        v12 = (unsigned int)skill_count;
        __asan_report_store4(skill_count);
      }
      *skill_count = v12;
      v7 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "getSkillCount",
        1124);
      v9 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v19,
             (const char (*)[64])"[FungusFighter] findFungusBaseExcelConfig failed, activity_id: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = BaseActivity::getActivityId(this->activity_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v7 = -1;
    }
  }
  std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v3 + 32));
  result = v7;
  if ( v20 == (char *)v3 )
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

// Line 1133: range 00000000161EADA4-00000000161EB5EA
int32_t __cdecl FungusFighterRuntimeMgr::getCurGadgetLifePercentage(
        FungusFighterRuntimeMgr *const this,
        uint32_t *gadget_life_percentage)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  float CurHp; // xmm0_4
  uint32_t v21; // edi
  int32_t result; // eax
  float max_hp; // [rsp+10h] [rbp-120h]
  ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-118h]
  const data::FungusTrainingDungeonExcelConfig *training_config_ptr; // [rsp+20h] [rbp-110h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v27; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 15 dungeon_id:1140 48 4 21 gallery_group_id:1154 64 16 22 dungeon_scene_ptr:1134 96 16 14"
                        " group_ptr:1155 128 16 15 gadget_ptr:1162";
  *(_QWORD *)(v3 + 16) = FungusFighterRuntimeMgr::getCurGadgetLifePercentage;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "getCurGadgetLifePercentage",
      1137);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v28,
      (const char (*)[45])"[FungusFighter] dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)v2.m128i_i64 = __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = this->cur_runtime_data_.dungeon_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v27);
    training_config_ptr = data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(
                            config_mgr,
                            *(_DWORD *)(v3 + 32));
    if ( training_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 128));
      p_gallery_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128))->design_config.txt_config_mgr.gallery_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&training_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        *(double *)v2.m128i_i64 = __asan_report_load4();
      }
      gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                             p_gallery_config_mgr,
                             training_config_ptr->gallery_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
      if ( gallery_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->control_group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          *(double *)v2.m128i_i64 = __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = gallery_config_ptr->control_group_id;
        v10 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Scene::findGroup((Scene *const)(v3 + 96), v10);
        if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "getCurGadgetLifePercentage",
            1158);
          v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v28,
                  (const char (*)[45])"[FungusFighter] findGroup failed, group_id: ");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v3 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v12,
                  (const char (*)[15])", dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v28);
          v6 = -1;
        }
        else
        {
          v14 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr->defend_config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)training_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&training_config_ptr->defend_config_id >> 3)
                                                                               + 0x7FFF8000) )
          {
            *(double *)v2.m128i_i64 = __asan_report_load4();
          }
          Group::findEntityByConfigId<Gadget>((Group *const)(v3 + 128), v14);
          if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
              "getCurGadgetLifePercentage",
              1165);
            v15 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                    &v28,
                    (const char (*)[77])"[FungusFighter] succ settle defend dungeon cannnot find gadget, dungeon_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v28);
            v6 = -1;
          }
          else
          {
            v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            *(float *)v2.m128i_i32 = Creature::getMaxHp(v16);
            max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
            if ( max_hp >= 0.00000011920929 )
            {
              v19 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              CurHp = Creature::getCurHp(v19);
              v21 = (int)(float)(SAFE_MULTIPLY<float,float>(CurHp, 100.0) / max_hp);
              if ( *(_BYTE *)(((unsigned __int64)gadget_life_percentage >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)gadget_life_percentage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_life_percentage >> 3)
                                                                                         + 0x7FFF8000) )
              {
                v21 = (unsigned int)gadget_life_percentage;
                __asan_report_store4(gadget_life_percentage);
              }
              *gadget_life_percentage = v21;
              v6 = 0;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "getCurGadgetLifePercentage",
                1171);
              v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      &v28,
                      (const char (*)[17])"invalid max hp: ");
              v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
              common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v17, v18);
              common::milog::MiLogStream::~MiLogStream(&v28);
              v6 = -1;
            }
          }
          std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 128));
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "getCurGadgetLifePercentage",
          1151);
        v9 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
               &v28,
               (const char (*)[60])"[FungusFighter] findGalleryExcelConfig failed, gallery_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &training_config_ptr->gallery_id);
        common::milog::MiLogStream::~MiLogStream(&v28);
        v6 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "getCurGadgetLifePercentage",
        1145);
      v7 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
             &v28,
             (const char (*)[77])"[FungusFighter] failed to findFungusTrainingDungeonExcelConfig, dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v6 = -1;
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
  result = v6;
  if ( v29 == (char *)v3 )
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

// Line 1180: range 00000000161EB5EC-00000000161EBC27
void __fastcall FungusFighterRuntimeMgr::logFungusDungeonStart(
        FungusFighterRuntimeMgr *const this,
        data::FungusTrainingDungeonType type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // r14d
  const data::ActivityFungusFighterExcelConfigMgrBase *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  Scene *v8; // rax
  uint32_t GalleryComp; // eax
  common::milog::MiLogStream *v10; // rax
  int v11; // r14d
  std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  int v13; // eax
  common::milog::MiLogStream *v14; // rax
  uint32_t dungeon_id; // [rsp+1Ch] [rbp-104h]
  ActivityFungusFighterExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-100h]
  ActivityFungusFighterExcelConfigMgr *config_mgr_0; // [rsp+30h] [rbp-F0h]
  const data::FungusTrainingDungeonExcelConfig *training_config_ptr_0; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 15 gallery_id:1199 48 4 9 type:1179 64 16 22 dungeon_scene_ptr:1186 96 16 25 training_gallery_ptr:1200";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::logFungusDungeonStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = type;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dungeon_id = this->cur_runtime_data_.dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(config_mgr, dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "logFungusDungeonStart",
      1189);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v20,
      (const char (*)[45])"[FungusFighter] dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    config_mgr_0 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_fungus_fighter_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v19);
    v6 = config_mgr_0;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    training_config_ptr_0 = data::ActivityFungusFighterExcelConfigMgrBase::findFungusTrainingDungeonExcelConfig(
                              v6,
                              this->cur_runtime_data_.dungeon_id);
    if ( training_config_ptr_0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&training_config_ptr_0->gallery_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&training_config_ptr_0->gallery_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = training_config_ptr_0->gallery_id;
      v8 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GalleryComp = (unsigned int)Scene::getGalleryComp(v8);
      SceneGalleryComp::findGallery((SceneGalleryComp *const)(v2 + 96), GalleryComp);
      if ( std::operator==<BaseGallery>(0LL, (const std::shared_ptr<BaseGallery> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "logFungusDungeonStart",
          1203);
        v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v20,
                (const char (*)[46])"[FungusFighter] findGallery fail, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v20);
        v11 = 0;
      }
      else
      {
        v12 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        BaseGallery::getTransaction[abi:cxx11]((std::string *)&v20, v12);
        std::string::operator=(&this->room_transaction_, &v20);
        std::string::~string(&v20);
        v11 = 1;
      }
      std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v2 + 96));
      if ( v11 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "logFungusDungeonStart",
        1196);
      v7 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
             &v20,
             (const char (*)[77])"[FungusFighter] failed to findFungusTrainingDungeonExcelConfig, dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->cur_runtime_data_.dungeon_id);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v5 = 0;
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  if ( v5 )
  {
    v13 = *(_DWORD *)(v2 + 48);
    if ( v13 == 1 )
    {
      FungusFighterRuntimeMgr::logFungusAttackDungeonStart(this);
    }
    else if ( v13 == 2 )
    {
      FungusFighterRuntimeMgr::logFungusDefendDungeonStart(this);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "logFungusDungeonStart",
        1218);
      v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v20,
              (const char (*)[36])"unknown FungusTrainingDungeonType: ");
      common::milog::MiLogStream::operator<<<data::FungusTrainingDungeonType,(data::FungusTrainingDungeonType*)0>(
        v14,
        (const data::FungusTrainingDungeonType *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
  }
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
};

// Line 1224: range 00000000161EBC28-00000000161EBF88
void __fastcall FungusFighterRuntimeMgr::logFungusDungeonSettle(
        FungusFighterRuntimeMgr *const this,
        uint32_t result,
        uint32_t score,
        uint32_t time,
        data::FungusTrainingDungeonType type)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 14 cur_round:1225 64 4 9 type:1223";
  *(_QWORD *)(v5 + 16) = FungusFighterRuntimeMgr::logFungusDungeonSettle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = type;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 48) = this->cur_runtime_data_.cur_round;
  v8 = *(_DWORD *)(v5 + 64);
  if ( v8 == 1 )
  {
    if ( !*(_DWORD *)(v5 + 48) || *(_DWORD *)(v5 + 48) > 3u )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "logFungusDungeonSettle",
        1231);
      v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v15,
             (const char (*)[28])"cur_round has wrong value: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    FungusFighterRuntimeMgr::logFungusAttackDungeonSettle(this, result, score, time);
  }
  else if ( v8 == 2 )
  {
    if ( *(_DWORD *)(v5 + 48) != 1 )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
        "logFungusDungeonSettle",
        1238);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v15,
              (const char (*)[28])"cur_round has wrong value: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    FungusFighterRuntimeMgr::logFungusDefendDungeonSettle(this, result, score, time);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "logFungusDungeonSettle",
      1243);
    v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v15,
            (const char (*)[36])"unknown FungusTrainingDungeonType: ");
    common::milog::MiLogStream::operator<<<data::FungusTrainingDungeonType,(data::FungusTrainingDungeonType*)0>(
      v11,
      (const data::FungusTrainingDungeonType *)(v5 + 64));
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v5 )
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

// Line 1249: range 00000000161EBF8A-00000000161ECB9F
void __cdecl FungusFighterRuntimeMgr::logSetBasicInfo(
        FungusFighterRuntimeMgr *const this,
        proto_log::FungusDungeonBasicLog *basic_info)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rdx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(unsigned __int64, std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v16; // r15d
  void *const *it; // r14
  google::protobuf::RepeatedPtrField<proto_log::FungusStateLog>::iterator v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  proto_log::FungusStateLog *v27; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v28; // rdx
  common::milog::MiLogStream *v29; // rax
  std::unordered_map<unsigned int,FungusFighterMonsterData>::mapped_type *v30; // rdx
  uint32_t fungus_id; // [rsp+2Ch] [rbp-194h]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-190h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-188h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-180h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-178h]
  google::protobuf::RepeatedPtrField<proto_log::FungusStateLog> *fungus_alive_vec; // [rsp+50h] [rbp-170h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+58h] [rbp-168h]
  std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-160h]
  proto_log::FungusStateLog *fungus_data_0; // [rsp+68h] [rbp-158h]
  const std::pair<unsigned int const,unsigned int> *v40; // [rsp+70h] [rbp-150h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *entity_id; // [rsp+78h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *fungus_id_0; // [rsp+80h] [rbp-140h]
  proto_log::FungusStateLog *fungus_data; // [rsp+88h] [rbp-138h]
  common::milog::MiLogStream v44; // [rsp+90h] [rbp-130h] BYREF
  char v45[272]; // [rsp+B0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 16 skill_count:1251 64 4 11 max_hp:1294 80 4 14 fungus_id:1306 96 8 22 monster_data_iter:"
                        "1287 128 16 22 dungeon_scene_ptr:1258 160 16 15 entity_ptr:1275 192 16 16 monster_ptr:1281";
  *(_QWORD *)(v3 + 16) = FungusFighterRuntimeMgr::logSetBasicInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_runtime_data_ >> 3) + 0x7FFF8000) <= 3 )
  {
    *(double *)v2.m128i_i64 = __asan_report_load4();
  }
  proto_log::FungusDungeonBasicLog::set_dungeon_id(basic_info, this->cur_runtime_data_.dungeon_id);
  *(_DWORD *)(v3 + 48) = 0;
  if ( FungusFighterRuntimeMgr::getSkillCount(this, (uint32_t *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "logSetBasicInfo",
      1254);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v44,
      (const char (*)[39])"[FungusFighter] get skill count failed");
    common::milog::MiLogStream::~MiLogStream(&v44);
  }
  proto_log::FungusDungeonBasicLog::set_skill_count(basic_info, *(_DWORD *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 128));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 128)) )
  {
    __for_range = &this->cur_runtime_data_.choosen_monster_vec;
    *(std::vector<unsigned int>::iterator *)(v3 + 96) = std::vector<unsigned int>::begin(&this->cur_runtime_data_.choosen_monster_vec);
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96),
              &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        *(double *)v2.m128i_i64 = __asan_report_load4();
      }
      fungus_id = *v6;
      fungus_data = proto_log::FungusDungeonBasicLog::add_fungus_choosen_list(basic_info);
      proto_log::FungusStateLog::set_fungus_id(fungus_data, fungus_id);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 96));
    }
    fungus_alive_vec = proto_log::FungusDungeonBasicLog::mutable_fungus_choosen_list(basic_info);
    __for_range_0 = &this->alive_fungus_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->alive_fungus_map_)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end_0) )
    {
      v40 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      entity_id = std::get<0ul,unsigned int const,unsigned int>(v40);
      fungus_id_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v40);
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = *(_QWORD *)v7->baseclass_0 + 120LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      v9 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v8;
      if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
      {
        *(double *)v2.m128i_i64 = __asan_report_load4();
      }
      v9(v3 + 160, v7, *entity_id);
      if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "logSetBasicInfo",
          1278);
        v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v44,
                (const char (*)[51])"[FungusFighter] entity_ptr is nullptr, entity_id: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, entity_id);
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])", fungus_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, fungus_id_0);
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
      else
      {
        std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        toPtr<Monster,Entity>((Entity *)(v3 + 192));
        if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v3 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
            "logSetBasicInfo",
            1284);
          v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v44,
                  (const char (*)[55])"[FungusFighter] entity ptr is not monster, entity_id: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, entity_id);
          v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v14,
                  (const char (*)[14])", fungus_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, fungus_id_0);
          common::milog::MiLogStream::~MiLogStream(&v44);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)fungus_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)fungus_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fungus_id_0 >> 3)
                                                                          + 0x7FFF8000) )
          {
            *(double *)v2.m128i_i64 = __asan_report_load4();
          }
          v16 = *fungus_id_0;
          it = google::protobuf::RepeatedPtrField<proto_log::FungusStateLog>::end(fungus_alive_vec).it_;
          v18.it_ = google::protobuf::RepeatedPtrField<proto_log::FungusStateLog>::begin(fungus_alive_vec).it_;
          *(google::protobuf::internal::RepeatedPtrIterator<proto_log::FungusStateLog> *)(v3 + 96) = std::find_if<google::protobuf::internal::RepeatedPtrIterator<proto_log::FungusStateLog>,FungusFighterRuntimeMgr::logSetBasicInfo(proto_log::FungusDungeonBasicLog &)::{lambda(google::protobuf::internal::RepeatedPtrIterator<proto_log::FungusStateLog> &)#1}>(v18, (google::protobuf::internal::RepeatedPtrIterator<proto_log::FungusStateLog>)it, (FungusFighterRuntimeMgr::logSetBasicInfo::<lambda(auto:23&)>)v16);
          __for_end._M_current = (unsigned int *)google::protobuf::RepeatedPtrField<proto_log::FungusStateLog>::end(fungus_alive_vec).it_;
          if ( google::protobuf::internal::RepeatedPtrIterator<proto_log::FungusStateLog>::operator==(
                 (const google::protobuf::internal::RepeatedPtrIterator<proto_log::FungusStateLog> *const)(v3 + 96),
                 (const google::protobuf::internal::RepeatedPtrIterator<proto_log::FungusStateLog>::iterator *)&__for_end) )
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
              "logSetBasicInfo",
              1290);
            v19 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                    &v44,
                    (const char (*)[71])"[FungusFighter] cannot find fungus_id in fungus_alive_vec, fungus_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, fungus_id_0);
            common::milog::MiLogStream::~MiLogStream(&v44);
          }
          else
          {
            v20 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            *(float *)v2.m128i_i32 = Creature::getMaxHp(v20);
            *(_DWORD *)(v3 + 64) = _mm_cvtsi128_si32(v2);
            v21 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
            *(float *)v2.m128i_i32 = Creature::getCurHp(v21);
            *(_DWORD *)(v3 + 80) = _mm_cvtsi128_si32(v2);
            v2 = (__m128i)0x34000000u;
            if ( *(float *)(v3 + 64) > 0.00000011920929
              && (v2 = (__m128i)0x34000000u, *(float *)(v3 + 80) > 0.00000011920929) )
            {
              v27 = google::protobuf::internal::RepeatedPtrIterator<proto_log::FungusStateLog>::operator->((const google::protobuf::internal::RepeatedPtrIterator<proto_log::FungusStateLog> *const)(v3 + 96));
              v2 = (__m128i)0x42C80000u;
              *(float *)v2.m128i_i32 = SAFE_MULTIPLY<float,float>(100.0, *(float *)(v3 + 80) / *(float *)(v3 + 64));
              proto_log::FungusStateLog::set_hp(v27, *(float *)v2.m128i_i32);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v44,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
                "logSetBasicInfo",
                1299);
              v22 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      &v44,
                      (const char (*)[42])"[FungusFighter] wrong hp status, max_hp: ");
              v23 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, (const float *)(v3 + 64));
              v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v23,
                      (const char (*)[11])", cur_hp: ");
              v25 = common::milog::MiLogStream::operator<<<float,(float *)0>(v24, (const float *)(v3 + 80));
              v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v25,
                      (const char (*)[14])", entity_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, entity_id);
              common::milog::MiLogStream::~MiLogStream(&v44);
            }
          }
        }
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 192));
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 160));
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    __for_range_1 = &this->cur_runtime_data_.backup_monster_vec;
    *(std::vector<unsigned int>::iterator *)(v3 + 96) = std::vector<unsigned int>::begin(&this->cur_runtime_data_.backup_monster_vec);
    __for_end._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 96),
              &__for_end) )
    {
      v28 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 80) = *v28;
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,FungusFighterMonsterData>,unsigned int>(
              &this->cur_runtime_data_.monster_data_map,
              (const unsigned int *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
          "logSetBasicInfo",
          1310);
        v29 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v44,
                (const char (*)[35])"fungus data not found, fungus id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
      else
      {
        fungus_data_0 = proto_log::FungusDungeonBasicLog::add_fungus_backup_list(basic_info);
        proto_log::FungusStateLog::set_fungus_id(fungus_data_0, *(_DWORD *)(v3 + 80));
        v30 = std::unordered_map<unsigned int,FungusFighterMonsterData>::operator[](
                &this->cur_runtime_data_.monster_data_map,
                (const std::unordered_map<unsigned int,FungusFighterMonsterData>::key_type *)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v30->cur_hp_percentage >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v30 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->cur_hp_percentage >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::FungusStateLog::set_hp(fungus_data_0, v30->cur_hp_percentage);
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 96));
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 128));
  if ( v45 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1287: range 000000001622D562-000000001622D5C4
bool __cdecl FungusFighterRuntimeMgr::logSetBasicInfo::_lambda_auto_23___::operator()_proto_log::FungusStateLog_(
        const FungusFighterRuntimeMgr::logSetBasicInfo::<lambda(auto:23&)> *const __closure,
        proto_log::FungusStateLog *n)
{
  google::protobuf::uint32 v2; // ecx

  v2 = proto_log::FungusStateLog::fungus_id(n);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return v2 == __closure->__id;
};

// Line 1320: range 00000000161ECBA0-00000000161ECF61
// local variable allocation has failed, the output may be wrong!
void __cdecl FungusFighterRuntimeMgr::logFungusAttackDungeonStart(FungusFighterRuntimeMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  proto_log::FungusDungeonBasicLog *v6; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  google::protobuf::RepeatedField<unsigned int> *v11; // r14
  Player *v12; // r14
  std::string v13; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int> vec; // [rsp+30h] [rbp-D0h] BYREF
  std::string v16; // [rsp+50h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+70h] [rbp-90h] BYREF

  v13._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 11 holder:1321 64 16 12 log_ptr:1322";
  *(_QWORD *)(v1 + 16) = FungusFighterRuntimeMgr::logFungusAttackDungeonStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)((v13._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)v13._M_string_length);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v16, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xEA2u, v13);
  std::string::~string(&v16);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFungusAttackDungeonStart>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  v6 = proto_log::PlayerLogBodyFungusAttackDungeonStart::mutable_basic_info(v5);
  FungusFighterRuntimeMgr::logSetBasicInfo((FungusFighterRuntimeMgr *const)v13._M_string_length, v6);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v13._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v13._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFungusAttackDungeonStart::set_room_id(v7, *(_DWORD *)(v13._M_string_length + 32));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  proto_log::PlayerLogBodyFungusAttackDungeonStart::set_level_transaction(
    v8,
    (const std::string *)(v13._M_string_length + 176));
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  proto_log::PlayerLogBodyFungusAttackDungeonStart::set_room_transaction(
    v9,
    (const std::string *)(v13._M_string_length + 272));
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  v11 = proto_log::PlayerLogBodyFungusAttackDungeonStart::mutable_fungus_dead_list(v10);
  FungusFighterRuntimeMgr::getAllDeadFungusMonster(&vec, (const FungusFighterRuntimeMgr *const)v13._M_string_length);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&vec, v11);
  std::vector<unsigned int>::~vector(&vec);
  if ( *(_BYTE *)((v13._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = *(Player **)v13._M_string_length;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFungusAttackDungeonStart,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v13._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyFungusAttackDungeonStart> *)(v1 + 64));
  Player::printStatLog(v12, (MessagePtr *)&v13._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v13._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFungusAttackDungeonStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFungusAttackDungeonStart> *const)(v1 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v17 == (char *)v1 )
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

// Line 1332: range 00000000161ECF62-00000000161ED554
void __cdecl FungusFighterRuntimeMgr::logFungusAttackDungeonSettle(
        FungusFighterRuntimeMgr *const this,
        uint32_t result,
        uint32_t score,
        uint32_t time)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  proto_log::FungusDungeonBasicLog *v9; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::vector<unsigned int>::size_type v13; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  std::vector<unsigned int> *p_monster_pool_vec; // rcx
  google::protobuf::uint32 *v17; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  google::protobuf::RepeatedField<unsigned int> *v19; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Player *player; // r14
  std::string v24; // [rsp+0h] [rbp-110h]
  uint32_t timea; // [rsp+Ch] [rbp-104h]
  __int64 scorea; // [rsp+10h] [rbp-100h]
  FungusFighterRuntimeMgr *thisa; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<unsigned int> vec; // [rsp+40h] [rbp-D0h] BYREF
  std::string v31; // [rsp+60h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+80h] [rbp-90h] BYREF

  *(&v24._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v24._anon_0._M_allocated_capacity) = result;
  *(_DWORD *)v24._anon_0._M_local_buf = score;
  HIDWORD(v24._M_string_length) = time;
  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 11 holder:1333 64 16 12 log_ptr:1334";
  *(_QWORD *)(v4 + 16) = FungusFighterRuntimeMgr::logFungusAttackDungeonSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v31, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xEA3u, v24);
  std::string::~string(&v31);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFungusAttackDungeonSettle>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  v9 = proto_log::PlayerLogBodyFungusAttackDungeonSettle::mutable_basic_info(v8);
  FungusFighterRuntimeMgr::logSetBasicInfo(thisa, v9);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFungusAttackDungeonSettle::set_room_id(v10, thisa->cur_runtime_data_.cur_round);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyFungusAttackDungeonSettle::set_level_transaction(
    v11,
    &thisa->cur_runtime_data_.level_transaction);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyFungusAttackDungeonSettle::set_room_transaction(v12, &thisa->room_transaction_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !thisa->cur_runtime_data_.cur_round
    || (v13 = thisa->cur_runtime_data_.cur_round - 1,
        v13 >= std::vector<unsigned int>::size(&thisa->cur_runtime_data_.monster_pool_vec)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "logFungusAttackDungeonSettle",
      1341);
    common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
      (common::milog::MiLogStream *const)&v31,
      (const char (*)[68])"cur_runtime_data_.cur_round outof the range of the monster_pool_vec");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31);
  }
  else
  {
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    p_monster_pool_vec = &thisa->cur_runtime_data_.monster_pool_vec;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v17 = std::vector<unsigned int>::operator[](p_monster_pool_vec, thisa->cur_runtime_data_.cur_round - 1);
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyFungusAttackDungeonSettle::set_resource_id(v15, *v17);
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v19 = proto_log::PlayerLogBodyFungusAttackDungeonSettle::mutable_fungus_dead_list(v18);
    FungusFighterRuntimeMgr::getAllDeadFungusMonster(&vec, thisa);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&vec, v19);
    std::vector<unsigned int>::~vector(&vec);
    v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyFungusAttackDungeonSettle::set_settle_result(v20, HIDWORD(scorea));
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyFungusAttackDungeonSettle::set_time(v21, timea);
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusAttackDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyFungusAttackDungeonSettle::set_score(v22, scorea);
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFungusAttackDungeonSettle,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyFungusAttackDungeonSettle> *)(v4 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  }
  std::shared_ptr<proto_log::PlayerLogBodyFungusAttackDungeonSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFungusAttackDungeonSettle> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v32 == (char *)v4 )
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

// Line 1353: range 00000000161ED556-00000000161ED82F
// local variable allocation has failed, the output may be wrong!
void __cdecl FungusFighterRuntimeMgr::logFungusDefendDungeonStart(FungusFighterRuntimeMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  proto_log::FungusDungeonBasicLog *v6; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *v8; // r14
  std::string v9; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v11; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v9._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 11 holder:1354 64 16 12 log_ptr:1355";
  *(_QWORD *)(v1 + 16) = FungusFighterRuntimeMgr::logFungusDefendDungeonStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)((v9._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)v9._M_string_length);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v11, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xEA4u, v9);
  std::string::~string(&v11);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFungusDefendDungeonStart>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  v6 = proto_log::PlayerLogBodyFungusDefendDungeonStart::mutable_basic_info(v5);
  FungusFighterRuntimeMgr::logSetBasicInfo((FungusFighterRuntimeMgr *const)v9._M_string_length, v6);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  proto_log::PlayerLogBodyFungusDefendDungeonStart::set_transaction(
    v7,
    (const std::string *)(v9._M_string_length + 272));
  if ( *(_BYTE *)((v9._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = *(Player **)v9._M_string_length;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFungusDefendDungeonStart,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v9._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyFungusDefendDungeonStart> *)(v1 + 64));
  Player::printStatLog(v8, (MessagePtr *)&v9._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v9._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFungusDefendDungeonStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFungusDefendDungeonStart> *const)(v1 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v12 == (char *)v1 )
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

// Line 1362: range 00000000161ED830-00000000161EDE00
void __cdecl FungusFighterRuntimeMgr::logFungusDefendDungeonSettle(
        FungusFighterRuntimeMgr *const this,
        uint32_t result,
        uint32_t score,
        uint32_t time)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  proto_log::FungusDungeonBasicLog *v9; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::vector<unsigned int>::size_type v11; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  std::vector<unsigned int> *p_monster_pool_vec; // rcx
  google::protobuf::uint32 *v15; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  google::protobuf::RepeatedField<unsigned int> *v17; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Player *player; // r14
  std::string v23; // [rsp+0h] [rbp-110h]
  uint32_t timea; // [rsp+Ch] [rbp-104h]
  uint32_t scorea; // [rsp+10h] [rbp-100h]
  uint32_t resulta; // [rsp+14h] [rbp-FCh]
  FungusFighterRuntimeMgr *thisa; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<unsigned int> vec; // [rsp+40h] [rbp-D0h] BYREF
  std::string v31; // [rsp+60h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+80h] [rbp-90h] BYREF

  *(&v23._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v23._anon_0._M_allocated_capacity) = result;
  *(_DWORD *)v23._anon_0._M_local_buf = score;
  HIDWORD(v23._M_string_length) = time;
  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 11 holder:1363 64 16 12 log_ptr:1364";
  *(_QWORD *)(v4 + 16) = FungusFighterRuntimeMgr::logFungusDefendDungeonSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v31, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xEA5u, v23);
  std::string::~string(&v31);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFungusDefendDungeonSettle>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  v9 = proto_log::PlayerLogBodyFungusDefendDungeonSettle::mutable_basic_info(v8);
  FungusFighterRuntimeMgr::logSetBasicInfo(thisa, v9);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyFungusDefendDungeonSettle::set_transaction(v10, &thisa->room_transaction_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !thisa->cur_runtime_data_.cur_round
    || (v11 = thisa->cur_runtime_data_.cur_round - 1,
        v11 >= std::vector<unsigned int>::size(&thisa->cur_runtime_data_.monster_pool_vec)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/activity_runtime_mgr/fungus_fighter_runtime_mgr.cpp",
      "logFungusDefendDungeonSettle",
      1369);
    common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
      (common::milog::MiLogStream *const)&v31,
      (const char (*)[68])"cur_runtime_data_.cur_round outof the range of the monster_pool_vec");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31);
  }
  else
  {
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    p_monster_pool_vec = &thisa->cur_runtime_data_.monster_pool_vec;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->cur_runtime_data_.cur_round >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v15 = std::vector<unsigned int>::operator[](p_monster_pool_vec, thisa->cur_runtime_data_.cur_round - 1);
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyFungusDefendDungeonSettle::set_resource_id(v13, *v15);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v17 = proto_log::PlayerLogBodyFungusDefendDungeonSettle::mutable_fungus_dead_list(v16);
    FungusFighterRuntimeMgr::getAllDeadFungusMonster(&vec, thisa);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&vec, v17);
    std::vector<unsigned int>::~vector(&vec);
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyFungusDefendDungeonSettle::set_settle_result(v18, resulta);
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyFungusDefendDungeonSettle::set_time(v19, timea);
    v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_life_percentage_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->gadget_life_percentage_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyFungusDefendDungeonSettle::set_gadget_life_percent(v20, thisa->gadget_life_percentage_);
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDefendDungeonSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyFungusDefendDungeonSettle::set_score(v21, scorea);
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFungusDefendDungeonSettle,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyFungusDefendDungeonSettle> *)(v4 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  }
  std::shared_ptr<proto_log::PlayerLogBodyFungusDefendDungeonSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFungusDefendDungeonSettle> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v32 == (char *)v4 )
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

// Line 1382: range 00000000161EDE02-00000000161EE18B
// local variable allocation has failed, the output may be wrong!
void __cdecl FungusFighterRuntimeMgr::logFungusUseBackup(
        FungusFighterRuntimeMgr *const this,
        const std::vector<unsigned int> *used_fungus)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto_log::FungusDungeonBasicLog *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // rax
  Player *v13; // r14
  std::string used_fungusa; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  used_fungusa._M_string_length = (std::string::size_type)this;
  used_fungusa._M_dataplus._M_p = (std::string::pointer)used_fungus;
  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1383 64 16 12 log_ptr:1384";
  *(_QWORD *)(v2 + 16) = FungusFighterRuntimeMgr::logFungusUseBackup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)((used_fungusa._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)used_fungusa._M_string_length);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v16, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xEA6u, used_fungusa);
  std::string::~string(&v16);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFungusDungeonChange>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v7 = proto_log::PlayerLogBodyFungusDungeonChange::mutable_basic_info(v6);
  FungusFighterRuntimeMgr::logSetBasicInfo((FungusFighterRuntimeMgr *const)used_fungusa._M_string_length, v7);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((used_fungusa._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((used_fungusa._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyFungusDungeonChange::set_room_id(v8, *(_DWORD *)(used_fungusa._M_string_length + 32));
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyFungusDungeonChange::set_level_transaction(
    v9,
    (const std::string *)(used_fungusa._M_string_length + 176));
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyFungusDungeonChange::set_room_transaction(
    v10,
    (const std::string *)(used_fungusa._M_string_length + 272));
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFungusDungeonChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v12 = proto_log::PlayerLogBodyFungusDungeonChange::mutable_fungus_used(v11);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
    (const std::vector<unsigned int> *)used_fungusa._M_dataplus._M_p,
    v12);
  if ( *(_BYTE *)((used_fungusa._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = *(Player **)used_fungusa._M_string_length;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFungusDungeonChange,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&used_fungusa._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyFungusDungeonChange> *)(v2 + 64));
  Player::printStatLog(v13, (MessagePtr *)&used_fungusa._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&used_fungusa._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFungusDungeonChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFungusDungeonChange> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
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
};
