// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/dungeon_candidate_team.cpp

// Line 28: range 0000000015560704-000000001556071E
void __cdecl DungeonCandidateTeamAvatar::DungeonCandidateTeamAvatar(DungeonCandidateTeamAvatar *const this)
{
  std::weak_ptr<Avatar>::weak_ptr(&this->avatar_wtr_);
};

// Line 32: range 0000000015560720-000000001556073A
void __cdecl DungeonCandidateTeamAvatar::~DungeonCandidateTeamAvatar(DungeonCandidateTeamAvatar *const this)
{
  std::weak_ptr<Avatar>::~weak_ptr(&this->avatar_wtr_);
};

// Line 38: range 000000001556073C-00000000155607F0
int32_t __cdecl DungeonCandidateTeamAvatar::setAvatarInfo(
        DungeonCandidateTeamAvatar *const this,
        AvatarPtr *p_avatar_ptr)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Avatar>(p_avatar_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "setAvatarInfo",
      41);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v3, (const char (*)[16])"avatar_ptr null");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return -1;
  }
  else
  {
    std::weak_ptr<Avatar>::operator=<Avatar>(&this->avatar_wtr_, p_avatar_ptr);
    return 0;
  }
};

// Line 49: range 00000000155607F2-00000000155608FF
uint64_t __cdecl DungeonCandidateTeamAvatar::getAvatarGuid(DungeonCandidateTeamAvatar *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint64_t Guid; // r14
  uint64_t result; // rax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 avatar_ptr:50";
  *(_QWORD *)(v1 + 16) = DungeonCandidateTeamAvatar::getAvatarGuid;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  DungeonCandidateTeamAvatar::getAvatarPtr((DungeonCandidateTeamAvatar *const)(v1 + 32));
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Guid = Avatar::getGuid(v4);
  }
  else
  {
    Guid = 0LL;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 32));
  result = Guid;
  if ( v7 == (char *)v1 )
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

// Line 59: range 0000000015560900-0000000015560A07
int32_t __cdecl DungeonCandidateTeamPlayer::setPlayerInfo(
        DungeonCandidateTeamPlayer *const this,
        PlayerPtr *p_player_ptr)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Uid; // edx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "setPlayerInfo",
      62);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])"player_ptr null");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Uid = Player::getUid(v3);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(this);
    }
    this->player_uid_ = Uid;
    std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, p_player_ptr);
    return 0;
  }
};

// Line 72: range 0000000015560A08-0000000015560A2F
void __cdecl DungeonCandidateTeamPlayer::setAvatarCount(DungeonCandidateTeamPlayer *const this, uint32_t avatar_count)
{
  std::vector<DungeonCandidateTeamAvatar>::resize(&this->avatar_vec_, avatar_count);
};

// Line 77: range 0000000015560A30-0000000015560E85
int32_t __cdecl DungeonCandidateTeamPlayer::addAvatar(DungeonCandidateTeamPlayer *const this, AvatarPtr *p_avatar_ptr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int v8; // r15d
  common::milog::MiLogStream *v9; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  unsigned __int64 val; // [rsp+38h] [rbp-B8h] BYREF
  std::vector<DungeonCandidateTeamAvatar> *__for_range; // [rsp+40h] [rbp-B0h]
  DungeonCandidateTeamAvatar *candidate_avatar; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Avatar> v19; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-90h] BYREF
  char v21[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 23 candidate_avatar_ptr:85";
  *(_QWORD *)(v3 + 16) = DungeonCandidateTeamPlayer::addAvatar;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( std::operator==<Avatar>(p_avatar_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "addAvatar",
      80);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v20, (const char (*)[20])off_25803C00);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v2 = -1;
  }
  else
  {
    __for_range = &this->avatar_vec_;
    __for_begin._M_current = std::vector<DungeonCandidateTeamAvatar>::begin(&this->avatar_vec_)._M_current;
    __for_end._M_current = std::vector<DungeonCandidateTeamAvatar>::end(&this->avatar_vec_)._M_current;
    while ( __gnu_cxx::operator!=<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>(
              &__for_begin,
              &__for_end) )
    {
      candidate_avatar = __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator*(&__for_begin);
      DungeonCandidateTeamAvatar::getAvatarPtr((DungeonCandidateTeamAvatar *const)(v3 + 32));
      if ( std::operator==<Avatar,Avatar>(p_avatar_ptr, (const std::shared_ptr<Avatar> *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_candidate_team.cpp",
          "addAvatar",
          88);
        v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v20, (const char (*)[25])off_25803C40);
        v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
        val = Avatar::getGuid(v7);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
        common::milog::MiLogStream::~MiLogStream(&v20);
        v2 = -1;
        v8 = 0;
      }
      else if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 32), 0LL) )
      {
        std::shared_ptr<Avatar>::shared_ptr(&v19, p_avatar_ptr);
        v2 = DungeonCandidateTeamAvatar::setAvatarInfo(candidate_avatar, &v19);
        std::shared_ptr<Avatar>::~shared_ptr(&v19);
        v8 = 0;
      }
      else
      {
        v8 = 1;
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
      if ( v8 != 1 )
        goto LABEL_16;
      __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "addAvatar",
      96);
    v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v20, (const char (*)[26])off_25803C80);
    v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    val = Avatar::getGuid(v10);
    v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &val);
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" player_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->player_uid_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v2 = -1;
  }
LABEL_16:
  result = v2;
  if ( v21 == (char *)v3 )
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

// Line 102: range 0000000015560E86-000000001556106A
bool __cdecl DungeonCandidateTeamPlayer::delAvatar(DungeonCandidateTeamPlayer *const this, uint64_t avatar_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool result; // al
  uint32_t old_size; // [rsp+1Ch] [rbp-84h]
  __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar*,std::vector<DungeonCandidateTeamAvatar> > __rhs; // [rsp+20h] [rbp-80h] BYREF
  DungeonCandidateTeamAvatar *candidate_avatar; // [rsp+28h] [rbp-78h]
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 it:108";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeamPlayer::delAvatar;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( avatar_guid )
  {
    old_size = std::vector<DungeonCandidateTeamAvatar>::size(&this->avatar_vec_);
    *(std::vector<DungeonCandidateTeamAvatar>::iterator *)(v2 + 32) = std::vector<DungeonCandidateTeamAvatar>::begin(&this->avatar_vec_);
    while ( 1 )
    {
      __rhs._M_current = std::vector<DungeonCandidateTeamAvatar>::end(&this->avatar_vec_)._M_current;
      if ( !__gnu_cxx::operator!=<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>(
              (const __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar*,std::vector<DungeonCandidateTeamAvatar> > *)(v2 + 32),
              &__rhs) )
        break;
      candidate_avatar = __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator*((const __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar*,std::vector<DungeonCandidateTeamAvatar> > *const)(v2 + 32));
      if ( avatar_guid == DungeonCandidateTeamAvatar::getAvatarGuid(candidate_avatar) )
      {
        __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar const*,std::vector<DungeonCandidateTeamAvatar>>::__normal_iterator<DungeonCandidateTeamAvatar*>(
          (__gnu_cxx::__normal_iterator<const DungeonCandidateTeamAvatar*,std::vector<DungeonCandidateTeamAvatar> > *const)&__rhs,
          (const __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar*,std::vector<DungeonCandidateTeamAvatar> > *)(v2 + 32));
        std::vector<DungeonCandidateTeamAvatar>::erase(
          &this->avatar_vec_,
          (std::vector<DungeonCandidateTeamAvatar>::const_iterator)__rhs._M_current);
        break;
      }
      __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator++((__gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar*,std::vector<DungeonCandidateTeamAvatar> > *const)(v2 + 32));
    }
    if ( std::vector<DungeonCandidateTeamAvatar>::size(&this->avatar_vec_) == old_size )
    {
      result = 0;
    }
    else
    {
      DungeonCandidateTeamPlayer::setAvatarCount(this, old_size);
      result = 1;
    }
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
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

// Line 129: range 000000001556106C-0000000015561271
int32_t __cdecl DungeonCandidateTeamPlayer::setAvatarVec(
        DungeonCandidateTeamPlayer *const this,
        std::vector<std::shared_ptr<Avatar>> *new_avatar_vec)
{
  common::milog::MiLogStream *v2; // rdx
  std::vector<std::shared_ptr<Avatar>>::size_type v4; // rbx
  std::vector<DungeonCandidateTeamAvatar>::size_type v5; // rdx
  const std::shared_ptr<Avatar> *v7; // rax
  DungeonCandidateTeamAvatar *v8; // rax
  DungeonCandidateTeamAvatar *v9; // rbx
  const std::shared_ptr<Avatar> *v10; // rax
  size_t i; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  if ( std::vector<std::shared_ptr<Avatar>>::empty(new_avatar_vec) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "setAvatarVec",
      132);
    v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v13,
           (const char (*)[34])"new_avatar_vec empty player_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->player_uid_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    v4 = std::vector<std::shared_ptr<Avatar>>::size(new_avatar_vec);
    if ( v4 != std::vector<DungeonCandidateTeamAvatar>::size(&this->avatar_vec_) )
    {
      v5 = std::vector<DungeonCandidateTeamAvatar>::size(&this->avatar_vec_);
      std::vector<std::shared_ptr<Avatar>>::resize(new_avatar_vec, v5);
    }
    for ( i = 0LL;
          i < std::vector<DungeonCandidateTeamAvatar>::size(&this->avatar_vec_)
       && i < std::vector<std::shared_ptr<Avatar>>::size(new_avatar_vec);
          ++i )
    {
      v7 = std::vector<std::shared_ptr<Avatar>>::operator[](new_avatar_vec, i);
      if ( std::operator==<Avatar>(v7, 0LL) )
      {
        v8 = std::vector<DungeonCandidateTeamAvatar>::operator[](&this->avatar_vec_, i);
        DungeonCandidateTeamAvatar::resetAvatarInfo(v8);
      }
      else
      {
        v9 = std::vector<DungeonCandidateTeamAvatar>::operator[](&this->avatar_vec_, i);
        v10 = std::vector<std::shared_ptr<Avatar>>::operator[](new_avatar_vec, i);
        std::shared_ptr<Avatar>::shared_ptr(&p_avatar_ptr, v10);
        DungeonCandidateTeamAvatar::setAvatarInfo(v9, &p_avatar_ptr);
        std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
      }
    }
    return 0;
  }
};

// Line 154: range 0000000015561272-000000001556132A
uint32_t __cdecl DungeonCandidateTeamPlayer::getEmptySlotCount(DungeonCandidateTeamPlayer *const this)
{
  bool v1; // bl
  uint32_t empty_slot_count; // [rsp+1Ch] [rbp-44h]
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  std::vector<DungeonCandidateTeamAvatar> *__for_range; // [rsp+30h] [rbp-30h]
  DungeonCandidateTeamAvatar *candidate_avatar; // [rsp+38h] [rbp-28h]
  DungeonCandidateTeamAvatar v8; // [rsp+40h] [rbp-20h] BYREF

  empty_slot_count = 0;
  __for_range = &this->avatar_vec_;
  __for_begin._M_current = std::vector<DungeonCandidateTeamAvatar>::begin(&this->avatar_vec_)._M_current;
  __for_end._M_current = std::vector<DungeonCandidateTeamAvatar>::end(&this->avatar_vec_)._M_current;
  while ( __gnu_cxx::operator!=<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>(
            &__for_begin,
            &__for_end) )
  {
    candidate_avatar = __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator*(&__for_begin);
    DungeonCandidateTeamAvatar::getAvatarPtr(&v8);
    v1 = std::operator==<Avatar>((const std::shared_ptr<Avatar> *)&v8, 0LL);
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)&v8);
    if ( v1 )
      ++empty_slot_count;
    __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator++(&__for_begin);
  }
  return empty_slot_count;
};

