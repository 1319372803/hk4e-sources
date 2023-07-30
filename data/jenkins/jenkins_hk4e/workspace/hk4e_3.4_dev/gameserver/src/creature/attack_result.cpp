// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/creature/attack_result.cpp

// Line 23: range 00000000179672D2-0000000017967367
float __cdecl AttackResult::getDamagePercentage(const AttackResult *const this)
{
  __m128i v1; // xmm0
  float *v2; // rax
  float *v3; // rdx

  if ( std::optional<float>::has_value(&this->modified_property.damage_percentage) )
  {
    v2 = (float *)std::optional<float>::value(&this->modified_property.damage_percentage);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    return *v3;
  }
  else
  {
    *(float *)v1.m128i_i32 = AttackResult::getAttackerPropertyDynimacFloat(
                               this,
                               &this->server_attacker_property.damage_percentage);
    return COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  }
};

// Line 30: range 0000000017967368-00000000179673FD
float __cdecl AttackResult::getDamagePercentageRatio(const AttackResult *const this)
{
  __m128i v1; // xmm0
  float *v2; // rax
  float *v3; // rdx

  if ( std::optional<float>::has_value(&this->modified_property.damage_percentage_ratio) )
  {
    v2 = (float *)std::optional<float>::value(&this->modified_property.damage_percentage_ratio);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    return *v3;
  }
  else
  {
    *(float *)v1.m128i_i32 = AttackResult::getAttackerPropertyDynimacFloat(
                               this,
                               &this->server_attacker_property.damage_percentage_ratio);
    return COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  }
};

// Line 37: range 00000000179673FE-0000000017967493
float __cdecl AttackResult::getDamageExtra(const AttackResult *const this)
{
  __m128i v1; // xmm0
  float *v2; // rax
  float *v3; // rdx

  if ( std::optional<float>::has_value(&this->modified_property.damage_extra) )
  {
    v2 = (float *)std::optional<float>::value(&this->modified_property.damage_extra);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    return *v3;
  }
  else
  {
    *(float *)v1.m128i_i32 = AttackResult::getAttackerPropertyDynimacFloat(
                               this,
                               &this->server_attacker_property.damage_extra);
    return COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  }
};

// Line 44: range 0000000017967494-00000000179674CD
const std::map<unsigned int,float> *__cdecl AttackResult::getStatLogDamageExtraMap(const AttackResult *const this)
{
  if ( std::optional<float>::has_value(&this->modified_property.damage_extra) )
    return &this->modified_property.stat_log_damage_extra_map;
  else
    return &this->stat_log_damage_extra_map;
};

// Line 51: range 00000000179674CE-0000000017967563
float __cdecl AttackResult::getBonusCritical(const AttackResult *const this)
{
  __m128i v1; // xmm0
  float *v2; // rax
  float *v3; // rdx

  if ( std::optional<float>::has_value(&this->modified_property.bonus_critical) )
  {
    v2 = (float *)std::optional<float>::value(&this->modified_property.bonus_critical);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    return *v3;
  }
  else
  {
    *(float *)v1.m128i_i32 = AttackResult::getAttackerPropertyDynimacFloat(
                               this,
                               &this->server_attacker_property.bonus_critical);
    return COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  }
};

// Line 58: range 0000000017967564-00000000179675F9
float __cdecl AttackResult::getBonusCriticalHurt(const AttackResult *const this)
{
  __m128i v1; // xmm0
  float *v2; // rax
  float *v3; // rdx

  if ( std::optional<float>::has_value(&this->modified_property.bonus_critical_hurt) )
  {
    v2 = (float *)std::optional<float>::value(&this->modified_property.bonus_critical_hurt);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    return *v3;
  }
  else
  {
    *(float *)v1.m128i_i32 = AttackResult::getAttackerPropertyDynimacFloat(
                               this,
                               &this->server_attacker_property.bonus_critical_hurt);
    return COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  }
};

// Line 65: range 00000000179675FA-00000000179676C9
bool __cdecl AttackResult::getTrueDamage(const AttackResult *const this)
{
  const bool *v1; // rax
  _BYTE *v2; // rdx
  char v3; // al

  if ( !std::optional<bool>::has_value(&this->modified_property.true_damage) )
    goto LABEL_6;
  v1 = std::optional<bool>::value(&this->modified_property.true_damage);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v1 & 7) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v1);
  }
  if ( *v2 )
    v3 = 1;
  else
LABEL_6:
    v3 = 0;
  if ( v3 )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->server_attacker_property.true_damage >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 103) & 7) >= *(_BYTE *)(((unsigned __int64)&this->server_attacker_property.true_damage >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load1(&this->server_attacker_property.true_damage);
  }
  return this->server_attacker_property.true_damage;
};

// Line 72: range 00000000179676CA-00000000179678E4
float __cdecl AttackResult::getDefenseIgnoreRatio(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 attacker_ptr:75";
  *(_QWORD *)(v2 + 16) = AttackResult::getDefenseIgnoreRatio;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::optional<float>::has_value(&this->modified_property.defense_ignore_ratio) )
  {
    v5 = (float *)std::optional<float>::value(&this->modified_property.defense_ignore_ratio);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
  }
  else
  {
    std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/attack_result.cpp",
        "getDefenseIgnoreRatio",
        78);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"attacker_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      *(float *)v1.m128i_i32 = Creature::getProp(v8, FIGHT_PROP_DEFENCE_IGNORE_RATIO);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 85: range 00000000179678E6-0000000017967B00
float __cdecl AttackResult::getDefenseIgnoreDelta(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 attacker_ptr:88";
  *(_QWORD *)(v2 + 16) = AttackResult::getDefenseIgnoreDelta;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::optional<float>::has_value(&this->modified_property.defense_ignore_delta) )
  {
    v5 = (float *)std::optional<float>::value(&this->modified_property.defense_ignore_delta);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
  }
  else
  {
    std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/attack_result.cpp",
        "getDefenseIgnoreDelta",
        91);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"attacker_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      *(float *)v1.m128i_i32 = Creature::getProp(v8, FIGHT_PROP_DEFENCE_IGNORE_DELTA);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 98: range 0000000017967B02-0000000017967D15
