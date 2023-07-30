// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/AvatarTalentExcelConfig.h

// Line 21: range 0000000012ED67EC-0000000012ED6883
void __cdecl LifeEffectCombineReturnMaterial::LifeEffectCombineReturnMaterial(
        LifeEffectCombineReturnMaterial *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->probability = 0;
  std::vector<unsigned int>::vector(&this->combine_type_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->return_ratio, v1);
  }
  this->return_ratio = 0.0;
};

// Line 21: range 0000000013416716-0000000013416826
void __cdecl LifeEffectCombineReturnMaterial::LifeEffectCombineReturnMaterial(
        LifeEffectCombineReturnMaterial *const this,
        LifeEffectCombineReturnMaterial *a2)
{
  uint32_t probability; // ecx
  char v3; // al
  float return_ratio; // xmm0_4
  LifeEffectCombineReturnMaterial *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  probability = a2->probability;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->probability = probability;
  std::vector<unsigned int>::vector(&this->combine_type_vec, &v5->combine_type_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v5->return_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->return_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v5->return_ratio);
  }
  return_ratio = v5->return_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->return_ratio, &v5->combine_type_vec);
  }
  this->return_ratio = return_ratio;
};

// Line 21: range 0000000012ED6884-0000000012ED68A2
void __cdecl LifeEffectCombineReturnMaterial::~LifeEffectCombineReturnMaterial(
        LifeEffectCombineReturnMaterial *const this)
{
  std::vector<unsigned int>::~vector(&this->combine_type_vec);
};

// Line 29: range 0000000012ED68A4-0000000012ED693B
void __cdecl LifeEffectCombineMultiplyOutput::LifeEffectCombineMultiplyOutput(
        LifeEffectCombineMultiplyOutput *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->probability = 0;
  std::vector<unsigned int>::vector(&this->combine_type_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->multiply_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->multiply_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->multiply_ratio, v1);
  }
  this->multiply_ratio = 0.0;
};

// Line 29: range 0000000013416944-0000000013416A54
void __cdecl LifeEffectCombineMultiplyOutput::LifeEffectCombineMultiplyOutput(
        LifeEffectCombineMultiplyOutput *const this,
        LifeEffectCombineMultiplyOutput *a2)
{
  uint32_t probability; // ecx
  char v3; // al
  float multiply_ratio; // xmm0_4
  LifeEffectCombineMultiplyOutput *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  probability = a2->probability;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->probability = probability;
  std::vector<unsigned int>::vector(&this->combine_type_vec, &v5->combine_type_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v5->multiply_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->multiply_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v5->multiply_ratio);
  }
  multiply_ratio = v5->multiply_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->multiply_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->multiply_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->multiply_ratio, &v5->combine_type_vec);
  }
  this->multiply_ratio = multiply_ratio;
};

// Line 29: range 0000000012ED693C-0000000012ED695A
void __cdecl LifeEffectCombineMultiplyOutput::~LifeEffectCombineMultiplyOutput(
        LifeEffectCombineMultiplyOutput *const this)
{
  std::vector<unsigned int>::~vector(&this->combine_type_vec);
};

// Line 37: range 0000000012ED695C-0000000012ED69B6
void __cdecl LifeEffectCombineAddExtraProb::LifeEffectCombineAddExtraProb(LifeEffectCombineAddExtraProb *const this)
{
  __int64 v1; // rsi

  std::vector<unsigned int>::vector(&this->combine_type_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->add_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->add_prob, v1);
  }
  this->add_prob = 0.0;
};

// Line 37: range 0000000013416B7A-0000000013416C17
void __cdecl LifeEffectCombineAddExtraProb::LifeEffectCombineAddExtraProb(
        LifeEffectCombineAddExtraProb *const this,
        LifeEffectCombineAddExtraProb *a2)
{
  float add_prob; // xmm0_4

  std::vector<unsigned int>::vector(&this->combine_type_vec, &a2->combine_type_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->add_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->add_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->add_prob);
  }
  add_prob = a2->add_prob;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->add_prob, a2);
  }
  this->add_prob = add_prob;
};

