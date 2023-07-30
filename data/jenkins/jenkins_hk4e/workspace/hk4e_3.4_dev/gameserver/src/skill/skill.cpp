// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/skill/skill.cpp

// Line 29: range 0000000018018002-000000001801813E
const data::AvatarSkillExcelConfig *__cdecl Skill::getConfig(const Skill *const this)
{
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  const data::AvatarSkillExcelConfig *skill_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                       p_avatar_skill_config_mgr,
                       this->skill_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( skill_config_ptr )
    return skill_config_ptr;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/skill/skill.cpp",
    "getConfig",
    33);
  v2 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v6,
         (const char (*)[44])"findAvatarSkillExcelConfig fails, skill_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->skill_id_);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0LL;
};

// Line 41: range 0000000018018140-000000001801841B
__int64 __fastcall Skill::onLogin(Skill *const this, uint64_t cur_client_time_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint64_t v5; // rdx
  uint64_t v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  common::milog::MiLogStream v17; // [rsp+10h] [rbp-80h] BYREF
  char v18[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 21 cur_client_time_ms:40";
  *(_QWORD *)(v2 + 16) = Skill::onLogin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = cur_client_time_ms;
  if ( std::list<unsigned int>::size(&this->full_cd_time_list_) )
  {
    v5 = *(_QWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->cd_start_time_ms_, cur_client_time_ms);
    this->cd_start_time_ms_ = v5;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->pass_cd_time_ms_ && (unsigned __int64)this->pass_cd_time_ms_ < *(_QWORD *)(v2 + 32) )
  {
    v6 = *(_QWORD *)(v2 + 32) - this->pass_cd_time_ms_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->cd_start_time_ms_, cur_client_time_ms);
    this->cd_start_time_ms_ = v6;
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/skill/skill.cpp",
    "onLogin",
    52);
  v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v17,
         (const char (*)[24])"[SKILL LOGIN] skill_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->skill_id_);
  v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v8, (const char (*)[21])" cur_client_time_ms:");
  v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v9,
          (const unsigned __int64 *)(v2 + 32));
  v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])" cd_start_time_ms_:");
  v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &this->cd_start_time_ms_);
  v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" pass_cd_time_ms_:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->pass_cd_time_ms_);
  v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v14, (const char (*)[21])" full_cd_time_list_:");
  common::milog::MiLogStream::operator<<<unsigned int>(v15, &this->full_cd_time_list_);
  common::milog::MiLogStream::~MiLogStream(&v17);
  result = 0LL;
  if ( v18 == (char *)v2 )
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

// Line 61: range 000000001801841C-000000001801843A
int32_t __cdecl Skill::onDisconnect(Skill *const this)
{
  Skill::updateCdTime(this);
  return 0;
};

// Line 68: range 000000001801843C-00000000180186AA
int32_t __cdecl Skill::fromBin(Skill *const this, const proto::AvatarSkillBin *skill_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // edx
  char v6; // al
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  const proto::AvatarSkillBin *skill_bina; // [rsp+0h] [rbp-A0h]
  int i; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-80h] BYREF
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  skill_bina = skill_bin;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 full_cd_time_ms:72";
  *(_QWORD *)(v2 + 16) = Skill::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::AvatarSkillBin::pass_cd_time(skill_bin);
  v6 = *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(skill_bin) = v6 != 0;
    __asan_report_store4(&this->pass_cd_time_ms_, skill_bin, v5);
  }
  this->pass_cd_time_ms_ = v5;
  for ( i = 0; i < proto::AvatarSkillBin::full_cd_time_list_size(skill_bina); ++i )
  {
    *(_DWORD *)(v2 + 32) = proto::AvatarSkillBin::full_cd_time_list(skill_bina, i);
    std::list<unsigned int>::push_back(
      &this->full_cd_time_list_,
      (const std::list<unsigned int>::value_type *)(v2 + 32));
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/skill/skill.cpp",
    "fromBin",
    76);
  v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v17,
         (const char (*)[24])"[SKILL LOGIN] skill_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->skill_id_);
  v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" cd_start_time_ms_:");
  v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &this->cd_start_time_ms_);
  v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v10, (const char (*)[19])" pass_cd_time_ms_:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->pass_cd_time_ms_);
  v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v12, (const char (*)[21])" full_cd_time_list_:");
  common::milog::MiLogStream::operator<<<unsigned int>(v13, &this->full_cd_time_list_);
  common::milog::MiLogStream::~MiLogStream(&v17);
  result = 0;
  if ( v18 == (char *)v2 )
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

