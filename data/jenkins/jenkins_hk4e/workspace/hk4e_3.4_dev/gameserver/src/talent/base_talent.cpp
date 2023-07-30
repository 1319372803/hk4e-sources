// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/base_talent.cpp

// Line 25: range 00000000131591FC-00000000131592EA
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const BaseTalent *base_talent)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+10h] [rbp-20h] BYREF
  unsigned int GroupId; // [rsp+14h] [rbp-1Ch] BYREF
  unsigned int Level; // [rsp+18h] [rbp-18h] BYREF
  unsigned int v14[5]; // [rsp+1Ch] [rbp-14h] BYREF

  v2 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(stream, (const char (*)[18])"base_talent: [id:");
  val = BaseTalent::getId(base_talent);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v3, (const char (*)[11])" group_id:");
  GroupId = BaseTalent::getGroupId(base_talent);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &GroupId);
  v6 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v5, (const char (*)[8])" level:");
  Level = BaseTalent::getLevel(base_talent);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &Level);
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" extra_level:");
  v14[0] = BaseTalent::getExtraLevel(base_talent);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, v14);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v9, (const char (*)[2])"]");
  return stream;
};

// Line 32: range 00000000131592EC-000000001315934F
std::pair<long unsigned int,unsigned int> __cdecl BaseTalent::getTalentKey(const BaseTalent *const this)
{
  unsigned __int64 __x[3]; // [rsp+18h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x[0] = Avatar::getGuid(this->avatar_);
  return std::make_pair<unsigned long,unsigned int const&>(__x, &this->id_);
};

// Line 38: range 0000000013159350-0000000013159511
bool __cdecl BaseTalent::isContainsTalentAddExtraLevelMixin(const BaseTalent *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const std::shared_ptr<BaseTalentMixin> *v4; // rax
  bool v5; // r14
  int v6; // r14d
  bool result; // al
  bool v8; // [rsp+7h] [rbp-A9h]
  std::vector<std::shared_ptr<BaseTalentMixin>>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<BaseTalentMixin>>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const std::vector<std::shared_ptr<BaseTalentMixin>> *__for_range; // [rsp+28h] [rbp-88h]
  std::shared_ptr<BaseTalentMixin> __r; // [rsp+30h] [rbp-80h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 mixin_ptr:39";
  *(_QWORD *)(v1 + 16) = BaseTalent::isContainsTalentAddExtraLevelMixin;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->mixin_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<BaseTalentMixin>>::begin(&this->mixin_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<BaseTalentMixin>>::end(&this->mixin_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<BaseTalentMixin> const*,std::vector<std::shared_ptr<BaseTalentMixin>>>(
            &__for_begin,
            &__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseTalentMixin> const*,std::vector<std::shared_ptr<BaseTalentMixin>>>::operator*(&__for_begin);
    std::shared_ptr<BaseTalentMixin>::shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(v1 + 32), v4);
    std::dynamic_pointer_cast<TalentAddExtraLevelMixin,BaseTalentMixin>(&__r);
    v5 = std::operator!=<TalentAddExtraLevelMixin>(0LL, (const std::shared_ptr<TalentAddExtraLevelMixin> *)&__r);
    std::shared_ptr<TalentAddExtraLevelMixin>::~shared_ptr((std::shared_ptr<TalentAddExtraLevelMixin> *const)&__r);
    if ( v5 )
    {
      v8 = 1;
      v6 = 0;
    }
    else
    {
      v6 = 1;
    }
    std::shared_ptr<BaseTalentMixin>::~shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(v1 + 32));
    if ( v6 != 1 )
      goto LABEL_12;
    __gnu_cxx::__normal_iterator<std::shared_ptr<BaseTalentMixin> const*,std::vector<std::shared_ptr<BaseTalentMixin>>>::operator++(&__for_begin);
  }
  v8 = 0;
LABEL_12:
  result = v8;
  if ( v13 == (char *)v1 )
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

// Line 50: range 0000000013159512-0000000013159A2E
int32_t __cdecl BaseTalent::enable(BaseTalent *const this)
{
  __int64 v1; // rsi
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  const std::shared_ptr<BaseTalentMixin> *v9; // rax
  unsigned __int64 v10; // rax
  unsigned int (__fastcall **v11)(unsigned __int64); // rdx
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  int v15; // r15d
  AbilityComp *AbilityComp; // rax
  int32_t result; // eax
  std::vector<std::shared_ptr<BaseTalentMixin>>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<BaseTalentMixin>>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<BaseTalentMixin>> *__for_range; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 mixin_ptr:58";
  *(_QWORD *)(v3 + 16) = BaseTalent::enable;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enabled_);
  if ( this->is_enabled_ )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/base_talent.cpp",
      "enable",
      53);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v21,
           (const char (*)[25])"talent already enabled. ");
    v7 = operator<<(v6, this);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v2 = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_enabled_, v1, &this->is_enabled_);
    this->is_enabled_ = 1;
    __for_range = &this->mixin_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<BaseTalentMixin>>::begin(&this->mixin_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<BaseTalentMixin>>::end(&this->mixin_vec_)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseTalentMixin> *,std::vector<std::shared_ptr<BaseTalentMixin>>>(
              &__for_begin,
              &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseTalentMixin> *,std::vector<std::shared_ptr<BaseTalentMixin>>>::operator*(&__for_begin);
      std::shared_ptr<BaseTalentMixin>::shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(v3 + 32), v9);
      v10 = (unsigned __int64)std::__shared_ptr_access<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(unsigned int (__fastcall ***)(unsigned __int64))v10;
      if ( *(_BYTE *)((*(_QWORD *)v10 >> 3) + 0x7FFF8000LL) )
        v10 = __asan_report_load8();
      if ( (*v11)(v10) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/base_talent.cpp",
          "enable",
          62);
        v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v21,
                (const char (*)[21])"talent enable fail. ");
        v13 = operator<<(v12, this);
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" avatar:");
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v14, this->avatar_);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v2 = -1;
        v15 = 0;
      }
      else
      {
        v15 = 1;
      }
      std::shared_ptr<BaseTalentMixin>::~shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(v3 + 32));
      if ( v15 != 1 )
        goto LABEL_34;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseTalentMixin> *,std::vector<std::shared_ptr<BaseTalentMixin>>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Avatar::isInited(this->avatar_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BaseTalent::addTalentPropToAvatar(this, this->avatar_);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AbilityComp = Creature::getAbilityComp(this->avatar_);
      AbilityComp::setIsNeedRefresh(AbilityComp, 1);
    }
    v2 = 0;
  }
