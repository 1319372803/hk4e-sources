// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/mp/mp_player_mgr.cpp

// Line 17: range 000000000DED023E-000000000DED07A1
int32_t __cdecl MpPlayerMgr::updateMpPlayer(MpPlayerMgr *const this, proto::UpdateMpStatusNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // ecx
  proto::OnlinePlayerInfo *v6; // rax
  proto::OnlinePlayerInfo *v7; // rax
  bool is_only_mp_with_ps_player; // dl
  proto::PlatformType v9; // ecx
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  const std::string *v15; // rax
  int v16; // r14d
  std::unordered_map<std::string,unsigned int>::mapped_type *v17; // rax
  _DWORD *v18; // rdx
  int v19; // r12d
  std::unordered_map<std::string,unsigned int>::mapped_type *v20; // rax
  _DWORD *v21; // rdx
  int32_t result; // eax
  unsigned __int64 val; // [rsp+10h] [rbp-E0h] BYREF
  MpOnlinePlayerInfo *player_info; // [rsp+18h] [rbp-D8h]
  const std::string *last_psn_id; // [rsp+20h] [rbp-D0h]
  const std::string *last_online_id; // [rsp+28h] [rbp-C8h]
  const std::string *new_psn_id; // [rsp+30h] [rbp-C0h]
  const std::string *new_online_id; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-B0h] BYREF
  std::string output; // [rsp+60h] [rbp-90h] BYREF
  char v31[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:18";
  *(_QWORD *)(v2 + 16) = MpPlayerMgr::updateMpPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::UpdateMpStatusNotify::uid(notify);
  player_info = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::operator[](
                  &this->mp_player_map,
                  (const std::unordered_map<unsigned int,MpOnlinePlayerInfo>::key_type *)(v2 + 32));
  last_psn_id = proto::OnlinePlayerInfo::psn_id[abi:cxx11](&player_info->online_player_info);
  last_online_id = proto::OnlinePlayerInfo::online_id[abi:cxx11](&player_info->online_player_info);
  v5 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)player_info >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(player_info);
  }
  player_info->uid = v5;
  v6 = proto::UpdateMpStatusNotify::mutable_online_player_info(notify);
  v7 = std::move<proto::OnlinePlayerInfo &>(v6);
  proto::OnlinePlayerInfo::operator=(&player_info->online_player_info, v7);
  is_only_mp_with_ps_player = proto::UpdateMpStatusNotify::is_only_mp_with_ps_player(notify);
  if ( *(char *)(((unsigned __int64)&player_info->is_only_mp_with_ps_player >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&player_info->is_only_mp_with_ps_player);
  player_info->is_only_mp_with_ps_player = is_only_mp_with_ps_player;
  v9 = proto::UpdateMpStatusNotify::platform_type(notify);
  if ( *(_BYTE *)(((unsigned __int64)&player_info->platform_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)player_info + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&player_info->platform_type >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_store4(&player_info->platform_type);
  }
  player_info->platform_type = v9;
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/mp/mp_player_mgr.cpp",
    "updateMpPlayer",
    29);
  v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v29, (const char (*)[15])"[MP] map_size:");
  val = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::size(&this->mp_player_map);
  v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
  v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v11, (const char (*)[21])" updateMpPlayer uid:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
  v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" info:");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&output, &player_info->online_player_info);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &output);
  std::string::~string(&output);
  common::milog::MiLogStream::~MiLogStream(&v29);
  v15 = proto::OnlinePlayerInfo::online_id[abi:cxx11](&player_info->online_player_info);
  if ( (unsigned __int8)std::string::empty(v15) )
    common::tools::RandomSet<unsigned int>::insert(&this->uid_random_set_, *(_DWORD *)(v2 + 32));
  else
    common::tools::RandomSet<unsigned int>::insert(&this->ps_uid_random_set_, *(_DWORD *)(v2 + 32));
  new_psn_id = proto::OnlinePlayerInfo::psn_id[abi:cxx11](&player_info->online_player_info);
  if ( std::operator!=<char>(last_psn_id, new_psn_id) )
  {
    std::unordered_map<std::string,unsigned int>::erase(&this->psn_id_map, last_psn_id);
    if ( (unsigned __int8)std::string::empty(new_psn_id) != 1 )
    {
      v16 = *(_DWORD *)(v2 + 32);
      v17 = std::unordered_map<std::string,unsigned int>::operator[](&this->psn_id_map, new_psn_id);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v17);
      }
      *v18 = v16;
    }
  }
  new_online_id = proto::OnlinePlayerInfo::online_id[abi:cxx11](&player_info->online_player_info);
  if ( std::operator!=<char>(last_online_id, new_online_id) )
  {
    std::unordered_map<std::string,unsigned int>::erase(&this->online_id_map, last_online_id);
    if ( (unsigned __int8)std::string::empty(new_online_id) )
    {
      v19 = *(_DWORD *)(v2 + 32);
      v20 = std::unordered_map<std::string,unsigned int>::operator[](&this->online_id_map, new_online_id);
      v21 = v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v20);
      }
      *v21 = v19;
    }
  }
  result = 0;
  if ( v31 == (char *)v2 )
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