// Line 84: range 00000000180186AC-00000000180187BA
int32_t __cdecl Skill::toBin(const Skill *const this, proto::AvatarSkillBin *skill_bin)
{
  google::protobuf::uint32 *v2; // rdx
  std::list<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::list<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::list<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::AvatarSkillBin::set_pass_cd_time(skill_bin, this->pass_cd_time_ms_);
  __for_range = &this->full_cd_time_list_;
  __for_begin._M_node = std::list<unsigned int>::begin(&this->full_cd_time_list_)._M_node;
  __for_end._M_node = std::list<unsigned int>::end(&this->full_cd_time_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_List_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AvatarSkillBin::add_full_cd_time_list(skill_bin, *v2);
    std::_List_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  return 0;
};

// Line 95: range 00000000180187BC-00000000180188EA
int32_t __cdecl Skill::toClient(const Skill *const this, proto::AvatarSkillInfo *skill_info)
{
  google::protobuf::uint32 *v2; // rdx
  uint32_t MaxChargeCount; // edx
  std::list<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::list<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::list<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::AvatarSkillInfo::set_pass_cd_time(skill_info, this->pass_cd_time_ms_);
  __for_range = &this->full_cd_time_list_;
  __for_begin._M_node = std::list<unsigned int>::begin(&this->full_cd_time_list_)._M_node;
  __for_end._M_node = std::list<unsigned int>::end(&this->full_cd_time_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_List_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AvatarSkillInfo::add_full_cd_time_list(skill_info, *v2);
    std::_List_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  MaxChargeCount = Skill::getMaxChargeCount(this);
  proto::AvatarSkillInfo::set_max_charge_count(skill_info, MaxChargeCount);
  return 0;
};

// Line 108: range 00000000180188EC-0000000018018CEF
void __cdecl Skill::updateCdTime(Skill *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int v4; // r14d
  uint64_t *p_cd_start_time_ms; // rsi
  unsigned __int64 v6; // rax
  uint32_t v7; // ecx
  char v8; // al
  std::_List_iterator<unsigned int>::_Self *p_y; // rsi
  std::_List_iterator<unsigned int>::reference v10; // rdx
  char v11; // cl
  uint32_t full_cd_time_ms; // [rsp+14h] [rbp-9Ch]
  std::_List_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v14[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 22 cur_client_time_ms:115 64 8 6 it:117";
  *(_QWORD *)(v1 + 16) = Skill::updateCdTime;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->cd_start_time_ms_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_QWORD *)(v1 + 32) = Avatar::getPlayerTimeMs(this->avatar_) + 200;
    v4 = *(_QWORD *)(v1 + 32);
    p_cd_start_time_ms = &this->cd_start_time_ms_;
    v6 = (unsigned __int64)std::min<unsigned long>((const unsigned __int64 *)(v1 + 32), &this->cd_start_time_ms_);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = v4 - *(_QWORD *)v6;
    v8 = *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(p_cd_start_time_ms) = v8 != 0;
      __asan_report_store4(&this->pass_cd_time_ms_, p_cd_start_time_ms, (_BYTE)this + 24);
    }
    this->pass_cd_time_ms_ = v7;
    for ( *(std::list<unsigned int>::iterator *)(v1 + 64) = std::list<unsigned int>::begin(&this->full_cd_time_list_);
          ;
          *(std::list<unsigned int>::iterator *)(v1 + 64) = std::list<unsigned int>::erase(
                                                              &this->full_cd_time_list_,
                                                              (std::list<unsigned int>::const_iterator)__y._M_node) )
    {
      __y._M_node = std::list<unsigned int>::end(&this->full_cd_time_list_)._M_node;
      p_y = &__y;
      if ( !std::operator!=((const std::_List_iterator<unsigned int>::_Self *)(v1 + 64), &__y) )
        break;
      v10 = std::_List_iterator<unsigned int>::operator*((const std::_List_iterator<unsigned int> *const)(v1 + 64));
      v11 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
      LOBYTE(p_y) = v11 != 0;
      if ( v11 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v11 )
        __asan_report_load4();
      full_cd_time_ms = *v10;
      if ( *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( full_cd_time_ms > this->pass_cd_time_ms_ )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      this->pass_cd_time_ms_ -= full_cd_time_ms;
      if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      this->cd_start_time_ms_ += full_cd_time_ms;
      std::_List_const_iterator<unsigned int>::_List_const_iterator(
        (std::_List_const_iterator<unsigned int> *const)&__y,
        (const std::_List_const_iterator<unsigned int>::iterator *)(v1 + 64));
    }
    if ( std::list<unsigned int>::empty(&this->full_cd_time_list_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_store8(&this->cd_start_time_ms_, p_y);
      this->cd_start_time_ms_ = 0LL;
    }
  }
  if ( v14 == (char *)v1 )
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

// Line 139: range 0000000018018CF0-0000000018018F0E
void __cdecl Skill::changeCurrentSkillCdTime(Skill *const this, float delta, float cd_ratio)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::list<unsigned int>::reference v6; // rdx
  const float *v7; // rdx
  float __a; // [rsp+18h] [rbp-68h] BYREF
  float __b; // [rsp+1Ch] [rbp-64h] BYREF
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 cd_time:144";
  *(_QWORD *)(v3 + 16) = Skill::changeCurrentSkillCdTime;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  Skill::updateCdTime(this);
  if ( !std::list<unsigned int>::empty(&this->full_cd_time_list_) )
  {
    v6 = std::list<unsigned int>::front(&this->full_cd_time_list_);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v6;
    std::list<unsigned int>::pop_front(&this->full_cd_time_list_);
    __b = (float)(cd_ratio + 1.0) * (float)((float)(1000.0 * delta) + (float)*(int *)(v3 + 32));
    __a = 0.0;
    v7 = std::max<float>(&__a, &__b);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = (int)*v7;
    if ( *(_DWORD *)(v3 + 32) )
      std::list<unsigned int>::push_front(
        &this->full_cd_time_list_,
        (const std::list<unsigned int>::value_type *)(v3 + 32));
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 157: range 0000000018018F10-0000000018018FC4
void __cdecl Skill::modifyCdTime(Skill *const this, float delta, float ratio)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_time_delta_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd_time_delta_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  this->cd_time_delta_ = this->cd_time_delta_ + delta;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_time_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_time_ratio_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  this->cd_time_ratio_ = this->cd_time_ratio_ + ratio;
};

// Line 164: range 0000000018018FC6-000000001801907A
void __cdecl Skill::modifyElemCost(Skill *const this, float delta, float ratio)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_elem_delta_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_elem_delta_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  this->cost_elem_delta_ = this->cost_elem_delta_ + delta;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_elem_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_elem_ratio_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  this->cost_elem_ratio_ = this->cost_elem_ratio_ + ratio;
};

// Line 171: range 000000001801907C-000000001801936D
void __cdecl Skill::modifyMaxChargeCount(Skill *const this, float delta)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<proto::AvatarSkillMaxChargeCountNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  uint64_t Guid; // rax
  std::__shared_ptr_access<proto::AvatarSkillMaxChargeCountNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto::AvatarSkillMaxChargeCountNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Avatar *avatar; // r14
  google::protobuf::uint32 max_charge_count; // [rsp+1Ch] [rbp-84h]
  std::shared_ptr<proto::AvatarSkillMaxChargeCountNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:175";
  *(_QWORD *)(v2 + 16) = Skill::modifyMaxChargeCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_charge_count_delta_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_charge_count_delta_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  this->max_charge_count_delta_ = (int)(float)((float)this->max_charge_count_delta_ + delta);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Avatar::isInited(this->avatar_) )
  {
    common::tools::perf::make_shared<proto::AvatarSkillMaxChargeCountNotify>();
    v5 = std::__shared_ptr_access<proto::AvatarSkillMaxChargeCountNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillMaxChargeCountNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Guid = Avatar::getGuid(this->avatar_);
    proto::AvatarSkillMaxChargeCountNotify::set_avatar_guid(v5, Guid);
    v7 = std::__shared_ptr_access<proto::AvatarSkillMaxChargeCountNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillMaxChargeCountNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::AvatarSkillMaxChargeCountNotify::set_skill_id(v7, this->skill_id_);
    max_charge_count = Skill::getMaxChargeCount(this);
    v8 = std::__shared_ptr_access<proto::AvatarSkillMaxChargeCountNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillMaxChargeCountNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    proto::AvatarSkillMaxChargeCountNotify::set_max_charge_count(v8, max_charge_count);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    avatar = this->avatar_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::AvatarSkillMaxChargeCountNotify>(&__r);
    Avatar::sendMessage(avatar, (common::minet::ConstMessagePtr *)&__r);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::AvatarSkillMaxChargeCountNotify>::~shared_ptr((std::shared_ptr<proto::AvatarSkillMaxChargeCountNotify> *const)(v2 + 32));
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

// Line 186: range 000000001801936E-000000001801949D
uint32_t __cdecl Skill::getMaxChargeCount(const Skill *const this)
{
  int32_t max_charge_num; // ecx
  const data::AvatarSkillExcelConfig *skill_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  skill_config_ptr = Skill::getConfig(this);
  if ( skill_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->max_charge_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&skill_config_ptr->max_charge_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    max_charge_num = skill_config_ptr->max_charge_num;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_charge_count_delta_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_charge_count_delta_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( max_charge_num + this->max_charge_count_delta_ >= 0 )
      return max_charge_num + this->max_charge_count_delta_;
    else
      return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill.cpp",
      "getMaxChargeCount",
      190);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v4, (const char (*)[16])"getConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 0;
  }
};

// Line 203: range 000000001801949E-00000000180195CC
uint64_t __cdecl Skill::getLeftCdTime(const Skill *const this)
{
  std::_List_const_iterator<unsigned int>::reference v2; // rdx
  uint32_t total_cd_time_ms; // [rsp+1Ch] [rbp-24h]
  uint32_t left_cd_time_ms; // [rsp+20h] [rbp-20h]
  std::list<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-18h] BYREF
  std::list<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-10h] BYREF
  const std::list<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  if ( std::list<unsigned int>::empty(&this->full_cd_time_list_) )
    return 0LL;
  total_cd_time_ms = 0;
  __for_range = &this->full_cd_time_list_;
  __for_begin._M_node = std::list<unsigned int>::begin(&this->full_cd_time_list_)._M_node;
  __for_end._M_node = std::list<unsigned int>::end(&this->full_cd_time_list_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = std::_List_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    total_cd_time_ms += *v2;
    std::_List_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  left_cd_time_ms = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( total_cd_time_ms > this->pass_cd_time_ms_ )
    return total_cd_time_ms - this->pass_cd_time_ms_;
  return left_cd_time_ms;
};

