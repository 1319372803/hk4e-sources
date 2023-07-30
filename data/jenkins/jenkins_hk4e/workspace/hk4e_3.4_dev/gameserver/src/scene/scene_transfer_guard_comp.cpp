// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_transfer_guard_comp.cpp

// Line 39: range 0000000017F9A5DE-0000000017F9A94D
int32_t __cdecl SceneTransferGuardComp::startTransferGuard(
        SceneTransferGuardComp *const this,
        const TransferGuardParam *transfer_guard_param,
        std::any *p_context)
{
  std::any *v4; // rdx
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+28h] [rbp-68h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-64h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-60h] BYREF
  std::set<unsigned int> set; // [rsp+50h] [rbp-40h] BYREF

  ret = SceneTransferGuardComp::checkCanStartTransferGuard(this);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "startTransferGuard",
      43);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v13,
      (const char (*)[34])"checkCanStartTransferGuard failed");
    common::milog::MiLogStream::~MiLogStream(&v13);
    return ret;
  }
  else
  {
    ret = SceneTransferGuardComp::checkTransferGuardParam(this, transfer_guard_param);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "startTransferGuard",
        49);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v13,
        (const char (*)[31])"checkTransferGuardParam failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      return ret;
    }
    else
    {
      v4 = std::move<std::any &>(p_context);
      SceneTransferGuardComp::loadTransferGuardParamAndContext(this, transfer_guard_param, v4);
      if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_start_, transfer_guard_param, &this->is_start_);
      this->is_start_ = 1;
      SceneTransferGuardComp::recordGuardPlayerStartLocation(this);
      if ( *(char *)(((unsigned __int64)&transfer_guard_param->is_transfer_on_start >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&transfer_guard_param->is_transfer_on_start);
      if ( transfer_guard_param->is_transfer_on_start )
      {
        if ( *(_BYTE *)(((unsigned __int64)&transfer_guard_param->start_transfer_reason >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)transfer_guard_param - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&transfer_guard_param->start_transfer_reason >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        SceneTransferGuardComp::transferNotEnterPlayer(this, transfer_guard_param->start_transfer_reason);
      }
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "startTransferGuard",
        63);
      v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v13,
             (const char (*)[31])"transfer guard start, uid_set:");
      common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,std::pair<Vector3,Vector3>>>(
        &set,
        &this->uid_location_map_);
      v6 = common::milog::MiLogStream::operator<<<unsigned int>(v5, &set);
      v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])", scene_owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getOwnerUid(this->scene_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])", enter_uid_set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v9, &this->enter_uid_set_);
      std::set<unsigned int>::~set(&set);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return 0;
    }
  }
};

// Line 70: range 0000000017F9A94E-0000000017F9AA62
int32_t __cdecl SceneTransferGuardComp::attachTransferGuard(SceneTransferGuardComp *const this)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  if ( !this->is_start_ )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "attachTransferGuard",
      73);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v4,
      (const char (*)[28])"transfer guard is not start");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
  else
  {
    v2 = ((_BYTE)this - 39) & 7;
    v3 = (*(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v3 )
      __asan_report_store1(&this->is_attach_by_play_, v2, v3);
    this->is_attach_by_play_ = 1;
    return 0;
  }
};

// Line 81: range 0000000017F9AA64-0000000017F9ABB6
void __cdecl SceneTransferGuardComp::stopTransferGuard(SceneTransferGuardComp *const this, bool is_transfer_player)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  if ( !this->is_start_ )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "stopTransferGuard",
      84);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v2,
      (const char (*)[28])"transfer guard is not start");
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
  else
  {
    if ( is_transfer_player )
      SceneTransferGuardComp::transferGuardPlayerOnStop(this);
    SceneTransferGuardComp::clear(this);
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "stopTransferGuard",
      92);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v2, (const char (*)[20])"transfer guard stop");
    common::milog::MiLogStream::~MiLogStream(&v2);
  }
};

// Line 96: range 0000000017F9ABB8-0000000017F9AFFD
__int64 __fastcall SceneTransferGuardComp::findPlayerPosAndRot(
        const SceneTransferGuardComp *const this,
        uint32_t uid,
        unsigned __int64 pos,
        unsigned __int64 rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,Vector3> > >::pointer v9; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,Vector3> > >::pointer v10; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,Vector3> > >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 6 uid:95 64 8 8 iter:101";
  *(_QWORD *)(v4 + 16) = SceneTransferGuardComp::findPlayerPosAndRot;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = uid;
  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  if ( !this->is_start_ )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    *(std::map<unsigned int,std::pair<Vector3,Vector3>>::const_iterator *)(v4 + 64) = std::map<unsigned int,std::pair<Vector3,Vector3>>::find(
                                                                                        &this->uid_location_map_,
                                                                                        (const std::map<unsigned int,std::pair<Vector3,Vector3>>::key_type *)(v4 + 48));
    __y._M_node = std::map<unsigned int,std::pair<Vector3,Vector3>>::end(&this->uid_location_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,Vector3> > >::_Self *)(v4 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "findPlayerPosAndRot",
        104);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v14,
             (const char (*)[29])"findGuardPlayer failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,Vector3>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,Vector3> > > *const)(v4 + 64));
      if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(pos, 12LL);
      }
      if ( (((unsigned __int8)v9 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v9->second.first.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v9 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v9->second.first.z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(&v9->second, 12LL);
      }
      *(_QWORD *)pos = *(_QWORD *)&v9->second.first.x;
      *(float *)(pos + 8) = v9->second.first.z;
      v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,Vector3>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<Vector3,Vector3> > > *const)(v4 + 64));
      if ( (char)(rot & 7) >= *(_BYTE *)((rot >> 3) + 0x7FFF8000) && *(_BYTE *)((rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((rot + 11) & 7) >= *(_BYTE *)(((rot + 11) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(rot, 12LL);
      }
      if ( (((unsigned __int8)v10 + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&v10->second.second >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&v10->second.second >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v10->second.second.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v10 + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second.second.z + 3) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_load_n(&v10->second.second, 12LL);
      }
      *(_QWORD *)rot = *(_QWORD *)&v10->second.second.x;
      *(float *)(rot + 8) = v10->second.second.z;
      result = 0LL;
    }
  }
  if ( v15 == (char *)v4 )
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

// Line 113: range 0000000017F9AFFE-0000000017F9B218
void __fastcall SceneTransferGuardComp::delGuardPlayer(SceneTransferGuardComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:112";
  *(_QWORD *)(v2 + 16) = SceneTransferGuardComp::delGuardPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>>,unsigned int>(
         &this->uid_location_map_,
         (const unsigned int *)(v2 + 32)) )
  {
    std::map<unsigned int,std::pair<Vector3,Vector3>>::erase(
      &this->uid_location_map_,
      (const std::map<unsigned int,std::pair<Vector3,Vector3>>::key_type *)(v2 + 32));
    std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>>::erase(
      &this->uid_start_location_map_,
      (const std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>>::key_type *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "delGuardPlayer",
      118);
    v5 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v6, (const char (*)[20])"delGuardPlayer uid:");
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "delGuardPlayer",
      122);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v6,
           (const char (*)[29])"findGuardPlayer failed, uid:");
  }
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

// Line 127: range 0000000017F9B21A-0000000017F9B3E4
int32_t __cdecl SceneTransferGuardComp::checkCanStartTransferGuard(SceneTransferGuardComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  data::SceneType val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Scene::getSceneType(this->scene_) == SCENE_WORLD )
  {
    if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_start_);
    if ( this->is_start_ )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "checkCanStartTransferGuard",
        135);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v4,
        (const char (*)[32])"transfer guard is already start");
      common::milog::MiLogStream::~MiLogStream(&v4);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "checkCanStartTransferGuard",
      130);
    v1 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v4, (const char (*)[28])off_2647E5A0);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Scene::getSceneType(this->scene_);
    common::milog::MiLogStream::operator<<<data::SceneType,(data::SceneType*)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return -1;
  }
};

