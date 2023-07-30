// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/player/quest.cpp

// Line 25: range 000000000046CD86-000000000046D27C
void __cdecl Quest::registerScriptFunc(lua_State_0 *lua_state_ptr)
{
  luabind::class_<data::QuestShowType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v1; // rax
  luabind::value_vector *v2; // rax
  luabind::value_vector *v3; // rax
  luabind::value_vector *v4; // rax
  luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v5; // rax
  luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified> *v6; // rax
  luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified> *v7; // rax
  luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified> *v8; // rax
  luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified> *v9; // rax
  luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified> *v10; // rax
  luabind::detail::enum_maker<luabind::class_<data::QuestShowType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > v11; // [rsp+40h] [rbp-E0h] BYREF
  luabind::scope v12; // [rsp+48h] [rbp-D8h] BYREF
  luabind::module_ v13; // [rsp+50h] [rbp-D0h] BYREF
  luabind::value v14; // [rsp+60h] [rbp-C0h] BYREF
  luabind::value v15; // [rsp+70h] [rbp-B0h] BYREF
  luabind::value v16; // [rsp+80h] [rbp-A0h] BYREF
  luabind::value v17; // [rsp+90h] [rbp-90h] BYREF
  luabind::value rhs; // [rsp+A0h] [rbp-80h] BYREF
  luabind::class_<data::QuestShowType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> v19; // [rsp+B0h] [rbp-70h] BYREF
  luabind::value_vector values; // [rsp+D0h] [rbp-50h] BYREF

  v16 = (luabind::value)luabind::module(lua_state_ptr, 0LL);
  luabind::class_<data::QuestShowType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    &v19,
    "QuestShowType");
  v11.from_ = luabind::class_<data::QuestShowType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_(
                &v19,
                "constants").from_;
  luabind::value::value<unsigned int>(&rhs, "HIDDEN", 1u);
  luabind::value::value<unsigned int>(&v17, "SHOW", 0);
  luabind::value::operator,(&values, &v17, &rhs);
  v1 = luabind::detail::enum_maker<luabind::class_<data::QuestShowType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
         &v11,
         &values);
  luabind::scope::scope(&v12, v1);
  luabind::module_::operator[](&v16, &v12);
  luabind::scope::~scope(&v12);
  luabind::value_vector::~value_vector(&values);
  luabind::class_<data::QuestShowType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_(&v19);
  v13 = luabind::module(lua_state_ptr, 0LL);
  luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v19,
    "QuestState");
  v11.from_ = (luabind::class_<data::QuestShowType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *)luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v19, "constants").from_;
  luabind::value::value<data::QuestState>(&rhs, "FAILED", QUEST_STATE_FAILED);
  luabind::value::value<data::QuestState>(&v17, "FINISHED", QUEST_STATE_FINISHED);
  luabind::value::value<data::QuestState>(&v16, "UNFINISHED", QUEST_STATE_UNFINISHED);
  luabind::value::value<data::QuestState>(&v15, "UNSTARTED", QUEST_STATE_UNSTARTED);
  luabind::value::value<data::QuestState>(&v14, "NONE", QUEST_STATE_NONE);
  luabind::value::operator,(&values, &v14, &v15);
  v2 = luabind::value_vector::operator,(&values, &v16);
  v3 = luabind::value_vector::operator,(v2, &v17);
  v4 = luabind::value_vector::operator,(v3, &rhs);
  v5 = luabind::detail::enum_maker<luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
         (luabind::detail::enum_maker<luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)&v11,
         v4);
  luabind::scope::scope(&v12, v5);
  luabind::module_::operator[](&v13, &v12);
  luabind::scope::~scope(&v12);
  luabind::value_vector::~value_vector(&values);
  luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v19);
  rhs = (luabind::value)luabind::module(lua_state_ptr, 0LL);
  luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v19,
    "Quest");
  v6 = luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (Quest::*)(void)const>(
         (luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v19,
         "getQuestId",
         (unsigned int (*)(const Quest *))Quest::getQuestId);
  v7 = luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified>::def<unsigned int (Quest::*)(void)const>(
         v6,
         "getShowType",
         (unsigned int (*)(const Quest *))Quest::getShowType);
  v8 = luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified>::def<data::QuestState (Quest::*)(void)const>(
         v7,
         "getQuestState",
         (data::QuestState (*)(const Quest *))Quest::getQuestState);
  v9 = luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified>::def<bool (Quest::*)(void)const>(
         v8,
         "isMainQuest",
         (bool (*)(const Quest *))Quest::isMainQuest);
  v10 = luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified>::def<int (Quest::*)(void)>(
          v9,
          "finish",
          (int (*)(Quest *))Quest::finish);
  luabind::scope::scope(&v12, v10);
  luabind::module_::operator[](&rhs, &v12);
  luabind::scope::~scope(&v12);
  luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<Quest,std::shared_ptr<Quest>,luabind::detail::unspecified,luabind::detail::unspecified> *const)&v19);
};

// Line 59: range 000000000046D27E-000000000046D37C
const data::QuestExcelConfig *__cdecl Quest::getConfig(const Quest *const this)
{
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  data::QuestExcelConfig *quest_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  p_quest_config_mgr = &Config::config_ptr->design_config.txt_config_mgr.quest_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_id_);
  }
  quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, this->quest_id_);
  if ( quest_config_ptr )
    return quest_config_ptr;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/quest.cpp",
    "getConfig",
    63);
  v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v5,
         (const char (*)[38])"findQuestExcelConfig fails, quest_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->quest_id_);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0LL;
};

// Line 70: range 000000000046D37E-000000000046D470
uint32_t __cdecl Quest::getShowType(const Quest *const this)
{
  common::milog::MiLogStream *v1; // rax
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  quest_config_ptr = Quest::getConfig(this);
  if ( quest_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&quest_config_ptr->show_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)quest_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&quest_config_ptr->show_type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&quest_config_ptr->show_type);
    }
    return quest_config_ptr->show_type;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest.cpp",
      "getShowType",
      74);
    v1 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v4,
           (const char (*)[27])"getConfig fails, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 0;
  }
};

// Line 81: range 000000000046D472-000000000046D570
const data::MainQuestExcelConfig *__cdecl Quest::getParentConfig(const Quest *const this)
{
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::MainQuestExcelConfig *main_quest_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  p_quest_config_mgr = &Config::config_ptr->design_config.txt_config_mgr.quest_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_id_);
  }
  main_quest_config_ptr = QuestExcelConfigMgr::findParentQuestConfigByChildId(p_quest_config_mgr, this->quest_id_);
  if ( main_quest_config_ptr )
    return main_quest_config_ptr;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/quest.cpp",
    "getParentConfig",
    85);
  v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
         &v5,
         (const char (*)[48])"findParentQuestConfigByChildId fails, quest_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->quest_id_);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 0LL;
};

