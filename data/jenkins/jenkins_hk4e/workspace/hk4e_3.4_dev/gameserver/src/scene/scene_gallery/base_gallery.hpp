// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/base_gallery.hpp

// Line 23: range 0000000016686CEE-0000000016686EFF
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::FungusCaptureSettleNotify>(
        BaseGallery *const this,
        proto::FungusCaptureSettleNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::FungusCaptureSettleNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::FungusCaptureSettleNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 000000001668707A-000000001668728B
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::FungusFighterTrainingInfoNotify>(
        BaseGallery *const this,
        proto::FungusFighterTrainingInfoNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::FungusFighterTrainingInfoNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::FungusFighterTrainingInfoNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 00000000180BAAB8-00000000180BACC9
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::GalleryBalloonScoreNotify>(
        BaseGallery *const this,
        proto::GalleryBalloonScoreNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::GalleryBalloonScoreNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::GalleryBalloonScoreNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 0000000016686308-0000000016686519
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::GalleryFlowerCatchNotify>(
        BaseGallery *const this,
        proto::GalleryFlowerCatchNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::GalleryFlowerCatchNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::GalleryFlowerCatchNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 000000001465C0F2-000000001465C303
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::GalleryIslandPartyDownHillInfoNotify>(
        BaseGallery *const this,
        proto::GalleryIslandPartyDownHillInfoNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::GalleryIslandPartyDownHillInfoNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::GalleryIslandPartyDownHillInfoNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 00000000180BB2F8-00000000180BB509
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::GalleryPreStartNotify>(
        BaseGallery *const this,
        proto::GalleryPreStartNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::GalleryPreStartNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::GalleryPreStartNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 00000000180BB614-00000000180BB825
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::GalleryStartNotify>(
        BaseGallery *const this,
        proto::GalleryStartNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::GalleryStartNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::GalleryStartNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 00000000180BB842-00000000180BBA53
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::GalleryStopNotify>(
        BaseGallery *const this,
        proto::GalleryStopNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::GalleryStopNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::GalleryStopNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 0000000014658C7C-0000000014658E8D
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::HomeBalloonGallerySettleNotify>(
        BaseGallery *const this,
        proto::HomeBalloonGallerySettleNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::HomeBalloonGallerySettleNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::HomeBalloonGallerySettleNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 000000001465992E-0000000014659B3F
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::HomeRacingGallerySettleNotify>(
        BaseGallery *const this,
        proto::HomeRacingGallerySettleNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::HomeRacingGallerySettleNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::HomeRacingGallerySettleNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 000000001465A3AE-000000001465A5BF
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::HomeSeekFurnitureGalleryScoreNotify>(
        BaseGallery *const this,
        proto::HomeSeekFurnitureGalleryScoreNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::HomeSeekFurnitureGalleryScoreNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::HomeSeekFurnitureGalleryScoreNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 000000001465A7DA-000000001465A9EB
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::InstableSprayGalleryInfoNotify>(
        BaseGallery *const this,
        proto::InstableSprayGalleryInfoNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::InstableSprayGalleryInfoNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::InstableSprayGalleryInfoNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 000000001465C304-000000001465C515
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::IslandPartyRaftInfoNotify>(
        BaseGallery *const this,
        proto::IslandPartyRaftInfoNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::IslandPartyRaftInfoNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::IslandPartyRaftInfoNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 000000001465C516-000000001465C727
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::IslandPartySailInfoNotify>(
        BaseGallery *const this,
        proto::IslandPartySailInfoNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::IslandPartySailInfoNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::IslandPartySailInfoNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 23: range 00000000180EC486-00000000180EC697
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::WindFieldGalleryInfoNotify>(
        BaseGallery *const this,
        proto::WindFieldGalleryInfoNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::WindFieldGalleryInfoNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::WindFieldGalleryInfoNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 35: range 0000000017A2C2F2-0000000017A2C56F
std::optional<BuoyantCombatParam> *__cdecl BaseGallery::getParam<BuoyantCombatParam>(
        std::optional<BuoyantCombatParam> *retstr,
        const BaseGallery *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+10h] [rbp-120h] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-118h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-110h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-100h] BYREF
  BuoyantCombatParam __t; // [rsp+50h] [rbp-E0h] BYREF
  char v13[96]; // [rsp+D0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v2 + 16) = BaseGallery::getParam<BuoyantCombatParam>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<BuoyantCombatParam>::optional(retstr, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v2 + 32));
    tryAnyCast<BuoyantCombatParam>(&__t, &v6->second);
    std::optional<BuoyantCombatParam>::optional<BuoyantCombatParam,true>(retstr, &__t);
    BuoyantCombatParam::~BuoyantCombatParam(&__t);
  }
  if ( v13 == (char *)v2 )
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

// Line 35: range 00000000180BA268-00000000180BA4E5
std::optional<GalleryBalloonParam> *__cdecl BaseGallery::getParam<GalleryBalloonParam>(
        std::optional<GalleryBalloonParam> *retstr,
        const BaseGallery *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+10h] [rbp-110h] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-F0h] BYREF
  GalleryBalloonParam __t; // [rsp+50h] [rbp-D0h] BYREF
  char v13[96]; // [rsp+C0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v2 + 16) = BaseGallery::getParam<GalleryBalloonParam>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<GalleryBalloonParam>::optional(retstr, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v2 + 32));
    tryAnyCast<GalleryBalloonParam>(&__t, &v6->second);
    std::optional<GalleryBalloonParam>::optional<GalleryBalloonParam,true>(retstr, &__t);
    GalleryBalloonParam::~GalleryBalloonParam(&__t);
  }
  if ( v13 == (char *)v2 )
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

// Line 35: range 0000000017A2CF54-0000000017A2D1D1
std::optional<GalleryCrystalLinkParam> *__cdecl BaseGallery::getParam<GalleryCrystalLinkParam>(
        std::optional<GalleryCrystalLinkParam> *retstr,
        const BaseGallery *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+10h] [rbp-100h] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-F0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-E0h] BYREF
  GalleryCrystalLinkParam __t; // [rsp+50h] [rbp-C0h] BYREF
  char v13[96]; // [rsp+B0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v2 + 16) = BaseGallery::getParam<GalleryCrystalLinkParam>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<GalleryCrystalLinkParam>::optional(retstr, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v2 + 32));
    tryAnyCast<GalleryCrystalLinkParam>(&__t, &v6->second);
    std::optional<GalleryCrystalLinkParam>::optional<GalleryCrystalLinkParam,true>(retstr, &__t);
    GalleryCrystalLinkParam::~GalleryCrystalLinkParam(&__t);
  }
  if ( v13 == (char *)v2 )
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

// Line 35: range 0000000016684BEE-0000000016684E6B
std::optional<GalleryFallParam> *__cdecl BaseGallery::getParam<GalleryFallParam>(
        std::optional<GalleryFallParam> *retstr,
        const BaseGallery *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+10h] [rbp-E0h] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-C0h] BYREF
  GalleryFallParam __t; // [rsp+50h] [rbp-A0h] BYREF
  char v13[96]; // [rsp+90h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v2 + 16) = BaseGallery::getParam<GalleryFallParam>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<GalleryFallParam>::optional(retstr, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v2 + 32));
    tryAnyCast<GalleryFallParam>(&__t, &v6->second);
    std::optional<GalleryFallParam>::optional<GalleryFallParam,true>(retstr, &__t);
    GalleryFallParam::~GalleryFallParam(&__t);
  }
  if ( v13 == (char *)v2 )
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

// Line 35: range 000000001668653A-00000000166867B7
std::optional<GalleryFlowerParam> *__cdecl BaseGallery::getParam<GalleryFlowerParam>(
        std::optional<GalleryFlowerParam> *retstr,
        const BaseGallery *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+10h] [rbp-E0h] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-C0h] BYREF
  GalleryFlowerParam __t; // [rsp+50h] [rbp-A0h] BYREF
  char v13[96]; // [rsp+90h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v2 + 16) = BaseGallery::getParam<GalleryFlowerParam>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<GalleryFlowerParam>::optional(retstr, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v2 + 32));
    tryAnyCast<GalleryFlowerParam>(&__t, &v6->second);
    std::optional<GalleryFlowerParam>::optional<GalleryFlowerParam,true>(retstr, &__t);
    GalleryFlowerParam::~GalleryFlowerParam(&__t);
  }
  if ( v13 == (char *)v2 )
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

// Line 35: range 0000000016686A62-0000000016686CB8
std::optional<GalleryFungusFighterCaptureParam> __cdecl BaseGallery::getParam<GalleryFungusFighterCaptureParam>(
        const BaseGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v5; // rax
  GalleryFungusFighterCaptureParam __t; // [rsp+14h] [rbp-ACh] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-A8h]
  std::optional<GalleryFungusFighterCaptureParam> v8; // [rsp+20h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+28h] [rbp-98h] BYREF
  std::shared_ptr<Config> v10; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-80h] BYREF
  char v12[96]; // [rsp+60h] [rbp-60h] BYREF
  std::optional<GalleryFungusFighterCaptureParam> result; // 0:rax.5

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v1 + 16) = BaseGallery::getParam<GalleryFungusFighterCaptureParam>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v1 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<GalleryFungusFighterCaptureParam>::optional(&v8, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v1 + 32));
    __t.camp_id = tryAnyCast<GalleryFungusFighterCaptureParam>(&v5->second).camp_id;
    std::optional<GalleryFungusFighterCaptureParam>::optional<GalleryFungusFighterCaptureParam,true>(&v8, &__t);
  }
  __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false>::__node_type *)v8;
  result = v8;
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

// Line 35: range 000000001465ADCE-000000001465B04B
std::optional<GalleryInstableSprayParam> *__cdecl BaseGallery::getParam<GalleryInstableSprayParam>(
        std::optional<GalleryInstableSprayParam> *retstr,
        const BaseGallery *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+10h] [rbp-100h] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-F0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-E0h] BYREF
  GalleryInstableSprayParam __t; // [rsp+50h] [rbp-C0h] BYREF
  char v13[96]; // [rsp+B0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v2 + 16) = BaseGallery::getParam<GalleryInstableSprayParam>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<GalleryInstableSprayParam>::optional(retstr, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v2 + 32));
    tryAnyCast<GalleryInstableSprayParam>(&__t, &v6->second);
    std::optional<GalleryInstableSprayParam>::optional<GalleryInstableSprayParam,true>(retstr, &__t);
    GalleryInstableSprayParam::~GalleryInstableSprayParam(&__t);
  }
  if ( v13 == (char *)v2 )
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