// Line 142: range 0000000017F9B3E6-0000000017F9B9CB
int32_t __cdecl SceneTransferGuardComp::checkTransferGuardParam(
        SceneTransferGuardComp *const this,
        const TransferGuardParam *transfer_guard_param)
{
  int32_t v2; // r14d
  std::set<unsigned int> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // r13
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::set<unsigned int>::iterator v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+10h] [rbp-100h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2; // [rsp+18h] [rbp-F8h]
  unsigned int value; // [rsp+34h] [rbp-DCh] BYREF
  unsigned __int64 val; // [rsp+38h] [rbp-D8h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (std::set<unsigned int> *)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::set<unsigned int> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 18 direct_uid_set:158";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)SceneTransferGuardComp::checkTransferGuardParam;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  if ( std::map<unsigned int,std::pair<Vector3,Vector3>>::size(&transfer_guard_param->uid_location_map) <= 4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    value = Scene::getOwnerUid(this->scene_);
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>> const,unsigned int>(
            &transfer_guard_param->uid_location_map,
            &value) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "checkTransferGuardParam",
        152);
      v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             &v21,
             (const char (*)[57])"scene owner is not include by transfer guard, owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      value = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &value);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v2 = -1;
    }
    else
    {
      if ( std::set<unsigned int>::empty(&transfer_guard_param->enter_uid_set) )
        goto LABEL_17;
      common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,std::pair<Vector3,Vector3>>>(
        v3 + 1,
        &transfer_guard_param->uid_location_map);
      __last2 = std::set<unsigned int>::end(&transfer_guard_param->enter_uid_set)._M_node;
      __first2 = std::set<unsigned int>::begin(&transfer_guard_param->enter_uid_set)._M_node;
      M_node = std::set<unsigned int>::end(v3 + 1)._M_node;
      v9._M_node = std::set<unsigned int>::begin(v3 + 1)._M_node;
      if ( !std::includes<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
              v9,
              (std::_Rb_tree_const_iterator<unsigned int>)M_node,
              (std::_Rb_tree_const_iterator<unsigned int>)__first2,
              (std::_Rb_tree_const_iterator<unsigned int>)__last2) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_transfer_guard_comp.cpp",
          "checkTransferGuardParam",
          161);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v21,
                (const char (*)[36])"enter_uid_set error, enter_uid_set:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int>(v10, &transfer_guard_param->enter_uid_set);
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v11,
                (const char (*)[18])", direct_uid_set:");
        common::milog::MiLogStream::operator<<<unsigned int>(v12, v3 + 1);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v2 = -1;
        v13 = 0;
      }
      else
      {
        v13 = 1;
      }
      std::set<unsigned int>::~set(v3 + 1);
      if ( v13 == 1 )
      {
LABEL_17:
        if ( *(char *)(((unsigned __int64)&transfer_guard_param->is_transfer_on_start >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&transfer_guard_param->is_transfer_on_start);
        if ( transfer_guard_param->is_transfer_on_start
          && (common::tools::MiscUtils::isContains<std::set<proto::EnterReason> const,proto::EnterReason>(
                &SceneTransferGuardComp::WHITE_ENTER_REASON_SET,
                &transfer_guard_param->start_transfer_reason)
           || common::tools::MiscUtils::isContains<std::set<proto::EnterReason> const,proto::EnterReason>(
                &transfer_guard_param->allow_enter_reason_set,
                &transfer_guard_param->start_transfer_reason)
            ? (v14 = 0)
            : (v14 = 1),
              v14) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_transfer_guard_comp.cpp",
            "checkTransferGuardParam",
            171);
          v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v21,
                  (const char (*)[34])"check jump reason failed, reason:");
          common::milog::MiLogStream::operator<<<proto::EnterReason,(proto::EnterReason*)0>(
            v15,
            &transfer_guard_param->start_transfer_reason);
          common::milog::MiLogStream::~MiLogStream(&v21);
          v2 = -1;
        }
        else
        {
          v2 = 0;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "checkTransferGuardParam",
      146);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v21,
           (const char (*)[35])"uid_location_map size error, size:");
    val = std::map<unsigned int,std::pair<Vector3,Vector3>>::size(&transfer_guard_param->uid_location_map);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v2 = -1;
  }
  result = v2;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 179: range 0000000017F9B9CC-0000000017F9BBBE