// Line 92: range 000000000046D572-000000000046D6A6
uint32_t __cdecl Quest::getParentQuestId(const Quest *const this)
{
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::MainQuestExcelConfig *main_quest_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  p_quest_config_mgr = &Config::config_ptr->design_config.txt_config_mgr.quest_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_id_);
  }
  main_quest_config_ptr = QuestExcelConfigMgr::findParentQuestConfigByChildId(p_quest_config_mgr, this->quest_id_);
  if ( main_quest_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&main_quest_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&main_quest_config_ptr->id);
    }
    return main_quest_config_ptr->id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest.cpp",
      "getParentQuestId",
      96);
    v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v5,
           (const char (*)[48])"findParentQuestConfigByChildId fails, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 103: range 000000000046D6A8-000000000046D722
bool __cdecl Quest::isMainQuest(const Quest *const this)
{
  Player *player; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  player = this->player_;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_id_);
  }
  return Player::isMainQuest(player, this->quest_id_);
};

// Line 108: range 000000000046D724-000000000046D8AC
bool __cdecl Quest::canChoose(const Quest *const this)
{
  common::milog::MiLogStream *v1; // rax
  data::QuestContentType type; // eax
  std::vector<data::QuestContent>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::vector<data::QuestContent>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+28h] [rbp-48h]
  const std::vector<data::QuestContent> *__for_range; // [rsp+30h] [rbp-40h]
  const data::QuestContent *quest_content; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-30h] BYREF

  quest_config_ptr = Quest::getConfig(this);
  if ( quest_config_ptr )
  {
    __for_range = &quest_config_ptr->finish_cond;
    __for_begin._M_current = std::vector<data::QuestContent>::begin(&quest_config_ptr->finish_cond)._M_current;
    __for_end._M_current = std::vector<data::QuestContent>::end(&quest_config_ptr->finish_cond)._M_current;
    while ( __gnu_cxx::operator!=<data::QuestContent const*,std::vector<data::QuestContent>>(&__for_begin, &__for_end) )
    {
      quest_content = __gnu_cxx::__normal_iterator<data::QuestContent const*,std::vector<data::QuestContent>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&quest_content->type);
      }
      type = quest_content->type;
      if ( (unsigned int)type <= QUEST_CONTENT_ADD_QUEST_PROGRESS && ((1LL << type) & 0x1080100) != 0 )
        return 0;
      __gnu_cxx::__normal_iterator<data::QuestContent const*,std::vector<data::QuestContent>>::operator++(&__for_begin);
    }
    return 1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest.cpp",
      "canChoose",
      112);
    v1 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v9,
           (const char (*)[27])"getConfig fails, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0;
  }
};

// Line 131: range 000000000046D8AE-000000000046DC48
int32_t __cdecl Quest::finish(Quest *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t finish_count; // [rsp+10h] [rbp-B0h]
  uint32_t i; // [rsp+14h] [rbp-ACh]
  std::vector<data::QuestContent>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<data::QuestContent>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+28h] [rbp-98h]
  const std::vector<data::QuestContent> *__for_range; // [rsp+30h] [rbp-90h]
  const data::QuestContent *quest_content; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-80h] BYREF
  char v17[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 ret:145";
  *(_QWORD *)(v1 + 16) = Quest::finish;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  quest_config_ptr = Quest::getConfig(this);
  if ( quest_config_ptr )
  {
    __for_range = &quest_config_ptr->finish_cond;
    __for_begin._M_current = std::vector<data::QuestContent>::begin(&quest_config_ptr->finish_cond)._M_current;
    __for_end._M_current = std::vector<data::QuestContent>::end(&quest_config_ptr->finish_cond)._M_current;
    while ( __gnu_cxx::operator!=<data::QuestContent const*,std::vector<data::QuestContent>>(&__for_begin, &__for_end) )
    {
      quest_content = __gnu_cxx::__normal_iterator<data::QuestContent const*,std::vector<data::QuestContent>>::operator*(&__for_begin);
      finish_count = 1;
      if ( *(_BYTE *)(((unsigned __int64)&quest_content->count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&quest_content->count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&quest_content->count);
      }
      if ( quest_content->count )
        finish_count = quest_content->count;
      for ( i = 0; i < finish_count; ++i )
      {
        *(_DWORD *)(v1 + 32) = Quest::finishQuestContent(this, quest_content);
        if ( *(_DWORD *)(v1 + 32) )
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finish",
            148);
          v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                 &v16,
                 (const char (*)[31])"finishQuestContent fails, ret:");
          v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 32));
          v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->quest_id_);
          common::milog::MiLogStream::~MiLogStream(&v16);
          result = *(_DWORD *)(v1 + 32);
          goto LABEL_22;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&quest_config_ptr->accept_cond_comb >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&quest_config_ptr->accept_cond_comb >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&quest_config_ptr->accept_cond_comb);
      }
      if ( quest_config_ptr->accept_cond_comb == LOGIC_OR )
        break;
      __gnu_cxx::__normal_iterator<data::QuestContent const*,std::vector<data::QuestContent>>::operator++(&__for_begin);
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest.cpp",
      "finish",
      135);
    v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v16,
           (const char (*)[27])"getConfig fails, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->quest_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
LABEL_22:
  if ( v17 == (char *)v1 )
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