// Line 223: range 00000000180195CE-000000001801A9C3
int32_t __cdecl Skill::onSkillStart(Skill *const this, const SkillStartParam *param)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  __m128i overall_max_low; // xmm0
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  FightPropComp *FightPropComp; // rax
  float *v17; // rdx
  float cd_time; // xmm1_4
  float v19; // xmm1_4
  const float *v20; // rdx
  char v21; // cl
  char *v22; // rsi
  uint64_t PlayerTimeMs; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  int32_t max_charge_num; // ecx
  std::list<unsigned int>::size_type v34; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // r14
  uint32_t SkillId; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r14
  google::protobuf::uint32 v43; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // r14
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  const std::string *v46; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // r14
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  const std::string *v49; // rax
  Entity *v50; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rax
  proto_log::EntityLog *v52; // rax
  Entity *v53; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  proto_log::EntityLog *v55; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  uint32_t Uid; // eax
  Player *v59; // r14
  float cost_stamina; // xmm1_4
  __m128i v61; // xmm0
  __int64 v62; // rsi
  __int64 v63; // rax
  char v64; // dl
  bool v65; // dl
  Avatar *v66; // r14
  float __a; // [rsp+14h] [rbp-156Ch] BYREF
  float minus_ratio; // [rsp+18h] [rbp-1568h]
  float cd_multipler; // [rsp+1Ch] [rbp-1564h]
  int32_t max_charge_count; // [rsp+20h] [rbp-1560h]
  float energy_cost_val; // [rsp+24h] [rbp-155Ch]
  unsigned __int64 val; // [rsp+28h] [rbp-1558h] BYREF
  const data::AvatarSkillExcelConfig *skill_config_ptr; // [rsp+30h] [rbp-1550h]
  const data::AbilityPropExcelConfig *ability_prop_config_ptr; // [rsp+38h] [rbp-1548h]
  std::shared_ptr<google::protobuf::Message> v77; // [rsp+40h] [rbp-1540h] BYREF
  common::milog::MiLogStream v78; // [rsp+50h] [rbp-1530h] BYREF
  char v79[5392]; // [rsp+70h] [rbp-1510h] BYREF

  v2 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(5344LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 19 full_cd_time_ms:238 64 4 13 min_limit:250 80 4 13 max_limit:251 96 4 17 delta_stamina:"
                        "318 112 16 14 player_ptr:230 144 16 13 param_ptr:328 176 28 24 stamina_change_param:320 240 4840"
                        " 20 ability_property:252";
  *(_QWORD *)(v2 + 16) = Skill::onSkillStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = 61956;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -219020288;
  v4[536862727] = 62194;
  v4[536862878] = -218103808;
  v4[536862879] = -202116109;
  v4[536862880] = -202116109;
  v4[536862881] = -202116109;
  v4[536862882] = -202116109;
  v4[536862883] = -202116109;
  v4[536862884] = -202116109;
  v4[536862885] = -202116109;
  v4[536862886] = -202116109;
  skill_config_ptr = Skill::getConfig(this);
  if ( !skill_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill.cpp",
      "onSkillStart",
      227);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v78, (const char (*)[16])"getConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v78);
    v5 = -1;
    goto LABEL_98;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v8 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v8)(v2 + 112, avatar);
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 112), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/skill/skill.cpp",
      "onSkillStart",
      233);
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v78,
           (const char (*)[24])"player is null, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v78);
    v5 = -1;
    goto LABEL_97;
  }
  Skill::updateCdTime(this);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->cd_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)skill_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->cd_time >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( skill_config_ptr->cd_time <= 0.0 )
  {
LABEL_56:
    if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->max_charge_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&skill_config_ptr->max_charge_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    max_charge_num = skill_config_ptr->max_charge_num;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_charge_count_delta_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_charge_count_delta_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    max_charge_count = max_charge_num + this->max_charge_count_delta_;
    v34 = std::list<unsigned int>::size(&this->full_cd_time_list_);
    if ( v34 > max_charge_count )
    {
      common::tools::perf::make_shared<proto_log::AntiCheatBodySkillCdWrong>();
      v35 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarId = Avatar::getAvatarId(this->avatar_);
      proto_log::AntiCheatBodySkillCdWrong::set_avatar_id(v35, AvatarId);
      v37 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      SkillId = Skill::getSkillId(this);
      proto_log::AntiCheatBodySkillCdWrong::set_skill_id(v37, SkillId);
      v39 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      proto_log::AntiCheatBodySkillCdWrong::set_skill_cd(v39, (float)*(int *)(v2 + 48));
      v40 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::AntiCheatBodySkillCdWrong::set_skill_pass_time(v40, (float)(int)this->pass_cd_time_ms_);
      v41 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      proto_log::AntiCheatBodySkillCdWrong::set_max_charge_count(v41, max_charge_count);
      v42 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      v43 = std::list<unsigned int>::size(&this->full_cd_time_list_);
      proto_log::AntiCheatBodySkillCdWrong::set_cd_list_len(v42, v43);
      if ( std::operator!=<ActorAbility>(0LL, &param->ability_action_param.ability_ptr) )
      {
        v44 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        v45 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->ability_action_param);
        v46 = ActorAbility::getName[abi:cxx11](v45);
        proto_log::AntiCheatBodySkillCdWrong::set_ability_name(v44, v46);
      }
      if ( std::operator!=<ActorModifier>(0LL, &param->ability_action_param.modifier_ptr) )
      {
        v47 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        v48 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->ability_action_param.modifier_ptr);
        v49 = ActorModifier::getName[abi:cxx11](v48);
        proto_log::AntiCheatBodySkillCdWrong::set_modifier_name(v47, v49);
      }
      if ( std::operator!=<Creature>(0LL, &param->ability_action_param.source_ptr) )
      {
        v50 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->ability_action_param.source_ptr);
        v51 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        v52 = proto_log::AntiCheatBodySkillCdWrong::mutable_source_entity(v51);
        Entity::getEntityLog(v50, v52);
      }
      if ( std::operator!=<Creature>(0LL, &param->ability_action_param.target_ptr) )
      {
        v53 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->ability_action_param.target_ptr);
        v54 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        v55 = proto_log::AntiCheatBodySkillCdWrong::mutable_target_entity(v54);
        Entity::getEntityLog(v53, v55);
      }
      if ( std::operator!=<Player>(0LL, &param->ability_action_param.from_player_ptr) )
      {
        v56 = std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodySkillCdWrong,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        v57 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->ability_action_param.from_player_ptr);
        Uid = Player::getUid(v57);
        proto_log::AntiCheatBodySkillCdWrong::set_from_player_uid(v56, Uid);
      }
      v59 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodySkillCdWrong,void>(
        &v77,
        (const std::shared_ptr<proto_log::AntiCheatBodySkillCdWrong> *)(v2 + 144));
      Player::printAntiCheatLog(v59, ANTI_CHEAT_SKILL_CD_WRONG, &v77);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v77);
      std::shared_ptr<proto_log::AntiCheatBodySkillCdWrong>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodySkillCdWrong> *const)(v2 + 144));
    }
    if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->cost_stamina >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->cost_stamina >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    cost_stamina = skill_config_ptr->cost_stamina;
    if ( *(_BYTE *)(((unsigned __int64)&param->cost_stamina_ratio >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->cost_stamina_ratio >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(float *)(v2 + 96) = param->cost_stamina_ratio * cost_stamina;
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Avatar::updateStaminaCost(this->avatar_, (float *)(v2 + 96), 0LL);
    *(_QWORD *)(v2 + 176) = 0LL;
    *(_QWORD *)(v2 + 184) = 0LL;
    *(_QWORD *)(v2 + 192) = 0LL;
    *(_DWORD *)(v2 + 200) = 0;
    *(_DWORD *)(v2 + 176) = 5;
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 180) = Entity::getMotionState((Entity *const)this->avatar_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 184) = this->skill_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v61 = (__m128i)_mm_xor_ps((__m128)*(unsigned int *)(v2 + 96), (__m128)0x80000000);
    Avatar::changeStamina(this->avatar_, *(float *)v61.m128i_i32, (const StaminaChangeParam *)(v2 + 176), 0);
    *(float *)v61.m128i_i32 = Skill::getMaxElemEnergy(this, 1);
    energy_cost_val = COERCE_FLOAT(_mm_cvtsi128_si32(v61));
    if ( energy_cost_val > 0.00000011920929 )
    {
      common::tools::perf::make_shared<FightPropNtfParam>();
      v62 = 0LL;
      if ( std::operator!=<FightPropNtfParam>((const std::shared_ptr<FightPropNtfParam> *)(v2 + 144), 0LL) )
      {
        v63 = (__int64)std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FightPropNtfParam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
        v64 = *(_BYTE *)(((unsigned __int64)(v63 + 40) >> 3) + 0x7FFF8000);
        LOBYTE(v62) = v64 != 0;
        v65 = v64 != 0 && v64 <= 3;
        if ( v65 )
          v63 = __asan_report_store4(v63 + 40, v62, v65);
        *(_DWORD *)(v63 + 40) = 1;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v66 = this->avatar_;
      std::shared_ptr<FightPropNtfParam>::shared_ptr(
        (std::shared_ptr<FightPropNtfParam> *const)&v77,
        (const std::shared_ptr<FightPropNtfParam> *)(v2 + 144));
      Creature::changeCurEnergy(v66, -energy_cost_val, 1, (FightPropNtfParamPtr *)&v77);
      std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&v77);
      std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)(v2 + 144));
    }
    v5 = 0;
    goto LABEL_97;
  }
  if ( std::list<unsigned int>::size(&this->full_cd_time_list_) <= 0x64 )
  {
    *(_DWORD *)(v2 + 64) = 0;
    overall_max_low = (__m128i)0x3F800000u;
    *(_DWORD *)(v2 + 80) = 1065353216;
    data::AbilityProperty::AbilityProperty((data::AbilityProperty *const)(v2 + 240));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v77);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77);
    ability_prop_config_ptr = data::AbilityPropExcelConfigMgrBase::findAbilityPropExcelConfig(
                                &v15->design_config.txt_config_mgr.ability_prop_config_mgr,
                                (const std::string *)(v2 + 3576));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v77);
    if ( ability_prop_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&ability_prop_config_ptr->overall_min >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&ability_prop_config_ptr->overall_min >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(float *)(v2 + 64) = ability_prop_config_ptr->overall_min;
      if ( *(_BYTE *)(((unsigned __int64)&ability_prop_config_ptr->overall_max >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)ability_prop_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ability_prop_config_ptr->overall_max >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      overall_max_low = (__m128i)LODWORD(ability_prop_config_ptr->overall_max);
      *(_DWORD *)(v2 + 80) = overall_max_low.m128i_i32[0];
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    FightPropComp = Creature::getFightPropComp(this->avatar_);
    *(float *)overall_max_low.m128i_i32 = FightPropComp::getPropValue(FightPropComp, FIGHT_PROP_SKILL_CD_MINUS_RATIO, 1);
    *(_DWORD *)(v2 + 96) = _mm_cvtsi128_si32(overall_max_low);
    v17 = (float *)std::clamp<float>((const float *)(v2 + 96), (const float *)(v2 + 64), (const float *)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    minus_ratio = *v17;
    if ( *(char *)(((unsigned __int64)&skill_config_ptr->ignore_cd_minus_ratio >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&skill_config_ptr->ignore_cd_minus_ratio);
    if ( skill_config_ptr->ignore_cd_minus_ratio )
      minus_ratio = 0.0;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    cd_multipler = (float)(1.0 - minus_ratio) * param->cd_ratio;
    if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->cd_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->cd_time >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    cd_time = skill_config_ptr->cd_time;
    if ( *(_BYTE *)(((unsigned __int64)&this->cd_time_delta_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cd_time_delta_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v19 = cd_time + this->cd_time_delta_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cd_time_ratio_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_time_ratio_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(float *)(v2 + 96) = 1000.0 * (float)((float)((float)(this->cd_time_ratio_ + 1.0) * v19) * cd_multipler);
    __a = 0.0;
    v22 = (char *)(v2 + 96);
    v20 = std::max<float>(&__a, (const float *)(v2 + 96));
    v21 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
    LOBYTE(v22) = v21 != 0;
    if ( v21 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v21 )
      __asan_report_load4();
    *(_DWORD *)(v2 + 48) = (int)*v20;
    if ( std::list<unsigned int>::empty(&this->full_cd_time_list_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerTimeMs = Avatar::getPlayerTimeMs(this->avatar_);
      if ( *(_BYTE *)(((unsigned __int64)&this->cd_start_time_ms_ >> 3) + 0x7FFF8000) )
        PlayerTimeMs = __asan_report_store8(&this->cd_start_time_ms_, v22);
      this->cd_start_time_ms_ = PlayerTimeMs;
      if ( *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->pass_cd_time_ms_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->pass_cd_time_ms_, v22, (_BYTE)this + 24);
      }
      this->pass_cd_time_ms_ = 0;
    }
    std::list<unsigned int>::push_back(
      &this->full_cd_time_list_,
      (const std::list<unsigned int>::value_type *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/skill/skill.cpp",
      "onSkillStart",
      279);
    v24 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v78,
            (const char (*)[33])"[CD_TIME] skill start, skill_id:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->skill_id_);
    v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])", cd:");
    v27 = common::milog::MiLogStream::operator<<<unsigned int>(v26, &this->full_cd_time_list_);
    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v27, (const char (*)[16])" cd_start_time:");
    v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v28, &this->cd_start_time_ms_);
    v30 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v29, (const char (*)[17])" passed_cd_time:");
    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &this->pass_cd_time_ms_);
    v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v32, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v78);
    data::AbilityProperty::~AbilityProperty((data::AbilityProperty *const)(v2 + 240));
    goto LABEL_56;
  }
  common::milog::MiLogStream::create(
    &v78,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/skill/skill.cpp",
    "onSkillStart",
    245);
  v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          &v78,
          (const char (*)[47])"length is too long! full_cd_time_list_.size():");
  val = std::list<unsigned int>::size(&this->full_cd_time_list_);
  v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
  v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
  v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  operator<<(v12, v13);
  common::milog::MiLogStream::~MiLogStream(&v78);
  v5 = -1;
