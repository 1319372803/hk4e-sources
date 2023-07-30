// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/CookExcelConfig.gen.h

// Line 94: range 0000000013BF6B92-0000000013BF6D43
void __cdecl data::CookRecipeExcelConfig::CookRecipeExcelConfig(data::CookRecipeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::CookRecipeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CookRecipeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->food_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->food_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->food_type, v3);
  }
  this->food_type = COOK_FOOD_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->cook_method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cook_method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cook_method, v3);
  }
  this->cook_method = COOK_METHOD_NONE;
  v4 = ((_BYTE)this + 20) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_default_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_default_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_default_unlocked, v4, v5);
  this->is_default_unlocked = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_proficiency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_proficiency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_proficiency, v4);
  }
  this->max_proficiency = 0;
  std::vector<data::IdCountConfig>::vector(&this->quality_output_vec);
  std::vector<data::IdCountConfig>::vector(&this->input_vec);
  std::vector<unsigned int>::vector(&this->qte_quality_weight_vec);
};

// Line 94: range 00000000141B69F8-00000000141B6D2E
void __cdecl data::CookRecipeExcelConfig::CookRecipeExcelConfig(
        data::CookRecipeExcelConfig *const this,
        const data::CookRecipeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::CookFoodType food_type; // ecx
  char v7; // dl
  data::CookMethodType cook_method; // ecx
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_default_unlocked; // cl
  char v13; // dl
  __int64 v14; // rdx
  uint32_t max_proficiency; // ecx
  char v16; // al
  const data::CookRecipeExcelConfig *v17; // [rsp+0h] [rbp-20h]

  v17 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CookRecipeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CookRecipeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v17 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v17->food_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->food_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v17->food_type);
  }
  food_type = v17->food_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->food_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->food_type, v5);
  }
  this->food_type = food_type;
  if ( *(_BYTE *)(((unsigned __int64)&v17->cook_method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->cook_method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->cook_method);
  }
  cook_method = v17->cook_method;
  v9 = *(_BYTE *)(((unsigned __int64)&this->cook_method >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->cook_method, v5);
  }
  this->cook_method = cook_method;
  v10 = ((_BYTE)v17 + 20) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v17->is_default_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v17->is_default_unlocked >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v17->is_default_unlocked, v10, v11);
  is_default_unlocked = v17->is_default_unlocked;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_default_unlocked >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_default_unlocked, v10, v14);
  this->is_default_unlocked = is_default_unlocked;
  if ( *(_BYTE *)(((unsigned __int64)&v17->max_proficiency >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->max_proficiency >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v17->max_proficiency);
  }
  max_proficiency = v17->max_proficiency;
  v16 = *(_BYTE *)(((unsigned __int64)&this->max_proficiency >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v10) = v16 != 0;
    __asan_report_store4(&this->max_proficiency, v10);
  }
  this->max_proficiency = max_proficiency;
  std::vector<data::IdCountConfig>::vector(&this->quality_output_vec, &v17->quality_output_vec);
  std::vector<data::IdCountConfig>::vector(&this->input_vec, &v17->input_vec);
  std::vector<unsigned int>::vector(&this->qte_quality_weight_vec, &v17->qte_quality_weight_vec);
};

// Line 97: range 00000000142A65E0-00000000142A6651
void __cdecl data::CookRecipeExcelConfig::~CookRecipeExcelConfig(data::CookRecipeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CookRecipeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CookRecipeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->qte_quality_weight_vec);
  std::vector<data::IdCountConfig>::~vector(&this->input_vec);
  std::vector<data::IdCountConfig>::~vector(&this->quality_output_vec);
};

// Line 97: range 00000000142A6652-00000000142A667C
void __cdecl data::CookRecipeExcelConfig::~CookRecipeExcelConfig(data::CookRecipeExcelConfig *const this)
{
  data::CookRecipeExcelConfig::~CookRecipeExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 115: range 0000000013C0840C-0000000013C085C6
data::CookBonusExcelConfig *__cdecl data::CookBonusExcelConfig::operator=(
        data::CookBonusExcelConfig *const this,
        const data::CookBonusExcelConfig *a2)
{
  uint32_t avatar_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t recipe_id; // ecx
  char v6; // dl
  data::CookBonusType bonus_type; // ecx
  char v8; // al
  const data::CookBonusExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->avatar_id, a2);
  }
  this->avatar_id = avatar_id;
  v4 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->recipe_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->recipe_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->recipe_id);
  }
  recipe_id = v10->recipe_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->recipe_id, v4);
  }
  this->recipe_id = recipe_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->bonus_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->bonus_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->bonus_type);
  }
  bonus_type = v10->bonus_type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->bonus_type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->bonus_type, v4);
  }
  this->bonus_type = bonus_type;
  std::vector<unsigned int>::operator=(&this->param_vec, &v10->param_vec);
  std::vector<unsigned int>::operator=(&this->complex_param_vec, &v10->complex_param_vec);
  return this;
};

// Line 115: range 0000000013BF6D44-0000000013BF6E67
void __cdecl data::CookBonusExcelConfig::CookBonusExcelConfig(data::CookBonusExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::CookBonusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CookBonusExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, v1);
  }
  this->avatar_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->recipe_id, v3);
  }
  this->recipe_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bonus_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bonus_type, v3);
  }
  this->bonus_type = COOK_BONUS_NONE;
  std::vector<unsigned int>::vector(&this->param_vec);
  std::vector<unsigned int>::vector(&this->complex_param_vec);
};

// Line 115: range 0000000013E0F9FC-0000000013E0FC0D
void __cdecl data::CookBonusExcelConfig::CookBonusExcelConfig(
        data::CookBonusExcelConfig *const this,
        const data::CookBonusExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t avatar_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t recipe_id; // ecx
  char v7; // dl
  data::CookBonusType bonus_type; // ecx
  char v9; // al
  const data::CookBonusExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CookBonusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CookBonusExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->avatar_id, a2);
  }
  this->avatar_id = avatar_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->recipe_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->recipe_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->recipe_id);
  }
  recipe_id = v10->recipe_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->recipe_id, v5);
  }
  this->recipe_id = recipe_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->bonus_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->bonus_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->bonus_type);
  }
  bonus_type = v10->bonus_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->bonus_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->bonus_type, v5);
  }
  this->bonus_type = bonus_type;
  std::vector<unsigned int>::vector(&this->param_vec, &v10->param_vec);
  std::vector<unsigned int>::vector(&this->complex_param_vec, &v10->complex_param_vec);
};

// Line 118: range 00000000142A6552-00000000142A65B3
void __cdecl data::CookBonusExcelConfig::~CookBonusExcelConfig(data::CookBonusExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CookBonusExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CookBonusExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->complex_param_vec);
  std::vector<unsigned int>::~vector(&this->param_vec);
};

// Line 118: range 00000000142A65B4-00000000142A65DE
void __cdecl data::CookBonusExcelConfig::~CookBonusExcelConfig(data::CookBonusExcelConfig *const this)
{
  data::CookBonusExcelConfig::~CookBonusExcelConfig(this);
  operator delete(this, 0x48uLL);
};