// Line 159: range 000000000046DC4A-0000000000471DCF
int32_t __cdecl Quest::finishQuestContent(Quest *const this, const data::QuestContent *quest_content)
{
  int32_t v2; // r13d
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<int>::const_reference v6; // rax
  _DWORD *v7; // rdx
  std::vector<int>::const_reference v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  _BOOL4 v12; // r15d
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned int EntityId; // eax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  int v19; // r15d
  common::milog::MiLogStream *v20; // rax
  int v21; // r15d
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int v26; // r15d
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r13
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
  common::milog::MiLogStream *v42; // r13
  const std::shared_ptr<Monster> *v43; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  unsigned int v46; // eax
  common::milog::MiLogStream *v47; // rax
  int v48; // r15d
  int v49; // r15d
  int v50; // r15d
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  int v59; // r15d
  common::milog::MiLogStream *v60; // rax
  _BOOL4 v61; // r15d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  unsigned int v63; // eax
  common::milog::MiLogStream *v64; // rax
  int v65; // r15d
  data::MaterialType *p_material_type; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  int v69; // r15d
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  int v73; // r15d
  std::vector<unsigned int>::reference v74; // rax
  uint32_t *v75; // rdx
  std::vector<unsigned int>::reference v76; // rax
  uint32_t *v77; // rdx
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rcx
  int v82; // r15d
  int v83; // eax
  std::vector<unsigned int>::reference v84; // rax
  _DWORD *v85; // rdx
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  int v88; // r15d
  int v89; // r15d
  common::milog::MiLogStream *v90; // rax
  _BOOL4 v91; // r15d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v92; // rax
  uint32_t v93; // eax
  common::milog::MiLogStream *v94; // rax
  int v95; // r15d
  common::milog::MiLogStream *v96; // r13
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v99; // rax
  uint32_t v100; // eax
  common::milog::MiLogStream *v101; // rcx
  int v102; // r15d
  bool v103; // r15
  common::milog::MiLogStream *v104; // rcx
  int v105; // r15d
  common::milog::MiLogStream *v106; // rax
  std::vector<unsigned int>::reference v107; // rax
  _DWORD *v108; // rdx
  std::vector<unsigned int>::reference v109; // rax
  _DWORD *v110; // rdx
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  unsigned int *v115; // rax
  uint32_t *v116; // rdx
  common::milog::MiLogStream *v117; // rax
  int v118; // r15d
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  int v126; // r15d
  common::milog::MiLogStream *v127; // rax
  int32_t result; // eax
  unsigned int *v129; // [rsp-8h] [rbp-3E8h]
  bool v130; // [rsp+Fh] [rbp-3D1h]
  std::allocator<char> __a; // [rsp+27h] [rbp-3B9h] BYREF
  uint32_t item_id_0; // [rsp+28h] [rbp-3B8h]
  uint32_t async_wait_time_ms; // [rsp+2Ch] [rbp-3B4h]
  uint32_t city_level; // [rsp+30h] [rbp-3B0h]
  uint32_t item_id_1; // [rsp+34h] [rbp-3ACh]
  uint32_t item_num; // [rsp+38h] [rbp-3A8h]
  int32_t ret; // [rsp+3Ch] [rbp-3A4h]
  uint32_t area_id; // [rsp+40h] [rbp-3A0h]
  uint32_t skill_id; // [rsp+44h] [rbp-39Ch]
  uint32_t index; // [rsp+48h] [rbp-398h]
  uint32_t game_day_count; // [rsp+4Ch] [rbp-394h]
  uint32_t begin_hour; // [rsp+50h] [rbp-390h]
  uint32_t end_hour; // [rsp+54h] [rbp-38Ch]
  uint32_t begin_time; // [rsp+58h] [rbp-388h]
  uint32_t end_time; // [rsp+5Ch] [rbp-384h]
  uint32_t game_time; // [rsp+60h] [rbp-380h]
  uint32_t item_id; // [rsp+64h] [rbp-37Ch]
  std::vector<std::shared_ptr<Monster>>::iterator __for_begin; // [rsp+68h] [rbp-378h] BYREF
  std::vector<std::shared_ptr<Monster>>::iterator __for_end; // [rsp+70h] [rbp-370h] BYREF
  Robot *robot; // [rsp+78h] [rbp-368h]
  LuaScript *script; // [rsp+80h] [rbp-360h]
  Scene *scene; // [rsp+88h] [rbp-358h]
  const data::CityConfig *city_config_ptr; // [rsp+90h] [rbp-350h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+98h] [rbp-348h]
  proto::CityInfo *city_info_ptr; // [rsp+A0h] [rbp-340h]
  const data::CityLevelupConfig *levelup_config_ptr; // [rsp+A8h] [rbp-338h]
  std::unordered_map<unsigned int,data::MaterialExcelConfig> *__for_range_0; // [rsp+B0h] [rbp-330h]
  std::pair<unsigned int const,data::MaterialExcelConfig> *__in; // [rsp+B8h] [rbp-328h]
  std::tuple_element<0,std::pair<unsigned int const,data::MaterialExcelConfig> >::type *material_item_id; // [rsp+C0h] [rbp-320h]
  std::tuple_element<1,std::pair<unsigned int const,data::MaterialExcelConfig> >::type *material_config; // [rsp+C8h] [rbp-318h]
  const GroupScriptConfig *group_script_config_ptr_0; // [rsp+D0h] [rbp-310h]
  const Vector3 *monster_pos; // [rsp+D8h] [rbp-308h]
  std::vector<std::shared_ptr<Monster>> *__for_range; // [rsp+E0h] [rbp-300h]
  data::TriggerExcelConfig *trigger_config_ptr; // [rsp+E8h] [rbp-2F8h]
  size_t lpos; // [rsp+F0h] [rbp-2F0h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+F8h] [rbp-2E8h]
  const RegionScriptConfig *region_config_ptr; // [rsp+100h] [rbp-2E0h]
  const Vector3 *pos; // [rsp+108h] [rbp-2D8h]
  std::string __rhs; // [rsp+110h] [rbp-2D0h] BYREF
  common::milog::MiLogStream v170; // [rsp+130h] [rbp-2B0h] BYREF
  char v171[656]; // [rsp+150h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v171;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 4 10 param1:170 48 4 10 param2:171 64 4 14 trigger_id:233 80 4 12 scene_id:562 96 4 11 cit"
                        "y_id:563 112 4 14 next_level:594 128 16 14 avatar_ptr:161 160 16 14 gadget_ptr:510 192 24 13 par"
                        "am_vec:551 256 32 7 msg:605 320 32 7 req:207 384 32 7 msg:187 448 40 10 notify:536 528 48 7 req:516";
  *(_QWORD *)(v3 + 16) = Quest::finishQuestContent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959360;
  v5[536862736] = 62194;
  v5[536862738] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  robot = Player::getRobot(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::getCurAvatar((const Player *const)(v3 + 128));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v170,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest.cpp",
      "finishQuestContent",
      164);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v170, (const char (*)[19])"getCurAvatar fails");
    common::milog::MiLogStream::~MiLogStream(&v170);
    v2 = -1;
    goto LABEL_238;
  }
  async_wait_time_ms = 200;
  script = Robot::getScript(robot);
  scene = Robot::getScene(robot);
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  if ( !std::vector<int>::empty(&quest_content->param) )
  {
    v6 = std::vector<int>::operator[](&quest_content->param, 0LL);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 32) = *v7;
  }
  if ( std::vector<int>::size(&quest_content->param) > 1 )
  {
    v8 = std::vector<int>::operator[](&quest_content->param, 1uLL);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v3 + 48) = *v9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&quest_content->type);
  }
  switch ( quest_content->type )
  {
    case QUEST_CONTENT_COMPLETE_TALK:
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 32);
      if ( !(unsigned int)Robot::completeTalk(robot, *(_DWORD *)(v3 + 112)) )
        goto LABEL_237;
      common::milog::MiLogStream::create(
        &v170,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest.cpp",
        "finishQuestContent",
        200);
      v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v170,
              (const char (*)[29])"completeTalk fails, talk_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 112));
      common::milog::MiLogStream::~MiLogStream(&v170);
      v2 = -1;
      goto LABEL_238;
    case QUEST_CONTENT_MONSTER_DIE:
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 32);
      std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      Scene::forceGetMonster((Scene *const)(v3 + 160), (uint32_t)scene, (const Entity *)*(unsigned int *)(v3 + 112));
      if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v3 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          184);
        v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v170,
                (const char (*)[35])"forceGetMonster fails, monster_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 112));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        operator<<(v11, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v12 = 0;
      }
      else
      {
        v13 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        EntityId = Entity::getEntityId(v13);
        std::to_string((std::string *)&v170, EntityId);
        std::operator+<char>((std::string *)(v3 + 384), "kill entity ", (std::string *)&v170);
        std::string::~string((std::string *const)&v170);
        if ( Robot::gmTalk(robot, (const std::string *)(v3 + 384)) )
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            190);
          v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v170,
                  (const char (*)[19])"gmTalk fails, msg:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)(v3 + 384));
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = -1;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
        std::string::~string((std::string *const)(v3 + 384));
        v12 = v16 != 0;
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 160));
      if ( v12 )
        goto LABEL_237;
      goto LABEL_238;
    case QUEST_CONTENT_FINISH_PLOT:
      proto::AddQuestContentProgressReq::AddQuestContentProgressReq((proto::AddQuestContentProgressReq *const)(v3 + 320));
      if ( *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&quest_content->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&quest_content->type);
      }
      proto::AddQuestContentProgressReq::set_content_type(
        (proto::AddQuestContentProgressReq *const)(v3 + 320),
        quest_content->type);
      proto::AddQuestContentProgressReq::set_param(
        (proto::AddQuestContentProgressReq *const)(v3 + 320),
        *(_DWORD *)(v3 + 32));
      proto::AddQuestContentProgressReq::set_add_progress((proto::AddQuestContentProgressReq *const)(v3 + 320), 1u);
      proto::AddQuestContentProgressRsp::AddQuestContentProgressRsp((proto::AddQuestContentProgressRsp *const)(v3 + 384));
      if ( Robot::sendProto<proto::AddQuestContentProgressReq,proto::AddQuestContentProgressRsp>(
             robot,
             (proto::AddQuestContentProgressReq *)(v3 + 320),
             (proto::AddQuestContentProgressRsp *)(v3 + 384)) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          214);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v170,
                (const char (*)[16])"sendProto fails");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        operator<<(v18, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v19 = 0;
      }
      else
      {
        v19 = 1;
      }
      proto::AddQuestContentProgressRsp::~AddQuestContentProgressRsp((proto::AddQuestContentProgressRsp *const)(v3 + 384));
      proto::AddQuestContentProgressReq::~AddQuestContentProgressReq((proto::AddQuestContentProgressReq *const)(v3 + 320));
      if ( v19 )
        goto LABEL_237;
      goto LABEL_238;
    case QUEST_CONTENT_OBTAIN_ITEM:
      item_id = *(_DWORD *)(v3 + 32);
      std::to_string((std::string *)&v170, item_id);
      std::operator+<char>((std::string *)(v3 + 384), "item add ", (std::string *)&v170);
      std::string::~string((std::string *const)&v170);
      if ( Robot::gmTalk(robot, (const std::string *)(v3 + 384)) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          225);
        v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v170,
                (const char (*)[19])"gmTalk fails, msg:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v3 + 384));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v21 = 0;
      }
      else
      {
        Robot::asyncWait(robot, 0xC8u);
        v21 = 1;
      }
      std::string::~string((std::string *const)(v3 + 384));
      if ( v21 )
        goto LABEL_237;
      goto LABEL_238;
    case QUEST_CONTENT_TRIGGER_FIRE:
      *(_DWORD *)(v3 + 64) = *(_DWORD *)(v3 + 32);
      trigger_config_ptr = data::SceneExcelConfigMgrBase::findTriggerExcelConfig(
                             &Config::config_ptr->design_config.txt_config_mgr.scene_config_mgr,
                             *(_DWORD *)(v3 + 64));
      if ( trigger_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&trigger_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)trigger_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trigger_config_ptr->scene_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&trigger_config_ptr->scene_id);
        }
        *(_DWORD *)(v3 + 80) = trigger_config_ptr->scene_id;
        if ( *(_BYTE *)(((unsigned __int64)&trigger_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&trigger_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&trigger_config_ptr->group_id);
        }
        *(_DWORD *)(v3 + 96) = trigger_config_ptr->group_id;
        lpos = std::string::find_last_of(&trigger_config_ptr->trigger_name, 95, 0xFFFFFFFFFFFFFFFFLL);
        std::string::substr(
          (std::string *)(v3 + 320),
          &trigger_config_ptr->trigger_name,
          lpos + 1,
          0xFFFFFFFFFFFFFFFFLL);
        *(_DWORD *)(v3 + 112) = std::stoi((const std::string *)(v3 + 320), 0LL, 10);
        group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                    &Config::config_ptr->design_config.lua_config_mgr,
                                    *(_DWORD *)(v3 + 96));
        if ( group_script_config_ptr )
        {
          region_config_ptr = GroupScriptConfig::findRegionConfig(group_script_config_ptr, *(_DWORD *)(v3 + 112));
          if ( region_config_ptr )
          {
            pos = &region_config_ptr->pos;
            if ( Scene::getSceneId(scene) == *(_DWORD *)(v3 + 80)
              || !(unsigned int)Robot::jumpSceneByGm(robot, *(_DWORD *)(v3 + 80)) )
            {
              if ( Robot::gotoPosition(robot, pos) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 384),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/quest.cpp",
                  "finishQuestContent",
                  268);
                v29 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        (common::milog::MiLogStream *const)(v3 + 384),
                        (const char (*)[31])"gotoPosition fails, scene_id: ");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v3 + 80));
                v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])", pos:");
                Vector3::toString[abi:cxx11]((std::string *)&v170, pos);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, (const std::string *)&v170);
                std::string::~string((std::string *const)&v170);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
                v2 = -1;
                v26 = 0;
              }
              else
              {
                Robot::asyncWait(robot, 0xC8u);
                v26 = 1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v170,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest.cpp",
                "finishQuestContent",
                262);
              v28 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v170,
                      (const char (*)[31])"jumpSceneByGm fails, scene_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v3 + 80));
              common::milog::MiLogStream::~MiLogStream(&v170);
              v2 = -1;
              v26 = 0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v170,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest.cpp",
              "finishQuestContent",
              254);
            v27 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    &v170,
                    (const char (*)[42])"findRegionConfig fails, region_config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v27,
              (const unsigned int *)(v3 + 112));
            common::milog::MiLogStream::~MiLogStream(&v170);
            v2 = -1;
            v26 = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            248);
          v23 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v170,
                  (const char (*)[39])"findGroupScriptConfig fails, scene_id:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v3 + 80));
          v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v24, (const char (*)[12])", group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = -1;
          v26 = 0;
        }
        std::string::~string((std::string *const)(v3 + 320));
        if ( v26 )
          goto LABEL_237;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          237);
        v22 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v170,
                (const char (*)[42])"findTriggerExcelConfig fails, trigger_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
      }
      goto LABEL_238;
    case QUEST_CONTENT_CLEAR_GROUP_MONSTER:
      *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 32);
      *(_DWORD *)(v3 + 112) = LuaConfigMgr::getSceneIdByGroupId(
                                &Config::config_ptr->design_config.lua_config_mgr,
                                *(_DWORD *)(v3 + 96));
      if ( *(_DWORD *)(v3 + 112) )
      {
        if ( Scene::getSceneId(scene) == *(_DWORD *)(v3 + 112)
          || !(unsigned int)Robot::jumpSceneByGm(robot, *(_DWORD *)(v3 + 112)) )
        {
          group_script_config_ptr_0 = LuaConfigMgr::findGroupScriptConfig(
                                        &Config::config_ptr->design_config.lua_config_mgr,
                                        *(_DWORD *)(v3 + 96));
          if ( group_script_config_ptr_0 )
          {
            if ( std::unordered_map<unsigned int,MonsterScriptConfig>::empty(&group_script_config_ptr_0->monster_config_map) )
            {
              common::milog::MiLogStream::create(
                &v170,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest.cpp",
                "finishQuestContent",
                299);
              v39 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v170,
                      (const char (*)[32])"group has no monster, group_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v3 + 96));
              common::milog::MiLogStream::~MiLogStream(&v170);
              v2 = -1;
            }
            else
            {
              __for_end._M_current = (std::shared_ptr<Monster> *)std::unordered_map<unsigned int,MonsterScriptConfig>::begin(&group_script_config_ptr_0->monster_config_map)._M_cur;
              monster_pos = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MonsterScriptConfig>,false,false> *const)&__for_end)->second.pos;
              if ( Robot::gotoPosition(robot, monster_pos) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 384),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/quest.cpp",
                  "finishQuestContent",
                  305);
                v40 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        (common::milog::MiLogStream *const)(v3 + 384),
                        (const char (*)[31])"gotoPosition fails, scene_id: ");
                v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v40,
                        (const unsigned int *)(v3 + 112));
                v42 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v41,
                        (const char (*)[15])", monster_pos:");
                Vector3::toString[abi:cxx11]((std::string *)&v170, monster_pos);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, (const std::string *)&v170);
                std::string::~string((std::string *const)&v170);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
                v2 = -1;
              }
              else
              {
                std::vector<std::shared_ptr<Monster>>::vector((std::vector<std::shared_ptr<Monster>> *const)(v3 + 192));
                Scene::getEntityVec<Monster>(scene, (std::vector<std::shared_ptr<Monster>> *)(v3 + 192));
                __for_range = (std::vector<std::shared_ptr<Monster>> *)(v3 + 192);
                __for_begin._M_current = std::vector<std::shared_ptr<Monster>>::begin((std::vector<std::shared_ptr<Monster>> *const)(v3 + 192))._M_current;
                __for_end._M_current = std::vector<std::shared_ptr<Monster>>::end(__for_range)._M_current;
                while ( 1 )
                {
                  if ( !__gnu_cxx::operator!=<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>(
                          &__for_begin,
                          &__for_end) )
                  {
                    v50 = 1;
                    goto LABEL_89;
                  }
                  v43 = __gnu_cxx::__normal_iterator<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>::operator*(&__for_begin);
                  std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)(v3 + 160), v43);
                  v44 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  if ( Entity::getGroupId(v44) != *(_DWORD *)(v3 + 96) )
                    goto LABEL_84;
                  v45 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                  v46 = Entity::getEntityId(v45);
                  std::to_string((std::string *)&v170, v46);
                  std::operator+<char>((std::string *)(v3 + 384), "kill entity ", (std::string *)&v170);
                  std::string::~string((std::string *const)&v170);
                  if ( Robot::gmTalk(robot, (const std::string *)(v3 + 384)) )
                  {
                    common::milog::MiLogStream::create(
                      &v170,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/quest.cpp",
                      "finishQuestContent",
                      317);
                    v47 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                            &v170,
                            (const char (*)[19])"gmTalk fails, msg:");
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v47,
                      (const std::string *)(v3 + 384));
                    common::milog::MiLogStream::~MiLogStream(&v170);
                    v2 = -1;
                    v48 = 0;
                  }
                  else
                  {
                    v48 = 1;
                  }
                  std::string::~string((std::string *const)(v3 + 384));
                  if ( v48 == 1 )