// Line 35: range 0000000016919D82-0000000016919FFF
std::optional<GalleryLuminanceStoneChallengeParam> *__cdecl BaseGallery::getParam<GalleryLuminanceStoneChallengeParam>(
        std::optional<GalleryLuminanceStoneChallengeParam> *retstr,
        const BaseGallery *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+10h] [rbp-110h] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-F0h] BYREF
  GalleryLuminanceStoneChallengeParam __t; // [rsp+50h] [rbp-D0h] BYREF
  char v13[96]; // [rsp+C0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v2 + 16) = BaseGallery::getParam<GalleryLuminanceStoneChallengeParam>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<GalleryLuminanceStoneChallengeParam>::optional(retstr, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v2 + 32));
    tryAnyCast<GalleryLuminanceStoneChallengeParam>(&__t, &v6->second);
    std::optional<GalleryLuminanceStoneChallengeParam>::optional<GalleryLuminanceStoneChallengeParam,true>(retstr, &__t);
    GalleryLuminanceStoneChallengeParam::~GalleryLuminanceStoneChallengeParam(&__t);
  }
  if ( v13 == (char *)v2 )
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

// Line 35: range 000000001691ABF4-000000001691AE7A
std::optional<SalvageEscortParam> __cdecl BaseGallery::getParam<SalvageEscortParam>(const BaseGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+20h] [rbp-C0h] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-B8h]
  SalvageEscortParam __t; // [rsp+34h] [rbp-ACh] BYREF
  std::optional<SalvageEscortParam> v9; // [rsp+40h] [rbp-A0h] BYREF
  std::optional<SalvageEscortParam> v10; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+60h] [rbp-80h] BYREF
  char v12[96]; // [rsp+80h] [rbp-60h] BYREF
  std::optional<SalvageEscortParam> result; // 0:rax.13

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v1 + 16) = BaseGallery::getParam<SalvageEscortParam>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v1 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<SalvageEscortParam>::optional(&v9, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v1 + 32));
    __t = tryAnyCast<SalvageEscortParam>(&v5->second);
    std::optional<SalvageEscortParam>::optional<SalvageEscortParam,true>(&v9, &__t);
  }
  v10 = v9;
  result = v9;
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

