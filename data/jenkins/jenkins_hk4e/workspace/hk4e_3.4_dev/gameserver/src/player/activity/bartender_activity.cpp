// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/bartender_activity.cpp

// Line 26: range 000000001792AEEA-000000001792B070
void __cdecl BartenderActivity::onClear(BartenderActivity *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  std::unordered_set<unsigned int>::clear(&this->unlock_item_set_);
  std::unordered_set<unsigned int>::clear(&this->unlock_formula_set_);
  std::unordered_map<unsigned int,bool>::clear(&this->unlock_task_map_);
  std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::clear(&this->unlock_level_map_);
  if ( *(char *)(((unsigned __int64)&this->is_develop_module_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_develop_module_open_);
  this->is_develop_module_open_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->trans_no_count_);
  this->trans_no_count_ = 0LL;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  BartenderActivity::clearLevel(this);
  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/bartender_activity.cpp",
    "onClear",
    35);
  common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v1, (const char (*)[25])"[BARTENDER] onClear exec");
  common::milog::MiLogStream::~MiLogStream(&v1);
};

// Line 39: range 000000001792B072-000000001792BB7F
int32_t __cdecl BartenderActivity::execAction(BartenderActivity *const this, const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  int v7; // r15d
  std::vector<unsigned int>::iterator v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rdx
  bool *v12; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v17; // rdx
  unsigned int *v18; // rcx
  std::pair<bool,int> *v19; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false>,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  unsigned int *__last; // [rsp+8h] [rbp-118h]
  bool __x; // [rsp+27h] [rbp-F9h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-F0h] BYREF
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-E8h]
  std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-E0h]
  std::vector<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-D8h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 11 level_id:95 48 4 10 task_id:72 64 24 12 param_vec:89";
  *(_QWORD *)(v3 + 16) = BartenderActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  switch ( action_exec->type )
  {
    case NEW_ACTIVITY_ACTION_UNLOCK_BARTENDER_MATERIAL:
      if ( std::vector<std::string>::size(&action_exec->param) )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
        if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
               &action_exec->param,
               (std::vector<unsigned int> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/bartender_activity.cpp",
            "execAction",
            52);
          v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                 &v30,
                 (const char (*)[30])"[BARTENDER] strToNum failed: ");
          common::milog::MiLogStream::operator<<<std::string>(v6, &action_exec->param);
          common::milog::MiLogStream::~MiLogStream(&v30);
          v2 = -1;
          v7 = 0;
        }
        else
        {
          __last = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
          v8._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
          std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
            &this->unlock_item_set_,
            v8,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last);
          BaseActivity::notifyClientData(this, 0);
          v7 = 1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
        if ( v7 )
          goto LABEL_53;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/bartender_activity.cpp",
          "execAction",
          46);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v30,
          (const char (*)[29])"[BARTENDER] param not enough");
        common::milog::MiLogStream::~MiLogStream(&v30);
        v2 = -1;
      }
      break;
    case NEW_ACTIVITY_ACTION_UNLOCK_BARTENDER_STORY_MODULE:
      if ( std::vector<std::string>::size(&action_exec->param) )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
        if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
               &action_exec->param,
               (std::vector<unsigned int> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/bartender_activity.cpp",
            "execAction",
            69);
          v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                 &v30,
                 (const char (*)[30])"[BARTENDER] strToNum failed: ");
          common::milog::MiLogStream::operator<<<std::string>(v9, &action_exec->param);
          common::milog::MiLogStream::~MiLogStream(&v30);
          v2 = -1;
          v10 = 0;
        }
        else
        {
          __for_range = (std::vector<unsigned int> *)(v3 + 64);
          __for_end_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
          __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_end_0, &__for_end) )
          {
            v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_end_0);
            if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 48) = *v11;
            __x = 0;
            v13 = std::unordered_map<unsigned int,bool>::emplace<unsigned int &,bool>(
                    &this->unlock_task_map_,
                    (unsigned int *)(v3 + 48),
                    &__x,
                    (unsigned int *)&this->unlock_task_map_,
                    v12);
            if ( !v13.second )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/bartender_activity.cpp",
                "execAction",
                76);
              v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                      &v30,
                      (const char (*)[47])"[BARTENDER] task is already unlocked, task_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v30);
            }
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_end_0);
          }
          BaseActivity::notifyClientData(this, 0);
          v10 = 1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
        if ( v10 )
          goto LABEL_53;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/bartender_activity.cpp",
          "execAction",
          63);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v30,
          (const char (*)[29])"[BARTENDER] param not enough");
        common::milog::MiLogStream::~MiLogStream(&v30);
        v2 = -1;
      }
      break;
    case NEW_ACTIVITY_ACTION_UNLOCK_BARTENDER_LEVEL:
      if ( std::vector<std::string>::size(&action_exec->param) )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
        if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
               &action_exec->param,
               (std::vector<unsigned int> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/bartender_activity.cpp",
            "execAction",
            92);
          v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v30,
                  (const char (*)[30])"[BARTENDER] strToNum failed: ");
          common::milog::MiLogStream::operator<<<std::string>(v15, &action_exec->param);
          common::milog::MiLogStream::~MiLogStream(&v30);
          v2 = -1;
          v16 = 0;
        }
        else
        {
          __for_range_0 = (std::vector<unsigned int> *)(v3 + 64);
          __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
          __for_end_0._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
          {
            v17 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 32) = *v17;
            *(_DWORD *)(v3 + 48) = 0;
            __x = 0;
            __for_end._M_current = (unsigned int *)std::make_pair<bool,int>(&__x, (int *)(v3 + 48));
            v20 = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::emplace<unsigned int &,std::pair<bool,int>>(
                    &this->unlock_level_map_,
                    (unsigned int *)(v3 + 32),
                    (std::pair<bool,int> *)&__for_end,
                    v18,
                    v19);
            if ( !v20.second )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/bartender_activity.cpp",
                "execAction",
                99);
              v21 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      &v30,
                      (const char (*)[49])"[BARTENDER] level is already unlocked, level_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream(&v30);
            }
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
          }
          BaseActivity::notifyClientData(this, 0);
          v16 = 1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
        if ( v16 )
          goto LABEL_53;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/bartender_activity.cpp",
          "execAction",
          86);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v30,
          (const char (*)[29])"[BARTENDER] param not enough");
        common::milog::MiLogStream::~MiLogStream(&v30);
        v2 = -1;
      }
      break;
    case NEW_ACTIVITY_ACTION_UNLOCK_BARTENDER_DEVELOP_MODULE:
      if ( *(char *)(((unsigned __int64)&this->is_develop_module_open_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_develop_module_open_);
      this->is_develop_module_open_ = 1;
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_53;
    case NEW_ACTIVITY_ACTION_CLOSE_BARTENDER_CONTENT:
      if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_content_closed_);
      this->is_content_closed_ = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->level_id_ )
        BartenderActivity::settleLevel(this);
      BartenderActivity::lockRoomSceneWhenContentClosed(this);
      BaseActivity::notifyClientData(this, 0);
LABEL_53:
      v2 = 0;
      break;
    default:
      v2 = BaseActivity::execAction(this, action_exec);
      break;
  }
  result = v2;
  if ( v31 == (char *)v3 )
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

// Line 132: range 000000001792BB80-000000001792BEE5
bool __cdecl BartenderActivity::checkCondIsMeet(BartenderActivity *const this, const data::NewActivityCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v6; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false>::pointer v7; // rdx
  std::pair<bool,unsigned int> *p_second; // rax
  std::vector<int>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<int>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> __y; // [rsp+20h] [rbp-B0h] BYREF
  const std::vector<int> *__for_range; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 level_id:142 64 8 8 iter:144";
  *(_QWORD *)(v2 + 16) = BartenderActivity::checkCondIsMeet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type == NEW_ACTIVITY_COND_FINISH_BARTENDER_LEVEL )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      __for_range = &cond->param;
      __for_begin._M_current = std::vector<int>::begin(&cond->param)._M_current;
      __for_end._M_current = std::vector<int>::end(&cond->param)._M_current;
      while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin, &__for_end) )
      {
        v6 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *v6;
        *(std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::find(
                                                                                                  &this->unlock_level_map_,
                                                                                                  (const std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::key_type *)(v2 + 48));
        __y._M_cur = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::end(&this->unlock_level_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> *)(v2 + 64),
               &__y) )
        {
          result = 0;
          goto LABEL_22;
        }
        v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false> *const)(v2 + 64));
        p_second = &v7->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_second);
        }
        if ( !v7->second.first )
        {
          result = 0;
          goto LABEL_22;
        }
        __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin);
      }
      result = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "checkCondIsMeet",
        139);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v13,
        (const char (*)[29])"[BARTENDER] param not enough");
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = 0;
    }
  }
  else
  {
    result = BaseActivity::checkCondIsMeet(this, cond);
  }
LABEL_22:
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
  return result;
};