// Line 168: range 000000001556132C-00000000155614B2
std::unordered_set<long unsigned int> *__cdecl DungeonCandidateTeamPlayer::getAvatarGuidSet(
        std::unordered_set<long unsigned int> *retstr,
        DungeonCandidateTeamPlayer *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::vector<DungeonCandidateTeamAvatar> *__for_range; // [rsp+20h] [rbp-70h]
  DungeonCandidateTeamAvatar *candidate_avatar; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 15 avatar_guid:172";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeamPlayer::getAvatarGuidSet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::unordered_set<unsigned long>::unordered_set(retstr);
  __for_range = &this->avatar_vec_;
  __for_begin._M_current = std::vector<DungeonCandidateTeamAvatar>::begin(&this->avatar_vec_)._M_current;
  __for_end._M_current = std::vector<DungeonCandidateTeamAvatar>::end(&this->avatar_vec_)._M_current;
  while ( __gnu_cxx::operator!=<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>(
            &__for_begin,
            &__for_end) )
  {
    candidate_avatar = __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator*(&__for_begin);
    *(_QWORD *)(v2 + 32) = DungeonCandidateTeamAvatar::getAvatarGuid(candidate_avatar);
    if ( *(_QWORD *)(v2 + 32) )
      std::unordered_set<unsigned long>::insert(
        retstr,
        (const std::unordered_set<long unsigned int>::value_type *)(v2 + 32));
    __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator++(&__for_begin);
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
  return retstr;
};

// Line 183: range 00000000155614B4-0000000015561653
void __cdecl DungeonCandidateTeamPlayer::getAvatarPtrVec(
        DungeonCandidateTeamPlayer *const this,
        std::vector<std::shared_ptr<Avatar>> *avatar_ptr_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::vector<DungeonCandidateTeamAvatar> *__for_range; // [rsp+20h] [rbp-70h]
  DungeonCandidateTeamAvatar *candidate_avatar; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:187";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeamPlayer::getAvatarPtrVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::vector<std::shared_ptr<Avatar>>::clear(avatar_ptr_vec);
  __for_range = &this->avatar_vec_;
  __for_begin._M_current = std::vector<DungeonCandidateTeamAvatar>::begin(&this->avatar_vec_)._M_current;
  __for_end._M_current = std::vector<DungeonCandidateTeamAvatar>::end(&this->avatar_vec_)._M_current;
  while ( __gnu_cxx::operator!=<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>(
            &__for_begin,
            &__for_end) )
  {
    candidate_avatar = __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator*(&__for_begin);
    DungeonCandidateTeamAvatar::getAvatarPtr((DungeonCandidateTeamAvatar *const)(v2 + 32));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
      std::vector<std::shared_ptr<Avatar>>::push_back(
        avatar_ptr_vec,
        (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v2 + 32));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator++(&__for_begin);
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 196: range 0000000015561654-0000000015561982
int32_t __cdecl DungeonCandidateTeamPlayer::toClient(
        DungeonCandidateTeamPlayer *const this,
        proto::DungeonCandidateTeamInfoNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  proto::DungeonCandidateTeamPlayerState state; // r14d
  proto::DungeonCandidateTeamPlayerState *v6; // rax
  proto::DungeonCandidateTeamPlayerState *v7; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::AvatarInfo *); // r15
  proto::AvatarInfo *v12; // rax
  int32_t result; // eax
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  google::protobuf::Map<unsigned int,proto::DungeonCandidateTeamPlayerState> *player_state_map; // [rsp+30h] [rbp-90h]
  std::vector<DungeonCandidateTeamAvatar> *__for_range; // [rsp+38h] [rbp-88h]
  DungeonCandidateTeamAvatar *condidate_avatar; // [rsp+40h] [rbp-80h]
  proto::DungeonCandidateTeamAvatar *pb_avatar; // [rsp+48h] [rbp-78h]
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 avatar_ptr:203";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeamPlayer::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  player_state_map = proto::DungeonCandidateTeamInfoNotify::mutable_player_state_map(notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  state = this->state_;
  v6 = google::protobuf::Map<unsigned int,proto::DungeonCandidateTeamPlayerState>::operator[](
         player_state_map,
         &this->player_uid_);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = state;
  __for_range = &this->avatar_vec_;
  __for_begin._M_current = std::vector<DungeonCandidateTeamAvatar>::begin(&this->avatar_vec_)._M_current;
  __for_end._M_current = std::vector<DungeonCandidateTeamAvatar>::end(&this->avatar_vec_)._M_current;
  while ( __gnu_cxx::operator!=<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>(
            &__for_begin,
            &__for_end) )
  {
    condidate_avatar = __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator*(&__for_begin);
    pb_avatar = proto::DungeonCandidateTeamInfoNotify::add_avatar_list(notify);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    proto::DungeonCandidateTeamAvatar::set_player_uid(pb_avatar, this->player_uid_);
    DungeonCandidateTeamAvatar::getAvatarPtr((DungeonCandidateTeamAvatar *const)(v2 + 32));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v8);
      v10 = *(_QWORD *)v9->baseclass_0 + 472LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(*(_QWORD *)v9->baseclass_0 + 472LL);
      v11 = *(void (__fastcall **)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::AvatarInfo *))v10;
      v12 = proto::DungeonCandidateTeamAvatar::mutable_avatar_info(pb_avatar);
      v11(v9, v12);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v20 == (char *)v2 )
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

// Line 213: range 0000000015561984-0000000015561D39
std::string *__cdecl DungeonCandidateTeamPlayer::getDesc[abi:cxx11](
        std::string *retstr,
        DungeonCandidateTeamPlayer *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 Guid; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned int AvatarId; // eax
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<DungeonCandidateTeamAvatar> *__for_range; // [rsp+20h] [rbp-A0h]
  DungeonCandidateTeamAvatar *candidate_avatar; // [rsp+28h] [rbp-98h]
  char v20[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 6 ss:214 64 16 24 candidate_avatar_ptr:218";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeamPlayer::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  __for_range = &this->avatar_vec_;
  __for_begin._M_current = std::vector<DungeonCandidateTeamAvatar>::begin(&this->avatar_vec_)._M_current;
  __for_end._M_current = std::vector<DungeonCandidateTeamAvatar>::end(&this->avatar_vec_)._M_current;
  while ( __gnu_cxx::operator!=<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>(
            &__for_begin,
            &__for_end) )
  {
    candidate_avatar = __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator*(&__for_begin);
    v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
           "player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->player_uid_);
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " state: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->state_);
    DungeonCandidateTeamAvatar::getAvatarPtr((DungeonCandidateTeamAvatar *const)(v2 + 64));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
    {
      v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
             (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
             " avatar_guid: ");
      v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Guid = Avatar::getGuid(v9);
      v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, Guid);
      v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, " avatar_id: ");
      v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      AvatarId = Avatar::getAvatarId(v13);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, AvatarId);
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
      "\n");
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
    __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v20 == (char *)v2 )
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
  return retstr;
};

// Line 230: range 0000000015561D3A-0000000015561DD0
void __cdecl DungeonCandidateTeamPlayer::resetAvatarWtrGM(DungeonCandidateTeamPlayer *const this, uint64_t avatar_guid)
{
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<DungeonCandidateTeamAvatar>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<DungeonCandidateTeamAvatar> *__for_range; // [rsp+20h] [rbp-10h]
  DungeonCandidateTeamAvatar *candidate_avatar; // [rsp+28h] [rbp-8h]

  __for_range = &this->avatar_vec_;
  __for_begin._M_current = std::vector<DungeonCandidateTeamAvatar>::begin(&this->avatar_vec_)._M_current;
  __for_end._M_current = std::vector<DungeonCandidateTeamAvatar>::end(&this->avatar_vec_)._M_current;
  while ( __gnu_cxx::operator!=<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>(
            &__for_begin,
            &__for_end) )
  {
    candidate_avatar = __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator*(&__for_begin);
    if ( avatar_guid == DungeonCandidateTeamAvatar::getAvatarGuid(candidate_avatar) )
      DungeonCandidateTeamAvatar::resetAvatarWtrGM(candidate_avatar);
    __gnu_cxx::__normal_iterator<DungeonCandidateTeamAvatar *,std::vector<DungeonCandidateTeamAvatar>>::operator++(&__for_begin);
  }
};

// Line 240: range 0000000015561DD2-0000000015561F03
void __cdecl DungeonCandidateTeam::DungeonCandidateTeam(DungeonCandidateTeam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_point_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entry_point_id_);
  }
  this->entry_point_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_type_);
  }
  this->match_type_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_limit_);
  }
  this->player_limit_ = 0;
  std::list<DungeonCandidateTeamPlayer>::list(&this->player_list_);
  DungeonCandidateInviteInfo::DungeonCandidateInviteInfo(&this->invite_info_);
};

// Line 244: range 0000000015561F04-0000000015561F32
void __cdecl DungeonCandidateTeam::~DungeonCandidateTeam(DungeonCandidateTeam *const this)
{
  DungeonCandidateInviteInfo::~DungeonCandidateInviteInfo(&this->invite_info_);
  std::list<DungeonCandidateTeamPlayer>::~list(&this->player_list_);
};

// Line 250: range 0000000015561F34-0000000015561F67
int32_t __cdecl DungeonCandidateTeam::init(DungeonCandidateTeam *const this)
{
  DungeonCandidateTeam::resetAll(this, 0, 0, 0, 0);
  return 0;
};

// Line 256: range 0000000015561F68-0000000015562299
void __cdecl DungeonCandidateTeam::resetAll(
        DungeonCandidateTeam *const this,
        uint32_t dungeon_id,
        uint32_t entry_point_id,
        uint32_t match_type,
        uint32_t player_limit)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 25 invite_vaild_time_sec:262";
  *(_QWORD *)(v5 + 16) = DungeonCandidateTeam::resetAll;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->dungeon_id_ = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_point_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entry_point_id_);
  }
  this->entry_point_id_ = entry_point_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_type_);
  }
  this->match_type_ = match_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->player_limit_);
  }
  this->player_limit_ = player_limit;
  std::list<DungeonCandidateTeamPlayer>::clear(&this->player_list_);
  *(_DWORD *)(v5 + 32) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  v9 = ConstValueExcelConfigMgr::findConstValue<unsigned int>(
         &v8->design_config.txt_config_mgr.const_value_config_mgr,
         CONST_VALUE_DUNGEON_CANDIDATE_INVITE_VAILD_TIME_SEC,
         (unsigned int *)(v5 + 32)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( v9 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "resetAll",
      265);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      &v14,
      (const char (*)[54])"dungeon candidate team invite void time config failed");
    common::milog::MiLogStream::~MiLogStream(&v14);
    *(_DWORD *)(v5 + 32) = 10;
  }
  DungeonCandidateInviteInfo::resetAll(&this->invite_info_, *(_DWORD *)(v5 + 32));
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 272: range 000000001556229A-0000000015562709
int32_t __cdecl DungeonCandidateTeam::addPlayer(DungeonCandidateTeam *const this, PlayerPtr *p_player_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t refreshed; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t Uid; // edx
  common::milog::MiLogStream *v8; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  std::shared_ptr<Player> v15; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 20 candidate_player:289";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeam::addPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "addPlayer",
      275);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v16, (const char (*)[18])" player_ptr null ");
    common::milog::MiLogStream::~MiLogStream(&v16);
    refreshed = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Uid = Player::getUid(v6);
    if ( DungeonCandidateTeam::hasPlayerUid(this, Uid) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "addPlayer",
        280);
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v16,
             (const char (*)[26])" already has player_uid: ");
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      val = Player::getUid(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      refreshed = -1;
    }
    else if ( DungeonCandidateTeam::isFull(this) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "addPlayer",
        285);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v16, (const char (*)[20])" player count full ");
      common::milog::MiLogStream::~MiLogStream(&v16);
      refreshed = -1;
    }
    else
    {
      DungeonCandidateTeamPlayer::DungeonCandidateTeamPlayer((DungeonCandidateTeamPlayer *const)(v2 + 32));
      std::shared_ptr<Player>::shared_ptr(&v15, p_player_ptr);
      v10 = DungeonCandidateTeamPlayer::setPlayerInfo((DungeonCandidateTeamPlayer *const)(v2 + 32), &v15) != 0;
      std::shared_ptr<Player>::~shared_ptr(&v15);
      if ( v10 )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_candidate_team.cpp",
          "addPlayer",
          292);
        v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v16,
                (const char (*)[37])" set player info failed player_uid: ");
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        val = Player::getUid(v12);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream(&v16);
        refreshed = -1;
      }
      else
      {
        std::list<DungeonCandidateTeamPlayer>::push_back(
          &this->player_list_,
          (const std::list<DungeonCandidateTeamPlayer>::value_type *)(v2 + 32));
        refreshed = DungeonCandidateTeam::refreshAllPlayerSlotInfo(this);
      }
      DungeonCandidateTeamPlayer::~DungeonCandidateTeamPlayer((DungeonCandidateTeamPlayer *const)(v2 + 32));
    }
  }
  result = refreshed;
  if ( v17 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 303: range 000000001556270A-00000000155627CA
int32_t __cdecl DungeonCandidateTeam::delPlayer(DungeonCandidateTeam *const this, PlayerPtr *p_player_ptr)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Uid; // edx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "delPlayer",
      306);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v5, (const char (*)[18])" player_ptr null ");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Uid = Player::getUid(v3);
    return DungeonCandidateTeam::delPlayer(this, Uid);
  }
};