// Line 37: range 0000000012ED69B8-0000000012ED69D2
void __cdecl LifeEffectCombineAddExtraProb::~LifeEffectCombineAddExtraProb(LifeEffectCombineAddExtraProb *const this)
{
  std::vector<unsigned int>::~vector(&this->combine_type_vec);
};

// Line 44: range 0000000012ED69D4-0000000012ED6A2B
void __cdecl LifeEffectCombineReturnSpecialMaterial::LifeEffectCombineReturnSpecialMaterial(
        LifeEffectCombineReturnSpecialMaterial *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->probability = 0;
  std::vector<unsigned int>::vector(&this->combine_type_vec);
};

// Line 44: range 0000000013416D70-0000000013416E08
void __cdecl LifeEffectCombineReturnSpecialMaterial::LifeEffectCombineReturnSpecialMaterial(
        LifeEffectCombineReturnSpecialMaterial *const this,
        LifeEffectCombineReturnSpecialMaterial *a2)
{
  uint32_t probability; // ecx
  char v3; // al
  LifeEffectCombineReturnSpecialMaterial *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  probability = a2->probability;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->probability = probability;
  std::vector<unsigned int>::vector(&this->combine_type_vec, &v4->combine_type_vec);
};

// Line 44: range 0000000012ED6A2C-0000000012ED6A4A
void __cdecl LifeEffectCombineReturnSpecialMaterial::~LifeEffectCombineReturnSpecialMaterial(
        LifeEffectCombineReturnSpecialMaterial *const this)
{
  std::vector<unsigned int>::~vector(&this->combine_type_vec);
};

// Line 54: range 0000000012ED6B2C-0000000012ED6BD1
void __cdecl LifeEffectCookExtraProficiency::LifeEffectCookExtraProficiency(LifeEffectCookExtraProficiency *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->extra_proficiency = 0;
  std::set<data::CookFoodType>::set(&this->cook_food_type_set);
  std::set<data::CookMethodType>::set(&this->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_target_type, v1);
  }
  this->effect_target_type = EFFECT_TARGET_NONE;
};

// Line 54: range 00000000134172FA-0000000013417422
void __cdecl LifeEffectCookExtraProficiency::LifeEffectCookExtraProficiency(
        LifeEffectCookExtraProficiency *const this,
        LifeEffectCookExtraProficiency *a2)
{
  uint32_t extra_proficiency; // ecx
  char v3; // al
  std::set<data::CookMethodType> *p_cook_method_type_set; // rsi
  data::EffectTargetType effect_target_type; // ecx
  char v6; // al
  LifeEffectCookExtraProficiency *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  extra_proficiency = a2->extra_proficiency;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->extra_proficiency = extra_proficiency;
  std::set<data::CookFoodType>::set(&this->cook_food_type_set, &v7->cook_food_type_set);
  p_cook_method_type_set = &v7->cook_method_type_set;
  std::set<data::CookMethodType>::set(&this->cook_method_type_set, &v7->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&v7->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v7->effect_target_type);
  }
  effect_target_type = v7->effect_target_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_cook_method_type_set) = v6 != 0;
    __asan_report_store4(&this->effect_target_type, p_cook_method_type_set);
  }
  this->effect_target_type = effect_target_type;
};

// Line 54: range 0000000012ED6BD2-0000000012ED6C00
void __cdecl LifeEffectCookExtraProficiency::~LifeEffectCookExtraProficiency(
        LifeEffectCookExtraProficiency *const this)
{
  std::set<data::CookMethodType>::~set(&this->cook_method_type_set);
  std::set<data::CookFoodType>::~set(&this->cook_food_type_set);
};

// Line 63: range 0000000012ED6C02-0000000012ED6CA9
void __cdecl LifeEffectCookWidenJudgeArea::LifeEffectCookWidenJudgeArea(LifeEffectCookWidenJudgeArea *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->widen_ratio = 0.0;
  std::set<data::CookFoodType>::set(&this->cook_food_type_set);
  std::set<data::CookMethodType>::set(&this->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_target_type, v1);
  }
  this->effect_target_type = EFFECT_TARGET_NONE;
};