void __cdecl SceneTransferGuardComp::clear(SceneTransferGuardComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  std::map<unsigned int,std::pair<Vector3,Vector3>>::clear(&this->uid_location_map_);
  std::set<unsigned int>::clear(&this->enter_uid_set_);
  std::set<unsigned int>::clear(&this->leave_uid_set_);
  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_start_, v1, &this->is_start_);
  this->is_start_ = 0;
  v2 = ((_BYTE)this - 39) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_attach_by_play_, v2, v3);
  this->is_attach_by_play_ = 0;
  std::set<proto::EnterReason>::clear(&this->allow_enter_reason_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timeout_, v2, (_BYTE)this + 16);
  }
  this->timeout_ = 0;
  v4 = ((_BYTE)this + 20) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_transfer_on_timeout_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_transfer_on_timeout_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_transfer_on_timeout_, v4, v5);
  this->is_transfer_on_timeout_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id_, v4, (_BYTE)this + 24);
  }
  this->match_id_ = 0;
  std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>>::clear(&this->uid_start_location_map_);
  std::function<void ()(std::set<unsigned int> const&,unsigned int,bool)>::operator=(&this->player_enter_func_, 0LL);
  std::function<void ()(std::set<unsigned int> const&)>::operator=(&this->timeout_func_, 0LL);
  std::any::reset(&this->guard_context_);
};

// Line 196: range 0000000017F9BBC0-0000000017F9BEC5
void __cdecl SceneTransferGuardComp::loadTransferGuardParamAndContext(
        SceneTransferGuardComp *const this,
        const TransferGuardParam *transfer_guard_param,
        std::any *context)
{
  __int64 duration; // rsi
  uint32_t v4; // edx
  char v5; // al
  uint32_t v6; // edx
  char v7; // al
  bool is_transfer_on_timeout; // cl
  char v9; // dl
  __int64 v10; // rdx
  __int64 v11; // rsi
  uint32_t match_id; // ecx
  char v13; // al
  std::any *v14; // rax
  unsigned int now; // [rsp+2Ch] [rbp-4h]

  SceneTransferGuardComp::clear(this);
  std::map<unsigned int,std::pair<Vector3,Vector3>>::operator=(
    &this->uid_location_map_,
    &transfer_guard_param->uid_location_map);
  std::set<unsigned int>::operator=(&this->enter_uid_set_, &transfer_guard_param->enter_uid_set);
  std::set<proto::EnterReason>::operator=(&this->allow_enter_reason_set_, &transfer_guard_param->allow_enter_reason_set);
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&transfer_guard_param->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&transfer_guard_param->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( transfer_guard_param->duration )
  {
    if ( *(_BYTE *)(((unsigned __int64)&transfer_guard_param->duration >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&transfer_guard_param->duration >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    duration = transfer_guard_param->duration;
    v6 = SAFE_ADD<unsigned int,unsigned int>(now, duration);
    v7 = *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LOBYTE(duration) = v7 != 0;
      __asan_report_store4(&this->timeout_, duration, v6);
    }
    this->timeout_ = v6;
  }
  else
  {
    duration = 60LL;
    v4 = SAFE_ADD<unsigned int,unsigned int>(now, 0x3Cu);
    v5 = *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000);
    if ( v5 != 0 && v5 <= 3 )
    {
      LOBYTE(duration) = v5 != 0;
      __asan_report_store4(&this->timeout_, duration, v4);
    }
    this->timeout_ = v4;
  }
  if ( *(char *)(((unsigned __int64)&transfer_guard_param->is_transfer_on_timeout >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&transfer_guard_param->is_transfer_on_timeout);
  is_transfer_on_timeout = transfer_guard_param->is_transfer_on_timeout;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_transfer_on_timeout_ >> 3) + 0x7FFF8000);
  LOBYTE(duration) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_transfer_on_timeout_, duration, v10);
  this->is_transfer_on_timeout_ = is_transfer_on_timeout;
  v11 = (((_BYTE)transfer_guard_param - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&transfer_guard_param->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)transfer_guard_param - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&transfer_guard_param->match_id >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  match_id = transfer_guard_param->match_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->match_id_, v11, (_BYTE)this + 24);
  }
  this->match_id_ = match_id;
  std::function<void ()(std::set<unsigned int> const&,unsigned int,bool)>::operator=(
    &this->player_enter_func_,
    &transfer_guard_param->player_enter_func);
  std::function<void ()(std::set<unsigned int> const&)>::operator=(
    &this->timeout_func_,
    &transfer_guard_param->timeout_func);
  v14 = std::forward<std::any>(context);
  std::any::operator=(&this->guard_context_, v14);
};

// Line 218: range 0000000017F9C39A-0000000017F9C646
void __cdecl SceneTransferGuardComp::transferNotEnterPlayer(
        SceneTransferGuardComp *const this,
        proto::EnterReason reason)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // [rsp+8h] [rbp-A8h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF
  SceneTransferGuardComp::transferNotEnterPlayer::<lambda(Player&)> v11; // 0:rsi.8,8:edx.4

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 world_ptr:219";
  *(_QWORD *)(v2 + 16) = SceneTransferGuardComp::transferNotEnterPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v7 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v7)(v2 + 32, scene);
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "transferNotEnterPlayer",
      222);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v9, (const char (*)[25])"getOwnPlayerWorld failed");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v11.__reason = reason;
    v11.__this = this;
    std::function<ForeachPolicy ()(Player &)>::function<SceneTransferGuardComp::transferNotEnterPlayer(proto::EnterReason)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v9,
      v11);
    World::foreachPlayer(v8, (std::function<ForeachPolicy(Player&)> *)&v9);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v9);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
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

// Line 226: range 0000000017F9BEC6-0000000017F9C399
ForeachPolicy __cdecl SceneTransferGuardComp::transferNotEnterPlayer(proto::EnterReason)::{lambda(Player &)#1}::operator()(
        const SceneTransferGuardComp::transferNotEnterPlayer::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  SceneTransferGuardComp *this; // r14
  uint32_t Uid; // eax
  common::milog::MiLogStream *v8; // r13
  ForeachPolicy result; // eax
  PlayerSceneComp *SceneComp; // r14
  __int64 v11; // rax
  bool v12; // r13
  common::milog::MiLogStream *v13; // r13
  unsigned int value; // [rsp+18h] [rbp-F8h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-F0h] BYREF
  TransferReason p_reason; // [rsp+40h] [rbp-D0h] BYREF
  char v18[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 12 7 pos:230 64 12 7 rot:231";
  *(_QWORD *)(v2 + 16) = SceneTransferGuardComp::transferNotEnterPlayer(proto::EnterReason)::{lambda(Player &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -202177536;
  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>>,unsigned int>(
          &__closure->__this->uid_location_map_,
          &value) )
    goto LABEL_11;
  val = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &__closure->__this->enter_uid_set_,
          &val) )
    v5 = 1;
  else
LABEL_11:
    v5 = 0;
  if ( !v5 )
    goto LABEL_25;
  Vector3::Vector3((Vector3 *const)(v2 + 32), 0.0, 0.0, 0.0);
  Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  Uid = Player::getUid(player);
  if ( (unsigned int)SceneTransferGuardComp::findPlayerPosAndRot(this, Uid, v2 + 32, v2 + 64) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "operator()",
      234);
    v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v16,
           (const char (*)[48])"transfer guard findPlayerPosAndRot failed, uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = FOREACH_CONTINUE;
    goto LABEL_26;
  }
  SceneComp = Player::getSceneComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  TransferReason::TransferReason(&p_reason, __closure->__reason);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = (__int64)__closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->scene_ >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8();
  v12 = PlayerSceneComp::jumpToScene(
          SceneComp,
          *(Scene **)(v11 + 8),
          (const Vector3 *)(v2 + 32),
          (const Vector3 *)(v2 + 64),
          0,
          &p_reason) != 0;
  TransferReason::~TransferReason(&p_reason);
  if ( v12 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "operator()",
      239);
    v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v16,
            (const char (*)[47])"transfer guard player jumpToScene failed, uid:");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = FOREACH_CONTINUE;
  }
  else
  {
LABEL_25:
    result = FOREACH_CONTINUE;
  }