// Line 313: range 00000000155627CC-0000000015562A33
int32_t __fastcall DungeonCandidateTeam::delPlayer(DungeonCandidateTeam *const this, uint32_t player_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  DungeonCandidateTeamPlayer *v7; // rax
  std::_List_iterator<DungeonCandidateTeamPlayer>::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 player_uid:312 64 8 6 it:319";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeam::delPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = player_uid;
  if ( !DungeonCandidateTeam::hasPlayerUid(this, *(_DWORD *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "delPlayer",
      316);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v9,
           (const char (*)[22])" has not player_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = -1;
  }
  else
  {
    *(std::list<DungeonCandidateTeamPlayer>::iterator *)(v2 + 64) = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_);
    while ( 1 )
    {
      __y._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
      if ( !std::operator!=((const std::_List_iterator<DungeonCandidateTeamPlayer>::_Self *)(v2 + 64), &__y) )
        break;
      v7 = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*((const std::_List_iterator<DungeonCandidateTeamPlayer> *const)(v2 + 64));
      if ( DungeonCandidateTeamPlayer::getPlayerUid(v7) == *(_DWORD *)(v2 + 48) )
      {
        std::_List_const_iterator<DungeonCandidateTeamPlayer>::_List_const_iterator(
          (std::_List_const_iterator<DungeonCandidateTeamPlayer> *const)&__y,
          (const std::_List_const_iterator<DungeonCandidateTeamPlayer>::iterator *)(v2 + 64));
        std::list<DungeonCandidateTeamPlayer>::erase(
          &this->player_list_,
          (std::list<DungeonCandidateTeamPlayer>::const_iterator)__y._M_node);
        break;
      }
      std::_List_iterator<DungeonCandidateTeamPlayer>::operator++((std::_List_iterator<DungeonCandidateTeamPlayer> *const)(v2 + 64));
    }
    result = DungeonCandidateTeam::refreshAllPlayerSlotInfo(this);
  }
  if ( v10 == (char *)v2 )
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

// Line 331: range 0000000015562A34-0000000015562BE7
int32_t __cdecl DungeonCandidateTeam::tryDelPlayer(DungeonCandidateTeam *const this, PlayerPtr *p_player_ptr)
{
  int32_t v2; // ebx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Uid; // edx
  common::milog::MiLogStream *v5; // rbx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<Player> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "tryDelPlayer",
      334);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v10, (const char (*)[18])" player_ptr null ");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Uid = Player::getUid(v3);
    if ( !DungeonCandidateTeam::hasPlayerUid(this, Uid) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "tryDelPlayer",
        339);
      v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v10,
             (const char (*)[22])" has not player_uid: ");
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      val = Player::getUid(v6);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return 0;
    }
    else
    {
      std::shared_ptr<Player>::shared_ptr(&v9, p_player_ptr);
      v2 = DungeonCandidateTeam::delPlayer(this, &v9);
      std::shared_ptr<Player>::~shared_ptr(&v9);
    }
  }
  return v2;
};

// Line 346: range 0000000015562BE8-000000001556393E
int32_t __cdecl DungeonCandidateTeam::setPlayerAvatarVec(
        DungeonCandidateTeam *const this,
        PlayerPtr *p_player_ptr,
        const std::vector<long unsigned int> *avatar_guid_vec)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t Uid; // edx
  common::milog::MiLogStream *v9; // rbx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // ecx
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  unsigned __int64 v17; // rax
  Player *v18; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // r15d
  std::shared_ptr<Avatar> *M_current; // r15
  std::vector<std::shared_ptr<Avatar>>::iterator v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  bool isAvatarSystemClosed; // r15
  FeatureSwitchMgr *p_feature_switch_mgr; // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  uint32_t AvatarId; // eax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // rax
  uint32_t PlayerUid; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  __int64 AllSlotCount; // r14
  common::milog::MiLogStream *v44; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  common::milog::MiLogStream *v46; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-19Ch] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-198h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-190h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin_0; // [rsp+38h] [rbp-188h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end_0; // [rsp+40h] [rbp-180h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+48h] [rbp-178h]
  std::list<DungeonCandidateTeamPlayer> *__for_range_0; // [rsp+50h] [rbp-170h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+58h] [rbp-168h]
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v59; // [rsp+70h] [rbp-150h] BYREF
  char v60[304]; // [rsp+90h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 7 ret:385 64 8 8 guid:369 96 16 14 avatar_ptr:375 128 24 18 old_avatar_vec:362 192 24 18 "
                        "new_avatar_vec:368";
  *(_QWORD *)(v4 + 16) = DungeonCandidateTeam::setPlayerAvatarVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "setPlayerAvatarVec",
      349);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v59, (const char (*)[16])"player_ptr null");
    common::milog::MiLogStream::~MiLogStream(&v59);
    v3 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Uid = Player::getUid(v7);
    if ( !DungeonCandidateTeam::hasPlayerUid(this, Uid) )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "setPlayerAvatarVec",
        354);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v59,
             (const char (*)[22])" has not player_uid: ");
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      val = Player::getUid(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v59);
      v3 = -1;
    }
    else if ( std::vector<unsigned long>::empty(avatar_guid_vec) )
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "setPlayerAvatarVec",
        359);
      v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v59,
              (const char (*)[35])"avatar_guid_vec empty player_uid: ");
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      val = Player::getUid(v12);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v59);
      v3 = -1;
    }
    else
    {
      std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v4 + 128));
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      v14 = Player::getUid(v13);
      if ( DungeonCandidateTeam::getPlayerAvatarPtrVec(this, v14, (std::vector<std::shared_ptr<Avatar>> *)(v4 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_candidate_team.cpp",
          "setPlayerAvatarVec",
          365);
        v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v59,
                (const char (*)[42])"getPlayerAvatarPtrVec failed player_uid: ");
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        val = Player::getUid(v16);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v59);
        v3 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v4 + 192));
        __for_range = avatar_guid_vec;
        __for_begin._M_current = std::vector<unsigned long>::begin(avatar_guid_vec)._M_current;
        __for_end._M_current = std::vector<unsigned long>::end(avatar_guid_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
        {
          v17 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8(v17);
          *(_QWORD *)(v4 + 64) = *(_QWORD *)v17;
          if ( *(_QWORD *)(v4 + 64) )
          {
            v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
            AvatarComp = Player::getAvatarComp(v18);
            PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v4 + 96), (uint64_t)AvatarComp);
            if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 96), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v59,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/dungeon_candidate_team.cpp",
                "setPlayerAvatarVec",
                378);
              v20 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v59,
                      (const char (*)[32])"find avatar failed player_uid: ");
              v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
              val = Player::getUid(v21);
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
              v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v22,
                      (const char (*)[15])" avatar_guid: ");
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v23,
                (const unsigned __int64 *)(v4 + 64));
              common::milog::MiLogStream::~MiLogStream(&v59);
              v3 = -1;
              v24 = 0;
            }
            else
            {
              __for_end_0._M_node = (std::__detail::_List_node_base *)std::vector<std::shared_ptr<Avatar>>::end((std::vector<std::shared_ptr<Avatar>> *const)(v4 + 128))._M_current;
              M_current = std::vector<std::shared_ptr<Avatar>>::end((std::vector<std::shared_ptr<Avatar>> *const)(v4 + 128))._M_current;
              v26._M_current = std::vector<std::shared_ptr<Avatar>>::begin((std::vector<std::shared_ptr<Avatar>> *const)(v4 + 128))._M_current;
              __for_begin_0._M_node = (std::__detail::_List_node_base *)std::find<__gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>,std::shared_ptr<Avatar>>(
                                                                          v26,
                                                                          (__gnu_cxx::__normal_iterator<std::shared_ptr<Avatar>*,std::vector<std::shared_ptr<Avatar>> >)M_current,
                                                                          (const std::shared_ptr<Avatar> *)(v4 + 96))._M_current;
              if ( __gnu_cxx::operator==<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>(
                     (const __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar>*,std::vector<std::shared_ptr<Avatar>> > *)&__for_begin_0,
                     (const __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar>*,std::vector<std::shared_ptr<Avatar>> > *)&__for_end_0)
                && (std::shared_ptr<Avatar>::shared_ptr(&p_avatar_ptr, (const std::shared_ptr<Avatar> *)(v4 + 96)),
                    *(_DWORD *)(v4 + 48) = DungeonCandidateTeam::canJoinTeam(this, &p_avatar_ptr),
                    std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr),
                    *(_DWORD *)(v4 + 48)) )
              {
                common::milog::MiLogStream::create(
                  &v59,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/dungeon/dungeon_candidate_team.cpp",
                  "setPlayerAvatarVec",
                  388);
                v27 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        &v59,
                        (const char (*)[37])"avatar cannot join team player_uid: ");
                v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
                val = Player::getUid(v28);
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
                v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v29,
                        (const char (*)[15])" avatar_guid: ");
                v31 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v30,
                        (const unsigned __int64 *)(v4 + 64));
                v32 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v31, (const char (*)[7])" ret: ");
                common::milog::MiLogStream::operator<<<int,(int *)0>(v32, (const int *)(v4 + 48));
                common::milog::MiLogStream::~MiLogStream(&v59);
                v3 = *(_DWORD *)(v4 + 48);
                v24 = 0;
              }
              else
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&p_avatar_ptr);
                v33 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_avatar_ptr);
                isAvatarSystemClosed = FeatureSwitchMgr::isAvatarSystemClosed(&v33->feature_switch_mgr);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_avatar_ptr);
                if ( isAvatarSystemClosed )
                {
                  common::milog::MiLogStream::create(
                    &v59,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/dungeon/dungeon_candidate_team.cpp",
                    "setPlayerAvatarVec",
                    396);
                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v59,
                    (const char (*)[37])"[FEATURE_SWITCH] AvatarSystem closed");
                  common::milog::MiLogStream::~MiLogStream(&v59);
                  v3 = 142;
                  v24 = 0;
                }
                else
                {
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&p_avatar_ptr);
                  p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_avatar_ptr)->feature_switch_mgr;
                  v36 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  AvatarId = Avatar::getAvatarId(v36);
                  LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isAvatarClosed(p_feature_switch_mgr, AvatarId);
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_avatar_ptr);
                  if ( (_BYTE)p_feature_switch_mgr )
                  {
                    common::milog::MiLogStream::create(
                      &v59,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/dungeon/dungeon_candidate_team.cpp",
                      "setPlayerAvatarVec",
                      401);
                    v38 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                            &v59,
                            (const char (*)[42])"[FEATURE_SWITCH] AvatarSystem avatar_id: ");
                    v39 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                    val = Avatar::getAvatarId(v39);
                    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
                    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v40, (const char (*)[8])" closed");
                    common::milog::MiLogStream::~MiLogStream(&v59);
                    v3 = 142;
                    v24 = 0;
                  }
                  else
                  {
                    std::vector<std::shared_ptr<Avatar>>::push_back(
                      (std::vector<std::shared_ptr<Avatar>> *const)(v4 + 192),
                      (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v4 + 96));
                    v24 = 1;
                  }
                }
              }
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
            if ( v24 != 1 )
              goto LABEL_37;
          }
          __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
        }
        __for_range_0 = &this->player_list_;
        __for_begin_0._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
        __for_end_0._M_node = std::list<DungeonCandidateTeamPlayer>::end(__for_range_0)._M_node;
        while ( 1 )
        {
          if ( !std::operator!=(&__for_begin_0, &__for_end_0) )
          {
            common::milog::MiLogStream::create(
              &v59,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/dungeon_candidate_team.cpp",
              "setPlayerAvatarVec",
              423);
            v46 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v59,
                    (const char (*)[33])" find player failed player_uid: ");
            v47 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
            val = Player::getUid(v47);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &val);
            common::milog::MiLogStream::~MiLogStream(&v59);
            v3 = -1;
            goto LABEL_37;
          }
          candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin_0);
          PlayerUid = DungeonCandidateTeamPlayer::getPlayerUid(candidate_player);
          v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          if ( PlayerUid == Player::getUid(v42) )
            break;
          std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin_0);
        }
        AllSlotCount = DungeonCandidateTeamPlayer::getAllSlotCount(candidate_player);
        if ( AllSlotCount == std::vector<unsigned long>::size(avatar_guid_vec) )
        {
          v3 = DungeonCandidateTeamPlayer::setAvatarVec(
                 candidate_player,
                 (std::vector<std::shared_ptr<Avatar>> *)(v4 + 192));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/dungeon/dungeon_candidate_team.cpp",
            "setPlayerAvatarVec",
            413);
          v44 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v59,
                  (const char (*)[34])"slot count not match player_uid: ");
          v45 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          val = Player::getUid(v45);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &val);
          common::milog::MiLogStream::~MiLogStream(&v59);
          v3 = -1;
        }