// Line 63: range 0000000013417544-000000001341766F
void __cdecl LifeEffectCookWidenJudgeArea::LifeEffectCookWidenJudgeArea(
        LifeEffectCookWidenJudgeArea *const this,
        LifeEffectCookWidenJudgeArea *a2)
{
  float widen_ratio; // xmm0_4
  std::set<data::CookMethodType> *p_cook_method_type_set; // rsi
  data::EffectTargetType effect_target_type; // ecx
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  widen_ratio = a2->widen_ratio;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->widen_ratio = widen_ratio;
  std::set<data::CookFoodType>::set(&this->cook_food_type_set, &a2->cook_food_type_set);
  p_cook_method_type_set = &a2->cook_method_type_set;
  std::set<data::CookMethodType>::set(&this->cook_method_type_set, &a2->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_target_type);
  }
  effect_target_type = a2->effect_target_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_cook_method_type_set) = v5 != 0;
    __asan_report_store4(&this->effect_target_type, p_cook_method_type_set);
  }
  this->effect_target_type = effect_target_type;
};

// Line 63: range 0000000012ED6CAA-0000000012ED6CD8
void __cdecl LifeEffectCookWidenJudgeArea::~LifeEffectCookWidenJudgeArea(LifeEffectCookWidenJudgeArea *const this)
{
  std::set<data::CookMethodType>::~set(&this->cook_method_type_set);
  std::set<data::CookFoodType>::~set(&this->cook_food_type_set);
};

// Line 72: range 0000000012ED6CDA-0000000012ED6D81
void __cdecl LifeEffectCookAddBonusProb::LifeEffectCookAddBonusProb(LifeEffectCookAddBonusProb *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->add_bonus_prob = 0.0;
  std::set<data::CookFoodType>::set(&this->cook_food_type_set);
  std::set<data::CookMethodType>::set(&this->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_target_type, v1);
  }
  this->effect_target_type = EFFECT_TARGET_NONE;
};

// Line 72: range 0000000013417798-00000000134178C3
void __cdecl LifeEffectCookAddBonusProb::LifeEffectCookAddBonusProb(
        LifeEffectCookAddBonusProb *const this,
        LifeEffectCookAddBonusProb *a2)
{
  float add_bonus_prob; // xmm0_4
  std::set<data::CookMethodType> *p_cook_method_type_set; // rsi
  data::EffectTargetType effect_target_type; // ecx
  char v5; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  add_bonus_prob = a2->add_bonus_prob;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->add_bonus_prob = add_bonus_prob;
  std::set<data::CookFoodType>::set(&this->cook_food_type_set, &a2->cook_food_type_set);
  p_cook_method_type_set = &a2->cook_method_type_set;
  std::set<data::CookMethodType>::set(&this->cook_method_type_set, &a2->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_target_type);
  }
  effect_target_type = a2->effect_target_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_cook_method_type_set) = v5 != 0;
    __asan_report_store4(&this->effect_target_type, p_cook_method_type_set);
  }
  this->effect_target_type = effect_target_type;
};

// Line 72: range 0000000012ED6D82-0000000012ED6DB0
void __cdecl LifeEffectCookAddBonusProb::~LifeEffectCookAddBonusProb(LifeEffectCookAddBonusProb *const this)
{
  std::set<data::CookMethodType>::~set(&this->cook_method_type_set);
  std::set<data::CookFoodType>::~set(&this->cook_food_type_set);
};

// Line 81: range 0000000012ED6DB2-0000000012ED6EA1
void __cdecl LifeEffectCookPerfectMultiOutput::LifeEffectCookPerfectMultiOutput(
        LifeEffectCookPerfectMultiOutput *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->probability = 0.0;
  std::set<data::CookFoodType>::set(&this->cook_food_type_set);
  std::set<data::CookMethodType>::set(&this->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_target_type, v1);
  }
  this->effect_target_type = EFFECT_TARGET_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extra_ratio, (((_BYTE)this + 108) & 7u) + 3);
  }
  this->extra_ratio = 0.0;
};