float __cdecl AttackResult::getPhysicalSubHurt(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 defenser_ptr:101";
  *(_QWORD *)(v2 + 16) = AttackResult::getPhysicalSubHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::optional<float>::has_value(&this->modified_property.physical_sub_hurt) )
  {
    v5 = (float *)std::optional<float>::value(&this->modified_property.physical_sub_hurt);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
  }
  else
  {
    AttackResult::getDefenser((const AttackResult *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/attack_result.cpp",
        "getPhysicalSubHurt",
        104);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"defenser_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      *(float *)v1.m128i_i32 = Creature::getProp(v8, FIGHT_PROP_PHYSICAL_SUB_HURT);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 111: range 0000000017967D16-0000000017967F29
float __cdecl AttackResult::getFireSubHurt(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 defenser_ptr:114";
  *(_QWORD *)(v2 + 16) = AttackResult::getFireSubHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::optional<float>::has_value(&this->modified_property.fire_sub_hurt) )
  {
    v5 = (float *)std::optional<float>::value(&this->modified_property.fire_sub_hurt);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
  }
  else
  {
    AttackResult::getDefenser((const AttackResult *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/attack_result.cpp",
        "getFireSubHurt",
        117);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"defenser_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      *(float *)v1.m128i_i32 = Creature::getProp(v8, FIGHT_PROP_FIRE_SUB_HURT);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 124: range 0000000017967F2A-000000001796813D
float __cdecl AttackResult::getGrassSubHurt(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 defenser_ptr:127";
  *(_QWORD *)(v2 + 16) = AttackResult::getGrassSubHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::optional<float>::has_value(&this->modified_property.grass_sub_hurt) )
  {
    v5 = (float *)std::optional<float>::value(&this->modified_property.grass_sub_hurt);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
  }
  else
  {
    AttackResult::getDefenser((const AttackResult *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/attack_result.cpp",
        "getGrassSubHurt",
        130);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"defenser_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      *(float *)v1.m128i_i32 = Creature::getProp(v8, FIGHT_PROP_GRASS_SUB_HURT);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 137: range 000000001796813E-0000000017968351
float __cdecl AttackResult::getWaterSubHurt(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 defenser_ptr:140";
  *(_QWORD *)(v2 + 16) = AttackResult::getWaterSubHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::optional<float>::has_value(&this->modified_property.water_sub_hurt) )
  {
    v5 = (float *)std::optional<float>::value(&this->modified_property.water_sub_hurt);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
  }
  else
  {
    AttackResult::getDefenser((const AttackResult *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/attack_result.cpp",
        "getWaterSubHurt",
        143);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"defenser_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      *(float *)v1.m128i_i32 = Creature::getProp(v8, FIGHT_PROP_WATER_SUB_HURT);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 150: range 0000000017968352-0000000017968565
float __cdecl AttackResult::getElecSubHurt(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 defenser_ptr:153";
  *(_QWORD *)(v2 + 16) = AttackResult::getElecSubHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::optional<float>::has_value(&this->modified_property.elec_sub_hurt) )
  {
    v5 = (float *)std::optional<float>::value(&this->modified_property.elec_sub_hurt);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
  }
  else
  {
    AttackResult::getDefenser((const AttackResult *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/attack_result.cpp",
        "getElecSubHurt",
        156);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"defenser_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      *(float *)v1.m128i_i32 = Creature::getProp(v8, FIGHT_PROP_ELEC_SUB_HURT);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 163: range 0000000017968566-0000000017968779
float __cdecl AttackResult::getWindSubHurt(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 defenser_ptr:166";
  *(_QWORD *)(v2 + 16) = AttackResult::getWindSubHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::optional<float>::has_value(&this->modified_property.wind_sub_hurt) )
  {
    v5 = (float *)std::optional<float>::value(&this->modified_property.wind_sub_hurt);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
  }
  else
  {
    AttackResult::getDefenser((const AttackResult *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/attack_result.cpp",
        "getWindSubHurt",
        169);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"defenser_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      *(float *)v1.m128i_i32 = Creature::getProp(v8, FIGHT_PROP_WIND_SUB_HURT);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 176: range 000000001796877A-000000001796898D
float __cdecl AttackResult::getIceSubHurt(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 defenser_ptr:179";
  *(_QWORD *)(v2 + 16) = AttackResult::getIceSubHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::optional<float>::has_value(&this->modified_property.ice_sub_hurt) )
  {
    v5 = (float *)std::optional<float>::value(&this->modified_property.ice_sub_hurt);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
  }
  else
  {
    AttackResult::getDefenser((const AttackResult *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/attack_result.cpp",
        "getIceSubHurt",
        182);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"defenser_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      *(float *)v1.m128i_i32 = Creature::getProp(v8, FIGHT_PROP_ICE_SUB_HURT);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 189: range 000000001796898E-0000000017968BA1
float __cdecl AttackResult::getRockSubHurt(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  float *v5; // rax
  float *v6; // rdx
  float v7; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  float result; // xmm0_4
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 defenser_ptr:192";
  *(_QWORD *)(v2 + 16) = AttackResult::getRockSubHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::optional<float>::has_value(&this->modified_property.rock_sub_hurt) )
  {
    v5 = (float *)std::optional<float>::value(&this->modified_property.rock_sub_hurt);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v7 = *v6;
  }
  else
  {
    AttackResult::getDefenser((const AttackResult *const)(v2 + 32));
    if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/creature/attack_result.cpp",
        "getRockSubHurt",
        195);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"defenser_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = 0.0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      *(float *)v1.m128i_i32 = Creature::getProp(v8, FIGHT_PROP_ROCK_SUB_HURT);
      v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  result = v7;
  if ( v11 == (char *)v2 )
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

// Line 202: range 0000000017968BA2-0000000017968BDF
float __cdecl AttackResult::getElementDurability(const AttackResult *const this)
{
  float AttackerPropertyDynimacFloat; // [rsp+4h] [rbp-Ch]

  AttackerPropertyDynimacFloat = AttackResult::getAttackerPropertyDynimacFloat(
                                   this,
                                   &this->server_attacker_property.element_durability);
  return AttackResult::getDamagePercentageWaneRatio(this) * AttackerPropertyDynimacFloat;
};

// Line 207: range 0000000017968BE0-0000000017968F9F
float __cdecl AttackResult::getElementAmplifyRatio(const AttackResult *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Scene *p_element_type; // rdi
  data::ElementType element_type; // edx
  Creature *v8; // rax
  FightPropComp *FightPropComp; // rax
  Creature *v10; // rax
  FightPropComp *v11; // rcx
  float result; // xmm0_4
  float v13; // [rsp+4h] [rbp-BCh]
  float ElementAddHurtDelta; // [rsp+4h] [rbp-BCh]
  float amplify_ratio; // [rsp+18h] [rbp-A8h]
  float B2; // [rsp+1Ch] [rbp-A4h]
  char v18[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 16 defenser_ptr:208 64 16 13 scene_ptr:213 96 16 16 attacker_ptr:219";
  *(_QWORD *)(v2 + 16) = AttackResult::getElementAmplifyRatio;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  AttackResult::getDefenser((const AttackResult *const)(v2 + 32));
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
  {
    v13 = 0.0;
  }
  else
  {
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Entity::getScene((const Entity *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      v13 = 0.0;
    }
    else
    {
      p_element_type = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
      {
        p_element_type = (Scene *)&this->element_type;
        *(double *)v1.m128i_i64 = __asan_report_load4(&this->element_type);
      }
      element_type = this->element_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->amplify_reaction_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->amplify_reaction_type >> 3) + 0x7FFF8000) <= 3 )
      {
        p_element_type = (Scene *)&this->amplify_reaction_type;
        *(double *)v1.m128i_i64 = __asan_report_load4(&this->amplify_reaction_type);
      }
      *(float *)v1.m128i_i32 = Scene::getElementAmplifyDamage(p_element_type, this->amplify_reaction_type, element_type);
      amplify_ratio = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
      AttackResult::getAttacker((const AttackResult *const)(v2 + 96));
      if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 96), 0LL) && amplify_ratio > 0.0 )
      {
        v8 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        FightPropComp = Creature::getFightPropComp(v8);
        ElementAddHurtDelta = FightPropComp::getElementAddHurtDelta(FightPropComp);
        v10 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v11 = Creature::getFightPropComp(v10);
        if ( *(_BYTE *)(((unsigned __int64)&this->addhurt_reaction_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->addhurt_reaction_type >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->addhurt_reaction_type);
        }
        B2 = FightPropComp::getElementReactionAddHurt(v11, this->addhurt_reaction_type) + ElementAddHurtDelta;
        amplify_ratio = (float)(B2 * amplify_ratio) + (float)(amplify_ratio + B2);
      }
      v13 = amplify_ratio;
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  result = v13;
  if ( v18 == (char *)v2 )
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

// Line 229: range 0000000017968FA0-00000000179692A3
float __cdecl AttackResult::getDamagePercentageWaneRatio(const AttackResult *const this)
{
  const data::ConfigBulletWane *bullet_wane_ptr; // rdx
  double v2; // xmm0_8
  const data::ConfigBulletWane *v3; // rdx
  const float *v4; // rax
  _DWORD *v5; // rdx
  double v6; // xmm0_8
  const data::ConfigBulletWane *v7; // rdx
  float v8; // xmm1_4
  const data::ConfigBulletWane *v9; // rdx
  float *v10; // rax
  float *v11; // rdx
  float __a; // [rsp+10h] [rbp-10h] BYREF
  float __b; // [rsp+14h] [rbp-Ch] BYREF
  float wane_ratio; // [rsp+18h] [rbp-8h]
  int32_t wane_count; // [rsp+1Ch] [rbp-4h]

  wane_ratio = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bullet_wane_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->bullet_wane_ptr);
  if ( this->bullet_wane_ptr )
  {
    bullet_wane_ptr = this->bullet_wane_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&bullet_wane_ptr->damage_wane_interval >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)bullet_wane_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bullet_wane_ptr->damage_wane_interval >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&bullet_wane_ptr->damage_wane_interval);
    }
    if ( bullet_wane_ptr->damage_wane_interval > 0.00000011920929 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->bullet_fly_time_ms >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->bullet_fly_time_ms >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->bullet_fly_time_ms);
      }
      *(float *)&v2 = (float)(int)this->bullet_fly_time_ms / 1000.0;
      v3 = this->bullet_wane_ptr;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        v2 = __asan_report_load4(this->bullet_wane_ptr);
      }
      __b = *(float *)&v2 - v3->wane_delay;
      __a = 0.0;
      v4 = std::max<float>(&__a, &__b);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      LODWORD(v6) = *v5;
      if ( *(_BYTE *)(((unsigned __int64)&this->bullet_wane_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->bullet_wane_ptr);
      v7 = this->bullet_wane_ptr;
      if ( *(_BYTE *)(((unsigned __int64)&v7->damage_wane_interval >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->damage_wane_interval >> 3)
                                                         + 0x7FFF8000) )
      {
        v6 = __asan_report_load4(&v7->damage_wane_interval);
      }
      wane_count = (int)(float)(*(float *)&v6 / v7->damage_wane_interval);
      v8 = (float)wane_count;
      v9 = this->bullet_wane_ptr;
      if ( *(_BYTE *)(((unsigned __int64)&v9->damage_wane_ratio >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->damage_wane_ratio >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&v9->damage_wane_ratio);
      }
      __b = 1.0 - (float)(v8 * v9->damage_wane_ratio);
      v10 = (float *)std::max<float>(&this->bullet_wane_ptr->damage_wane_min_ratio, &__b);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      return *v11;
    }
  }
  return wane_ratio;
};

// Line 240: range 00000000179692A4-0000000017969481
float __cdecl AttackResult::getDamageAttenuation(const AttackResult *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  size_t *v3; // rax
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v4; // rax
  float *v5; // rdx
  unsigned __int64 __val; // [rsp+18h] [rbp-48h] BYREF
  unsigned __int64 __lo; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 __hi; // [rsp+28h] [rbp-38h] BYREF
  const data::AttackAttenuationExcelConfig *config_ptr; // [rsp+30h] [rbp-30h]
  size_t idx; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+40h] [rbp-20h] BYREF

  if ( std::operator==<char>(&this->attenuation_group, byte_261E1600) )
    return 1.0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v11);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11);
  config_ptr = data::CombatTemplateExcelConfigMgrBase::findAttackAttenuationExcelConfig(
                 &v2->design_config.txt_config_mgr.combat_template_config_mgr,
                 &this->attenuation_group);
  std::shared_ptr<Config>::~shared_ptr(v11);
  if ( !config_ptr )
    return 1.0;
  if ( std::vector<float>::empty(&config_ptr->damage_sequence) )
    return 1.0;
  __hi = std::vector<float>::size(&config_ptr->damage_sequence) - 1;
  __lo = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->attack_count);
  }
  __val = this->attack_count;
  v3 = (size_t *)std::clamp<unsigned long>(&__val, &__lo, &__hi);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    v3 = (size_t *)__asan_report_load8(v3);
  idx = *v3;
  v4 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                               &config_ptr->damage_sequence,
                                                                               idx);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  return *v5;
};

// Line 261: range 0000000017969482-000000001796965F
float __cdecl AttackResult::getElemDurabilityAttenuation(const AttackResult *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  size_t *v3; // rax
  __gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *v4; // rax
  float *v5; // rdx
  unsigned __int64 __val; // [rsp+18h] [rbp-48h] BYREF
  unsigned __int64 __lo; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 __hi; // [rsp+28h] [rbp-38h] BYREF
  const data::AttackAttenuationExcelConfig *config_ptr; // [rsp+30h] [rbp-30h]
  size_t idx; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+40h] [rbp-20h] BYREF

  if ( std::operator==<char>(&this->attenuation_group, byte_261E1600) )
    return 1.0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v11);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11);
  config_ptr = data::CombatTemplateExcelConfigMgrBase::findAttackAttenuationExcelConfig(
                 &v2->design_config.txt_config_mgr.combat_template_config_mgr,
                 &this->attenuation_group);
  std::shared_ptr<Config>::~shared_ptr(v11);
  if ( !config_ptr )
    return 1.0;
  if ( std::vector<float>::empty(&config_ptr->durability_sequence) )
    return 1.0;
  __hi = std::vector<float>::size(&config_ptr->durability_sequence) - 1;
  __lo = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->attack_count);
  }
  __val = this->attack_count;
  v3 = (size_t *)std::clamp<unsigned long>(&__val, &__lo, &__hi);
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    v3 = (size_t *)__asan_report_load8(v3);
  idx = *v3;
  v4 = (__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)std::vector<float>::operator[](
                                                                               &config_ptr->durability_sequence,
                                                                               idx);
  v5 = v4;
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v4);
  }
  return *v5;
};

