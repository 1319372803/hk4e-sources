// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/irodori_activity.cpp

// Line 42: range 0000000014539C4C-000000001453A12F
int32_t __cdecl IrodoriActivity::fromScheduleBin(IrodoriActivity *const this, const proto::ActivityScheduleBin *bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  const proto::IrodoriChessBin *v6; // rdx
  common::milog::MiLogStream *v7; // rbx
  const proto::IrodoriFlowerBin *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  const proto::IrodoriPoetryBin *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  unsigned int val; // [rsp+10h] [rbp-40h] BYREF
  proto::ActivityScheduleBin::DetailCase Uid; // [rsp+14h] [rbp-3Ch] BYREF
  const proto::IrodoriScheduleBin *schedule_bin; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-30h] BYREF

  if ( proto::ActivityScheduleBin::detail_case(bin) == kIrodoriBin )
  {
    schedule_bin = proto::ActivityScheduleBin::irodori_bin(bin);
    v6 = proto::IrodoriScheduleBin::chess_data(schedule_bin);
    if ( IrodoriActivity::chessFromBin(this, v6) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/irodori_activity.cpp",
        "fromScheduleBin",
        51);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v15,
             (const char (*)[37])"[IRODORI] chess fromBin failed! uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v8 = proto::IrodoriScheduleBin::flower_data(schedule_bin);
      if ( IrodoriActivity::flowerFromBin(this, v8) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/irodori_activity.cpp",
          "fromScheduleBin",
          57);
        v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v15, (const char (*)[11])"[IRODORI] ");
        v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               v9,
               (const char (*)[29])" flower fromBin failed! uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        v10 = proto::IrodoriScheduleBin::poetry_data(schedule_bin);
        if ( IrodoriActivity::poetryFromBin(this, v10) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/irodori_activity.cpp",
            "fromScheduleBin",
            63);
          v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v15, (const char (*)[11])"[IRODORI] ");
          v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                 v11,
                 (const char (*)[29])" poetry fromBin failed! uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          if ( !IrodoriActivity::masterFromBin(this, schedule_bin) )
            return 0;
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/irodori_activity.cpp",
            "fromScheduleBin",
            69);
          v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                 &v15,
                 (const char (*)[37])"[IRODORI] masterFromBin failed! uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
      }
    }
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)&Uid);
    common::milog::MiLogStream::~MiLogStream(&v15);
    return -1;
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/activity/irodori_activity.cpp",
    "fromScheduleBin",
    45);
  v2 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v15,
         (const char (*)[37])"[IRODORI] detail_case mismatch, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v3, (const char (*)[15])", detail_case:");
  Uid = proto::ActivityScheduleBin::detail_case(bin);
  common::milog::MiLogStream::operator<<<proto::ActivityScheduleBin::DetailCase,(proto::ActivityScheduleBin::DetailCase*)0>(
    v4,
    &Uid);
  common::milog::MiLogStream::~MiLogStream(&v15);
  return 0;
};

// Line 76: range 000000001453A130-000000001453A506
int32_t __cdecl IrodoriActivity::toScheduleBin(const IrodoriActivity *const this, proto::ActivityScheduleBin *bin)
{
  proto::IrodoriChessBin *v2; // rdx
  common::milog::MiLogStream *v3; // rbx
  proto::IrodoriFlowerBin *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  proto::IrodoriPoetryBin *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::IrodoriScheduleBin *schedule_bin; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  schedule_bin = proto::ActivityScheduleBin::mutable_irodori_bin(bin);
  v2 = proto::IrodoriScheduleBin::mutable_chess_data(schedule_bin);
  if ( IrodoriActivity::chessToBin(this, v2) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/irodori_activity.cpp",
      "toScheduleBin",
      80);
    v3 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v11,
           (const char (*)[35])"[IRODORI] chess toBin failed! uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_16:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  v4 = proto::IrodoriScheduleBin::mutable_flower_data(schedule_bin);
  if ( IrodoriActivity::flowerToBin(this, v4) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/irodori_activity.cpp",
      "toScheduleBin",
      85);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v11, (const char (*)[11])"[IRODORI] ");
    v3 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           v5,
           (const char (*)[27])" flower toBin failed! uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_16;
  }
  v6 = proto::IrodoriScheduleBin::mutable_poetry_data(schedule_bin);
  if ( IrodoriActivity::poetryToBin(this, v6) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/irodori_activity.cpp",
      "toScheduleBin",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v11, (const char (*)[11])"[IRODORI] ");
    v3 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           v7,
           (const char (*)[27])" poetry toBin failed! uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_16;
  }
  if ( IrodoriActivity::masterToBin(this, schedule_bin) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/irodori_activity.cpp",
      "toScheduleBin",
      95);
    v3 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v11,
           (const char (*)[35])"[IRODORI] masterToBin failed! uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_16;
  }
  return 0;
};

// Line 102: range 000000001453A508-000000001453A9A1
int32_t __cdecl IrodoriActivity::toClient(IrodoriActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  proto::IrodoriChessData *v3; // rdx
  proto::IrodoriFlowerData *v4; // rdx
  proto::IrodoriPoetryData *v5; // rdx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  proto::IrodoriActivityDetailInfo *detail_info; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/irodori_activity.cpp",
      "toClient",
      105);
    v2 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v9,
           (const char (*)[46])"[IRODORI] BaseActivity::toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_20:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
  detail_info = proto::ActivityInfo::mutable_irodori_info(activity_info);
  v3 = proto::IrodoriActivityDetailInfo::mutable_chess_data(detail_info);
  if ( IrodoriActivity::chessToClient(this, v3) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/irodori_activity.cpp",
      "toClient",
      111);
    v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v9,
           (const char (*)[38])"[IRODORI] chess toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_20;
  }
  v4 = proto::IrodoriActivityDetailInfo::mutable_flower_data(detail_info);
  if ( IrodoriActivity::flowerToClient(this, v4) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/irodori_activity.cpp",
      "toClient",
      116);
    v2 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v9,
           (const char (*)[39])"[IRODORI] flower toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_20;
  }
  v5 = proto::IrodoriActivityDetailInfo::mutable_poetry_data(detail_info);
  if ( IrodoriActivity::poetryToClient(this, v5) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/irodori_activity.cpp",
      "toClient",
      121);
    v2 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v9,
           (const char (*)[39])"[IRODORI] poetry toClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_20;
  }
  if ( IrodoriActivity::masterToClient(this, detail_info) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/irodori_activity.cpp",
      "toClient",
      126);
    v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v9,
           (const char (*)[38])"[IRODORI] masterToClient failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_20;
  }
  return 0;
};

// Line 133: range 000000001453A9A2-000000001453A9FF
int32_t __cdecl IrodoriActivity::init(IrodoriActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    IrodoriActivity::registerObserver(this);
  return 0;
};

// Line 143: range 000000001453AA00-000000001453AA51
void __cdecl IrodoriActivity::onPreStart(IrodoriActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->poetry_data_.cur_theme_id);
  }
  this->poetry_data_.cur_theme_id = 1;
};

// Line 149: range 000000001453AA52-000000001453AA6C
void __cdecl IrodoriActivity::onStart(IrodoriActivity *const this)
{
  IrodoriActivity::registerObserver(this);
};

// Line 154: range 000000001453AA6E-000000001453AA88
void __cdecl IrodoriActivity::onSettle(IrodoriActivity *const this)
{
  IrodoriActivity::unregisterObserver(this);
};

// Line 159: range 000000001453AA8A-000000001453AAA4
void __cdecl IrodoriActivity::onLogin(IrodoriActivity *const this)
{
  BaseActivity::onLogin(this);
};

// Line 164: range 000000001453AAA6-000000001453AAC5
void __cdecl IrodoriActivity::onDailyRefresh(IrodoriActivity *const this)
{
  BaseActivity::notifyClientData(this, 0);
};

// Line 169: range 000000001453AAC6-000000001453AC42
void __cdecl IrodoriActivity::onClear(IrodoriActivity *const this)
{
  IrodoriActivity::ChessData::clear(&this->chess_data_);
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::clear(&this->flower_data_.flower_shelf_data_map);
  std::vector<unsigned int>::clear(&this->flower_data_.satisfied_theme_id_vec);
  std::map<unsigned int,IrodoriActivity::PoetryThemeData>::clear(&this->poetry_data_.theme_data_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->poetry_data_.cur_theme_id);
  }
  this->poetry_data_.cur_theme_id = 0;
  std::map<unsigned int,IrodoriMasterLevelData>::clear(&this->master_level_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->master_gallery_id_);
  }
  this->master_gallery_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->master_level_id_);
  }
  this->master_level_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_transaction_no_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->master_transaction_no_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->master_transaction_no_);
  }
  this->master_transaction_no_ = 0;
};

// Line 182: range 000000001453AC44-000000001453AC4E
void __cdecl IrodoriActivity::registerObserver(IrodoriActivity *const this)
{
  ;
};

// Line 187: range 000000001453AC50-000000001453AC5A
void __cdecl IrodoriActivity::unregisterObserver(IrodoriActivity *const this)
{
  ;
};

// Line 192: range 000000001453AC5C-000000001453B496
int32_t __cdecl IrodoriActivity::execAction(IrodoriActivity *const this, const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  IrodoriMasterLevelData *v13; // rax
  unsigned int *v14; // rcx
  IrodoriMasterLevelData *v15; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-138h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-130h] BYREF
  char v23[272]; // [rsp+60h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 level_id:221 64 24 13 level_vec:215 128 64 14 level_data:228";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_OPEN_IRODORI_CHESS_STAGE )
  {
    if ( *(char *)(((unsigned __int64)&this->chess_data_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->chess_data_);
    if ( !this->chess_data_.is_open )
    {
      this->chess_data_.is_open = 1;
      BaseActivity::notifyClientData(this, 0);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "execAction",
        204);
      v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v22,
             (const char (*)[52])"[IRODORI_CHESS] execAction chess already open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
LABEL_36:
    v2 = 0;
    goto LABEL_37;
  }
  if ( type != NEW_ACTIVITY_ACTION_OPEN_IRODORI_MASTER_STAGE )
  {
    v2 = BaseActivity::execAction(this, action_exec);
    goto LABEL_37;
  }
  if ( std::vector<std::string>::empty(&action_exec->param) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "execAction",
      212);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v22,
      (const char (*)[36])"param size not enough, param empty.");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v2 = -1;
    goto LABEL_37;
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
  if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
         &action_exec->param,
         (std::vector<unsigned int> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "execAction",
      218);
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v22, (const char (*)[18])"strToNum failed: ");
    common::milog::MiLogStream::operator<<<std::string>(v8, &action_exec->param);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v2 = -1;
    v9 = 0;
  }
  else
  {
    __for_range = (std::vector<unsigned int> *)(v3 + 64);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = *v10;
      if ( common::tools::MiscUtils::isContains<std::map<unsigned int,IrodoriMasterLevelData>,unsigned int>(
             &this->master_level_map_,
             (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/irodori_activity.cpp",
          "execAction",
          225);
        v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v22,
                (const char (*)[41])"[IRODORI] level is already unlocked, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        IrodoriMasterLevelData::IrodoriMasterLevelData((IrodoriMasterLevelData *const)(v3 + 128));
        if ( IrodoriMasterLevelData::init((IrodoriMasterLevelData *const)(v3 + 128), *(_DWORD *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/irodori_activity.cpp",
            "execAction",
            231);
          v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v22,
                  (const char (*)[33])"[IRODORI] level init failed, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else
        {
          v13 = std::move<IrodoriMasterLevelData &>((IrodoriMasterLevelData *)(v3 + 128));
          v16 = std::map<unsigned int,IrodoriMasterLevelData>::emplace<unsigned int &,IrodoriMasterLevelData>(
                  &this->master_level_map_,
                  (unsigned int *)(v3 + 48),
                  v13,
                  v14,
                  v15);
          if ( !v16.second )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/irodori_activity.cpp",
              "execAction",
              236);
            v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v22,
                    (const char (*)[31])"[IRODORI] duplicate level, id:");
          }
          else
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/irodori_activity.cpp",
              "execAction",
              239);
            v17 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v22,
                    (const char (*)[42])"[IRODORI] master level is open, level_id:");
          }
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        IrodoriMasterLevelData::~IrodoriMasterLevelData((IrodoriMasterLevelData *const)(v3 + 128));
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    BaseActivity::notifyClientData(this, 0);
    v9 = 1;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  if ( v9 )
    goto LABEL_36;
LABEL_37:
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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
  return result;
};

// Line 251: range 000000001453B498-000000001453B531
void __cdecl IrodoriActivity::clearByGm(IrodoriActivity *const this)
{
  IrodoriActivity::ChessData::clear(&this->chess_data_);
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::clear(&this->flower_data_.flower_shelf_data_map);
  std::vector<unsigned int>::clear(&this->flower_data_.satisfied_theme_id_vec);
  std::map<unsigned int,IrodoriActivity::PoetryThemeData>::clear(&this->poetry_data_.theme_data_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->poetry_data_.cur_theme_id);
  }
  this->poetry_data_.cur_theme_id = 1;
};

// Line 262: range 000000001453B532-000000001453B729
int32_t __cdecl IrodoriActivity::flowerFromBin(IrodoriActivity *const this, const proto::IrodoriFlowerBin *bin)
{
  unsigned int v2; // ebx
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::mapped_type *v3; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v4; // rax
  unsigned int *v5; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::key_type __k; // [rsp+1Ch] [rbp-84h] BYREF
  google::protobuf::RepeatedPtrField<proto::IrodoriFlowerShelfBin>::const_iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  google::protobuf::RepeatedPtrField<proto::IrodoriFlowerShelfBin>::const_iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  const google::protobuf::RepeatedPtrField<proto::IrodoriFlowerShelfBin> *__for_range; // [rsp+30h] [rbp-70h]
  const proto::IrodoriFlowerShelfBin *shelf_data_bin; // [rsp+38h] [rbp-68h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-60h]
  const unsigned int *p_flower_id; // [rsp+48h] [rbp-58h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+50h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+70h] [rbp-30h] BYREF

  __for_range = proto::IrodoriFlowerBin::shelf_data_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::IrodoriFlowerShelfBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::IrodoriFlowerShelfBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriFlowerShelfBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    shelf_data_bin = google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriFlowerShelfBin const>::operator*(&__for_begin);
    __for_range_0 = proto::IrodoriFlowerShelfBin::used_flower_count_map(shelf_data_bin);
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_0);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
    while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
    {
      p_flower_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)(p_flower_id + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_flower_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_flower_id + 1) >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v2 = p_flower_id[1];
      __k = proto::IrodoriFlowerShelfBin::gadget_id(shelf_data_bin);
      v3 = std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::operator[](
             &this->flower_data_.flower_shelf_data_map,
             &__k);
      v4 = std::map<unsigned int,unsigned int>::operator[](&v3->used_flower_num_map, p_flower_id);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v4);
      }
      *v5 = v2;
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriFlowerShelfBin const>::operator++(&__for_begin);
  }
  v6 = proto::IrodoriFlowerBin::is_satisfied_theme_list(bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v6, &this->flower_data_.satisfied_theme_id_vec);
  return 0;
};

// Line 275: range 000000001453B72A-000000001453B982
int32_t __cdecl IrodoriActivity::flowerToBin(const IrodoriActivity *const this, proto::IrodoriFlowerBin *bin)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  google::protobuf::Map<unsigned int,unsigned int> *v3; // rax
  unsigned int *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rdx
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-68h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-60h] BYREF
  const std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> *v13; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> >::type *gadget_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> >::type *shelf_data; // [rsp+50h] [rbp-40h]
  proto::IrodoriFlowerShelfBin *shelf_data_bin; // [rsp+58h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v18; // [rsp+68h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+70h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+78h] [rbp-18h]

  __for_range = &this->flower_data_.flower_shelf_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::begin(&this->flower_data_.flower_shelf_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::end(&this->flower_data_.flower_shelf_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,IrodoriActivity::FlowerShelfData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,IrodoriActivity::FlowerShelfData>,false,false>::operator*(&__for_begin);
    gadget_id = std::get<0ul,unsigned int const,IrodoriActivity::FlowerShelfData>(v13);
    shelf_data = (std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> >::type *)std::get<1ul,unsigned int const,IrodoriActivity::FlowerShelfData>(v13);
    shelf_data_bin = proto::IrodoriFlowerBin::add_shelf_data_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::IrodoriFlowerShelfBin::set_gadget_id(shelf_data_bin, *gadget_id);
    __for_range_0 = &shelf_data->used_flower_num_map;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&shelf_data->used_flower_num_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      flower_id = std::get<0ul,unsigned int const,unsigned int>(v18);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v18);
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v2 = *num;
      v3 = proto::IrodoriFlowerShelfBin::mutable_used_flower_count_map(shelf_data_bin);
      v4 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v3, flower_id);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v4);
      }
      *v5 = v2;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,IrodoriActivity::FlowerShelfData>,false,false>::operator++(&__for_begin);
  }
  v6 = proto::IrodoriFlowerBin::mutable_is_satisfied_theme_list(bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->flower_data_.satisfied_theme_id_vec, v6);
  return 0;
};

// Line 290: range 000000001453B984-000000001453BE51
int32_t __cdecl IrodoriActivity::flowerToClient(const IrodoriActivity *const this, proto::IrodoriFlowerData *proto)
{
  std::map<unsigned int,unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  int v6; // esi
  google::protobuf::RepeatedField<unsigned int> *v7; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::const_iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::const_iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-128h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-120h] BYREF
  const std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData> *__for_range; // [rsp+38h] [rbp-118h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+40h] [rbp-110h]
  const std::pair<unsigned int const,unsigned int> *v16; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id_0; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+58h] [rbp-F8h]
  proto::ItemParam *item_param; // [rsp+60h] [rbp-F0h]
  const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> *v20; // [rsp+68h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> >::type *gadget_id; // [rsp+70h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> >::type *shelf_data; // [rsp+78h] [rbp-D8h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+80h] [rbp-D0h]
  const std::pair<unsigned int const,unsigned int> *v24; // [rsp+88h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+90h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+98h] [rbp-B8h]
  char v27[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,unsigned int> *)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 18 flower_num_map:291";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)IrodoriActivity::flowerToClient;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::map<unsigned int,unsigned int>::map(v2 + 1);
  __for_range = &this->flower_data_.flower_shelf_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::begin(&this->flower_data_.flower_shelf_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::end(&this->flower_data_.flower_shelf_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,IrodoriActivity::FlowerShelfData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,IrodoriActivity::FlowerShelfData>,false,false>::operator*(&__for_begin);
    gadget_id = std::get<0ul,unsigned int const,IrodoriActivity::FlowerShelfData>(v20);
    shelf_data = (std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> >::type *)std::get<1ul,unsigned int const,IrodoriActivity::FlowerShelfData>(v20);
    __for_range_0 = &shelf_data->used_flower_num_map;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&shelf_data->used_flower_num_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v24 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      flower_id = std::get<0ul,unsigned int const,unsigned int>(v24);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v24);
      v5 = std::map<unsigned int,unsigned int>::operator[](v2 + 1, flower_id);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v6 = *v5;
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *v5 = v6 + *num;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,IrodoriActivity::FlowerShelfData>,false,false>::operator++(&__for_begin);
  }
  __for_range_1 = v2 + 1;
  __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(v2 + 1)._M_node;
  __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
  {
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
    flower_id_0 = std::get<0ul,unsigned int const,unsigned int>(v16);
    num_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v16);
    item_param = proto::IrodoriFlowerData::add_used_flower_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)flower_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)flower_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ItemParam::set_item_id(item_param, *flower_id_0);
    if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ItemParam::set_count(item_param, *num_0);
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
  }
  v7 = proto::IrodoriFlowerData::mutable_finished_theme_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->flower_data_.satisfied_theme_id_vec, v7);
  std::map<unsigned int,unsigned int>::~map(v2 + 1);
  result = 0;
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 310: range 000000001453BE52-000000001453D295
int32_t __cdecl IrodoriActivity::onEditFlowerCombinationReq(
        IrodoriActivity *const this,
        const proto::IrodoriEditFlowerCombinationReq *req,
        proto::IrodoriEditFlowerCombinationRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t GadgetId; // eax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t DayIndexAfterStart; // ecx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  JsonConfigMgr *p_json_config_mgr; // r14
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  bool v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  uint32_t v37; // esi
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  common::milog::MiLogStream *v41; // rax
  CustomGadgetComp *v42; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  const std::string *v46; // rax
  google::protobuf::uint32 v47; // eax
  Player *player; // r14
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::mapped_type *v49; // rax
  ActivityIrodoriExcelConfigMgr *v50; // rcx
  common::milog::MiLogStream *v51; // rax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::string v54; // [rsp+0h] [rbp-2B0h]
  proto::IrodoriEditFlowerCombinationRsp *rsp_0a; // [rsp+8h] [rbp-2A8h]
  IrodoriActivity *thisa; // [rsp+18h] [rbp-298h]
  unsigned int val; // [rsp+24h] [rbp-28Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-288h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator __for_end; // [rsp+30h] [rbp-280h] BYREF
  const data::IrodoriFlowerThemeExcelConfig *theme_config_ptr; // [rsp+38h] [rbp-278h]
  const data::IrodoriFlowerThemeExcelConfig *theme_config; // [rsp+40h] [rbp-270h]
  const proto::CustomGadgetTreeInfo *info; // [rsp+48h] [rbp-268h]
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *__for_range; // [rsp+50h] [rbp-260h]
  const data::IrodoriFlowerGroupExcelConfig *flower_group_config_ptr; // [rsp+58h] [rbp-258h]
  const proto::CustomCommonNodeInfo *node; // [rsp+60h] [rbp-250h]
  proto_log::PlantFlowerShelfSlotLog *slot_log; // [rsp+68h] [rbp-248h]
  std::shared_ptr<google::protobuf::Message> v67; // [rsp+70h] [rbp-240h] BYREF
  common::milog::MiLogStream v68; // [rsp+80h] [rbp-230h] BYREF
  char v69[528]; // [rsp+A0h] [rbp-210h] BYREF

  *(&v54._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v54._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v54._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 10 holder:385 48 4 13 entity_id:325 64 4 13 gadget_id:332 80 16 13 scene_ptr:312 112 16 "
                        "14 gadget_ptr:326 144 16 26 custom_gadget_comp_ptr:376 176 16 11 log_ptr:386 208 16 13 event_ptr"
                        ":412 240 24 12 node_vec:352 304 48 23 used_flower_num_map:360 384 56 28 pass_part_item_count_map:361";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::onEditFlowerCombinationReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862731] = -218959118;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 80));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "onEditFlowerCombinationReq",
      315);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v68,
           (const char (*)[41])"[IRODORI_FLOWER] scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v68);
    v7 = -1;
    goto LABEL_65;
  }
  v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  OwnerUid = Scene::getOwnerUid(v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( OwnerUid == Player::getUid(this->player_) )
  {
    *(_DWORD *)(v3 + 48) = proto::IrodoriEditFlowerCombinationReq::entity_id(req);
    v14 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    Scene::findEntity<Gadget>((const Scene *const)(v3 + 112), v14);
    if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/irodori_activity.cpp",
        "onEditFlowerCombinationReq",
        329);
      v15 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v68,
              (const char (*)[46])"[IRODORI_FLOWER] findEntity fails, entity_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v68);
      v7 = 504;
      goto LABEL_64;
    }
    v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    *(_DWORD *)(v3 + 64) = Gadget::getGadgetId(v18);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v67);
    p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67)->design_config.txt_config_mgr.activity_irodori_config_mgr;
    v20 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    GadgetId = Gadget::getGadgetId(v20);
    theme_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriFlowerThemeConfigByGadgetId(
                         p_activity_irodori_config_mgr,
                         GadgetId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v67);
    if ( !theme_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/irodori_activity.cpp",
        "onEditFlowerCombinationReq",
        338);
      v22 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
              &v68,
              (const char (*)[67])"[IRODORI_FLOWER] find theme config by gadget id failed, gadget_id:");
      v23 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      val = Gadget::getGadgetId(v23);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream(&v68);
      v7 = -1;