// Line 81: range 0000000013417A20-0000000013417BD3
void __cdecl LifeEffectCookPerfectMultiOutput::LifeEffectCookPerfectMultiOutput(
        LifeEffectCookPerfectMultiOutput *const this,
        LifeEffectCookPerfectMultiOutput *a2)
{
  float probability; // xmm0_4
  std::set<data::CookMethodType> *p_cook_method_type_set; // rsi
  data::EffectTargetType effect_target_type; // ecx
  char v5; // al
  float extra_ratio; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  probability = a2->probability;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->probability = probability;
  std::set<data::CookFoodType>::set(&this->cook_food_type_set, &a2->cook_food_type_set);
  p_cook_method_type_set = &a2->cook_method_type_set;
  std::set<data::CookMethodType>::set(&this->cook_method_type_set, &a2->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_target_type);
  }
  effect_target_type = a2->effect_target_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_cook_method_type_set) = v5 != 0;
    __asan_report_store4(&this->effect_target_type, p_cook_method_type_set);
  }
  this->effect_target_type = effect_target_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->extra_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->extra_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->extra_ratio);
  }
  extra_ratio = a2->extra_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extra_ratio, (((_BYTE)this + 108) & 7u) + 3);
  }
  this->extra_ratio = extra_ratio;
};

// Line 81: range 0000000012ED6EA2-0000000012ED6ED0
void __cdecl LifeEffectCookPerfectMultiOutput::~LifeEffectCookPerfectMultiOutput(
        LifeEffectCookPerfectMultiOutput *const this)
{
  std::set<data::CookMethodType>::~set(&this->cook_method_type_set);
  std::set<data::CookFoodType>::~set(&this->cook_food_type_set);
};

// Line 91: range 0000000012ED6ED2-0000000012ED7012
void __cdecl LifeEffectCookProbMultiOutput::LifeEffectCookProbMultiOutput(LifeEffectCookProbMultiOutput *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->probability = 0.0;
  std::set<data::CookFoodType>::set(&this->cook_food_type_set);
  std::set<data::CookMethodType>::set(&this->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_target_type, v1);
  }
  this->effect_target_type = EFFECT_TARGET_NONE;
  v2 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_cook_output_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_cook_output_item_count >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extra_cook_output_item_count, v2);
  }
  this->extra_cook_output_item_count = 0;
  std::set<unsigned int>::set(&this->required_qte_quality_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_cook_output_item_quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->extra_cook_output_item_quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->extra_cook_output_item_quality, v2);
  }
  this->extra_cook_output_item_quality = 0;
};

// Line 91: range 0000000013417D64-0000000013417FAE
void __cdecl LifeEffectCookProbMultiOutput::LifeEffectCookProbMultiOutput(
        LifeEffectCookProbMultiOutput *const this,
        LifeEffectCookProbMultiOutput *a2)
{
  float probability; // xmm0_4
  std::set<data::CookMethodType> *p_cook_method_type_set; // rsi
  data::EffectTargetType effect_target_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  uint32_t extra_cook_output_item_count; // ecx
  char v8; // dl
  std::set<unsigned int> *p_required_qte_quality_set; // rsi
  uint32_t extra_cook_output_item_quality; // ecx
  char v11; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  probability = a2->probability;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->probability = probability;
  std::set<data::CookFoodType>::set(&this->cook_food_type_set, &a2->cook_food_type_set);
  p_cook_method_type_set = &a2->cook_method_type_set;
  std::set<data::CookMethodType>::set(&this->cook_method_type_set, &a2->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_target_type);
  }
  effect_target_type = a2->effect_target_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_cook_method_type_set) = v5 != 0;
    __asan_report_store4(&this->effect_target_type, p_cook_method_type_set);
  }
  this->effect_target_type = effect_target_type;
  v6 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->extra_cook_output_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->extra_cook_output_item_count >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->extra_cook_output_item_count);
  }
  extra_cook_output_item_count = a2->extra_cook_output_item_count;
  v8 = *(_BYTE *)(((unsigned __int64)&this->extra_cook_output_item_count >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->extra_cook_output_item_count, v6);
  }
  this->extra_cook_output_item_count = extra_cook_output_item_count;
  p_required_qte_quality_set = &a2->required_qte_quality_set;
  std::set<unsigned int>::set(&this->required_qte_quality_set, &a2->required_qte_quality_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->extra_cook_output_item_quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->extra_cook_output_item_quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->extra_cook_output_item_quality);
  }
  extra_cook_output_item_quality = a2->extra_cook_output_item_quality;
  v11 = *(_BYTE *)(((unsigned __int64)&this->extra_cook_output_item_quality >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_required_qte_quality_set) = v11 != 0;
    __asan_report_store4(&this->extra_cook_output_item_quality, p_required_qte_quality_set);
  }
  this->extra_cook_output_item_quality = extra_cook_output_item_quality;
};