// Line 283: range 0000000017969660-0000000017969A35
float __cdecl AttackResult::getAttackerPropertyDynimacFloat(
        const AttackResult *const this,
        const data::DynamicFloat *dynamicFloat)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  ActorAbility *v6; // r14
  ActorAbility *v7; // r14
  float result; // xmm0_4
  float fixed_value; // [rsp+Ch] [rbp-E4h]
  std::shared_ptr<Creature> p_global_value_source_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<DieCreatureRecord> p_record_ptr; // [rsp+30h] [rbp-C0h] BYREF
  char v12[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 source_ptr:287 64 16 14 record_ptr:288 96 16 22 modifier_owner_ptr:291";
  *(_QWORD *)(v2 + 16) = AttackResult::getAttackerPropertyDynimacFloat;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( std::operator!=<ActorAbility>(&this->ability_ptr, 0LL) )
  {
    std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32), 0LL);
    std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v2 + 64), 0LL);
    v5 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ability_ptr);
    if ( ActorAbility::getIsLevelElementAbility(v5) )
    {
      std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v2 + 96));
      if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 96), 0LL) )
        std::shared_ptr<Creature>::operator=(
          (std::shared_ptr<Creature> *const)(v2 + 32),
          (const std::shared_ptr<Creature> *)(v2 + 96));
      else
        std::shared_ptr<DieCreatureRecord>::operator=(
          (std::shared_ptr<DieCreatureRecord> *const)(v2 + 64),
          &this->die_modifier_owner_record_ptr);
      v6 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ability_ptr);
      std::shared_ptr<DieCreatureRecord>::shared_ptr(
        &p_record_ptr,
        (const std::shared_ptr<DieCreatureRecord> *)(v2 + 64));
      std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, (const std::shared_ptr<Creature> *)(v2 + 32));
      fixed_value = ActorAbility::evaluate(v6, dynamicFloat, &p_global_value_source_ptr, &p_record_ptr);
      std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
      std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 96));
    }
    else
    {
      v7 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ability_ptr);
      std::shared_ptr<DieCreatureRecord>::shared_ptr(&p_record_ptr, 0LL);
      std::shared_ptr<Creature>::shared_ptr(&p_global_value_source_ptr, (const std::shared_ptr<Creature> *)(v2 + 32));
      fixed_value = ActorAbility::evaluate(v7, dynamicFloat, &p_global_value_source_ptr, &p_record_ptr);
      std::shared_ptr<Creature>::~shared_ptr(&p_global_value_source_ptr);
      std::shared_ptr<DieCreatureRecord>::~shared_ptr(&p_record_ptr);
    }
    std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v2 + 64));
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)dynamicFloat >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)dynamicFloat >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(dynamicFloat);
    }
    fixed_value = dynamicFloat->fixed_value;
  }
  result = fixed_value;
  if ( v12 == (char *)v2 )
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