LABEL_64:
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 112));
      goto LABEL_65;
    }
    theme_config = theme_config_ptr;
    DayIndexAfterStart = BaseActivity::getDayIndexAfterStart(this);
    if ( *(_BYTE *)(((unsigned __int64)&theme_config->unlock_day >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&theme_config->unlock_day >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( DayIndexAfterStart < theme_config->unlock_day )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/irodori_activity.cpp",
        "onEditFlowerCombinationReq",
        346);
      v25 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
              &v68,
              (const char (*)[80])"[IRODORI_FLOWER] theme doesn't unlock but gadget has been interacted, theme_id:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &theme_config->theme_id);
      v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v26, (const char (*)[13])", gadget_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v68);
      v7 = -1;
      goto LABEL_64;
    }
    info = proto::IrodoriEditFlowerCombinationReq::combination_info(req);
    std::vector<std::shared_ptr<CustomCommonNodeData>>::vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v3 + 240));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v67);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67)->design_config.json_config_mgr;
    v29 = proto::CustomGadgetTreeInfo::node_list(info);
    LOBYTE(p_json_config_mgr) = JsonConfigMgr::convertCustomTreeInfo(
                                  p_json_config_mgr,
                                  *(_DWORD *)(v3 + 64),
                                  v29,
                                  (std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v3 + 240)) != 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v67);
    if ( (_BYTE)p_json_config_mgr )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/irodori_activity.cpp",
        "onEditFlowerCombinationReq",
        355);
      v30 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v68,
              (const char (*)[58])"[IRODORI_FLOWER] convertCustomTreeInfo failed, gadget_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v68);
      v7 = -1;
LABEL_63:
      std::vector<std::shared_ptr<CustomCommonNodeData>>::~vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v3 + 240));
      goto LABEL_64;
    }
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 304));
    std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 384));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v67);
    v31 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67);
    v32 = JsonConfigMgr::checkCustomTreeInfo(
            &v31->design_config.json_config_mgr,
            (const std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v3 + 240),
            (std::map<unsigned int,unsigned int> *)(v3 + 304),
            (std::unordered_map<unsigned int,unsigned int> *)(v3 + 384)) != 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v67);
    if ( v32 )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "onEditFlowerCombinationReq",
        364);
      v33 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v68,
              (const char (*)[54])"[IRODORI_FLOWER] checkCustomTreeInfo fail, gadget_id:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 64));
      v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
      common::milog::MiLogStream::~MiLogStream(&v68);
      v7 = 831;
      goto LABEL_62;
    }
    v36 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    v37 = Gadget::getGadgetId(v36);
    if ( IrodoriActivity::checkUsedCount(
           this,
           v37,
           (const std::map<unsigned int,unsigned int> *)(v3 + 304),
           (const std::unordered_map<unsigned int,unsigned int> *)(v3 + 384)) )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "onEditFlowerCombinationReq",
        371);
      v38 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v68,
              (const char (*)[51])"[IRODORI_FLOWER] checkUsedCount failed, gadget_id:");
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v3 + 64));
      v40 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v39, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &val);
      common::milog::MiLogStream::~MiLogStream(&v68);
      v7 = 609;
      goto LABEL_62;
    }
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<CustomGadgetComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 144));
    if ( std::operator==<CustomGadgetComp>((const std::shared_ptr<CustomGadgetComp> *)(v3 + 144), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v68,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "onEditFlowerCombinationReq",
        379);
      v41 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
              &v68,
              (const char (*)[68])"[IRODORI_FLOWER] gadget doesn't have custom gadget comp, gadget_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v68);
      v7 = -1;
LABEL_61:
      std::shared_ptr<CustomGadgetComp>::~shared_ptr((std::shared_ptr<CustomGadgetComp> *const)(v3 + 144));
LABEL_62:
      std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 384));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 304));
      goto LABEL_63;
    }
    v42 = std::__shared_ptr_access<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    CustomGadgetComp::updateCustomGadgetInfo(v42, info);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v68, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xDC9u, v54);
    std::string::~string(&v68);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyPlantFlowerCombinationEdit>();
    v44 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
    proto_log::PlayerLogBodyPlantFlowerCombinationEdit::set_gadget_config_id(v44, *(_DWORD *)(v3 + 64));
    __for_range = proto::CustomGadgetTreeInfo::node_list(info);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      node = google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator*(&__for_begin);
      v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
      slot_log = proto_log::PlayerLogBodyPlantFlowerCombinationEdit::add_slot_log(v45);
      v46 = proto::CustomCommonNodeInfo::slot_identifier[abi:cxx11](node);
      proto_log::PlantFlowerShelfSlotLog::set_slot_identifier(slot_log, v46);
      v47 = proto::CustomCommonNodeInfo::config_id(node);
      proto_log::PlantFlowerShelfSlotLog::set_flower_id(slot_log, v47);
      google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v67, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,void>(
      (std::shared_ptr<google::protobuf::Message> *const)(v3 + 208),
      (const std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit> *)(v3 + 176));
    Player::printStatLog(player, (MessagePtr *)(v3 + 208), &v67, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 208));
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v67);
    v49 = std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::operator[](
            &thisa->flower_data_.flower_shelf_data_map,
            (const std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::key_type *)(v3 + 64));
    std::map<unsigned int,unsigned int>::operator=(
      &v49->used_flower_num_map,
      (const std::map<unsigned int,unsigned int> *)(v3 + 304));
    if ( *(_BYTE *)(((unsigned __int64)&theme_config->theme_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&theme_config->theme_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !IrodoriActivity::isThemeAlreadySatisfied(thisa, theme_config->theme_id) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v67);
      v50 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v67)->design_config.txt_config_mgr.activity_irodori_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&theme_config->flower_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&theme_config->flower_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      flower_group_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriFlowerGroupExcelConfig(
                                  v50,
                                  theme_config->flower_group_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v67);
      if ( !flower_group_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/irodori_activity.cpp",
          "onEditFlowerCombinationReq",
          405);
        v51 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v68,
                (const char (*)[48])"flower group config not found, flower_group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &theme_config->flower_group_id);
        common::milog::MiLogStream::~MiLogStream(&v68);
        v7 = -1;
LABEL_60:
        std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit> *const)(v3 + 176));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
        goto LABEL_61;
      }
      if ( *(_BYTE *)(((unsigned __int64)&theme_config->theme_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&theme_config->theme_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( IrodoriActivity::checkFlowerCombinationIsSatisfied(thisa, theme_config->theme_id, info) )
      {
        common::tools::perf::make_shared<IrodoriFinishFlowerThemeEvent,unsigned int const&>(
          (const unsigned int *)(v3 + 208),
          &theme_config->theme_id);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(thisa->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<IrodoriFinishFlowerThemeEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v67,
          (const std::shared_ptr<IrodoriFinishFlowerThemeEvent> *)(v3 + 208));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v67);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v67);
        std::vector<unsigned int>::emplace_back<unsigned int const&>(
          &thisa->flower_data_.satisfied_theme_id_vec,
          &theme_config->theme_id,
          &theme_config->theme_id);
        proto::IrodoriEditFlowerCombinationRsp::set_is_can_take_reward(rsp_0a, 1);
        std::shared_ptr<IrodoriFinishFlowerThemeEvent>::~shared_ptr((std::shared_ptr<IrodoriFinishFlowerThemeEvent> *const)(v3 + 208));
      }
    }
    else
    {
      proto::IrodoriEditFlowerCombinationRsp::set_is_already_finished(rsp_0a, 1);
    }
    BaseActivity::notifyClientData(thisa, 0);
    v7 = 0;
    goto LABEL_60;
  }
  common::milog::MiLogStream::create(
    &v68,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/irodori_activity.cpp",
    "onEditFlowerCombinationReq",
    320);
  v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          &v68,
          (const char (*)[46])"[IRODORI_FLOWER] not in self scene, OwnerUid:");
  v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  *(_DWORD *)(v3 + 64) = Scene::getOwnerUid(v11);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
  v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
  common::milog::MiLogStream::~MiLogStream(&v68);
  v7 = 512;
LABEL_65:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 80));
  result = v7;
  if ( v69 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 430: range 000000001453D296-000000001453D320
bool __cdecl IrodoriActivity::checkFlowerCombinationIsSatisfied(
        const IrodoriActivity *const this,
        uint32_t theme_id,
        const proto::CustomGadgetTreeInfo *combination_info)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool isFlowerCombinationSatisfied; // bl
  std::shared_ptr<Config> v7[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7);
  isFlowerCombinationSatisfied = ActivityIrodoriExcelConfigMgr::isFlowerCombinationSatisfied(
                                   &v3->design_config.txt_config_mgr.activity_irodori_config_mgr,
                                   theme_id,
                                   combination_info);
  std::shared_ptr<Config>::~shared_ptr(v7);
  return isFlowerCombinationSatisfied;
};

// Line 435: range 000000001453D322-000000001453D3F3
bool __fastcall IrodoriActivity::isThemeAlreadySatisfied(const IrodoriActivity *const this, uint32_t theme_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 theme_id:434";
  *(_QWORD *)(v2 + 16) = IrodoriActivity::isThemeAlreadySatisfied;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = theme_id;
  result = common::tools::MiscUtils::isContains<unsigned int>(
             &this->flower_data_.satisfied_theme_id_vec,
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

// Line 440: range 000000001453D3F4-000000001453DCB2
int32_t __cdecl IrodoriActivity::checkUsedCount(
        const IrodoriActivity *const this,
        uint32_t gadget_id,
        const std::map<unsigned int,unsigned int> *used_flower_num_map,
        const std::unordered_map<unsigned int,unsigned int> *pass_part_item_count_map)
{
  std::map<unsigned int,unsigned int> *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  int v8; // esi
  uint32_t ItemCount; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  int32_t v17; // r14d
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-180h] BYREF
  unsigned int Uid; // [rsp+24h] [rbp-17Ch] BYREF
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::const_iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::const_iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-168h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-160h] BYREF
  const std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData> *__for_range; // [rsp+48h] [rbp-158h]
  PlayerItemComp *player_item_comp; // [rsp+50h] [rbp-150h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+58h] [rbp-148h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-140h]
  const std::pair<unsigned int const,unsigned int> *v35; // [rsp+68h] [rbp-138h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *pass_part_item_id; // [rsp+70h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+78h] [rbp-128h]
  const std::pair<unsigned int const,unsigned int> *v38; // [rsp+80h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id_0; // [rsp+88h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+90h] [rbp-110h]
  const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> *v41; // [rsp+98h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> >::type *flower_shelf_gadget_id; // [rsp+A0h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> >::type *flower_shelf_data; // [rsp+A8h] [rbp-F8h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+B0h] [rbp-F0h]
  const std::pair<unsigned int const,unsigned int> *v45; // [rsp+B8h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+C0h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+C8h] [rbp-D8h]
  common::milog::MiLogStream v48; // [rsp+D0h] [rbp-D0h] BYREF
  char v49[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v4 = (std::map<unsigned int,unsigned int> *)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = (std::map<unsigned int,unsigned int> *)v5;
  }
  *(_QWORD *)v4->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v4->_M_t._M_impl._M_header._M_color = "1 48 48 29 total_used_flower_num_map:442";
  v4->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)IrodoriActivity::checkUsedCount;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -202116109;
  std::map<unsigned int,unsigned int>::map(v4 + 1, used_flower_num_map);
  __for_range = &this->flower_data_.flower_shelf_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::begin(&this->flower_data_.flower_shelf_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,IrodoriActivity::FlowerShelfData>::end(&this->flower_data_.flower_shelf_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,IrodoriActivity::FlowerShelfData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v41 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,IrodoriActivity::FlowerShelfData>,false,false>::operator*(&__for_begin);
    flower_shelf_gadget_id = std::get<0ul,unsigned int const,IrodoriActivity::FlowerShelfData>(v41);
    flower_shelf_data = (std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::FlowerShelfData> >::type *)std::get<1ul,unsigned int const,IrodoriActivity::FlowerShelfData>(v41);
    if ( *(_BYTE *)(((unsigned __int64)flower_shelf_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)flower_shelf_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_shelf_gadget_id >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( gadget_id != *flower_shelf_gadget_id )
    {
      __for_range_0 = &flower_shelf_data->used_flower_num_map;
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&flower_shelf_data->used_flower_num_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v45 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        flower_id = std::get<0ul,unsigned int const,unsigned int>(v45);
        num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v45);
        v7 = std::map<unsigned int,unsigned int>::operator[](v4 + 1, flower_id);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v8 = *v7;
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v7 = v8 + *num;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,IrodoriActivity::FlowerShelfData>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_item_comp = Player::getItemComp(this->player_);
  __for_range_1 = v4 + 1;
  __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(v4 + 1)._M_node;
  __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
  {
    v38 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
    flower_id_0 = std::get<0ul,unsigned int const,unsigned int>(v38);
    num_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v38);
    if ( *(_BYTE *)(((unsigned __int64)flower_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)flower_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ItemCount = PlayerItemComp::getItemCount(player_item_comp, *flower_id_0);
    if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( ItemCount < *num_0 )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "checkUsedCount",
        461);
      v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v48,
              (const char (*)[47])"[IRODORI_FLOWER] flower not enough. flower id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, flower_id_0);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" need count:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, num_0);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" has count:");
      if ( *(_BYTE *)(((unsigned __int64)flower_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)flower_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      val = PlayerItemComp::getItemCount(player_item_comp, *flower_id_0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &Uid);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v17 = 609;
      goto LABEL_42;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
  }
  __for_range_2 = pass_part_item_count_map;
  __for_begin_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(pass_part_item_count_map)._M_cur;
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_2)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end_0) )
    {
      v17 = 0;
      goto LABEL_42;
    }
    v35 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_0);
    pass_part_item_id = std::get<0ul,unsigned int const,unsigned int>(v35);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v35);
    if ( *(_BYTE *)(((unsigned __int64)pass_part_item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pass_part_item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pass_part_item_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !PlayerItemComp::hasItemById(player_item_comp, *pass_part_item_id) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v48,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/irodori_activity.cpp",
    "checkUsedCount",
    471);
  v18 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          &v48,
          (const char (*)[53])"[IRODORI_FLOWER] pass part item not enough. item id:");
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, pass_part_item_id);
  v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &Uid);
  common::milog::MiLogStream::~MiLogStream(&v48);
  v17 = 609;
LABEL_42:
  std::map<unsigned int,unsigned int>::~map(v4 + 1);
  result = v17;
  if ( v49 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 480: range 000000001453DCB4-000000001453DF50
void __fastcall IrodoriActivity::finishFlowerThemeByGm(IrodoriActivity *const this, uint32_t theme_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  PlayerEventComp *EventComp; // r14
  const data::IrodoriFlowerThemeExcelConfig *theme_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-A0h] BYREF
  char v9[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 theme_id:479 64 16 13 event_ptr:484";
  *(_QWORD *)(v2 + 16) = IrodoriActivity::finishFlowerThemeByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = theme_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  theme_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriFlowerThemeExcelConfig(
                       &v5->design_config.txt_config_mgr.activity_irodori_config_mgr,
                       *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( theme_config_ptr
    && !common::tools::MiscUtils::isContains<unsigned int>(
          &this->flower_data_.satisfied_theme_id_vec,
          (const unsigned int *)(v2 + 48)) )
  {
    common::tools::perf::make_shared<IrodoriFinishFlowerThemeEvent,unsigned int &>(
      (unsigned int *)(v2 + 64),
      (unsigned int *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr<IrodoriFinishFlowerThemeEvent,void>(
      (std::shared_ptr<BaseEvent> *const)&v8,
      (const std::shared_ptr<IrodoriFinishFlowerThemeEvent> *)(v2 + 64));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v8);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v8);
    std::vector<unsigned int>::emplace_back<unsigned int &>(
      &this->flower_data_.satisfied_theme_id_vec,
      (unsigned int *)(v2 + 48),
      (unsigned int *)&this->flower_data_);
    BaseActivity::notifyClientData(this, 0);
    std::shared_ptr<IrodoriFinishFlowerThemeEvent>::~shared_ptr((std::shared_ptr<IrodoriFinishFlowerThemeEvent> *const)(v2 + 64));
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
};

// Line 493: range 000000001453DF52-000000001453E0C8
int32_t __cdecl IrodoriActivity::poetryFromBin(IrodoriActivity *const this, const proto::IrodoriPoetryBin *bin)
{
  const google::protobuf::RepeatedField<unsigned int> *v2; // rax
  uint32_t v3; // edx
  uint32_t v4; // edx
  std::map<unsigned int,IrodoriActivity::PoetryThemeData>::key_type __k; // [rsp+14h] [rbp-3Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::IrodoriPoetryThemeBin>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  google::protobuf::RepeatedPtrField<proto::IrodoriPoetryThemeBin>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const google::protobuf::RepeatedPtrField<proto::IrodoriPoetryThemeBin> *__for_range; // [rsp+28h] [rbp-28h]
  const proto::IrodoriPoetryThemeBin *theme_bin; // [rsp+30h] [rbp-20h]
  IrodoriActivity::PoetryThemeData *theme_data; // [rsp+38h] [rbp-18h]

  __for_range = proto::IrodoriPoetryBin::theme_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::IrodoriPoetryThemeBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::IrodoriPoetryThemeBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriPoetryThemeBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    theme_bin = google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriPoetryThemeBin const>::operator*(&__for_begin);
    __k = proto::IrodoriPoetryThemeBin::theme_id(theme_bin);
    theme_data = std::map<unsigned int,IrodoriActivity::PoetryThemeData>::operator[](
                   &this->poetry_data_.theme_data_map,
                   &__k);
    v2 = proto::IrodoriPoetryThemeBin::scanned_index_list(theme_bin);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&theme_data->scanned_index_set, v2);
    v3 = proto::IrodoriPoetryThemeBin::selected_line_id(theme_bin);
    if ( *(_BYTE *)(((unsigned __int64)&theme_data->selected_line >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&theme_data->selected_line >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&theme_data->selected_line);
    }
    theme_data->selected_line = v3;
    google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriPoetryThemeBin const>::operator++(&__for_begin);
  }
  v4 = proto::IrodoriPoetryBin::cur_theme_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->poetry_data_.cur_theme_id);
  }
  this->poetry_data_.cur_theme_id = v4;
  IrodoriActivity::updateAllAvaliablePoetryLineIdSet(this);
  return 0;
};