LABEL_34:
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 77: range 0000000013159A30-0000000013159F53
int32_t __cdecl BaseTalent::disable(BaseTalent *const this)
{
  __int64 v1; // rsi
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  const std::shared_ptr<BaseTalentMixin> *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  int v15; // r15d
  AbilityComp *AbilityComp; // rax
  int32_t result; // eax
  std::vector<std::shared_ptr<BaseTalentMixin>>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<std::shared_ptr<BaseTalentMixin>>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<BaseTalentMixin>> *__for_range; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 mixin_ptr:85";
  *(_QWORD *)(v3 + 16) = BaseTalent::disable;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enabled_);
  if ( !this->is_enabled_ )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/base_talent.cpp",
      "disable",
      80);
    v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v21,
           (const char (*)[21])"talent not enabled. ");
    v7 = operator<<(v6, this);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v2 = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_enabled_, v1, &this->is_enabled_);
    this->is_enabled_ = 0;
    __for_range = &this->mixin_vec_;
    __for_begin._M_current = std::vector<std::shared_ptr<BaseTalentMixin>>::begin(&this->mixin_vec_)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<BaseTalentMixin>>::end(&this->mixin_vec_)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<BaseTalentMixin> *,std::vector<std::shared_ptr<BaseTalentMixin>>>(
              &__for_begin,
              &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseTalentMixin> *,std::vector<std::shared_ptr<BaseTalentMixin>>>::operator*(&__for_begin);
      std::shared_ptr<BaseTalentMixin>::shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(v3 + 32), v9);
      v10 = (unsigned __int64)std::__shared_ptr_access<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(_QWORD *)v10 + 8LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v11)(v10) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/talent/base_talent.cpp",
          "disable",
          89);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v21,
                (const char (*)[16])"disable fails. ");
        v13 = operator<<(v12, this);
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" avatar:");
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v14, this->avatar_);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v2 = -1;
        v15 = 0;
      }
      else
      {
        v15 = 1;
      }
      std::shared_ptr<BaseTalentMixin>::~shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(v3 + 32));
      if ( v15 != 1 )
        goto LABEL_34;
      __gnu_cxx::__normal_iterator<std::shared_ptr<BaseTalentMixin> *,std::vector<std::shared_ptr<BaseTalentMixin>>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Avatar::isInited(this->avatar_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BaseTalent::delTalentPropFromAvatar(this, this->avatar_);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AbilityComp = Creature::getAbilityComp(this->avatar_);
      AbilityComp::setIsNeedRefresh(AbilityComp, 1);
    }
    v2 = 0;
  }