LABEL_37:
        std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v4 + 192));
      }
      std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v4 + 128));
    }
  }
  result = v3;
  if ( v60 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 428: range 0000000015563940-0000000015563A2F
int32_t __cdecl DungeonCandidateTeam::setPlayerIsReady(
        DungeonCandidateTeam *const this,
        PlayerPtr *p_player_ptr,
        bool is_ready)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t player_uid; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "setPlayerIsReady",
      431);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"player_ptr null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    player_uid = Player::getUid(v4);
    if ( is_ready )
      return DungeonCandidateTeam::setPlayerState(this, player_uid, DUNGEON_CANDIDATE_TEAM_PLAYER_STATE_READY);
    else
      return DungeonCandidateTeam::checkAndSetPlayerState(
               this,
               player_uid,
               DUNGEON_CANDIDATE_TEAM_PLAYER_STATE_READY,
               DUNGEON_CANDIDATE_TEAM_PLAYER_STATE_IDLE);
  }
};

// Line 447: range 0000000015563A30-0000000015563B52
int32_t __cdecl DungeonCandidateTeam::setPlayerIsChangingAvatar(
        DungeonCandidateTeam *const this,
        PlayerPtr *p_player_ptr,
        bool is_changing_avatar)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t player_uid; // [rsp+2Ch] [rbp-34h]
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<Player>(p_player_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "setPlayerIsChangingAvatar",
      450);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"player_ptr null");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    player_uid = Player::getUid(v4);
    if ( is_changing_avatar )
    {
      return DungeonCandidateTeam::setPlayerState(this, player_uid, DUNGEON_CANDIDATE_TEAM_PLAYER_STATE_CHANGING_AVATAR);
    }
    else if ( DungeonCandidateTeam::isLeader(this, player_uid) )
    {
      return DungeonCandidateTeam::checkAndSetPlayerState(
               this,
               player_uid,
               DUNGEON_CANDIDATE_TEAM_PLAYER_STATE_CHANGING_AVATAR,
               DUNGEON_CANDIDATE_TEAM_PLAYER_STATE_READY);
    }
    else
    {
      return DungeonCandidateTeam::checkAndSetPlayerState(
               this,
               player_uid,
               DUNGEON_CANDIDATE_TEAM_PLAYER_STATE_CHANGING_AVATAR,
               DUNGEON_CANDIDATE_TEAM_PLAYER_STATE_IDLE);
    }
  }
};

// Line 474: range 0000000015563B54-0000000015563F4B
__int64 __fastcall DungeonCandidateTeam::checkAndSetPlayerState(
        DungeonCandidateTeam *const this,
        uint32_t player_uid,
        proto::DungeonCandidateTeamPlayerState old_state,
        proto::DungeonCandidateTeamPlayerState new_state)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  proto::DungeonCandidateTeamPlayerState val; // [rsp+2Ch] [rbp-D4h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+40h] [rbp-C0h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 player_uid:473 64 4 13 old_state:473";
  *(_QWORD *)(v4 + 16) = DungeonCandidateTeam::checkAndSetPlayerState;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = player_uid;
  *(_DWORD *)(v4 + 64) = old_state;
  if ( !DungeonCandidateTeam::hasPlayerUid(this, *(_DWORD *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "checkAndSetPlayerState",
      477);
    v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v20, (const char (*)[21])off_258047E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    __for_range = &this->player_list_;
    __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
    __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
    while ( 1 )
    {
      if ( !std::operator!=(&__for_begin, &__for_end) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_candidate_team.cpp",
          "checkAndSetPlayerState",
          493);
        v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v20,
                (const char (*)[33])" find player failed player_uid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = 0xFFFFFFFFLL;
        goto LABEL_14;
      }
      candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
      if ( DungeonCandidateTeamPlayer::getPlayerUid(candidate_player) == *(_DWORD *)(v4 + 48) )
        break;
      std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
    }
    if ( DungeonCandidateTeamPlayer::getState(candidate_player) == *(_DWORD *)(v4 + 64) )
    {
      DungeonCandidateTeamPlayer::setState(candidate_player, new_state);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "checkAndSetPlayerState",
        486);
      v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v20,
             (const char (*)[39])"checkAndSetPlayerState fail, old_state");
      val = DungeonCandidateTeamPlayer::getState(candidate_player);
      v10 = common::milog::MiLogStream::operator<<<proto::DungeonCandidateTeamPlayerState,(proto::DungeonCandidateTeamPlayerState*)0>(
              v9,
              &val);
      v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v10,
              (const char (*)[18])", need_old_state:");
      common::milog::MiLogStream::operator<<<proto::DungeonCandidateTeamPlayerState,(proto::DungeonCandidateTeamPlayerState*)0>(
        v11,
        (const proto::DungeonCandidateTeamPlayerState *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
  }
LABEL_14:
  if ( v21 == (char *)v4 )
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

// Line 498: range 0000000015563F4C-00000000155641F9
__int64 __fastcall DungeonCandidateTeam::setPlayerState(
        DungeonCandidateTeam *const this,
        uint32_t player_uid,
        proto::DungeonCandidateTeamPlayerState new_state)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+20h] [rbp-90h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 player_uid:497";
  *(_QWORD *)(v3 + 16) = DungeonCandidateTeam::setPlayerState;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = player_uid;
  if ( !DungeonCandidateTeam::hasPlayerUid(this, *(_DWORD *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "setPlayerState",
      501);
    v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v14, (const char (*)[21])off_258047E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    __for_range = &this->player_list_;
    __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
    __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
      if ( DungeonCandidateTeamPlayer::getPlayerUid(candidate_player) == *(_DWORD *)(v3 + 32) )
      {
        DungeonCandidateTeamPlayer::setState(candidate_player, new_state);
        result = 0LL;
        goto LABEL_12;
      }
      std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "setPlayerState",
      512);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v14,
           (const char (*)[33])" find player failed player_uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
LABEL_12:
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

// Line 517: range 00000000155641FA-0000000015564287
bool __cdecl DungeonCandidateTeam::isAllReady(DungeonCandidateTeam *const this)
{
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+20h] [rbp-10h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+28h] [rbp-8h]

  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    if ( !DungeonCandidateTeamPlayer::isReady(candidate_player) )
      return 0;
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  return 1;
};

// Line 529: range 0000000015564288-00000000155642E6
bool __cdecl DungeonCandidateTeam::isLeader(DungeonCandidateTeam *const this, uint32_t player_uid)
{
  DungeonCandidateTeamPlayer *v2; // rax
  bool result; // al
  std::_List_iterator<DungeonCandidateTeamPlayer> v4; // [rsp+18h] [rbp-8h] BYREF

  result = 0;
  if ( std::list<DungeonCandidateTeamPlayer>::size(&this->player_list_) )
  {
    v4._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
    v2 = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&v4);
    if ( player_uid == DungeonCandidateTeamPlayer::getPlayerUid(v2) )
      return 1;
  }
  return result;
};

// Line 537: range 00000000155642E8-000000001556437E
PlayerPtr __cdecl DungeonCandidateTeam::getLeaderPlayerPtr(DungeonCandidateTeam *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax
  std::_List_iterator<DungeonCandidateTeamPlayer> v3; // [rsp+18h] [rbp-8h] BYREF

  if ( std::list<DungeonCandidateTeamPlayer>::size((const std::list<DungeonCandidateTeamPlayer> *const)(v1 + 16)) )
  {
    v3._M_node = std::list<DungeonCandidateTeamPlayer>::begin((std::list<DungeonCandidateTeamPlayer> *const)(v1 + 16))._M_node;
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&v3);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = DungeonCandidateTeamPlayer::getPlayerPtr((DungeonCandidateTeamPlayer *const)this);
  }
  else
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 548: range 0000000015564380-00000000155646DB
bool __cdecl DungeonCandidateTeam::isHasRepeatAvatar(DungeonCandidateTeam *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::shared_ptr<Avatar> *v4; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int v6; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool result; // al
  bool v9; // [rsp+7h] [rbp-149h]
  std::unordered_set<unsigned int>::key_type __x; // [rsp+14h] [rbp-13Ch] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  std::__detail::_Node_iterator_base<unsigned int,false> v13; // [rsp+28h] [rbp-128h] BYREF
  std::__detail::_Node_iterator_base<unsigned int,false> __y; // [rsp+30h] [rbp-120h] BYREF
  std::vector<std::shared_ptr<Avatar>> *__for_range; // [rsp+38h] [rbp-118h]
  char v16[272]; // [rsp+40h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 14 avatar_ptr:552 64 24 18 avatar_ptr_vec:550 128 56 17 avatar_id_set:549";
  *(_QWORD *)(v1 + 16) = DungeonCandidateTeam::isHasRepeatAvatar;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 128));
  std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v1 + 64));
  DungeonCandidateTeam::getAllAvatarPtrVec(this, (std::vector<std::shared_ptr<Avatar>> *)(v1 + 64));
  __for_range = (std::vector<std::shared_ptr<Avatar>> *)(v1 + 64);
  __for_begin._M_current = std::vector<std::shared_ptr<Avatar>>::begin((std::vector<std::shared_ptr<Avatar>> *const)(v1 + 64))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Avatar>>::end((std::vector<std::shared_ptr<Avatar>> *const)(v1 + 64))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>(
            &__for_begin,
            &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator*(&__for_begin);
    std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 32), v4);
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 32), 0LL) )
    {
      __y._M_cur = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v1 + 128))._M_cur;
      v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      __x = Avatar::getAvatarId(v5);
      v13._M_cur = std::unordered_set<unsigned int>::find((std::unordered_set<unsigned int> *const)(v1 + 128), &__x)._M_cur;
      if ( std::__detail::operator!=<unsigned int,false>(&v13, &__y) )
      {
        v9 = 1;
        v6 = 0;
        goto LABEL_11;
      }
      v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      __x = Avatar::getAvatarId(v7);
      std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v1 + 128), &__x);
    }
    v6 = 1;