// Line 507: range 000000001453E0CA-000000001453E278
int32_t __cdecl IrodoriActivity::poetryToBin(const IrodoriActivity *const this, proto::IrodoriPoetryBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  std::map<unsigned int,IrodoriActivity::PoetryThemeData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,IrodoriActivity::PoetryThemeData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,IrodoriActivity::PoetryThemeData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> >::type *theme_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> >::type *theme_data; // [rsp+40h] [rbp-10h]
  proto::IrodoriPoetryThemeBin *theme_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::IrodoriPoetryBin::set_cur_theme_id(bin, this->poetry_data_.cur_theme_id);
  __for_range = &this->poetry_data_.theme_data_map;
  __for_begin._M_node = std::map<unsigned int,IrodoriActivity::PoetryThemeData>::begin(&this->poetry_data_.theme_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,IrodoriActivity::PoetryThemeData>::end(&this->poetry_data_.theme_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::PoetryThemeData>>::operator*(&__for_begin);
    theme_id = std::get<0ul,unsigned int const,IrodoriActivity::PoetryThemeData>(v7);
    theme_data = (std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> >::type *)std::get<1ul,unsigned int const,IrodoriActivity::PoetryThemeData>(v7);
    theme_bin = proto::IrodoriPoetryBin::add_theme_bin_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)theme_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)theme_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)theme_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::IrodoriPoetryThemeBin::set_theme_id(theme_bin, *theme_id);
    v2 = proto::IrodoriPoetryThemeBin::mutable_scanned_index_list(theme_bin);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&theme_data->scanned_index_set, v2);
    if ( *(_BYTE *)(((unsigned __int64)&theme_data->selected_line >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&theme_data->selected_line >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IrodoriPoetryThemeBin::set_selected_line_id(theme_bin, theme_data->selected_line);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::PoetryThemeData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 520: range 000000001453E27A-000000001453E63C
int32_t __cdecl IrodoriActivity::poetryToClient(const IrodoriActivity *const this, proto::IrodoriPoetryData *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  IrodoriActivity::PoetryThemeData *p_second; // rcx
  int32_t result; // eax
  std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> >::_Self __y; // [rsp+20h] [rbp-A0h] BYREF
  const std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig> *__for_range; // [rsp+28h] [rbp-98h]
  const std::pair<unsigned int const,data::IrodoriPoetryExcelConfig> *v11; // [rsp+30h] [rbp-90h]
  std::tuple_element<0,const std::pair<unsigned int const,data::IrodoriPoetryExcelConfig> >::type *theme_id; // [rsp+38h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriPoetryExcelConfig> >::type *theme_config; // [rsp+40h] [rbp-80h]
  proto::IrodoriPoetryThemeData *theme_proto; // [rsp+48h] [rbp-78h]
  std::shared_ptr<Config> v15; // [rsp+50h] [rbp-70h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:525";
  *(_QWORD *)(v2 + 16) = IrodoriActivity::poetryToClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::IrodoriPoetryData::set_cur_theme_id(proto, this->poetry_data_.cur_theme_id);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_irodori_config_mgr.irodori_poetry_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false>::operator*(&__for_begin);
    theme_id = std::get<0ul,unsigned int const,data::IrodoriPoetryExcelConfig>(v11);
    theme_config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriPoetryExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriPoetryExcelConfig>(v11);
    theme_proto = proto::IrodoriPoetryData::add_theme_data_list(proto);
    *(std::map<unsigned int,IrodoriActivity::PoetryThemeData>::const_iterator *)(v2 + 32) = std::map<unsigned int,IrodoriActivity::PoetryThemeData>::find(
                                                                                              &this->poetry_data_.theme_data_map,
                                                                                              theme_id);
    __y._M_node = std::map<unsigned int,IrodoriActivity::PoetryThemeData>::end(&this->poetry_data_.theme_data_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> >::_Self *)(v2 + 32),
           &__y) )
    {
      p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::PoetryThemeData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> > *const)(v2 + 32))->second;
      if ( *(_BYTE *)(((unsigned __int64)theme_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)theme_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)theme_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      IrodoriActivity::poetryThemeToClient(this, theme_proto, *theme_id, p_second);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)theme_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)theme_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)theme_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::IrodoriPoetryThemeData::set_theme_id(theme_proto, *theme_id);
      if ( *(_BYTE *)(((unsigned __int64)&theme_config->inspiration_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&theme_config->inspiration_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::IrodoriPoetryThemeData::set_max_progress(theme_proto, theme_config->inspiration_limit);
      if ( *(_BYTE *)(((unsigned __int64)&theme_config->min_inspiration >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)theme_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&theme_config->min_inspiration >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::IrodoriPoetryThemeData::set_min_progress(theme_proto, theme_config->min_inspiration);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriPoetryExcelConfig>,false,false>::operator++(&__for_begin);
  }
  result = 0;
  if ( v16 == (char *)v2 )
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

// Line 542: range 000000001453E63E-000000001453E9A3
__int64 __fastcall IrodoriActivity::poetryThemeToClient(
        const IrodoriActivity *const this,
        proto::IrodoriPoetryThemeData *proto,
        uint32_t theme_id,
        const IrodoriActivity::PoetryThemeData *theme_data)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  google::protobuf::RepeatedField<unsigned int> *v10; // rax
  uint32_t Progress; // eax
  google::protobuf::RepeatedField<unsigned int> *v12; // rax
  const data::IrodoriPoetryExcelConfig *theme_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-80h] BYREF
  char v18[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 theme_id:541";
  *(_QWORD *)(v4 + 16) = IrodoriActivity::poetryThemeToClient;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = theme_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  theme_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriPoetryExcelConfig(
                       &v7->design_config.txt_config_mgr.activity_irodori_config_mgr,
                       *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( theme_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&theme_config_ptr->inspiration_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&theme_config_ptr->inspiration_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IrodoriPoetryThemeData::set_max_progress(proto, theme_config_ptr->inspiration_limit);
    if ( *(_BYTE *)(((unsigned __int64)&theme_config_ptr->min_inspiration >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)theme_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&theme_config_ptr->min_inspiration >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::IrodoriPoetryThemeData::set_min_progress(proto, theme_config_ptr->min_inspiration);
    proto::IrodoriPoetryThemeData::set_theme_id(proto, *(_DWORD *)(v4 + 32));
    v10 = proto::IrodoriPoetryThemeData::mutable_scanned_index_list(proto);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&theme_data->scanned_index_set, v10);
    Progress = IrodoriActivity::PoetryThemeData::getProgress(theme_data);
    proto::IrodoriPoetryThemeData::set_progress(proto, Progress);
    if ( *(_BYTE *)(((unsigned __int64)&theme_data->selected_line >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&theme_data->selected_line >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IrodoriPoetryThemeData::set_selected_line_id(proto, theme_data->selected_line);
    v12 = proto::IrodoriPoetryThemeData::mutable_line_id_list(proto);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
      &theme_data->avaliable_line_id_set,
      v12);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "poetryThemeToClient",
      546);
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v17, (const char (*)[18])"invalid theme id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v4 )
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

// Line 560: range 000000001453E9A4-000000001453F916
int32_t __cdecl IrodoriActivity::onScanEntityReq(
        IrodoriActivity *const this,
        const proto::IrodoriScanEntityReq *req,
        proto::IrodoriScanEntityRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r15
  google::protobuf::uint32 v19; // eax
  common::milog::MiLogStream *v20; // r14
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // rcx
  common::milog::MiLogStream *v22; // rax
  uint32_t DayIndexAfterStart; // ecx
  common::milog::MiLogStream *v24; // rax
  uint32_t Progress; // ecx
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriScanEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriScanEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  Player *v31; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriScanEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  Player *v33; // r14
  uint32_t v34; // ecx
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<IrodoriPoetryReachMinProgressEvent> *v36; // rax
  uint32_t v37; // r14d
  proto::IrodoriPoetryThemeData *v38; // rsi
  int32_t result; // eax
  std::string v40; // [rsp+0h] [rbp-160h]
  unsigned int val; // [rsp+2Ch] [rbp-134h] BYREF
  const data::IrodoriPoetryExcelConfig *theme_config_ptr; // [rsp+30h] [rbp-130h]
  IrodoriActivity::PoetryThemeData *theme_data; // [rsp+38h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> v44; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v45; // [rsp+50h] [rbp-110h] BYREF
  char v46[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v40._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v40._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v40._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v46;
  v40._M_dataplus._M_p = v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 1 10 holder:620 48 4 12 index_id:612 64 16 13 scene_ptr:562 96 16 14 entity_ptr:582 128 16 "
                        "11 log_ptr:621 160 16 13 event_ptr:642";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::onScanEntityReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "onScanEntityReq",
      565);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v45,
           (const char (*)[41])"[IRODORI_POETRY] scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    OwnerUid = Scene::getOwnerUid(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( OwnerUid == Player::getUid(this->player_) )
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
          "./src/player/activity/irodori_activity.cpp",
          "onScanEntityReq",
          577);
        v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v45,
                (const char (*)[44])"[IRODORI_POETRY] player is in mp mode, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v45);
        v7 = 1202;
      }
      else
      {
        v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = (unsigned __int64)(v16->_vptr_DescribalBase + 15);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8();
        v18 = *(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v17;
        v19 = proto::IrodoriScanEntityReq::entity_id(req);
        v18(v3 + 96, v16, v19);
        if ( std::operator==<Entity>((const std::shared_ptr<Entity> *)(v3 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/irodori_activity.cpp",
            "onScanEntityReq",
            585);
          v20 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v45,
                  (const char (*)[48])"[IRODORI_POETRY] entity_ptr is null, entity_id:");
          val = proto::IrodoriScanEntityReq::entity_id(req);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
          common::milog::MiLogStream::~MiLogStream(&v45);
          v7 = 504;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v44);
          p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.activity_irodori_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          theme_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriPoetryExcelConfig(
                               p_activity_irodori_config_mgr,
                               this->poetry_data_.cur_theme_id);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
          if ( theme_config_ptr )
          {
            DayIndexAfterStart = BaseActivity::getDayIndexAfterStart(this);
            if ( *(_BYTE *)(((unsigned __int64)&theme_config_ptr->unlock_day >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)theme_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&theme_config_ptr->unlock_day >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( DayIndexAfterStart >= theme_config_ptr->unlock_day )
            {
              theme_data = std::map<unsigned int,IrodoriActivity::PoetryThemeData>::operator[](
                             &this->poetry_data_.theme_data_map,
                             &this->poetry_data_.cur_theme_id);
              Progress = IrodoriActivity::PoetryThemeData::getProgress(theme_data);
              if ( *(_BYTE *)(((unsigned __int64)&theme_config_ptr->inspiration_limit >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&theme_config_ptr->inspiration_limit >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( Progress < theme_config_ptr->inspiration_limit )
              {
                *(_DWORD *)(v3 + 48) = IrodoriActivity::findIndexIdByEntityInCurTheme(
                                         this,
                                         theme_config_ptr,
                                         (const EntityPtr *)(v3 + 96));
                if ( *(_DWORD *)(v3 + 48) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  BasicComp = Player::getBasicComp(this->player_);
                  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v45, BasicComp);
                  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xE0Au, v40);
                  std::string::~string(&v45);
                  common::tools::perf::make_shared<proto_log::PlayerLogBodyIrodoriScanEntity>();
                  v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriScanEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriScanEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  proto_log::PlayerLogBodyIrodoriScanEntity::set_index_id(v29, *(_DWORD *)(v3 + 48));
                  v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriScanEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriScanEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  if ( *(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 1120) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 1120) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  proto_log::PlayerLogBodyIrodoriScanEntity::set_theme_id(
                    v30,
                    *(_DWORD *)(*(&v40._anon_0._M_allocated_capacity + 1) + 1120));
                  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                         &theme_data->scanned_index_set,
                         (const unsigned int *)(v3 + 48)) )
                  {
                    if ( *(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v31 = *(Player **)(*(&v40._anon_0._M_allocated_capacity + 1) + 24);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v44, 0LL);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyIrodoriScanEntity,void>(
                      (std::shared_ptr<google::protobuf::Message> *const)(v3 + 160),
                      (const std::shared_ptr<proto_log::PlayerLogBodyIrodoriScanEntity> *)(v3 + 128));
                    Player::printStatLog(v31, (MessagePtr *)(v3 + 160), &v44, 0xEu);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 160));
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v44);
                    v7 = 10124;
                  }
                  else
                  {
                    v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriScanEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriScanEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                    proto_log::PlayerLogBodyIrodoriScanEntity::set_is_counted(v32, 1);
                    if ( *(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v33 = *(Player **)(*(&v40._anon_0._M_allocated_capacity + 1) + 24);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v44, 0LL);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyIrodoriScanEntity,void>(
                      (std::shared_ptr<google::protobuf::Message> *const)(v3 + 160),
                      (const std::shared_ptr<proto_log::PlayerLogBodyIrodoriScanEntity> *)(v3 + 128));
                    Player::printStatLog(v33, (MessagePtr *)(v3 + 160), &v44, 0xEu);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 160));
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v44);
                    std::set<unsigned int>::emplace<unsigned int &>(
                      &theme_data->scanned_index_set,
                      (unsigned int *)(v3 + 48),
                      (unsigned int *)(v3 + 48));
                    if ( *(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 1120) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 1120) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    IrodoriActivity::updateAvaliablePoetryLineIdSet(
                      *((IrodoriActivity *const *)&v40._anon_0._M_allocated_capacity + 1),
                      *(_DWORD *)(*(&v40._anon_0._M_allocated_capacity + 1) + 1120));
                    v34 = IrodoriActivity::PoetryThemeData::getProgress(theme_data);
                    if ( *(_BYTE *)(((unsigned __int64)&theme_config_ptr->min_inspiration >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)theme_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&theme_config_ptr->min_inspiration >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    if ( v34 == theme_config_ptr->min_inspiration )
                    {
                      std::make_shared<IrodoriPoetryReachMinProgressEvent,unsigned int &>(
                        (unsigned int *)(v3 + 160),
                        (unsigned int *)(*(&v40._anon_0._M_allocated_capacity + 1) + 1120));
                      if ( *(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      EventComp = Player::getEventComp(*(Player *const *)(*(&v40._anon_0._M_allocated_capacity + 1) + 24));
                      v36 = std::move<std::shared_ptr<IrodoriPoetryReachMinProgressEvent> &>((std::shared_ptr<IrodoriPoetryReachMinProgressEvent> *)(v3 + 160));
                      std::shared_ptr<BaseEvent>::shared_ptr<IrodoriPoetryReachMinProgressEvent,void>(
                        (std::shared_ptr<BaseEvent> *const)&v44,
                        v36);
                      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v44);
                      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v44);
                      std::shared_ptr<IrodoriPoetryReachMinProgressEvent>::~shared_ptr((std::shared_ptr<IrodoriPoetryReachMinProgressEvent> *const)(v3 + 160));
                    }
                    proto::IrodoriScanEntityRsp::set_is_get_inspiration(
                      (proto::IrodoriScanEntityRsp *const)v40._M_string_length,
                      1);
                    BaseActivity::notifyClientData(*((BaseActivity *const *)&v40._anon_0._M_allocated_capacity + 1), 0);
                    if ( *(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 1120) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((*(&v40._anon_0._M_allocated_capacity + 1) + 1120) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    v37 = *(_DWORD *)(*(&v40._anon_0._M_allocated_capacity + 1) + 1120);
                    v38 = proto::IrodoriScanEntityRsp::mutable_theme_data((proto::IrodoriScanEntityRsp *const)v40._M_string_length);
                    IrodoriActivity::poetryThemeToClient(
                      *((const IrodoriActivity *const *)&v40._anon_0._M_allocated_capacity + 1),
                      v38,
                      v37,
                      theme_data);
                    v7 = 0;
                  }
                  std::shared_ptr<proto_log::PlayerLogBodyIrodoriScanEntity>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyIrodoriScanEntity> *const)(v3 + 128));
                  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v45,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/irodori_activity.cpp",
                    "onScanEntityReq",
                    615);
                  v26 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                          &v45,
                          (const char (*)[57])"[IRODORI_POETRY] entity doesn't has index id, entity_id:");
                  v27 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                  val = Entity::getEntityId(v27);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
                  common::milog::MiLogStream::~MiLogStream(&v45);
                  v7 = -1;
                }
              }
              else
              {
                v7 = 10123;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/irodori_activity.cpp",
                "onScanEntityReq",
                600);
              v24 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v45,
                      (const char (*)[49])"[IRODORI_POETRY] theme doesn't unlock, theme_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                &this->poetry_data_.cur_theme_id);
              common::milog::MiLogStream::~MiLogStream(&v45);
              v7 = -1;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/irodori_activity.cpp",
              "onScanEntityReq",
              593);
            v22 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    &v45,
                    (const char (*)[56])"[IRODORI_POETRY] theme_config_ptr is nullptr, theme_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v22,
              &this->poetry_data_.cur_theme_id);
            common::milog::MiLogStream::~MiLogStream(&v45);
            v7 = -1;
          }
        }
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "onScanEntityReq",
        570);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v45,
              (const char (*)[46])"[IRODORI_POETRY] not in self scene, OwnerUid:");
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      *(_DWORD *)(v3 + 48) = Scene::getOwnerUid(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v45);
      v7 = 512;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  result = v7;
  if ( v40._M_dataplus._M_p == (std::string::pointer)v3 )
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

// Line 655: range 000000001453F918-0000000014540ABD
int32_t __cdecl IrodoriActivity::onFillPoetryReq(
        IrodoriActivity *const this,
        const proto::IrodoriFillPoetryReq *req,
        proto::IrodoriFillPoetryRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v15; // r14
  google::protobuf::uint32 v16; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t DayIndexAfterStart; // ecx
  common::milog::MiLogStream *v19; // rax
  uint32_t Progress; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  PlayerQuestComp *QuestComp; // rdi
  int32_t var; // esi
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriFillPoetry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriFillPoetry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  Player *player; // r14
  uint32_t v51; // ecx
  std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::size_type v52; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<IrodoriFinishPoetryThemeEvent> *v55; // rax
  proto::IrodoriPoetryThemeData *v56; // rsi
  int32_t result; // eax
  std::string v58; // [rsp+0h] [rbp-160h]
  proto::IrodoriFillPoetryRsp *rsp_0a; // [rsp+8h] [rbp-158h]
  IrodoriActivity *thisa; // [rsp+18h] [rbp-148h]
  unsigned int val; // [rsp+24h] [rbp-13Ch] BYREF
  const data::IrodoriPoetryExcelConfig *theme_config_ptr; // [rsp+28h] [rbp-138h]
  IrodoriActivity::PoetryThemeData *theme_data; // [rsp+30h] [rbp-130h]
  const data::IrodoriPoetryLineExcelConfig *line_config_ptr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> v65; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v66; // [rsp+50h] [rbp-110h] BYREF
  char v67[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v58._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v58._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v58._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v67;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 holder:736 64 4 12 theme_id:681 80 4 11 line_id:682 96 16 13 scene_ptr:657 128 16 11 l"
                        "og_ptr:737 160 16 13 event_ptr:753";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::onFillPoetryReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v66,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "onFillPoetryReq",
      660);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v66,
           (const char (*)[41])"[IRODORI_POETRY] scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v66);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    OwnerUid = Scene::getOwnerUid(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( OwnerUid == Player::getUid(this->player_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpComp = Player::getMpComp(this->player_);
      if ( PlayerMpComp::isInMpMode(MpComp) )
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/irodori_activity.cpp",
          "onFillPoetryReq",
          672);
        v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v66,
                (const char (*)[44])"[IRODORI_POETRY] player is in mp mode, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v66);
        v7 = 1202;
      }
      else
      {
        v16 = proto::IrodoriFillPoetryReq::theme_id(req);
        if ( *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v16 == this->poetry_data_.cur_theme_id )
        {
          *(_DWORD *)(v3 + 64) = proto::IrodoriFillPoetryReq::theme_id(req);
          *(_DWORD *)(v3 + 80) = proto::IrodoriFillPoetryReq::line_id(req);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v65);
          v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65);
          theme_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriPoetryExcelConfig(
                               &v17->design_config.txt_config_mgr.activity_irodori_config_mgr,
                               *(_DWORD *)(v3 + 64));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v65);
          if ( theme_config_ptr )
          {
            DayIndexAfterStart = BaseActivity::getDayIndexAfterStart(this);
            if ( *(_BYTE *)(((unsigned __int64)&theme_config_ptr->unlock_day >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)theme_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&theme_config_ptr->unlock_day >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( DayIndexAfterStart >= theme_config_ptr->unlock_day )
            {
              theme_data = std::map<unsigned int,IrodoriActivity::PoetryThemeData>::operator[](
                             &this->poetry_data_.theme_data_map,
                             (const std::map<unsigned int,IrodoriActivity::PoetryThemeData>::key_type *)(v3 + 64));
              Progress = IrodoriActivity::PoetryThemeData::getProgress(theme_data);
              if ( *(_BYTE *)(((unsigned __int64)&theme_config_ptr->min_inspiration >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)theme_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&theme_config_ptr->min_inspiration >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( Progress >= theme_config_ptr->min_inspiration )
              {
                if ( *(_BYTE *)(((unsigned __int64)&theme_data->selected_line >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&theme_data->selected_line >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( theme_data->selected_line )
                {
                  common::milog::MiLogStream::create(
                    &v66,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/irodori_activity.cpp",
                    "onFillPoetryReq",
                    710);
                  v26 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                          &v66,
                          (const char (*)[53])"[IRODORI_POETRY] line is already selected, theme_id:");
                  v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v26,
                          (const unsigned int *)(v3 + 64));
                  v28 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                          v27,
                          (const char (*)[20])", selected_line_id:");
                  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v28,
                          &theme_data->selected_line);
                  v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                          v29,
                          (const char (*)[15])", req.line_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v3 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v66);
                  v7 = -1;
                }
                else if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                             &theme_data->avaliable_line_id_set,
                             (const unsigned int *)(v3 + 80)) )
                {
                  common::milog::MiLogStream::create(
                    &v66,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/irodori_activity.cpp",
                    "onFillPoetryReq",
                    718);
                  v31 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          &v66,
                          (const char (*)[24])"invalid line, theme_id:");
                  v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v31,
                          (const unsigned int *)(v3 + 64));
                  v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                          v32,
                          (const char (*)[11])", line_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v33,
                    (const unsigned int *)(v3 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v66);
                  v7 = 10120;
                }
                else
                {
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&v65);
                  v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65);
                  line_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriPoetryLineExcelConfig(
                                      &v34->design_config.txt_config_mgr.activity_irodori_config_mgr,
                                      *(_DWORD *)(v3 + 80));
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v65);
                  if ( line_config_ptr )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    QuestComp = Player::getQuestComp(this->player_);
                    if ( *(_BYTE *)(((unsigned __int64)&line_config_ptr->var >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)line_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&line_config_ptr->var >> 3)
                                                                                     + 0x7FFF8000) )
                    {
                      QuestComp = (PlayerQuestComp *)&line_config_ptr->var;
                      __asan_report_load4();
                    }
                    var = line_config_ptr->var;
                    if ( *(_BYTE *)(((unsigned __int64)&theme_config_ptr->main_quest_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&theme_config_ptr->main_quest_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      QuestComp = (PlayerQuestComp *)&theme_config_ptr->main_quest_id;
                      __asan_report_load4();
                    }
                    if ( PlayerQuestComp::updateQuestVarByServer(QuestComp, theme_config_ptr->main_quest_id, 1u, var, 1) )
                    {
                      common::milog::MiLogStream::create(
                        &v66,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/activity/irodori_activity.cpp",
                        "onFillPoetryReq",
                        732);
                      v40 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              &v66,
                              (const char (*)[33])"updateQuestVar failed, theme_id:");
                      v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v40,
                              (const unsigned int *)(v3 + 64));
                      v42 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                              v41,
                              (const char (*)[19])", parent_quest_id:");
                      v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v42,
                              &theme_config_ptr->main_quest_id);
                      v44 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              v43,
                              (const char (*)[11])", line_id:");
                      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v44,
                              (const unsigned int *)(v3 + 80));
                      v46 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                              v45,
                              (const char (*)[8])", var: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &line_config_ptr->var);
                      common::milog::MiLogStream::~MiLogStream(&v66);
                      v7 = -1;
                    }
                    else
                    {
                      if ( *(_BYTE *)(((*(&v58._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      BasicComp = Player::getBasicComp(*(Player *const *)(*(&v58._anon_0._M_allocated_capacity + 1) + 24));
                      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v66, BasicComp);
                      StatLogUtils::ContextHolder::ContextHolder(
                        (StatLogUtils::ContextHolder *const)(v3 + 48),
                        0xE0Bu,
                        v58);
                      std::string::~string(&v66);
                      common::tools::perf::make_shared<proto_log::PlayerLogBodyIrodoriFillPoetry>();
                      v48 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriFillPoetry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriFillPoetry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      proto_log::PlayerLogBodyIrodoriFillPoetry::set_theme_id(v48, *(_DWORD *)(v3 + 64));
                      v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriFillPoetry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriFillPoetry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      proto_log::PlayerLogBodyIrodoriFillPoetry::set_line_id(v49, *(_DWORD *)(v3 + 80));
                      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      player = thisa->player_;
                      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v65, 0LL);
                      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyIrodoriFillPoetry,void>(
                        (std::shared_ptr<google::protobuf::Message> *const)(v3 + 160),
                        (const std::shared_ptr<proto_log::PlayerLogBodyIrodoriFillPoetry> *)(v3 + 128));
                      Player::printStatLog(player, (MessagePtr *)(v3 + 160), &v65, 0xEu);
                      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 160));
                      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v65);
                      v51 = *(_DWORD *)(v3 + 80);
                      if ( *(_BYTE *)(((unsigned __int64)&theme_data->selected_line >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&theme_data->selected_line >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_store4(&theme_data->selected_line);
                      }
                      theme_data->selected_line = v51;
                      if ( *(_BYTE *)(((unsigned __int64)&thisa->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&thisa->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4();
                      }
                      v52 = ++thisa->poetry_data_.cur_theme_id;
                      ServiceBox::findService<GameserverService>();
                      GameserverService::getConfig((GameserverService *const)&v65);
                      v53 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65);
                      LOBYTE(v52) = v52 > std::unordered_map<unsigned int,data::IrodoriPoetryExcelConfig>::size(&v53->design_config.txt_config_mgr.activity_irodori_config_mgr.irodori_poetry_excel_config_map);
                      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v65);
                      if ( (_BYTE)v52 )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&thisa->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&thisa->poetry_data_.cur_theme_id >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(&thisa->poetry_data_.cur_theme_id);
                        }
                        thisa->poetry_data_.cur_theme_id = 0;
                      }
                      common::tools::perf::make_shared<IrodoriFinishPoetryThemeEvent,unsigned int &>(
                        (unsigned int *)(v3 + 160),
                        (unsigned int *)(v3 + 64));
                      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      EventComp = Player::getEventComp(thisa->player_);
                      v55 = std::move<std::shared_ptr<IrodoriFinishPoetryThemeEvent> &>((std::shared_ptr<IrodoriFinishPoetryThemeEvent> *)(v3 + 160));
                      std::shared_ptr<BaseEvent>::shared_ptr<IrodoriFinishPoetryThemeEvent,void>(
                        (std::shared_ptr<BaseEvent> *const)&v65,
                        v55);
                      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v65);
                      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v65);
                      BaseActivity::notifyClientData(thisa, 0);
                      LODWORD(EventComp) = *(_DWORD *)(v3 + 64);
                      v56 = proto::IrodoriFillPoetryRsp::mutable_theme_data(rsp_0a);
                      IrodoriActivity::poetryThemeToClient(thisa, v56, (uint32_t)EventComp, theme_data);
                      v7 = 0;
                      std::shared_ptr<IrodoriFinishPoetryThemeEvent>::~shared_ptr((std::shared_ptr<IrodoriFinishPoetryThemeEvent> *const)(v3 + 160));
                      std::shared_ptr<proto_log::PlayerLogBodyIrodoriFillPoetry>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyIrodoriFillPoetry> *const)(v3 + 128));
                      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
                    }
                  }
                  else
                  {
                    common::milog::MiLogStream::create(
                      &v66,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/irodori_activity.cpp",
                      "onFillPoetryReq",
                      726);
                    v35 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                            &v66,
                            (const char (*)[35])"line_config_ptr is null, theme_id:");
                    v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v35,
                            (const unsigned int *)(v3 + 64));
                    v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v36,
                            (const char (*)[11])", line_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v37,
                      (const unsigned int *)(v3 + 80));
                    common::milog::MiLogStream::~MiLogStream(&v66);
                    v7 = 10120;
                  }
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v66,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/irodori_activity.cpp",
                  "onFillPoetryReq",
                  702);
                v21 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                        &v66,
                        (const char (*)[59])"[IRODORI_POETRY] doesn't get enough inspiration, theme_id:");
                v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v21,
                        (const unsigned int *)(v3 + 64));
                v23 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v22,
                        (const char (*)[20])", current progress:");
                val = IrodoriActivity::PoetryThemeData::getProgress(theme_data);
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
                v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v24,
                        (const char (*)[19])", min inspiration:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  &theme_config_ptr->min_inspiration);
                common::milog::MiLogStream::~MiLogStream(&v66);
                v7 = 10122;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v66,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/irodori_activity.cpp",
                "onFillPoetryReq",
                694);
              v19 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v66,
                      (const char (*)[49])"[IRODORI_POETRY] theme doesn't unlock, theme_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream(&v66);
              v7 = -1;
            }
          }
          else
          {
            v7 = 10121;
          }
        }
        else
        {
          v7 = 10121;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v66,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "onFillPoetryReq",
        665);
      v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v66,
              (const char (*)[46])"[IRODORI_POETRY] not in self scene, OwnerUid:");
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      *(_DWORD *)(v3 + 80) = Scene::getOwnerUid(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v66);
      v7 = 512;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  result = v7;
  if ( v67 == (char *)v3 )
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