// Line 35: range 000000001691B0B6-000000001691B33C
std::optional<SalvagePreventParam> __cdecl BaseGallery::getParam<SalvagePreventParam>(const BaseGallery *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+20h] [rbp-C0h] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-B8h]
  SalvagePreventParam __t; // [rsp+34h] [rbp-ACh] BYREF
  std::optional<SalvagePreventParam> v9; // [rsp+40h] [rbp-A0h] BYREF
  std::optional<SalvagePreventParam> v10; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+60h] [rbp-80h] BYREF
  char v12[96]; // [rsp+80h] [rbp-60h] BYREF
  std::optional<SalvagePreventParam> result; // 0:rax.13

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v1 + 16) = BaseGallery::getParam<SalvagePreventParam>;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v1 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v1 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<SalvagePreventParam>::optional(&v9, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v1 + 32));
    __t = tryAnyCast<SalvagePreventParam>(&v5->second);
    std::optional<SalvagePreventParam>::optional<SalvagePreventParam,true>(&v9, &__t);
  }
  v10 = v9;
  result = v9;
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

// Line 35: range 0000000016920116-0000000016920393
std::optional<SumoCombatParam> *__cdecl BaseGallery::getParam<SumoCombatParam>(
        std::optional<SumoCombatParam> *retstr,
        const BaseGallery *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> __y; // [rsp+10h] [rbp-100h] BYREF
  const GalleryExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-F0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-E0h] BYREF
  SumoCombatParam __t; // [rsp+50h] [rbp-C0h] BYREF
  char v13[96]; // [rsp+B0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 7 iter:38";
  *(_QWORD *)(v2 + 16) = BaseGallery::getParam<SumoCombatParam>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.gallery_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::any>::find(
                                                                              &config_mgr->gallery_param_map,
                                                                              &this->gallery_id_);
  __y._M_cur = std::unordered_map<unsigned int,std::any>::end(&config_mgr->gallery_param_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v2 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "getParam",
      41);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"[GALLERY] balloon param not find, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->gallery_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::optional<SumoCombatParam>::optional(retstr, (std::nullopt_t)((_BYTE)this + 32));
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v2 + 32));
    tryAnyCast<SumoCombatParam>(&__t, &v6->second);
    std::optional<SumoCombatParam>::optional<SumoCombatParam,true>(retstr, &__t);
    SumoCombatParam::~SumoCombatParam(&__t);
  }
  if ( v13 == (char *)v2 )
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