// Line 163: range 000000001792BEE6-000000001792C310
int32_t __cdecl BartenderActivity::fromScheduleBin(
        BartenderActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  const google::protobuf::RepeatedField<unsigned int> *v2; // rax
  const google::protobuf::RepeatedField<unsigned int> *v3; // rax
  unsigned int *v4; // rcx
  bool *v5; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int *v9; // rcx
  std::pair<bool,unsigned int> *v10; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rbx
  bool is_develop_module_open; // dl
  uint64_t v14; // rax
  bool is_content_closed; // dl
  bool __x; // [rsp+17h] [rbp-79h] BYREF
  unsigned int __y; // [rsp+18h] [rbp-78h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  google::protobuf::RepeatedPtrField<proto::BartenderLevelBin>::const_iterator __for_begin_0; // [rsp+20h] [rbp-70h] BYREF
  google::protobuf::RepeatedPtrField<proto::BartenderLevelBin>::const_iterator __for_end_0; // [rsp+28h] [rbp-68h] BYREF
  const proto::BartenderScheduleBin *bartender_bin; // [rsp+30h] [rbp-60h]
  const google::protobuf::RepeatedPtrField<proto::BartenderTaskBin> *__for_range; // [rsp+38h] [rbp-58h]
  const google::protobuf::RepeatedPtrField<proto::BartenderLevelBin> *__for_range_0; // [rsp+40h] [rbp-50h]
  const proto::BartenderLevelBin *level_bin; // [rsp+48h] [rbp-48h]
  const proto::BartenderTaskBin *task_bin; // [rsp+50h] [rbp-40h]
  google::protobuf::RepeatedPtrField<proto::BartenderTaskBin>::const_iterator __for_end; // [rsp+58h] [rbp-38h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-30h] BYREF

  bartender_bin = proto::ActivityScheduleBin::bartender_bin(bin);
  v2 = proto::BartenderScheduleBin::unlock_item_list(bartender_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->unlock_item_set_, v2);
  v3 = proto::BartenderScheduleBin::unlock_formula_list(bartender_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->unlock_formula_set_,
    v3);
  __for_range = proto::BartenderScheduleBin::unlock_task_list(bartender_bin);
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::BartenderTaskBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BartenderTaskBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BartenderTaskBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BartenderTaskBin> *const)&__for_end_0,
            &__for_end) )
  {
    task_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BartenderTaskBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::BartenderTaskBin> *const)&__for_end_0);
    __x = proto::BartenderTaskBin::is_finish(task_bin);
    val = proto::BartenderTaskBin::id(task_bin);
    v6 = std::unordered_map<unsigned int,bool>::emplace<unsigned int,bool>(&this->unlock_task_map_, &val, &__x, v4, v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/bartender_activity.cpp",
        "fromScheduleBin",
        171);
      v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v27,
             (const char (*)[31])"[BARTENDER] duplicate task_id:");
      val = proto::BartenderTaskBin::id(task_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      return -1;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::BartenderTaskBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::BartenderTaskBin> *const)&__for_end_0);
  }
  __for_range_0 = proto::BartenderScheduleBin::unlock_level_list(bartender_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::BartenderLevelBin>::begin(__for_range_0).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::BartenderLevelBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BartenderLevelBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BartenderLevelBin const>::operator*(&__for_begin_0);
    __y = proto::BartenderLevelBin::max_score(level_bin);
    __x = proto::BartenderLevelBin::is_finish(level_bin);
    __for_end.it_ = (void *const *)std::make_pair<bool,unsigned int>(&__x, &__y);
    val = proto::BartenderLevelBin::id(level_bin);
    v11 = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::emplace<unsigned int,std::pair<bool,unsigned int>>(
            &this->unlock_level_map_,
            &val,
            (std::pair<bool,unsigned int> *)&__for_end,
            v9,
            v10);
    if ( !v11.second )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/bartender_activity.cpp",
        "fromScheduleBin",
        179);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v27,
              (const char (*)[32])"[BARTENDER] duplicate level_id:");
      val = proto::BartenderLevelBin::id(level_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      return -1;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::BartenderLevelBin const>::operator++(&__for_begin_0);
  }
  is_develop_module_open = proto::BartenderScheduleBin::is_develop_module_open(bartender_bin);
  if ( *(char *)(((unsigned __int64)&this->is_develop_module_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_develop_module_open_);
  this->is_develop_module_open_ = is_develop_module_open;
  v14 = proto::BartenderScheduleBin::trans_no_count(bartender_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->trans_no_count_);
  this->trans_no_count_ = v14;
  is_content_closed = proto::BartenderScheduleBin::is_content_closed(bartender_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  return 0;
};

// Line 190: range 000000001792C312-000000001792C715
int32_t __cdecl BartenderActivity::toScheduleBin(const BartenderActivity *const this, proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  std::unordered_map<unsigned int,bool>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,bool>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  proto::BartenderScheduleBin *bartender_bin; // [rsp+28h] [rbp-58h]
  const std::unordered_map<unsigned int,bool> *__for_range; // [rsp+30h] [rbp-50h]
  const std::unordered_map<unsigned int,std::pair<bool,unsigned int>> *__for_range_0; // [rsp+38h] [rbp-48h]
  const std::pair<unsigned int const,std::pair<bool,unsigned int> > *v10; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<bool,unsigned int> > >::type *id_0; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,unsigned int> > >::type *pair; // [rsp+50h] [rbp-30h]
  proto::BartenderLevelBin *level_bin; // [rsp+58h] [rbp-28h]
  const std::pair<unsigned int const,bool> *v14; // [rsp+60h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *id; // [rsp+68h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_finish; // [rsp+70h] [rbp-10h]
  proto::BartenderTaskBin *task_bin; // [rsp+78h] [rbp-8h]

  bartender_bin = proto::ActivityScheduleBin::mutable_bartender_bin(bin);
  v2 = proto::BartenderScheduleBin::mutable_unlock_item_list(bartender_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->unlock_item_set_, v2);
  v3 = proto::BartenderScheduleBin::mutable_unlock_formula_list(bartender_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->unlock_formula_set_, v3);
  __for_range = &this->unlock_task_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,bool>::begin(&this->unlock_task_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,bool>::end(&this->unlock_task_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,bool>,false>(&__for_begin, &__for_end) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,bool>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,bool>(v14);
    is_finish = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v14);
    task_bin = proto::BartenderScheduleBin::add_unlock_task_list(bartender_bin);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BartenderTaskBin::set_id(task_bin, *id);
    if ( *(_BYTE *)(((unsigned __int64)is_finish >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)is_finish & 7) >= *(_BYTE *)(((unsigned __int64)is_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(is_finish);
    }
    proto::BartenderTaskBin::set_is_finish(task_bin, *is_finish);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,bool>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->unlock_level_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false>::__node_type *)std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::begin(&this->unlock_level_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false>::__node_type *)std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> *)&__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false> *const)&__for_begin);
    id_0 = std::get<0ul,unsigned int const,std::pair<bool,unsigned int>>(v10);
    pair = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<bool,unsigned int>>(v10);
    level_bin = proto::BartenderScheduleBin::add_unlock_level_list(bartender_bin);
    if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BartenderLevelBin::set_id(level_bin, *id_0);
    if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)pair & 7) >= *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(pair);
    }
    proto::BartenderLevelBin::set_is_finish(level_bin, pair->first);
    if ( *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BartenderLevelBin::set_max_score(level_bin, pair->second);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false> *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_develop_module_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_develop_module_open_);
  proto::BartenderScheduleBin::set_is_develop_module_open(bartender_bin, this->is_develop_module_open_);
  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::BartenderScheduleBin::set_trans_no_count(bartender_bin, this->trans_no_count_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::BartenderScheduleBin::set_is_content_closed(bartender_bin, this->is_content_closed_);
  return 0;
};

// Line 214: range 000000001792C716-000000001792CC2D
int32_t __cdecl BartenderActivity::toClient(BartenderActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  std::unordered_map<unsigned int,bool>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,bool>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  proto::BartenderActivityDetailInfo *bartender_info; // [rsp+28h] [rbp-88h]
  std::unordered_map<unsigned int,bool> *__for_range; // [rsp+30h] [rbp-80h]
  std::unordered_map<unsigned int,std::pair<bool,unsigned int>> *__for_range_0; // [rsp+38h] [rbp-78h]
  const std::pair<unsigned int const,std::pair<bool,unsigned int> > *v12; // [rsp+40h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<bool,unsigned int> > >::type *id_0; // [rsp+48h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,unsigned int> > >::type *pair; // [rsp+50h] [rbp-60h]
  proto::BartenderLevelInfo *level_info; // [rsp+58h] [rbp-58h]
  const std::pair<unsigned int const,bool> *v16; // [rsp+60h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *id; // [rsp+68h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_finish; // [rsp+70h] [rbp-40h]
  proto::BartenderTaskInfo *task_info; // [rsp+78h] [rbp-38h]
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bartender_activity.cpp",
      "toClient",
      217);
    v2 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v20,
           (const char (*)[48])"[Bartender] BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    bartender_info = proto::ActivityInfo::mutable_bartender_info(activity_info);
    v4 = proto::BartenderActivityDetailInfo::mutable_unlock_item_list(bartender_info);
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->unlock_item_set_, v4);
    v5 = proto::BartenderActivityDetailInfo::mutable_unlock_formula_list(bartender_info);
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
      &this->unlock_formula_set_,
      v5);
    __for_range = &this->unlock_task_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,bool>::begin(&this->unlock_task_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,bool>::end(&this->unlock_task_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,bool>,false>(&__for_begin, &__for_end) )
    {
      v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,bool>(v16);
      is_finish = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(v16);
      task_info = proto::BartenderActivityDetailInfo::add_unlock_task_list(bartender_info);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BartenderTaskInfo::set_id(task_info, *id);
      if ( *(_BYTE *)(((unsigned __int64)is_finish >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_finish & 7) >= *(_BYTE *)(((unsigned __int64)is_finish >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(is_finish);
      }
      proto::BartenderTaskInfo::set_is_finish(task_info, *is_finish);
      std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = &this->unlock_level_map_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false>::__node_type *)std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::begin(&this->unlock_level_map_)._M_cur;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false>::__node_type *)std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> *)&__for_end) )
    {
      v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false> *const)&__for_begin);
      id_0 = std::get<0ul,unsigned int const,std::pair<bool,unsigned int>>(v12);
      pair = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<bool,unsigned int>>(v12);
      level_info = proto::BartenderActivityDetailInfo::add_unlock_level_list(bartender_info);
      if ( *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BartenderLevelInfo::set_id(level_info, *id_0);
      if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)pair & 7) >= *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(pair);
      }
      proto::BartenderLevelInfo::set_is_finish(level_info, pair->first);
      if ( *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BartenderLevelInfo::set_max_score(level_info, pair->second);
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false> *const)&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_develop_module_open_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_develop_module_open_);
    proto::BartenderActivityDetailInfo::set_is_develop_module_open(bartender_info, this->is_develop_module_open_);
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::BartenderActivityDetailInfo::set_is_content_closed(bartender_info, this->is_content_closed_);
    return 0;
  }
};

// Line 242: range 000000001792CC2E-000000001792CC8B
int32_t __cdecl BartenderActivity::init(BartenderActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BartenderActivity::registerEvent(this);
  return 0;
};

// Line 252: range 000000001792CC8C-000000001792CCBE
void __cdecl BartenderActivity::onStart(BartenderActivity *const this)
{
  BartenderActivity::registerEvent(this);
  BartenderActivity::updateDefaultUnlockFormula(this);
  BartenderActivity::unlockRoomSceneOnStart(this);
};

// Line 260: range 000000001792CCC0-000000001792CCDA
void __cdecl BartenderActivity::onSettle(BartenderActivity *const this)
{
  BartenderActivity::unregisterEvent(this);
};

// Line 265: range 000000001792CCDC-000000001792CD0E
void __cdecl BartenderActivity::onLogin(BartenderActivity *const this)
{
  BaseActivity::onLogin(this);
  BartenderActivity::clearLevel(this);
  BartenderActivity::updateDefaultUnlockFormula(this);
};