LABEL_11:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 32));
    if ( v6 != 1 )
      goto LABEL_14;
    __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator++(&__for_begin);
  }
  v9 = 0;
LABEL_14:
  std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v1 + 64));
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 128));
  result = v9;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 568: range 00000000155646DC-000000001556490F
void __cdecl DungeonCandidateTeam::getAllAvatarPtrVec(
        DungeonCandidateTeam *const this,
        std::vector<std::shared_ptr<Avatar>> *avatar_ptr_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::shared_ptr<Avatar> *M_current; // r15
  std::shared_ptr<Avatar> *v6; // r14
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar>*,std::vector<std::shared_ptr<Avatar>> > __i; // [rsp+30h] [rbp-B0h] BYREF
  __gnu_cxx::__normal_iterator<const std::shared_ptr<Avatar>*,std::vector<std::shared_ptr<Avatar>> > __position; // [rsp+38h] [rbp-A8h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+40h] [rbp-A0h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+48h] [rbp-98h]
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 22 tmp_avatar_ptr_vec:571";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeam::getAllAvatarPtrVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 32));
    DungeonCandidateTeamPlayer::getAvatarPtrVec(candidate_player, (std::vector<std::shared_ptr<Avatar>> *)(v2 + 32));
    M_current = std::vector<std::shared_ptr<Avatar>>::end((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 32))._M_current;
    v6 = std::vector<std::shared_ptr<Avatar>>::begin((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 32))._M_current;
    __i._M_current = std::vector<std::shared_ptr<Avatar>>::end(avatar_ptr_vec)._M_current;
    __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> const*,std::vector<std::shared_ptr<Avatar>>>::__normal_iterator<std::shared_ptr<Avatar>*>(
      &__position,
      &__i);
    std::vector<std::shared_ptr<Avatar>>::insert<__gnu_cxx::__normal_iterator<std::shared_ptr<Avatar>*,std::vector<std::shared_ptr<Avatar>>>,void>(
      avatar_ptr_vec,
      __position,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<Avatar>*,std::vector<std::shared_ptr<Avatar>> >)v6,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<Avatar>*,std::vector<std::shared_ptr<Avatar>> >)M_current);
    std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 32));
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  if ( v13 == (char *)v2 )
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

// Line 578: range 0000000015564910-0000000015564B21
__int64 __fastcall DungeonCandidateTeam::getPlayerAvatarPtrVec(
        DungeonCandidateTeam *const this,
        uint32_t player_uid,
        std::vector<std::shared_ptr<Avatar>> *avatar_ptr_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+30h] [rbp-90h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 player_uid:577";
  *(_QWORD *)(v3 + 16) = DungeonCandidateTeam::getPlayerAvatarPtrVec;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = player_uid;
  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    if ( DungeonCandidateTeamPlayer::getPlayerUid(candidate_player) == *(_DWORD *)(v3 + 32) )
    {
      DungeonCandidateTeamPlayer::getAvatarPtrVec(candidate_player, avatar_ptr_vec);
      result = 0LL;
      goto LABEL_10;
    }
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/dungeon/dungeon_candidate_team.cpp",
    "getPlayerAvatarPtrVec",
    587);
  v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v13,
         (const char (*)[24])"donot find player_uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v13);
  result = 0xFFFFFFFFLL;
LABEL_10:
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

// Line 593: range 0000000015564B22-0000000015564D71
void __cdecl DungeonCandidateTeam::getAllPlayerPtrVec(
        DungeonCandidateTeam *const this,
        std::vector<std::shared_ptr<Player>> *player_ptr_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+30h] [rbp-A0h]
  DungeonCandidateTeamPlayer *candiate_player; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-90h] BYREF
  char v12[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 player_ptr:596";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeam::getAllPlayerPtrVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candiate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    DungeonCandidateTeamPlayer::getPlayerPtr((DungeonCandidateTeamPlayer *const)(v2 + 32));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      std::vector<std::shared_ptr<Player>>::push_back(
        player_ptr_vec,
        (const std::vector<std::shared_ptr<Player>>::value_type *)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "getAllPlayerPtrVec",
        603);
      v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v11,
             (const char (*)[29])"player_ptr null player_uid: ");
      val = DungeonCandidateTeamPlayer::getPlayerUid(candiate_player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 610: range 0000000015564D72-00000000155650AE
std::unordered_map<unsigned int,std::vector<long unsigned int>> *__cdecl DungeonCandidateTeam::getPlayerChooseAvatarMap(
        std::unordered_map<unsigned int,std::vector<long unsigned int>> *retstr,
        DungeonCandidateTeam *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::shared_ptr<Avatar> *v5; // rax
  std::vector<long unsigned int> *v6; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_begin_0; // [rsp+20h] [rbp-100h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_end_0; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<long unsigned int>::value_type __x; // [rsp+30h] [rbp-F0h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+38h] [rbp-E8h]
  DungeonCandidateTeamPlayer *candiate_player; // [rsp+40h] [rbp-E0h]
  std::vector<std::shared_ptr<Avatar>> *__for_range_0; // [rsp+48h] [rbp-D8h]
  char v17[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 player_uid:614 64 16 14 avatar_ptr:617 96 24 18 avatar_ptr_vec:615";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeam::getPlayerChooseAvatarMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::unordered_map<unsigned int,std::vector<unsigned long>>::unordered_map(retstr);
  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candiate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 48) = DungeonCandidateTeamPlayer::getPlayerUid(candiate_player);
    std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 96));
    DungeonCandidateTeamPlayer::getAvatarPtrVec(candiate_player, (std::vector<std::shared_ptr<Avatar>> *)(v2 + 96));
    __for_range_0 = (std::vector<std::shared_ptr<Avatar>> *)(v2 + 96);
    __for_begin_0._M_current = std::vector<std::shared_ptr<Avatar>>::begin((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 96))._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<Avatar>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator*(&__for_begin_0);
      std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64), v5);
      if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
      {
        v6 = std::unordered_map<unsigned int,std::vector<unsigned long>>::operator[](
               retstr,
               (const std::unordered_map<unsigned int,std::vector<long unsigned int>>::key_type *)(v2 + 48));
        v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        __x = Avatar::getGuid(v7);
        std::vector<unsigned long>::push_back(v6, &__x);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
      __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator++(&__for_begin_0);
    }
    std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 96));
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 629: range 00000000155650B0-00000000155653A8
bool __cdecl DungeonCandidateTeam::isPlayerHasValidAvatar(DungeonCandidateTeam *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 *v5; // rax
  PlayerAvatarComp *AvatarComp; // rax
  char v7; // r14
  bool v8; // r15
  int v9; // r14d
  bool result; // al
  bool v11; // [rsp+Fh] [rbp-F1h]
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  unsigned __int64 avatar_guid; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+40h] [rbp-C0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 avatar_ptr:633 64 24 29 candidate_avatar_guid_vec:630";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeam::isPlayerHasValidAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  DungeonCandidateTeam::getPlayerCandidateAvatar((std::vector<long unsigned int> *)(v2 + 64), this, player);
  __for_range = (std::vector<long unsigned int> *)(v2 + 64);
  __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v2 + 64))._M_current;
  __for_end._M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v2 + 64))._M_current;
  while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      v5 = (unsigned __int64 *)__asan_report_load8(v5);
    avatar_guid = *v5;
    AvatarComp = Player::getAvatarComp(player);
    PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 32), (uint64_t)AvatarComp);
    v7 = 0;
    v8 = 0;
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
    {
      std::shared_ptr<Avatar>::shared_ptr(&p_avatar_ptr, (const std::shared_ptr<Avatar> *)(v2 + 32));
      v7 = 1;
      if ( !DungeonCandidateTeam::canJoinTeam(this, &p_avatar_ptr) )
        v8 = 1;
    }
    if ( v7 )
      std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
    if ( v8 )
    {
      v11 = 1;
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
    if ( v9 != 1 )
      goto LABEL_20;
    __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  v11 = 0;
LABEL_20:
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v2 + 64));
  result = v11;
  if ( v17 == (char *)v2 )
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
  return result;
};

// Line 643: range 00000000155653AA-0000000015565495
void __cdecl DungeonCandidateTeam::onPlayerLeaveWorldScene(DungeonCandidateTeam *const this, Player *player)
{
  uint32_t Uid; // edx
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  Uid = Player::getUid(player);
  if ( DungeonCandidateTeam::hasPlayerUid(this, Uid) )
  {
    if ( DungeonCandidateTeam::handlePlayerLeave(this, player, DUNGEON_CANDIDATE_TPLR_NORMAL) )
    {
      common::milog::MiLogStream::create(
        &v5,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "onPlayerLeaveWorldScene",
        648);
      v3 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(&v5, (const char (*)[48])off_25804BC0);
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
      common::milog::MiLogStream::~MiLogStream(&v5);
    }
  }
};

// Line 654: range 0000000015565496-0000000015565609
void __cdecl DungeonCandidateTeam::onPlayerLeaveWorld(DungeonCandidateTeam *const this, Player *player)
{
  uint32_t Uid; // edx
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  Uid = Player::getUid(player);
  if ( DungeonCandidateTeam::hasPlayerUid(this, Uid) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "onPlayerLeaveWorld",
      657);
    v3 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
           &v6,
           (const char (*)[69])"player leave world, remove from dungeon candidate team, player_uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    if ( DungeonCandidateTeam::handlePlayerLeave(this, player, DUNGEON_CANDIDATE_TPLR_NORMAL) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "onPlayerLeaveWorld",
        660);
      v4 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v6, (const char (*)[42])off_25804CE0);
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v6);
    }
  }
};

// Line 666: range 000000001556560A-00000000155656F5
void __cdecl DungeonCandidateTeam::onPlayerCurAvatarDie(DungeonCandidateTeam *const this, Player *player)
{
  uint32_t Uid; // edx
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  Uid = Player::getUid(player);
  if ( DungeonCandidateTeam::hasPlayerUid(this, Uid) )
  {
    if ( DungeonCandidateTeam::handlePlayerLeave(this, player, DUNGEON_CANDIDATE_TPLR_DIE) )
    {
      common::milog::MiLogStream::create(
        &v5,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "onPlayerCurAvatarDie",
        671);
      v3 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(&v5, (const char (*)[45])off_25804D80);
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
      common::milog::MiLogStream::~MiLogStream(&v5);
    }
  }
};

// Line 677: range 00000000155656F6-00000000155657E1
void __cdecl DungeonCandidateTeam::onPlayerDisconnect(DungeonCandidateTeam *const this, Player *player)
{
  uint32_t Uid; // edx
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  Uid = Player::getUid(player);
  if ( DungeonCandidateTeam::hasPlayerUid(this, Uid) )
  {
    if ( DungeonCandidateTeam::handlePlayerLeave(this, player, DUNGEON_CANDIDATE_DISCONNECT) )
    {
      common::milog::MiLogStream::create(
        &v5,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "onPlayerDisconnect",
        683);
      v3 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(&v5, (const char (*)[43])off_25804E20);
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
      common::milog::MiLogStream::~MiLogStream(&v5);
    }
  }
};