LABEL_84:
                    v49 = 1;
                  else
                    v49 = 0;
                  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 160));
                  if ( v49 != 1 )
                    break;
                  __gnu_cxx::__normal_iterator<std::shared_ptr<Monster> *,std::vector<std::shared_ptr<Monster>>>::operator++(&__for_begin);
                }
                v50 = 0;
LABEL_89:
                std::vector<std::shared_ptr<Monster>>::~vector((std::vector<std::shared_ptr<Monster>> *const)(v3 + 192));
                if ( v50 )
                  goto LABEL_237;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v170,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest.cpp",
              "finishQuestContent",
              294);
            v36 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v170,
                    (const char (*)[39])"findGroupScriptConfig fails, scene_id:");
            v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v36,
                    (const unsigned int *)(v3 + 112));
            v38 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v37,
                    (const char (*)[12])", group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v3 + 96));
            common::milog::MiLogStream::~MiLogStream(&v170);
            v2 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            287);
          v35 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v170,
                  (const char (*)[31])"jumpSceneByGm fails, scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          280);
        v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v170,
                (const char (*)[18])"invalid scene_id:");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v3 + 112));
        v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v33, (const char (*)[12])", group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
      }
      goto LABEL_238;
    case QUEST_CONTENT_ENTER_DUNGEON:
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 32);
      if ( !Robot::enterDungeonByGm(robot, *(_DWORD *)(v3 + 112)) )
        goto LABEL_237;
      common::milog::MiLogStream::create(
        &v170,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest.cpp",
        "finishQuestContent",
        329);
      v51 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v170,
              (const char (*)[36])"enterDungeonByGm fails, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)(v3 + 112));
      common::milog::MiLogStream::~MiLogStream(&v170);
      v2 = -1;
      goto LABEL_238;
    case QUEST_CONTENT_ENTER_MY_WORLD:
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 32);
      if ( !(unsigned int)Robot::jumpSceneByGm(robot, *(_DWORD *)(v3 + 112)) )
        goto LABEL_237;
      common::milog::MiLogStream::create(
        &v170,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest.cpp",
        "finishQuestContent",
        339);
      v52 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v170,
              (const char (*)[31])"jumpSceneByGm fails, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v3 + 112));
      common::milog::MiLogStream::~MiLogStream(&v170);
      v2 = -1;
      goto LABEL_238;
    case QUEST_CONTENT_FINISH_DUNGEON:
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 32);
      if ( Scene::getDungeonId(scene) == *(_DWORD *)(v3 + 112) )
        goto LABEL_102;
      if ( Robot::enterDungeonByGm(robot, *(_DWORD *)(v3 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          361);
        v54 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v170,
                (const char (*)[36])"enterDungeonByGm fails, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        goto LABEL_238;
      }
      if ( Scene::getDungeonId(scene) == *(_DWORD *)(v3 + 112) )
      {
LABEL_102:
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 384), "settle 1", &__a);
        std::allocator<char>::~allocator(&__a);
        if ( Robot::gmTalk(robot, (const std::string *)(v3 + 384)) )
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            373);
          v58 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v170,
                  (const char (*)[19])"gmTalk fails, msg:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v58, (const std::string *)(v3 + 384));
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = -1;
          v59 = 0;
        }
        else if ( Robot::execLogicFunc(robot) )
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            378);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v170,
            (const char (*)[20])"execLogicFunc fails");
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = -1;
          v59 = 0;
        }
        else
        {
          v59 = 1;
        }
        std::string::~string((std::string *const)(v3 + 384));
        if ( v59 )
          goto LABEL_237;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          366);
        v55 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v170,
                (const char (*)[36])"enterDungeonByGm fails, dungeon_id:");
        v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v55,
                (const unsigned int *)(v3 + 112));
        v57 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v56,
                (const char (*)[18])", cur dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
      }
      goto LABEL_238;
    case QUEST_CONTENT_DESTROY_GADGET:
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 32);
      std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      Scene::forceGetGadget((Scene *const)(v3 + 160), (uint32_t)scene, (const Entity *)*(unsigned int *)(v3 + 112));
      if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          389);
        v60 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v170,
                (const char (*)[33])"forceGetGadget fails, gadget_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v61 = 0;
      }
      else
      {
        v62 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v63 = Entity::getEntityId(v62);
        std::to_string((std::string *)&v170, v63);
        std::operator+<char>((std::string *)(v3 + 384), "kill entity ", (std::string *)&v170);
        std::string::~string((std::string *const)&v170);
        if ( Robot::gmTalk(robot, (const std::string *)(v3 + 384)) )
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            395);
          v64 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v170,
                  (const char (*)[19])"gmTalk fails, msg:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v64, (const std::string *)(v3 + 384));
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = -1;
          v65 = 0;
        }
        else
        {
          v65 = 1;
        }
        std::string::~string((std::string *const)(v3 + 384));
        v61 = v65 != 0;
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 160));
      if ( v61 )
        goto LABEL_237;
      goto LABEL_238;
    case QUEST_CONTENT_OBTAIN_MATERIAL_WITH_SUBTYPE:
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 32);
      item_id_0 = 0;
      __for_range_0 = &Config::config_ptr->design_config.txt_config_mgr.material_config_mgr.material_excel_config_map;
      __for_begin._M_current = (std::shared_ptr<Monster> *)std::unordered_map<unsigned int,data::MaterialExcelConfig>::begin(&Config::config_ptr->design_config.txt_config_mgr.material_config_mgr.material_excel_config_map)._M_cur;
      __for_end._M_current = (std::shared_ptr<Monster> *)std::unordered_map<unsigned int,data::MaterialExcelConfig>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,data::MaterialExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialExcelConfig>,false> *)&__for_end) )
      {
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)&__for_begin);
        material_item_id = std::get<0ul,unsigned int const,data::MaterialExcelConfig>(__in);
        material_config = std::get<1ul,unsigned int const,data::MaterialExcelConfig>(__in);
        p_material_type = &material_config->material_type;
        if ( *(_BYTE *)(((unsigned __int64)p_material_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_material_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_material_type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(p_material_type);
        }
        if ( material_config->material_type == *(_DWORD *)(v3 + 112) )
        {
          if ( *(_BYTE *)(((unsigned __int64)material_item_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)material_item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)material_item_id >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(material_item_id);
          }
          item_id_0 = *material_item_id;
          break;
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MaterialExcelConfig>,false,false> *const)&__for_begin);
      }
      if ( item_id_0 )
      {
        std::to_string((std::string *)&v170, item_id_0);
        std::operator+<char>((std::string *)(v3 + 384), "item add ", (std::string *)&v170);
        std::string::~string((std::string *const)&v170);
        if ( Robot::gmTalk(robot, (const std::string *)(v3 + 384)) )
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            420);
          v68 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v170,
                  (const char (*)[19])"gmTalk fails, msg:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v68, (const std::string *)(v3 + 384));
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = -1;
          v69 = 0;
        }
        else
        {
          v69 = 1;
        }
        std::string::~string((std::string *const)(v3 + 384));
        if ( v69 )
          goto LABEL_237;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          414);
        v67 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v170,
                (const char (*)[29])"item_id is 0, material_type:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
      }
      goto LABEL_238;
    case QUEST_CONTENT_ENTER_ROOM:
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 32);
      if ( (unsigned int)Robot::jumpSceneByPoint(robot, *(_DWORD *)(v3 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          430);
        v70 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v170,
                (const char (*)[26])"jumpScene fails, room_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
      }
      else
      {
        if ( !Robot::enterScene(robot) )
          goto LABEL_237;
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          435);
        v71 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v170,
                (const char (*)[27])"enterScene fails, room_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
      }
      goto LABEL_238;
    case QUEST_CONTENT_GAME_TIME_TICK:
      game_day_count = *(_DWORD *)(v3 + 32);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v170, ",", &__a);
      v130 = common::tools::StringUtils::splitToList<unsigned int>(
               &quest_content->param_str,
               (const std::string *)&v170,
               (std::vector<unsigned int> *)(v3 + 192),
               1)
          || std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 192)) != 2;
      std::string::~string((std::string *const)&v170);
      std::allocator<char>::~allocator(&__a);
      if ( v130 )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          446);
        v72 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v170,
                (const char (*)[19])"invalid param_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v72, &quest_content->param_str);
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v73 = 0;
      }
      else
      {
        v74 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 192), 0LL);
        v75 = v74;
        if ( *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v74 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v74);
        }
        begin_hour = *v75;
        v76 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 192), 1uLL);
        v77 = v76;
        if ( *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v76 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v76);
        }
        end_hour = *v77;
        *(_DWORD *)(v3 + 96) = ConstValueExcelConfigMgr::getGameDaySeconds(&Config::config_ptr->design_config.txt_config_mgr.const_value_config_mgr);
        *(_DWORD *)(v3 + 112) = ConstValueExcelConfigMgr::getGameHourSeconds(&Config::config_ptr->design_config.txt_config_mgr.const_value_config_mgr);
        if ( *(_DWORD *)(v3 + 96) && *(_DWORD *)(v3 + 112) )
        {
          begin_time = game_day_count * *(_DWORD *)(v3 + 96) + begin_hour * *(_DWORD *)(v3 + 112);
          end_time = game_day_count * *(_DWORD *)(v3 + 96) + end_hour * *(_DWORD *)(v3 + 112);
          game_time = common::tools::RandomUtils::rand<unsigned int>(begin_time, end_time);
          if ( Robot::changeGameTime(robot, game_time, 1) )
          {
            common::milog::MiLogStream::create(
              &v170,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest.cpp",
              "finishQuestContent",
              463);
            common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v170,
              (const char (*)[21])"changeGameTime fails");
            common::milog::MiLogStream::~MiLogStream(&v170);
            v2 = -1;
            v73 = 0;
          }
          else
          {
            v73 = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            455);
          v78 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v170,
                  (const char (*)[18])"game_day_seconds:");
          v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v78,
                  (const unsigned int *)(v3 + 96));
          v80 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v79,
                  (const char (*)[20])" game_hour_seconds:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, (const unsigned int *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = -1;
          v73 = 0;
        }
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
      if ( v73 )
        goto LABEL_237;
      goto LABEL_238;
    case QUEST_CONTENT_LUA_NOTIFY:
      std::operator+<char>((std::string *)(v3 + 384), "event 20 ", &quest_content->param_str);
      if ( Robot::gmTalk(robot, (const std::string *)(v3 + 384)) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          491);
        v87 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v170,
                (const char (*)[19])"gmTalk fails, msg:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v87, (const std::string *)(v3 + 384));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v88 = 0;
      }
      else
      {
        Robot::asyncWait(robot, 0xC8u);
        v88 = 1;
      }
      std::string::~string((std::string *const)(v3 + 384));
      if ( v88 )
        goto LABEL_237;
      goto LABEL_238;
    case QUEST_CONTENT_COMPLETE_ANY_TALK:
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v170, ",", &__a);
      common::tools::StringUtils::splitToList<unsigned int>(
        &quest_content->param_str,
        (const std::string *)&v170,
        (std::vector<unsigned int> *)(v3 + 192),
        0);
      std::string::~string((std::string *const)&v170);
      std::allocator<char>::~allocator(&__a);
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 192)) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          474);
        v81 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v170,
                (const char (*)[20])"can't find any talk");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        operator<<(v81, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v82 = 0;
      }
      else
      {
        v83 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 192));
        index = common::tools::RandomUtils::rand<unsigned int>(0, v83 - 1);
        v84 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 192), index);
        v85 = v84;
        if ( *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v84 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v84);
        }
        *(_DWORD *)(v3 + 112) = *v85;
        if ( (unsigned int)Robot::completeTalk(robot, *(_DWORD *)(v3 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            481);
          v86 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v170,
                  (const char (*)[29])"completeTalk fails, talk_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, (const unsigned int *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = -1;
          v82 = 0;
        }
        else
        {
          v82 = 1;
        }
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
      if ( v82 )
        goto LABEL_237;
      goto LABEL_238;
    case QUEST_CONTENT_UNLOCK_TRANS_POINT:
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v170, "scene_id", &__a);
      ScriptUtil::createTable<unsigned int,char const(&)[9],unsigned int &>(
        (ScriptUtil *const)(v3 + 160),
        (const LuaScript *)&ScriptUtil::no_exception_instance,
        (const std::string *)script,
        (unsigned int *)&v170,
        (const char (*)[9])(v3 + 32),
        (unsigned int *)"point_id",
        (const char (*)[9])(v3 + 48),
        v129);
      std::string::~string((std::string *const)&v170);
      std::allocator<char>::~allocator(&__a);
      if ( Robot::unlockTransPoint(robot, (const luabind::adl::object *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          502);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v170,
          (const char (*)[23])"unlockTransPoint fails");
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v89 = 0;
      }
      else
      {
        v89 = 1;
      }
      luabind::adl::object::~object((luabind::adl::object *const)(v3 + 160));
      if ( v89 )
        goto LABEL_237;
      goto LABEL_238;
    case QUEST_CONTENT_INTERACT_GADGET:
      *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 32);
      std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      Scene::forceGetGadget((Scene *const)(v3 + 160), (uint32_t)scene, (const Entity *)*(unsigned int *)(v3 + 96));
      if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 160), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          513);
        v90 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v170,
                (const char (*)[33])"forceGetGadget fails, gadget_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v90, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v91 = 0;
      }
      else
      {
        proto::GadgetInteractReq::GadgetInteractReq((proto::GadgetInteractReq *const)(v3 + 528));
        v92 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v93 = Entity::getEntityId(v92);
        proto::GadgetInteractReq::set_gadget_entity_id((proto::GadgetInteractReq *const)(v3 + 528), v93);
        proto::GadgetInteractReq::set_op_type((proto::GadgetInteractReq *const)(v3 + 528), INTER_OP_FINISH);
        proto::GadgetInteractReq::set_gadget_id((proto::GadgetInteractReq *const)(v3 + 528), *(_DWORD *)(v3 + 96));
        proto::GadgetInteractRsp::GadgetInteractRsp((proto::GadgetInteractRsp *const)(v3 + 448));
        if ( Robot::sendProto<proto::GadgetInteractReq,proto::GadgetInteractRsp>(
               robot,
               (proto::GadgetInteractReq *)(v3 + 528),
               (proto::GadgetInteractRsp *)(v3 + 448)) )
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            523);
          v94 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v170,
                  (const char (*)[18])"sendProto fails, ");
          operator<<(v94, robot);
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = -1;
          v95 = 0;
        }
        else if ( proto::GadgetInteractRsp::retcode((const proto::GadgetInteractRsp *const)(v3 + 448)) )
        {
          common::milog::MiLogStream::create(
            &v170,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest.cpp",
            "finishQuestContent",
            528);
          v96 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v170,
                  (const char (*)[27])"GadgetInteractRsp retcode:");
          *(_DWORD *)(v3 + 112) = proto::GadgetInteractRsp::retcode((const proto::GadgetInteractRsp *const)(v3 + 448));
          v97 = common::milog::MiLogStream::operator<<<int,(int *)0>(v96, (const int *)(v3 + 112));
          v98 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v97, (const char (*)[13])", gadget_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, (const unsigned int *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream(&v170);
          v2 = proto::GadgetInteractRsp::retcode((const proto::GadgetInteractRsp *const)(v3 + 448));
          v95 = 0;
        }
        else
        {
          v95 = 1;
        }
        proto::GadgetInteractRsp::~GadgetInteractRsp((proto::GadgetInteractRsp *const)(v3 + 448));
        proto::GadgetInteractReq::~GadgetInteractReq((proto::GadgetInteractReq *const)(v3 + 528));
        v91 = v95 != 0;
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 160));
      if ( v91 )
        goto LABEL_237;
      goto LABEL_238;
    case QUEST_CONTENT_SKILL:
      skill_id = *(_DWORD *)(v3 + 32);
      proto::EvtDoSkillSuccNotify::EvtDoSkillSuccNotify((proto::EvtDoSkillSuccNotify *const)(v3 + 448));
      proto::EvtDoSkillSuccNotify::set_forward_type((proto::EvtDoSkillSuccNotify *const)(v3 + 448), FORWARD_ONLY_SERVER);
      v99 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      v100 = Entity::getEntityId(v99);
      proto::EvtDoSkillSuccNotify::set_caster_id((proto::EvtDoSkillSuccNotify *const)(v3 + 448), v100);
      proto::EvtDoSkillSuccNotify::set_skill_id((proto::EvtDoSkillSuccNotify *const)(v3 + 448), skill_id);
      if ( Robot::sendProto<proto::EvtDoSkillSuccNotify>(robot, (proto::EvtDoSkillSuccNotify *)(v3 + 448)) )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          542);
        v101 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 &v170,
                 (const char (*)[16])"sendProto fails");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        operator<<(v101, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v102 = 0;
      }
      else
      {
        Robot::asyncWait(robot, 0xC8u);
        v102 = 1;
      }
      proto::EvtDoSkillSuccNotify::~EvtDoSkillSuccNotify((proto::EvtDoSkillSuccNotify *const)(v3 + 448));
      if ( v102 )
        goto LABEL_237;
      goto LABEL_238;
    case QUEST_CONTENT_CITY_LEVEL_UP:
      city_level = *(_DWORD *)(v3 + 32);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v170, ",", &__a);
      v103 = common::tools::StringUtils::splitToList<unsigned int>(
               &quest_content->param_str,
               (const std::string *)&v170,
               (std::vector<unsigned int> *)(v3 + 192),
               0) != 0;
      std::string::~string((std::string *const)&v170);
      std::allocator<char>::~allocator(&__a);
      if ( v103 )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          554);
        v104 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 &v170,
                 (const char (*)[18])"splitToList fails");
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
LABEL_196:
        operator<<(v104, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v105 = 0;
        goto LABEL_236;
      }
      if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 192)) != 2 )
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          559);
        v106 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 &v170,
                 (const char (*)[19])"invalid param_vec:");
        v104 = common::milog::MiLogStream::operator<<<unsigned int>(v106, (const std::vector<unsigned int> *)(v3 + 192));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        goto LABEL_196;
      }
      v107 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 192), 0LL);
      v108 = v107;
      if ( *(_BYTE *)(((unsigned __int64)v107 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v107 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v107 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v107);
      }
      *(_DWORD *)(v3 + 80) = *v108;
      v109 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 192), 1uLL);
      v110 = v109;
      if ( *(_BYTE *)(((unsigned __int64)v109 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v109 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v109 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v109);
      }
      *(_DWORD *)(v3 + 96) = *v110;
      if ( Scene::getSceneId(scene) == *(_DWORD *)(v3 + 80) )
      {
        while ( 1 )
        {
          city_config_ptr = WorldAreaExcelConfigMgr::findCityConfig(
                              &Config::config_ptr->design_config.txt_config_mgr.world_area_config_mgr,
                              *(_DWORD *)(v3 + 96));
          if ( !city_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v170,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest.cpp",
              "finishQuestContent",
              574);
            v112 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                     &v170,
                     (const char (*)[32])"findCityConfig fails, scene_id:");
            v113 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v112,
                     (const unsigned int *)(v3 + 80));
            v114 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                     v113,
                     (const char (*)[11])", city_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v114,
              (const unsigned int *)(v3 + 96));
            common::milog::MiLogStream::~MiLogStream(&v170);
            v2 = -1;
            goto LABEL_235;
          }
          __for_range_1 = &city_config_ptr->area_id_vec;
          __for_begin._M_current = (std::shared_ptr<Monster> *)std::vector<unsigned int>::begin(&city_config_ptr->area_id_vec)._M_current;
          __for_end._M_current = (std::shared_ptr<Monster> *)std::vector<unsigned int>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
          {
            v115 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
            v116 = v115;
            if ( *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v115 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v115);
            }
            area_id = *v116;
            if ( !Scene::isAreaUnlocked(scene, area_id) )
            {
              std::to_string((std::string *)&v170, area_id);
              std::to_string(&__rhs, *(_DWORD *)(v3 + 80));
              std::operator+<char>((std::string *)(v3 + 320), "area unlock ", &__rhs);
              std::operator+<char>((std::string *)(v3 + 384), (std::string *)(v3 + 320), " ");
              std::operator+<char>((std::string *)(v3 + 256), (std::string *)(v3 + 384), (std::string *)&v170);
              std::string::~string((std::string *const)(v3 + 384));
              std::string::~string((std::string *const)(v3 + 320));
              std::string::~string(&__rhs);
              std::string::~string((std::string *const)&v170);
              if ( Robot::gmTalk(robot, (const std::string *)(v3 + 256)) )
              {
                common::milog::MiLogStream::create(
                  &v170,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/quest.cpp",
                  "finishQuestContent",
                  584);
                v117 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                         &v170,
                         (const char (*)[19])"gmTalk fails, msg:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v117,
                  (const std::string *)(v3 + 256));
                common::milog::MiLogStream::~MiLogStream(&v170);
                v2 = -1;
                v118 = 0;
              }
              else
              {
                v118 = 1;
              }
              std::string::~string((std::string *const)(v3 + 256));
              if ( v118 != 1 )
                goto LABEL_235;
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
          }
          city_info_ptr = Scene::findCityInfo(scene, *(_DWORD *)(v3 + 96));
          if ( !city_info_ptr )
          {
            common::milog::MiLogStream::create(
              &v170,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest.cpp",
              "finishQuestContent",
              591);
            v119 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                     &v170,
                     (const char (*)[29])"findCityInfo fails, city_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v119,
              (const unsigned int *)(v3 + 96));
            common::milog::MiLogStream::~MiLogStream(&v170);
            v2 = -1;
            goto LABEL_235;
          }
          *(_DWORD *)(v3 + 112) = proto::CityInfo::level(city_info_ptr) + 1;
          if ( city_level < *(_DWORD *)(v3 + 112) )
          {
            v105 = 1;
            goto LABEL_236;
          }
          levelup_config_ptr = WorldAreaExcelConfigMgr::findCityLevelupConfig(
                                 &Config::config_ptr->design_config.txt_config_mgr.world_area_config_mgr,
                                 *(_DWORD *)(v3 + 96),
                                 *(_DWORD *)(v3 + 112));
          if ( !levelup_config_ptr )
            break;
          if ( *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->consume_item.item_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->consume_item.item_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&levelup_config_ptr->consume_item.item_id);
          }
          item_id_1 = levelup_config_ptr->consume_item.item_id;
          if ( *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->consume_item.item_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)levelup_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->consume_item.item_num >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&levelup_config_ptr->consume_item.item_num);
          }
          item_num = levelup_config_ptr->consume_item.item_num;
          std::to_string((std::string *)&v170, item_num);
          std::to_string(&__rhs, item_id_1);
          std::operator+<char>((std::string *)(v3 + 320), "item add ", &__rhs);
          std::operator+<char>((std::string *)(v3 + 384), (std::string *)(v3 + 320), " ");
          std::operator+<char>((std::string *)(v3 + 256), (std::string *)(v3 + 384), (std::string *)&v170);
          std::string::~string((std::string *const)(v3 + 384));
          std::string::~string((std::string *const)(v3 + 320));
          std::string::~string(&__rhs);
          std::string::~string((std::string *const)&v170);
          if ( Robot::gmTalk(robot, (const std::string *)(v3 + 256)) )
          {
            common::milog::MiLogStream::create(
              &v170,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest.cpp",
              "finishQuestContent",
              608);
            v125 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                     &v170,
                     (const char (*)[19])"gmTalk fails, msg:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v125, (const std::string *)(v3 + 256));
            common::milog::MiLogStream::~MiLogStream(&v170);
            v2 = -1;
            v126 = 0;
          }
          else
          {
            ret = Scene::levelUpCity(scene, *(_DWORD *)(v3 + 96), item_num);
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v170,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest.cpp",
                "finishQuestContent",
                614);
              v127 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                       &v170,
                       (const char (*)[18])"levelUpCity fails");
              operator<<(v127, scene);
              common::milog::MiLogStream::~MiLogStream(&v170);
              v2 = ret;
              v126 = 0;
            }
            else
            {
              v126 = 1;
            }
          }
          std::string::~string((std::string *const)(v3 + 256));
          if ( v126 != 1 )
            goto LABEL_235;
        }
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          600);
        v120 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 &v170,
                 (const char (*)[39])"findCityLevelupConfig fails, scene_id:");
        v121 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v120,
                 (const unsigned int *)(v3 + 80));
        v122 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v121, (const char (*)[11])", city_id:");
        v123 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v122,
                 (const unsigned int *)(v3 + 96));
        v124 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                 v123,
                 (const char (*)[14])", next_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v124, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