// Line 272: range 000000001792CD10-000000001792D030
void __cdecl BartenderActivity::registerEvent(BartenderActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerEventComp *cb_ptr; // [rsp+10h] [rbp-C0h]
  PlayerEventComp *EventComp; // [rsp+20h] [rbp-B0h]
  std::enable_shared_from_this<BaseActivity> v6; // [rsp+30h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:273 64 16 12 this_wtr:274";
  *(_QWORD *)(v1 + 16) = BartenderActivity::registerEvent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<BartenderActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<BartenderActivity>::weak_ptr<BartenderActivity,void>(
    (std::weak_ptr<BartenderActivity> *const)(v1 + 64),
    (const std::shared_ptr<BartenderActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::weak_ptr<BartenderActivity>::weak_ptr(
    (std::weak_ptr<BartenderActivity> *const)&v6,
    (const std::weak_ptr<BartenderActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<BartenderActivity,FinishParentQuestEvent>(
    EventComp,
    (std::weak_ptr<BartenderActivity> *)&v6,
    (void (*)(BartenderActivity *, const FinishParentQuestEvent *))BartenderActivity::onParentQuestFinish,
    0LL);
  std::weak_ptr<BartenderActivity>::~weak_ptr((std::weak_ptr<BartenderActivity> *const)&v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cb_ptr = Player::getEventComp(this->player_);
  std::weak_ptr<BartenderActivity>::weak_ptr(
    (std::weak_ptr<BartenderActivity> *const)&v6,
    (const std::weak_ptr<BartenderActivity> *)(v1 + 64));
  PlayerEventComp::tryRegisterObserver<BartenderActivity,QuestStateChangeEvent>(
    cb_ptr,
    (std::weak_ptr<BartenderActivity> *)&v6,
    (void (*)(BartenderActivity *, const QuestStateChangeEvent *))BartenderActivity::onQuestStateChangeEvent,
    0LL);
  std::weak_ptr<BartenderActivity>::~weak_ptr((std::weak_ptr<BartenderActivity> *const)&v6);
  std::weak_ptr<BartenderActivity>::~weak_ptr((std::weak_ptr<BartenderActivity> *const)(v1 + 64));
  std::shared_ptr<BartenderActivity>::~shared_ptr((std::shared_ptr<BartenderActivity> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
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

// Line 280: range 000000001792D032-000000001792D136
void __cdecl BartenderActivity::unregisterEvent(BartenderActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  __for_range = &this->event_observer_map_;
  __for_begin._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::begin(&this->event_observer_map_)._M_node;
  __for_end._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::end(&this->event_observer_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator*(&__for_begin);
    _ = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    obs_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(obs_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 292: range 000000001792D138-000000001792D6BB
void __cdecl BartenderActivity::onParentQuestFinish(BartenderActivity *const this, const FinishParentQuestEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::pointer v9; // rdx
  bool *p_second; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::pointer v11; // rdx
  bool *v12; // rax
  PlayerWatcherComp *WatcherComp; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-120h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+20h] [rbp-110h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-108h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 task_id:298 64 8 17 task_set_iter:293 96 8 8 iter:300";
  *(_QWORD *)(v2 + 16) = BartenderActivity::onParentQuestFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &v5->design_config.txt_config_mgr.activity_bartender_config_mgr.parent_quest_to_task_map,
                                                                                            &event->parent_quest_id);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&v6->design_config.txt_config_mgr.activity_bartender_config_mgr.parent_quest_to_task_map)._M_cur;
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         &__y);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( !v7 )
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *v8;
      *(std::unordered_map<unsigned int,bool>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,bool>::find(
                                                                        &this->unlock_task_map_,
                                                                        (const std::unordered_map<unsigned int,bool>::key_type *)(v2 + 48));
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::unordered_map<unsigned int,bool>::end(&this->unlock_task_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,bool>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false> *)(v2 + 96),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false> *)&__y) )
      {
        v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false> *const)(v2 + 96));
        p_second = &v9->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_second);
        }
        if ( !v9->second )
        {
          v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false> *const)(v2 + 96));
          v12 = &v11->second;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(v12);
          }
          v11->second = 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          WatcherComp = Player::getWatcherComp(this->player_);
          PlayerWatcherComp::triggerBartenderFinishStoryModule(WatcherComp, *(_DWORD *)(v2 + 48));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/bartender_activity.cpp",
            "onParentQuestFinish",
            310);
          v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v25,
                  (const char (*)[47])"[BARTENDER] task is already finished, task_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])", quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &event->parent_quest_id);
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/bartender_activity.cpp",
          "onParentQuestFinish",
          315);
        v17 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v26,
                (const char (*)[37])"[BARTENDER] task is locked, task_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])", quest_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &event->parent_quest_id);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    BaseActivity::notifyClientData(this, 0);
    BaseActivity::updateAllConds(this);
  }
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
};

// Line 323: range 000000001792D6BC-000000001792D71A
void __cdecl BartenderActivity::openAllByGm(BartenderActivity *const this)
{
  BartenderActivity::openItemByGm(this, 0);
  BartenderActivity::openFormulaByGm(this, 0);
  BartenderActivity::openTaskByGm(this, 0);
  BartenderActivity::openLevelByGm(this, 0);
  BartenderActivity::openDevelopModuleByGm(this);
};

// Line 332: range 000000001792D71C-000000001792D747
void __cdecl BartenderActivity::clearAllByGm(BartenderActivity *const this)
{
  BaseActivity::clear(this);
  BaseActivity::notifyClientData(this, 0);
};

// Line 338: range 000000001792D748-000000001792D98C
__int64 __fastcall BartenderActivity::openItemByGm(BartenderActivity *const this, uint32_t item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  std::set<unsigned int> *item_set; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 item_id:337";
  *(_QWORD *)(v2 + 16) = BartenderActivity::openItemByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = item_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  item_set = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.display_item_config_mgr.bartender_material_set;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
            item_set,
            (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "openItemByGm",
        350);
      v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v11,
             (const char (*)[51])"[BARTENDER] item_id is not bartender material, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = 0xFFFFFFFFLL;
      goto LABEL_10;
    }
    std::unordered_set<unsigned int>::insert(
      &this->unlock_item_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
  }
  else
  {
    M_node = std::set<unsigned int>::end(item_set)._M_node;
    v6._M_node = std::set<unsigned int>::begin(item_set)._M_node;
    std::unordered_set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
      &this->unlock_item_set_,
      v6,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node);
  }
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_10:
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

// Line 358: range 000000001792D98E-000000001792DEC6
__int64 __fastcall BartenderActivity::openFormulaByGm(BartenderActivity *const this, uint32_t formula_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  std::_Rb_tree_const_iterator<unsigned int>::reference v9; // rdx
  TxtConfigMgr *p_txt_config_mgr; // rax
  bool v11; // r14
  PlayerWatcherComp *WatcherComp; // rax
  __int64 result; // rax
  bool v14; // [rsp+13h] [rbp-15Dh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-138h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-130h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-120h] BYREF
  std::set<unsigned int> v20; // [rsp+70h] [rbp-100h] BYREF
  char v21[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:373 64 4 14 formula_id:357 80 48 15 formula_set:359";
  *(_QWORD *)(v2 + 16) = BartenderActivity::openFormulaByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 64) = formula_id;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 80));
  if ( *(_DWORD *)(v2 + 64) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    v14 = data::ActivityBartenderExcelConfigMgrBase::findBartenderFormulaExcelConfig(
            &v6->design_config.txt_config_mgr.activity_bartender_config_mgr,
            *(_DWORD *)(v2 + 64)) != 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( !v14 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "openFormulaByGm",
        370);
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v19,
             (const char (*)[53])"[BARTENDER] formula_id is not bartender formula, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v8 = -1;
      goto LABEL_23;
    }
    *(_DWORD *)(v2 + 48) = *(_DWORD *)(v2 + 64);
    std::set<unsigned int>::operator=(
      (std::set<unsigned int> *const)(v2 + 80),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, v2 + 48));
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::BartenderFormulaExcelConfig>>(
      &v20,
      &v5->design_config.txt_config_mgr.activity_bartender_config_mgr.bartender_formula_excel_config_map);
    std::set<unsigned int>::operator=((std::set<unsigned int> *const)(v2 + 80), &v20);
    std::set<unsigned int>::~set(&v20);
    std::shared_ptr<Config>::~shared_ptr(&v18);
  }
  __for_range = (std::set<unsigned int> *)(v2 + 80);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 80))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 80))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v9;
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->unlock_formula_set_,
            (const unsigned int *)(v2 + 48)) )
    {
      std::unordered_set<unsigned int>::insert(
        &this->unlock_formula_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v11 = p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id != *(_DWORD *)(v2 + 48);
      std::shared_ptr<Config>::~shared_ptr(&v18);
      if ( v11 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::triggerBartenderUnlockFormula(WatcherComp);
      }
      BartenderActivity::logUnlockFormula(this, BARTENDER_FORMULA_UNLOCK_DEFAULT, *(_DWORD *)(v2 + 48));
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  v8 = 0;
LABEL_23:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 80));
  result = v8;
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
  return result;
};

// Line 392: range 000000001792DEC8-000000001792E2D9
__int64 __fastcall BartenderActivity::openTaskByGm(BartenderActivity *const this, uint32_t task_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool *v5; // r8
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  bool *v8; // r8
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  bool v11; // [rsp+1Fh] [rbp-E1h] BYREF
  std::unordered_map<unsigned int,data::BartenderTaskExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::unordered_map<unsigned int,data::BartenderTaskExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false> __x; // [rsp+30h] [rbp-D0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false> __y; // [rsp+38h] [rbp-C8h] BYREF
  const std::unordered_map<unsigned int,data::BartenderTaskExcelConfig> *__for_range; // [rsp+40h] [rbp-C0h]
  const std::pair<unsigned int const,data::BartenderTaskExcelConfig> *v17; // [rsp+48h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BartenderTaskExcelConfig> >::type *id; // [rsp+50h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BartenderTaskExcelConfig> >::type *config; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v20; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-90h] BYREF
  char v22[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 task_id:391";
  *(_QWORD *)(v2 + 16) = BartenderActivity::openTaskByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = task_id;
  if ( *(_DWORD *)(v2 + 32) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    v7 = data::ActivityBartenderExcelConfigMgrBase::findBartenderTaskExcelConfig(
           &v6->design_config.txt_config_mgr.activity_bartender_config_mgr,
           *(_DWORD *)(v2 + 32)) != 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( !v7 )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "openTaskByGm",
        413);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v21,
             (const char (*)[47])"[BARTENDER] task_id is not bartender task, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0xFFFFFFFFLL;
      goto LABEL_15;
    }
    __y._M_cur = std::unordered_map<unsigned int,bool>::end(&this->unlock_task_map_)._M_cur;
    __x._M_cur = std::unordered_map<unsigned int,bool>::find(
                   &this->unlock_task_map_,
                   (const std::unordered_map<unsigned int,bool>::key_type *)(v2 + 32))._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,bool>,false>(&__x, &__y) )
    {
      v11 = 0;
      std::unordered_map<unsigned int,bool>::emplace<unsigned int &,bool>(
        &this->unlock_task_map_,
        (unsigned int *)(v2 + 32),
        &v11,
        (unsigned int *)&this->unlock_task_map_,
        v8);
    }
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_bartender_config_mgr.bartender_task_excel_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v20);
    __for_begin._M_cur = std::unordered_map<unsigned int,data::BartenderTaskExcelConfig>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::BartenderTaskExcelConfig>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false,false>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,data::BartenderTaskExcelConfig>(v17);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::BartenderTaskExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BartenderTaskExcelConfig>(v17);
      __y._M_cur = std::unordered_map<unsigned int,bool>::end(&this->unlock_task_map_)._M_cur;
      __x._M_cur = std::unordered_map<unsigned int,bool>::find(&this->unlock_task_map_, id)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,bool>,false>(&__x, &__y) )
      {
        v11 = 0;
        std::unordered_map<unsigned int,bool>::emplace<unsigned int const&,bool>(
          &this->unlock_task_map_,
          id,
          &v11,
          (const unsigned int *)&this->unlock_task_map_,
          v5);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BartenderTaskExcelConfig>,false,false>::operator++(&__for_begin);
    }
  }
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_15:
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

