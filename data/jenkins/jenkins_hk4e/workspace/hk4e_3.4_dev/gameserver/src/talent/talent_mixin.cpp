// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/talent/talent_mixin.cpp

// Line 19: range 000000001315CE8E-000000001315CF9C
void __cdecl TalentAddAbilityMixin::TalentAddAbilityMixin(
        TalentAddAbilityMixin *const this,
        const TalentParam *param,
        data::AddAbility *config_add_ability)
{
  int (**v3)(...); // rdx
  int32_t StringHash; // edx
  char v5; // al

  BaseTalentMixin::BaseTalentMixin(this, param, config_add_ability);
  v3 = (int (**)(...))(&`vtable for'TalentAddAbilityMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, param);
  this->_vptr_BaseTalentMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_name_hash_, param, (_BYTE)this + 48);
  }
  this->ability_name_hash_ = 0;
  StringHash = getStringHash(&config_add_ability->ability_name);
  v5 = *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(param) = v5 != 0;
    __asan_report_store4(&this->ability_name_hash_, param, StringHash);
  }
  this->ability_name_hash_ = StringHash;
};

// Line 27: range 000000001315CF9E-000000001315D02D
int32_t __cdecl TalentAddAbilityMixin::enable(TalentAddAbilityMixin *const this)
{
  AbilityComp *AbilityComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AbilityComp = Creature::getAbilityComp(this->avatar_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return AbilityComp::addTargetAbility(AbilityComp, this->ability_name_hash_, 0);
};

// Line 32: range 000000001315D02E-000000001315D0BD
int32_t __cdecl TalentAddAbilityMixin::disable(TalentAddAbilityMixin *const this)
{
  AbilityComp *AbilityComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AbilityComp = Creature::getAbilityComp(this->avatar_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return AbilityComp::removeTargetAbility(AbilityComp, this->ability_name_hash_, 0);
};

// Line 38: range 000000001315D0BE-000000001315D3FD
void __cdecl TalentModifyAbilityMixin::TalentModifyAbilityMixin(
        TalentModifyAbilityMixin *const this,
        const TalentParam *param,
        data::ModifyAbility *config_modify_ability)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  bool v5; // dl
  __int64 v6; // rsi
  bool v7; // dl
  __m128i v8; // xmm0
  int32_t StringHash; // edx
  char v10; // al
  int32_t v11; // ecx
  char v12; // dl
  bool v13; // dl
  data::DynamicArgument *p_param_delta; // rdx
  BaseTalent *base_talent; // rsi
  float v16; // edx
  char v17; // al
  data::DynamicArgument *p_param_ratio; // rdx
  float v19; // ecx
  char v20; // dl
  BaseTalent *v21; // rsi
  bool v22; // dl

  BaseTalentMixin::BaseTalentMixin(this, param, config_modify_ability);
  v3 = (int (**)(...))(&`vtable for'TalentModifyAbilityMixin + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, param);
  this->_vptr_BaseTalentMixin = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_name_hash_, param, (_BYTE)this + 48);
  }
  this->ability_name_hash_ = 0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->param_special_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param_special_hash_ >> 3)
                                                        + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->param_special_hash_, v4, v5);
  this->param_special_hash_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->param_delta_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param_delta_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param_delta_, v4, (_BYTE)this + 56);
  }
  this->param_delta_ = 0.0;
  v6 = (((_BYTE)this + 60) & 7u) + 3;
  v7 = *(_BYTE *)(((unsigned __int64)&this->param_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param_ratio_ >> 3) + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->param_ratio_, v6, v7);
  v8 = 0LL;
  this->param_ratio_ = 0.0;
  StringHash = getStringHash(&config_modify_ability->ability_name);
  v10 = *(_BYTE *)(((unsigned __int64)&this->ability_name_hash_ >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v6) = v10 != 0;
    __asan_report_store4(&this->ability_name_hash_, v6, StringHash);
  }
  this->ability_name_hash_ = StringHash;
  v11 = getStringHash(&config_modify_ability->param_special);
  v12 = *(_BYTE *)(((unsigned __int64)&this->param_special_hash_ >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v12 != 0;
  v13 = v12 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v12;
  if ( v13 )
    __asan_report_store4(&this->param_special_hash_, v6, v13);
  this->param_special_hash_ = v11;
  p_param_delta = &config_modify_ability->param_delta;
  if ( *(_BYTE *)(((unsigned __int64)&param->base_talent >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  base_talent = param->base_talent;
  *(float *)v8.m128i_i32 = TalentModifyAbilityMixin::evaluateParam(this, base_talent, p_param_delta);
  v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  v17 = *(_BYTE *)(((unsigned __int64)&this->param_delta_ >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(base_talent) = v17 != 0;
    __asan_report_store4(&this->param_delta_, base_talent, LOBYTE(v16));
  }
  this->param_delta_ = v16;
  p_param_ratio = &config_modify_ability->param_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&param->base_talent >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v21 = param->base_talent;
  *(float *)v8.m128i_i32 = TalentModifyAbilityMixin::evaluateParam(this, v21, p_param_ratio);
  v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  v20 = *(_BYTE *)(((unsigned __int64)&this->param_ratio_ >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v20 != 0;
  v22 = v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20;
  if ( v22 )
    __asan_report_store4(&this->param_ratio_, v21, v22);
  this->param_ratio_ = v19;
};

// Line 49: range 000000001315D3FE-000000001315D452
int32_t __cdecl TalentModifyAbilityMixin::enable(TalentModifyAbilityMixin *const this)
{
  AbilityComp *AbilityComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AbilityComp = Creature::getAbilityComp(this->avatar_);
  return AbilityComp::addAbilitySpecial(AbilityComp, this);
};

// Line 54: range 000000001315D454-000000001315D4A8
int32_t __cdecl TalentModifyAbilityMixin::disable(TalentModifyAbilityMixin *const this)
{
  AbilityComp *AbilityComp; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AbilityComp = Creature::getAbilityComp(this->avatar_);
  return AbilityComp::removeAbilitySpecial(AbilityComp, this);
};

// Line 59: range 000000001315D4AA-000000001315DEC6
float __cdecl TalentModifyAbilityMixin::evaluateParam(
        TalentModifyAbilityMixin *const this,
        const BaseTalent *base_talent,
        const data::DynamicArgument *dynamic_argument)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 (__fastcall **vptr_BaseTalent)(const BaseTalent *); // rax
  common::milog::MiLogStream *v8; // rdx
  float v9; // r14d
  const std::type_info *v10; // rax
  const std::type_info *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  unsigned __int64 v15; // rax
  _BYTE *v16; // rdx
  unsigned __int64 v17; // rax
  _BYTE *v18; // rdx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  char v23; // r14
  bool v24; // r15
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  std::vector<float>::size_type v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  std::vector<float>::const_reference v34; // rdx
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  const std::type_info *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  const std::type_info *v44; // rax
  float result; // xmm0_4
  bool negtive; // [rsp+2Bh] [rbp-105h]
  uint32_t percent_pos; // [rsp+2Ch] [rbp-104h]
  unsigned __int64 val; // [rsp+30h] [rbp-100h] BYREF
  const data::BaseTalentConfig *base_talent_config_ptr; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v51; // [rsp+40h] [rbp-F0h] BYREF
  char v52[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 12 arg_index:97 48 4 16 result_value:114 64 16 6 val:67 96 32 16 arg_index_str:75";
  *(_QWORD *)(v4 + 16) = TalentModifyAbilityMixin::evaluateParam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)base_talent >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  vptr_BaseTalent = (__int64 (__fastcall **)(const BaseTalent *))base_talent->_vptr_BaseTalent;
  if ( *(_BYTE *)(((unsigned __int64)base_talent->_vptr_BaseTalent >> 3) + 0x7FFF8000) )
    vptr_BaseTalent = (__int64 (__fastcall **)(const BaseTalent *))__asan_report_load8();
  base_talent_config_ptr = (const data::BaseTalentConfig *)(*vptr_BaseTalent)(base_talent);
  if ( base_talent_config_ptr )
  {
    std::any::any((std::any *const)(v4 + 64), &dynamic_argument->value);
    v10 = std::any::type((const std::any *const)(v4 + 64));
    if ( std::type_info::operator==(v10, (const std::type_info *)&`typeinfo for'float) )
    {
      *(float *)v3.m128i_i32 = safeAnyCast<float>((const std::any *)(v4 + 64));
      v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
    }
    else
    {
      v11 = std::any::type((const std::any *const)(v4 + 64));
      if ( std::type_info::operator==(v11, (const std::type_info *)&`typeinfo for'std::string) )
      {
        safeAnyCast<std::string>((std::string *)(v4 + 96), (const std::any *)(v4 + 64));
        if ( (unsigned __int8)std::string::empty(v4 + 96) )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/talent/talent_mixin.cpp",
            "evaluateParam",
            78);
          v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  &v51,
                  (const char (*)[17])"empty arg index:");
          v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v4 + 96));
          v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v13,
                  (const char (*)[14])" base_talent:");
          operator<<(v14, base_talent);
          common::milog::MiLogStream::~MiLogStream(&v51);
          v9 = 0.0;
        }
        else
        {
          negtive = 0;
          percent_pos = 0;
          v15 = std::string::operator[](v4 + 96, 0LL);
          v16 = (_BYTE *)v15;
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) != 0 && (char)(v15 & 7) >= *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            __asan_report_load1(v15);
          if ( *v16 == 45 )
          {
            percent_pos = 1;
            negtive = 1;
          }
          if ( percent_pos >= (unsigned __int64)std::string::size(v4 + 96) )
            goto LABEL_23;
          v17 = std::string::operator[](v4 + 96, percent_pos);
          v18 = (_BYTE *)v17;
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)(v17 & 7) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            __asan_report_load1(v17);
          if ( *v18 == 37 )
            v19 = 0;
          else
LABEL_23:
            v19 = 1;
          if ( v19 )
          {
            common::milog::MiLogStream::create(
              &v51,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/talent/talent_mixin.cpp",
              "evaluateParam",
              93);
            v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v51,
                    (const char (*)[19])"invalid arg index:");
            v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v20,
                    (const std::string *)(v4 + 96));
            v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v21,
                    (const char (*)[14])" base_talent:");
            operator<<(v22, base_talent);
            common::milog::MiLogStream::~MiLogStream(&v51);
            v9 = 0.0;
          }
          else
          {
            *(_DWORD *)(v4 + 32) = 0;
            v23 = 0;
            v24 = 1;
            if ( percent_pos + 1 < (unsigned __int64)std::string::size(v4 + 96) )
            {
              std::string::substr(&v51, v4 + 96, percent_pos + 1, -1LL);
              v23 = 1;
              if ( !common::tools::StringUtils::strToNum<unsigned int>(
                      (const std::string *)&v51,
                      (unsigned int *)(v4 + 32),
                      1) )
              {
                if ( *(_DWORD *)(v4 + 32) )
                  v24 = 0;
              }
            }
            if ( v23 )
              std::string::~string(&v51);
            if ( v24 )
            {
              common::milog::MiLogStream::create(
                &v51,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/talent/talent_mixin.cpp",
                "evaluateParam",
                102);
              v25 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      &v51,
                      (const char (*)[19])"invalid arg index:");
              v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v25,
                      (const std::string *)(v4 + 96));
              v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v26,
                      (const char (*)[14])" base_talent:");
              operator<<(v27, base_talent);
              common::milog::MiLogStream::~MiLogStream(&v51);
              v9 = 0.0;
            }
            else
            {
              v28 = (unsigned int)--*(_DWORD *)(v4 + 32);
              if ( v28 < std::vector<float>::size(&base_talent_config_ptr->param_list) )
              {
                v34 = std::vector<float>::operator[](&base_talent_config_ptr->param_list, *(unsigned int *)(v4 + 32));
                if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(__gnu_cxx::__alloc_traits<std::allocator<float>,float>::value_type *)(v4 + 48) = *v34;
                if ( negtive )
                  *(float *)(v4 + 48) = -*(float *)(v4 + 48);
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/talent/talent_mixin.cpp",
                  "evaluateParam",
                  120);
                v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        &v51,
                        (const char (*)[13])"base_talent:");
                v36 = operator<<(v35, base_talent);
                v37 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v36,
                        (const char (*)[12])" arg_index:");
                v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v37,
                        (const unsigned int *)(v4 + 32));
                v39 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])" value:");
                common::milog::MiLogStream::operator<<<float,(float *)0>(v39, (const float *)(v4 + 48));
                common::milog::MiLogStream::~MiLogStream(&v51);
                v9 = *(float *)(v4 + 48);
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v51,
                  &common::milog::MiLogDefault::default_log_obj_,
                  0x13u,
                  "./src/talent/talent_mixin.cpp",
                  "evaluateParam",
                  109);
                v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        &v51,
                        (const char (*)[11])"arg_index:");
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v4 + 32));
                v31 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v30,
                        (const char (*)[18])" param_list.size:");
                val = std::vector<float>::size(&base_talent_config_ptr->param_list);
                v32 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v31, &val);
                v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v32,
                        (const char (*)[14])" base_talent:");
                operator<<(v33, base_talent);
                common::milog::MiLogStream::~MiLogStream(&v51);
                v9 = 0.0;
              }
            }
          }
        }
        std::string::~string((void *)(v4 + 96));
      }
      else
      {
        v40 = std::any::type((const std::any *const)(v4 + 64));
        if ( std::type_info::operator!=(v40, (const std::type_info *)&`typeinfo for'void) )
        {
          common::milog::MiLogStream::create(
            &v51,
            &common::milog::MiLogDefault::default_log_obj_,
            0x13u,
            "./src/talent/talent_mixin.cpp",
            "evaluateParam",
            125);
          v41 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v51,
                  (const char (*)[42])"unknow dynamic argument type base_talent:");
          v42 = operator<<(v41, base_talent);
          v43 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])" type:");
          v44 = std::any::type((const std::any *const)(v4 + 64));
          val = (unsigned __int64)std::type_info::name(v44);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v43, (const char *const *)&val);
          common::milog::MiLogStream::~MiLogStream(&v51);
        }
        v9 = 0.0;
      }
    }
    std::any::~any((std::any *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_mixin.cpp",
      "evaluateParam",
      63);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v51,
           (const char (*)[40])"findBaseTalentConfig fail, base_talent:");
    operator<<(v8, base_talent);
    common::milog::MiLogStream::~MiLogStream(&v51);
    v9 = 0.0;
  }
  result = v9;
  if ( v52 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 135: range 000000001315DEC8-000000001315E29B
int32_t __cdecl TalentModifySkillCDMixin::enable(TalentModifySkillCDMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  SkillComp *SkillComp; // r14
  std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Skill *v9; // r14
  std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  __int64 v11; // rax
  int32_t result; // eax
  float ratio; // [rsp+4h] [rbp-BCh]
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 31 config_modifiy_skill_cd_ptr:136 64 16 13 skill_ptr:142";
  *(_QWORD *)(v1 + 16) = TalentModifySkillCDMixin::enable;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::dynamic_pointer_cast<data::ModifySkillCD,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v1 + 32));
  if ( std::operator==<data::ModifySkillCD>((const std::shared_ptr<data::ModifySkillCD> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_mixin.cpp",
      "enable",
      139);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v14,
      (const char (*)[36])"config_modifiy_skill_cd_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SkillComp = Avatar::getSkillComp(this->avatar_);
    v6 = std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    SkillComp::findSkill((const SkillComp *const)(v1 + 64), (__int64)SkillComp, v6->skill_id);
    if ( std::operator==<Skill>((const std::shared_ptr<Skill> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_mixin.cpp",
        "enable",
        145);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v14,
             (const char (*)[27])"findSkill fails, skill_id:");
      v8 = std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v8->skill_id);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v4 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v10 = std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v10->cd_ratio >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->cd_ratio >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ratio = v10->cd_ratio;
      v11 = (__int64)std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v11 = __asan_report_load4();
      }
      Skill::modifyCdTime(v9, *(float *)(v11 + 32), ratio);
      v4 = 0;
    }
    std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v1 + 64));
  }
  std::shared_ptr<data::ModifySkillCD>::~shared_ptr((std::shared_ptr<data::ModifySkillCD> *const)(v1 + 32));
  result = v4;
  if ( v15 == (char *)v1 )
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
  return result;
};

// Line 153: range 000000001315E29C-000000001315E683
int32_t __cdecl TalentModifySkillCDMixin::disable(TalentModifySkillCDMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  SkillComp *SkillComp; // r14
  std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Skill *v9; // r14
  std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  __int64 v11; // rax
  int32_t result; // eax
  float ratio; // [rsp+4h] [rbp-BCh]
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 31 config_modifiy_skill_cd_ptr:154 64 16 13 skill_ptr:160";
  *(_QWORD *)(v1 + 16) = TalentModifySkillCDMixin::disable;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::dynamic_pointer_cast<data::ModifySkillCD,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v1 + 32));
  if ( std::operator==<data::ModifySkillCD>((const std::shared_ptr<data::ModifySkillCD> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_mixin.cpp",
      "disable",
      157);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v14,
      (const char (*)[36])"config_modifiy_skill_cd_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SkillComp = Avatar::getSkillComp(this->avatar_);
    v6 = std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    SkillComp::findSkill((const SkillComp *const)(v1 + 64), (__int64)SkillComp, v6->skill_id);
    if ( std::operator==<Skill>((const std::shared_ptr<Skill> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_mixin.cpp",
        "disable",
        163);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v14,
             (const char (*)[27])"findSkill fails, skill_id:");
      v8 = std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v8->skill_id);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v4 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v10 = std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v10->cd_ratio >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->cd_ratio >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ratio = -v10->cd_ratio;
      v11 = (__int64)std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCD,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v11 = __asan_report_load4();
      }
      Skill::modifyCdTime(v9, -*(float *)(v11 + 32), ratio);
      v4 = 0;
    }
    std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v1 + 64));
  }
  std::shared_ptr<data::ModifySkillCD>::~shared_ptr((std::shared_ptr<data::ModifySkillCD> *const)(v1 + 32));
  result = v4;
  if ( v15 == (char *)v1 )
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
  return result;
};

// Line 173: range 000000001315E684-000000001315EA57
int32_t __cdecl TalentModifySkillCostMixin::enable(TalentModifySkillCostMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  SkillComp *SkillComp; // r14
  std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Skill *v9; // r14
  std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  __int64 v11; // rax
  int32_t result; // eax
  float ratio; // [rsp+4h] [rbp-BCh]
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 33 config_modifiy_skill_cost_ptr:174 64 16 13 skill_ptr:180";
  *(_QWORD *)(v1 + 16) = TalentModifySkillCostMixin::enable;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::dynamic_pointer_cast<data::ModifySkillCost,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v1 + 32));
  if ( std::operator==<data::ModifySkillCost>((const std::shared_ptr<data::ModifySkillCost> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_mixin.cpp",
      "enable",
      177);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v14,
      (const char (*)[38])"config_modifiy_skill_cost_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SkillComp = Avatar::getSkillComp(this->avatar_);
    v6 = std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    SkillComp::findSkill((const SkillComp *const)(v1 + 64), (__int64)SkillComp, v6->skill_id);
    if ( std::operator==<Skill>((const std::shared_ptr<Skill> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_mixin.cpp",
        "enable",
        183);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v14,
             (const char (*)[27])"findSkill fails, skill_id:");
      v8 = std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v8->skill_id);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v4 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v10 = std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v10->cost_ratio >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->cost_ratio >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ratio = v10->cost_ratio;
      v11 = (__int64)std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v11 = __asan_report_load4();
      }
      Skill::modifyElemCost(v9, *(float *)(v11 + 32), ratio);
      v4 = 0;
    }
    std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v1 + 64));
  }
  std::shared_ptr<data::ModifySkillCost>::~shared_ptr((std::shared_ptr<data::ModifySkillCost> *const)(v1 + 32));
  result = v4;
  if ( v15 == (char *)v1 )
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
  return result;
};

// Line 191: range 000000001315EA58-000000001315EE3F
int32_t __cdecl TalentModifySkillCostMixin::disable(TalentModifySkillCostMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  SkillComp *SkillComp; // r14
  std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Skill *v9; // r14
  std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  __int64 v11; // rax
  int32_t result; // eax
  float ratio; // [rsp+4h] [rbp-BCh]
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 33 config_modifiy_skill_cost_ptr:192 64 16 13 skill_ptr:198";
  *(_QWORD *)(v1 + 16) = TalentModifySkillCostMixin::disable;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::dynamic_pointer_cast<data::ModifySkillCost,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v1 + 32));
  if ( std::operator==<data::ModifySkillCost>((const std::shared_ptr<data::ModifySkillCost> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_mixin.cpp",
      "disable",
      195);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v14,
      (const char (*)[38])"config_modifiy_skill_cost_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SkillComp = Avatar::getSkillComp(this->avatar_);
    v6 = std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    SkillComp::findSkill((const SkillComp *const)(v1 + 64), (__int64)SkillComp, v6->skill_id);
    if ( std::operator==<Skill>((const std::shared_ptr<Skill> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_mixin.cpp",
        "disable",
        201);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v14,
             (const char (*)[27])"findSkill fails, skill_id:");
      v8 = std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v8->skill_id);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v4 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v10 = std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v10->cost_ratio >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->cost_ratio >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ratio = -v10->cost_ratio;
      v11 = (__int64)std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillCost,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v11 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v11 = __asan_report_load4();
      }
      Skill::modifyElemCost(v9, -*(float *)(v11 + 32), ratio);
      v4 = 0;
    }
    std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v1 + 64));
  }
  std::shared_ptr<data::ModifySkillCost>::~shared_ptr((std::shared_ptr<data::ModifySkillCost> *const)(v1 + 32));
  result = v4;
  if ( v15 == (char *)v1 )
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
  return result;
};

// Line 211: range 000000001315EE40-000000001315F1B4
int32_t __cdecl TalentModifySkillPointMixin::enable(TalentModifySkillPointMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  SkillComp *SkillComp; // r14
  std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Skill *v9; // r14
  __int64 v10; // rax
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 34 config_modifiy_skill_point_ptr:212 64 16 13 skill_ptr:218";
  *(_QWORD *)(v1 + 16) = TalentModifySkillPointMixin::enable;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::dynamic_pointer_cast<data::ModifySkillPoint,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v1 + 32));
  if ( std::operator==<data::ModifySkillPoint>((const std::shared_ptr<data::ModifySkillPoint> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_mixin.cpp",
      "enable",
      215);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v12,
      (const char (*)[39])"config_modifiy_skill_point_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SkillComp = Avatar::getSkillComp(this->avatar_);
    v6 = std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    SkillComp::findSkill((const SkillComp *const)(v1 + 64), (__int64)SkillComp, v6->skill_id);
    if ( std::operator==<Skill>((const std::shared_ptr<Skill> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_mixin.cpp",
        "enable",
        221);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v12,
             (const char (*)[27])"findSkill fails, skill_id:");
      v8 = std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v8->skill_id);
      common::milog::MiLogStream::~MiLogStream(&v12);
      v4 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v10 = (__int64)std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = __asan_report_load4();
      }
      Skill::modifyMaxChargeCount(v9, (float)*(int *)(v10 + 32));
      v4 = 0;
    }
    std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v1 + 64));
  }
  std::shared_ptr<data::ModifySkillPoint>::~shared_ptr((std::shared_ptr<data::ModifySkillPoint> *const)(v1 + 32));
  result = v4;
  if ( v13 == (char *)v1 )
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
  return result;
};

// Line 229: range 000000001315F1B6-000000001315F52C
int32_t __cdecl TalentModifySkillPointMixin::disable(TalentModifySkillPointMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  SkillComp *SkillComp; // r14
  std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Skill *v9; // r14
  __int64 v10; // rax
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 34 config_modifiy_skill_point_ptr:230 64 16 13 skill_ptr:236";
  *(_QWORD *)(v1 + 16) = TalentModifySkillPointMixin::disable;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::dynamic_pointer_cast<data::ModifySkillPoint,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v1 + 32));
  if ( std::operator==<data::ModifySkillPoint>((const std::shared_ptr<data::ModifySkillPoint> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_mixin.cpp",
      "disable",
      233);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v12,
      (const char (*)[39])"config_modifiy_skill_point_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SkillComp = Avatar::getSkillComp(this->avatar_);
    v6 = std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->skill_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    SkillComp::findSkill((const SkillComp *const)(v1 + 64), (__int64)SkillComp, v6->skill_id);
    if ( std::operator==<Skill>((const std::shared_ptr<Skill> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_mixin.cpp",
        "disable",
        239);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v12,
             (const char (*)[27])"findSkill fails, skill_id:");
      v8 = std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v8->skill_id);
      common::milog::MiLogStream::~MiLogStream(&v12);
      v4 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v10 = (__int64)std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ModifySkillPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = __asan_report_load4();
      }
      Skill::modifyMaxChargeCount(v9, (float)-*(_DWORD *)(v10 + 32));
      v4 = 0;
    }
    std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v1 + 64));
  }
  std::shared_ptr<data::ModifySkillPoint>::~shared_ptr((std::shared_ptr<data::ModifySkillPoint> *const)(v1 + 32));
  result = v4;
  if ( v13 == (char *)v1 )
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
  return result;
};

// Line 249: range 000000001315F52E-000000001315FA59
int32_t __cdecl TalentAddExtraLevelMixin::enable(TalentAddExtraLevelMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  TalentComp *TalentComp; // r15
  __int64 v6; // rax
  int v7; // r14d
  std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  uint32_t extra_level; // r15d
  __int64 v18; // rax
  uint32_t v19; // r14d
  std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // [rsp+10h] [rbp-D0h]
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 config_ptr:250 64 16 14 talent_ptr:256";
  *(_QWORD *)(v1 + 16) = TalentAddExtraLevelMixin::enable;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::dynamic_pointer_cast<data::AddTalentExtraLevel,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v1 + 32));
  if ( std::operator==<data::AddTalentExtraLevel>((const std::shared_ptr<data::AddTalentExtraLevel> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_mixin.cpp",
      "enable",
      253);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v24,
      (const char (*)[42])"config_talent_add_extra_level_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    TalentComp = Avatar::getTalentComp(this->avatar_);
    v6 = (__int64)std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v6 + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = __asan_report_load4();
    }
    v7 = *(_DWORD *)(v6 + 32);
    v8 = std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->talent_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->talent_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    TalentComp::findTalent((const TalentComp *const)(v1 + 64), (__int64)TalentComp, v8->talent_type, v7);
    if ( std::operator==<BaseTalent>((const std::shared_ptr<BaseTalent> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_mixin.cpp",
        "enable",
        259);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v24,
             (const char (*)[38])"target talent not found, talent_type:");
      v10 = std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v10->talent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->talent_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      val = v10->talent_type;
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" talent_index:");
      v13 = std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v13->talent_index);
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v15, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v4 = 0;
    }
    else
    {
      v22 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v16 = std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v16->extra_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v16 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->extra_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      extra_level = v16->extra_level;
      v18 = (__int64)std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v18 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v18 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v18 = __asan_report_load4();
      }
      v19 = *(_DWORD *)(v18 + 32);
      v20 = std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v20->talent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->talent_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v4 = BaseTalent::addExtraLevel(v22, v20->talent_type, v19, extra_level);
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v1 + 64));
  }
  std::shared_ptr<data::AddTalentExtraLevel>::~shared_ptr((std::shared_ptr<data::AddTalentExtraLevel> *const)(v1 + 32));
  result = v4;
  if ( v25 == (char *)v1 )
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
  return result;
};

// Line 267: range 000000001315FA5A-000000001315FF85
int32_t __cdecl TalentAddExtraLevelMixin::disable(TalentAddExtraLevelMixin *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  TalentComp *TalentComp; // r15
  __int64 v6; // rax
  int v7; // r14d
  std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  uint32_t extra_level; // r15d
  __int64 v18; // rax
  uint32_t v19; // r14d
  std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // [rsp+10h] [rbp-D0h]
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 config_ptr:268 64 16 14 talent_ptr:274";
  *(_QWORD *)(v1 + 16) = TalentAddExtraLevelMixin::disable;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::dynamic_pointer_cast<data::AddTalentExtraLevel,data::ConfigTalentMixin>((const std::shared_ptr<data::ConfigTalentMixin> *)(v1 + 32));
  if ( std::operator==<data::AddTalentExtraLevel>((const std::shared_ptr<data::AddTalentExtraLevel> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/talent/talent_mixin.cpp",
      "disable",
      271);
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      &v24,
      (const char (*)[42])"config_talent_add_extra_level_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v24);
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    TalentComp = Avatar::getTalentComp(this->avatar_);
    v6 = (__int64)std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(v6 + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = __asan_report_load4();
    }
    v7 = *(_DWORD *)(v6 + 32);
    v8 = std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->talent_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->talent_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    TalentComp::findTalent((const TalentComp *const)(v1 + 64), (__int64)TalentComp, v8->talent_type, v7);
    if ( std::operator==<BaseTalent>((const std::shared_ptr<BaseTalent> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/talent/talent_mixin.cpp",
        "disable",
        277);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v24,
             (const char (*)[38])"target talent not found, talent_type:");
      v10 = std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v10->talent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->talent_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      val = v10->talent_type;
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" talent_index:");
      v13 = std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v13->talent_index);
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v15, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v4 = 0;
    }
    else
    {
      v22 = std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseTalent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v16 = std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v16->extra_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v16 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->extra_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      extra_level = v16->extra_level;
      v18 = (__int64)std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)(v18 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v18 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v18 = __asan_report_load4();
      }
      v19 = *(_DWORD *)(v18 + 32);
      v20 = std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::AddTalentExtraLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v20->talent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->talent_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v4 = BaseTalent::subExtraLevel(v22, v20->talent_type, v19, extra_level);
    }
    std::shared_ptr<BaseTalent>::~shared_ptr((std::shared_ptr<BaseTalent> *const)(v1 + 64));
  }
  std::shared_ptr<data::AddTalentExtraLevel>::~shared_ptr((std::shared_ptr<data::AddTalentExtraLevel> *const)(v1 + 32));
  result = v4;
  if ( v25 == (char *)v1 )
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
  return result;
};