// Line 91: range 0000000012ED7014-0000000012ED7052
void __cdecl LifeEffectCookProbMultiOutput::~LifeEffectCookProbMultiOutput(LifeEffectCookProbMultiOutput *const this)
{
  std::set<unsigned int>::~set(&this->required_qte_quality_set);
  std::set<data::CookMethodType>::~set(&this->cook_method_type_set);
  std::set<data::CookFoodType>::~set(&this->cook_food_type_set);
};

// Line 103: range 0000000012ED7054-0000000012ED70BC
void __cdecl LifeEffectCookCanNotCook::LifeEffectCookCanNotCook(LifeEffectCookCanNotCook *const this)
{
  __int64 v1; // rsi

  std::set<data::CookFoodType>::set(&this->cook_food_type_set);
  std::set<data::CookMethodType>::set(&this->cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->effect_target_type, v1);
  }
  this->effect_target_type = EFFECT_TARGET_NONE;
};

// Line 103: range 0000000013418174-0000000013418229
void __cdecl LifeEffectCookCanNotCook::LifeEffectCookCanNotCook(
        LifeEffectCookCanNotCook *const this,
        LifeEffectCookCanNotCook *a2)
{
  std::set<data::CookMethodType> *p_cook_method_type_set; // rsi
  data::EffectTargetType effect_target_type; // ecx
  char v4; // al

  std::set<data::CookFoodType>::set(&this->cook_food_type_set, &a2->cook_food_type_set);
  p_cook_method_type_set = &a2->cook_method_type_set;
  std::set<data::CookMethodType>::set(&this->cook_method_type_set, p_cook_method_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->effect_target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->effect_target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->effect_target_type);
  }
  effect_target_type = a2->effect_target_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->effect_target_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_cook_method_type_set) = v4 != 0;
    __asan_report_store4(&this->effect_target_type, p_cook_method_type_set);
  }
  this->effect_target_type = effect_target_type;
};

// Line 103: range 0000000012ED70BE-0000000012ED70E8
void __cdecl LifeEffectCookCanNotCook::~LifeEffectCookCanNotCook(LifeEffectCookCanNotCook *const this)
{
  std::set<data::CookMethodType>::~set(&this->cook_method_type_set);
  std::set<data::CookFoodType>::~set(&this->cook_food_type_set);
};

// Line 114: range 0000000012ED70EA-0000000012ED7144
void __cdecl LifeEffectForgeReduceTime::LifeEffectForgeReduceTime(LifeEffectForgeReduceTime *const this)
{
  __int64 v1; // rsi

  std::set<unsigned int>::set(&this->forge_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reduce_ratio, v1);
  }
  this->reduce_ratio = 0.0;
};

// Line 114: range 0000000013418422-00000000134184BF
void __cdecl LifeEffectForgeReduceTime::LifeEffectForgeReduceTime(
        LifeEffectForgeReduceTime *const this,
        LifeEffectForgeReduceTime *a2)
{
  float reduce_ratio; // xmm0_4

  std::set<unsigned int>::set(&this->forge_type_set, &a2->forge_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reduce_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reduce_ratio);
  }
  reduce_ratio = a2->reduce_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reduce_ratio, a2);
  }
  this->reduce_ratio = reduce_ratio;
};