// Line 421: range 000000001792E2DA-000000001792E762
__int64 __fastcall BartenderActivity::openLevelByGm(BartenderActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const unsigned int *v5; // rcx
  std::pair<bool,int> *v6; // r8
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  std::pair<bool,int> *v9; // r8
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  bool v12; // [rsp+1Bh] [rbp-E5h] BYREF
  int v13; // [rsp+1Ch] [rbp-E4h] BYREF
  std::unordered_map<unsigned int,data::BartenderLevelExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::unordered_map<unsigned int,data::BartenderLevelExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> __x; // [rsp+30h] [rbp-D0h] BYREF
  const std::unordered_map<unsigned int,data::BartenderLevelExcelConfig> *__for_range; // [rsp+38h] [rbp-C8h]
  const std::pair<unsigned int const,data::BartenderLevelExcelConfig> *v18; // [rsp+40h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BartenderLevelExcelConfig> >::type *id; // [rsp+48h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BartenderLevelExcelConfig> >::type *config; // [rsp+50h] [rbp-B0h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> __y; // [rsp+58h] [rbp-A8h] BYREF
  std::shared_ptr<Config> v22; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-90h] BYREF
  char v24[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:420";
  *(_QWORD *)(v2 + 16) = BartenderActivity::openLevelByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  if ( *(_DWORD *)(v2 + 32) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    v8 = data::ActivityBartenderExcelConfigMgrBase::findBartenderLevelExcelConfig(
           &v7->design_config.txt_config_mgr.activity_bartender_config_mgr,
           *(_DWORD *)(v2 + 32)) != 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( !v8 )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "openLevelByGm",
        441);
      v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v23,
              (const char (*)[49])"[BARTENDER] level_id is not bartender level, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
      goto LABEL_15;
    }
    __y._M_cur = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::end(&this->unlock_level_map_)._M_cur;
    __x._M_cur = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::find(
                   &this->unlock_level_map_,
                   (const std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::key_type *)(v2 + 32))._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false>(&__x, &__y) )
    {
      v13 = 0;
      v12 = 0;
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false>::__node_type *)std::make_pair<bool,int>(&v12, &v13);
      std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::emplace<unsigned int &,std::pair<bool,int>>(
        &this->unlock_level_map_,
        (unsigned int *)(v2 + 32),
        (std::pair<bool,int> *)&__y,
        (unsigned int *)(v2 + 32),
        v9);
    }
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_bartender_config_mgr.bartender_level_excel_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v22);
    __for_begin._M_cur = std::unordered_map<unsigned int,data::BartenderLevelExcelConfig>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::BartenderLevelExcelConfig>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false,false>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,data::BartenderLevelExcelConfig>(v18);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::BartenderLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BartenderLevelExcelConfig>(v18);
      __y._M_cur = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::end(&this->unlock_level_map_)._M_cur;
      __x._M_cur = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::find(&this->unlock_level_map_, id)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false>(&__x, &__y) )
      {
        v13 = 0;
        v12 = 0;
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false>::__node_type *)std::make_pair<bool,int>(&v12, &v13);
        std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::emplace<unsigned int const&,std::pair<bool,int>>(
          &this->unlock_level_map_,
          id,
          (std::pair<bool,int> *)&__y,
          v5,
          v6);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BartenderLevelExcelConfig>,false,false>::operator++(&__for_begin);
    }
  }
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_15:
  if ( v24 == (char *)v2 )
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

// Line 449: range 000000001792E764-000000001792E7C3
void __cdecl BartenderActivity::openDevelopModuleByGm(BartenderActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_develop_module_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_develop_module_open_);
  this->is_develop_module_open_ = 1;
  BaseActivity::notifyClientData(this, 0);
};

// Line 455: range 000000001792E7C4-000000001792EA81
__int64 __fastcall BartenderActivity::finishTaskByGm(BartenderActivity *const this, uint32_t task_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool *p_second; // rax
  std::unordered_map<unsigned int,bool>::mapped_type *v6; // rax
  _BYTE *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::unordered_map<unsigned int,bool>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,bool>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::unordered_map<unsigned int,bool> *__for_range; // [rsp+20h] [rbp-90h]
  std::pair<unsigned int const,bool> *task_pair; // [rsp+28h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 task_id:454";
  *(_QWORD *)(v2 + 16) = BartenderActivity::finishTaskByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = task_id;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,bool>,unsigned int>(
            &this->unlock_task_map_,
            (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "finishTaskByGm",
        469);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v14,
             (const char (*)[39])"[BARTENDER] task_id is not unlock, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 0xFFFFFFFFLL;
      goto LABEL_16;
    }
    v6 = std::unordered_map<unsigned int,bool>::operator[](
           &this->unlock_task_map_,
           (const std::unordered_map<unsigned int,bool>::key_type *)(v2 + 32));
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v6);
    }
    *v7 = 1;
  }
  else
  {
    __for_range = &this->unlock_task_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,bool>::begin(&this->unlock_task_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,bool>::end(&this->unlock_task_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,bool>,false>(&__for_begin, &__for_end) )
    {
      task_pair = std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::operator*(&__for_begin);
      p_second = &task_pair->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(p_second);
      }
      task_pair->second = 1;
      std::__detail::_Node_iterator<std::pair<unsigned int const,bool>,false,false>::operator++(&__for_begin);
    }
  }
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_16:
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