LABEL_26:
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

// Line 248: range 0000000017F9C75E-0000000017F9CDFC
void __cdecl SceneTransferGuardComp::kickNotGuardPlayer(SceneTransferGuardComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  Scene *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  SceneTransferGuardComp::kickNotGuardPlayer::<lambda(Player&)> v17; // [rsp-20h] [rbp-160h]
  uint32_t owner_uid; // [rsp+14h] [rbp-12Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-118h]
  SceneTransferGuardComp::kickNotGuardPlayer::<lambda(Player&)> __f; // [rsp+30h] [rbp-110h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 7 uid:271 48 16 13 world_ptr:249 80 48 16 kick_uid_set:256";
  *(_QWORD *)(v1 + 16) = SceneTransferGuardComp::kickNotGuardPlayer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v6 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v6)(v1 + 48, scene);
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "kickNotGuardPlayer",
      252);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v23,
      (const char (*)[25])"getOwnPlayerWorld failed");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    owner_uid = Scene::getOwnerUid(this->scene_);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = this->scene_;
    __f.__this = this;
    __f.__owner_uid = owner_uid;
    __f.__kick_uid_set = (std::set<unsigned int> *)(v1 + 80);
    v17.__kick_uid_set = (std::set<unsigned int> *)(v1 + 80);
    *(_OWORD *)&v17.__this = __PAIR128__(*(unsigned __int64 *)&__f.__owner_uid, (unsigned __int64)this);
    std::function<ForeachPolicy ()(Player &)>::function<SceneTransferGuardComp::kickNotGuardPlayer(void)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v23,
      v17);
    Scene::foreachPlayer(v7, (std::function<ForeachPolicy(Player&)> *)&v23);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v23);
    if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v1 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "kickNotGuardPlayer",
        269);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v23,
             (const char (*)[35])"transfer guard kick guest uid_set:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int>(v8, (const std::set<unsigned int> *)(v1 + 80));
      v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v9,
              (const char (*)[19])", scene_owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v1 + 32) = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v23);
      __for_range = (std::set<unsigned int> *)(v1 + 80);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 80))._M_node;
      __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 80))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 32) = *v11;
        v12 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        v13 = *(_QWORD *)v12 + 104LL;
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD))v13)(v12, *(unsigned int *)(v1 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_transfer_guard_comp.cpp",
            "kickNotGuardPlayer",
            275);
          v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v23,
                  (const char (*)[29])"checkKickPlayer failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v23);
        }
        else
        {
          v15 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8();
          v16 = *(_QWORD *)v15 + 112LL;
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))v16)(v15, *(unsigned int *)(v1 + 32), 9LL);
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 80));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 48));
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 257: range 0000000017F9C648-0000000017F9C75D
ForeachPolicy __cdecl SceneTransferGuardComp::kickNotGuardPlayer(void)::{lambda(Player &)#1}::operator()(
        const SceneTransferGuardComp::kickNotGuardPlayer::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  char v3; // al
  std::set<unsigned int> *kick_uid_set; // rbx
  unsigned int value[5]; // [rsp+1Ch] [rbp-14h] BYREF

  value[0] = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>>,unsigned int>(
         &__closure->__this->uid_location_map_,
         value) )
  {
    goto LABEL_8;
  }
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid == __closure->__owner_uid )
LABEL_8:
    v3 = 0;
  else
    v3 = 1;
  if ( v3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__kick_uid_set >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    kick_uid_set = __closure->__kick_uid_set;
    value[0] = Player::getUid(player);
    std::set<unsigned int>::insert(kick_uid_set, value);
  }
  return 0;
};

// Line 283: range 0000000017F9CDFE-0000000017F9D027
void __cdecl SceneTransferGuardComp::onTimer(SceneTransferGuardComp *const this, uint32_t now)
{
  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  if ( this->is_start_ )
  {
    SceneTransferGuardComp::kickNotGuardPlayer(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_attach_by_play_);
    }
    if ( !this->is_attach_by_play_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->timeout_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( now >= this->timeout_ )
      {
        if ( std::function<void ()(std::set<unsigned int> const&)>::operator bool(&this->timeout_func_) )
          std::function<void ()(std::set<unsigned int> const&)>::operator()(&this->timeout_func_, &this->enter_uid_set_);
        if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_start_);
        if ( this->is_start_ )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 39) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_attach_by_play_ >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_load1(&this->is_attach_by_play_);
          }
          if ( !this->is_attach_by_play_ )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->is_transfer_on_timeout_ >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_transfer_on_timeout_ >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_load1(&this->is_transfer_on_timeout_);
            }
            SceneTransferGuardComp::stopTransferGuard(this, this->is_transfer_on_timeout_);
          }
        }
      }
    }
  }
};