// Line 763: range 0000000014540ABE-00000000145410F1
uint32_t __cdecl IrodoriActivity::findIndexIdByEntityInCurTheme(
        const IrodoriActivity *const this,
        const data::IrodoriPoetryExcelConfig *poetry_config,
        const EntityPtr *entity_ptr)
{
  uint32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  data::IrodoriPoetryEntityType entity_type; // eax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int v10; // r15d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int v14; // r15d
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  const ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // rdi
  uint32_t v18; // edx
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  uint32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 index_id:769 64 16 14 gadget_ptr:775";
  *(_QWORD *)(v4 + 16) = IrodoriActivity::findIndexIdByEntityInCurTheme;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( std::operator==<Entity>(entity_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "findIndexIdByEntityInCurTheme",
      766);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v24, (const char (*)[22])"entity_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v3 = 0;
    goto LABEL_29;
  }
  *(_DWORD *)(v4 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&poetry_config->entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&poetry_config->entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  entity_type = poetry_config->entity_type;
  if ( entity_type > IRODORI_POETRY_ENTITY_TYPE_GATHER )
  {
    if ( entity_type != IRODORI_POETRY_ENTITY_TYPE_MONSTER )
      goto LABEL_23;
    std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v4 + 64));
    if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/irodori_activity.cpp",
        "findIndexIdByEntityInCurTheme",
        789);
      v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v24,
              (const char (*)[36])"entity is not a monster, entity_id:");
      v13 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
      val = Entity::getEntityId(v13);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v3 = 0;
      v14 = 0;
    }
    else
    {
      v15 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      *(_DWORD *)(v4 + 48) = Monster::getMonsterId(v15);
      v14 = 1;
    }
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 64));
    if ( !v14 )
      goto LABEL_29;
LABEL_24:
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 64));
    p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->design_config.txt_config_mgr.activity_irodori_config_mgr;
    v18 = *(_DWORD *)(v4 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&poetry_config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&poetry_config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_irodori_config_mgr = (const ActivityIrodoriExcelConfigMgr *)&poetry_config->id;
      __asan_report_load4();
    }
    v19 = !ActivityIrodoriExcelConfigMgr::isIndexIdInThemeIndexIdList(
             p_activity_irodori_config_mgr,
             poetry_config->id,
             v18);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
    if ( v19 )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "findIndexIdByEntityInCurTheme",
        803);
      v20 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v24,
              (const char (*)[49])"[IRODORI_POETRY] not in current theme, index_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v3 = 0;
    }
    else
    {
      v3 = *(_DWORD *)(v4 + 48);
    }
    goto LABEL_29;
  }
  if ( entity_type <= IRODORI_POETRY_ENTITY_TYPE_NONE )
  {
LABEL_23:
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "findIndexIdByEntityInCurTheme",
      797);
    v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v24,
            (const char (*)[31])"entity_type invalid, theme_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->poetry_data_.cur_theme_id);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v3 = 0;
    goto LABEL_29;
  }
  std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v4 + 64));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "findIndexIdByEntityInCurTheme",
      778);
    v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v24,
           (const char (*)[35])"entity is not a gadget, entity_id:");
    v9 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)entity_ptr);
    val = Entity::getEntityId(v9);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v3 = 0;
    v10 = 0;
  }
  else
  {
    v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    *(_DWORD *)(v4 + 48) = Gadget::getGadgetId(v11);
    v10 = 1;
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 64));
  if ( v10 )
    goto LABEL_24;
LABEL_29:
  result = v3;
  if ( v25 == (char *)v4 )
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

// Line 810: range 00000000145410F2-0000000014541440
void __fastcall IrodoriActivity::updateAvaliablePoetryLineIdSet(IrodoriActivity *const this, uint32_t theme_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::vector<data::IrodoriPoetryScanConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<data::IrodoriPoetryScanConfig>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-D0h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-C8h] BYREF
  const data::IrodoriPoetryExcelConfig *theme_config_ptr; // [rsp+30h] [rbp-C0h]
  IrodoriActivity::PoetryThemeData *theme_data; // [rsp+38h] [rbp-B8h]
  const std::vector<data::IrodoriPoetryScanConfig> *__for_range; // [rsp+40h] [rbp-B0h]
  const data::IrodoriPoetryScanConfig *scan_config; // [rsp+48h] [rbp-A8h]
  std::set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-A0h]
  const unsigned int *scanned_index_id; // [rsp+58h] [rbp-98h]
  std::shared_ptr<Config> v17; // [rsp+60h] [rbp-90h] BYREF
  common::milog::MiLogStream v18; // [rsp+70h] [rbp-80h] BYREF
  char v19[96]; // [rsp+90h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 theme_id:809";
  *(_QWORD *)(v2 + 16) = IrodoriActivity::updateAvaliablePoetryLineIdSet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = theme_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  theme_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriPoetryExcelConfig(
                       &v5->design_config.txt_config_mgr.activity_irodori_config_mgr,
                       *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( theme_config_ptr )
  {
    theme_data = std::map<unsigned int,IrodoriActivity::PoetryThemeData>::operator[](
                   &this->poetry_data_.theme_data_map,
                   (const std::map<unsigned int,IrodoriActivity::PoetryThemeData>::key_type *)(v2 + 32));
    __for_range = &theme_config_ptr->scan_config_list;
    __for_begin._M_current = std::vector<data::IrodoriPoetryScanConfig>::begin(&theme_config_ptr->scan_config_list)._M_current;
    __for_end._M_current = std::vector<data::IrodoriPoetryScanConfig>::end(&theme_config_ptr->scan_config_list)._M_current;
    while ( __gnu_cxx::operator!=<data::IrodoriPoetryScanConfig const*,std::vector<data::IrodoriPoetryScanConfig>>(
              &__for_begin,
              &__for_end) )
    {
      scan_config = __gnu_cxx::__normal_iterator<data::IrodoriPoetryScanConfig const*,std::vector<data::IrodoriPoetryScanConfig>>::operator*(&__for_begin);
      __for_range_0 = &theme_data->scanned_index_set;
      __for_begin_0._M_node = std::set<unsigned int>::begin(&theme_data->scanned_index_set)._M_node;
      __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        scanned_index_id = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
        if ( common::tools::MiscUtils::isContains<unsigned int>(&scan_config->index_id_list, scanned_index_id) )
        {
          std::set<unsigned int>::emplace<unsigned int const&>(
            &theme_data->avaliable_line_id_set,
            &scan_config->line_id,
            &scan_config->line_id);
          break;
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
      }
      __gnu_cxx::__normal_iterator<data::IrodoriPoetryScanConfig const*,std::vector<data::IrodoriPoetryScanConfig>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "updateAvaliablePoetryLineIdSet",
      814);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v18,
           (const char (*)[36])"theme_config_ptr is null, theme_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 833: range 0000000014541442-0000000014541525
void __cdecl IrodoriActivity::updateAllAvaliablePoetryLineIdSet(IrodoriActivity *const this)
{
  std::map<unsigned int,IrodoriActivity::PoetryThemeData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,IrodoriActivity::PoetryThemeData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,IrodoriActivity::PoetryThemeData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> *v4; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> >::type *theme_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> >::type *_; // [rsp+38h] [rbp-8h]

  __for_range = &this->poetry_data_.theme_data_map;
  __for_begin._M_node = std::map<unsigned int,IrodoriActivity::PoetryThemeData>::begin(&this->poetry_data_.theme_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,IrodoriActivity::PoetryThemeData>::end(&this->poetry_data_.theme_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriActivity::PoetryThemeData>>::operator*(&__for_begin);
    theme_id = std::get<0ul,unsigned int const,IrodoriActivity::PoetryThemeData>(v4);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::PoetryThemeData> >::type *)std::get<1ul,unsigned int const,IrodoriActivity::PoetryThemeData>(v4);
    if ( *(_BYTE *)(((unsigned __int64)theme_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)theme_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)theme_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    IrodoriActivity::updateAvaliablePoetryLineIdSet(this, *theme_id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriActivity::PoetryThemeData>>::operator++(&__for_begin);
  }
};

// Line 843: range 0000000014541526-0000000014541763
int32_t __cdecl IrodoriActivity::chessFromBin(IrodoriActivity *const this, const proto::IrodoriChessBin *bin)
{
  bool is_open; // dl
  uint32_t v3; // edx
  uint32_t v4; // edx
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  uint32_t v6; // edx
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  std::map<unsigned int,IrodoriActivity::ChessLevelData>::key_type __k; // [rsp+14h] [rbp-4Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::IrodoriChessLevelBin>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  google::protobuf::RepeatedPtrField<proto::IrodoriChessLevelBin>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const google::protobuf::RepeatedPtrField<proto::IrodoriChessLevelBin> *__for_range; // [rsp+28h] [rbp-38h]
  const proto::IrodoriChessLevelBin *chess_level_bin; // [rsp+30h] [rbp-30h]
  IrodoriActivity::ChessLevelData *level_data; // [rsp+38h] [rbp-28h]
  const proto::IrodoriChessMapBin *normal_map_bin; // [rsp+40h] [rbp-20h]
  const proto::IrodoriChessMapBin *hard_map_bin; // [rsp+48h] [rbp-18h]

  is_open = proto::IrodoriChessBin::is_open(bin);
  if ( *(char *)(((unsigned __int64)&this->chess_data_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->chess_data_);
  this->chess_data_.is_open = is_open;
  __for_range = proto::IrodoriChessBin::level_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::IrodoriChessLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::IrodoriChessLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriChessLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    chess_level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriChessLevelBin const>::operator*(&__for_begin);
    __k = proto::IrodoriChessLevelBin::level_id(chess_level_bin);
    level_data = std::map<unsigned int,IrodoriActivity::ChessLevelData>::operator[](
                   &this->chess_data_.level_data_map,
                   &__k);
    v3 = proto::IrodoriChessLevelBin::level_id(chess_level_bin);
    if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(level_data);
    }
    level_data->level_id = v3;
    normal_map_bin = proto::IrodoriChessLevelBin::normal_map_data(chess_level_bin);
    v4 = proto::IrodoriChessMapBin::best_score(normal_map_bin);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->normal_map_data.best_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_data->normal_map_data.best_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&level_data->normal_map_data.best_score);
    }
    level_data->normal_map_data.best_score = v4;
    v5 = proto::IrodoriChessMapBin::equiped_card_list(normal_map_bin);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
      &level_data->normal_map_data.equiped_card_set,
      v5);
    hard_map_bin = proto::IrodoriChessLevelBin::hard_map_data(chess_level_bin);
    v6 = proto::IrodoriChessMapBin::best_score(hard_map_bin);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->hard_map_data.best_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_data->hard_map_data.best_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&level_data->hard_map_data.best_score);
    }
    level_data->hard_map_data.best_score = v6;
    v7 = proto::IrodoriChessMapBin::equiped_card_list(hard_map_bin);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
      &level_data->hard_map_data.equiped_card_set,
      v7);
    google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriChessLevelBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 863: range 0000000014541764-000000001454199C