// Line 477: range 000000001792EA82-000000001792ED63
__int64 __fastcall BartenderActivity::finishLevelByGm(BartenderActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::pair<bool,unsigned int> *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  bool __x; // [rsp+13h] [rbp-ADh] BYREF
  int __y; // [rsp+14h] [rbp-ACh] BYREF
  std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,std::pair<bool,unsigned int>> *__for_range; // [rsp+28h] [rbp-98h]
  std::pair<unsigned int const,std::pair<bool,unsigned int> > *level_pair; // [rsp+30h] [rbp-90h]
  std::pair<bool,int> __p; // [rsp+38h] [rbp-88h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:476";
  *(_QWORD *)(v2 + 16) = BartenderActivity::finishLevelByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<bool,unsigned int>>,unsigned int>(
            &this->unlock_level_map_,
            (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "finishLevelByGm",
        491);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v15,
             (const char (*)[40])"[BARTENDER] level_id is not unlock, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
      goto LABEL_12;
    }
    __y = 100;
    __x = 1;
    __p = std::make_pair<bool,int>(&__x, &__y);
    v5 = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::operator[](
           &this->unlock_level_map_,
           (const std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::key_type *)(v2 + 32));
    std::pair<bool,unsigned int>::operator=<bool,int>(v5, &__p);
  }
  else
  {
    __for_range = &this->unlock_level_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::begin(&this->unlock_level_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::end(&this->unlock_level_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false>(
              &__for_begin,
              &__for_end) )
    {
      level_pair = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator*(&__for_begin);
      __y = 1000;
      __x = 1;
      __p = std::make_pair<bool,int>(&__x, &__y);
      std::pair<bool,unsigned int>::operator=<bool,int>(&level_pair->second, &__p);
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator++(&__for_begin);
    }
  }
  BaseActivity::notifyClientData(this, 0);
  result = 0LL;
LABEL_12:
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

// Line 499: range 000000001792ED64-000000001792ED94
void __cdecl BartenderActivity::finishAllByGm(BartenderActivity *const this)
{
  BartenderActivity::finishTaskByGm(this, 0);
  BartenderActivity::finishLevelByGm(this, 0);
};

// Line 505: range 000000001792ED96-000000001792F12D
__int64 __fastcall BartenderActivity::finishOrderByGm(BartenderActivity *const this, uint32_t order_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  __int64 result; // rax
  const data::BartenderOrderExcelConfig *order_config_ptr; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 order_id:504 64 64 7 rsp:516";
  *(_QWORD *)(v2 + 16) = BartenderActivity::finishOrderByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = order_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  order_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderOrderExcelConfig(
                       &v5->design_config.txt_config_mgr.activity_bartender_config_mgr,
                       *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( order_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->level_id_
      && common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->level_order_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      BartenderActivity::onCompleteLevelOrder(this, *(_DWORD *)(v2 + 48));
    }
    proto::BartenderCompleteOrderRsp::BartenderCompleteOrderRsp((proto::BartenderCompleteOrderRsp *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&order_config_ptr->formula_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)order_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&order_config_ptr->formula_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BartenderCompleteOrderRsp::set_formula_id(
      (proto::BartenderCompleteOrderRsp *const)(v2 + 64),
      order_config_ptr->formula_id);
    proto::BartenderCompleteOrderRsp::set_finish_order_id(
      (proto::BartenderCompleteOrderRsp *const)(v2 + 64),
      *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    v7 = 0;
    proto::BartenderCompleteOrderRsp::~BartenderCompleteOrderRsp((proto::BartenderCompleteOrderRsp *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bartender_activity.cpp",
      "finishOrderByGm",
      509);
    v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v12,
           (const char (*)[60])"[Bartender] findBartenderOrderExcelConfig failed, order_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  result = v7;
  if ( v13 == (char *)v2 )
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

// Line 524: range 000000001792F12E-0000000017930465
int32_t __cdecl BartenderActivity::completeOrder(
        BartenderActivity *const this,
        const proto::BartenderCompleteOrderReq *req,
        proto::BartenderCompleteOrderRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *v7; // rcx
  std::vector<unsigned int>::reference v8; // rdx
  google::protobuf::RepeatedField<unsigned int> *v9; // r15
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v10; // rax
  std::set<unsigned int>::size_type v11; // r15
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const google::protobuf::RepeatedField<unsigned int> *v15; // rax
  __int64 v16; // r15
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  int v20; // r15d
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::set<unsigned int>::iterator v22; // rax
  common::milog::MiLogStream *v23; // rax
  ActivityBartenderExcelConfigMgr *v24; // r15
  std::set<unsigned int>::iterator v25; // rax
  ActivityBartenderExcelConfigMgr *p_activity_bartender_config_mgr; // r14
  uint32_t v27; // eax
  common::milog::MiLogStream *v28; // r14
  ActivityBartenderExcelConfigMgr *v29; // r14
  uint32_t v30; // r15d
  uint32_t v31; // eax
  TxtConfigMgr *p_txt_config_mgr; // rax
  bool v33; // r14
  PlayerWatcherComp *WatcherComp; // rax
  uint32_t v35; // r14d
  uint32_t v36; // edx
  proto_log::BartenderFormulaUnlockType FormulaUnlockTypeByQuestId; // ecx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // r14
  uint32_t level_id; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rcx
  uint64_t trans_no_count; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  google::protobuf::RepeatedField<unsigned int> *v46; // r14
  unsigned int *M_current; // r15
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v48; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // r14
  google::protobuf::uint32 v50; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // r14
  google::protobuf::uint32 v53; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // r14
  bool is_view_formula; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // r14
  google::protobuf::uint32 v57; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  google::protobuf::RepeatedField<unsigned int> *v59; // r14
  const google::protobuf::RepeatedField<unsigned int> *v60; // rax
  Player *player; // r14
  int32_t result; // eax
  std::string v63; // [rsp+0h] [rbp-1E0h]
  std::allocator<unsigned int> __a; // [rsp+33h] [rbp-1ADh] BYREF
  int val; // [rsp+34h] [rbp-1ACh] BYREF
  uint32_t order_id; // [rsp+38h] [rbp-1A8h]
  int32_t ret; // [rsp+3Ch] [rbp-1A4h]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v68; // [rsp+40h] [rbp-1A0h] BYREF
  const data::BartenderTaskOrderExcelConfig *config_ptr; // [rsp+48h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> v71; // [rsp+60h] [rbp-180h] BYREF
  std::vector<unsigned int> vec; // [rsp+70h] [rbp-170h] BYREF
  common::milog::MiLogStream v73; // [rsp+90h] [rbp-150h] BYREF
  char v74[304]; // [rsp+B0h] [rbp-130h] BYREF

  *(&v63._anon_0._M_allocated_capacity + 1) = (std::string::size_type)rsp_0;
  v4 = (unsigned __int64)v74;
  v63._M_dataplus._M_p = v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 1 10 holder:606 64 4 14 formula_id:537 80 16 11 log_ptr:607 112 24 21 formula_affix_vec:525"
                        " 176 48 22 optional_order_set:551";
  *(_QWORD *)(v4 + 16) = BartenderActivity::completeOrder;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = -218959360;
  v6[536862725] = 62194;
  v6[536862727] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 112));
  v7 = proto::BartenderCompleteOrderReq::item_list(req);
  ret = BartenderActivity::internalGetFormulaAndAffix(this, v7, (std::vector<unsigned int> *)(v4 + 112));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/bartender_activity.cpp",
      "completeOrder",
      529);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v73,
      (const char (*)[46])"[Bartender] internalGetFormulaAndAffix failed");
    common::milog::MiLogStream::~MiLogStream(&v73);
    v3 = ret;
    goto LABEL_69;
  }
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/bartender_activity.cpp",
      "completeOrder",
      534);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v73,
      (const char (*)[36])"[Bartender] formula_affix_vec empty");
    common::milog::MiLogStream::~MiLogStream(&v73);
    v3 = -1;
    goto LABEL_69;
  }
  v8 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v4 + 112), 0LL);
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v4 + 64) = *v8;
  proto::BartenderCompleteOrderRsp::set_formula_id(
    *((proto::BartenderCompleteOrderRsp *const *)&v63._anon_0._M_allocated_capacity + 1),
    *(_DWORD *)(v4 + 64));
  v9 = proto::BartenderCompleteOrderRsp::mutable_affix_list(*((proto::BartenderCompleteOrderRsp *const *)&v63._anon_0._M_allocated_capacity
                                                            + 1));
  std::allocator<unsigned int>::allocator(&__a);
  *(std::vector<unsigned int>::iterator *)v63._anon_0._M_local_buf = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 112));
  v68._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 112))._M_current;
  v10._M_current = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator+(&v68, 1LL)._M_current;
  std::vector<unsigned int>::vector<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
    &vec,
    v10,
    *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)v63._anon_0._M_local_buf,
    &__a);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&vec, v9);
  std::vector<unsigned int>::~vector(&vec);
  std::allocator<unsigned int>::~allocator(&__a);
  order_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->level_id_ )
  {
    if ( proto::BartenderCompleteOrderReq::quest_id(req) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v71);
      p_activity_bartender_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v71)->design_config.txt_config_mgr.activity_bartender_config_mgr;
      v27 = proto::BartenderCompleteOrderReq::quest_id(req);
      config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderTaskOrderExcelConfig(
                     p_activity_bartender_config_mgr,
                     v27);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v71);
      if ( !config_ptr )
      {
        common::milog::MiLogStream::create(
          &v73,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/bartender_activity.cpp",
          "completeOrder",
          571);
        v28 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                &v73,
                (const char (*)[57])"[Bartender] findBartenderTaskOrderExcelConfig, quest_id:");
        val = proto::BartenderCompleteOrderReq::quest_id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)&val);
        common::milog::MiLogStream::~MiLogStream(&v73);
        v3 = -1;
        goto LABEL_69;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v71);
      v29 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v71)->design_config.txt_config_mgr.activity_bartender_config_mgr;
      v30 = proto::BartenderCompleteOrderReq::cup_type(req);
      v31 = proto::BartenderCompleteOrderReq::quest_id(req);
      order_id = ActivityBartenderExcelConfigMgr::chooseMeetOrderFromTask(
                   v29,
                   v31,
                   (const std::vector<unsigned int> *)(v4 + 112),
                   v30);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v71);
    }
    goto LABEL_26;
  }
  v11 = proto::BartenderCompleteOrderReq::optional_order_list_size(req);
  if ( v11 > std::set<unsigned int>::size(&this->level_order_set_) )
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bartender_activity.cpp",
      "completeOrder",
      548);
    v12 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v73,
            (const char (*)[54])"[Bartender] optional_order_list_size too large, size:");
    val = proto::BartenderCompleteOrderReq::optional_order_list_size(req);
    v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])", level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->level_id_);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v3 = -1;
    goto LABEL_69;
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 176));
  v15 = proto::BartenderCompleteOrderReq::optional_order_list(req);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
    (std::set<unsigned int> *)(v4 + 176),
    v15);
  v16 = proto::BartenderCompleteOrderReq::optional_order_list_size(req);
  if ( v16 == std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 176)) )
  {
    v63._M_string_length = (std::string::size_type)std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 176))._M_node;
    *(std::set<unsigned int>::iterator *)v63._anon_0._M_local_buf = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 176));
    M_node = std::set<unsigned int>::end(&this->level_order_set_)._M_node;
    v22._M_node = std::set<unsigned int>::begin(&this->level_order_set_)._M_node;
    if ( !std::includes<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
            v22,
            (std::_Rb_tree_const_iterator<unsigned int>)M_node,
            *(std::_Rb_tree_const_iterator<unsigned int> *)v63._anon_0._M_local_buf,
            (std::_Rb_tree_const_iterator<unsigned int>)v63._M_string_length) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "completeOrder",
        560);
      v23 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v73,
              (const char (*)[51])"[Bartender] invalid optional_order_list, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->level_id_);
      common::milog::MiLogStream::~MiLogStream(&v73);
      v3 = -1;
      v20 = 0;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v71);
      v24 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v71)->design_config.txt_config_mgr.activity_bartender_config_mgr;
      *(_DWORD *)v63._anon_0._M_local_buf = proto::BartenderCompleteOrderReq::cup_type(req);
      std::allocator<unsigned int>::allocator(&__a);
      v63._M_string_length = (std::string::size_type)std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 176))._M_node;
      v25._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 176))._M_node;
      std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
        &vec,
        v25,
        (std::_Rb_tree_const_iterator<unsigned int>)v63._M_string_length,
        &__a);
      order_id = ActivityBartenderExcelConfigMgr::chooseMeetOrderFromOrderVec(
                   v24,
                   &vec,
                   (const std::vector<unsigned int> *)(v4 + 112),
                   v63._anon_0._M_allocated_capacity);
      std::vector<unsigned int>::~vector(&vec);
      std::allocator<unsigned int>::~allocator(&__a);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v71);
      v20 = 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v73,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bartender_activity.cpp",
      "completeOrder",
      555);
    v17 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            &v73,
            (const char (*)[61])"[Bartender] optional_order_list has duplicate element, size:");
    val = proto::BartenderCompleteOrderReq::optional_order_list_size(req);
    v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, &val);
    v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])", set_size:");
    v68._M_current = (unsigned int *)std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 176));
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v19, (const unsigned __int64 *)&v68);
    common::milog::MiLogStream::~MiLogStream(&v73);
    v3 = -1;
    v20 = 0;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 176));
  if ( v20 == 1 )
  {
LABEL_26:
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->unlock_formula_set_,
            (const unsigned int *)(v4 + 64)) )
    {
      std::unordered_set<unsigned int>::insert(
        &this->unlock_formula_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v4 + 64));
      proto::BartenderCompleteOrderRsp::set_is_new(
        *((proto::BartenderCompleteOrderRsp *const *)&v63._anon_0._M_allocated_capacity + 1),
        1);
      BaseActivity::notifyClientData(this, 0);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v71);
      p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v71)->design_config.txt_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v33 = p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id != *(_DWORD *)(v4 + 64);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v71);
      if ( v33 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::triggerBartenderUnlockFormula(WatcherComp);
      }
      v35 = *(_DWORD *)(v4 + 64);
      v36 = proto::BartenderCompleteOrderReq::quest_id(req);
      FormulaUnlockTypeByQuestId = BartenderActivity::getFormulaUnlockTypeByQuestId(this, v36);
      BartenderActivity::logUnlockFormula(this, FormulaUnlockTypeByQuestId, v35);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !this->level_id_ && !proto::BartenderCompleteOrderReq::quest_id(req) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/bartender_activity.cpp",
        "completeOrder",
        595);
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        &v73,
        (const char (*)[52])"[Bartender] player complete order in develop module");
      common::milog::MiLogStream::~MiLogStream(&v73);
      v3 = 0;
    }
    else
    {
      proto::BartenderCompleteOrderRsp::set_finish_order_id(
        *((proto::BartenderCompleteOrderRsp *const *)&v63._anon_0._M_allocated_capacity + 1),
        order_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->level_id_ )
        BartenderActivity::onCompleteLevelOrder(this, order_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v73, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xDF9u, v63);
      std::string::~string(&v73);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyBartenderCompleteOrder>();
      v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->level_id_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        level_id = this->level_id_;
      }
      else
      {
        level_id = proto::BartenderCompleteOrderReq::quest_id(req);
      }
      proto_log::PlayerLogBodyBartenderCompleteOrder::set_play_id(v40, level_id);
      v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->level_id_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        trans_no_count = this->trans_no_count_;
      }
      else
      {
        trans_no_count = 0LL;
      }
      proto_log::PlayerLogBodyBartenderCompleteOrder::set_trans_no(v42, trans_no_count);
      v44 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      proto_log::PlayerLogBodyBartenderCompleteOrder::set_formula_id(v44, *(_DWORD *)(v4 + 64));
      v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      v46 = proto_log::PlayerLogBodyBartenderCompleteOrder::mutable_affix_list(v45);
      std::allocator<unsigned int>::allocator(&__a);
      M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 112))._M_current;
      v68._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 112))._M_current;
      v48._M_current = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator+(&v68, 1LL)._M_current;
      std::vector<unsigned int>::vector<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
        &vec,
        v48,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
        &__a);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&vec, v46);
      std::vector<unsigned int>::~vector(&vec);
      std::allocator<unsigned int>::~allocator(&__a);
      v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      v50 = proto::BartenderCompleteOrderReq::cup_type(req);
      proto_log::PlayerLogBodyBartenderCompleteOrder::set_cup_type(v49, v50);
      v51 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      proto_log::PlayerLogBodyBartenderCompleteOrder::set_is_finish_aim_order(v51, order_id != 0);
      v52 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      v53 = proto::BartenderCompleteOrderReq::qte_count(req);
      proto_log::PlayerLogBodyBartenderCompleteOrder::set_qte_count(v52, v53);
      v54 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      is_view_formula = proto::BartenderCompleteOrderReq::is_view_formula(req);
      proto_log::PlayerLogBodyBartenderCompleteOrder::set_is_view_formula(v54, is_view_formula);
      v56 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      v57 = proto::BartenderCompleteOrderReq::retry_count(req);
      proto_log::PlayerLogBodyBartenderCompleteOrder::set_retry_count(v56, v57);
      if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->level_id_ )
      {
        v58 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderCompleteOrder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
        v59 = proto_log::PlayerLogBodyBartenderCompleteOrder::mutable_optional_order_list(v58);
        v60 = proto::BartenderCompleteOrderReq::optional_order_list(req);
        google::protobuf::RepeatedField<unsigned int>::CopyFrom(v59, v60);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v71, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBartenderCompleteOrder,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyBartenderCompleteOrder> *)(v4 + 80));
      Player::printStatLog(player, &p_body_ptr, &v71, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v71);
      v3 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyBartenderCompleteOrder>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBartenderCompleteOrder> *const)(v4 + 80));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
    }
  }