LABEL_97:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 112));
LABEL_98:
  if ( v79 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8278) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8280) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8288) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8290) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8298) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 5344LL, v79);
  }
  return v5;
};

// Line 340: range 000000001801A9C4-000000001801ABC5
float __cdecl Skill::getMaxElemEnergy(Skill *const this, bool is_include_ability)
{
  common::milog::MiLogStream *v2; // rdx
  __m128i v4; // xmm0
  AbilityComp *AbilityComp; // rbx
  GameserverService *v6; // rax
  float v7; // xmm1_4
  float v8; // xmm1_4
  float prop_energy_cost_delta; // [rsp+10h] [rbp-40h]
  const data::AvatarSkillExcelConfig *skill_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  skill_config_ptr = Skill::getConfig(this);
  if ( skill_config_ptr )
  {
    v4 = 0LL;
    prop_energy_cost_delta = 0.0;
    if ( is_include_ability )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AbilityComp = Creature::getAbilityComp(this->avatar_);
      v6 = ServiceBox::findService<GameserverService>();
      *(float *)v4.m128i_i32 = AbilityComp::getProperty(AbilityComp, &v6->ability_data_mgr.ACTOR_ENERGY_COST_DELTA);
      prop_energy_cost_delta = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    }
    if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->cost_elem_val >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->cost_elem_val >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v7 = skill_config_ptr->cost_elem_val + prop_energy_cost_delta;
    if ( *(_BYTE *)(((unsigned __int64)&this->cost_elem_delta_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cost_elem_delta_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = v7 + this->cost_elem_delta_;
    if ( *(_BYTE *)(((unsigned __int64)&this->cost_elem_ratio_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_elem_ratio_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return (float)(this->cost_elem_ratio_ + 1.0) * v8;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill.cpp",
      "getMaxElemEnergy",
      344);
    v2 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v11,
           (const char (*)[27])"getConfig fails, skill_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->skill_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return 0.0;
  }
};

// Line 357: range 000000001801ABC6-000000001801AC1C
int32_t __cdecl Skill::checkUse(Skill *const this)
{
  std::list<unsigned int>::size_type v1; // rbx

  Skill::updateCdTime(this);
  v1 = std::list<unsigned int>::size(&this->full_cd_time_list_);
  return v1 >= Skill::getMaxChargeCount(this);
};