int32_t __cdecl IrodoriActivity::chessToBin(const IrodoriActivity *const this, proto::IrodoriChessBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  std::map<unsigned int,IrodoriActivity::ChessLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,IrodoriActivity::ChessLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::map<unsigned int,IrodoriActivity::ChessLevelData> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,IrodoriActivity::ChessLevelData> *v8; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,IrodoriActivity::ChessLevelData> >::type *level_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::ChessLevelData> >::type *level_data; // [rsp+40h] [rbp-20h]
  proto::IrodoriChessLevelBin *chess_level_bin; // [rsp+48h] [rbp-18h]
  proto::IrodoriChessMapBin *normal_map_bin; // [rsp+50h] [rbp-10h]
  proto::IrodoriChessMapBin *hard_map_bin; // [rsp+58h] [rbp-8h]

  if ( *(char *)(((unsigned __int64)&this->chess_data_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->chess_data_);
  proto::IrodoriChessBin::set_is_open(bin, this->chess_data_.is_open);
  __for_range = &this->chess_data_.level_data_map;
  __for_begin._M_node = std::map<unsigned int,IrodoriActivity::ChessLevelData>::begin(&this->chess_data_.level_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,IrodoriActivity::ChessLevelData>::end(&this->chess_data_.level_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::ChessLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,IrodoriActivity::ChessLevelData>(v8);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,IrodoriActivity::ChessLevelData> >::type *)std::get<1ul,unsigned int const,IrodoriActivity::ChessLevelData>(v8);
    chess_level_bin = proto::IrodoriChessBin::add_level_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IrodoriChessLevelBin::set_level_id(chess_level_bin, level_data->level_id);
    normal_map_bin = proto::IrodoriChessLevelBin::mutable_normal_map_data(chess_level_bin);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->normal_map_data.best_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_data->normal_map_data.best_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IrodoriChessMapBin::set_best_score(normal_map_bin, level_data->normal_map_data.best_score);
    v2 = proto::IrodoriChessMapBin::mutable_equiped_card_list(normal_map_bin);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
      &level_data->normal_map_data.equiped_card_set,
      v2);
    hard_map_bin = proto::IrodoriChessLevelBin::mutable_hard_map_data(chess_level_bin);
    if ( *(_BYTE *)(((unsigned __int64)&level_data->hard_map_data.best_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_data->hard_map_data.best_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IrodoriChessMapBin::set_best_score(hard_map_bin, level_data->hard_map_data.best_score);
    v3 = proto::IrodoriChessMapBin::mutable_equiped_card_list(hard_map_bin);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
      &level_data->hard_map_data.equiped_card_set,
      v3);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::ChessLevelData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 883: range 000000001454199E-00000000145422A2
int32_t __cdecl IrodoriActivity::chessToClient(const IrodoriActivity *const this, proto::IrodoriChessData *proto)
{
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // rcx
  uint32_t v3; // ecx
  ActivityIrodoriExcelConfigMgr *v4; // rbx
  proto::IrodoriChessEntranceDetailInfo *v5; // rcx
  bool v6; // bl
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  ActivityIrodoriExcelConfigMgr *v9; // rbx
  proto::IrodoriChessEntranceDetailInfo *v10; // rcx
  bool v11; // bl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  google::protobuf::RepeatedField<unsigned int> *v14; // rbx
  const std::set<unsigned int> *p_equiped_card_set; // rdi
  google::protobuf::RepeatedField<unsigned int> *v16; // rbx
  const std::set<unsigned int> *v17; // rdi
  uint32_t chess_open_day; // [rsp+14h] [rbp-CCh]
  uint32_t level_open_day; // [rsp+18h] [rbp-C8h]
  google::protobuf::uint32 level_open_time; // [rsp+1Ch] [rbp-C4h]
  std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  const std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig> *v26; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig> >::type *level_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig> >::type *level_config; // [rsp+48h] [rbp-98h]
  const IrodoriActivity::ChessLevelData *level_data_ptr; // [rsp+50h] [rbp-90h]
  proto::IrodoriChessLevelData *level_proto; // [rsp+58h] [rbp-88h]
  proto::IrodoriChessMapData *normal_map_proto; // [rsp+60h] [rbp-80h]
  proto::IrodoriChessMapData *hard_map_proto; // [rsp+68h] [rbp-78h]
  std::shared_ptr<Config> v33; // [rsp+70h] [rbp-70h] BYREF
  common::milog::MiLogStream v34; // [rsp+80h] [rbp-60h] BYREF
  std::set<unsigned int> set; // [rsp+A0h] [rbp-40h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_irodori_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  chess_open_day = ActivityIrodoriExcelConfigMgr::getIrodoriChessOpenDayByActivityId(
                     p_activity_irodori_config_mgr,
                     this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v33);
  if ( *(char *)(((unsigned __int64)&this->chess_data_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->chess_data_);
  proto::IrodoriChessData::set_is_open(proto, this->chess_data_.is_open);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_irodori_config_mgr.irodori_chess_level_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v33);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::IrodoriChessLevelExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v26 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,data::IrodoriChessLevelExcelConfig>(v26);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::IrodoriChessLevelExcelConfig>(v26);
    level_data_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,IrodoriActivity::ChessLevelData> const>(
                       &this->chess_data_.level_data_map,
                       level_id);
    level_proto = proto::IrodoriChessData::add_level_data_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)&level_config->open_days >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->open_days >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    level_open_day = level_config->open_days + chess_open_day;
    if ( level_open_day )
      v3 = level_open_day - 1;
    else
      v3 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    level_open_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v3);
    proto::IrodoriChessLevelData::set_open_time(level_proto, level_open_time);
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::IrodoriChessLevelData::set_level_id(level_proto, *level_id);
    normal_map_proto = proto::IrodoriChessLevelData::mutable_normal_map_data(level_proto);
    if ( *(_BYTE *)(((unsigned __int64)&level_config->normal_map_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->normal_map_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::IrodoriChessMapData::set_map_id(normal_map_proto, level_config->normal_map_id);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    v4 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_irodori_config_mgr;
    v5 = proto::IrodoriChessMapData::mutable_entrance_detail_info(normal_map_proto);
    if ( *(_BYTE *)(((unsigned __int64)&level_config->normal_map_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&level_config->normal_map_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v6 = !ActivityIrodoriExcelConfigMgr::fillIrodoriChessMapEntranceDetailInfoProto(v4, level_config->normal_map_id, v5);
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/irodori_activity.cpp",
        "chessToClient",
        900);
      v7 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
             &v34,
             (const char (*)[82])"[IRODORI_CHESS] fillIrodoriChessMapEntranceDetailInfoProto failed for normal map:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &level_config->normal_map_id);
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v8, this);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    hard_map_proto = proto::IrodoriChessLevelData::mutable_hard_map_data(level_proto);
    if ( *(_BYTE *)(((unsigned __int64)&level_config->hard_map_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->hard_map_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::IrodoriChessMapData::set_map_id(hard_map_proto, level_config->hard_map_id);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_irodori_config_mgr;
    v10 = proto::IrodoriChessMapData::mutable_entrance_detail_info(hard_map_proto);
    if ( *(_BYTE *)(((unsigned __int64)&level_config->hard_map_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->hard_map_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v11 = !ActivityIrodoriExcelConfigMgr::fillIrodoriChessMapEntranceDetailInfoProto(v9, level_config->hard_map_id, v10);
    std::shared_ptr<Config>::~shared_ptr(&v33);
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/irodori_activity.cpp",
        "chessToClient",
        907);
      v12 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
              &v34,
              (const char (*)[80])"[IRODORI_CHESS] fillIrodoriChessMapEntranceDetailInfoProto failed for hard map:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &level_config->hard_map_id);
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v13, this);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    if ( level_data_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_data_ptr->normal_map_data.best_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_data_ptr->normal_map_data.best_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::IrodoriChessMapData::set_best_score(normal_map_proto, level_data_ptr->normal_map_data.best_score);
      v14 = proto::IrodoriChessMapData::mutable_equiped_card_list(normal_map_proto);
      p_equiped_card_set = &level_data_ptr->normal_map_data.equiped_card_set;
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        p_equiped_card_set = (const std::set<unsigned int> *)level_id;
        __asan_report_load4();
      }
      IrodoriActivity::filterValidChessCards(&set, this, *level_id, 0, p_equiped_card_set);
      common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&set, v14);
      std::set<unsigned int>::~set(&set);
      if ( *(_BYTE *)(((unsigned __int64)&level_data_ptr->hard_map_data.best_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&level_data_ptr->hard_map_data.best_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::IrodoriChessMapData::set_best_score(hard_map_proto, level_data_ptr->hard_map_data.best_score);
      v16 = proto::IrodoriChessMapData::mutable_equiped_card_list(hard_map_proto);
      v17 = &level_data_ptr->hard_map_data.equiped_card_set;
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        v17 = (const std::set<unsigned int> *)level_id;
        __asan_report_load4();
      }
      IrodoriActivity::filterValidChessCards(&set, this, *level_id, 1, v17);
      common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&set, v16);
      std::set<unsigned int>::~set(&set);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::IrodoriChessLevelExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 922: range 00000000145422A4-0000000014542D19
__int64 __fastcall IrodoriActivity::equipCardForMap(
        IrodoriActivity *const this,
        uint32_t card_id,
        uint32_t level_id,
        bool is_hard_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  uint32_t v28; // ecx
  std::set<unsigned int> *p_equiped_card_set; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  __int64 result; // rax
  int32_t retcode; // [rsp+24h] [rbp-12Ch]
  const data::IrodoriChessCardExcelConfig *chess_card_config_ptr; // [rsp+28h] [rbp-128h]
  const data::IrodoriChessLevelExcelConfig *chess_level_config_ptr; // [rsp+30h] [rbp-120h]
  const data::IrodoriChessMapExcelConfig *chess_map_config_ptr; // [rsp+38h] [rbp-118h]
  IrodoriActivity::ChessLevelData *chess_level_data; // [rsp+40h] [rbp-110h]
  IrodoriActivity::ChessMapData *chess_map_data; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v55; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v56; // [rsp+60h] [rbp-F0h] BYREF
  char v57[208]; // [rsp+80h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 21 total_need_points:968 48 4 11 card_id:921 64 4 12 level_id:921 80 48 21 valid_card_id_set:967";
  *(_QWORD *)(v4 + 16) = IrodoriActivity::equipCardForMap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = 61956;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = card_id;
  *(_DWORD *)(v4 + 64) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v55);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
  chess_card_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessCardExcelConfig(
                            &v7->design_config.txt_config_mgr.activity_irodori_config_mgr,
                            *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v55);
  if ( chess_card_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v55);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
    chess_level_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessLevelExcelConfig(
                               &v12->design_config.txt_config_mgr.activity_irodori_config_mgr,
                               *(_DWORD *)(v4 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v55);
    if ( chess_level_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v55);
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
      chess_map_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByLevelIdAndDifficulty(
                               &v16->design_config.txt_config_mgr.activity_irodori_config_mgr,
                               *(_DWORD *)(v4 + 64),
                               is_hard_map);
      std::shared_ptr<Config>::~shared_ptr(&v55);
      if ( chess_map_config_ptr )
      {
        retcode = IrodoriActivity::checkLevelMapOpen(this, chess_level_config_ptr, is_hard_map);
        if ( retcode )
        {
          v11 = retcode;
        }
        else if ( !common::tools::MiscUtils::isContains<unsigned int>(
                     &chess_map_config_ptr->card_pool,
                     (const unsigned int *)(v4 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/irodori_activity.cpp",
            "equipCardForMap",
            952);
          v22 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v56,
                  (const char (*)[22])"[IRODORI_CHESS] card:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v4 + 48));
          v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])" not in map:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  &chess_map_config_ptr->map_id);
          v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])" card pool:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int>(v26, &chess_map_config_ptr->card_pool);
          common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v27, this);
          common::milog::MiLogStream::~MiLogStream(&v56);
          v11 = 5;
        }
        else
        {
          chess_level_data = std::map<unsigned int,IrodoriActivity::ChessLevelData>::operator[](
                               &this->chess_data_.level_data_map,
                               (const std::map<unsigned int,IrodoriActivity::ChessLevelData>::key_type *)(v4 + 64));
          v28 = *(_DWORD *)(v4 + 64);
          if ( *(_BYTE *)(((unsigned __int64)chess_level_data >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)chess_level_data >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(chess_level_data);
          }
          chess_level_data->level_id = v28;
          if ( is_hard_map )
            p_equiped_card_set = &chess_level_data->hard_map_data.equiped_card_set;
          else
            p_equiped_card_set = &chess_level_data->normal_map_data.equiped_card_set;
          chess_map_data = (IrodoriActivity::ChessMapData *)p_equiped_card_set;
          if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                 p_equiped_card_set,
                 (const unsigned int *)(v4 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v56,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/irodori_activity.cpp",
              "equipCardForMap",
              962);
            v30 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    &v56,
                    (const char (*)[22])"[IRODORI_CHESS] card:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v4 + 48));
            v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v31,
                    (const char (*)[18])" already equiped:");
            v33 = common::milog::MiLogStream::operator<<<unsigned int>(v32, &chess_map_data->equiped_card_set);
            v34 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v33, (const char (*)[9])off_253FB360);
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    &chess_map_config_ptr->map_id);
            common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v35, this);
            common::milog::MiLogStream::~MiLogStream(&v56);
            v11 = 10304;
          }
          else
          {
            IrodoriActivity::filterValidChessCards(
              (std::set<unsigned int> *)(v4 + 80),
              this,
              *(_DWORD *)(v4 + 64),
              is_hard_map,
              &chess_map_data->equiped_card_set);
            *(_DWORD *)(v4 + 32) = IrodoriActivity::calcTotalCardPoints(this, (const std::set<unsigned int> *)(v4 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&chess_card_config_ptr->cost_points >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)chess_card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_card_config_ptr->cost_points >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v4 + 32) = SAFE_ADD<unsigned int,unsigned int>(
                                     *(_DWORD *)(v4 + 32),
                                     chess_card_config_ptr->cost_points);
            if ( *(_BYTE *)(((unsigned __int64)&chess_map_config_ptr->total_card_points >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&chess_map_config_ptr->total_card_points >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( chess_map_config_ptr->total_card_points >= *(_DWORD *)(v4 + 32) )
            {
              std::set<unsigned int>::insert(
                &chess_map_data->equiped_card_set,
                (const std::set<unsigned int>::value_type *)(v4 + 48));
              BaseActivity::notifyClientData(this, 0);
              v11 = 0;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v56,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/irodori_activity.cpp",
                "equipCardForMap",
                972);
              v36 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      &v56,
                      (const char (*)[26])"[IRODORI_CHESS] new card:");
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v36,
                      (const unsigned int *)(v4 + 48));
              v38 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v37,
                      (const char (*)[12])" + equiped:");
              v39 = common::milog::MiLogStream::operator<<<unsigned int>(v38, (const std::set<unsigned int> *)(v4 + 80));
              v40 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v39,
                      (const char (*)[20])" need total points:");
              v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v40,
                      (const unsigned int *)(v4 + 32));
              v42 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v41,
                      (const char (*)[14])" exceeds map:");
              v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v42,
                      &chess_map_config_ptr->map_id);
              v44 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v43, (const char (*)[8])" limit:");
              v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v44,
                      &chess_map_config_ptr->total_card_points);
              common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v45, this);
              common::milog::MiLogStream::~MiLogStream(&v56);
              v11 = 10305;
            }
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 80));
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/irodori_activity.cpp",
          "equipCardForMap",
          940);
        v17 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v56,
                (const char (*)[23])"[IRODORI_CHESS] level:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 64));
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])", is_hard_map:");
        v20 = common::milog::MiLogStream::operator<<(v19, is_hard_map);
        v21 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v20,
                (const char (*)[24])" map config not found. ");
        common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v21, this);
        common::milog::MiLogStream::~MiLogStream(&v56);
        v11 = 5;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "equipCardForMap",
        933);
      v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v56,
              (const char (*)[23])"[IRODORI_CHESS] level:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
      v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v14,
              (const char (*)[20])" config not found. ");
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v15, this);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v11 = 5;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/irodori_activity.cpp",
      "equipCardForMap",
      926);
    v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v56,
           (const char (*)[22])"[IRODORI_CHESS] card:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" config not found. ");
    common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v10, this);
    common::milog::MiLogStream::~MiLogStream(&v56);
    v11 = 5;
  }
  result = v11;
  if ( v57 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 982: range 0000000014542D1A-00000000145434DF
__int64 __fastcall IrodoriActivity::unequipCardForMap(
        IrodoriActivity *const this,
        uint32_t card_id,
        uint32_t level_id,
        bool is_hard_map)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  uint32_t v18; // ecx
  const std::set<unsigned int> *p_equiped_card_set; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
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
  unsigned int retcode; // [rsp+24h] [rbp-DCh]
  const data::IrodoriChessLevelExcelConfig *chess_level_config_ptr; // [rsp+28h] [rbp-D8h]
  const data::IrodoriChessMapExcelConfig *chess_map_config_ptr; // [rsp+30h] [rbp-D0h]
  IrodoriActivity::ChessLevelData *chess_level_data; // [rsp+38h] [rbp-C8h]
  IrodoriActivity::ChessMapData *chess_map_data; // [rsp+40h] [rbp-C0h]
  const data::IrodoriChessCardExcelConfig *chess_card_config_ptr; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v40; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v41; // [rsp+60h] [rbp-A0h] BYREF
  char v42[128]; // [rsp+80h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 11 card_id:981 64 4 12 level_id:981";
  *(_QWORD *)(v4 + 16) = IrodoriActivity::unequipCardForMap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = card_id;
  *(_DWORD *)(v4 + 64) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
  chess_level_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessLevelExcelConfig(
                             &v7->design_config.txt_config_mgr.activity_irodori_config_mgr,
                             *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v40);
  if ( !chess_level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/irodori_activity.cpp",
      "unequipCardForMap",
      986);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v41,
           (const char (*)[23])"[IRODORI_CHESS] level:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            v9,
            (const char (*)[26])" level config not found. ");
    common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v10, this);
    common::milog::MiLogStream::~MiLogStream(&v41);
    result = 5LL;
    goto LABEL_25;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
  chess_map_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByLevelIdAndDifficulty(
                           &v12->design_config.txt_config_mgr.activity_irodori_config_mgr,
                           *(_DWORD *)(v4 + 64),
                           is_hard_map);
  std::shared_ptr<Config>::~shared_ptr(&v40);
  if ( !chess_map_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/irodori_activity.cpp",
      "unequipCardForMap",
      993);
    v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v41,
            (const char (*)[23])"[IRODORI_CHESS] level:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
    v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" is_hard_map:");
    v16 = common::milog::MiLogStream::operator<<(v15, is_hard_map);
    v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v16,
            (const char (*)[24])" map config not found. ");
    common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v17, this);
    common::milog::MiLogStream::~MiLogStream(&v41);
    result = 5LL;
    goto LABEL_25;
  }
  retcode = IrodoriActivity::checkLevelMapOpen(this, chess_level_config_ptr, is_hard_map);
  if ( retcode )
  {
    result = retcode;
    goto LABEL_25;
  }
  chess_level_data = std::map<unsigned int,IrodoriActivity::ChessLevelData>::operator[](
                       &this->chess_data_.level_data_map,
                       (const std::map<unsigned int,IrodoriActivity::ChessLevelData>::key_type *)(v4 + 64));
  v18 = *(_DWORD *)(v4 + 64);
  if ( *(_BYTE *)(((unsigned __int64)chess_level_data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)chess_level_data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(chess_level_data);
  }
  chess_level_data->level_id = v18;
  if ( is_hard_map )
    p_equiped_card_set = &chess_level_data->hard_map_data.equiped_card_set;
  else
    p_equiped_card_set = &chess_level_data->normal_map_data.equiped_card_set;
  chess_map_data = (IrodoriActivity::ChessMapData *)p_equiped_card_set;
  if ( *(_DWORD *)(v4 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v40);
    v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
    chess_card_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessCardExcelConfig(
                              &v20->design_config.txt_config_mgr.activity_irodori_config_mgr,
                              *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v40);
    if ( !chess_card_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "unequipCardForMap",
        1011);
      v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v41,
              (const char (*)[28])"[IRODORI_CHESS] chess card:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 48));
      v23 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v22,
              (const char (*)[20])" config not found. ");
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v23, this);
      common::milog::MiLogStream::~MiLogStream(&v41);
      result = 5LL;
      goto LABEL_25;
    }
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            &chess_map_data->equiped_card_set,
            (const unsigned int *)(v4 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "unequipCardForMap",
        1017);
      v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v41,
              (const char (*)[22])"[IRODORI_CHESS] card:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 48));
      v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v25, (const char (*)[14])" not equiped:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int>(v26, &chess_map_data->equiped_card_set);
      v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])off_253FB360);
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &chess_map_config_ptr->map_id);
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v29, this);
      common::milog::MiLogStream::~MiLogStream(&v41);
      result = 10306LL;
      goto LABEL_25;
    }
    std::set<unsigned int>::erase(
      &chess_map_data->equiped_card_set,
      (const std::set<unsigned int>::key_type *)(v4 + 48));
  }
  else
  {
    if ( std::set<unsigned int>::empty(p_equiped_card_set) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "unequipCardForMap",
        1026);
      v30 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v41,
              (const char (*)[40])"[IRODORI_CHESS] no card equiped in map:");
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &chess_map_config_ptr->map_id);
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v31, this);
      common::milog::MiLogStream::~MiLogStream(&v41);
      result = 10306LL;
      goto LABEL_25;
    }
    std::set<unsigned int>::clear(&chess_map_data->equiped_card_set);
  }
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_25:
  if ( v42 == (char *)v4 )
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

// Line 1036: range 00000000145434E0-00000000145443BC
__int64 __fastcall IrodoriActivity::enterChessDungeon(IrodoriActivity *const this, uint32_t level_id, bool is_hard_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
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
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v28; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  PlayerDungeonComp *DungeonComp; // r14
  __int32 entry_point_id; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  __int32 SceneId; // eax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v41; // rax
  DungeonScene *v42; // rax
  __int64 result; // rax
  int32_t retcode; // [rsp+2Ch] [rbp-204h]
  const data::IrodoriChessLevelExcelConfig *chess_level_config_ptr; // [rsp+30h] [rbp-200h]
  const data::IrodoriChessMapExcelConfig *chess_map_config_ptr; // [rsp+38h] [rbp-1F8h]
  int *ret; // [rsp+40h] [rbp-1F0h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+48h] [rbp-1E8h]
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+50h] [rbp-1E0h] BYREF
  EnterDungeonOption v51; // [rsp+70h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v52; // [rsp+90h] [rbp-1A0h] BYREF
  std::set<unsigned int> v53; // [rsp+B0h] [rbp-180h] BYREF
  char v54[336]; // [rsp+E0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 22 total_need_points:1061 48 4 15 dungeon_id:1089 64 4 13 level_id:1035 80 16 14 scene_pt"
                        "r:1082 112 48 24 equiped_card_id_set:1058 192 56 20 dungeon_context:1108";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::enterChessDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862725] = -218959118;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 64) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 80));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  chess_level_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessLevelExcelConfig(
                             &v6->design_config.txt_config_mgr.activity_irodori_config_mgr,
                             *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
  if ( chess_level_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 80));
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    chess_map_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByLevelIdAndDifficulty(
                             &v11->design_config.txt_config_mgr.activity_irodori_config_mgr,
                             *(_DWORD *)(v3 + 64),
                             is_hard_map);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
    if ( chess_map_config_ptr )
    {
      retcode = IrodoriActivity::checkLevelMapOpen(this, chess_level_config_ptr, is_hard_map);
      if ( retcode )
      {
        v10 = retcode;
      }
      else
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 112));
        IrodoriActivity::fillEquipedCardSet(
          this,
          *(_DWORD *)(v3 + 64),
          is_hard_map,
          (std::set<unsigned int> *)(v3 + 112));
        IrodoriActivity::filterValidChessCards(
          &v53,
          this,
          *(_DWORD *)(v3 + 64),
          is_hard_map,
          (const std::set<unsigned int> *)(v3 + 112));
        std::set<unsigned int>::operator=((std::set<unsigned int> *const)(v3 + 112), &v53);
        std::set<unsigned int>::~set(&v53);
        *(_DWORD *)(v3 + 32) = IrodoriActivity::calcTotalCardPoints(this, (const std::set<unsigned int> *)(v3 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&chess_map_config_ptr->total_card_points >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&chess_map_config_ptr->total_card_points >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( chess_map_config_ptr->total_card_points >= *(_DWORD *)(v3 + 32) )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/irodori_activity.cpp",
            "enterChessDungeon",
            1067);
          v25 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v52,
                  (const char (*)[22])"valid chess card set:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int>(v25, (const std::set<unsigned int> *)(v3 + 112));
          common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v26, this);
          common::milog::MiLogStream::~MiLogStream(&v52);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneComp = Player::getSceneComp(this->player_);
          if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/irodori_activity.cpp",
              "enterChessDungeon",
              1072);
            v28 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v52,
                    (const char (*)[36])"[IRODORI_CHESS] not in self world. ");
            common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v28, this);
            common::milog::MiLogStream::~MiLogStream(&v52);
            v10 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MpComp = Player::getMpComp(this->player_);
            if ( PlayerMpComp::isInMpMode(MpComp) )
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/irodori_activity.cpp",
                "enterChessDungeon",
                1078);
              v30 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v52,
                      (const char (*)[43])"[IRODORI_CHESS] can NOT enter in mp mode. ");
              common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v30, this);
              common::milog::MiLogStream::~MiLogStream(&v52);
              v10 = 1202;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Player::getSceneComp(this->player_);
              PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 80));
              if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 80)) )
              {
                common::milog::MiLogStream::create(
                  &v52,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/irodori_activity.cpp",
                  "enterChessDungeon",
                  1085);
                v31 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v52,
                        (const char (*)[36])"[IRODORI_CHESS] scene_ptr is null. ");
                common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v31, this);
                common::milog::MiLogStream::~MiLogStream(&v52);
                v10 = -1;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&chess_map_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)chess_map_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_map_config_ptr->dungeon_id >> 3)
                                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v3 + 48) = chess_map_config_ptr->dungeon_id;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                DungeonComp = Player::getDungeonComp(this->player_);
                memset(&v51, 0, sizeof(v51));
                EnterDungeonOption::EnterDungeonOption(&v51);
                memset(&v53, 0, sizeof(v53));
                std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)&v53);
                if ( *(_BYTE *)(((unsigned __int64)&chess_map_config_ptr->entry_point_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&chess_map_config_ptr->entry_point_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                entry_point_id = chess_map_config_ptr->entry_point_id;
                v34 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                SceneId = Scene::getSceneId(v34);
                PlayerDungeonComp::enterDungeon(
                  &__in,
                  DungeonComp,
                  *(_DWORD *)(v3 + 48),
                  SceneId,
                  entry_point_id,
                  (const std::map<unsigned int,unsigned int> *)&v53,
                  v51);
                std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)&v53);
                ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
                dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
                if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( *ret )
                {
                  if ( *ret < 0 )
                  {
                    common::milog::MiLogStream::create(
                      &v52,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/irodori_activity.cpp",
                      "enterChessDungeon",
                      1095);
                    v36 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                            &v52,
                            (const char (*)[38])"[IRODORI_CHESS] enterDungeon failed. ");
                    v37 = common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v36, this);
                    v38 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                            v37,
                            (const char (*)[15])" ,dungeon_id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v38,
                      (const unsigned int *)(v3 + 48));
                    common::milog::MiLogStream::~MiLogStream(&v52);
                  }
                  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  v10 = *ret;
                }
                else if ( std::operator!=<DungeonScene>(0LL, dungeon_scene_ptr)
                       && (v39 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
                           DungeonScene::getDungeonId(v39) != *(_DWORD *)(v3 + 48)) )
                {
                  common::milog::MiLogStream::create(
                    &v52,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/irodori_activity.cpp",
                    "enterChessDungeon",
                    1103);
                  v41 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                          &v52,
                          (const char (*)[39])"[IRODORI_CHESS] enter dungeon failed. ");
                  common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v41, this);
                  common::milog::MiLogStream::~MiLogStream(&v52);
                  v10 = -1;
                }
                else
                {
                  IrodoriChessDungeonContext::IrodoriChessDungeonContext((IrodoriChessDungeonContext *const)(v3 + 192));
                  *(_DWORD *)(v3 + 240) = *(_DWORD *)(v3 + 64);
                  *(_BYTE *)(v3 + 244) = is_hard_map;
                  std::set<unsigned int>::operator=(
                    (std::set<unsigned int> *const)(v3 + 192),
                    (const std::set<unsigned int> *)(v3 + 112));
                  if ( std::operator!=<DungeonScene>(0LL, dungeon_scene_ptr) )
                  {
                    v42 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                    DungeonScene::setDungeonExtraData<IrodoriChessDungeonContext>(
                      v42,
                      (const IrodoriChessDungeonContext *)(v3 + 192));
                  }
                  v10 = 0;
                  IrodoriChessDungeonContext::~IrodoriChessDungeonContext((IrodoriChessDungeonContext *const)(v3 + 192));
                }
                std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
              }
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 80));
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/irodori_activity.cpp",
            "enterChessDungeon",
            1064);
          v17 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v52,
                  (const char (*)[25])"[IRODORI_CHESS] equiped:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int>(v17, (const std::set<unsigned int> *)(v3 + 112));
          v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v18,
                  (const char (*)[20])" need total points:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v20,
                  (const char (*)[14])" exceeds map:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  &chess_map_config_ptr->map_id);
          v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" limit:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  &chess_map_config_ptr->total_card_points);
          common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v24, this);
          common::milog::MiLogStream::~MiLogStream(&v52);
          v10 = 10307;
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "enterChessDungeon",
        1047);
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v52,
              (const char (*)[23])"[IRODORI_CHESS] level:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" is_hard_map:");
      v15 = common::milog::MiLogStream::operator<<(v14, is_hard_map);
      v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v15,
              (const char (*)[24])" map config not found. ");
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v16, this);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v10 = 5;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/irodori_activity.cpp",
      "enterChessDungeon",
      1040);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v52,
           (const char (*)[23])"[IRODORI_CHESS] level:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           v8,
           (const char (*)[26])" level config not found. ");
    common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v9, this);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v10 = 5;
  }
  result = v10;
  if ( v54 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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
  return result;
};