LABEL_69:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 112));
  result = v3;
  if ( v63._M_dataplus._M_p == (std::string::pointer)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 626: range 0000000017930466-00000000179309FB
void __fastcall BartenderActivity::onCompleteLevelOrder(BartenderActivity *const this, uint32_t order_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  ActivityBartenderExcelConfigMgr *p_activity_bartender_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t level_score; // ecx
  std::unordered_set<unsigned int>::size_type v11; // r12
  const data::BartenderLevelExcelConfig *level_config_ptr; // [rsp+10h] [rbp-A0h]
  const data::BartenderOrderExcelConfig *order_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-80h] BYREF
  char v16[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 order_id:625";
  *(_QWORD *)(v2 + 16) = BartenderActivity::onCompleteLevelOrder;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = order_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  p_activity_bartender_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_bartender_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderLevelExcelConfig(
                       p_activity_bartender_config_mgr,
                       this->level_id_);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( level_config_ptr )
  {
    if ( *(_DWORD *)(v2 + 32) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v14);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
      order_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderOrderExcelConfig(
                           &v7->design_config.txt_config_mgr.activity_bartender_config_mgr,
                           *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v14);
      if ( order_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->level_deliver_count_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->level_deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        ++this->level_deliver_count_;
        if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
               &this->level_finish_order_set_,
               (const unsigned int *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/bartender_activity.cpp",
            "onCompleteLevelOrder",
            649);
          v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 &v15,
                 (const char (*)[39])"[Bartender] duplicate finish order_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v15);
        }
        else
        {
          std::unordered_set<unsigned int>::insert(
            &this->level_finish_order_set_,
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&this->level_score_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_score_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          level_score = this->level_score_;
          if ( *(_BYTE *)(((unsigned __int64)&order_config_ptr->score >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&order_config_ptr->score >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          this->level_score_ = level_score + order_config_ptr->score;
          v11 = std::unordered_set<unsigned int>::size(&this->level_finish_order_set_);
          if ( v11 == std::set<unsigned int>::size(&this->level_order_set_) )
            BartenderActivity::settleLevel(this);
          else
            BartenderActivity::notifyLevel(this, 0, 0);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/bartender_activity.cpp",
          "onCompleteLevelOrder",
          642);
        v8 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
               &v15,
               (const char (*)[60])"[Bartender] findBartenderOrderExcelConfig failed, order_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->level_deliver_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->level_deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ++this->level_deliver_count_;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bartender_activity.cpp",
      "onCompleteLevelOrder",
      630);
    v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v15,
           (const char (*)[60])"[Bartender] findBartenderLevelExcelConfig failed, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->level_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 670: range 00000000179309FC-0000000017930DA2
int32_t __cdecl BartenderActivity::getFormulaAndAffix(
        BartenderActivity *const this,
        const proto::BartenderGetFormulaReq *req,
        proto::BartenderGetFormulaRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *v6; // rcx
  int32_t v7; // r14d
  uint32_t *v8; // rdx
  google::protobuf::RepeatedField<unsigned int> *v9; // r14
  unsigned int *M_current; // r15
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v11; // rax
  int32_t result; // eax
  std::allocator<unsigned int> __a; // [rsp+2Fh] [rbp-E1h] BYREF
  int32_t ret; // [rsp+30h] [rbp-E0h]
  uint32_t formula_id; // [rsp+34h] [rbp-DCh]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v17; // [rsp+38h] [rbp-D8h] BYREF
  std::vector<unsigned int> vec; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 21 formula_affix_vec:671";
  *(_QWORD *)(v3 + 16) = BartenderActivity::getFormulaAndAffix;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  v6 = proto::BartenderGetFormulaReq::item_list(req);
  ret = BartenderActivity::internalGetFormulaAndAffix(this, v6, (std::vector<unsigned int> *)(v3 + 32));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/bartender_activity.cpp",
      "getFormulaAndAffix",
      675);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v19,
      (const char (*)[46])"[Bartender] internalGetFormulaAndAffix failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = ret;
  }
  else if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/bartender_activity.cpp",
      "getFormulaAndAffix",
      680);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v19,
      (const char (*)[36])"[Bartender] formula_affix_vec empty");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = -1;
  }
  else
  {
    v8 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 32), 0LL);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    formula_id = *v8;
    proto::BartenderGetFormulaRsp::set_formula_id(rsp_0, formula_id);
    v9 = proto::BartenderGetFormulaRsp::mutable_affix_list(rsp_0);
    std::allocator<unsigned int>::allocator(&__a);
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 32))._M_current;
    v17._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 32))._M_current;
    v11._M_current = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator+(&v17, 1LL)._M_current;
    std::vector<unsigned int>::vector<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
      &vec,
      v11,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
      &__a);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&vec, v9);
    std::vector<unsigned int>::~vector(&vec);
    std::allocator<unsigned int>::~allocator(&__a);
    v7 = 0;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  result = v7;
  if ( v20 == (char *)v3 )
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

// Line 691: range 0000000017930DA4-0000000017931520
int32_t __cdecl BartenderActivity::startLevel(
        BartenderActivity *const this,
        const proto::BartenderStartLevelReq *req,
        proto::BartenderStartLevelRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // ecx
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v12; // rax
  unsigned int *v13; // r14
  std::vector<unsigned int>::iterator v14; // rax
  uint32_t Now; // esi
  PlayerTimer *p_timer; // rdi
  common::milog::MiLogStream *v17; // rcx
  google::protobuf::RepeatedField<unsigned int> *v18; // rax
  int32_t ret; // [rsp+2Ch] [rbp-144h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> __y; // [rsp+30h] [rbp-140h] BYREF
  const data::BartenderLevelExcelConfig *level_config_ptr; // [rsp+38h] [rbp-138h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-130h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-120h] BYREF
  std::set<unsigned int> v26; // [rsp+70h] [rbp-100h] BYREF
  char v27[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 level_id:697 64 8 8 iter:698 96 24 13 order_vec:716";
  *(_QWORD *)(v3 + 16) = BartenderActivity::startLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->level_id_ )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/bartender_activity.cpp",
      "startLevel",
      694);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v25,
      (const char (*)[33])"[Bartender] level is in progress");
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = -1;
  }
  else
  {
    *(_DWORD *)(v3 + 48) = proto::BartenderStartLevelReq::level_id(req);
    *(std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::find(
                                                                                              &this->unlock_level_map_,
                                                                                              (const std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::key_type *)(v3 + 48));
    __y._M_cur = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::end(&this->unlock_level_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "startLevel",
        701);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v25,
             (const char (*)[41])"[Bartender] level is not open, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
      level_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderLevelExcelConfig(
                           &v8->design_config.txt_config_mgr.activity_bartender_config_mgr,
                           *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( level_config_ptr )
      {
        ret = 0;
        BartenderActivity::clearLevel(this);
        v10 = *(_DWORD *)(v3 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->level_id_);
        }
        this->level_id_ = v10;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96), &level_config_ptr->order_list);
        M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        v12._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        std::random_shuffle<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
          v12,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
        v13 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        v14._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
        std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
          &v26,
          v14,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v13);
        std::set<unsigned int>::operator=(&this->level_order_set_, &v26);
        std::set<unsigned int>::~set(&v26);
        Now = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->level_start_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->level_start_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->level_start_time_);
        }
        this->level_start_time_ = Now;
        BartenderActivity::updateTransaction(this);
        p_timer = &this->timer_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_duration >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_duration >> 3)
                                                                          + 0x7FFF8000) )
        {
          p_timer = (PlayerTimer *)&level_config_ptr->level_duration;
          __asan_report_load4();
        }
        if ( PlayerTimer::startS(
               p_timer,
               level_config_ptr->level_duration,
               0,
               "./src/player/activity/bartender_activity.cpp",
               "startLevel",
               721) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/bartender_activity.cpp",
            "startLevel",
            723);
          v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v25,
                  (const char (*)[21])" start timer failed!");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v17, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v25);
          ret = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_duration >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_duration >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::BartenderStartLevelRsp::set_time(rsp_0, level_config_ptr->level_duration);
          v18 = proto::BartenderStartLevelRsp::mutable_order_list(rsp_0);
          common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
            (const std::vector<unsigned int> *)(v3 + 96),
            v18);
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
        if ( ret )
        {
          BartenderActivity::clearLevel(this);
          result = ret;
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/bartender_activity.cpp",
          "startLevel",
          707);
        v9 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
               &v25,
               (const char (*)[60])"[Bartender] findBartenderLevelExcelConfig failed, level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = -1;
      }
    }
  }
  if ( v27 == (char *)v3 )
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

// Line 741: range 0000000017931522-00000000179317B3
__int64 __fastcall BartenderActivity::cancelLevel(BartenderActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:740";
  *(_QWORD *)(v2 + 16) = BartenderActivity::cancelLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->level_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->level_id_ == *(_DWORD *)(v2 + 32) )
    {
      BartenderActivity::clearLevel(this);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "cancelLevel",
        749);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v9,
             (const char (*)[30])"[Bartender] current level_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->level_id_);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])", cancel level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v9);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/bartender_activity.cpp",
      "cancelLevel",
      744);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v9,
      (const char (*)[45])"[Bartender] player is not in bartender level");
    common::milog::MiLogStream::~MiLogStream(&v9);
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

// Line 757: range 00000000179317B4-0000000017931A45
__int64 __fastcall BartenderActivity::finishLevel(BartenderActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:756";
  *(_QWORD *)(v2 + 16) = BartenderActivity::finishLevel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->level_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->level_id_ == *(_DWORD *)(v2 + 32) )
    {
      BartenderActivity::settleLevel(this);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "finishLevel",
        765);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v9,
             (const char (*)[30])"[Bartender] current level_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->level_id_);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])", cancel level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v9);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/bartender_activity.cpp",
      "finishLevel",
      760);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v9,
      (const char (*)[45])"[Bartender] player is not in bartender level");
    common::milog::MiLogStream::~MiLogStream(&v9);
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