// Line 316: range 0000000017F9D028-0000000017F9D203
void __cdecl SceneTransferGuardComp::onPlayerPostEnterScene(SceneTransferGuardComp *const this, Player *player)
{
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v2; // rax
  unsigned int Uid; // eax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  bool is_inserted; // [rsp+1Bh] [rbp-35h]
  unsigned int value; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  if ( this->is_start_ )
  {
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>>,unsigned int>(
           &this->uid_location_map_,
           &value) )
    {
      value = Player::getUid(player);
      v2 = std::set<unsigned int>::insert(&this->enter_uid_set_, &value);
      is_inserted = v2.second;
      if ( std::function<void ()(std::set<unsigned int> const&,unsigned int,bool)>::operator bool(&this->player_enter_func_) )
      {
        Uid = Player::getUid(player);
        std::function<void ()(std::set<unsigned int> const&,unsigned int,bool)>::operator()(
          &this->player_enter_func_,
          &this->enter_uid_set_,
          Uid,
          is_inserted);
      }
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "onPlayerPostEnterScene",
        331);
      v4 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v11,
             (const char (*)[34])"transfer guard player enter, uid:");
      value = Player::getUid(player);
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &value);
      v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])", is_first_enter:");
      v7 = common::milog::MiLogStream::operator<<(v6, is_inserted);
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])", enter_uid_set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v8, &this->enter_uid_set_);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
  }
};

// Line 335: range 0000000017F9D204-0000000017F9D414
void __cdecl SceneTransferGuardComp::onPlayerLeaveScene(SceneTransferGuardComp *const this, Player *player)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int value; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  if ( this->is_start_ )
  {
    value = Player::getUid(player);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>>,unsigned int>(
           &this->uid_location_map_,
           &value) )
    {
      value = Player::getUid(player);
      std::map<unsigned int,std::pair<Vector3,Vector3>>::erase(&this->uid_location_map_, &value);
      value = Player::getUid(player);
      std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>>::erase(&this->uid_start_location_map_, &value);
      value = Player::getUid(player);
      if ( std::set<unsigned int>::erase(&this->enter_uid_set_, &value) )
      {
        value = Player::getUid(player);
        std::set<unsigned int>::insert(&this->leave_uid_set_, &value);
      }
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "onPlayerLeaveScene",
        350);
      v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v8,
             (const char (*)[34])"transfer guard player leave, uid:");
      value = Player::getUid(player);
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &value);
      v4 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v3, (const char (*)[17])", enter_uid_set:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int>(v4, &this->enter_uid_set_);
      v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v5, (const char (*)[17])", leave_uid_set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v6, &this->leave_uid_set_);
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
  }
};

// Line 354: range 0000000017F9D416-0000000017F9D53D
void __cdecl SceneTransferGuardComp::onPlayerLeaveWorld(
        SceneTransferGuardComp *const this,
        Player *player,
        proto::LeaveWorldReason leave_world_reason)
{
  uint32_t Uid; // ecx
  uint32_t v4; // ebx

  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  if ( this->is_start_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->match_id_ )
    {
      Uid = Player::getUid(player);
      SceneTransferGuardComp::tryPunishQuitPlayer(this, Uid, leave_world_reason);
    }
    v4 = Player::getUid(player);
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v4 == Scene::getOwnerUid(this->scene_) )
      SceneTransferGuardComp::stopTransferGuard(this, 0);
  }
};

// Line 371: range 0000000017F9D53E-0000000017F9DB4E
void __fastcall SceneTransferGuardComp::tryPunishQuitPlayer(
        SceneTransferGuardComp *const this,
        uint32_t uid,
        proto::LeaveWorldReason leave_world_reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  const std::string *v10; // rax
  GameserverService *v11; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  Player *v17; // rax
  PlayerMatchComp *MatchComp; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned int value; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 14 punish_uid:376 48 4 7 uid:370 64 16 14 player_ptr:400";
  *(_QWORD *)(v3 + 16) = SceneTransferGuardComp::tryPunishQuitPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = uid;
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>>,unsigned int>(
         &this->uid_location_map_,
         (const unsigned int *)(v3 + 48))
    || common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->leave_uid_set_,
         (const unsigned int *)(v3 + 48)) )
  {
    *(_DWORD *)(v3 + 32) = 0;
    if ( leave_world_reason > LEAVE_WORLD_REASON_BACK_MY_WORLD )
    {
      if ( leave_world_reason != LEAVE_WORLD_REASON_KICK_BY_OWNER )
        goto LABEL_18;
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 32) = Scene::getOwnerUid(this->scene_);
    }
    else
    {
      if ( leave_world_reason <= LEAVE_WORLD_REASON_NONE )
      {
LABEL_18:
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/scene_transfer_guard_comp.cpp",
          "tryPunishQuitPlayer",
          395);
        v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
               &v24,
               (const char (*)[55])"tryPunishQuitPlayer leaveReason not catch, BUG!!! uid:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
        v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               v8,
               (const char (*)[21])", leave_world_reason");
        v10 = proto::LeaveWorldReason_Name[abi:cxx11](leave_world_reason);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream(&v24);
        goto LABEL_31;
      }
      *(_DWORD *)(v3 + 32) = *(_DWORD *)(v3 + 48);
    }
    v11 = ServiceBox::findService<GameserverService>();
    GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v11);
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 64), GameThreadLocal + 16);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "tryPunishQuitPlayer",
        403);
      v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v24,
              (const char (*)[30])"player is not in thread ,uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      value = Scene::getOwnerUid(this->scene_);
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(&this->punish_uid_set_, &value) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_transfer_guard_comp.cpp",
          "tryPunishQuitPlayer",
          411);
        v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v24,
                (const char (*)[51])"scene owner has been punished, play will end, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        v15 = std::set<unsigned int>::insert(
                &this->punish_uid_set_,
                (const std::set<unsigned int>::value_type *)(v3 + 32));
        if ( !v15.second )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_transfer_guard_comp.cpp",
            "tryPunishQuitPlayer",
            417);
          v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v24,
                  (const char (*)[31])"player has been punished, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
        else
        {
          v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          MatchComp = Player::getMatchComp(v17);
          if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          PlayerMatchComp::matchPunish(MatchComp, this->match_id_);
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_transfer_guard_comp.cpp",
            "tryPunishQuitPlayer",
            421);
          v19 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v24,
                  (const char (*)[30])"exec matchPunish, punish_uid:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])", match_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->match_id_);
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
LABEL_31:
  if ( v25 == (char *)v3 )
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