// Line 1121: range 00000000145443BE-000000001454498A
int32_t __cdecl IrodoriActivity::checkLevelMapOpen(
        const IrodoriActivity *const this,
        const data::IrodoriChessLevelExcelConfig *chess_level_config,
        bool is_hard_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  uint32_t open_days; // r14d
  ActivityIrodoriExcelConfigMgr *p_activity_irodori_config_mgr; // rcx
  uint32_t v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  uint32_t now_time; // [rsp+2Ch] [rbp-B4h]
  uint32_t level_open_day; // [rsp+30h] [rbp-B0h]
  common::tools::transcribe_cv_t_6 *chess_level_data_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-90h] BYREF
  char v26[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 22 normal_best_score:1139";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::checkLevelMapOpen;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)&this->chess_data_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->chess_data_);
  if ( !this->chess_data_.is_open )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/irodori_activity.cpp",
      "checkLevelMapOpen",
      1124);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v25,
           (const char (*)[37])"[IRODORI_CHESS] chess not open yet. ");
    common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 10301;
  }
  else
  {
    now_time = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&chess_level_config->open_days >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chess_level_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chess_level_config->open_days >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    open_days = chess_level_config->open_days;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    p_activity_irodori_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_irodori_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    level_open_day = open_days
                   + ActivityIrodoriExcelConfigMgr::getIrodoriChessOpenDayByActivityId(
                       p_activity_irodori_config_mgr,
                       this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( level_open_day )
      v10 = level_open_day - 1;
    else
      v10 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( now_time >= BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v10) )
    {
      if ( !is_hard_map )
        goto LABEL_28;
      *(_DWORD *)(v3 + 32) = 0;
      chess_level_data_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,IrodoriActivity::ChessLevelData> const>(
                               &this->chess_data_.level_data_map,
                               &chess_level_config->level_id);
      if ( chess_level_data_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&chess_level_data_ptr->normal_map_data.best_score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&chess_level_data_ptr->normal_map_data.best_score >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 32) = chess_level_data_ptr->normal_map_data.best_score;
      }
      if ( *(_BYTE *)(((unsigned __int64)&chess_level_config->unlock_hard_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&chess_level_config->unlock_hard_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( chess_level_config->unlock_hard_score > *(_DWORD *)(v3 + 32) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/irodori_activity.cpp",
          "checkLevelMapOpen",
          1147);
        v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v25,
                (const char (*)[23])"[IRODORI_CHESS] level:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &chess_level_config->level_id);
        v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v15,
                (const char (*)[24])" hard map not unlocked:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 32));
        v18 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v17, (const char (*)[4])" < ");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                &chess_level_config->unlock_hard_score);
        common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v19, this);
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = 10303;
      }
      else
      {
LABEL_28:
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "checkLevelMapOpen",
        1133);
      v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v25,
              (const char (*)[23])"[IRODORI_CHESS] level:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &chess_level_config->level_id);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" not open. ");
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v13, this);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 10302;
    }
  }
  if ( v26 == (char *)v3 )
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

// Line 1155: range 000000001454498C-0000000014544ED6
__int64 __fastcall IrodoriActivity::checkEnterDungeon(IrodoriActivity *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  IrodoriActivity *v5; // rdx
  unsigned __int64 v6; // rax
  char v7; // al
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int retcode; // [rsp+1Ch] [rbp-A4h]
  const data::IrodoriChessLevelExcelConfig *chess_level_config_ptr; // [rsp+20h] [rbp-A0h]
  const data::IrodoriChessMapExcelConfig *map_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-80h] BYREF
  char v23[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 dungeon_id:1154";
  *(_QWORD *)(v2 + 16) = IrodoriActivity::checkEnterDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = dungeon_id;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_11;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(IrodoriActivity *))v6)(v5) || BaseActivity::isSettled(this) )
LABEL_11:
    v7 = 1;
  else
    v7 = 0;
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/irodori_activity.cpp",
      "checkEnterDungeon",
      1158);
    v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v22,
           (const char (*)[45])"[IRODORI_CHESS] activity not open or closed.");
    common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 860LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    chess_level_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessLevelConfigByDungeonId(
                               &v10->design_config.txt_config_mgr.activity_irodori_config_mgr,
                               *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( chess_level_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      map_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByDungeonId(
                         &v13->design_config.txt_config_mgr.activity_irodori_config_mgr,
                         *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( map_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->is_hard_map >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)map_config_ptr - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&map_config_ptr->is_hard_map >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load1(&map_config_ptr->is_hard_map);
        }
        retcode = IrodoriActivity::checkLevelMapOpen(this, chess_level_config_ptr, map_config_ptr->is_hard_map);
        if ( retcode )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/irodori_activity.cpp",
            "checkEnterDungeon",
            1179);
          v16 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v22,
                  (const char (*)[42])"[IRODORI_CHESS] map not open for dungeon:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v17, this);
          common::milog::MiLogStream::~MiLogStream(&v22);
          result = retcode;
        }
        else
        {
          result = 0LL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/irodori_activity.cpp",
          "checkEnterDungeon",
          1172);
        v14 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v22,
                (const char (*)[50])"[IRODORI_CHESS] map config not found for dungeon:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v15, this);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "checkEnterDungeon",
        1165);
      v11 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v22,
              (const char (*)[52])"[IRODORI_CHESS] level config not found for dungeon:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v12, this);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 5LL;
    }
  }
  if ( v23 == (char *)v2 )
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

// Line 1187: range 0000000014544ED8-0000000014545089
void __fastcall IrodoriActivity::fillEquipedCardSet(
        const IrodoriActivity *const this,
        uint32_t level_id,
        bool is_hard,
        std::set<unsigned int> *card_id_set)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  IrodoriActivity::ChessMapData *p_hard_map_data; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::ChessLevelData> >::_Self __y; // [rsp+28h] [rbp-98h] BYREF
  const IrodoriActivity::ChessLevelData *level_data; // [rsp+30h] [rbp-90h]
  const IrodoriActivity::ChessMapData *map_data; // [rsp+38h] [rbp-88h]
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 level_id:1186 64 8 15 level_iter:1188";
  *(_QWORD *)(v4 + 16) = IrodoriActivity::fillEquipedCardSet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = level_id;
  *(std::map<unsigned int,IrodoriActivity::ChessLevelData>::const_iterator *)(v4 + 64) = std::map<unsigned int,IrodoriActivity::ChessLevelData>::find(
                                                                                           &this->chess_data_.level_data_map,
                                                                                           (const std::map<unsigned int,IrodoriActivity::ChessLevelData>::key_type *)(v4 + 48));
  __y._M_node = std::map<unsigned int,IrodoriActivity::ChessLevelData>::end(&this->chess_data_.level_data_map)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::ChessLevelData> >::_Self *)(v4 + 64),
          &__y) )
  {
    level_data = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::ChessLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::ChessLevelData> > *const)(v4 + 64))->second;
    if ( is_hard )
      p_hard_map_data = &level_data->hard_map_data;
    else
      p_hard_map_data = &level_data->normal_map_data;
    map_data = p_hard_map_data;
    std::set<unsigned int>::operator=(card_id_set, &p_hard_map_data->equiped_card_set);
  }
  if ( v13 == (char *)v4 )
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

// Line 1199: range 000000001454508A-0000000014545585
void __fastcall IrodoriActivity::onChessDungeonSettle(
        IrodoriActivity *const this,
        const IrodoriChessDungeonContext *dungeon_context,
        uint32_t settle_score,
        unsigned __int64 is_new_recore)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t level_id; // ecx
  IrodoriActivity::ChessMapData *p_hard_map_data; // rax
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t v10; // ecx
  bool is_hard_map; // dl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  IrodoriActivity::ChessLevelData *level_data; // [rsp+20h] [rbp-B0h]
  IrodoriActivity::ChessMapData *map_data; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-A0h] BYREF
  char v27[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 old_score:1203 64 4 17 settle_score:1198";
  *(_QWORD *)(v4 + 16) = IrodoriActivity::onChessDungeonSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = settle_score;
  level_data = std::map<unsigned int,IrodoriActivity::ChessLevelData>::operator[](
                 &this->chess_data_.level_data_map,
                 &dungeon_context->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_context->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = dungeon_context->level_id;
  if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(level_data);
  }
  level_data->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->is_hard_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)dungeon_context + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->is_hard_map >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&dungeon_context->is_hard_map);
  }
  if ( dungeon_context->is_hard_map )
    p_hard_map_data = &level_data->hard_map_data;
  else
    p_hard_map_data = &level_data->normal_map_data;
  map_data = p_hard_map_data;
  if ( *(_BYTE *)(((unsigned __int64)&p_hard_map_data->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&p_hard_map_data->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v4 + 48) = map_data->best_score;
  if ( map_data->best_score < *(_DWORD *)(v4 + 64) )
  {
    map_data->best_score = *(_DWORD *)(v4 + 64);
    if ( *(_BYTE *)((is_new_recore >> 3) + 0x7FFF8000) != 0
      && (char)(is_new_recore & 7) >= *(_BYTE *)((is_new_recore >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(is_new_recore);
    }
    *(_BYTE *)is_new_recore = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(this->player_);
    v10 = *(_DWORD *)(v4 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->is_hard_map >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)dungeon_context + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->is_hard_map >> 3)
                                                                   + 0x7FFF8000) )
    {
      WatcherComp = (PlayerWatcherComp *)&dungeon_context->is_hard_map;
      __asan_report_load1(&dungeon_context->is_hard_map);
    }
    is_hard_map = dungeon_context->is_hard_map;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->level_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_context->level_id >> 3) + 0x7FFF8000) <= 3 )
    {
      WatcherComp = (PlayerWatcherComp *)&dungeon_context->level_id;
      __asan_report_load4();
    }
    PlayerWatcherComp::triggerIrodoriChessSettleNewRecord(WatcherComp, dungeon_context->level_id, is_hard_map, v10);
    BaseActivity::notifyClientData(this, 0);
  }
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/irodori_activity.cpp",
    "onChessDungeonSettle",
    1211);
  v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v26,
          (const char (*)[23])"[IRODORI_CHESS] level:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &dungeon_context->level_id);
  v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])", is_hard_map:");
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_context->is_hard_map >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)dungeon_context + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_context->is_hard_map >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&dungeon_context->is_hard_map);
  }
  v15 = common::milog::MiLogStream::operator<<(v14, dungeon_context->is_hard_map);
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])", settle_score:");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 48));
  v18 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v17, (const char (*)[3])"=>");
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
  v20 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v19, (const char (*)[3])". ");
  common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v20, this);
  common::milog::MiLogStream::~MiLogStream(&v26);
  if ( v27 == (char *)v4 )
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

// Line 1215: range 0000000014545586-00000000145455E5
void __cdecl IrodoriActivity::openChessByGm(IrodoriActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->chess_data_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->chess_data_);
  this->chess_data_.is_open = 1;
  BaseActivity::notifyClientData(this, 0);
};

// Line 1221: range 00000000145455E6-00000000145458FC
void __fastcall IrodoriActivity::setChessScoreByGm(
        IrodoriActivity *const this,
        uint32_t level_id,
        bool is_hard_map,
        uint32_t score)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // ecx
  IrodoriActivity::ChessMapData *p_hard_map_data; // rax
  const data::IrodoriChessMapExcelConfig *chess_map_config_ptr; // [rsp+28h] [rbp-A8h]
  IrodoriActivity::ChessLevelData *level_data; // [rsp+30h] [rbp-A0h]
  IrodoriActivity::ChessMapData *map_data; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-80h] BYREF
  char v22[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 level_id:1220";
  *(_QWORD *)(v4 + 16) = IrodoriActivity::setChessScoreByGm;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  chess_map_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByLevelIdAndDifficulty(
                           &v7->design_config.txt_config_mgr.activity_irodori_config_mgr,
                           *(_DWORD *)(v4 + 32),
                           is_hard_map);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( chess_map_config_ptr )
  {
    level_data = std::map<unsigned int,IrodoriActivity::ChessLevelData>::operator[](
                   &this->chess_data_.level_data_map,
                   (const std::map<unsigned int,IrodoriActivity::ChessLevelData>::key_type *)(v4 + 32));
    v13 = *(_DWORD *)(v4 + 32);
    if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(level_data);
    }
    level_data->level_id = v13;
    if ( is_hard_map )
      p_hard_map_data = &level_data->hard_map_data;
    else
      p_hard_map_data = &level_data->normal_map_data;
    map_data = p_hard_map_data;
    if ( *(_BYTE *)(((unsigned __int64)&p_hard_map_data->best_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_hard_map_data->best_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&p_hard_map_data->best_score);
    }
    map_data->best_score = score;
    BaseActivity::notifyClientData(this, 0);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/irodori_activity.cpp",
      "setChessScoreByGm",
      1225);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v21,
           (const char (*)[23])"[IRODORI_CHESS] level:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" is_hard_map:");
    v11 = common::milog::MiLogStream::operator<<(v10, is_hard_map);
    v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v11,
            (const char (*)[24])" map config not found. ");
    common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v12, this);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1236: range 00000000145458FE-0000000014545928
int32_t __cdecl IrodoriActivity::enterChessMapByGm(IrodoriActivity *const this, uint32_t level_id, bool is_hard_map)
{
  return IrodoriActivity::enterChessDungeon(this, level_id, is_hard_map);
};

// Line 1241: range 000000001454592A-0000000014545C40
uint32_t __cdecl IrodoriActivity::calcTotalCardPoints(
        const IrodoriActivity *const this,
        const std::set<unsigned int> *card_id_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  uint32_t result; // eax
  unsigned int total_need_points; // [rsp+1Ch] [rbp-B4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const data::IrodoriChessCardExcelConfig *card_config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-80h] BYREF
  char v18[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 card_id:1243";
  *(_QWORD *)(v2 + 16) = IrodoriActivity::calcTotalCardPoints;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  total_need_points = 0;
  __for_range = card_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(card_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(card_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    card_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessCardExcelConfig(
                        &v6->design_config.txt_config_mgr.activity_irodori_config_mgr,
                        *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( card_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->cost_points >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      total_need_points = SAFE_ADD<unsigned int,unsigned int>(total_need_points, card_config_ptr->cost_points);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/irodori_activity.cpp",
        "calcTotalCardPoints",
        1248);
      v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v17,
             (const char (*)[23])"[IRODORI_CHESS] card: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])" config not exist.");
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v9, this);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  result = total_need_points;
  if ( v18 == (char *)v2 )
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

// Line 1257: range 0000000014545C42-00000000145460EA
__int64 __fastcall IrodoriActivity::setMapCardsByGm(
        IrodoriActivity *const this,
        uint32_t level_id,
        bool is_hard_map,
        const std::set<unsigned int> *card_set)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t v22; // ecx
  std::set<unsigned int> *p_equiped_card_set; // rax
  const data::IrodoriChessMapExcelConfig *chess_map_config_ptr; // [rsp+28h] [rbp-C8h]
  IrodoriActivity::ChessLevelData *level_data; // [rsp+30h] [rbp-C0h]
  std::shared_ptr<Config> v28; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v29; // [rsp+50h] [rbp-A0h] BYREF
  char v30[128]; // [rsp+70h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 22 total_need_points:1265 64 4 13 level_id:1256";
  *(_QWORD *)(v4 + 16) = IrodoriActivity::setMapCardsByGm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
  chess_map_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByLevelIdAndDifficulty(
                           &v7->design_config.txt_config_mgr.activity_irodori_config_mgr,
                           *(_DWORD *)(v4 + 64),
                           is_hard_map);
  std::shared_ptr<Config>::~shared_ptr(&v28);
  if ( chess_map_config_ptr )
  {
    *(_DWORD *)(v4 + 48) = IrodoriActivity::calcTotalCardPoints(this, card_set);
    if ( *(_BYTE *)(((unsigned __int64)&chess_map_config_ptr->total_card_points >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&chess_map_config_ptr->total_card_points >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( chess_map_config_ptr->total_card_points >= *(_DWORD *)(v4 + 48) )
    {
      level_data = std::map<unsigned int,IrodoriActivity::ChessLevelData>::operator[](
                     &this->chess_data_.level_data_map,
                     (const std::map<unsigned int,IrodoriActivity::ChessLevelData>::key_type *)(v4 + 64));
      v22 = *(_DWORD *)(v4 + 64);
      if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(level_data);
      }
      level_data->level_id = v22;
      if ( is_hard_map )
        p_equiped_card_set = &level_data->hard_map_data.equiped_card_set;
      else
        p_equiped_card_set = &level_data->normal_map_data.equiped_card_set;
      std::set<unsigned int>::operator=(p_equiped_card_set, card_set);
      BaseActivity::notifyClientData(this, 0);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/irodori_activity.cpp",
        "setMapCardsByGm",
        1268);
      v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v29,
              (const char (*)[23])"[IRODORI_CHESS] cards:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int>(v14, card_set);
      v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v15,
              (const char (*)[20])" need total points:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" exceed map:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &chess_map_config_ptr->map_id);
      v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" limit:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v20,
              &chess_map_config_ptr->total_card_points);
      common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v21, this);
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "setMapCardsByGm",
      1261);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v29,
           (const char (*)[23])"[IRODORI_CHESS] level:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" is_hard_map:");
    v11 = common::milog::MiLogStream::operator<<(v10, is_hard_map);
    v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v11,
            (const char (*)[24])" map config not found. ");
    common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v12, this);
    common::milog::MiLogStream::~MiLogStream(&v29);
    result = 0xFFFFFFFFLL;
  }
  if ( v30 == (char *)v4 )
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

// Line 1281: range 00000000145460EC-00000000145462C1
__int64 __fastcall IrodoriActivity::getChessMapBestScore(
        const IrodoriActivity *const this,
        uint32_t level_id,
        bool is_hard_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  IrodoriActivity::ChessMapData *p_hard_map_data; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::ChessLevelData> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  const IrodoriActivity::ChessLevelData *chess_level_data; // [rsp+20h] [rbp-90h]
  const IrodoriActivity::ChessMapData *chess_map_data; // [rsp+28h] [rbp-88h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 level_id:1280 64 8 15 level_iter:1282";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::getChessMapBestScore;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = level_id;
  *(std::map<unsigned int,IrodoriActivity::ChessLevelData>::const_iterator *)(v3 + 64) = std::map<unsigned int,IrodoriActivity::ChessLevelData>::find(
                                                                                           &this->chess_data_.level_data_map,
                                                                                           (const std::map<unsigned int,IrodoriActivity::ChessLevelData>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,IrodoriActivity::ChessLevelData>::end(&this->chess_data_.level_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::ChessLevelData> >::_Self *)(v3 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    chess_level_data = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::ChessLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriActivity::ChessLevelData> > *const)(v3 + 64))->second;
    if ( is_hard_map )
      p_hard_map_data = &chess_level_data->hard_map_data;
    else
      p_hard_map_data = &chess_level_data->normal_map_data;
    chess_map_data = p_hard_map_data;
    if ( *(_BYTE *)(((unsigned __int64)&p_hard_map_data->best_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&p_hard_map_data->best_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    result = chess_map_data->best_score;
  }
  if ( v12 == (char *)v3 )
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

// Line 1293: range 00000000145462C2-0000000014546842
std::set<unsigned int> *__fastcall IrodoriActivity::filterValidChessCards(
        std::set<unsigned int> *retstr,
        const IrodoriActivity *const this,
        uint32_t level_id,
        bool is_hard_map,
        const std::set<unsigned int> *card_id_set)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v14; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const data::IrodoriChessMapExcelConfig *chess_map_config_ptr; // [rsp+38h] [rbp-C8h]
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-C0h]
  const data::IrodoriChessCardExcelConfig *card_config_ptr; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v34; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-A0h] BYREF
  char v36[128]; // [rsp+80h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 12 card_id:1302 64 4 13 level_id:1292";
  *(_QWORD *)(v5 + 16) = IrodoriActivity::filterValidChessCards;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = level_id;
  std::set<unsigned int>::set(retstr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  chess_map_config_ptr = ActivityIrodoriExcelConfigMgr::findIrodoriChessMapConfigByLevelIdAndDifficulty(
                           &v8->design_config.txt_config_mgr.activity_irodori_config_mgr,
                           *(_DWORD *)(v5 + 64),
                           is_hard_map);
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( chess_map_config_ptr )
  {
    __for_range = card_id_set;
    __for_begin._M_node = std::set<unsigned int>::begin(card_id_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(card_id_set)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v5 + 48) = *v14;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v34);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
      card_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriChessCardExcelConfig(
                          &v15->design_config.txt_config_mgr.activity_irodori_config_mgr,
                          *(_DWORD *)(v5 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v34);
      if ( card_config_ptr )
      {
        if ( !common::tools::MiscUtils::isContains<unsigned int>(
                &chess_map_config_ptr->card_pool,
                (const unsigned int *)(v5 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/irodori_activity.cpp",
            "filterValidChessCards",
            1312);
          v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v35,
                  (const char (*)[22])"[IRODORI_CHESS] card:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v5 + 48));
          v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" not in map:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  &chess_map_config_ptr->map_id);
          v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" card pool:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int>(v23, &chess_map_config_ptr->card_pool);
          common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v24, this);
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
        else
        {
          std::set<unsigned int>::insert(retstr, (const std::set<unsigned int>::value_type *)(v5 + 48));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/irodori_activity.cpp",
          "filterValidChessCards",
          1307);
        v16 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v35,
                (const char (*)[23])"[IRODORI_CHESS] card: ");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v5 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v17,
                (const char (*)[19])" config not exist.");
        common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v18, this);
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/irodori_activity.cpp",
      "filterValidChessCards",
      1299);
    v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v35,
           (const char (*)[23])"[IRODORI_CHESS] level:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])", is_hard_map:");
    v12 = common::milog::MiLogStream::operator<<(v11, is_hard_map);
    v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v12,
            (const char (*)[24])" map config not found. ");
    common::milog::MiLogStream::operator<<<IrodoriActivity,(IrodoriActivity*)0>(v13, this);
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  if ( v36 == (char *)v5 )
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
  return retstr;
};

// Line 1322: range 0000000014546844-0000000014546993
int32_t __cdecl IrodoriMasterLevelDetailData::fromBin(
        IrodoriMasterLevelDetailData *const this,
        const proto::IrodoriMasterLevelDetailBin *detail_bin)
{
  uint32_t v2; // ecx
  bool have_try; // cl
  bool is_finish; // cl
  uint32_t v5; // ecx

  v2 = proto::IrodoriMasterLevelDetailBin::difficulty(detail_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->difficulty = v2;
  have_try = proto::IrodoriMasterLevelDetailBin::is_have_try(detail_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_try >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_try >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_have_try);
  }
  this->is_have_try = have_try;
  is_finish = proto::IrodoriMasterLevelDetailBin::is_finish(detail_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish);
  }
  this->is_finish = is_finish;
  v5 = proto::IrodoriMasterLevelDetailBin::min_finish_time(detail_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_finish_time);
  }
  this->min_finish_time = v5;
  return 0;
};