// Line 114: range 0000000012ED7146-0000000012ED7160
void __cdecl LifeEffectForgeReduceTime::~LifeEffectForgeReduceTime(LifeEffectForgeReduceTime *const this)
{
  std::set<unsigned int>::~set(&this->forge_type_set);
};

// Line 121: range 0000000012ED7162-0000000012ED71BC
void __cdecl LifeEffectForgeAddExtraProb::LifeEffectForgeAddExtraProb(LifeEffectForgeAddExtraProb *const this)
{
  __int64 v1; // rsi

  std::set<unsigned int>::set(&this->forge_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->add_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->add_prob, v1);
  }
  this->add_prob = 0.0;
};

// Line 121: range 00000000134185DC-0000000013418679
void __cdecl LifeEffectForgeAddExtraProb::LifeEffectForgeAddExtraProb(
        LifeEffectForgeAddExtraProb *const this,
        LifeEffectForgeAddExtraProb *a2)
{
  float add_prob; // xmm0_4

  std::set<unsigned int>::set(&this->forge_type_set, &a2->forge_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->add_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->add_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->add_prob);
  }
  add_prob = a2->add_prob;
  if ( *(_BYTE *)(((unsigned __int64)&this->add_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->add_prob, a2);
  }
  this->add_prob = add_prob;
};

// Line 121: range 0000000012ED71BE-0000000012ED71D8
void __cdecl LifeEffectForgeAddExtraProb::~LifeEffectForgeAddExtraProb(LifeEffectForgeAddExtraProb *const this)
{
  std::set<unsigned int>::~set(&this->forge_type_set);
};

// Line 128: range 0000000012ED71DA-0000000012ED7273
void __cdecl LifeEffectForgeReturnMaterial::LifeEffectForgeReturnMaterial(LifeEffectForgeReturnMaterial *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->probability = 0.0;
  std::set<unsigned int>::set(&this->forge_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->return_ratio, v1);
  }
  this->return_ratio = 0.0;
};

// Line 128: range 000000001341879E-00000000134188B1
void __cdecl LifeEffectForgeReturnMaterial::LifeEffectForgeReturnMaterial(
        LifeEffectForgeReturnMaterial *const this,
        LifeEffectForgeReturnMaterial *a2)
{
  float probability; // xmm0_4
  float return_ratio; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  probability = a2->probability;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->probability = probability;
  std::set<unsigned int>::set(&this->forge_type_set, &a2->forge_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->return_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->return_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->return_ratio);
  }
  return_ratio = a2->return_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->return_ratio, &a2->forge_type_set);
  }
  this->return_ratio = return_ratio;
};

// Line 128: range 0000000012ED7274-0000000012ED7292
void __cdecl LifeEffectForgeReturnMaterial::~LifeEffectForgeReturnMaterial(LifeEffectForgeReturnMaterial *const this)
{
  std::set<unsigned int>::~set(&this->forge_type_set);
};

// Line 158: range 0000000012ED7294-0000000012ED7373
void __cdecl LifeEffectFurnitureMakeReturnMaterial::LifeEffectFurnitureMakeReturnMaterial(
        LifeEffectFurnitureMakeReturnMaterial *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->proud_skill_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->probability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->probability >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->probability, v2);
  }
  this->probability = 0.0;
  std::set<unsigned int>::set(&this->furniture_category_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->return_ratio, v2);
  }
  this->return_ratio = 0.0;
};