// Line 425: range 0000000017F9DB50-0000000017F9DCCB
__int64 __fastcall SceneTransferGuardComp::checkJumpToSceneValid(
        SceneTransferGuardComp *const this,
        uint32_t uid,
        TransferReason *p_reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rcx
  unsigned __int64 v6; // r12
  __int64 result; // rax
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  v5 = (char *)(v3 + 64);
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 7 uid:424";
  *(_QWORD *)(v3 + 16) = SceneTransferGuardComp::checkJumpToSceneValid;
  v6 = v3 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = uid;
  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  if ( !this->is_start_ )
  {
    result = 0LL;
  }
  else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>>,unsigned int>(
               &this->uid_location_map_,
               (const unsigned int *)v5 - 8) )
  {
    result = 0LL;
  }
  else if ( common::tools::MiscUtils::isContains<std::set<proto::EnterReason> const,proto::EnterReason>(
              &SceneTransferGuardComp::WHITE_ENTER_REASON_SET,
              &p_reason->enter_reason) )
  {
    result = 0LL;
  }
  else if ( common::tools::MiscUtils::isContains<std::set<proto::EnterReason>,proto::EnterReason>(
              &this->allow_enter_reason_set_,
              &p_reason->enter_reason) )
  {
    result = 0LL;
  }
  else
  {
    result = 529LL;
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

// Line 448: range 0000000017F9DCCC-0000000017F9DDFA
__int64 __fastcall SceneTransferGuardComp::checkMpSceneEnterable(
        SceneTransferGuardComp *const this,
        uint32_t enter_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rcx
  unsigned __int64 v5; // r12
  __int64 result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 enter_uid:447";
  *(_QWORD *)(v2 + 16) = SceneTransferGuardComp::checkMpSceneEnterable;
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = enter_uid;
  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  if ( !this->is_start_ )
  {
    result = 0LL;
  }
  else if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>>,unsigned int>(
              &this->uid_location_map_,
              (const unsigned int *)v4 - 8) )
  {
    result = 0LL;
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
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

// Line 461: range 0000000017F9DDFC-0000000017F9DE1D
bool __cdecl SceneTransferGuardComp::isCanSetPlayerReloginPosAndRot(
        const SceneTransferGuardComp *const this,
        uint32_t uid)
{
  return SceneTransferGuardComp::isGuardPlayerButNotEnter(this, uid);
};

// Line 466: range 0000000017F9DE1E-0000000017F9DE3F
bool __cdecl SceneTransferGuardComp::isCanSetPlayerRebornPosAndRot(
        const SceneTransferGuardComp *const this,
        uint32_t uid)
{
  return SceneTransferGuardComp::isGuardPlayerButNotEnter(this, uid);
};

// Line 471: range 0000000017F9DE40-0000000017F9DF8A
__int64 __fastcall SceneTransferGuardComp::isGuardPlayerButNotEnter(
        const SceneTransferGuardComp *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  int v6; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:470";
  *(_QWORD *)(v2 + 16) = SceneTransferGuardComp::isGuardPlayerButNotEnter;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(char *)(((unsigned __int64)&this->is_start_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_start_);
  if ( !this->is_start_ )
  {
    result = 0LL;
  }
  else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>> const,unsigned int>(
               &this->uid_location_map_,
               (const unsigned int *)(v2 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    LOBYTE(v6) = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                   &this->enter_uid_set_,
                   (const unsigned int *)(v2 + 32));
    result = v6 ^ 1u;
  }
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

// Line 484: range 0000000017F9DF8C-0000000017F9E711
void __cdecl SceneTransferGuardComp::recordGuardPlayerStartLocation(SceneTransferGuardComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  uint32_t v7; // edi
  Player *v8; // rax
  common::milog::MiLogStream *v9; // rax
  Scene *v10; // rdi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned int *v16; // r8
  Vector3 *v17; // r9
  const unsigned int *v18; // rcx
  std::tuple<unsigned int,Vector3,Vector3> *v19; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3> > >,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  Vector3 *v25; // [rsp+0h] [rbp-180h]
  unsigned int val; // [rsp+1Ch] [rbp-164h] BYREF
  std::map<unsigned int,std::pair<Vector3,Vector3>>::iterator __for_begin; // [rsp+20h] [rbp-160h] BYREF
  std::map<unsigned int,std::pair<Vector3,Vector3>>::iterator __for_end; // [rsp+28h] [rbp-158h] BYREF
  std::map<unsigned int,std::pair<Vector3,Vector3>> *__for_range; // [rsp+30h] [rbp-150h]
  const std::pair<unsigned int const,std::pair<Vector3,Vector3> > *v31; // [rsp+38h] [rbp-148h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<Vector3,Vector3> > >::type *uid; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<Vector3,Vector3> > >::type *location; // [rsp+48h] [rbp-138h]
  std::tuple<unsigned int,Vector3,Vector3> v34; // [rsp+50h] [rbp-130h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-110h] BYREF
  char v36[240]; // [rsp+90h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 12 7 pos:505 64 12 7 rot:506 96 16 13 world_ptr:485 128 16 14 player_ptr:493 160 16 13 scene_ptr:499";
  *(_QWORD *)(v1 + 16) = SceneTransferGuardComp::recordGuardPlayerStartLocation;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862722] = -219020288;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v6 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v6)(v1 + 96, scene);
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "recordGuardPlayerStartLocation",
      488);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v35,
      (const char (*)[25])"getOwnPlayerWorld failed");
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  else
  {
    __for_range = &this->uid_location_map_;
    __for_begin._M_node = std::map<unsigned int,std::pair<Vector3,Vector3>>::begin(&this->uid_location_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::pair<Vector3,Vector3>>::end(&this->uid_location_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v31 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<Vector3,Vector3>>>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,std::pair<Vector3,Vector3>>(v31);
      location = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<Vector3,Vector3> > >::type *)std::get<1ul,unsigned int const,std::pair<Vector3,Vector3>>(v31);
      v7 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        v7 = (unsigned int)uid;
        __asan_report_load4();
      }
      World::findPlayerPtr((World *const)(v1 + 128), v7);
      if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 128)) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        Player::getSceneComp(v8);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 160));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_transfer_guard_comp.cpp",
            "recordGuardPlayerStartLocation",
            502);
          v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                 &v35,
                 (const char (*)[47])"transfer guard player getCurScene failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, uid);
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
        else
        {
          Vector3::Vector3((Vector3 *const)(v1 + 32), 0.0, 0.0, 0.0);
          Vector3::Vector3((Vector3 *const)(v1 + 64), 0.0, 0.0, 0.0);
          v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
          if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
          {
            v10 = (Scene *)uid;
            __asan_report_load4();
          }
          if ( Scene::getPlayerLocation(v10, *uid, (Vector3 *)(v1 + 32), (Vector3 *)(v1 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_transfer_guard_comp.cpp",
              "recordGuardPlayerStartLocation",
              509);
            v11 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                    &v35,
                    (const char (*)[53])"transfer guard player getPlayerLocation failed, uid:");
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, uid);
            v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v12,
                    (const char (*)[12])", scene_id:");
            v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            val = Scene::getSceneId(v14);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
            common::milog::MiLogStream::~MiLogStream(&v35);
          }
          else
          {
            v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
            val = Scene::getSceneId(v15);
            std::make_tuple<unsigned int,Vector3 &,Vector3 &>(
              &v34,
              &val,
              (Vector3 *)(v1 + 32),
              (Vector3 *)(v1 + 64),
              v16,
              v17,
              v25);
            v20 = std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>>::emplace<unsigned int const&,std::tuple<unsigned int,Vector3,Vector3>>(
                    &this->uid_start_location_map_,
                    uid,
                    &v34,
                    v18,
                    v19);
            if ( !v20.second )
            {
              common::milog::MiLogStream::create(
                &v35,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_transfer_guard_comp.cpp",
                "recordGuardPlayerStartLocation",
                515);
              v21 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      &v35,
                      (const char (*)[48])"transfer guard duplicate player start pos, uid:");
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, uid);
              v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v22,
                      (const char (*)[12])", scene_id:");
              v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
              val = Scene::getSceneId(v24);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
              common::milog::MiLogStream::~MiLogStream(&v35);
            }
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 160));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<Vector3,Vector3>>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 96));
  if ( v36 == (char *)v1 )
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
};