// Line 1331: range 0000000014546994-0000000014546AE7
int32_t __cdecl IrodoriMasterLevelDetailData::toBin(
        const IrodoriMasterLevelDetailData *const this,
        proto::IrodoriMasterLevelDetailBin *detail_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IrodoriMasterLevelDetailBin::set_difficulty(detail_bin, this->difficulty);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_try >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_try >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_try);
  }
  proto::IrodoriMasterLevelDetailBin::set_is_have_try(detail_bin, this->is_have_try);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish);
  }
  proto::IrodoriMasterLevelDetailBin::set_is_finish(detail_bin, this->is_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IrodoriMasterLevelDetailBin::set_min_finish_time(detail_bin, this->min_finish_time);
  return 0;
};

// Line 1340: range 0000000014546AE8-0000000014546C3B
int32_t __cdecl IrodoriMasterLevelDetailData::toClient(
        const IrodoriMasterLevelDetailData *const this,
        proto::IrodoriMasterLevelDetailInfo *detail_info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IrodoriMasterLevelDetailInfo::set_diffculty(detail_info, this->difficulty);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_have_try >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_have_try >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_have_try);
  }
  proto::IrodoriMasterLevelDetailInfo::set_is_have_try(detail_info, this->is_have_try);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish);
  }
  proto::IrodoriMasterLevelDetailInfo::set_is_finish(detail_info, this->is_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_finish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::IrodoriMasterLevelDetailInfo::set_min_finish_time(detail_info, this->min_finish_time);
  return 0;
};

// Line 1349: range 0000000014546C3C-0000000014547052
__int64 __fastcall IrodoriMasterLevelData::init(IrodoriMasterLevelData *const this, uint32_t id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  uint32_t v8; // ecx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rdx
  IrodoriMasterLevelDetailData *v10; // rax
  unsigned int *v11; // rcx
  IrodoriMasterLevelDetailData *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const data::IrodoriMasterLevelExcelConfig *level_config_ptr; // [rsp+20h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 difficulty:1357 48 4 7 id:1348 64 12 16 detail_data:1359";
  *(_QWORD *)(v2 + 16) = IrodoriMasterLevelData::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202177536;
  *(_DWORD *)(v2 + 48) = id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  level_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriMasterLevelExcelConfig(
                       &v5->design_config.txt_config_mgr.activity_irodori_config_mgr,
                       *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( level_config_ptr )
  {
    v8 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(this);
    }
    this->level_id = v8;
    __for_range = &ActivityIrodoriExcelConfigMgr::master_difficulty_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&ActivityIrodoriExcelConfigMgr::master_difficulty_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&ActivityIrodoriExcelConfigMgr::master_difficulty_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v9;
      *(_DWORD *)(v2 + 64) = 0;
      *(_BYTE *)(v2 + 68) = 0;
      *(_BYTE *)(v2 + 69) = 0;
      *(_DWORD *)(v2 + 72) = 0;
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 32);
      v10 = std::move<IrodoriMasterLevelDetailData &>((IrodoriMasterLevelDetailData *)(v2 + 64));
      v13 = std::map<unsigned int,IrodoriMasterLevelDetailData>::emplace<unsigned int &,IrodoriMasterLevelDetailData>(
              &this->level_detail_map,
              (unsigned int *)(v2 + 32),
              v10,
              v11,
              v12);
      if ( !v13.second )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/irodori_activity.cpp",
          "init",
          1363);
        v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v22,
                (const char (*)[32])"[IRODORI] duplicate difficulty:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 32));
        v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])", level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->level_id);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = 0xFFFFFFFFLL;
        goto LABEL_16;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "init",
      1353);
    v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v22,
           (const char (*)[56])"[IRODORI] findIrodoriMasterLevelExcelConfig failed, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
LABEL_16:
  if ( v23 == (char *)v2 )
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

// Line 1371: range 0000000014547054-0000000014547420
int32_t __cdecl IrodoriMasterLevelData::fromBin(
        IrodoriMasterLevelData *const this,
        const proto::IrodoriMasterLevelBin *level_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // edx
  bool is_cg_viewed; // dl
  int32_t result; // eax
  IrodoriMasterLevelDetailData *v8; // r15
  unsigned int *v9; // rcx
  IrodoriMasterLevelDetailData *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::IrodoriMasterLevelDetailBin>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::IrodoriMasterLevelDetailBin>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::IrodoriMasterLevelDetailBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const proto::IrodoriMasterLevelDetailBin *detail_bin; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 16 detail_data:1376";
  *(_QWORD *)(v2 + 16) = IrodoriMasterLevelData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  v5 = proto::IrodoriMasterLevelBin::level_id(level_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = v5;
  is_cg_viewed = proto::IrodoriMasterLevelBin::is_cg_viewed(level_bin);
  if ( *(char *)(((unsigned __int64)&this->is_cg_viewed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cg_viewed);
  this->is_cg_viewed = is_cg_viewed;
  __for_range = proto::IrodoriMasterLevelBin::level_detail_list(level_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::IrodoriMasterLevelDetailBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::IrodoriMasterLevelDetailBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriMasterLevelDetailBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    detail_bin = google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriMasterLevelDetailBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 37) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    if ( IrodoriMasterLevelDetailData::fromBin((IrodoriMasterLevelDetailData *const)(v2 + 32), detail_bin) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/irodori_activity.cpp",
        "fromBin",
        1379);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v20,
        (const char (*)[37])"[IRODORI] detail_data fromBin failed");
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = -1;
      goto LABEL_16;
    }
    v8 = std::move<IrodoriMasterLevelDetailData &>((IrodoriMasterLevelDetailData *)(v2 + 32));
    val = proto::IrodoriMasterLevelDetailBin::difficulty(detail_bin);
    v11 = std::map<unsigned int,IrodoriMasterLevelDetailData>::emplace<unsigned int,IrodoriMasterLevelDetailData>(
            &this->level_detail_map,
            &val,
            v8,
            v9,
            v10);
    if ( !v11.second )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/irodori_activity.cpp",
        "fromBin",
        1384);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v20,
              (const char (*)[32])"[IRODORI] duplicate difficulty:");
      val = proto::IrodoriMasterLevelDetailBin::difficulty(detail_bin);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])", level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->level_id);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriMasterLevelDetailBin const>::operator++(&__for_begin);
  }
  result = 0;
LABEL_16:
  if ( v21 == (char *)v2 )
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

// Line 1392: range 0000000014547422-00000000145475F1
int32_t __cdecl IrodoriMasterLevelData::toBin(
        const IrodoriMasterLevelData *const this,
        proto::IrodoriMasterLevelBin *level_bin)
{
  std::map<unsigned int,IrodoriMasterLevelDetailData>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,IrodoriMasterLevelDetailData>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::map<unsigned int,IrodoriMasterLevelDetailData> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,IrodoriMasterLevelDetailData> *v6; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::type *difficulty; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::type *detail_data; // [rsp+40h] [rbp-40h]
  proto::IrodoriMasterLevelDetailBin *detail_bin; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::IrodoriMasterLevelBin::set_level_id(level_bin, this->level_id);
  if ( *(char *)(((unsigned __int64)&this->is_cg_viewed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_cg_viewed);
  proto::IrodoriMasterLevelBin::set_is_cg_viewed(level_bin, this->is_cg_viewed);
  __for_range = &this->level_detail_map;
  __for_begin._M_node = std::map<unsigned int,IrodoriMasterLevelDetailData>::begin(&this->level_detail_map)._M_node;
  __for_end._M_node = std::map<unsigned int,IrodoriMasterLevelDetailData>::end(&this->level_detail_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator*(&__for_begin);
    difficulty = std::get<0ul,unsigned int const,IrodoriMasterLevelDetailData>(v6);
    detail_data = (std::tuple_element<1,const std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::type *)std::get<1ul,unsigned int const,IrodoriMasterLevelDetailData>(v6);
    detail_bin = proto::IrodoriMasterLevelBin::add_level_detail_list(level_bin);
    if ( IrodoriMasterLevelDetailData::toBin(detail_data, detail_bin) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/irodori_activity.cpp",
        "toBin",
        1400);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v10,
        (const char (*)[35])"[IRODORI] detail_data toBin failed");
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1408: range 00000000145475F2-0000000014547775
int32_t __cdecl IrodoriMasterLevelData::toClient(
        const IrodoriMasterLevelData *const this,
        proto::IrodoriMasterLevelInfo *level_info)
{
  std::map<unsigned int,IrodoriMasterLevelDetailData>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,IrodoriMasterLevelDetailData>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::map<unsigned int,IrodoriMasterLevelDetailData> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,IrodoriMasterLevelDetailData> *v6; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::type *difficulty; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::type *detail_data; // [rsp+40h] [rbp-40h]
  proto::IrodoriMasterLevelDetailInfo *detail_info; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::IrodoriMasterLevelInfo::set_level_id(level_info, this->level_id);
  __for_range = &this->level_detail_map;
  __for_begin._M_node = std::map<unsigned int,IrodoriMasterLevelDetailData>::begin(&this->level_detail_map)._M_node;
  __for_end._M_node = std::map<unsigned int,IrodoriMasterLevelDetailData>::end(&this->level_detail_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator*(&__for_begin);
    difficulty = std::get<0ul,unsigned int const,IrodoriMasterLevelDetailData>(v6);
    detail_data = (std::tuple_element<1,const std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::type *)std::get<1ul,unsigned int const,IrodoriMasterLevelDetailData>(v6);
    detail_info = proto::IrodoriMasterLevelInfo::add_detail_info(level_info);
    if ( IrodoriMasterLevelDetailData::toClient(detail_data, detail_info) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/irodori_activity.cpp",
        "toClient",
        1415);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v10,
        (const char (*)[38])"[IRODORI] detail_data toClient failed");
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1423: range 0000000014547776-0000000014547BEB
int32_t __cdecl IrodoriActivity::masterFromBin(
        IrodoriActivity *const this,
        const proto::IrodoriScheduleBin *schedule_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  int v6; // r14d
  IrodoriMasterLevelData *v7; // r15
  unsigned int *v8; // rcx
  IrodoriMasterLevelData *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  uint32_t v14; // edx
  int32_t result; // eax
  int32_t v16; // [rsp+Ch] [rbp-114h]
  unsigned int v17; // [rsp+28h] [rbp-F8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  google::protobuf::RepeatedPtrField<proto::IrodoriMasterLevelBin>::const_iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::IrodoriMasterLevelBin>::const_iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::IrodoriMasterLevelBin> *__for_range; // [rsp+40h] [rbp-E0h]
  const proto::IrodoriMasterLevelBin *level_bin; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 64 15 level_data:1426";
  *(_QWORD *)(v2 + 16) = IrodoriActivity::masterFromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450892) = -202116109;
  __for_range = proto::IrodoriScheduleBin::master_level_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::IrodoriMasterLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::IrodoriMasterLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriMasterLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriMasterLevelBin const>::operator*(&__for_begin);
    IrodoriMasterLevelData::IrodoriMasterLevelData((IrodoriMasterLevelData *const)(v2 + 32));
    if ( IrodoriMasterLevelData::fromBin((IrodoriMasterLevelData *const)(v2 + 32), level_bin) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/irodori_activity.cpp",
        "masterFromBin",
        1429);
      v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v23,
             (const char (*)[42])"[IRODORI] level_data fromBin failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v16 = -1;
      v6 = 0;
    }
    else
    {
      v7 = std::move<IrodoriMasterLevelData &>((IrodoriMasterLevelData *)(v2 + 32));
      val = proto::IrodoriMasterLevelBin::level_id(level_bin);
      v10 = std::map<unsigned int,IrodoriMasterLevelData>::emplace<unsigned int,IrodoriMasterLevelData>(
              &this->master_level_map_,
              &val,
              v7,
              v8,
              v9);
      if ( !v10.second )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/irodori_activity.cpp",
          "masterFromBin",
          1434);
        v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v23,
                (const char (*)[42])"[IRODORI] duplicate level_data, level_id:");
        v17 = proto::IrodoriMasterLevelBin::level_id(level_bin);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v17);
        v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v6 = 1;
      }
      else
      {
        v6 = 2;
      }
    }
    IrodoriMasterLevelData::~IrodoriMasterLevelData((IrodoriMasterLevelData *const)(v2 + 32));
    if ( !v6 )
      goto LABEL_20;
    google::protobuf::internal::RepeatedPtrIterator<proto::IrodoriMasterLevelBin const>::operator++(&__for_begin);
  }
  v14 = proto::IrodoriScheduleBin::master_transaction_no(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->master_transaction_no_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->master_transaction_no_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->master_transaction_no_);
  }
  this->master_transaction_no_ = v14;
  v16 = 0;
LABEL_20:
  result = v16;
  if ( v24 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1443: range 0000000014547BEC-0000000014547DCC
int32_t __cdecl IrodoriActivity::masterToBin(
        const IrodoriActivity *const this,
        proto::IrodoriScheduleBin *schedule_bin)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+14h] [rbp-6Ch] BYREF
  std::map<unsigned int,IrodoriMasterLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,IrodoriMasterLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::map<unsigned int,IrodoriMasterLevelData> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,IrodoriMasterLevelData> *v8; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,IrodoriMasterLevelData> >::type *id; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,IrodoriMasterLevelData> >::type *level_data; // [rsp+40h] [rbp-40h]
  proto::IrodoriMasterLevelBin *level_bin; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->master_level_map_;
  __for_begin._M_node = std::map<unsigned int,IrodoriMasterLevelData>::begin(&this->master_level_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,IrodoriMasterLevelData>::end(&this->master_level_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,IrodoriMasterLevelData>(v8);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,IrodoriMasterLevelData> >::type *)std::get<1ul,unsigned int const,IrodoriMasterLevelData>(v8);
    level_bin = proto::IrodoriScheduleBin::add_master_level_list(schedule_bin);
    if ( IrodoriMasterLevelData::toBin(level_data, level_bin) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/irodori_activity.cpp",
        "masterToBin",
        1449);
      v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v12,
             (const char (*)[40])"[IRODORI] level_data toBin failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->master_transaction_no_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->master_transaction_no_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::IrodoriScheduleBin::set_master_transaction_no(schedule_bin, this->master_transaction_no_);
  return 0;
};

// Line 1458: range 0000000014547DCE-0000000014547F5E
int32_t __cdecl IrodoriActivity::masterToClient(
        const IrodoriActivity *const this,
        proto::IrodoriActivityDetailInfo *detail_info)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+14h] [rbp-6Ch] BYREF
  std::map<unsigned int,IrodoriMasterLevelData>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,IrodoriMasterLevelData>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::map<unsigned int,IrodoriMasterLevelData> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,IrodoriMasterLevelData> *v8; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,IrodoriMasterLevelData> >::type *id; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,IrodoriMasterLevelData> >::type *level_data; // [rsp+40h] [rbp-40h]
  proto::IrodoriMasterLevelInfo *level_info; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->master_level_map_;
  __for_begin._M_node = std::map<unsigned int,IrodoriMasterLevelData>::begin(&this->master_level_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,IrodoriMasterLevelData>::end(&this->master_level_map_)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
      return 0;
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,IrodoriMasterLevelData>(v8);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,IrodoriMasterLevelData> >::type *)std::get<1ul,unsigned int const,IrodoriMasterLevelData>(v8);
    level_info = proto::IrodoriActivityDetailInfo::add_master_level_list(detail_info);
    if ( IrodoriMasterLevelData::toClient(level_data, level_info) )
      break;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/activity/irodori_activity.cpp",
    "masterToClient",
    1464);
  v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         &v12,
         (const char (*)[43])"[IRODORI] level_data toClient failed, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v12);
  return -1;
};

// Line 1471: range 0000000014547F60-0000000014548346
__int64 __fastcall IrodoriActivity::openMasterLevelByGm(IrodoriActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  IrodoriMasterLevelData *v8; // rax
  unsigned int *v9; // rcx
  IrodoriMasterLevelData *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  common::milog::MiLogStream v15; // [rsp+10h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 level_id:1470 64 64 15 level_data:1477";
  *(_QWORD *)(v2 + 16) = IrodoriActivity::openMasterLevelByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = level_id;
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,IrodoriMasterLevelData>,unsigned int>(
         &this->master_level_map_,
         (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "openMasterLevelByGm",
      1474);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v15,
           (const char (*)[41])"[IRODORI] level is already unlocked, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v6 = -1;
  }
  else
  {
    IrodoriMasterLevelData::IrodoriMasterLevelData((IrodoriMasterLevelData *const)(v2 + 64));
    if ( (unsigned int)IrodoriMasterLevelData::init((IrodoriMasterLevelData *const)(v2 + 64), *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/irodori_activity.cpp",
        "openMasterLevelByGm",
        1480);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v15,
             (const char (*)[33])"[IRODORI] level init failed, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v6 = -1;
    }
    else
    {
      v8 = std::move<IrodoriMasterLevelData &>((IrodoriMasterLevelData *)(v2 + 64));
      v11 = std::map<unsigned int,IrodoriMasterLevelData>::emplace<unsigned int &,IrodoriMasterLevelData>(
              &this->master_level_map_,
              (unsigned int *)(v2 + 48),
              v8,
              v9,
              v10);
      if ( !v11.second )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/irodori_activity.cpp",
          "openMasterLevelByGm",
          1485);
        v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v15,
                (const char (*)[31])"[IRODORI] duplicate level, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v15);
        v6 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/irodori_activity.cpp",
          "openMasterLevelByGm",
          1488);
        v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v15,
                (const char (*)[42])"[IRODORI] master level is open, level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v15);
        BaseActivity::notifyClientData(this, 0);
        v6 = 0;
      }
    }
    IrodoriMasterLevelData::~IrodoriMasterLevelData((IrodoriMasterLevelData *const)(v2 + 64));
  }
  result = v6;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 1494: range 0000000014548348-000000001454842C
int32_t __cdecl IrodoriActivity::resetCgViewByGm(IrodoriActivity *const this)
{
  std::map<unsigned int,IrodoriMasterLevelData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,IrodoriMasterLevelData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,IrodoriMasterLevelData> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,IrodoriMasterLevelData> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,IrodoriMasterLevelData> >::type *id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,IrodoriMasterLevelData> >::type *level_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->master_level_map_;
  __for_begin._M_node = std::map<unsigned int,IrodoriMasterLevelData>::begin(&this->master_level_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,IrodoriMasterLevelData>::end(&this->master_level_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,IrodoriMasterLevelData>(__in);
    level_data = std::get<1ul,unsigned int const,IrodoriMasterLevelData>(__in);
    if ( *(char *)(((unsigned __int64)&level_data->is_cg_viewed >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&level_data->is_cg_viewed);
    level_data->is_cg_viewed = 0;
    std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  return 0;
};

// Line 1504: range 000000001454842E-0000000014548A0C
void __fastcall IrodoriActivity::onIrodoriMasterGalleryCgEnd(
        IrodoriActivity *const this,
        uint32_t gallery_id,
        uint32_t level_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Scene *v13; // rax
  uint32_t GalleryComp; // ecx
  common::milog::MiLogStream *v15; // rax
  IrodoriMasterGallery *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::pointer v18; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::_Self __y; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 15 gallery_id:1503 48 4 13 level_id:1503 64 8 15 level_iter:1525 96 16 14 scene_ptr:1511 "
                        "128 16 16 gallery_ptr:1517";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::onIrodoriMasterGalleryCgEnd;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 32) = gallery_id;
  *(_DWORD *)(v3 + 48) = level_id;
  if ( !IrodoriActivity::isCurrentIrodoriMasterGallery(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "onIrodoriMasterGalleryCgEnd",
      1507);
    v6 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v21,
           (const char (*)[61])"[IrodoriMaster] current master gallery not match, gallery_id");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", level_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])", cur_gallery_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->master_gallery_id_);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])", cur_level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->master_level_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/irodori_activity.cpp",
        "onIrodoriMasterGalleryCgEnd",
        1514);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v21,
        (const char (*)[36])"[IrodoriMaster] getCurScene nullptr");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      GalleryComp = (unsigned int)Scene::getGalleryComp(v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      SceneGalleryComp::findGallery<IrodoriMasterGallery>((SceneGalleryComp *const)(v3 + 128), GalleryComp);
      if ( std::operator==<IrodoriMasterGallery>(0LL, (const std::shared_ptr<IrodoriMasterGallery> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/irodori_activity.cpp",
          "onIrodoriMasterGalleryCgEnd",
          1520);
        v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v21,
                (const char (*)[49])"[IrodoriMaster] findGallery nullptr, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->master_gallery_id_);
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
      else
      {
        v16 = std::__shared_ptr_access<IrodoriMasterGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriMasterGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        IrodoriMasterGallery::onCgEnd(v16);
        *(std::map<unsigned int,IrodoriMasterLevelData>::iterator *)(v3 + 64) = std::map<unsigned int,IrodoriMasterLevelData>::find(
                                                                                  &this->master_level_map_,
                                                                                  (const std::map<unsigned int,IrodoriMasterLevelData>::key_type *)(v3 + 48));
        __y._M_node = std::map<unsigned int,IrodoriMasterLevelData>::end(&this->master_level_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::_Self *)(v3 + 64),
               &__y) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/irodori_activity.cpp",
            "onIrodoriMasterGalleryCgEnd",
            1528);
          v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v21,
                  (const char (*)[45])"[IrodoriMaster] level is not open, level_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v21);
        }
        else
        {
          v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> > *const)(v3 + 64));
          if ( *(char *)(((unsigned __int64)&v18->second.is_cg_viewed >> 3) + 0x7FFF8000) < 0 )
            v18 = (std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::pointer)__asan_report_store1(&v18->second.is_cg_viewed);
          v18->second.is_cg_viewed = 1;
        }
      }
      std::shared_ptr<IrodoriMasterGallery>::~shared_ptr((std::shared_ptr<IrodoriMasterGallery> *const)(v3 + 128));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  }
  if ( v22 == (char *)v3 )
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