// Line 689: range 00000000155657E2-0000000015565A96
void __fastcall DungeonCandidateTeam::onPlayerDelAvatar(
        DungeonCandidateTeam *const this,
        Player *player,
        uint64_t avatar_guid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t Uid; // eax
  uint32_t PlayerUid; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+40h] [rbp-A0h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-90h] BYREF
  char v18[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 15 avatar_guid:688";
  *(_QWORD *)(v3 + 16) = DungeonCandidateTeam::onPlayerDelAvatar;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = avatar_guid;
  Uid = Player::getUid(player);
  if ( DungeonCandidateTeam::hasPlayerUid(this, Uid) )
  {
    __for_range = &this->player_list_;
    __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
    __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
      PlayerUid = DungeonCandidateTeamPlayer::getPlayerUid(candidate_player);
      if ( PlayerUid == Player::getUid(player) )
      {
        if ( DungeonCandidateTeamPlayer::delAvatar(candidate_player, *(_QWORD *)(v3 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/dungeon_candidate_team.cpp",
            "onPlayerDelAvatar",
            700);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v17, (const char (*)[13])"player_uid: ");
          val = Player::getUid(player);
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
          v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v9,
                  (const char (*)[19])" del avatar_guid: ");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v10,
            (const unsigned __int64 *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v17);
          DungeonCandidateTeam::notifyTeamInfo(this, 0);
        }
        break;
      }
      std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
    }
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 709: range 0000000015565A98-0000000015565C96
int32_t __cdecl DungeonCandidateTeam::handlePlayerLeave(
        DungeonCandidateTeam *const this,
        Player *player,
        proto::DungeonCandidateTeamPlayerLeaveReason reason)
{
  uint32_t Uid; // edx
  uint32_t v4; // ecx
  uint32_t v5; // ecx
  uint32_t v6; // ecx
  bool v7; // bl
  common::milog::MiLogStream *v8; // rbx
  unsigned int val; // [rsp+2Ch] [rbp-44h] BYREF
  PlayerPtr p_player_ptr; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-30h] BYREF

  Uid = Player::getUid(player);
  if ( DungeonCandidateTeam::isLeader(this, Uid) )
  {
    if ( reason == DUNGEON_CANDIDATE_DISCONNECT )
    {
      v6 = Player::getUid(player);
      DungeonCandidateTeam::notifyTeamDismiss(this, v6, DUNGEON_CANDIDATE_TPDR_DISCONNECT);
    }
    else if ( reason <= DUNGEON_CANDIDATE_DISCONNECT )
    {
      if ( reason )
      {
        if ( reason == DUNGEON_CANDIDATE_TPLR_DIE )
        {
          v5 = Player::getUid(player);
          DungeonCandidateTeam::notifyTeamDismiss(this, v5, DUNGEON_CANDIDATE_TPDR_DIE);
        }
      }
      else
      {
        v4 = Player::getUid(player);
        DungeonCandidateTeam::notifyTeamDismiss(this, v4, DUNGEON_CANDIDATE_TPDR_NORMAL);
      }
    }
    DungeonCandidateTeam::resetAll(this, 0, 0, 0, 0);
  }
  else
  {
    toThisPtr<Player>((Player *)&p_player_ptr);
    v7 = DungeonCandidateTeam::delPlayer(this, &p_player_ptr) == 0;
    std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
    if ( !v7 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "handlePlayerLeave",
        743);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v13,
             (const char (*)[30])"leave team error player_uid: ");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return -1;
    }
    DungeonCandidateTeam::notifyTeamInfo(this, 0);
    DungeonCandidateTeam::notifyPlayerLeave(this, player, reason);
  }
  return 0;
};

// Line 751: range 0000000015565C98-0000000015565F2B
std::string *__cdecl DungeonCandidateTeam::getDesc[abi:cxx11](std::string *retstr, DungeonCandidateTeam *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+20h] [rbp-90h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+28h] [rbp-88h]
  std::string v; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 ss:752";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeam::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    DungeonCandidateTeamPlayer::getDesc[abi:cxx11](&v, candidate_player);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
      &v);
    std::string::~string(&v);
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  DungeonCandidateInviteInfo::getDesc[abi:cxx11](&v, &this->invite_info_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    &v);
  std::string::~string(&v);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v11 == (char *)v2 )
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

// Line 762: range 0000000015565F2C-0000000015566360
int32_t __cdecl DungeonCandidateTeam::refreshAllPlayerSlotInfo(DungeonCandidateTeam *const this)
{
  std::_List_iterator<DungeonCandidateTeamPlayer> *p_state; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  bool v4; // r14
  common::milog::MiLogStream *v5; // r14
  DungeonCandidateTeamPlayer *v6; // rax
  int32_t result; // eax
  uint32_t v8; // ecx
  bool is_leader; // [rsp+17h] [rbp-D9h]
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  uint32_t my_slot_count; // [rsp+1Ch] [rbp-D4h]
  std::_List_iterator<DungeonCandidateTeamPlayer>::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+28h] [rbp-C8h]
  DungeonCandidateTeamPlayer v14; // [rsp+30h] [rbp-C0h] BYREF

  p_state = (std::_List_iterator<DungeonCandidateTeamPlayer> *)&v14.state_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_state = (std::_List_iterator<DungeonCandidateTeamPlayer> *)v2;
  }
  p_state->_M_node = (std::__detail::_List_node_base *)1102416563;
  p_state[1]._M_node = (std::__detail::_List_node_base *)"2 32 8 6 it:764 64 8 6 it:783";
  p_state[2]._M_node = (std::__detail::_List_node_base *)DungeonCandidateTeam::refreshAllPlayerSlotInfo;
  v3 = (_DWORD *)((unsigned __int64)p_state >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  p_state[4]._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  while ( 1 )
  {
    __y._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
    if ( !std::operator!=(p_state + 4, &__y) )
      break;
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(p_state + 4);
    DungeonCandidateTeamPlayer::getPlayerPtr(&v14);
    v4 = std::operator==<Player>((const std::shared_ptr<Player> *)&v14, 0LL);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v14);
    if ( v4 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v14.player_wtr_._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "refreshAllPlayerSlotInfo",
        768);
      v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             (common::milog::MiLogStream *const)&v14.player_wtr_._M_refcount,
             (const char (*)[30])"player_ptr nulll player_uid: ");
      v6 = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(p_state + 4);
      val = DungeonCandidateTeamPlayer::getPlayerUid(v6);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v14.player_wtr_._M_refcount);
      p_state[8]._M_node = std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(p_state + 4, 0)._M_node;
      std::_List_const_iterator<DungeonCandidateTeamPlayer>::_List_const_iterator(
        (std::_List_const_iterator<DungeonCandidateTeamPlayer> *const)&__y,
        p_state + 8);
      std::list<DungeonCandidateTeamPlayer>::erase(
        &this->player_list_,
        (std::list<DungeonCandidateTeamPlayer>::const_iterator)__y._M_node);
    }
    else
    {
      std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(p_state + 4, 0);
    }
  }
  if ( std::list<DungeonCandidateTeamPlayer>::empty(&this->player_list_) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v14.player_wtr_._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "refreshAllPlayerSlotInfo",
      779);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&v14.player_wtr_._M_refcount,
      (const char (*)[17])"vaild player = 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v14.player_wtr_._M_refcount);
    result = -1;
  }
  else
  {
    p_state[8]._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
    while ( 1 )
    {
      __y._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
      if ( !std::operator!=(p_state + 8, &__y) )
        break;
      __y._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
      is_leader = std::operator==(p_state + 8, &__y);
      candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(p_state + 8);
      v8 = std::list<DungeonCandidateTeamPlayer>::size(&this->player_list_);
      my_slot_count = DungeonCandidateTeam::getPlayerSlotCount(this, v8, is_leader);
      DungeonCandidateTeamPlayer::setAvatarCount(candidate_player, my_slot_count);
      DungeonCandidateTeam::refreshOnePlayerSlotInfo(this, candidate_player);
      std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(p_state + 8);
    }
    result = 0;
  }
  if ( &v14.state_ == (proto::DungeonCandidateTeamPlayerState *)p_state )
  {
    *(_QWORD *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)p_state >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    p_state->_M_node = (std::__detail::_List_node_base *)1172321806;
    *(_QWORD *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)p_state >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 795: range 0000000015566362-0000000015566C3E
int32_t __cdecl DungeonCandidateTeam::refreshOnePlayerSlotInfo(
        DungeonCandidateTeam *const this,
        DungeonCandidateTeamPlayer *candidate_player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  Player *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // rax
  unsigned __int64 v11; // rax
  Player *v12; // rax
  PlayerAvatarComp *AvatarComp; // rax
  char v14; // r14
  bool v15; // r15
  _BOOL4 v16; // r14d
  bool v17; // r14
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-220h] BYREF
  uint32_t need_count; // [rsp+24h] [rbp-21Ch]
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-218h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_begin_0; // [rsp+30h] [rbp-210h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_end; // [rsp+38h] [rbp-208h] BYREF
  std::__detail::_Node_iterator_base<long unsigned int,false> __y; // [rsp+40h] [rbp-200h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+48h] [rbp-1F8h]
  std::vector<std::shared_ptr<Avatar>> *__for_range_0; // [rsp+50h] [rbp-1F0h]
  std::shared_ptr<Avatar> *avatar_ptr; // [rsp+58h] [rbp-1E8h]
  std::shared_ptr<Avatar> p_avatar_ptr; // [rsp+60h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-1D0h] BYREF
  char v34[432]; // [rsp+90h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 avatar_guid:817 64 16 14 player_ptr:801 96 16 17 cur_world_ptr:807 128 16 14 avatar_pt"
                        "r:821 160 24 18 new_avatar_vec:814 224 24 29 candidate_avatar_guid_vec:816 288 56 30 has_choose_"
                        "avatar_guid_set:815";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeam::refreshOnePlayerSlotInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  need_count = DungeonCandidateTeamPlayer::getEmptySlotCount(candidate_player);
  if ( need_count )
  {
    DungeonCandidateTeamPlayer::getPlayerPtr((DungeonCandidateTeamPlayer *const)(v2 + 64));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "refreshOnePlayerSlotInfo",
        804);
      v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v33,
             (const char (*)[29])"player_ptr null player_uid: ");
      val = DungeonCandidateTeamPlayer::getPlayerUid(candidate_player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v5 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Player::getSceneComp(v7);
      PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v2 + 96));
      if ( std::operator==<World>((const std::shared_ptr<World> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/dungeon_candidate_team.cpp",
          "refreshOnePlayerSlotInfo",
          810);
        v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v33,
               (const char (*)[32])"cur_world_ptr null player_uid: ");
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        val = Player::getUid(v9);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
        v5 = -1;
      }
      else
      {
        std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 160));
        DungeonCandidateTeamPlayer::getAvatarGuidSet(
          (std::unordered_set<long unsigned int> *)(v2 + 288),
          candidate_player);
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        DungeonCandidateTeam::getPlayerCandidateAvatar((std::vector<long unsigned int> *)(v2 + 224), this, v10);
        __for_range = (std::vector<long unsigned int> *)(v2 + 224);
        __for_begin._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v2 + 224))._M_current;
        __for_begin_0._M_current = (std::shared_ptr<Avatar> *)std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v2 + 224))._M_current;
        while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
                  &__for_begin,
                  (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)&__for_begin_0) )
        {
          v11 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8(v11);
          *(_QWORD *)(v2 + 32) = *(_QWORD *)v11;
          __y._M_cur = std::unordered_set<unsigned long>::end((std::unordered_set<long unsigned int> *const)(v2 + 288))._M_cur;
          __for_end._M_current = (std::shared_ptr<Avatar> *)std::unordered_set<unsigned long>::find(
                                                              (std::unordered_set<long unsigned int> *const)(v2 + 288),
                                                              (const std::unordered_set<long unsigned int>::key_type *)(v2 + 32))._M_cur;
          if ( std::__detail::operator==<unsigned long,false>(
                 (const std::__detail::_Node_iterator_base<long unsigned int,false> *)&__for_end,
                 &__y) )
          {
            v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            AvatarComp = Player::getAvatarComp(v12);
            PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 128), (uint64_t)AvatarComp);
            v14 = 0;
            v15 = 0;
            if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 128), 0LL) )
            {
              std::shared_ptr<Avatar>::shared_ptr(&p_avatar_ptr, (const std::shared_ptr<Avatar> *)(v2 + 128));
              v14 = 1;
              if ( !DungeonCandidateTeam::canJoinTeam(this, &p_avatar_ptr) )
                v15 = 1;
            }
            if ( v14 )
              std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
            v16 = 1;
            if ( v15 )
            {
              std::vector<std::shared_ptr<Avatar>>::push_back(
                (std::vector<std::shared_ptr<Avatar>> *const)(v2 + 160),
                (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v2 + 128));
              std::unordered_set<unsigned long>::insert(
                (std::unordered_set<long unsigned int> *const)(v2 + 288),
                (const std::unordered_set<long unsigned int>::value_type *)(v2 + 32));
              if ( std::vector<std::shared_ptr<Avatar>>::size((const std::vector<std::shared_ptr<Avatar>> *const)(v2 + 160)) >= need_count )
                v16 = 0;
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
            if ( !v16 )
              break;
          }
          __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
        }
        __for_range_0 = (std::vector<std::shared_ptr<Avatar>> *)(v2 + 160);
        __for_begin_0._M_current = std::vector<std::shared_ptr<Avatar>>::begin((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 160))._M_current;
        __for_end._M_current = std::vector<std::shared_ptr<Avatar>>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>(
                  &__for_begin_0,
                  &__for_end) )
        {
          avatar_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator*(&__for_begin_0);
          if ( std::operator!=<Avatar>(avatar_ptr, 0LL) )
          {
            std::shared_ptr<Avatar>::shared_ptr(&p_avatar_ptr, avatar_ptr);
            v17 = DungeonCandidateTeamPlayer::addAvatar(candidate_player, &p_avatar_ptr) != 0;
            std::shared_ptr<Avatar>::~shared_ptr(&p_avatar_ptr);
            if ( v17 )
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/dungeon_candidate_team.cpp",
                "refreshOnePlayerSlotInfo",
                840);
              v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v33,
                      (const char (*)[38])"player add avatar failed player_uid: ");
              val = DungeonCandidateTeamPlayer::getPlayerUid(candidate_player);
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
              v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v19,
                      (const char (*)[15])" avatar_guid: ");
              v21 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_ptr);
              __y._M_cur = (std::__detail::_Node_iterator_base<long unsigned int,false>::__node_type *)Avatar::getGuid(v21);
              common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v20,
                (const unsigned __int64 *)&__y);
              common::milog::MiLogStream::~MiLogStream(&v33);
            }
          }
          __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator++(&__for_begin_0);
        }
        v5 = 0;
        std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v2 + 224));
        std::unordered_set<unsigned long>::~unordered_set((std::unordered_set<long unsigned int> *const)(v2 + 288));
        std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 160));
      }
      std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v2 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  else
  {
    v5 = 0;
  }
  result = v5;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 848: range 0000000015566C40-0000000015567128