// Line 65: range 000000000DED07A2-000000000DED0ABC
void __fastcall MpPlayerMgr::eraseMpPlayer(MpPlayerMgr *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::pointer v5; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::pointer v7; // rax
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,MpOnlinePlayerInfo>,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  const std::string *last_psn_id; // [rsp+20h] [rbp-C0h]
  const std::string *last_online_id; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 uid:64 64 8 7 iter:66";
  *(_QWORD *)(v2 + 16) = MpPlayerMgr::eraseMpPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  *(std::unordered_map<unsigned int,MpOnlinePlayerInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::find(
                                                                                  &this->mp_player_map,
                                                                                  (const std::unordered_map<unsigned int,MpOnlinePlayerInfo>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,MpOnlinePlayerInfo>::end(&this->mp_player_map)._M_cur;
  if ( !std::__detail::operator==<std::pair<unsigned int const,MpOnlinePlayerInfo>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MpOnlinePlayerInfo>,false> *)(v2 + 64),
          &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false> *const)(v2 + 64));
    last_psn_id = proto::OnlinePlayerInfo::psn_id[abi:cxx11](&v5->second.online_player_info);
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false> *const)(v2 + 64));
    last_online_id = proto::OnlinePlayerInfo::online_id[abi:cxx11](&v6->second.online_player_info);
    if ( (unsigned __int8)std::string::empty(last_psn_id) != 1 )
      std::unordered_map<std::string,unsigned int>::erase(&this->psn_id_map, last_psn_id);
    if ( (unsigned __int8)std::string::empty(last_online_id) != 1 )
      std::unordered_map<std::string,unsigned int>::erase(&this->online_id_map, last_online_id);
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,MpOnlinePlayerInfo>,false,false> *const)(v2 + 64));
    v8 = proto::OnlinePlayerInfo::online_id[abi:cxx11](&v7->second.online_player_info);
    if ( (unsigned __int8)std::string::empty(v8) )
      common::tools::RandomSet<unsigned int>::erase(&this->uid_random_set_, *(_DWORD *)(v2 + 48));
    else
      common::tools::RandomSet<unsigned int>::erase(&this->ps_uid_random_set_, *(_DWORD *)(v2 + 48));
    std::unordered_map<unsigned int,MpOnlinePlayerInfo>::erase(
      &this->mp_player_map,
      *(std::unordered_map<unsigned int,MpOnlinePlayerInfo>::iterator *)(v2 + 64));
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/mp/mp_player_mgr.cpp",
      "eraseMpPlayer",
      95);
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v15, (const char (*)[15])"[MP] map_size:");
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,MpOnlinePlayerInfo>,false>::__node_type *)std::unordered_map<unsigned int,MpOnlinePlayerInfo>::size(&this->mp_player_map);
    v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)&__y);
    v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v10,
            (const char (*)[20])" eraseMpPlayer uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
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

// Line 99: range 000000000DED0ABE-000000000DED0C03
uint32_t __cdecl MpPlayerMgr::findUidByPsnId(MpPlayerMgr *const this, const std::string *psn_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>::pointer v5; // rax
  uint32_t result; // eax
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:100";
  *(_QWORD *)(v2 + 16) = MpPlayerMgr::findUidByPsnId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,unsigned int>::iterator *)(v2 + 32) = std::unordered_map<std::string,unsigned int>::find(
                                                                           &this->psn_id_map,
                                                                           psn_id);
  __y._M_cur = std::unordered_map<std::string,unsigned int>::end(&this->psn_id_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 32),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) <= 3 )
    {
      v5 = (std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>::pointer)__asan_report_load4(&v5->second);
    }
    result = v5->second;
  }
  else
  {
    result = 0;
  }
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

// Line 109: range 000000000DED0C04-000000000DED0D49
uint32_t __cdecl MpPlayerMgr::findUidByOnlineId(MpPlayerMgr *const this, const std::string *online_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>::pointer v5; // rax
  uint32_t result; // eax
  std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> __y; // [rsp+18h] [rbp-68h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:110";
  *(_QWORD *)(v2 + 16) = MpPlayerMgr::findUidByOnlineId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::unordered_map<std::string,unsigned int>::iterator *)(v2 + 32) = std::unordered_map<std::string,unsigned int>::find(
                                                                           &this->online_id_map,
                                                                           online_id);
  __y._M_cur = std::unordered_map<std::string,unsigned int>::end(&this->online_id_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 32),
         &__y) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) <= 3 )
    {
      v5 = (std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>::pointer)__asan_report_load4(&v5->second);
    }
    result = v5->second;
  }
  else
  {
    result = 0;
  }
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