// Line 1535: range 0000000014548A0E-0000000014548D7D
__int64 __fastcall IrodoriActivity::clearCurrentIrodoriMasterGallery(
        IrodoriActivity *const this,
        uint32_t gallery_id,
        uint32_t level_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream v18; // [rsp+10h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 gallery_id:1534 64 4 13 level_id:1534";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::clearCurrentIrodoriMasterGallery;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = gallery_id;
  *(_DWORD *)(v3 + 64) = level_id;
  if ( !IrodoriActivity::isCurrentIrodoriMasterGallery(this, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "clearCurrentIrodoriMasterGallery",
      1538);
    v6 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           &v18,
           (const char (*)[61])"[IrodoriMaster] current master gallery not match, gallery_id");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", level_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])", cur_gallery_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->master_gallery_id_);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])", cur_level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->master_level_id_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->master_gallery_id_);
    }
    this->master_gallery_id_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->master_level_id_);
    }
    this->master_level_id_ = 0;
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/irodori_activity.cpp",
      "clearCurrentIrodoriMasterGallery",
      1544);
    v14 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            &v18,
            (const char (*)[57])"[IrodoriMaster] clear current master gallery, gallery_id");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])", level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0LL;
  }
  if ( v19 == (char *)v3 )
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

// Line 1549: range 0000000014548D7E-0000000014548EC5
bool __cdecl IrodoriActivity::isCurrentIrodoriMasterGallery(
        const IrodoriActivity *const this,
        uint32_t gallery_id,
        uint32_t level_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->master_gallery_id_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !this->master_level_id_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( gallery_id != this->master_gallery_id_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return level_id == this->master_level_id_;
};

// Line 1562: range 0000000014548EC6-000000001454A014
__int64 __fastcall IrodoriActivity::startIrodoriMasterGallery(
        IrodoriActivity *const this,
        uint32_t level_id,
        uint32_t difficulty)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int M_array_high; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::pointer v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  char v21; // al
  Scene *v22; // rax
  common::milog::MiLogStream *v23; // rax
  Scene *v24; // rax
  uint32_t v25; // ecx
  common::milog::MiLogStream *v26; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::pointer v27; // rax
  uint32_t v28; // r15d
  uint32_t v29; // r14d
  uint32_t Uid; // eax
  Scene *v31; // rax
  SceneGalleryComp *v32; // rcx
  common::milog::MiLogStream *v33; // rax
  uint32_t gallery_id; // ecx
  uint32_t v35; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::pointer v36; // rdx
  bool *p_is_have_try; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rcx
  Player *player; // r14
  __int64 result; // rax
  std::string v44; // [rsp+0h] [rbp-1F0h]
  uint32_t scene_id; // [rsp+18h] [rbp-1D8h]
  SceneGalleryComp *GalleryComp; // [rsp+18h] [rbp-1D8h]
  std::less<unsigned int> __comp; // [rsp+37h] [rbp-1B9h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+38h] [rbp-1B8h] BYREF
  const data::IrodoriMasterLevelExcelConfig *level_config_ptr; // [rsp+48h] [rbp-1A8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-1A0h] BYREF
  std::shared_ptr<google::protobuf::Message> v52; // [rsp+60h] [rbp-190h] BYREF
  common::milog::MiLogStream v53; // [rsp+70h] [rbp-180h] BYREF
  std::set<unsigned int> uid_set; // [rsp+90h] [rbp-160h] BYREF
  char v55[304]; // [rsp+C0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v55;
  v44._M_string_length = (std::string::size_type)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 10 holer:1637 64 4 13 level_id:1561 80 4 15 difficulty:1561 96 8 15 level_iter:1577 128 8"
                        " 16 detail_iter:1583 160 16 14 scene_ptr:1601 192 16 16 gallery_ptr:1613 224 16 12 log_ptr:1638";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::startIrodoriMasterGallery;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -202178560;
  *(_DWORD *)(v3 + 64) = level_id;
  *(_DWORD *)(v3 + 80) = difficulty;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v52);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v52);
  level_config_ptr = data::ActivityIrodoriExcelConfigMgrBase::findIrodoriMasterLevelExcelConfig(
                       &v6->design_config.txt_config_mgr.activity_irodori_config_mgr,
                       *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v52);
  if ( level_config_ptr )
  {
    if ( *(_DWORD *)(v3 + 80) && *(_DWORD *)(v3 + 80) <= 3u )
    {
      *(std::map<unsigned int,IrodoriMasterLevelData>::iterator *)(v3 + 96) = std::map<unsigned int,IrodoriMasterLevelData>::find(
                                                                                &this->master_level_map_,
                                                                                (const std::map<unsigned int,IrodoriMasterLevelData>::key_type *)(v3 + 64));
      __l._M_len = (std::initializer_list<unsigned int>::size_type)std::map<unsigned int,IrodoriMasterLevelData>::end(&this->master_level_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::_Self *)(v3 + 96),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::_Self *)&__l._M_len) )
      {
        common::milog::MiLogStream::create(
          &v53,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/irodori_activity.cpp",
          "startIrodoriMasterGallery",
          1580);
        v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v53,
                (const char (*)[45])"[IrodoriMaster] level is not open, level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v53);
        M_array_high = -1;
      }
      else
      {
        v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> > *const)(v3 + 96));
        *(std::map<unsigned int,IrodoriMasterLevelDetailData>::iterator *)(v3 + 128) = std::map<unsigned int,IrodoriMasterLevelDetailData>::find(
                                                                                         &v11->second.level_detail_map,
                                                                                         (const std::map<unsigned int,IrodoriMasterLevelDetailData>::key_type *)(v3 + 80));
        v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> > *const)(v3 + 96));
        __l._M_len = (std::initializer_list<unsigned int>::size_type)std::map<unsigned int,IrodoriMasterLevelDetailData>::end(&v12->second.level_detail_map)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::_Self *)(v3 + 128),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::_Self *)&__l._M_len) )
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/irodori_activity.cpp",
            "startIrodoriMasterGallery",
            1586);
          v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v53,
                  (const char (*)[46])"[IrodoriMaster] detail is not find, level_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 64));
          v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v14,
                  (const char (*)[14])", difficulty:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v53);
          M_array_high = -1;
        }
        else if ( !IrodoriActivity::isIrodoriMasterDetailLevelCanStart(this, *(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/irodori_activity.cpp",
            "startIrodoriMasterGallery",
            1591);
          v16 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v53,
                  (const char (*)[47])"[IrodoriMaster] level can not start, level_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v3 + 64));
          v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v17,
                  (const char (*)[14])", difficulty:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v53);
          M_array_high = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( this->master_gallery_id_ )
            goto LABEL_21;
          if ( *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( this->master_level_id_ )
          {
LABEL_21:
            common::milog::MiLogStream::create(
              &v53,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/irodori_activity.cpp",
              "startIrodoriMasterGallery",
              1596);
            v19 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v53,
                    (const char (*)[44])"[IrodoriMaster] level is ongoing, level_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->master_level_id_);
            common::milog::MiLogStream::~MiLogStream(&v53);
            M_array_high = -1;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 160));
            if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160)) )
              goto LABEL_28;
            if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->scene_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            scene_id = level_config_ptr->scene_id;
            v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            if ( scene_id == Scene::getSceneId(v20) )
              v21 = 0;
            else
LABEL_28:
              v21 = 1;
            if ( v21 )
            {
              common::milog::MiLogStream::create(
                &v53,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/irodori_activity.cpp",
                "startIrodoriMasterGallery",
                1604);
              common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v53,
                (const char (*)[63])"[IrodoriMaster] cur scene can not start irodori master gallery");
              common::milog::MiLogStream::~MiLogStream(&v53);
              M_array_high = -1;
            }
            else
            {
              v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              GalleryComp = Scene::getGalleryComp(v22);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              LODWORD(__l._M_array) = Player::getUid(this->player_);
              std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 48));
              std::set<unsigned int>::set(
                &uid_set,
                (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
                &__comp,
                (const std::set<unsigned int>::allocator_type *)(v3 + 48));
              if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              HIDWORD(__l._M_array) = SceneGalleryComp::initGallery(GalleryComp, level_config_ptr->gallery_id, &uid_set);
              std::set<unsigned int>::~set(&uid_set);
              std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 48));
              if ( HIDWORD(__l._M_array) )
              {
                common::milog::MiLogStream::create(
                  &v53,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/irodori_activity.cpp",
                  "startIrodoriMasterGallery",
                  1610);
                v23 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        &v53,
                        (const char (*)[49])"[IrodoriMaster] gallery init failed, gallery_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  &level_config_ptr->gallery_id);
                common::milog::MiLogStream::~MiLogStream(&v53);
                M_array_high = HIDWORD(__l._M_array);
              }
              else
              {
                v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                v25 = (unsigned int)Scene::getGalleryComp(v24);
                if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                SceneGalleryComp::findGallery<IrodoriMasterGallery>((SceneGalleryComp *const)(v3 + 192), v25);
                if ( std::operator==<IrodoriMasterGallery>(
                       0LL,
                       (const std::shared_ptr<IrodoriMasterGallery> *)(v3 + 192)) )
                {
                  common::milog::MiLogStream::create(
                    &v53,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/irodori_activity.cpp",
                    "startIrodoriMasterGallery",
                    1616);
                  v26 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                          &v53,
                          (const char (*)[48])"[IrodoriMaster] findGallery failed, gallery_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    &level_config_ptr->gallery_id);
                  common::milog::MiLogStream::~MiLogStream(&v53);
                  M_array_high = -1;
                }
                else
                {
                  *(&v44._anon_0._M_allocated_capacity + 1) = (std::string::size_type)std::__shared_ptr_access<IrodoriMasterGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriMasterGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                  v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> > *const)(v3 + 96));
                  if ( *(char *)(((unsigned __int64)&v27->second.is_cg_viewed >> 3) + 0x7FFF8000) < 0 )
                    v27 = (std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::pointer)__asan_report_load1(&v27->second.is_cg_viewed);
                  HIDWORD(v44._anon_0._M_allocated_capacity) = v27->second.is_cg_viewed;
                  v28 = *(_DWORD *)(v3 + 80);
                  v29 = *(_DWORD *)(v3 + 64);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  Uid = Player::getUid(this->player_);
                  IrodoriMasterGallery::initDetailInfo(
                    *((IrodoriMasterGallery *const *)&v44._anon_0._M_allocated_capacity + 1),
                    Uid,
                    v29,
                    v28,
                    v44._anon_0._M_local_buf[4]);
                  v31 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  v32 = Scene::getGalleryComp(v31);
                  if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  HIDWORD(__l._M_array) = SceneGalleryComp::startGallery(v32, level_config_ptr->gallery_id);
                  if ( HIDWORD(__l._M_array) )
                  {
                    common::milog::MiLogStream::create(
                      &v53,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/irodori_activity.cpp",
                      "startIrodoriMasterGallery",
                      1624);
                    v33 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                            &v53,
                            (const char (*)[50])"[IrodoriMaster] gallery start failed, gallery_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      &level_config_ptr->gallery_id);
                    common::milog::MiLogStream::~MiLogStream(&v53);
                    M_array_high = HIDWORD(__l._M_array);
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&level_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    gallery_id = level_config_ptr->gallery_id;
                    if ( *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->master_gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(&this->master_gallery_id_);
                    }
                    this->master_gallery_id_ = gallery_id;
                    v35 = *(_DWORD *)(v3 + 64);
                    if ( *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_level_id_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_store4(&this->master_level_id_);
                    }
                    this->master_level_id_ = v35;
                    v36 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> > *const)(v3 + 128));
                    p_is_have_try = &v36->second.is_have_try;
                    if ( *(_BYTE *)(((unsigned __int64)p_is_have_try >> 3) + 0x7FFF8000) != 0
                      && ((unsigned __int8)p_is_have_try & 7) >= *(_BYTE *)(((unsigned __int64)p_is_have_try >> 3)
                                                                          + 0x7FFF8000) )
                    {
                      __asan_report_store1(p_is_have_try);
                    }
                    v36->second.is_have_try = 1;
                    BaseActivity::notifyClientData(this, 0);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    BasicComp = Player::getBasicComp(this->player_);
                    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v53, BasicComp);
                    StatLogUtils::ContextHolder::ContextHolder(
                      (StatLogUtils::ContextHolder *const)(v3 + 48),
                      0xE0Eu,
                      v44);
                    std::string::~string(&v53);
                    common::tools::perf::make_shared<proto_log::PlayerLogBodyIrodoriMasterStart>();
                    v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    proto_log::PlayerLogBodyIrodoriMasterStart::set_level_id(v39, *(_DWORD *)(v3 + 64));
                    v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    proto_log::PlayerLogBodyIrodoriMasterStart::set_difficulty(v40, *(_DWORD *)(v3 + 80));
                    v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
                    if ( *(_BYTE *)(((unsigned __int64)&this->master_transaction_no_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->master_transaction_no_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4();
                    }
                    proto_log::PlayerLogBodyIrodoriMasterStart::set_transaction(v41, ++this->master_transaction_no_);
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    player = this->player_;
                    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v52, 0LL);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyIrodoriMasterStart,void>(
                      &p_body_ptr,
                      (const std::shared_ptr<proto_log::PlayerLogBodyIrodoriMasterStart> *)(v3 + 224));
                    Player::printStatLog(player, &p_body_ptr, &v52, 0xEu);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v52);
                    M_array_high = 0;
                    std::shared_ptr<proto_log::PlayerLogBodyIrodoriMasterStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyIrodoriMasterStart> *const)(v3 + 224));
                    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
                  }
                }
                std::shared_ptr<IrodoriMasterGallery>::~shared_ptr((std::shared_ptr<IrodoriMasterGallery> *const)(v3 + 192));
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/irodori_activity.cpp",
        "startIrodoriMasterGallery",
        1572);
      v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v53,
             (const char (*)[48])"[IrodoriMaster] invalid difficulty, difficulty:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v53);
      M_array_high = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v53,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "startIrodoriMasterGallery",
      1567);
    v7 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v53,
           (const char (*)[68])"[IrodoriMaster] findIrodoriMasterLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v53);
    M_array_high = -1;
  }
  result = M_array_high;
  if ( v44._M_string_length == v3 )
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

// Line 1647: range 000000001454A016-000000001454A343
__int64 __fastcall IrodoriActivity::isIrodoriMasterDetailLevelCanStart(
        const IrodoriActivity *const this,
        uint32_t level_id,
        uint32_t difficulty)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v8; // rax
  std::map<unsigned int,IrodoriMasterLevelDetailData> *p_level_detail_map; // r14
  const std::map<unsigned int,IrodoriMasterLevelDetailData>::key_type *v10; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::pointer v11; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::pointer v12; // rdx
  bool *p_is_finish; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  char v16[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 13 level_id:1646 48 4 15 difficulty:1646 64 8 15 level_iter:1648 96 8 14 diff_iter:1658 1"
                        "28 8 16 detail_iter:1669";
  *(_QWORD *)(v3 + 16) = IrodoriActivity::isIrodoriMasterDetailLevelCanStart;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 32) = level_id;
  *(_DWORD *)(v3 + 48) = difficulty;
  *(std::map<unsigned int,IrodoriMasterLevelData>::const_iterator *)(v3 + 64) = std::map<unsigned int,IrodoriMasterLevelData>::find(
                                                                                  &this->master_level_map_,
                                                                                  (const std::map<unsigned int,IrodoriMasterLevelData>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,IrodoriMasterLevelData>::end(&this->master_level_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::_Self *)(v3 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else if ( *(_DWORD *)(v3 + 48) == 1 || *(_DWORD *)(v3 + 48) == 2 )
  {
    result = 1LL;
  }
  else
  {
    M_current = std::vector<unsigned int>::end(&ActivityIrodoriExcelConfigMgr::master_difficulty_vec)._M_current;
    v8._M_current = std::vector<unsigned int>::begin(&ActivityIrodoriExcelConfigMgr::master_difficulty_vec)._M_current;
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                   v8,
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                   (const unsigned int *)(v3 + 48));
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::_Base_ptr)std::vector<unsigned int>::end(&ActivityIrodoriExcelConfigMgr::master_difficulty_vec)._M_current;
    if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__y) )
    {
      result = 0LL;
    }
    else
    {
      __y._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::_Base_ptr)std::vector<unsigned int>::begin(&ActivityIrodoriExcelConfigMgr::master_difficulty_vec)._M_current;
      if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
             (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
             (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__y) )
      {
        result = 1LL;
      }
      else
      {
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator--(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96),
          0);
        p_level_detail_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> > *const)(v3 + 64))->second.level_detail_map;
        v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
        *(std::map<unsigned int,IrodoriMasterLevelDetailData>::const_iterator *)(v3 + 128) = std::map<unsigned int,IrodoriMasterLevelDetailData>::find(
                                                                                               p_level_detail_map,
                                                                                               v10);
        v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> > *const)(v3 + 64));
        __y._M_node = std::map<unsigned int,IrodoriMasterLevelDetailData>::end(&v11->second.level_detail_map)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::_Self *)(v3 + 128),
               (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::_Self *)&__y) )
        {
          result = 0LL;
        }
        else
        {
          v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> > *const)(v3 + 128));
          p_is_finish = &v12->second.is_finish;
          if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_finish);
          }
          result = v12->second.is_finish;
        }
      }
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 1678: range 000000001454A344-000000001454A890
__int64 __fastcall IrodoriActivity::recordIrodoriMasterFinishData(
        IrodoriActivity *const this,
        uint32_t level_id,
        uint32_t difficulty,
        uint32_t finish_time)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::pointer v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::pointer v14; // rdx
  bool *p_is_finish; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::pointer v16; // rdx
  bool *v17; // rax
  uint32_t v18; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::pointer v19; // rdx
  uint32_t *p_min_finish_time; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::pointer v21; // rax
  uint32_t *v22; // rdx
  uint32_t v23; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::pointer v24; // rdx
  uint32_t *v25; // rax
  PlayerWatcherComp *WatcherComp; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::_Self __y; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 level_id:1677 64 4 15 difficulty:1677 80 4 16 finish_time:1677 96 8 15 level_iter:1679"
                        " 128 8 16 detail_iter:1685";
  *(_QWORD *)(v4 + 16) = IrodoriActivity::recordIrodoriMasterFinishData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -202116352;
  *(_DWORD *)(v4 + 48) = level_id;
  *(_DWORD *)(v4 + 64) = difficulty;
  *(_DWORD *)(v4 + 80) = finish_time;
  *(std::map<unsigned int,IrodoriMasterLevelData>::iterator *)(v4 + 96) = std::map<unsigned int,IrodoriMasterLevelData>::find(
                                                                            &this->master_level_map_,
                                                                            (const std::map<unsigned int,IrodoriMasterLevelData>::key_type *)(v4 + 48));
  __y._M_node = std::map<unsigned int,IrodoriMasterLevelData>::end(&this->master_level_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> >::_Self *)(v4 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/irodori_activity.cpp",
      "recordIrodoriMasterFinishData",
      1682);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v30,
           (const char (*)[45])"[IrodoriMaster] level is not open, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> > *const)(v4 + 96));
    *(std::map<unsigned int,IrodoriMasterLevelDetailData>::iterator *)(v4 + 128) = std::map<unsigned int,IrodoriMasterLevelDetailData>::find(
                                                                                     &v9->second.level_detail_map,
                                                                                     (const std::map<unsigned int,IrodoriMasterLevelDetailData>::key_type *)(v4 + 64));
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelData> > *const)(v4 + 96));
    __y._M_node = std::map<unsigned int,IrodoriMasterLevelDetailData>::end(&v10->second.level_detail_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::_Self *)(v4 + 128),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> >::_Self *)&__y) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/irodori_activity.cpp",
        "recordIrodoriMasterFinishData",
        1688);
      v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v30,
              (const char (*)[46])"[IrodoriMaster] detail is not find, level_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])", difficulty:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> > *const)(v4 + 128));
      p_is_finish = &v14->second.is_finish;
      if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_finish);
      }
      if ( !v14->second.is_finish )
      {
        v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> > *const)(v4 + 128));
        v17 = &v16->second.is_finish;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)v17 & 7) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(v17);
        }
        v16->second.is_finish = 1;
        v18 = *(_DWORD *)(v4 + 80);
        v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> > *const)(v4 + 128));
        p_min_finish_time = &v19->second.min_finish_time;
        if ( *(_BYTE *)(((unsigned __int64)p_min_finish_time >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_min_finish_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_min_finish_time >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(p_min_finish_time);
        }
        v19->second.min_finish_time = v18;
      }
      else
      {
        v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> > *const)(v4 + 128));
        v22 = (uint32_t *)std::min<unsigned int>(&v21->second.min_finish_time, (const unsigned int *)(v4 + 80));
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v23 = *v22;
        v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,IrodoriMasterLevelDetailData> > *const)(v4 + 128));
        v25 = &v24->second.min_finish_time;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v25);
        }
        v24->second.min_finish_time = v23;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = Player::getWatcherComp(this->player_);
      PlayerWatcherComp::triggerIrodoriMasterLevelEvent(
        WatcherComp,
        *(_DWORD *)(v4 + 48),
        *(_DWORD *)(v4 + 64),
        1,
        *(_DWORD *)(v4 + 80));
      BaseActivity::notifyClientData(this, 0);
      result = 0LL;
    }
  }
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1709: range 000000001454A892-000000001454AC1C
void __cdecl IrodoriActivity::logIrodoriMasterSettle(
        IrodoriActivity *const this,
        uint32_t settle_result,
        uint32_t level_id,
        uint32_t difficulty,
        uint32_t finish_time)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *player; // r14
  std::string v15; // [rsp+0h] [rbp-F0h]
  uint32_t finish_timea; // [rsp+8h] [rbp-E8h]
  google::protobuf::uint32 difficultya; // [rsp+Ch] [rbp-E4h]
  google::protobuf::uint32 level_ida; // [rsp+10h] [rbp-E0h]
  uint32_t settle_resulta; // [rsp+14h] [rbp-DCh]
  IrodoriActivity *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v23; // [rsp+40h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v15._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v15._anon_0._M_allocated_capacity) = settle_result;
  *(_DWORD *)v15._anon_0._M_local_buf = level_id;
  HIDWORD(v15._M_string_length) = difficulty;
  LODWORD(v15._M_string_length) = finish_time;
  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 10 holer:1710 64 16 12 log_ptr:1711";
  *(_QWORD *)(v5 + 16) = IrodoriActivity::logIrodoriMasterSettle;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xE0Fu, v15);
  std::string::~string(&v23);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyIrodoriMasterSettle>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyIrodoriMasterSettle::set_level_id(v9, level_ida);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyIrodoriMasterSettle::set_difficulty(v10, difficultya);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->master_transaction_no_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->master_transaction_no_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyIrodoriMasterSettle::set_transaction(v11, thisa->master_transaction_no_);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  proto_log::PlayerLogBodyIrodoriMasterSettle::set_settle_result(v12, settle_resulta);
  if ( settle_resulta == 1 )
  {
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyIrodoriMasterSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyIrodoriMasterSettle::set_time(v13, finish_timea);
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyIrodoriMasterSettle,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyIrodoriMasterSettle> *)(v5 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyIrodoriMasterSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyIrodoriMasterSettle> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v24 == (char *)v5 )
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
