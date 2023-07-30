// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_scene_team.cpp

// Line 18: range 000000001556DD84-000000001556DF8F
std::vector<long unsigned int> *__fastcall DungeonSceneTeam::findCandidateTeamAvatarVec(
        std::vector<long unsigned int> *retstr,
        DungeonSceneTeam *const this,
        uint32_t player_uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<long unsigned int> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<long unsigned int> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 player_uid:17 64 8 5 it:19";
  *(_QWORD *)(v3 + 16) = DungeonSceneTeam::findCandidateTeamAvatarVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = player_uid;
  *(std::unordered_map<unsigned int,std::vector<long unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned long>>::find(
                                                                                              &this->candidate_team_player_map_,
                                                                                              (const std::unordered_map<unsigned int,std::vector<long unsigned int>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::vector<unsigned long>>::end(&this->candidate_team_player_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned long>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<long unsigned int> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned long>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<long unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned long>::vector(retstr, &v6->second);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<unsigned long>::vector(retstr);
  }
  if ( v10 == (char *)v3 )
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
  return retstr;
};

// Line 29: range 000000001556DF90-000000001556E076
void __fastcall DungeonSceneTeam::setCandidateTeamPlayerAvatarVec(
        DungeonSceneTeam *const this,
        uint32_t player_uid,
        const std::vector<long unsigned int> *avatar_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::vector<long unsigned int> *v6; // rax
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 player_uid:28";
  *(_QWORD *)(v3 + 16) = DungeonSceneTeam::setCandidateTeamPlayerAvatarVec;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = player_uid;
  v6 = std::unordered_map<unsigned int,std::vector<unsigned long>>::operator[](
         &this->candidate_team_player_map_,
         (const std::unordered_map<unsigned int,std::vector<long unsigned int>>::key_type *)(v3 + 32));
  std::vector<unsigned long>::operator=(v6, avatar_vec);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 34: range 000000001556E078-000000001556E0C1
int32_t __cdecl DungeonSceneTeam::playerEnter(DungeonSceneTeam *const this, Player *player)
{
  SceneTeam *v2; // rdx

  if ( std::operator!=<SceneTeam>(&this->scene_team_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    SceneTeam::onPlayerEnter(v2, player);
  }
  return 0;
};

// Line 43: range 000000001556E0C2-000000001556E108
int32_t __cdecl DungeonSceneTeam::playerLeave(DungeonSceneTeam *const this, uint32_t player_uid)
{
  SceneTeam *v2; // rax

  if ( std::operator!=<SceneTeam>(&this->scene_team_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    SceneTeam::onPlayerLeave(v2, player_uid);
  }
  return 0;
};

// Line 52: range 000000001556E10A-000000001556E1F3
void __cdecl DungeonSceneTeam::getTeamUidSet(const DungeonSceneTeam *const this, std::set<unsigned int> *uid_set)
{
  const std::pair<unsigned int const,std::vector<long unsigned int> > *v2; // rax
  std::unordered_map<unsigned int,std::vector<long unsigned int>>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,std::vector<long unsigned int>>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  const std::unordered_map<unsigned int,std::vector<long unsigned int>> *__for_range; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<long unsigned int> > >::type *uid; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<long unsigned int> > >::type *_; // [rsp+38h] [rbp-38h]
  std::pair<unsigned int const,std::vector<long unsigned int> > __in; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->candidate_team_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<unsigned long>>::begin(&this->candidate_team_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<unsigned long>>::end(&this->candidate_team_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned long>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v2 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned long>>,false,false>::operator*(&__for_begin);
    std::pair<unsigned int const,std::vector<unsigned long>>::pair(&__in, v2);
    uid = std::get<0ul,unsigned int const,std::vector<unsigned long>>(&__in);
    _ = std::get<1ul,unsigned int const,std::vector<unsigned long>>(&__in);
    std::set<unsigned int>::insert(uid_set, uid);
    std::pair<unsigned int const,std::vector<unsigned long>>::~pair(&__in);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned long>>,false,false>::operator++(&__for_begin);
  }
};
