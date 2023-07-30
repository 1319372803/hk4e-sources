// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_mgr.hpp

// Line 31: range 0000000014AE1C96-0000000014AE1E83
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::AvatarFollowRouteNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::AvatarFollowRouteNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::AvatarFollowRouteNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000017ADA856-0000000017ADAA43
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::EntityFightPropChangeReasonNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::EntityFightPropChangeReasonNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::EntityFightPropChangeReasonNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000017AABFAE-0000000017AAC19B
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::EntityFightPropNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::EntityFightPropNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::EntityFightPropNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000017AABDC0-0000000017AABFAD
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::EntityFightPropUpdateNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::EntityFightPropUpdateNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::EntityFightPropUpdateNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000014FD96E8-0000000014FD98D5
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::EntityPropNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::EntityPropNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::EntityPropNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000017722A54-0000000017722C41
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::FoundationNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::FoundationNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::FoundationNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 00000000133E1AF2-00000000133E1CDF
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::GadgetCustomTreeInfoNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::GadgetCustomTreeInfoNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::GadgetCustomTreeInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 000000001775E726-000000001775E913
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::GadgetPlayStartNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::GadgetPlayStartNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::GadgetPlayStartNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 000000001775E914-000000001775EB01
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::GadgetPlayStopNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::GadgetPlayStopNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::GadgetPlayStopNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 000000001775E538-000000001775E725
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::GadgetPlayUidOpNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::GadgetPlayUidOpNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::GadgetPlayUidOpNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 000000001775C0C4-000000001775C2B1
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::GadgetStateNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::GadgetStateNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::GadgetStateNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 000000001779038E-000000001779057B
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::GadgetTalkChangeNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::GadgetTalkChangeNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::GadgetTalkChangeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 00000000172D33E8-00000000172D35D5
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::MonsterPointArrayRouteUpdateNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::MonsterPointArrayRouteUpdateNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::MonsterPointArrayRouteUpdateNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 00000000172D29C6-00000000172D2BB3
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::MonsterSummonTagNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::MonsterSummonTagNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::MonsterSummonTagNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000014719320-000000001471950D
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::PlatformChangeRouteNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::PlatformChangeRouteNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::PlatformChangeRouteNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000014718EE4-00000000147190D1
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::PlatformStopRouteNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::PlatformStopRouteNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::PlatformStopRouteNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000015B012FC-0000000015B014E9
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::SceneAudioNotify const>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        const proto::SceneAudioNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::SceneAudioNotify const>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 00000000172D16F2-00000000172D18DF
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::SceneEntityAppearNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::SceneEntityAppearNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::SceneEntityAppearNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 00000000172D1504-00000000172D16F1
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::SceneEntityDisappearNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::SceneEntityDisappearNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::SceneEntityDisappearNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000017760DA0-0000000017760F8D
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::SealBattleBeginNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::SealBattleBeginNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::SealBattleBeginNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000017760F8E-000000001776117B
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::SealBattleEndNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::SealBattleEndNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::SealBattleEndNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 00000000177627EE-00000000177629DB
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::SealBattleProgressNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::SealBattleProgressNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::SealBattleProgressNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 00000000139A7492-00000000139A767F
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::TriggerCreateGadgetToEquipPartNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::TriggerCreateGadgetToEquipPartNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::TriggerCreateGadgetToEquipPartNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 31: range 0000000015DD54A0-0000000015DD568D
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::WorktopOptionNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::WorktopOptionNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::WorktopOptionNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 45: range 0000000013206E74-00000000132070BC
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::ClientAbilitiesInitFinishCombineNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        std::shared_ptr<const proto::ClientAbilitiesInitFinishCombineNotify> *p_proto_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // r14
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+40h] [rbp-80h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::ClientAbilitiesInitFinishCombineNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::ClientAbilitiesInitFinishCombineNotify const,void>(
        &p_msg_ptr,
        p_proto_ptr);
      Player::sendMessage(v8, &p_msg_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 45: range 00000000132074D8-0000000013207720
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::ClientAbilityChangeNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        std::shared_ptr<const proto::ClientAbilityChangeNotify> *p_proto_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // r14
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+40h] [rbp-80h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::ClientAbilityChangeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::ClientAbilityChangeNotify const,void>(
        &p_msg_ptr,
        p_proto_ptr);
      Player::sendMessage(v8, &p_msg_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 196: range 0000000014718A90-0000000014718C7D
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::PlatformStartRouteNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::PlatformStartRouteNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::PlatformStartRouteNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 584: range 0000000014FC8C5A-0000000014FC8E47
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::ScenePlayBattleUidOpNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::ScenePlayBattleUidOpNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::ScenePlayBattleUidOpNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 764: range 000000001775F410-000000001775F5FD
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::GadgetPlayDataNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::GadgetPlayDataNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::GadgetPlayDataNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 1459: range 0000000013206498-00000000132066E0
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::ClientAbilityInitFinishNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        std::shared_ptr<const proto::ClientAbilityInitFinishNotify> *p_proto_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // r14
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  std::shared_ptr<const google::protobuf::Message> p_msg_ptr; // [rsp+40h] [rbp-80h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:49";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::ClientAbilityInitFinishNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::shared_ptr<google::protobuf::Message const>::shared_ptr<proto::ClientAbilityInitFinishNotify const,void>(
        &p_msg_ptr,
        p_proto_ptr);
      Player::sendMessage(v8, &p_msg_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&p_msg_ptr);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v15 == (char *)v3 )
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

// Line 1590: range 0000000014FD6E3E-0000000014FD702B
int32_t __cdecl PlayerMgr::sendToPlayerList<proto::LifeStateChangeNotify>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        proto::LifeStateChangeNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:35";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<proto::LifeStateChangeNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Player::sendProto(v8, proto);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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
