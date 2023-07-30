// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_candidate_team.hpp

// Line 19: range 00000000155EC98A-00000000155ECB5B
void __cdecl DungeonCandidateTeam::notifyToPlayers<proto::DungeonCandidateTeamDismissNotify>(
        DungeonCandidateTeam *const this,
        const proto::DungeonCandidateTeamDismissNotify *notify,
        uint32_t exclude_player_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  Player *v7; // rdx
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+30h] [rbp-70h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+38h] [rbp-68h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:27";
  *(_QWORD *)(v3 + 16) = DungeonCandidateTeam::notifyToPlayers<proto::DungeonCandidateTeamDismissNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    if ( !exclude_player_uid || exclude_player_uid != DungeonCandidateTeamPlayer::getPlayerUid(candidate_player) )
    {
      DungeonCandidateTeamPlayer::getPlayerPtr((DungeonCandidateTeamPlayer *const)(v3 + 32));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, notify);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    }
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 19: range 00000000155EC7B8-00000000155EC989
void __cdecl DungeonCandidateTeam::notifyToPlayers<proto::DungeonCandidateTeamPlayerLeaveNotify>(
        DungeonCandidateTeam *const this,
        const proto::DungeonCandidateTeamPlayerLeaveNotify *notify,
        uint32_t exclude_player_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  Player *v7; // rdx
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+30h] [rbp-70h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+38h] [rbp-68h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:27";
  *(_QWORD *)(v3 + 16) = DungeonCandidateTeam::notifyToPlayers<proto::DungeonCandidateTeamPlayerLeaveNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    if ( !exclude_player_uid || exclude_player_uid != DungeonCandidateTeamPlayer::getPlayerUid(candidate_player) )
    {
      DungeonCandidateTeamPlayer::getPlayerPtr((DungeonCandidateTeamPlayer *const)(v3 + 32));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, notify);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    }
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1383: range 00000000155EC5E6-00000000155EC7B7
void __cdecl DungeonCandidateTeam::notifyToPlayers<proto::DungeonCandidateTeamInfoNotify>(
        DungeonCandidateTeam *const this,
        const proto::DungeonCandidateTeamInfoNotify *notify,
        uint32_t exclude_player_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  Player *v7; // rdx
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+30h] [rbp-70h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+38h] [rbp-68h]
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 player_ptr:27";
  *(_QWORD *)(v3 + 16) = DungeonCandidateTeam::notifyToPlayers<proto::DungeonCandidateTeamInfoNotify>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    if ( !exclude_player_uid || exclude_player_uid != DungeonCandidateTeamPlayer::getPlayerUid(candidate_player) )
    {
      DungeonCandidateTeamPlayer::getPlayerPtr((DungeonCandidateTeamPlayer *const)(v3 + 32));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Player::sendProto(v7, notify);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    }
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