// Line 59: range 00000000146594E2-00000000146596F3
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::HomeBalloonGalleryScoreNotify>(
        BaseGallery *const this,
        proto::HomeBalloonGalleryScoreNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::HomeBalloonGalleryScoreNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::HomeBalloonGalleryScoreNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 74: range 00000000180EC07C-00000000180EC28D
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::WindFieldGalleryChallengeInfoNotify>(
        BaseGallery *const this,
        proto::WindFieldGalleryChallengeInfoNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::WindFieldGalleryChallengeInfoNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::WindFieldGalleryChallengeInfoNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 142: range 000000001465B396-000000001465B5A7
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::InstableSprayLevelFinishNotify>(
        BaseGallery *const this,
        proto::InstableSprayLevelFinishNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::InstableSprayLevelFinishNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::InstableSprayLevelFinishNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};

// Line 1036: range 00000000166858F4-0000000016685B05
void __cdecl BaseGallery::notifyToGalleryPlayers<proto::GalleryFallScoreNotify>(
        BaseGallery *const this,
        proto::GalleryFallScoreNotify *proto)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-D0h] BYREF
  char v6[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::set<unsigned int> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 10 uid_set:25";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseGallery::notifyToGalleryPlayers<proto::GalleryFallScoreNotify>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,proto::OnlinePlayerInfo>>(
    v2 + 1,
    &this->player_info_map_);
  if ( std::set<unsigned int>::empty(v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/base_gallery.hpp",
      "notifyToGalleryPlayers",
      28);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])"uid_set is empty");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Scene::notifyToSpecificPlayer<proto::GalleryFallScoreNotify>(this->scene_, proto, v2 + 1);
  }
  std::set<unsigned int>::~set(v2 + 1);
  if ( v6 == (char *)v2 )
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
};