// Line 522: range 0000000017F9E886-0000000017F9F84F
void __cdecl SceneTransferGuardComp::transferGuardPlayerOnStop(SceneTransferGuardComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Scene *scene; // rdx
  _QWORD *p_vptr_DescribalBase; // rax
  unsigned __int64 v6; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Scene *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  const SceneExcelConfigMgr *v18; // r14
  uint32_t *v19; // rdx
  common::milog::MiLogStream *v20; // r14
  const unsigned int *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  const unsigned int *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  Scene *v28; // rcx
  common::milog::MiLogStream *v29; // rax
  Player *v30; // rax
  uint32_t SceneComp; // r14d
  const std::__tuple_element_t_165 *v32; // rax
  common::milog::MiLogStream *v33; // r14
  const unsigned int *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  Player *v39; // rax
  PlayerSceneComp *v40; // rax
  common::milog::MiLogStream *v41; // rax
  Player *v42; // rax
  PlayerSceneComp *v43; // r14
  const Vector3 *v44; // r15
  Scene *v45; // rax
  common::milog::MiLogStream *v46; // rax
  SceneTransferGuardComp::transferGuardPlayerOnStop::<lambda(Player&)> v47; // [rsp-20h] [rbp-280h]
  Vector3 *rot; // [rsp+10h] [rbp-250h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-238h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-230h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-228h]
  const SceneExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-220h]
  std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>> *__for_range_0; // [rsp+48h] [rbp-218h]
  const std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3> > *v54; // [rsp+50h] [rbp-210h]
  std::tuple_element<0,const std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3> > >::type *uid; // [rsp+58h] [rbp-208h]
  std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3> > >::type *location_tuple; // [rsp+60h] [rbp-200h]
  const data::SceneExcelConfig *config_ptr; // [rsp+68h] [rbp-1F8h]
  SceneTransferGuardComp::transferGuardPlayerOnStop::<lambda(Player&)> __f; // [rsp+70h] [rbp-1F0h]
  common::milog::MiLogStream v59; // [rsp+90h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v60; // [rsp+B0h] [rbp-1B0h] BYREF
  TransferReason p_reason; // [rsp+D0h] [rbp-190h] BYREF
  char v62[336]; // [rsp+110h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 48 4 13 owner_uid:535 64 4 7 uid:552 80 16 13 world_ptr:523 112 16 20 owner_player_ptr:529 144"
                        " 16 14 player_ptr:578 176 16 13 scene_ptr:584 208 48 16 kick_uid_set:536";
  *(_QWORD *)(v1 + 16) = SceneTransferGuardComp::transferGuardPlayerOnStop;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = 62194;
  v3[536862726] = 62194;
  v3[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  p_vptr_DescribalBase = &scene->_vptr_DescribalBase;
  if ( *(_BYTE *)(((unsigned __int64)scene >> 3) + 0x7FFF8000) )
    p_vptr_DescribalBase = (_QWORD *)__asan_report_load8();
  v6 = *p_vptr_DescribalBase + 64LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Scene *))v6)(v1 + 80, scene);
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_transfer_guard_comp.cpp",
      "transferGuardPlayerOnStop",
      526);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v60,
      (const char (*)[25])"getOwnPlayerWorld failed");
    common::milog::MiLogStream::~MiLogStream(&v60);
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v1 + 112));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "transferGuardPlayerOnStop",
        532);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v60,
        (const char (*)[26])"world getOwnPlayer failed");
      common::milog::MiLogStream::~MiLogStream(&v60);
    }
    else
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      *(_DWORD *)(v1 + 48) = Player::getUid(v7);
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 208));
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = this->scene_;
      __f.__this = this;
      __f.__owner_uid = *(_DWORD *)(v1 + 48);
      __f.__kick_uid_set = (std::set<unsigned int> *)(v1 + 208);
      v47.__kick_uid_set = (std::set<unsigned int> *)(v1 + 208);
      *(_OWORD *)&v47.__this = __PAIR128__(*(unsigned __int64 *)&__f.__owner_uid, (unsigned __int64)this);
      std::function<ForeachPolicy ()(Player &)>::function<SceneTransferGuardComp::transferGuardPlayerOnStop(void)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v60,
        v47);
      Scene::foreachPlayer(v8, (std::function<ForeachPolicy(Player&)> *)&v60);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v60);
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_transfer_guard_comp.cpp",
        "transferGuardPlayerOnStop",
        550);
      v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v60,
             (const char (*)[35])"transfer guard kick guest uid_set:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int>(v9, (const std::set<unsigned int> *)(v1 + 208));
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v10,
              (const char (*)[19])", scene_owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v1 + 64) = Scene::getOwnerUid(this->scene_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 64));
      common::milog::MiLogStream::~MiLogStream(&v60);
      __for_range = (std::set<unsigned int> *)(v1 + 208);
      __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 208))._M_node;
      __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 208))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 64) = *v12;
        v13 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8();
        v14 = *(_QWORD *)v13 + 104LL;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD))v14)(v13, *(unsigned int *)(v1 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_transfer_guard_comp.cpp",
            "transferGuardPlayerOnStop",
            556);
          v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v60,
                  (const char (*)[29])"checkKickPlayer failed, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 64));
          common::milog::MiLogStream::~MiLogStream(&v60);
        }
        else
        {
          v16 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8();
          v17 = *(_QWORD *)v16 + 112LL;
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64))v17)(v16, *(unsigned int *)(v1 + 64), 9LL);
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v1 + 176));
      config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176))->design_config.txt_config_mgr.scene_config_mgr;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 176));
      __for_range_0 = &this->uid_start_location_map_;
      __for_begin._M_node = std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>>::begin(&this->uid_start_location_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3> > >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3> > >::_Self *)&__for_end) )
      {
        v54 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3> > > *const)&__for_begin);
        uid = std::get<0ul,unsigned int const,std::tuple<unsigned int,Vector3,Vector3>>(v54);
        location_tuple = (std::tuple_element<1,const std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3> > >::type *)std::get<1ul,unsigned int const,std::tuple<unsigned int,Vector3,Vector3>>(v54);
        v18 = config_mgr;
        v19 = (uint32_t *)std::get<0ul,unsigned int,Vector3,Vector3>(location_tuple);
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        config_ptr = data::SceneExcelConfigMgrBase::findSceneExcelConfig(v18, *v19);
        if ( config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->type >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( !SceneExcelConfigMgr::isPlayerScene(config_ptr->type) )
          {
            common::milog::MiLogStream::create(
              &v60,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/scene/scene_transfer_guard_comp.cpp",
              "transferGuardPlayerOnStop",
              575);
            v24 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    &v60,
                    (const char (*)[61])"start location is not player scene, dont transfer, scene_id:");
            v25 = std::get<0ul,unsigned int,Vector3,Vector3>(location_tuple);
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, v25);
            v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])", uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, uid);
            common::milog::MiLogStream::~MiLogStream(&v60);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v28 = this->scene_;
            if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            Scene::findPlayer((const Scene *const)(v1 + 144), (__int64)v28, *uid);
            if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 144)) )
            {
              common::milog::MiLogStream::create(
                &v60,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_transfer_guard_comp.cpp",
                "transferGuardPlayerOnStop",
                581);
              v29 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v60,
                      (const char (*)[31])"scene find player failed, uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, uid);
              common::milog::MiLogStream::~MiLogStream(&v60);
            }
            else
            {
              v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
              SceneComp = (unsigned int)Player::getSceneComp(v30);
              v32 = std::get<0ul,unsigned int,Vector3,Vector3>(location_tuple);
              if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              PlayerSceneComp::findScene((const PlayerSceneComp *const)(v1 + 176), SceneComp);
              if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 176)) )
              {
                common::milog::MiLogStream::create(
                  &v60,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_transfer_guard_comp.cpp",
                  "transferGuardPlayerOnStop",
                  587);
                v33 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        &v60,
                        (const char (*)[34])"owner findScene failed, scene_id:");
                v34 = std::get<0ul,unsigned int,Vector3,Vector3>(location_tuple);
                v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, v34);
                v36 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])", uid:");
                v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, uid);
                v38 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v37,
                        (const char (*)[13])", owner_uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v38,
                  (const unsigned int *)(v1 + 48));
                common::milog::MiLogStream::~MiLogStream(&v60);
              }
              else
              {
                v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
                v40 = Player::getSceneComp(v39);
                if ( PlayerSceneComp::isInTransfer(v40) )
                {
                  common::milog::MiLogStream::create(
                    &v60,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/scene/scene_transfer_guard_comp.cpp",
                    "transferGuardPlayerOnStop",
                    592);
                  v41 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                          &v60,
                          (const char (*)[28])"player is in transfer, uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, uid);
                  common::milog::MiLogStream::~MiLogStream(&v60);
                }
                else
                {
                  v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
                  v43 = Player::getSceneComp(v42);
                  TransferReason::TransferReason(&p_reason, ENTER_REASON_TRANSFER_GUARD_STOP);
                  rot = (Vector3 *)std::get<2ul,unsigned int,Vector3,Vector3>(location_tuple);
                  v44 = std::get<1ul,unsigned int,Vector3,Vector3>(location_tuple);
                  v45 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176));
                  LOBYTE(v43) = PlayerSceneComp::jumpToScene(v43, v45, v44, rot, 0, &p_reason) != 0;
                  TransferReason::~TransferReason(&p_reason);
                  if ( (_BYTE)v43 )
                  {
                    common::milog::MiLogStream::create(
                      &v60,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/scene/scene_transfer_guard_comp.cpp",
                      "transferGuardPlayerOnStop",
                      597);
                    v46 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                            &v60,
                            (const char (*)[32])"player jumpToScene failed, uid:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, uid);
                    common::milog::MiLogStream::~MiLogStream(&v60);
                  }
                }
              }
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 176));
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 144));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_transfer_guard_comp.cpp",
            "transferGuardPlayerOnStop",
            569);
          v20 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v59,
                  (const char (*)[39])"findSceneExcelConfig failed, scene_id:");
          v21 = std::get<0ul,unsigned int,Vector3,Vector3>(location_tuple);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, v21);
          v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])", uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, uid);
          common::milog::MiLogStream::~MiLogStream(&v59);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::tuple<unsigned int,Vector3,Vector3> > > *const)&__for_begin);
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 208));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 112));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 80));
  if ( v62 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 537: range 0000000017F9E712-0000000017F9E885
ForeachPolicy __cdecl SceneTransferGuardComp::transferGuardPlayerOnStop(void)::{lambda(Player &)#1}::operator()(
        const SceneTransferGuardComp::transferGuardPlayerOnStop::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  char v4; // al
  std::set<unsigned int> *kick_uid_set; // rbx
  unsigned int value[5]; // [rsp+1Ch] [rbp-14h] BYREF

  value[0] = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<Vector3,Vector3>>,unsigned int>(
          &__closure->__this->uid_location_map_,
          value) )
    return 0;
  value[0] = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::tuple<unsigned int,Vector3,Vector3>>,unsigned int>(
         &__closure->__this->uid_start_location_map_,
         value) )
  {
    goto LABEL_12;
  }
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid == __closure->__owner_uid )
LABEL_12:
    v4 = 0;
  else
    v4 = 1;
  if ( v4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__kick_uid_set >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    kick_uid_set = __closure->__kick_uid_set;
    value[0] = Player::getUid(player);
    std::set<unsigned int>::insert(kick_uid_set, value);
  }
  return 0;
};