// Line 773: range 0000000017931A46-000000001793234F
int32_t __cdecl BartenderActivity::internalGetFormulaAndAffix(
        BartenderActivity *const this,
        const google::protobuf::RepeatedPtrField<proto::ItemParam> *item_list,
        std::vector<unsigned int> *formula_affix_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  DisplayItemExcelConfigMgr *p_display_item_config_mgr; // r14
  uint32_t v7; // eax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // r14
  unsigned int *v11; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned int v14; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  TxtConfigMgr *p_txt_config_mgr; // rdx
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  TxtConfigMgr *v19; // rax
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  bool v24; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::vector<unsigned int> *p_second; // rdx
  int32_t result; // eax
  std::allocator<unsigned int> __a; // [rsp+2Fh] [rbp-161h] BYREF
  unsigned int __args_0; // [rsp+30h] [rbp-160h] BYREF
  unsigned int val; // [rsp+34h] [rbp-15Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *__for_range; // [rsp+40h] [rbp-150h]
  const proto::ItemParam *item_param; // [rsp+48h] [rbp-148h]
  std::shared_ptr<Config> v35; // [rsp+50h] [rbp-140h] BYREF
  std::shared_ptr<Config> v36; // [rsp+60h] [rbp-130h] BYREF
  std::shared_ptr<Config> v37; // [rsp+70h] [rbp-120h] BYREF
  std::vector<unsigned int> __x; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v39; // [rsp+A0h] [rbp-F0h] BYREF
  char v40[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 cur_count:775 48 8 8 iter:805 80 48 26 bartender_material_map:774";
  *(_QWORD *)(v3 + 16) = BartenderActivity::internalGetFormulaAndAffix;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862724] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 80));
  *(_DWORD *)(v3 + 32) = 0;
  __for_range = item_list;
  *(google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator *)(v3 + 48) = google::protobuf::RepeatedPtrField<proto::ItemParam>::begin(item_list);
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ItemParam>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam> *const)(v3 + 48),
            &__for_end) )
  {
    item_param = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam> *const)(v3 + 48));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    p_display_item_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.display_item_config_mgr;
    v7 = proto::ItemParam::item_id(item_param);
    LOBYTE(p_display_item_config_mgr) = !DisplayItemExcelConfigMgr::isBartenderMaterial(p_display_item_config_mgr, v7);
    std::shared_ptr<Config>::~shared_ptr(&v37);
    if ( (_BYTE)p_display_item_config_mgr )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "internalGetFormulaAndAffix",
        780);
      v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v39,
             (const char (*)[53])"[Bartender] item is not bartender material, item_id:");
      val = proto::ItemParam::item_id(item_param);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v39);
      v9 = -1;
      goto LABEL_25;
    }
    val = proto::ItemParam::item_id(item_param);
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->unlock_item_set_,
            &val) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "internalGetFormulaAndAffix",
        785);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v39,
              (const char (*)[41])"[Bartender] item is not unlock, item_id:");
      val = proto::ItemParam::item_id(item_param);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v39);
      v9 = -1;
      goto LABEL_25;
    }
    val = proto::ItemParam::count(item_param);
    __args_0 = proto::ItemParam::item_id(item_param);
    v12 = std::map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
            (std::map<unsigned int,unsigned int> *const)(v3 + 80),
            &__args_0,
            &val,
            &__args_0,
            v11);
    if ( !v12.second )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "internalGetFormulaAndAffix",
        790);
      v13 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              &v39,
              (const char (*)[57])"[Bartender] duplicate input bartender material, item_id:");
      val = proto::ItemParam::item_id(item_param);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v39);
      v9 = -1;
      goto LABEL_25;
    }
    v14 = proto::ItemParam::count(item_param);
    *(_DWORD *)(v3 + 32) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v3 + 32), v14);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    p_txt_config_mgr = &v15->design_config.txt_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&v15->design_config.txt_config_mgr.activity_bartender_config_mgr.max_material_count >> 3)
                  + 0x7FFF8000) != 0
      && (char)((((_BYTE)v15 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->design_config.txt_config_mgr.activity_bartender_config_mgr.max_material_count >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v17 = p_txt_config_mgr->activity_bartender_config_mgr.max_material_count < *(_DWORD *)(v3 + 32);
    std::shared_ptr<Config>::~shared_ptr(&v35);
    if ( v17 )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bartender_activity.cpp",
        "internalGetFormulaAndAffix",
        796);
      v18 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v39,
              (const char (*)[59])"[Bartender] bartender material count too large, cur_count:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v39);
      v9 = -1;
      goto LABEL_25;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam> *const)(v3 + 48));
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  v19 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&v19->activity_bartender_config_mgr.min_material_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->activity_bartender_config_mgr.min_material_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v20 = v19->activity_bartender_config_mgr.min_material_count > *(_DWORD *)(v3 + 32);
  std::shared_ptr<Config>::~shared_ptr(&v36);
  if ( v20 )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bartender_activity.cpp",
      "internalGetFormulaAndAffix",
      802);
    v21 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            &v39,
            (const char (*)[59])"[Bartender] bartender material count too small, cur_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v39);
    v9 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
    *(std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int> >,std::equal_to<std::map<unsigned int,unsigned int> >,std::allocator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > > >::const_iterator *)(v3 + 48) = std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::find(&v22->design_config.txt_config_mgr.activity_bartender_config_mgr.bartender_material_to_formula_affix_map, (const std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int> >,std::equal_to<std::map<unsigned int,unsigned int> >,std::allocator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> > > >::key_type *)(v3 + 80));
    std::shared_ptr<Config>::~shared_ptr(&v37);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
    __for_end.it_ = (void *const *)std::unordered_map<std::map<unsigned int,unsigned int>,std::vector<unsigned int>,boost::hash<std::map<unsigned int,unsigned int>>,std::equal_to<std::map<unsigned int,unsigned int>>,std::allocator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>>>::end(&v23->design_config.txt_config_mgr.activity_bartender_config_mgr.bartender_material_to_formula_affix_map)._M_cur;
    v24 = std::__detail::operator==<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> >,true> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> >,true> *)&__for_end);
    std::shared_ptr<Config>::~shared_ptr(&v37);
    if ( v24 )
    {
      std::allocator<unsigned int>::allocator(&__a);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v37);
      v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
      std::vector<unsigned int>::vector(
        &__x,
        1uLL,
        &v25->design_config.txt_config_mgr.activity_bartender_config_mgr.default_fail_formula_id,
        &__a);
      std::vector<unsigned int>::operator=(formula_affix_vec, &__x);
      std::vector<unsigned int>::~vector(&__x);
      std::shared_ptr<Config>::~shared_ptr(&v37);
      std::allocator<unsigned int>::~allocator(&__a);
    }
    else
    {
      p_second = &std::__detail::_Node_const_iterator<std::pair<std::map<unsigned int,unsigned int> const,std::vector<unsigned int>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::map<unsigned int,unsigned int>,std::vector<unsigned int> >,false,true> *const)(v3 + 48))->second;
      std::vector<unsigned int>::operator=(formula_affix_vec, p_second);
    }
    v9 = 0;
  }
LABEL_25:
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 80));
  result = v9;
  if ( v40 == (char *)v3 )
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

// Line 820: range 0000000017932350-000000001793236E
void __cdecl BartenderActivity::onTimer(BartenderActivity *const this, uint64_t now_ms)
{
  BartenderActivity::settleLevel(this);
};

// Line 825: range 0000000017932370-0000000017932BFC
// local variable allocation has failed, the output may be wrong!
void __cdecl BartenderActivity::settleLevel(BartenderActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false>::pointer v5; // rdx
  std::pair<bool,unsigned int> *p_second; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false>::pointer v7; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false>::pointer v8; // rax
  unsigned int *v9; // rdx
  unsigned int v10; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false>::pointer v11; // rdx
  unsigned int *v12; // rax
  PlayerWatcherComp *WatcherComp; // rdi
  uint32_t v14; // edx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  google::protobuf::uint32 v19; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  google::protobuf::RepeatedField<unsigned int> *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  Player *v24; // r14
  std::string v25; // [rsp+0h] [rbp-110h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+60h] [rbp-B0h] BYREF

  v25._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 10 holder:844 64 8 8 iter:826 96 16 11 log_ptr:845";
  *(_QWORD *)(v1 + 16) = BartenderActivity::settleLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  *(std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::find(
                                                                                            (std::unordered_map<unsigned int,std::pair<bool,unsigned int>> *const)(v25._M_string_length + 1104),
                                                                                            (const std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::key_type *)(v25._M_string_length + 1176));
  *((std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::iterator *)&v25._anon_0._M_allocated_capacity + 1) = std::unordered_map<unsigned int,std::pair<bool,unsigned int>>::end((std::unordered_map<unsigned int,std::pair<bool,unsigned int>> *const)(v25._M_string_length + 1104));
  if ( std::__detail::operator==<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> *)(v1 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false> *)&v25._anon_0._M_allocated_capacity
       + 1) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/bartender_activity.cpp",
      "settleLevel",
      829);
    v4 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v28,
           (const char (*)[55])"[Bartender] level_id is not unlocked error! level_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v4,
      (const unsigned int *)(v25._M_string_length + 1176));
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false> *const)(v1 + 64));
    p_second = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_second & 7) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_second);
    }
    v5->second.first = 1;
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v7->second.second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v7 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->second.second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)v25._anon_0._M_local_buf = v7->second.second;
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false> *const)(v1 + 64));
    v9 = (unsigned int *)std::max<unsigned int>((const unsigned int *)(v25._M_string_length + 1180), &v8->second.second);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v10 = *v9;
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<bool,unsigned int> >,false,false> *const)(v1 + 64));
    v12 = &v11->second.second;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v12);
    }
    v11->second.second = v10;
    HIDWORD(v25._anon_0._M_allocated_capacity) = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((v25._M_string_length + 1180) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v25._M_string_length) - 100) & 7) + 3) >= *(_BYTE *)(((v25._M_string_length + 1180) >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    BartenderActivity::notifyLevel(
      (const BartenderActivity *const)v25._M_string_length,
      1,
      *(_DWORD *)v25._anon_0._M_local_buf < *(_DWORD *)(v25._M_string_length + 1180));
    BaseActivity::notifyClientData((BaseActivity *const)v25._M_string_length, 0);
    if ( *(_BYTE *)(((v25._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(*(Player *const *)(v25._M_string_length + 24));
    if ( *(_BYTE *)(((v25._M_string_length + 1180) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v25._M_string_length) - 100) & 7) + 3) >= *(_BYTE *)(((v25._M_string_length + 1180) >> 3)
                                                                            + 0x7FFF8000) )
    {
      WatcherComp = (PlayerWatcherComp *)(v25._M_string_length + 1180);
      __asan_report_load4();
    }
    v14 = *(_DWORD *)(v25._M_string_length + 1180);
    if ( *(_BYTE *)(((v25._M_string_length + 1176) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v25._M_string_length + 1176) >> 3) + 0x7FFF8000) <= 3 )
    {
      WatcherComp = (PlayerWatcherComp *)(v25._M_string_length + 1176);
      __asan_report_load4();
    }
    PlayerWatcherComp::triggerBartenderFinishLevel(WatcherComp, *(_DWORD *)(v25._M_string_length + 1176), v14);
    BaseActivity::updateAllConds((BaseActivity *const)v25._M_string_length);
    if ( *(_BYTE *)(((v25._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(v25._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v28, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDFAu, v25);
    std::string::~string(&v28);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyBartenderSettleLevel>();
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v25._M_string_length + 1176) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v25._M_string_length + 1176) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyBartenderSettleLevel::set_play_id(v16, *(_DWORD *)(v25._M_string_length + 1176));
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v25._M_string_length + 1168) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    proto_log::PlayerLogBodyBartenderSettleLevel::set_trans_no(v17, *(_QWORD *)(v25._M_string_length + 1168));
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v25._M_string_length + 1296) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v25._M_string_length + 1296) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( HIDWORD(v25._anon_0._M_allocated_capacity) < *(_DWORD *)(v25._M_string_length + 1296) )
      v19 = 0;
    else
      v19 = HIDWORD(v25._anon_0._M_allocated_capacity) - *(_DWORD *)(v25._M_string_length + 1296);
    proto_log::PlayerLogBodyBartenderSettleLevel::set_time(v18, v19);
    v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    v21 = proto_log::PlayerLogBodyBartenderSettleLevel::mutable_finish_aim_order_list(v20);
    common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
      (const std::unordered_set<unsigned int> *)(v25._M_string_length + 1240),
      v21);
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v25._M_string_length + 1184) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v25._M_string_length + 1184) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyBartenderSettleLevel::set_output_count(v22, *(_DWORD *)(v25._M_string_length + 1184));
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderSettleLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v25._M_string_length + 1180) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v25._M_string_length) - 100) & 7) + 3) >= *(_BYTE *)(((v25._M_string_length + 1180) >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyBartenderSettleLevel::set_score(v23, *(_DWORD *)(v25._M_string_length + 1180));
    if ( *(_BYTE *)(((v25._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v24 = *(Player **)(v25._M_string_length + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBartenderSettleLevel,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyBartenderSettleLevel> *)(v1 + 96));
    Player::printStatLog(v24, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    BartenderActivity::clearLevel((BartenderActivity *const)v25._M_string_length);
    std::shared_ptr<proto_log::PlayerLogBodyBartenderSettleLevel>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBartenderSettleLevel> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  }
  if ( v29 == (char *)v1 )
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

// Line 859: range 0000000017932BFE-0000000017932E31
void __cdecl BartenderActivity::notifyLevel(const BartenderActivity *const this, bool is_finish, bool is_new_record)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 10 notify:860";
  *(_QWORD *)(v3 + 16) = BartenderActivity::notifyLevel;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  proto::BartenderLevelProgressNotify::BartenderLevelProgressNotify((proto::BartenderLevelProgressNotify *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BartenderLevelProgressNotify::set_level_id(
    (proto::BartenderLevelProgressNotify *const)(v3 + 32),
    this->level_id_);
  proto::BartenderLevelProgressNotify::set_is_finish((proto::BartenderLevelProgressNotify *const)(v3 + 32), is_finish);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BartenderLevelProgressNotify::set_score(
    (proto::BartenderLevelProgressNotify *const)(v3 + 32),
    this->level_score_);
  proto::BartenderLevelProgressNotify::set_is_new_record(
    (proto::BartenderLevelProgressNotify *const)(v3 + 32),
    is_new_record);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 32));
  proto::BartenderLevelProgressNotify::~BartenderLevelProgressNotify((proto::BartenderLevelProgressNotify *const)(v3 + 32));
  if ( v7 == (char *)v3 )
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

// Line 869: range 0000000017932E32-0000000017932F8A
void __cdecl BartenderActivity::clearLevel(BartenderActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id_);
  }
  this->level_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_score_);
  }
  this->level_score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_deliver_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_deliver_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_deliver_count_);
  }
  this->level_deliver_count_ = 0;
  std::set<unsigned int>::clear(&this->level_order_set_);
  std::unordered_set<unsigned int>::clear(&this->level_finish_order_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_start_time_);
  }
  this->level_start_time_ = 0;
  common::tools::MiTimer::cancel(&this->timer_);
};