// Line 158: range 0000000013418DD6-0000000013418F6E
void __cdecl LifeEffectFurnitureMakeReturnMaterial::LifeEffectFurnitureMakeReturnMaterial(
        LifeEffectFurnitureMakeReturnMaterial *const this,
        LifeEffectFurnitureMakeReturnMaterial *a2)
{
  uint32_t proud_skill_id; // ecx
  char v3; // al
  float probability; // xmm0_4
  float return_ratio; // xmm0_4
  LifeEffectFurnitureMakeReturnMaterial *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  proud_skill_id = a2->proud_skill_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->proud_skill_id = proud_skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&v6->probability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->probability >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v6->probability);
  }
  probability = v6->probability;
  if ( *(_BYTE *)(((unsigned __int64)&this->probability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->probability >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->probability, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->probability = probability;
  std::set<unsigned int>::set(&this->furniture_category_set, &v6->furniture_category_set);
  if ( *(_BYTE *)(((unsigned __int64)&v6->return_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v6->return_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v6->return_ratio);
  }
  return_ratio = v6->return_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->return_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->return_ratio, &v6->furniture_category_set);
  }
  this->return_ratio = return_ratio;
};

// Line 158: range 0000000012ED7374-0000000012ED7392
void __cdecl LifeEffectFurnitureMakeReturnMaterial::~LifeEffectFurnitureMakeReturnMaterial(
        LifeEffectFurnitureMakeReturnMaterial *const this)
{
  std::set<unsigned int>::~set(&this->furniture_category_set);
};

// Line 170: range 0000000012ED7404-0000000012ED745E
void __cdecl LifeEffectWeaponPromoteReduceScoin::LifeEffectWeaponPromoteReduceScoin(
        LifeEffectWeaponPromoteReduceScoin *const this)
{
  __int64 v1; // rsi

  std::set<data::WeaponType>::set(&this->weapon_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reduce_ratio, v1);
  }
  this->reduce_ratio = 0.0;
};

// Line 170: range 00000000133D4428-00000000133D44C5
void __cdecl LifeEffectWeaponPromoteReduceScoin::LifeEffectWeaponPromoteReduceScoin(
        LifeEffectWeaponPromoteReduceScoin *const this,
        LifeEffectWeaponPromoteReduceScoin *a2)
{
  float reduce_ratio; // xmm0_4

  std::set<data::WeaponType>::set(&this->weapon_type_set, &a2->weapon_type_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reduce_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reduce_ratio);
  }
  reduce_ratio = a2->reduce_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reduce_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reduce_ratio, a2);
  }
  this->reduce_ratio = reduce_ratio;
};

// Line 170: range 0000000012ED7460-0000000012ED747A
void __cdecl LifeEffectWeaponPromoteReduceScoin::~LifeEffectWeaponPromoteReduceScoin(
        LifeEffectWeaponPromoteReduceScoin *const this)
{
  std::set<data::WeaponType>::~set(&this->weapon_type_set);
};

// Line 177: range 0000000012ED747C-0000000012ED751C
void __cdecl LifeEffectFishingExtraOutput::LifeEffectFishingExtraOutput(LifeEffectFishingExtraOutput *const this)
{
  __int64 v1; // rsi

  std::set<unsigned int>::set(&this->city_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->probability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->probability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->probability, v1);
  }
  this->probability = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_item_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extra_item_count, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->extra_item_count = 0;
};

// Line 177: range 00000000133D4746-00000000133D4868
void __cdecl LifeEffectFishingExtraOutput::LifeEffectFishingExtraOutput(
        LifeEffectFishingExtraOutput *const this,
        LifeEffectFishingExtraOutput *a2)
{
  float probability; // xmm0_4
  __int64 v3; // rsi
  uint32_t extra_item_count; // ecx
  char v5; // dl

  std::set<unsigned int>::set(&this->city_id_set, &a2->city_id_set);
  if ( *(_BYTE *)(((unsigned __int64)&a2->probability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->probability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->probability);
  }
  probability = a2->probability;
  if ( *(_BYTE *)(((unsigned __int64)&this->probability >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->probability >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->probability, a2);
  }
  this->probability = probability;
  v3 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->extra_item_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->extra_item_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->extra_item_count);
  }
  extra_item_count = a2->extra_item_count;
  v5 = *(_BYTE *)(((unsigned __int64)&this->extra_item_count >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->extra_item_count, v3);
  }
  this->extra_item_count = extra_item_count;
};

// Line 177: range 0000000012ED751E-0000000012ED7538
void __cdecl LifeEffectFishingExtraOutput::~LifeEffectFishingExtraOutput(LifeEffectFishingExtraOutput *const this)
{
  std::set<unsigned int>::~set(&this->city_id_set);
};