// Line 310: range 0000000017969A36-000000001796A17E
void __cdecl AttackResult::fillByAttackInfo(
        AttackResult *const this,
        CreaturePtr *p_attacker_ptr,
        const data::ConfigAttackInfo *config_attack_info)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t attack_id; // ecx
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  bool can_hit_head; // cl
  data::CanBeModifiedBy can_be_modified_by; // ecx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  char v16; // al
  data::ConfigBulletWane *p_bullet_wane; // rcx
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  int v21; // r14d
  std::map<unsigned int,float>::mapped_type *v22; // rax
  int *v23; // rdx
  std::shared_ptr<Config> v25; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 15 filter_hash:341 64 16 24 ability_filter_index:332";
  *(_QWORD *)(v4 + 16) = AttackResult::fillByAttackInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)config_attack_info >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config_attack_info >> 3) + 0x7FFF8000) <= 3 )
  {
    *(double *)v3.m128i_i64 = __asan_report_load4(config_attack_info);
  }
  attack_id = config_attack_info->attack_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attack_id);
  }
  this->attack_id = attack_id;
  if ( !this->attack_id )
  {
    if ( std::operator!=<Creature>(0LL, p_attacker_ptr) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/creature/attack_result.cpp",
        "fillByAttackInfo",
        316);
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v26,
             (const char (*)[26])"attack_id is 0, attacker:");
      v9 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_attacker_ptr);
      v10 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v8, v9);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" attack_tag:");
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/creature/attack_result.cpp",
        "fillByAttackInfo",
        320);
      v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v26,
              (const char (*)[28])"attack_id is 0, attack_tag:");
    }
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &config_attack_info->attack_tag);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  if ( *(char *)(((unsigned __int64)&config_attack_info->can_hit_head >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&config_attack_info->can_hit_head);
  can_hit_head = config_attack_info->can_hit_head;
  if ( *(char *)(((unsigned __int64)&this->can_hit_head >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_hit_head);
  this->can_hit_head = can_hit_head;
  if ( *(_BYTE *)(((unsigned __int64)&config_attack_info->can_be_modified_by >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_attack_info - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_attack_info->can_be_modified_by >> 3)
                                                                      + 0x7FFF8000) )
  {
    *(double *)v3.m128i_i64 = __asan_report_load4(&config_attack_info->can_be_modified_by);
  }
  can_be_modified_by = config_attack_info->can_be_modified_by;
  if ( *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->can_be_modified_by >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->can_be_modified_by);
  }
  this->can_be_modified_by = can_be_modified_by;
  data::ConfigAttackProperty::operator=(&this->server_attacker_property, &config_attack_info->attack_property);
  std::string::operator=(&this->attack_tag, &config_attack_info->attack_tag);
  std::string::operator=(&this->attenuation_group, &config_attack_info->attenuation_group);
  if ( !std::operator!=<Creature>(p_attacker_ptr, 0LL) )
    goto LABEL_31;
  v14 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_attacker_ptr);
  if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
    v14 = __asan_report_load8(v14);
  v15 = *(_QWORD *)v14 + 32LL;
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    v14 = __asan_report_load8(*(_QWORD *)v14 + 32LL);
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v15)(v14) != 3 )
    goto LABEL_31;
  if ( *(char *)(((unsigned __int64)&config_attack_info->bullet_wane.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&config_attack_info->bullet_wane.is_json_loaded);
  if ( config_attack_info->bullet_wane.is_json_loaded )
    v16 = 1;
  else
LABEL_31:
    v16 = 0;
  if ( v16 )
  {
    p_bullet_wane = &config_attack_info->bullet_wane;
    if ( *(_BYTE *)(((unsigned __int64)&this->bullet_wane_ptr >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->bullet_wane_ptr);
    this->bullet_wane_ptr = p_bullet_wane;
  }
  *(_QWORD *)(v4 + 64) = &`vtable for'data::AbilityFilterIndex + 2;
  *(_DWORD *)(v4 + 72) = 0;
  *(_DWORD *)(v4 + 76) = 0;
  if ( std::operator!=<ActorAbility>(0LL, &this->ability_ptr) )
  {
    v18 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ability_ptr);
    *(_DWORD *)(v4 + 72) = ActorAbility::getAbilityNameHash(v18);
  }
  if ( std::operator!=<ActorModifier>(0LL, &this->modifier_ptr) )
  {
    v19 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->modifier_ptr);
    *(_DWORD *)(v4 + 76) = ActorModifier::getModifierNameHash(v19);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  *(_DWORD *)(v4 + 48) = StatLogFilterExcelConfigMgr::getFilterHashByAbilityFilterIndex(
                           &v20->design_config.txt_config_mgr.stat_log_filter_config_mgr,
                           (const data::AbilityFilterIndex *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( *(_DWORD *)(v4 + 48) )
  {
    *(float *)v3.m128i_i32 = AttackResult::getAttackerPropertyDynimacFloat(
                               this,
                               &this->server_attacker_property.damage_extra);
    v21 = _mm_cvtsi128_si32(v3);
    v22 = std::map<unsigned int,float>::operator[](
            &this->stat_log_damage_extra_map,
            (const std::map<unsigned int,float>::key_type *)(v4 + 48));
    v23 = (int *)v22;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v22);
    }
    *v23 = v21;
  }
  data::AbilityFilterIndex::~AbilityFilterIndex((data::AbilityFilterIndex *const)(v4 + 64));
  if ( v27 == (char *)v4 )
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
};

// Line 350: range 000000001796A180-000000001796C15A
int32_t __cdecl AttackResult::fromClient(
        AttackResult *const this,
        CreaturePtr *p_attacker_ptr,
        CreaturePtr *p_defenser_ptr,
        const proto::AttackResult *proto_attack_result)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t result; // eax
  float v9; // edx
  uint32_t v10; // ecx
  google::protobuf::uint32 v11; // edi
  const proto::HitCollision *v12; // rax
  const proto::Vector *v13; // rax
  const proto::HitCollision *v14; // rax
  float v15; // edx
  const proto::HitCollision *v16; // rax
  float v17; // ecx
  uint32_t v18; // edx
  float v19; // ecx
  uint32_t v20; // edx
  google::protobuf::uint32 v21; // esi
  google::protobuf::uint32 v22; // edi
  uint32_t v23; // edx
  uint32_t v24; // ecx
  uint32_t count_sync_to_server; // ecx
  uint32_t v26; // edx
  JsonConfigMgr *p_json_config_mgr; // r14
  uint32_t v28; // eax
  const std::string *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t v35; // edx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  data::ConfigAttackInfo *p_attack_info; // r14
  common::milog::MiLogStream *v39; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t v41; // r14d
  data::ConfigAttackInfo *v42; // r14
  uint32_t v43; // r14d
  common::milog::MiLogStream *v44; // r14
  char v45; // r14
  Creature *v46; // rax
  AbilityComp *AbilityComp; // rax
  Creature *v48; // rax
  AbilityComp *v49; // r15
  bool v50; // r15
  int32_t v51; // edx
  Creature *v52; // rax
  AbilityComp *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  Creature *v57; // rax
  AbilityComp *v58; // rax
  bool IsInitFinish; // al
  uint32_t v60; // r14d
  uint32_t v61; // r14d
  Creature *v62; // rax
  AbilityComp *v63; // rax
  std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rcx
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r14
  std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v69; // r14
  std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v71; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v72; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v73; // rax
  Player *v74; // r14
  data::ConfigAttackInfo *v75; // r14
  data::ConfigAttackInfo *v76; // r14
  std::unordered_map<data::TargetType,data::ConfigAttackInfo> *p_attack_info_map; // r14
  std::__shared_ptr_access<data::TriggerAttackTargetMapEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v78; // rax
  data::ConfigAttackInfo *p_second; // r14
  data::ConfigAttackInfo *v80; // r14
  data::ConfigAttackInfo *v81; // r14
  common::milog::MiLogStream *v82; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // r14
  common::milog::MiLogStream *v86; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v87; // rax
  common::milog::MiLogStream *v88; // rax
  bool is_server_modifier; // [rsp+3Bh] [rbp-285h]
  unsigned int val; // [rsp+3Ch] [rbp-284h] BYREF
  int32_t ret; // [rsp+40h] [rbp-280h]
  uint32_t modifier_id; // [rsp+44h] [rbp-27Ch]
  const proto::AbilityIdentifier *ability_identifier; // [rsp+48h] [rbp-278h]
  data::ConfigAttackEvent *config_attack_event_ptr; // [rsp+50h] [rbp-270h]
  std::optional<unsigned int> M_cur; // [rsp+58h] [rbp-268h] BYREF
  Vector3 v100; // [rsp+64h] [rbp-25Ch] BYREF
  common::milog::MiLogStream v101; // [rsp+70h] [rbp-250h] BYREF
  char v102[560]; // [rsp+90h] [rbp-230h] BYREF

  v5 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(512LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "14 48 4 14 ability_id:437 64 8 8 iter:504 96 16 14 caster_ptr:424 128 16 13 scene_ptr:430 160 16"
                        " 22 modifier_owner_ptr:447 192 16 27 config_ability_impl_ptr:462 224 16 19 invoke_site_ptr:468 2"
                        "56 16 30 damage_by_attack_value_ptr:489 288 16 28 trigger_attack_event_ptr:495 320 16 32 trigger"
                        "_attack_map_event_ptr:501 352 16 32 tile_attack_manager_mxin_ptr:511 384 16 34 tile_complex_mana"
                        "ger_mixin_ptr:517 416 16 13 scene_ptr:450 448 32 27 anim_event_id_from_hash:378";
  *(_QWORD *)(v5 + 16) = AttackResult::fromClient;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862725] = -219021312;
  v7[536862726] = -219021312;
  v7[536862727] = -219021312;
  v7[536862728] = -219021312;
  v7[536862729] = -219021312;
  v7[536862730] = -219021312;
  v7[536862731] = -219021312;
  v7[536862732] = -219021312;
  v7[536862733] = -219021312;
  v7[536862735] = -202116109;
  ret = -1;
  if ( std::operator==<Creature>(p_defenser_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v101,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/attack_result.cpp",
      "fromClient",
      354);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v101, (const char (*)[21])"defenser_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v101);
    result = ret;
  }
  else
  {
    std::weak_ptr<Creature>::operator=<Creature>(&this->attacker_wtr, p_attacker_ptr);
    std::weak_ptr<Creature>::operator=<Creature>(&this->defenser_wtr, p_defenser_ptr);
    *(float *)v4.m128i_i32 = proto::AttackResult::damage(proto_attack_result);
    v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(this);
    }
    this->client_damage = v9;
    v10 = proto::AttackResult::critical_rand(proto_attack_result);
    if ( *(_BYTE *)(((unsigned __int64)&this->client_critical_rand >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_critical_rand >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->client_critical_rand);
    }
    this->client_critical_rand = v10;
    v11 = proto::AttackResult::element_type(proto_attack_result);
    if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
    {
      v11 = (_DWORD)this + 28;
      __asan_report_store4(&this->element_type);
    }
    this->element_type = v11;
    v12 = proto::AttackResult::hit_collision(proto_attack_result);
    v13 = proto::HitCollision::hit_point(v12);
    Vector3::Vector3(&v100, v13);
    if ( (((unsigned __int8)this + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hit_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->hit_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->hit_pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 119) & 7) >= *(_BYTE *)((((unsigned __int64)&this->hit_pos.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->hit_pos, 12LL);
    }
    this->hit_pos = v100;
    v14 = proto::AttackResult::hit_collision(proto_attack_result);
    *(float *)v4.m128i_i32 = proto::HitCollision::attackee_hit_force_angle(v14);
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    if ( *(_BYTE *)(((unsigned __int64)&this->attackee_hit_force_angle >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->attackee_hit_force_angle >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->attackee_hit_force_angle);
    }
    this->attackee_hit_force_angle = v15;
    v16 = proto::AttackResult::hit_collision(proto_attack_result);
    *(float *)v4.m128i_i32 = proto::HitCollision::attackee_hit_entity_angle(v16);
    v17 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    if ( *(_BYTE *)(((unsigned __int64)&this->attackee_hit_entity_angle >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attackee_hit_entity_angle >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->attackee_hit_entity_angle);
    }
    this->attackee_hit_entity_angle = v17;
    v18 = proto::AttackResult::hit_pos_type(proto_attack_result);
    if ( *(_BYTE *)(((unsigned __int64)&this->hit_pos_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->hit_pos_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->hit_pos_type);
    }
    this->hit_pos_type = v18;
    *(float *)v4.m128i_i32 = proto::AttackResult::damage_shield(proto_attack_result);
    v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    if ( *(_BYTE *)(((unsigned __int64)&this->damage_on_shield >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_on_shield >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(&this->damage_on_shield);
    }
    this->damage_on_shield = v19;
    v20 = proto::AttackResult::attack_count(proto_attack_result);
    if ( *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->attack_count);
    }
    this->attack_count = v20;
    v21 = proto::AttackResult::amplify_reaction_type(proto_attack_result);
    if ( *(_BYTE *)(((unsigned __int64)&this->amplify_reaction_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->amplify_reaction_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->amplify_reaction_type);
    }
    this->amplify_reaction_type = v21;
    v22 = proto::AttackResult::addhurt_reaction_type(proto_attack_result);
    if ( *(_BYTE *)(((unsigned __int64)&this->addhurt_reaction_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->addhurt_reaction_type >> 3)
                                                          + 0x7FFF8000) )
    {
      v22 = (_DWORD)this + 692;
      __asan_report_store4(&this->addhurt_reaction_type);
    }
    this->addhurt_reaction_type = v22;
    v23 = proto::AttackResult::bullet_fly_time_ms(proto_attack_result);
    if ( *(_BYTE *)(((unsigned __int64)&this->bullet_fly_time_ms >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->bullet_fly_time_ms >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->bullet_fly_time_ms);
    }
    this->bullet_fly_time_ms = v23;
    v24 = proto::AttackResult::attack_timestamp_ms(proto_attack_result);
    if ( *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->time_stamp);
    }
    this->time_stamp = v24;
    count_sync_to_server = proto::AttackResult::create_count_sync_to_server(proto_attack_result);
    if ( *(_BYTE *)(((unsigned __int64)&this->create_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->create_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->create_count);
    }
    this->create_count = count_sync_to_server;
    v26 = proto::AttackResult::target_type(proto_attack_result);
    if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->target_type);
    }
    this->target_type = v26;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v5 + 416));
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 416))->design_config.json_config_mgr;
    v28 = proto::AttackResult::hashed_anim_event_id(proto_attack_result);
    v29 = JsonConfigMgr::getAbilityStringFromHash[abi:cxx11](p_json_config_mgr, v28);
    std::string::basic_string(v5 + 448, v29);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 416));
    common::milog::MiLogStream::create(
      &v101,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/creature/attack_result.cpp",
      "fromClient",
      380);
    v30 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v101,
            (const char (*)[23])"hashed_anim_event_id: ");
    val = proto::AttackResult::hashed_anim_event_id(proto_attack_result);
    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
    v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, (const std::string *)(v5 + 448));
    common::milog::MiLogStream::~MiLogStream(&v101);
    if ( (unsigned __int8)std::string::empty(v5 + 448) != 1 )
    {
      if ( std::operator==<Creature>(p_attacker_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v101,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/creature/attack_result.cpp",
          "fromClient",
          386);
        v33 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v101,
                (const char (*)[21])"attacker_ptr is null");
        v34 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_defenser_ptr);
        common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v33, v34);
        common::milog::MiLogStream::~MiLogStream(&v101);
        ret = 0;
      }
      else
      {
        v35 = proto::AttackResult::hashed_anim_event_id(proto_attack_result);
        if ( *(_BYTE *)(((unsigned __int64)&this->hashed_anim_event_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->hashed_anim_event_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->hashed_anim_event_id);
        }
        this->hashed_anim_event_id = v35;
        std::string::operator=(&this->anim_event_id, v5 + 448);
        v36 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_attacker_ptr);
        if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
          v36 = __asan_report_load8(v36);
        v37 = *(_QWORD *)v36 + 272LL;
        if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
          v36 = __asan_report_load8(*(_QWORD *)v36 + 272LL);
        config_attack_event_ptr = (data::ConfigAttackEvent *)(*(__int64 (__fastcall **)(unsigned __int64, std::string *))v37)(
                                                               v36,
                                                               &this->anim_event_id);
        if ( config_attack_event_ptr )
        {
          p_attack_info = &config_attack_event_ptr->attack_info;
          std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416), p_attacker_ptr);
          AttackResult::fillByAttackInfo(this, (CreaturePtr *)(v5 + 416), p_attack_info);
          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416));
        }
      }
    }
    else if ( proto::AttackResult::use_gadget_damage_action(proto_attack_result) )
    {
      if ( std::operator==<Creature>(p_attacker_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v101,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/creature/attack_result.cpp",
          "fromClient",
          402);
        v39 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v101,
                (const char (*)[21])"attacker_ptr is null");
        v40 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_defenser_ptr);
        common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v39, v40);
        common::milog::MiLogStream::~MiLogStream(&v101);
        ret = 0;
      }
      else
      {
        std::dynamic_pointer_cast<Gadget,Creature>((const std::shared_ptr<Creature> *)(v5 + 320));
        if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v5 + 320), 0LL) )
        {
          val = proto::AttackResult::gadget_damage_action_idx(proto_attack_result);
          std::optional<unsigned int>::optional<unsigned int,true>(&M_cur, &val);
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_damage_action_idx_opt >> 3) + 0x7FFF8000) )
            __asan_report_store8(&this->gadget_damage_action_idx_opt);
          this->gadget_damage_action_idx_opt = M_cur;
          v41 = (unsigned int)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 320));
          proto::AttackResult::gadget_damage_action_idx(proto_attack_result);
          Gadget::getTriggerAction((const Gadget *const)(v5 + 352), v41);
          if ( std::operator!=<data::ConfigBaseGadgetTriggerAction>(
                 (const std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *)(v5 + 352),
                 0LL) )
          {
            std::dynamic_pointer_cast<data::ConfigGadgetDamageByAttackValue,data::ConfigBaseGadgetTriggerAction>((const std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *)(v5 + 384));
            if ( std::operator!=<data::ConfigGadgetDamageByAttackValue>(
                   (const std::shared_ptr<data::ConfigGadgetDamageByAttackValue> *)(v5 + 384),
                   0LL) )
            {
              v42 = &std::__shared_ptr_access<data::ConfigGadgetDamageByAttackValue,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadgetDamageByAttackValue,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 384))->attack_info;
              std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416), p_attacker_ptr);
              AttackResult::fillByAttackInfo(this, (CreaturePtr *)(v5 + 416), v42);
              std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416));
            }
            std::shared_ptr<data::ConfigGadgetDamageByAttackValue>::~shared_ptr((std::shared_ptr<data::ConfigGadgetDamageByAttackValue> *const)(v5 + 384));
          }
          std::shared_ptr<data::ConfigBaseGadgetTriggerAction>::~shared_ptr((std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *const)(v5 + 352));
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v5 + 320));
      }
    }
    else if ( proto::AttackResult::has_ability_identifier(proto_attack_result) )
    {
      ability_identifier = proto::AttackResult::ability_identifier(proto_attack_result);
      v43 = (unsigned int)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_defenser_ptr);
      proto::AbilityIdentifier::ability_caster_id(ability_identifier);
      Entity::findEntityInSameScene<Creature>((const Entity *const)(v5 + 96), v43);
      if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v5 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v101,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/creature/attack_result.cpp",
          "fromClient",
          427);
        v44 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v101,
                (const char (*)[48])"findEntityInSameScene fails, ability_caster_id:");
        val = proto::AbilityIdentifier::ability_caster_id(ability_identifier);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &val);
        common::milog::MiLogStream::~MiLogStream(&v101);
      }
      else
      {
        std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        Entity::getScene((const Entity *const)(v5 + 128));
        v45 = 0;
        v46 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        AbilityComp = Creature::getAbilityComp(v46);
        v50 = 0;
        if ( !AbilityComp::getIsInitFinish(AbilityComp) )
        {
          v48 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          v49 = Creature::getAbilityComp(v48);
          std::shared_ptr<Scene>::shared_ptr(
            (std::shared_ptr<Scene> *const)(v5 + 416),
            (const std::shared_ptr<Scene> *)(v5 + 128));
          v45 = 1;
          if ( AbilityComp::init(v49, (ScenePtr *)(v5 + 416)) )
            v50 = 1;
        }
        if ( v45 )
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 416));
        if ( v50 )
        {
          common::milog::MiLogStream::create(
            &v101,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/creature/attack_result.cpp",
            "fromClient",
            433);
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v101,
            (const char (*)[24])"ability_comp init fails");
          common::milog::MiLogStream::~MiLogStream(&v101);
        }
        else
        {
          *(_DWORD *)(v5 + 48) = proto::AbilityIdentifier::instanced_ability_id(ability_identifier);
          modifier_id = proto::AbilityIdentifier::instanced_modifier_id(ability_identifier);
          v51 = proto::AbilityIdentifier::local_id(ability_identifier);
          if ( *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->local_id);
          }
          this->local_id = v51;
          is_server_modifier = proto::AbilityIdentifier::is_serverbuff_modifier(ability_identifier);
          v52 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          v53 = Creature::getAbilityComp(v52);
          AbilityComp::findAppliedAbility((AbilityComp *const)(v5 + 352), (__int64)v53, *(_DWORD *)(v5 + 48));
          std::shared_ptr<ActorAbility>::operator=(&this->ability_ptr, (std::shared_ptr<ActorAbility> *)(v5 + 352));
          std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v5 + 352));
          if ( std::operator==<ActorAbility>(&this->ability_ptr, 0LL) )
          {
            common::milog::MiLogStream::create(
              &v101,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/creature/attack_result.cpp",
              "fromClient",
              444);
            v54 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v101,
                    (const char (*)[38])"findAppliedAbility fails, ability_id:");
            v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v54,
                    (const unsigned int *)(v5 + 48));
            v56 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v55, (const char (*)[11])" isInited ");
            v57 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            v58 = Creature::getAbilityComp(v57);
            IsInitFinish = AbilityComp::getIsInitFinish(v58);
            common::milog::MiLogStream::operator<<(v56, IsInitFinish);
            common::milog::MiLogStream::~MiLogStream(&v101);
          }
          else
          {
            v60 = (unsigned int)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_defenser_ptr);
            proto::AbilityIdentifier::modifier_owner_id(ability_identifier);
            Entity::findEntityInSameScene<Creature>((const Entity *const)(v5 + 160), v60);
            if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v5 + 160), 0LL) )
            {
              std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_defenser_ptr);
              Entity::getScene((const Entity *const)(v5 + 416));
              if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v5 + 416), 0LL) )
              {
                v61 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 416));
                proto::AbilityIdentifier::modifier_owner_id(ability_identifier);
                Scene::findDieCreatureRecord((Scene *const)(v5 + 384), v61);
                std::shared_ptr<DieCreatureRecord>::operator=(
                  &this->die_modifier_owner_record_ptr,
                  (std::shared_ptr<DieCreatureRecord> *)(v5 + 384));
                std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v5 + 384));
              }
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 416));
            }
            if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v5 + 160), 0LL) )
            {
              v62 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 160));
              v63 = Creature::getAbilityComp(v62);
              AbilityComp::findAppliedModifier((AbilityComp *const)(v5 + 416), v63, modifier_id, is_server_modifier);
              std::shared_ptr<ActorModifier>::operator=(
                &this->modifier_ptr,
                (std::shared_ptr<ActorModifier> *)(v5 + 416));
              std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v5 + 416));
              std::weak_ptr<Creature>::operator=<Creature>(
                &this->modifier_owner_wtr,
                (const std::shared_ptr<Creature> *)(v5 + 160));
            }
            std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->ability_ptr);
            ActorAbility::getConfigImpl((const ActorAbility *const)(v5 + 192));
            if ( std::operator==<ConfigAbilityImpl>((const std::shared_ptr<ConfigAbilityImpl> *)(v5 + 192), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v101,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/creature/attack_result.cpp",
                "fromClient",
                465);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v101,
                (const char (*)[32])"config_ability_impl_ptr is null");
              common::milog::MiLogStream::~MiLogStream(&v101);
            }
            else
            {
              v64 = std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
              if ( *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->local_id);
              }
              ConfigAbilityImpl::getInvokeSite((const ConfigAbilityImpl *const)(v5 + 224), (__int64)v64, this->local_id);
              if ( std::operator==<data::BaseActionContainer>(
                     (const std::shared_ptr<data::BaseActionContainer> *)(v5 + 224),
                     0LL) )
              {
                common::milog::MiLogStream::create(
                  &v101,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/creature/attack_result.cpp",
                  "fromClient",
                  471);
                v65 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v101,
                        (const char (*)[31])"getInvokeSite fails, local_id:");
                v66 = common::milog::MiLogStream::operator<<<int,(int *)0>(v65, &this->local_id);
                v67 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v66,
                        (const char (*)[15])" ability_name:");
                v68 = std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v67, &v68->ability_name);
                common::milog::MiLogStream::~MiLogStream(&v101);
                if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v5 + 128)) )
                {
                  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
                  Scene::getOwnPlayer((const Scene *const)(v5 + 384));
                  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 384)) )
                  {
                    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 416));
                    v69 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 416),
                            "AttackResult: ability_name:");
                    v70 = std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigAbilityImpl,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 192));
                    v71 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                            v69,
                            &v70->ability_name);
                    v72 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v71, " local_id:");
                    if ( *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->local_id >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->local_id);
                    }
                    v73 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v72, this->local_id);
                    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v73, " invalid");
                    v74 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 384));
                    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
                      (std::string *)&v101,
                      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 416));
                    Player::notifyGMServerLog(v74, SERVER_LOG_NONE, LOG_LEVEL_WARNING_0, (const std::string *)&v101);
                    std::string::~string(&v101);
                    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v5 + 416));
                  }
                  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 384));
                }
              }
              else
              {
                std::dynamic_pointer_cast<data::DamageByAttackValue,data::BaseActionContainer>((const std::shared_ptr<data::BaseActionContainer> *)(v5 + 256));
                if ( std::operator!=<data::DamageByAttackValue>(
                       (const std::shared_ptr<data::DamageByAttackValue> *)(v5 + 256),
                       0LL) )
                {
                  v75 = &std::__shared_ptr_access<data::DamageByAttackValue,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DamageByAttackValue,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256))->attack_info;
                  std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416), p_attacker_ptr);
                  AttackResult::fillByAttackInfo(this, (CreaturePtr *)(v5 + 416), v75);
                  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416));
                }
                else
                {
                  std::dynamic_pointer_cast<data::TriggerAttackEvent,data::BaseActionContainer>((const std::shared_ptr<data::BaseActionContainer> *)(v5 + 288));
                  if ( std::operator!=<data::TriggerAttackEvent>(
                         (const std::shared_ptr<data::TriggerAttackEvent> *)(v5 + 288),
                         0LL) )
                  {
                    v76 = &std::__shared_ptr_access<data::TriggerAttackEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::TriggerAttackEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 288))->attack_event.attack_info;
                    std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416), p_attacker_ptr);
                    AttackResult::fillByAttackInfo(this, (CreaturePtr *)(v5 + 416), v76);
                    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416));
                  }
                  else
                  {
                    std::dynamic_pointer_cast<data::TriggerAttackTargetMapEvent,data::BaseActionContainer>((const std::shared_ptr<data::BaseActionContainer> *)(v5 + 320));
                    if ( std::operator!=<data::TriggerAttackTargetMapEvent>(
                           (const std::shared_ptr<data::TriggerAttackTargetMapEvent> *)(v5 + 320),
                           0LL) )
                    {
                      p_attack_info_map = &std::__shared_ptr_access<data::TriggerAttackTargetMapEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::TriggerAttackTargetMapEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 320))->attack_target_map_event.attack_info_map;
                      val = proto::AttackResult::target_type(proto_attack_result);
                      *(std::unordered_map<data::TargetType,data::ConfigAttackInfo>::iterator *)(v5 + 64) = std::unordered_map<data::TargetType,data::ConfigAttackInfo>::find(p_attack_info_map, (const std::unordered_map<data::TargetType,data::ConfigAttackInfo>::key_type *)&val);
                      v78 = std::__shared_ptr_access<data::TriggerAttackTargetMapEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::TriggerAttackTargetMapEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 320));
                      M_cur = (std::optional<unsigned int>)std::unordered_map<data::TargetType,data::ConfigAttackInfo>::end(&v78->attack_target_map_event.attack_info_map)._M_cur;
                      if ( std::__detail::operator!=<std::pair<data::TargetType const,data::ConfigAttackInfo>,false>(
                             (const std::__detail::_Node_iterator_base<std::pair<const data::TargetType,data::ConfigAttackInfo>,false> *)(v5 + 64),
                             (const std::__detail::_Node_iterator_base<std::pair<const data::TargetType,data::ConfigAttackInfo>,false> *)&M_cur) )
                      {
                        p_second = &std::__detail::_Node_iterator<std::pair<data::TargetType const,data::ConfigAttackInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::TargetType,data::ConfigAttackInfo>,false,false> *const)(v5 + 64))->second;
                        std::shared_ptr<Creature>::shared_ptr(
                          (std::shared_ptr<Creature> *const)(v5 + 416),
                          p_attacker_ptr);
                        AttackResult::fillByAttackInfo(this, (CreaturePtr *)(v5 + 416), p_second);
                        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416));
                      }
                    }
                    else
                    {
                      std::dynamic_pointer_cast<data::TileAttackManagerMixin,data::BaseActionContainer>((const std::shared_ptr<data::BaseActionContainer> *)(v5 + 352));
                      if ( std::operator!=<data::TileAttackManagerMixin>(
                             (const std::shared_ptr<data::TileAttackManagerMixin> *)(v5 + 352),
                             0LL) )
                      {
                        v80 = &std::__shared_ptr_access<data::TileAttackManagerMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::TileAttackManagerMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 352))->attack_info;
                        std::shared_ptr<Creature>::shared_ptr(
                          (std::shared_ptr<Creature> *const)(v5 + 416),
                          p_attacker_ptr);
                        AttackResult::fillByAttackInfo(this, (CreaturePtr *)(v5 + 416), v80);
                        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416));
                      }
                      else
                      {
                        std::dynamic_pointer_cast<data::TileComplexManagerMixin,data::BaseActionContainer>((const std::shared_ptr<data::BaseActionContainer> *)(v5 + 384));
                        if ( std::operator!=<data::TileComplexManagerMixin>(
                               (const std::shared_ptr<data::TileComplexManagerMixin> *)(v5 + 384),
                               0LL) )
                        {
                          v81 = &std::__shared_ptr_access<data::TileComplexManagerMixin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::TileComplexManagerMixin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 384))->attack_info;
                          std::shared_ptr<Creature>::shared_ptr(
                            (std::shared_ptr<Creature> *const)(v5 + 416),
                            p_attacker_ptr);
                          AttackResult::fillByAttackInfo(this, (CreaturePtr *)(v5 + 416), v81);
                          std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 416));
                        }
                        std::shared_ptr<data::TileComplexManagerMixin>::~shared_ptr((std::shared_ptr<data::TileComplexManagerMixin> *const)(v5 + 384));
                      }
                      std::shared_ptr<data::TileAttackManagerMixin>::~shared_ptr((std::shared_ptr<data::TileAttackManagerMixin> *const)(v5 + 352));
                    }
                    std::shared_ptr<data::TriggerAttackTargetMapEvent>::~shared_ptr((std::shared_ptr<data::TriggerAttackTargetMapEvent> *const)(v5 + 320));
                  }
                  std::shared_ptr<data::TriggerAttackEvent>::~shared_ptr((std::shared_ptr<data::TriggerAttackEvent> *const)(v5 + 288));
                }
                std::shared_ptr<data::DamageByAttackValue>::~shared_ptr((std::shared_ptr<data::DamageByAttackValue> *const)(v5 + 256));
              }
              std::shared_ptr<data::BaseActionContainer>::~shared_ptr((std::shared_ptr<data::BaseActionContainer> *const)(v5 + 224));
            }
            std::shared_ptr<ConfigAbilityImpl>::~shared_ptr((std::shared_ptr<ConfigAbilityImpl> *const)(v5 + 192));
            std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 160));
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 128));
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v5 + 96));
    }
    else
    {
      if ( std::operator==<Creature>(p_attacker_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v101,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/creature/attack_result.cpp",
          "fromClient",
          530);
        v82 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v101,
                (const char (*)[44])"no attack info, attacker is null, defenser:");
      }
      else
      {
        common::milog::MiLogStream::create(
          &v101,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/creature/attack_result.cpp",
          "fromClient",
          534);
        v86 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v101,
                (const char (*)[26])"no attack info, attacker:");
        v87 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_attacker_ptr);
        v88 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v86, v87);
        v82 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v88, (const char (*)[11])",defenser:");
      }
      v83 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_defenser_ptr);
      v84 = common::milog::MiLogStream::operator<<<Creature,(Creature*)0>(v82, v83);
      v85 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v84, (const char (*)[11])" event_id:");
      val = proto::AttackResult::hashed_anim_event_id(proto_attack_result);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v85, &val);
      common::milog::MiLogStream::~MiLogStream(&v101);
    }
    std::string::~string((void *)(v5 + 448));
    ret = 0;
    result = 0;
  }
  if ( v102 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 547: range 000000001796C15C-000000001796C5F4
int32_t __cdecl AttackResult::genCriticHash(AttackResult *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  uint32_t attacker_entity_id; // [rsp+18h] [rbp-D8h]
  uint32_t defenser_entity_id; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 5 h:570 64 16 16 attacker_ptr:549 96 16 16 defenser_ptr:550";
  *(_QWORD *)(v1 + 16) = AttackResult::genCriticHash;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  AttackResult::getAttacker((const AttackResult *const)(v1 + 64));
  AttackResult::getDefenser((const AttackResult *const)(v1 + 96));
  attacker_entity_id = 0;
  defenser_entity_id = 0;
  if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v1 + 64), 0LL) )
  {
    v4 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    attacker_entity_id = Entity::getEntityId((const Entity *const)v4);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/attack_result.cpp",
      "genCriticHash",
      559);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"attacker_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v1 + 96), 0LL) )
  {
    v5 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    defenser_entity_id = Entity::getEntityId((const Entity *const)v5);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/creature/attack_result.cpp",
      "genCriticHash",
      567);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"defenser_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  *(_DWORD *)(v1 + 48) = 0;
  common::tools::HashUtils::appendHash(attacker_entity_id, (int32_t *)(v1 + 48));
  common::tools::HashUtils::appendHash(defenser_entity_id, (int32_t *)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_stamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->time_stamp);
  }
  common::tools::HashUtils::appendHash(this->time_stamp, (int32_t *)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_pos >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_pos >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hit_pos);
  }
  common::tools::HashUtils::appendHash(this->hit_pos.x, (int32_t *)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_pos.y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hit_pos.y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->hit_pos.y);
  }
  common::tools::HashUtils::appendHash(this->hit_pos.y, (int32_t *)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_pos.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_pos.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hit_pos.z);
  }
  common::tools::HashUtils::appendHash(this->hit_pos.z, (int32_t *)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->attack_count);
  }
  common::tools::HashUtils::appendHash(this->attack_count, (int32_t *)(v1 + 48));
  v6 = *(_DWORD *)(v1 + 48);
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 96));
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 64));
  result = v6;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 583: range 000000001796C5F6-000000001796C786
data::ElementReactionType __cdecl AttackResult::getElementReactionTypeByAttackTag(const AttackResult *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  data::ElementReactionType result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ElementReactionType>,false,true>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,data::ElementReactionType>,true> __y; // [rsp+10h] [rbp-80h] BYREF
  const data::ConfigGlobalCombat *config_global_combat; // [rsp+18h] [rbp-78h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-70h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 8 iter:585";
  *(_QWORD *)(v1 + 16) = AttackResult::getElementReactionTypeByAttackTag;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  config_global_combat = JsonConfigMgr::getGlobalCombatConfig(&v4->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  *(std::unordered_map<std::string,data::ElementReactionType>::const_iterator *)(v1 + 32) = std::unordered_map<std::string,data::ElementReactionType>::find(
                                                                                              &config_global_combat->attacktag_to_elementreaction_dictionary,
                                                                                              &this->attack_tag);
  __y._M_cur = std::unordered_map<std::string,data::ElementReactionType>::end(&config_global_combat->attacktag_to_elementreaction_dictionary)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,data::ElementReactionType>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ElementReactionType>,true> *)(v1 + 32),
         &__y) )
  {
    result = None_4;
  }
  else
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ElementReactionType>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ElementReactionType>,false,true> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v6->second);
    }
    result = v6->second;
  }
  if ( v10 == (char *)v1 )
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

// Line 594: range 000000001796C788-000000001796C801
float __cdecl AttackResult::getBonusElementReactionCritical(const AttackResult *const this)
{
  float *v1; // rax
  float *v2; // rdx

  if ( !std::optional<float>::has_value(&this->modified_property.bonus_element_reaction_critical) )
    return 0.0;
  v1 = (float *)std::optional<float>::value(&this->modified_property.bonus_element_reaction_critical);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  return *v2;
};

// Line 601: range 000000001796C802-000000001796C87B
float __cdecl AttackResult::getBonusElementReactionCriticalHurt(const AttackResult *const this)
{
  float *v1; // rax
  float *v2; // rdx

  if ( !std::optional<float>::has_value(&this->modified_property.bonus_element_reaction_critical_hurt) )
    return 0.0;
  v1 = (float *)std::optional<float>::value(&this->modified_property.bonus_element_reaction_critical_hurt);
  v2 = v1;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v1);
  }
  return *v2;
};

// Line 608: range 000000001796C87C-000000001796D024
std::tuple<float,float> __cdecl AttackResult::getElementReactionCriticalAndCriticalHurt(const AttackResult *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __m128i v5; // xmm0
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::tuple<float,float> v8; // xmm0_8
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Creature *v12; // rax
  AbilityComp *AbilityComp; // rax
  Creature *v14; // rax
  AbilityComp *v15; // rax
  DieCreatureRecord *v16; // rax
  DieCreatureRecord *v17; // rax
  data::ElementReactionType element_reaction_type; // [rsp+1Ch] [rbp-184h]
  char v19[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 20 element_critical:610 48 4 25 element_critical_hurt:611 64 16 14 source_ptr:613 96 16 1"
                        "4 record_ptr:614 128 16 22 modifier_owner_ptr:620 160 32 25 reaction_ability_name:637 224 32 24 "
                        "element_critical_key:642 288 32 29 element_critical_hurt_key:643";
  *(_QWORD *)(v2 + 16) = AttackResult::getElementReactionCriticalAndCriticalHurt;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  v5 = (__m128i)0x3F800000u;
  *(_DWORD *)(v2 + 48) = 1065353216;
  std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64), 0LL);
  std::shared_ptr<DieCreatureRecord>::shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v2 + 96), 0LL);
  if ( std::operator!=<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v1 + 632), 0LL) )
  {
    v6 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 632));
    if ( ActorAbility::getIsLevelElementAbility(v6) )
    {
      std::weak_ptr<Creature>::lock((const std::weak_ptr<Creature> *const)(v2 + 128));
      if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 128), 0LL) )
        std::shared_ptr<Creature>::operator=(
          (std::shared_ptr<Creature> *const)(v2 + 64),
          (const std::shared_ptr<Creature> *)(v2 + 128));
      else
        std::shared_ptr<DieCreatureRecord>::operator=(
          (std::shared_ptr<DieCreatureRecord> *const)(v2 + 96),
          (const std::shared_ptr<DieCreatureRecord> *)(v1 + 824));
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 128));
    }
  }
  if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 64), 0LL)
    && std::operator==<DieCreatureRecord>((const std::shared_ptr<DieCreatureRecord> *)(v2 + 96), 0LL) )
  {
    if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->server_damage + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->server_damage + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(this, 8LL);
    }
    v8 = std::make_tuple<float &,float &>(
           &this->client_damage,
           (float *)(v2 + 32),
           (float *)(v2 + 48),
           (float *)(v2 + 32));
  }
  else
  {
    element_reaction_type = AttackResult::getElementReactionTypeByAttackTag((const AttackResult *const)v1);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    JsonConfigMgr::getAbilityNamefromElementReactionType[abi:cxx11](
      (std::string *)(v2 + 160),
      &v9->design_config.json_config_mgr,
      element_reaction_type);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    if ( (unsigned __int8)std::string::empty(v2 + 160) )
    {
      if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->server_damage + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->server_damage + 3) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_store_n(this, 8LL);
      }
      v8 = std::make_tuple<float &,float &>(
             &this->client_damage,
             (float *)(v2 + 32),
             (float *)(v2 + 48),
             (float *)(v2 + 32));
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 128));
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      JsonConfigMgr::getAbilityReactionCriticalName(
        (std::string *)(v2 + 224),
        &v10->design_config.json_config_mgr,
        (const std::string *)(v2 + 160));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 128));
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      JsonConfigMgr::getAbilityReactionCriticalHurtName(
        (std::string *)(v2 + 288),
        &v11->design_config.json_config_mgr,
        (const std::string *)(v2 + 160));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
      if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 64), 0LL) )
      {
        v12 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        AbilityComp = Creature::getAbilityComp(v12);
        *(float *)v5.m128i_i32 = AbilityComp::getDynamicValue<float>(AbilityComp, (const std::string *)(v2 + 224));
        *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32(v5);
        v14 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v15 = Creature::getAbilityComp(v14);
        *(float *)v5.m128i_i32 = AbilityComp::getDynamicValue<float>(v15, (const std::string *)(v2 + 288));
        *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(v5);
      }
      else if ( std::operator!=<DieCreatureRecord>((const std::shared_ptr<DieCreatureRecord> *)(v2 + 96), 0LL) )
      {
        v16 = std::__shared_ptr_access<DieCreatureRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DieCreatureRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(float *)v5.m128i_i32 = DieCreatureRecord::getGlobalValue(v16, (const std::string *)(v2 + 224));
        *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32(v5);
        v17 = std::__shared_ptr_access<DieCreatureRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DieCreatureRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        *(float *)v5.m128i_i32 = DieCreatureRecord::getGlobalValue(v17, (const std::string *)(v2 + 288));
        *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(v5);
      }
      if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->server_damage + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->server_damage + 3) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_store_n(this, 8LL);
      }
      v8 = std::make_tuple<float &,float &>(
             &this->client_damage,
             (float *)(v2 + 32),
             (float *)(v2 + 48),
             (float *)(v2 + 32));
      std::string::~string((void *)(v2 + 288));
      std::string::~string((void *)(v2 + 224));
    }
    std::string::~string((void *)(v2 + 160));
  }
  std::shared_ptr<DieCreatureRecord>::~shared_ptr((std::shared_ptr<DieCreatureRecord> *const)(v2 + 96));
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return v8;
};
