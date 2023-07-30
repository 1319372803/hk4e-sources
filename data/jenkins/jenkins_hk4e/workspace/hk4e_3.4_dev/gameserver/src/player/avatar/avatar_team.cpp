// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/avatar/avatar_team.cpp

// Line 16: range 00000000161EE18C-00000000161EE25F
__int64 __fastcall AvatarTeam::addAvatar(AvatarTeam *const this, uint64_t avatar_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 avatar_id:16";
  *(_QWORD *)(v2 + 16) = AvatarTeam::addAvatar;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = avatar_id;
  std::vector<unsigned long>::emplace_back<unsigned long &>(
    &this->avatar_vec_,
    (unsigned __int64 *)(v2 + 32),
    (unsigned __int64 *)(v2 + 32));
  result = 0LL;
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

// Line 22: range 00000000161EE260-00000000161EE485
__int64 __fastcall AvatarTeam::delAvatar(AvatarTeam *const this, uint64_t avatar_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 *M_current; // r14
  std::vector<long unsigned int>::iterator v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > __rhs; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 5 it:23 64 8 12 avatar_id:22";
  *(_QWORD *)(v2 + 16) = AvatarTeam::delAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  *(_QWORD *)(v2 + 64) = avatar_id;
  M_current = std::vector<unsigned long>::end(&this->avatar_vec_)._M_current;
  v6._M_current = std::vector<unsigned long>::begin(&this->avatar_vec_)._M_current;
  *(__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v2 + 32) = std::find<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>,unsigned long>(
                                                                                                     v6,
                                                                                                     (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current,
                                                                                                     (const unsigned __int64 *)(v2 + 64));
  __rhs._M_current = std::vector<unsigned long>::end(&this->avatar_vec_)._M_current;
  if ( __gnu_cxx::operator==<unsigned long *,std::vector<unsigned long>>(
         (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v2 + 32),
         &__rhs) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/avatar/avatar_team.cpp",
      "delAvatar",
      26);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v10,
           (const char (*)[36])"no such avatar in team, avatar_id: ");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::__normal_iterator<unsigned long *>(
      (__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&__rhs,
      (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v2 + 32));
    std::vector<unsigned long>::erase(
      &this->avatar_vec_,
      (std::vector<long unsigned int>::const_iterator)__rhs._M_current);
    result = 0LL;
  }
  if ( v11 == (char *)v2 )
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