std::vector<long unsigned int> *__cdecl DungeonCandidateTeam::getPlayerCandidateAvatar(
        std::vector<long unsigned int> *retstr,
        DungeonCandidateTeam *const this,
        Player *player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  uint32_t Uid; // eax
  unsigned __int64 *M_current; // r15
  unsigned __int64 *v11; // r14
  PlayerAvatarComp *AvatarComp; // rax
  std::vector<long unsigned int> *AvatarVec; // rax
  unsigned __int64 *v14; // r15
  std::vector<long unsigned int> *v15; // rax
  unsigned __int64 *v16; // r14
  unsigned int val; // [rsp+24h] [rbp-14Ch] BYREF
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __i; // [rsp+28h] [rbp-148h] BYREF
  std::vector<long unsigned int>::value_type __x; // [rsp+30h] [rbp-140h] BYREF
  AvatarTeam *personal_avatar_team_ptr; // [rsp+38h] [rbp-138h]
  std::vector<long unsigned int> v23; // [rsp+40h] [rbp-130h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-110h] BYREF
  char v25[240]; // [rsp+80h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 17 cur_world_ptr:850 64 16 14 avatar_ptr:856 96 16 18 scene_team_ptr:862 128 24 30 scene"
                        "_team_avatar_guid_vec:863";
  *(_QWORD *)(v3 + 16) = DungeonCandidateTeam::getPlayerCandidateAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  std::vector<unsigned long>::vector(retstr);
  Player::getSceneComp(player);
  PlayerSceneComp::getCurWorld((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<World>((const std::shared_ptr<World> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "getPlayerCandidateAvatar",
      853);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v24,
           (const char (*)[32])"cur_world_ptr null player_uid: ");
    val = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    Player::getAvatarComp(player);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 64));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 64), 0LL) )
    {
      v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      __x = Avatar::getGuid(v7);
      std::vector<unsigned long>::push_back(retstr, &__x);
    }
    std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    World::getSceneTeam((World *const)(v3 + 96));
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 128));
    if ( std::operator!=<SceneTeam>((const std::shared_ptr<SceneTeam> *)(v3 + 96), 0LL) )
    {
      v8 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      Uid = Player::getUid(player);
      SceneTeam::getAvatarGuidVec(&v23, v8, Uid);
      std::vector<unsigned long>::operator=((std::vector<long unsigned int> *const)(v3 + 128), &v23);
      std::vector<unsigned long>::~vector(&v23);
    }
    M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v3 + 128))._M_current;
    v11 = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v3 + 128))._M_current;
    __i._M_current = std::vector<unsigned long>::end(retstr)._M_current;
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator<unsigned long *>(
      (__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__x,
      &__i);
    std::vector<unsigned long>::insert<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>,void>(
      retstr,
      (std::vector<long unsigned int>::const_iterator)__x,
      (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)v11,
      (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current);
    AvatarComp = Player::getAvatarComp(player);
    personal_avatar_team_ptr = PlayerAvatarComp::findCurAvatarTeam(AvatarComp);
    if ( personal_avatar_team_ptr )
    {
      AvatarVec = AvatarTeam::getAvatarVec(personal_avatar_team_ptr);
      v14 = std::vector<unsigned long>::end(AvatarVec)._M_current;
      v15 = AvatarTeam::getAvatarVec(personal_avatar_team_ptr);
      v16 = std::vector<unsigned long>::begin(v15)._M_current;
      __i._M_current = std::vector<unsigned long>::end(retstr)._M_current;
      __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator<unsigned long *>(
        (__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__x,
        &__i);
      std::vector<unsigned long>::insert<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>,void>(
        retstr,
        (std::vector<long unsigned int>::const_iterator)__x,
        (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)v16,
        (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)v14);
    }
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 128));
    std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v3 + 96));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v3 + 32));
  if ( v25 == (char *)v3 )
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
  return retstr;
};

// Line 879: range 000000001556712A-00000000155671F3
uint32_t __cdecl DungeonCandidateTeam::getPlayerSlotCount(
        DungeonCandidateTeam *const this,
        uint32_t all_player_count,
        bool is_leader)
{
  uint32_t my_solt_count; // [rsp+14h] [rbp-3Ch]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( all_player_count )
  {
    my_solt_count = 4 / all_player_count;
    if ( 4 % all_player_count )
    {
      if ( is_leader )
        my_solt_count += 4 % all_player_count;
    }
    return my_solt_count;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "getPlayerSlotCount",
      882);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v5, (const char (*)[21])"all_player_count = 0");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 899: range 00000000155671F4-00000000155672DC
int32_t __cdecl DungeonCandidateTeam::canJoinTeam(DungeonCandidateTeam *const this, AvatarPtr *p_avatar_ptr)
{
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<Avatar>(p_avatar_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "canJoinTeam",
      902);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])"avatar_ptr null");
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    v3 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
    if ( Creature::getLifeState(v3) == LIFE_ALIVE )
    {
      v4 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_avatar_ptr);
      if ( !Avatar::isFormal(v4) )
        return -1;
      else
        return 0;
    }
    else
    {
      return -1;
    }
  }
};

// Line 918: range 00000000155672DE-0000000015567381
bool __cdecl DungeonCandidateTeam::hasPlayerUid(DungeonCandidateTeam *const this, uint32_t player_uid)
{
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+20h] [rbp-10h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+28h] [rbp-8h]

  if ( !player_uid )
    return 0;
  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    if ( player_uid == DungeonCandidateTeamPlayer::getPlayerUid(candidate_player) )
      return 1;
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  return 0;
};

// Line 934: range 0000000015567382-0000000015567575
int32_t __cdecl DungeonCandidateTeam::toClient(
        DungeonCandidateTeam *const this,
        proto::DungeonCandidateTeamInfoNotify *notify)
{
  uint32_t PlayerUid; // edx
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+20h] [rbp-40h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  if ( this->dungeon_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    proto::DungeonCandidateTeamInfoNotify::set_dungeon_id(notify, this->dungeon_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_type_);
    }
    proto::DungeonCandidateTeamInfoNotify::set_match_type(notify, this->match_type_);
    __for_range = &this->player_list_;
    __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
    __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
      DungeonCandidateTeamPlayer::toClient(candidate_player, notify);
      if ( DungeonCandidateTeamPlayer::isReady(candidate_player) )
      {
        PlayerUid = DungeonCandidateTeamPlayer::getPlayerUid(candidate_player);
        proto::DungeonCandidateTeamInfoNotify::add_ready_player_uid(notify, PlayerUid);
      }
      std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "toClient",
      937);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v8, (const char (*)[17])" dungeon_id = 0 ");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 955: range 0000000015567576-0000000015567782
void __cdecl DungeonCandidateTeam::notifyTeamInfo(DungeonCandidateTeam *const this, uint32_t exclude_player_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-150h] BYREF
  char v6[304]; // [rsp+30h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 144 10 notify:956";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeam::notifyTeamInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862726] = -202116109;
  v4[536862727] = -202116109;
  proto::DungeonCandidateTeamInfoNotify::DungeonCandidateTeamInfoNotify((proto::DungeonCandidateTeamInfoNotify *const)(v2 + 48));
  if ( DungeonCandidateTeam::toClient(this, (proto::DungeonCandidateTeamInfoNotify *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/dungeon_candidate_team.cpp",
      "notifyTeamInfo",
      959);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v5, (const char (*)[17])" toClient error ");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    DungeonCandidateTeam::notifyToPlayers<proto::DungeonCandidateTeamInfoNotify>(
      this,
      (const proto::DungeonCandidateTeamInfoNotify *)(v2 + 48),
      exclude_player_uid);
  }
  proto::DungeonCandidateTeamInfoNotify::~DungeonCandidateTeamInfoNotify((proto::DungeonCandidateTeamInfoNotify *const)(v2 + 48));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 967: range 0000000015567784-00000000155678FB