LABEL_235:
        v105 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v170,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest.cpp",
          "finishQuestContent",
          566);
        v111 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 &v170,
                 (const char (*)[18])"invalid scene_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v111, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v170);
        v2 = -1;
        v105 = 0;
      }
LABEL_236:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
      if ( v105 )
        goto LABEL_237;
LABEL_238:
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128));
      result = v2;
      if ( v171 == (char *)v3 )
      {
        *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
        *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
        *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
        *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
        *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
        *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
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
        *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
        *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = -168430091;
      }
      return result;
    case QUEST_CONTENT_ENTER_MY_HOME_WORLD:
      *(_DWORD *)(v3 + 112) = *(_DWORD *)(v3 + 32);
      if ( !(unsigned int)Robot::jumpSceneByGm(robot, *(_DWORD *)(v3 + 112)) )
        goto LABEL_237;
      common::milog::MiLogStream::create(
        &v170,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest.cpp",
        "finishQuestContent",
        349);
      v53 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v170,
              (const char (*)[31])"jumpSceneByGm fails, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, (const unsigned int *)(v3 + 112));
      common::milog::MiLogStream::~MiLogStream(&v170);
      v2 = -1;
      goto LABEL_238;
    default:
LABEL_237:
      v2 = 0;
      goto LABEL_238;
  }
};