LABEL_34:
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 104: range 0000000013159F54-000000001315A149
int32_t __cdecl BaseTalent::getProp(const BaseTalent *const this, std::map<data::FightPropType,float> *prop_map)
{
  __int64 (__fastcall **vptr_BaseTalent)(const BaseTalent *const); // rax
  unsigned __int64 v4; // rax
  float v5; // xmm1_4
  std::vector<data::PropValConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::vector<data::PropValConfig>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  const data::BaseTalentConfig *base_talent_config_ptr; // [rsp+28h] [rbp-48h]
  const std::vector<data::PropValConfig> *__for_range; // [rsp+30h] [rbp-40h]
  const data::PropValConfig *prop_config; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  vptr_BaseTalent = (__int64 (__fastcall **)(const BaseTalent *const))this->_vptr_BaseTalent;
  if ( *(_BYTE *)(((unsigned __int64)this->_vptr_BaseTalent >> 3) + 0x7FFF8000) )
    vptr_BaseTalent = (__int64 (__fastcall **)(const BaseTalent *const))__asan_report_load8();
  base_talent_config_ptr = (const data::BaseTalentConfig *)(*vptr_BaseTalent)(this);
  if ( base_talent_config_ptr )
  {
    __for_range = &base_talent_config_ptr->add_props;
    __for_begin._M_current = std::vector<data::PropValConfig>::begin(&base_talent_config_ptr->add_props)._M_current;
    __for_end._M_current = std::vector<data::PropValConfig>::end(&base_talent_config_ptr->add_props)._M_current;
    while ( __gnu_cxx::operator!=<data::PropValConfig const*,std::vector<data::PropValConfig>>(&__for_begin, &__for_end) )
    {
      prop_config = __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator*(&__for_begin);
      v4 = (unsigned __int64)std::map<data::FightPropType,float>::operator[](prop_map, &prop_config->prop_type);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)((v4 & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load4();
      v5 = *(float *)v4;
      if ( *(_BYTE *)(((unsigned __int64)&prop_config->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)prop_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prop_config->value >> 3)
                                                                   + 0x7FFF8000) )
      {
        v4 = __asan_report_load4();
      }
      *(float *)v4 = prop_config->value + v5;
      __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator++(&__for_begin);
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/base_talent.cpp",
      "getProp",
      108);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v11,
      (const char (*)[27])"findBaseTalentConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
};

// Line 121: range 000000001315A14A-000000001315A66E
void __cdecl BaseTalent::addTalentPropToAvatar(const BaseTalent *const this, Avatar *avatar)
{
  FightPropGuard *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 (__fastcall **vptr_BaseTalent)(const BaseTalent *const); // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  float value; // esi
  unsigned int val; // [rsp+10h] [rbp-110h] BYREF
  unsigned int AvatarId; // [rsp+14h] [rbp-10Ch] BYREF
  std::vector<data::PropValConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::vector<data::PropValConfig>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  char *v21; // [rsp+28h] [rbp-F8h] BYREF
  FightPropComp *fight_prop_comp; // [rsp+30h] [rbp-F0h]
  const data::BaseTalentConfig *base_talent_config_ptr; // [rsp+38h] [rbp-E8h]
  const std::vector<data::PropValConfig> *__for_range; // [rsp+40h] [rbp-E0h]
  const data::PropValConfig *prop_config; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (FightPropGuard *)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (FightPropGuard *)v3;
  }
  *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->creature_set_._M_t._M_impl._M_header._M_color = "1 48 48 20 fight_prop_guard:129";
  v2->creature_set_._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseTalent::addTalentPropToAvatar;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  fight_prop_comp = Creature::getFightPropComp(avatar);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  vptr_BaseTalent = (__int64 (__fastcall **)(const BaseTalent *const))this->_vptr_BaseTalent;
  if ( *(_BYTE *)(((unsigned __int64)this->_vptr_BaseTalent >> 3) + 0x7FFF8000) )
    vptr_BaseTalent = (__int64 (__fastcall **)(const BaseTalent *const))__asan_report_load8();
  base_talent_config_ptr = (const data::BaseTalentConfig *)(*vptr_BaseTalent)(this);
  if ( base_talent_config_ptr )
  {
    FightPropGuard::FightPropGuard(v2 + 1);
    FightPropGuard::addCreature(v2 + 1, avatar, 0);
    __for_range = &base_talent_config_ptr->add_props;
    __for_begin._M_current = std::vector<data::PropValConfig>::begin(&base_talent_config_ptr->add_props)._M_current;
    __for_end._M_current = std::vector<data::PropValConfig>::end(&base_talent_config_ptr->add_props)._M_current;
    while ( __gnu_cxx::operator!=<data::PropValConfig const*,std::vector<data::PropValConfig>>(&__for_begin, &__for_end) )
    {
      prop_config = __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator*(&__for_begin);
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/talent/base_talent.cpp",
        "addTalentPropToAvatar",
        133);
      v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v26, (const char (*)[10])off_24F46FA0);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Avatar::getAvatarId(this->avatar_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v7, (const char (*)[5])" to:");
      AvatarId = Avatar::getAvatarId(avatar);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &AvatarId);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" prop_type:");
      if ( *(_BYTE *)(((unsigned __int64)&prop_config->prop_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&prop_config->prop_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v21 = (char *)data::enumValToStr(prop_config->prop_type);
      v11 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&v21);
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" value:");
      v13 = common::milog::MiLogStream::operator<<<float,(float *)0>(v12, &prop_config->value);
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" base_talent:");
      operator<<(v14, this);
      common::milog::MiLogStream::~MiLogStream(&v26);
      if ( *(_BYTE *)(((unsigned __int64)&prop_config->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)prop_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prop_config->value >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      value = prop_config->value;
      if ( *(_BYTE *)(((unsigned __int64)&prop_config->prop_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&prop_config->prop_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      FightPropComp::modifyProp(fight_prop_comp, prop_config->prop_type, value, 0);
      __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator++(&__for_begin);
    }
    FightPropGuard::~FightPropGuard(v2 + 1);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/base_talent.cpp",
      "addTalentPropToAvatar",
      126);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v26,
      (const char (*)[27])"findBaseTalentConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 141: range 000000001315A670-000000001315AB9D
void __cdecl BaseTalent::delTalentPropFromAvatar(const BaseTalent *const this, Avatar *avatar)
{
  FightPropGuard *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 (__fastcall **vptr_BaseTalent)(const BaseTalent *const); // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  float v15; // xmm0_4
  unsigned int val; // [rsp+10h] [rbp-110h] BYREF
  unsigned int AvatarId; // [rsp+14h] [rbp-10Ch] BYREF
  std::vector<data::PropValConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::vector<data::PropValConfig>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  char *v20; // [rsp+28h] [rbp-F8h] BYREF
  FightPropComp *fight_prop_comp; // [rsp+30h] [rbp-F0h]
  const data::BaseTalentConfig *base_talent_config_ptr; // [rsp+38h] [rbp-E8h]
  const std::vector<data::PropValConfig> *__for_range; // [rsp+40h] [rbp-E0h]
  const data::PropValConfig *prop_config; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (FightPropGuard *)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (FightPropGuard *)v3;
  }
  *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->creature_set_._M_t._M_impl._M_header._M_color = "1 48 48 20 fight_prop_guard:149";
  v2->creature_set_._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseTalent::delTalentPropFromAvatar;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  fight_prop_comp = Creature::getFightPropComp(avatar);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  vptr_BaseTalent = (__int64 (__fastcall **)(const BaseTalent *const))this->_vptr_BaseTalent;
  if ( *(_BYTE *)(((unsigned __int64)this->_vptr_BaseTalent >> 3) + 0x7FFF8000) )
    vptr_BaseTalent = (__int64 (__fastcall **)(const BaseTalent *const))__asan_report_load8();
  base_talent_config_ptr = (const data::BaseTalentConfig *)(*vptr_BaseTalent)(this);
  if ( base_talent_config_ptr )
  {
    FightPropGuard::FightPropGuard(v2 + 1);
    FightPropGuard::addCreature(v2 + 1, avatar, 0);
    __for_range = &base_talent_config_ptr->add_props;
    __for_begin._M_current = std::vector<data::PropValConfig>::begin(&base_talent_config_ptr->add_props)._M_current;
    __for_end._M_current = std::vector<data::PropValConfig>::end(&base_talent_config_ptr->add_props)._M_current;
    while ( __gnu_cxx::operator!=<data::PropValConfig const*,std::vector<data::PropValConfig>>(&__for_begin, &__for_end) )
    {
      prop_config = __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator*(&__for_begin);
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/talent/base_talent.cpp",
        "delTalentPropFromAvatar",
        153);
      v6 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v25, (const char (*)[10])off_24F47140);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Avatar::getAvatarId(this->avatar_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v7, (const char (*)[5])" to:");
      AvatarId = Avatar::getAvatarId(avatar);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &AvatarId);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" prop_type:");
      if ( *(_BYTE *)(((unsigned __int64)&prop_config->prop_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&prop_config->prop_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v20 = (char *)data::enumValToStr(prop_config->prop_type);
      v11 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)&v20);
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" value:");
      v13 = common::milog::MiLogStream::operator<<<float,(float *)0>(v12, &prop_config->value);
      v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" base_talent:");
      operator<<(v14, this);
      common::milog::MiLogStream::~MiLogStream(&v25);
      if ( *(_BYTE *)(((unsigned __int64)&prop_config->value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)prop_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prop_config->value >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v15 = -prop_config->value;
      if ( *(_BYTE *)(((unsigned __int64)&prop_config->prop_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&prop_config->prop_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      FightPropComp::modifyProp(fight_prop_comp, prop_config->prop_type, v15, 0);
      __gnu_cxx::__normal_iterator<data::PropValConfig const*,std::vector<data::PropValConfig>>::operator++(&__for_begin);
    }
    FightPropGuard::~FightPropGuard(v2 + 1);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/base_talent.cpp",
      "delTalentPropFromAvatar",
      146);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v25,
      (const char (*)[27])"findBaseTalentConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->creature_set_._M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 161: range 000000001315AB9E-000000001315B002
int32_t __cdecl BaseTalent::addMixin(BaseTalent *const this, const std::string *open_config)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  JsonConfigMgr *p_json_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  int v12; // r15d
  int32_t result; // eax
  std::vector<std::shared_ptr<data::ConfigTalentMixin>>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<std::shared_ptr<data::ConfigTalentMixin>>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  data::ConfigTalentMixinGroup *config_talent_mixin_vec_ptr; // [rsp+38h] [rbp-C8h]
  std::vector<std::shared_ptr<data::ConfigTalentMixin>> *__for_range; // [rsp+40h] [rbp-C0h]
  data::ConfigTalentMixinPtr *config_talent_mixin_ptr; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 9 param:174 64 16 25 base_talent_mixin_ptr:177";
  *(_QWORD *)(v3 + 16) = BaseTalent::addMixin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( (unsigned __int8)std::string::empty(open_config) )
  {
    v2 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 64));
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.json_config_mgr;
    config_talent_mixin_vec_ptr = JsonConfigMgr::obtainTalentMixinConfigs(p_json_config_mgr, open_config);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
    if ( config_talent_mixin_vec_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_QWORD *)(v3 + 32) = this->avatar_;
      *(_QWORD *)(v3 + 40) = this;
      __for_range = config_talent_mixin_vec_ptr;
      __for_begin._M_current = std::vector<std::shared_ptr<data::ConfigTalentMixin>>::begin(config_talent_mixin_vec_ptr)._M_current;
      __for_end._M_current = std::vector<std::shared_ptr<data::ConfigTalentMixin>>::end(config_talent_mixin_vec_ptr)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigTalentMixin> *,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>(
                &__for_begin,
                &__for_end) )
      {
        config_talent_mixin_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigTalentMixin> *,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::operator*(&__for_begin);
        v9 = (unsigned __int64)std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigTalentMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)config_talent_mixin_ptr);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        v10 = *(_QWORD *)v9 + 56LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64))v10)(v3 + 64, v9, v3 + 32);
        if ( std::operator==<BaseTalentMixin>(0LL, (const std::shared_ptr<BaseTalentMixin> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/talent/base_talent.cpp",
            "addMixin",
            180);
          v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v19,
                  (const char (*)[24])"createTalentMixin fails");
          operator<<(v11, (const TalentParam *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v19);
          v2 = -1;
          v12 = 0;
        }
        else
        {
          std::vector<std::shared_ptr<BaseTalentMixin>>::push_back(
            &this->mixin_vec_,
            (const std::vector<std::shared_ptr<BaseTalentMixin>>::value_type *)(v3 + 64));
          v12 = 1;
        }
        std::shared_ptr<BaseTalentMixin>::~shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(v3 + 64));
        if ( v12 != 1 )
          goto LABEL_22;
        __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigTalentMixin> *,std::vector<std::shared_ptr<data::ConfigTalentMixin>>>::operator++(&__for_begin);
      }
      v2 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/base_talent.cpp",
        "addMixin",
        170);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v19,
             (const char (*)[25])" findTalentMixinConfigs ");
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, open_config);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v2 = -1;
    }
  }