// Line 880: range 0000000017932F8C-0000000017933264
// local variable allocation has failed, the output may be wrong!
void __cdecl BartenderActivity::logUnlockFormula(
        BartenderActivity *const this,
        proto_log::BartenderFormulaUnlockType type,
        uint32_t formula_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderUnlockFormula,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderUnlockFormula,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v9; // r14
  std::string formula_ida; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  formula_ida._M_string_length = (std::string::size_type)this;
  HIDWORD(formula_ida._M_dataplus._M_p) = type;
  LODWORD(formula_ida._M_dataplus._M_p) = formula_id;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:881 64 16 11 log_ptr:882";
  *(_QWORD *)(v3 + 16) = BartenderActivity::logUnlockFormula;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((formula_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(formula_ida._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v12, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDF8u, formula_ida);
  std::string::~string(&v12);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyBartenderUnlockFormula>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderUnlockFormula,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderUnlockFormula,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyBartenderUnlockFormula::set_formula_id(
    v7,
    (google::protobuf::uint32)formula_ida._M_dataplus._M_p);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderUnlockFormula,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBartenderUnlockFormula,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyBartenderUnlockFormula::set_unlock_type(v8, HIDWORD(formula_ida._M_dataplus._M_p));
  if ( *(_BYTE *)(((formula_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = *(Player **)(formula_ida._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBartenderUnlockFormula,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&formula_ida._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyBartenderUnlockFormula> *)(v3 + 64));
  Player::printStatLog(v9, (MessagePtr *)&formula_ida._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&formula_ida._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyBartenderUnlockFormula>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBartenderUnlockFormula> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v13 == (char *)v3 )
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
};

// Line 889: range 0000000017933266-0000000017933343
proto_log::BartenderFormulaUnlockType __cdecl BartenderActivity::getFormulaUnlockTypeByQuestId(
        const BartenderActivity *const this,
        uint32_t quest_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool v3; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  v3 = data::QuestExcelConfigMgrBase::findQuestExcelConfig(&v2->design_config.txt_config_mgr.quest_config_mgr, quest_id) != 0LL;
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( v3 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->level_id_ )
    return 2;
  else
    return 3;
};

// Line 902: range 0000000017933344-000000001793343C
void __cdecl BartenderActivity::updateTransaction(BartenderActivity *const this)
{
  uint64_t v1; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->trans_no_count_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ++this->trans_no_count_;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v1 = (unsigned __int64)Player::getUid(this->player_) << 32;
    if ( *(_BYTE *)(((unsigned __int64)&this->trans_no_count_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->trans_no_count_);
    this->trans_no_count_ = v1;
  }
};

// Line 914: range 000000001793343E-0000000017933725
void __cdecl BartenderActivity::updateDefaultUnlockFormula(BartenderActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  TxtConfigMgr *p_txt_config_mgr; // rax
  bool v6; // r14
  PlayerWatcherComp *WatcherComp; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 formula_id:915";
  *(_QWORD *)(v1 + 16) = BartenderActivity::updateDefaultUnlockFormula;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_bartender_config_mgr.default_unlock_formula_set;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->unlock_formula_set_,
            (const unsigned int *)(v1 + 32)) )
    {
      std::unordered_set<unsigned int>::insert(
        &this->unlock_formula_set_,
        (const std::unordered_set<unsigned int>::value_type *)(v1 + 32));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v11);
      p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v6 = p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id != *(_DWORD *)(v1 + 32);
      std::shared_ptr<Config>::~shared_ptr(&v11);
      if ( v6 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::triggerBartenderUnlockFormula(WatcherComp);
      }
      BartenderActivity::logUnlockFormula(this, BARTENDER_FORMULA_UNLOCK_DEFAULT, *(_DWORD *)(v1 + 32));
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 933: range 0000000017933726-0000000017933B61
void __cdecl BartenderActivity::onQuestStateChangeEvent(
        BartenderActivity *const this,
        const QuestStateChangeEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rdx
  TxtConfigMgr *p_txt_config_mgr; // rax
  bool v10; // r14
  PlayerWatcherComp *WatcherComp; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-A0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 formula_id:943 64 8 8 iter:938";
  *(_QWORD *)(v2 + 16) = BartenderActivity::onQuestStateChangeEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&event->quest_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->quest_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( event->quest_state == 2 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                              &v5->design_config.txt_config_mgr.activity_bartender_config_mgr.quest_to_unlock_formual_map,
                                                                                              &event->quest_id);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&v6->design_config.txt_config_mgr.activity_bartender_config_mgr.quest_to_unlock_formual_map)._M_cur;
    v7 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( !v7 )
    {
      __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
      __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *v8;
        if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                &this->unlock_formula_set_,
                (const unsigned int *)(v2 + 48)) )
        {
          std::unordered_set<unsigned int>::insert(
            &this->unlock_formula_set_,
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v15);
          p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id >> 3)
                        + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id >> 3)
                        + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v10 = p_txt_config_mgr->activity_bartender_config_mgr.default_fail_formula_id != *(_DWORD *)(v2 + 48);
          std::shared_ptr<Config>::~shared_ptr(&v15);
          if ( v10 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            WatcherComp = Player::getWatcherComp(this->player_);
            PlayerWatcherComp::triggerBartenderUnlockFormula(WatcherComp);
          }
          BartenderActivity::logUnlockFormula(this, BARTENDER_FORMULA_UNLOCK_QUEST, *(_DWORD *)(v2 + 48));
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      BaseActivity::notifyClientData(this, 0);
    }
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
};

// Line 960: range 0000000017933B62-0000000017933D26
void __cdecl BartenderActivity::lockRoomSceneWhenContentClosed(BartenderActivity *const this)
{
  ActivityBartenderExcelConfigMgr *p_activity_bartender_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  PlayerSceneComp *SceneComp; // rcx
  const data::BartenderBasicExcelConfig *basic_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_activity_bartender_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_bartender_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  basic_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderBasicExcelConfig(
                       p_activity_bartender_config_mgr,
                       this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( basic_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&basic_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)basic_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&basic_config_ptr->scene_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerSceneComp::lockPlayerRoomScene(SceneComp, basic_config_ptr->scene_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/bartender_activity.cpp",
      "lockRoomSceneWhenContentClosed",
      964);
    v2 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v6,
           (const char (*)[63])"[BARTENDER] findBartenderBasicExcelConfig failed, activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
};

// Line 971: range 0000000017933D28-0000000017933EEC
void __cdecl BartenderActivity::unlockRoomSceneOnStart(BartenderActivity *const this)
{
  ActivityBartenderExcelConfigMgr *p_activity_bartender_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  PlayerSceneComp *SceneComp; // rcx
  const data::BartenderBasicExcelConfig *basic_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_activity_bartender_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_bartender_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  basic_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderBasicExcelConfig(
                       p_activity_bartender_config_mgr,
                       this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( basic_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&basic_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)basic_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&basic_config_ptr->scene_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerSceneComp::unlockPlayerRoomScene(SceneComp, basic_config_ptr->scene_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/bartender_activity.cpp",
      "unlockRoomSceneOnStart",
      975);
    v2 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v6,
           (const char (*)[63])"[BARTENDER] findBartenderBasicExcelConfig failed, activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
};

// Line 981: range 0000000017933EEE-00000000179341D2
int32_t __cdecl BartenderActivity::setContentCloseStateByGm(BartenderActivity *const this, bool is_close)
{
  ActivityBartenderExcelConfigMgr *p_activity_bartender_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  PlayerSceneComp *SceneComp; // rcx
  const data::BartenderBasicExcelConfig *basic_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( !is_close )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 0;
    BaseActivity::notifyClientData(this, 0);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v7);
    p_activity_bartender_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.activity_bartender_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    basic_config_ptr = data::ActivityBartenderExcelConfigMgrBase::findBartenderBasicExcelConfig(
                         p_activity_bartender_config_mgr,
                         this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v7);
    if ( !basic_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/bartender_activity.cpp",
        "setContentCloseStateByGm",
        989);
      v3 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v8,
             (const char (*)[63])"[BARTENDER] findBartenderBasicExcelConfig failed, activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&basic_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)basic_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&basic_config_ptr->scene_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerSceneComp::unlockPlayerRoomScene(SceneComp, basic_config_ptr->scene_id);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->level_id_ )
      BartenderActivity::settleLevel(this);
    BartenderActivity::lockRoomSceneWhenContentClosed(this);
    BaseActivity::notifyClientData(this, 0);
  }
  return 0;
};

// Line 1010: range 00000000179341D4-00000000179341F2
int32_t __cdecl BartenderActivity::settleLevelByGm(BartenderActivity *const this)
{
  BartenderActivity::settleLevel(this);
  return 0;
};