void __cdecl DungeonCandidateTeam::notifyPlayerLeave(
        DungeonCandidateTeam *const this,
        Player *player,
        proto::DungeonCandidateTeamPlayerLeaveReason reason)
{
  proto::DungeonCandidateTeamPlayerLeaveNotify *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint32_t Uid; // eax
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (proto::DungeonCandidateTeamPlayerLeaveNotify *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (proto::DungeonCandidateTeamPlayerLeaveNotify *)v4;
  }
  v3->_vptr_MessageLite = (int (**)(...))1102416563;
  v3->_internal_metadata_.ptr_ = "1 32 32 10 notify:968";
  *(_QWORD *)&v3->reason_ = DungeonCandidateTeam::notifyPlayerLeave;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  proto::DungeonCandidateTeamPlayerLeaveNotify::DungeonCandidateTeamPlayerLeaveNotify(v3 + 1);
  Uid = Player::getUid(player);
  proto::DungeonCandidateTeamPlayerLeaveNotify::set_player_uid(v3 + 1, Uid);
  proto::DungeonCandidateTeamPlayerLeaveNotify::set_reason(v3 + 1, reason);
  DungeonCandidateTeam::notifyToPlayers<proto::DungeonCandidateTeamPlayerLeaveNotify>(this, v3 + 1, 0);
  Player::sendProto(player, v3 + 1);
  proto::DungeonCandidateTeamPlayerLeaveNotify::~DungeonCandidateTeamPlayerLeaveNotify(v3 + 1);
  if ( v8 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 978: range 00000000155678FC-0000000015567A50
void __cdecl DungeonCandidateTeam::notifyTeamDismiss(
        DungeonCandidateTeam *const this,
        uint32_t player_uid,
        proto::DungeonCandidateTeamDismissReason reason)
{
  proto::DungeonCandidateTeamDismissNotify *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (proto::DungeonCandidateTeamDismissNotify *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (proto::DungeonCandidateTeamDismissNotify *)v4;
  }
  v3->_vptr_MessageLite = (int (**)(...))1102416563;
  v3->_internal_metadata_.ptr_ = "1 32 32 10 notify:979";
  *(_QWORD *)&v3->reason_ = DungeonCandidateTeam::notifyTeamDismiss;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  proto::DungeonCandidateTeamDismissNotify::DungeonCandidateTeamDismissNotify(v3 + 1);
  proto::DungeonCandidateTeamDismissNotify::set_player_uid(v3 + 1, player_uid);
  proto::DungeonCandidateTeamDismissNotify::set_reason(v3 + 1, reason);
  DungeonCandidateTeam::notifyToPlayers<proto::DungeonCandidateTeamDismissNotify>(this, v3 + 1, 0);
  proto::DungeonCandidateTeamDismissNotify::~DungeonCandidateTeamDismissNotify(v3 + 1);
  if ( v7 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 987: range 0000000015567A52-0000000015567AF1
void __cdecl DungeonCandidateTeam::resetAvatarWtrGM(
        DungeonCandidateTeam *const this,
        uint32_t player_uid,
        uint64_t avatar_guid)
{
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+30h] [rbp-10h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+38h] [rbp-8h]

  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    if ( player_uid == DungeonCandidateTeamPlayer::getPlayerUid(candidate_player) )
      DungeonCandidateTeamPlayer::resetAvatarWtrGM(candidate_player, avatar_guid);
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
};

// Line 998: range 0000000015567AF2-0000000015567B86
void __cdecl DungeonCandidateTeam::resetPlayerWtrGM(DungeonCandidateTeam *const this, uint32_t player_uid)
{
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+20h] [rbp-10h]
  DungeonCandidateTeamPlayer *candidate_player; // [rsp+28h] [rbp-8h]

  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    candidate_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    if ( player_uid == DungeonCandidateTeamPlayer::getPlayerUid(candidate_player) )
      DungeonCandidateTeamPlayer::resetPlayerWtrGM(candidate_player);
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
};

// Line 1009: range 0000000015567B88-0000000015567E45
int32_t __cdecl DungeonCandidateTeam::foreachAvatar(
        DungeonCandidateTeam *const this,
        std::function<ForeachPolicy(Avatar&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  Avatar *v5; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-D4h]
  std::list<DungeonCandidateTeamPlayer>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::list<DungeonCandidateTeamPlayer>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_begin_0; // [rsp+30h] [rbp-C0h] BYREF
  std::vector<std::shared_ptr<Avatar>>::iterator __for_end_0; // [rsp+38h] [rbp-B8h] BYREF
  std::list<DungeonCandidateTeamPlayer> *__for_range; // [rsp+40h] [rbp-B0h]
  DungeonCandidateTeamPlayer *team_player; // [rsp+48h] [rbp-A8h]
  std::vector<std::shared_ptr<Avatar>> *__for_range_0; // [rsp+50h] [rbp-A0h]
  std::shared_ptr<Avatar> *avatar_ptr; // [rsp+58h] [rbp-98h]
  char v16[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 19 avatar_ptr_vec:1011";
  *(_QWORD *)(v2 + 16) = DungeonCandidateTeam::foreachAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  ret = 0;
  std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 32));
  __for_range = &this->player_list_;
  __for_begin._M_node = std::list<DungeonCandidateTeamPlayer>::begin(&this->player_list_)._M_node;
  __for_end._M_node = std::list<DungeonCandidateTeamPlayer>::end(&this->player_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    team_player = std::_List_iterator<DungeonCandidateTeamPlayer>::operator*(&__for_begin);
    std::vector<std::shared_ptr<Avatar>>::clear((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 32));
    DungeonCandidateTeamPlayer::getAvatarPtrVec(team_player, (std::vector<std::shared_ptr<Avatar>> *)(v2 + 32));
    __for_range_0 = (std::vector<std::shared_ptr<Avatar>> *)(v2 + 32);
    __for_begin_0._M_current = std::vector<std::shared_ptr<Avatar>>::begin((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 32))._M_current;
    __for_end_0._M_current = std::vector<std::shared_ptr<Avatar>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      avatar_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator*(&__for_begin_0);
      if ( !std::operator==<Avatar>(0LL, avatar_ptr) )
      {
        v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)avatar_ptr);
        if ( std::function<ForeachPolicy ()(Avatar &)>::operator()(p_func, v5) )
        {
          ret = 1;
          break;
        }
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator++(&__for_begin_0);
    }
    if ( ret )
      break;
    std::_List_iterator<DungeonCandidateTeamPlayer>::operator++(&__for_begin);
  }
  std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v2 + 32));
  result = ret;
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
  return result;
};

// Line 1037: range 0000000015567E46-0000000015567E9F
void __cdecl DungeonCandidateInviteInfo::resetAll(DungeonCandidateInviteInfo *const this, uint32_t vaild_sec)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->vaild_sec_ = vaild_sec;
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::clear(&this->invite_map_);
};

// Line 1043: range 0000000015567EA0-000000001556813C
__int64 __fastcall DungeonCandidateInviteInfo::getState(DungeonCandidateInviteInfo *const this, uint32_t player_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false>::pointer v6; // rdx
  proto::DungeonCandidateTeamInviteState *p_state; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false>::pointer v8; // rdx
  uint32_t *p_invite_sec; // rax
  uint32_t invite_sec; // ecx
  time_t v11; // r15
  char v12; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false>::pointer v13; // rdx
  proto::DungeonCandidateTeamInviteState *v14; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v16[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 player_uid:1042 64 8 7 it:1044";
  *(_QWORD *)(v2 + 16) = DungeonCandidateInviteInfo::getState;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = player_uid;
  *(std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::find(
                                                                                            &this->invite_map_,
                                                                                            (const std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::end(&this->invite_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false> *const)(v2 + 64));
    p_state = &v6->second.state;
    if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_state);
    }
    if ( v6->second.state != DUNGEON_CANDIDATE_TEAM_INVITE_STATE_SEND )
      goto LABEL_15;
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false> *const)(v2 + 64));
    p_invite_sec = &v8->second.invite_sec;
    if ( *(_BYTE *)(((unsigned __int64)p_invite_sec >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_invite_sec & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_invite_sec >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_invite_sec);
    }
    invite_sec = v8->second.invite_sec;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    v11 = invite_sec + this->vaild_sec_;
    if ( v11 < common::tools::TimeUtils::getNow() )
      v12 = 1;
    else
LABEL_15:
      v12 = 0;
    if ( v12 )
    {
      result = 3LL;
    }
    else
    {
      v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false> *const)(v2 + 64));
      v14 = &v13->second.state;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      result = (unsigned int)v13->second.state;
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
  return result;
};

// Line 1059: range 000000001556813E-000000001556849C
void __fastcall DungeonCandidateInviteInfo::setState(
        DungeonCandidateInviteInfo *const this,
        uint32_t player_uid,
        proto::DungeonCandidateTeamInviteState state)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t v6; // r14d
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::mapped_type *v7; // rax
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::mapped_type *v8; // rdx
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::mapped_type *v9; // rdx
  proto::DungeonCandidateTeamInviteState *p_state; // rax
  uint32_t Now; // r14d
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::mapped_type *v12; // rdx
  uint32_t *p_invite_sec; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false>::pointer v14; // rdx
  proto::DungeonCandidateTeamInviteState *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 player_uid:1058 64 8 7 it:1068";
  *(_QWORD *)(v3 + 16) = DungeonCandidateInviteInfo::setState;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = player_uid;
  if ( state == DUNGEON_CANDIDATE_TEAM_INVITE_STATE_SEND )
  {
    v6 = *(_DWORD *)(v3 + 48);
    v7 = std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::operator[](
           &this->invite_map_,
           (const std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::key_type *)(v3 + 48));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    v8->player_uid = v6;
    v9 = std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::operator[](
           &this->invite_map_,
           (const std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::key_type *)(v3 + 48));
    p_state = &v9->state;
    if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_state);
    }
    v9->state = state;
    Now = common::tools::TimeUtils::getNow();
    v12 = std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::operator[](
            &this->invite_map_,
            (const std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::key_type *)(v3 + 48));
    p_invite_sec = &v12->invite_sec;
    if ( *(_BYTE *)(((unsigned __int64)p_invite_sec >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_invite_sec & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_invite_sec >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_invite_sec);
    }
    v12->invite_sec = Now;
  }
  else
  {
    *(std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::find(
                                                                                              &this->invite_map_,
                                                                                              (const std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::key_type *)(v3 + 48));
    __y._M_cur = std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::end(&this->invite_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false> *)(v3 + 64),
           &__y) )
    {
      v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false> *const)(v3 + 64));
      v15 = &v14->second.state;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v15);
      }
      v14->second.state = state;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/dungeon_candidate_team.cpp",
        "setState",
        1075);
      v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v19,
              (const char (*)[22])" has not player_uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
  }
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
};

// Line 1081: range 000000001556849E-0000000015568718
std::string *__cdecl DungeonCandidateInviteInfo::getDesc[abi:cxx11](
        std::string *retstr,
        DungeonCandidateInviteInfo *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,DungeonCandidateInvitePlayer> *__for_range; // [rsp+20h] [rbp-A0h]
  std::pair<unsigned int const,DungeonCandidateInvitePlayer> *__in; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,DungeonCandidateInvitePlayer> >::type *uid; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,DungeonCandidateInvitePlayer> >::type *info; // [rsp+38h] [rbp-88h]
  std::string v; // [rsp+40h] [rbp-80h] BYREF
  char v13[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 ss:1082";
  *(_QWORD *)(v2 + 16) = DungeonCandidateInviteInfo::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  __for_range = &this->invite_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::begin(&this->invite_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,DungeonCandidateInvitePlayer>::end(&this->invite_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,DungeonCandidateInvitePlayer>(__in);
    info = std::get<1ul,unsigned int const,DungeonCandidateInvitePlayer>(__in);
    DungeonCandidateInvitePlayer::getDesc[abi:cxx11](&v, info);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
      &v);
    std::string::~string(&v);
    std::__detail::_Node_iterator<std::pair<unsigned int const,DungeonCandidateInvitePlayer>,false,false>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
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

// Line 1091: range 000000001556871A-00000000155689A0
std::string *__cdecl DungeonCandidateInvitePlayer::getDesc[abi:cxx11](
        std::string *retstr,
        DungeonCandidateInvitePlayer *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 ss:1092";
  *(_QWORD *)(v2 + 16) = DungeonCandidateInvitePlayer::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "invite_info player_uid: ");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->player_uid);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " state: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->state);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " sec: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->invite_sec >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_sec >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->invite_sec);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->invite_sec);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v11 == (char *)v2 )
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