LABEL_22:
  result = v2;
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

// Line 192: range 000000001315B004-000000001315B39E
void __cdecl BaseTalent::getTargetAbilitiesFromTalent(
        const BaseTalent *const this,
        TargetAbilityVec *target_ability_vec,
        TargetAbilitySpecialMap *target_ability_special_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::shared_ptr<BaseTalentMixin> *v6; // rax
  std::__shared_ptr_access<TalentAddAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int *v8; // r8
  std::__shared_ptr_access<TalentModifyAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<TalentModifyAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::unordered_map<unsigned int,std::list<std::weak_ptr<BaseTalentMixin>>> *v11; // rax
  std::list<std::weak_ptr<BaseTalentMixin>> *v12; // r14
  std::vector<std::shared_ptr<BaseTalentMixin>>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<std::shared_ptr<BaseTalentMixin>>::const_iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const std::vector<std::shared_ptr<BaseTalentMixin>> *__for_range; // [rsp+38h] [rbp-E8h]
  std::weak_ptr<BaseTalentMixin> __x; // [rsp+40h] [rbp-E0h] BYREF
  char v18[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 21 ability_name_hash:204 48 4 24 ability_special_hash:205 64 16 20 talent_mixin_ptr:193 9"
                        "6 16 25 add_ability_mixin_ptr:195 128 16 28 modify_ability_mixin_ptr:201";
  *(_QWORD *)(v3 + 16) = BaseTalent::getTargetAbilitiesFromTalent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  __for_range = &this->mixin_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<BaseTalentMixin>>::begin(&this->mixin_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<BaseTalentMixin>>::end(&this->mixin_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<BaseTalentMixin> const*,std::vector<std::shared_ptr<BaseTalentMixin>>>(
            &__for_begin,
            &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<std::shared_ptr<BaseTalentMixin> const*,std::vector<std::shared_ptr<BaseTalentMixin>>>::operator*(&__for_begin);
    std::shared_ptr<BaseTalentMixin>::shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(v3 + 64), v6);
    std::dynamic_pointer_cast<TalentAddAbilityMixin,BaseTalentMixin>((const std::shared_ptr<BaseTalentMixin> *)(v3 + 96));
    if ( std::operator!=<TalentAddAbilityMixin>(0LL, (const std::shared_ptr<TalentAddAbilityMixin> *)(v3 + 96)) )
    {
      *(_DWORD *)(v3 + 48) = 0;
      v7 = std::__shared_ptr_access<TalentAddAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TalentAddAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      *(_DWORD *)(v3 + 32) = TalentAddAbilityMixin::getAbilityNameHash(v7);
      std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<int,int>(
        target_ability_vec,
        (int *)(v3 + 32),
        (int *)(v3 + 48),
        (int *)(v3 + 32),
        v8);
    }
    else
    {
      std::dynamic_pointer_cast<TalentModifyAbilityMixin,BaseTalentMixin>((const std::shared_ptr<BaseTalentMixin> *)(v3 + 128));
      if ( std::operator!=<TalentModifyAbilityMixin>(0LL, (const std::shared_ptr<TalentModifyAbilityMixin> *)(v3 + 128)) )
      {
        v9 = std::__shared_ptr_access<TalentModifyAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TalentModifyAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        *(_DWORD *)(v3 + 32) = TalentModifyAbilityMixin::getAbilityNameHash(v9);
        v10 = std::__shared_ptr_access<TalentModifyAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TalentModifyAbilityMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        *(_DWORD *)(v3 + 48) = TalentModifyAbilityMixin::getParamSpecialHash(v10);
        v11 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::list<std::weak_ptr<BaseTalentMixin>>>>::operator[](
                target_ability_special_map,
                (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::list<std::weak_ptr<BaseTalentMixin>>>>::key_type *)(v3 + 32));
        v12 = std::unordered_map<unsigned int,std::list<std::weak_ptr<BaseTalentMixin>>>::operator[](
                v11,
                (const std::unordered_map<unsigned int,std::list<std::weak_ptr<BaseTalentMixin>>>::key_type *)(v3 + 48));
        std::weak_ptr<BaseTalentMixin>::weak_ptr<TalentModifyAbilityMixin,void>(
          &__x,
          (const std::shared_ptr<TalentModifyAbilityMixin> *)(v3 + 128));
        std::list<std::weak_ptr<BaseTalentMixin>>::push_back(v12, &__x);
        std::weak_ptr<BaseTalentMixin>::~weak_ptr(&__x);
      }
      std::shared_ptr<TalentModifyAbilityMixin>::~shared_ptr((std::shared_ptr<TalentModifyAbilityMixin> *const)(v3 + 128));
    }
    std::shared_ptr<TalentAddAbilityMixin>::~shared_ptr((std::shared_ptr<TalentAddAbilityMixin> *const)(v3 + 96));
    std::shared_ptr<BaseTalentMixin>::~shared_ptr((std::shared_ptr<BaseTalentMixin> *const)(v3 + 64));
    __gnu_cxx::__normal_iterator<std::shared_ptr<BaseTalentMixin> const*,std::vector<std::shared_ptr<BaseTalentMixin>>>::operator++(&__for_begin);
  }
  if ( v18 == (char *)v3 )
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
};

// Line 214: range 000000001315B3A0-000000001315B410
int32_t __cdecl BaseTalent::addExtraLevel(
        BaseTalent *const this,
        data::TalentType talent_type,
        uint32_t talent_index,
        uint32_t delta_extra_level)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return BaseTalent::changeExtraLevel(this, talent_type, talent_index, this->extra_level_ + delta_extra_level);
};

// Line 220: range 000000001315B412-000000001315B69D
int32_t __fastcall BaseTalent::subExtraLevel(
        BaseTalent *const this,
        data::TalentType talent_type,
        uint32_t talent_index,
        uint32_t delta_extra_level)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  int32_t result; // eax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 21 delta_extra_level:219";
  *(_QWORD *)(v4 + 16) = BaseTalent::subExtraLevel;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = delta_extra_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->extra_level_ >= *(_DWORD *)(v4 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = BaseTalent::changeExtraLevel(this, talent_type, talent_index, this->extra_level_ - *(_DWORD *)(v4 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/base_talent.cpp",
      "subExtraLevel",
      223);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])"delta_extra_level:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" extra_level_:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->extra_level_);
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 232: range 000000001315B69E-000000001315C0DE
__int64 __fastcall BaseTalent::changeExtraLevel(
        BaseTalent *const this,
        google::protobuf::uint32 talent_type,
        uint32_t talent_index,
        uint32_t cur_extra_level)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  __int64 result; // rax
  __int64 (__fastcall **vptr_BaseTalent)(BaseTalent *const); // rax
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  unsigned __int64 v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-120h] BYREF
  char v28[256]; // [rsp+50h] [rbp-100h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 19 cur_extra_level:231 64 48 10 notify:288 144 48 25 refresh_ability_guard:295";
  *(_QWORD *)(v4 + 16) = BaseTalent::changeExtraLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862723] = -219021312;
  v6[536862724] = 62194;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 48) = cur_extra_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->extra_level_ == *(_DWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/base_talent.cpp",
      "changeExtraLevel",
      235);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v27, (const char (*)[13])"extra_level:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->extra_level_);
    v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" don't need change!");
    v10 = operator<<(v9, this);
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
    goto LABEL_54;
  }
  std::swap<unsigned int>((unsigned int *)(v4 + 48), &this->extra_level_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  vptr_BaseTalent = (__int64 (__fastcall **)(BaseTalent *const))this->_vptr_BaseTalent;
  if ( *(_BYTE *)(((unsigned __int64)this->_vptr_BaseTalent >> 3) + 0x7FFF8000) )
    vptr_BaseTalent = (__int64 (__fastcall **)(BaseTalent *const))__asan_report_load8();
  if ( !(*vptr_BaseTalent)(this) )
  {
LABEL_15:
    std::swap<unsigned int>((unsigned int *)(v4 + 48), &this->extra_level_);
    result = 0xFFFFFFFFLL;
    goto LABEL_54;
  }
  if ( *(char *)(((unsigned __int64)&this->is_enabled_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enabled_);
  if ( this->is_enabled_ )
  {
    if ( BaseTalent::disable(this) )
      goto LABEL_15;
    std::vector<std::shared_ptr<BaseTalentMixin>>::clear(&this->mixin_vec_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = (unsigned __int64)(this->_vptr_BaseTalent + 1);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(BaseTalent *const))v14)(this) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/base_talent.cpp",
        "changeExtraLevel",
        259);
      v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v27,
              (const char (*)[18])"initMixins fail. ");
      v16 = operator<<(v15, this);
      v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_27:
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v17, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::swap<unsigned int>((unsigned int *)(v4 + 48), &this->extra_level_);
      result = 0xFFFFFFFFLL;
      goto LABEL_54;
    }
    if ( BaseTalent::isContainsTalentAddExtraLevelMixin(this) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/base_talent.cpp",
        "changeExtraLevel",
        266);
      v18 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v27,
              (const char (*)[45])"isContainsTalentAddExtraLevelMixin is true. ");
      v19 = operator<<(v18, this);
      v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v20, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::vector<std::shared_ptr<BaseTalentMixin>>::clear(&this->mixin_vec_);
      std::swap<unsigned int>((unsigned int *)(v4 + 48), &this->extra_level_);
      result = 0xFFFFFFFFLL;
      goto LABEL_54;
    }
    BaseTalent::enable(this);
  }
  else
  {
    std::vector<std::shared_ptr<BaseTalentMixin>>::clear(&this->mixin_vec_);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = (unsigned __int64)(this->_vptr_BaseTalent + 1);
    if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      v21 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(BaseTalent *const))v21)(this) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/base_talent.cpp",
        "changeExtraLevel",
        280);
      v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v27,
              (const char (*)[18])"initMixins fail. ");
      v23 = operator<<(v22, this);
      v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_27;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Avatar::isInited(this->avatar_) )
  {
    proto::ProudSkillExtraLevelNotify::ProudSkillExtraLevelNotify((proto::ProudSkillExtraLevelNotify *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Guid = Avatar::getGuid(this->avatar_);
    proto::ProudSkillExtraLevelNotify::set_avatar_guid((proto::ProudSkillExtraLevelNotify *const)(v4 + 64), Guid);
    proto::ProudSkillExtraLevelNotify::set_talent_type((proto::ProudSkillExtraLevelNotify *const)(v4 + 64), talent_type);
    proto::ProudSkillExtraLevelNotify::set_talent_index(
      (proto::ProudSkillExtraLevelNotify *const)(v4 + 64),
      talent_index);
    if ( *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ProudSkillExtraLevelNotify::set_extra_level(
      (proto::ProudSkillExtraLevelNotify *const)(v4 + 64),
      this->extra_level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Avatar::notifySceneTeam(this->avatar_, (const google::protobuf::Message *)(v4 + 64));
    RefreshAbilityGuard::RefreshAbilityGuard((RefreshAbilityGuard *const)(v4 + 144));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    RefreshAbilityGuard::addCreature((RefreshAbilityGuard *const)(v4 + 144), this->avatar_);
    RefreshAbilityGuard::~RefreshAbilityGuard((RefreshAbilityGuard *const)(v4 + 144));
    proto::ProudSkillExtraLevelNotify::~ProudSkillExtraLevelNotify((proto::ProudSkillExtraLevelNotify *const)(v4 + 64));
  }
  result = 0LL;
LABEL_54:
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};
