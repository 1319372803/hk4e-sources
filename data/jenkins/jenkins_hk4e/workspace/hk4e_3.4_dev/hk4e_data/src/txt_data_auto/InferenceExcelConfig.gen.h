// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/InferenceExcelConfig.gen.h

// Line 39: range 000000001475F0F0-000000001475F1C5
void __cdecl data::InferencePageExcelConfig::InferencePageExcelConfig(data::InferencePageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InferencePageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InferencePageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->page_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->page_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->page_id, v1);
  }
  this->page_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->parent_quest_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->parent_quest_id = 0;
  std::vector<unsigned int>::vector(&this->conclusion_list);
};

// Line 39: range 0000000014D3F3E4-0000000014D3F53E
void __cdecl data::InferencePageExcelConfig::InferencePageExcelConfig(
        data::InferencePageExcelConfig *const this,
        const data::InferencePageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t page_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t parent_quest_id; // ecx
  char v7; // dl
  const data::InferencePageExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InferencePageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InferencePageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->page_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->page_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->page_id);
  }
  page_id = a2->page_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->page_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->page_id, a2);
  }
  this->page_id = page_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->parent_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->parent_quest_id);
  }
  parent_quest_id = v8->parent_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->parent_quest_id, v5);
  }
  this->parent_quest_id = parent_quest_id;
  std::vector<unsigned int>::vector(&this->conclusion_list, &v8->conclusion_list);
};

// Line 42: range 0000000014DE73D2-0000000014DE73FC
void __cdecl data::InferencePageExcelConfig::~InferencePageExcelConfig(data::InferencePageExcelConfig *const this)
{
  data::InferencePageExcelConfig::~InferencePageExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 42: range 0000000014DE7380-0000000014DE73D1
void __cdecl data::InferencePageExcelConfig::~InferencePageExcelConfig(data::InferencePageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InferencePageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InferencePageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->conclusion_list);
};

// Line 55: range 00000000147CBAF6-00000000147CBB9B
data::InferenceAction *__cdecl data::InferenceAction::operator=(
        data::InferenceAction *const this,
        const data::InferenceAction *a2)
{
  data::InferenceActionType type; // ecx
  char v3; // al
  const data::InferenceAction *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::string::operator=(&this->param, &v5->param);
  return this;
};

// Line 55: range 0000000014CB2E8A-0000000014CB2F19
void __cdecl data::InferenceAction::InferenceAction(data::InferenceAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InferenceAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InferenceAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = INFERENCE_ACTION_NONE;
  std::string::basic_string(&this->param);
};

// Line 55: range 0000000014D3F28C-0000000014D3F361
void __cdecl data::InferenceAction::InferenceAction(data::InferenceAction *const this, const data::InferenceAction *a2)
{
  int (**v2)(...); // rdx
  data::InferenceActionType type; // ecx
  char v4; // al
  const data::InferenceAction *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InferenceAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InferenceAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::string::basic_string(&this->param, &v5->param);
};

// Line 58: range 0000000014BEFA06-0000000014BEFA57
void __cdecl data::InferenceAction::~InferenceAction(data::InferenceAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InferenceAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InferenceAction = v2;
  std::string::~string(&this->param);
};

// Line 58: range 0000000014BEFA58-0000000014BEFA82
void __cdecl data::InferenceAction::~InferenceAction(data::InferenceAction *const this)
{
  data::InferenceAction::~InferenceAction(this);
  operator delete(this, 0x30uLL);
};

// Line 68: range 000000001475F21A-000000001475F3FB
void __cdecl data::InferenceWordExcelConfig::InferenceWordExcelConfig(data::InferenceWordExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::InferenceWordExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InferenceWordExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->word_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->word_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->word_id, v1);
  }
  this->word_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->page_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->page_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->page_id, v3);
  }
  this->page_id = 0;
  if ( *(char *)(((unsigned __int64)&this->default_unlock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->default_unlock, v3, &this->default_unlock);
  this->default_unlock = 0;
  v4 = ((_BYTE)this + 17) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_can_interpret >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_can_interpret >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_can_interpret, v4, v5);
  this->is_can_interpret = 0;
  std::vector<data::InferenceAction>::vector(&this->interpret_action);
  if ( *(char *)(((unsigned __int64)&this->is_can_associate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_can_associate, v4, &this->is_can_associate);
  this->is_can_associate = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->associate_word_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->associate_word_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->associate_word_id, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->associate_word_id = 0;
  std::vector<data::InferenceAction>::vector(&this->associate_action);
};

// Line 68: range 0000000014D3F680-0000000014D3FA0D
void __cdecl data::InferenceWordExcelConfig::InferenceWordExcelConfig(
        data::InferenceWordExcelConfig *const this,
        const data::InferenceWordExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t word_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t page_id; // ecx
  char v7; // dl
  bool default_unlock; // cl
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_can_interpret; // cl
  char v13; // dl
  __int64 v14; // rdx
  std::vector<data::InferenceAction> *p_interpret_action; // rsi
  bool is_can_associate; // cl
  char v17; // al
  __int64 v18; // rsi
  uint32_t associate_word_id; // ecx
  char v20; // dl
  const data::InferenceWordExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InferenceWordExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InferenceWordExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->word_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->word_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->word_id);
  }
  word_id = a2->word_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->word_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->word_id, a2);
  }
  this->word_id = word_id;
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->page_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->page_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->page_id);
  }
  page_id = v21->page_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->page_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->page_id, v5);
  this->page_id = page_id;
  if ( *(char *)(((unsigned __int64)&v21->default_unlock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v21->default_unlock, v5, &v21->default_unlock);
  default_unlock = v21->default_unlock;
  v9 = *(_BYTE *)(((unsigned __int64)&this->default_unlock >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->default_unlock, v5, &this->default_unlock);
  }
  this->default_unlock = default_unlock;
  v10 = ((_BYTE)v21 + 17) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v21->is_can_interpret >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v21->is_can_interpret >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v21->is_can_interpret, v10, v11);
  is_can_interpret = v21->is_can_interpret;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_can_interpret >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 17) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_can_interpret, v10, v14);
  this->is_can_interpret = is_can_interpret;
  p_interpret_action = &v21->interpret_action;
  std::vector<data::InferenceAction>::vector(&this->interpret_action, &v21->interpret_action);
  if ( *(char *)(((unsigned __int64)&v21->is_can_associate >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v21->is_can_associate, p_interpret_action, &v21->is_can_associate);
  is_can_associate = v21->is_can_associate;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_can_associate >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(p_interpret_action) = v17 != 0;
    __asan_report_store1(&this->is_can_associate, p_interpret_action, &this->is_can_associate);
  }
  this->is_can_associate = is_can_associate;
  v18 = (((_BYTE)v21 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->associate_word_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->associate_word_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->associate_word_id);
  }
  associate_word_id = v21->associate_word_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->associate_word_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->associate_word_id, v18);
  }
  this->associate_word_id = associate_word_id;
  std::vector<data::InferenceAction>::vector(&this->associate_action, &v21->associate_action);
};

// Line 71: range 0000000014DE72F2-0000000014DE7353
void __cdecl data::InferenceWordExcelConfig::~InferenceWordExcelConfig(data::InferenceWordExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InferenceWordExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InferenceWordExcelConfig = v2;
  std::vector<data::InferenceAction>::~vector(&this->associate_action);
  std::vector<data::InferenceAction>::~vector(&this->interpret_action);
};

// Line 71: range 0000000014DE7354-0000000014DE737E
void __cdecl data::InferenceWordExcelConfig::~InferenceWordExcelConfig(data::InferenceWordExcelConfig *const this)
{
  data::InferenceWordExcelConfig::~InferenceWordExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 89: range 000000001475F3FC-000000001475F48B
void __cdecl data::InferenceConclusionExcelConfig::InferenceConclusionExcelConfig(
        data::InferenceConclusionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InferenceConclusionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InferenceConclusionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->conclusion_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->conclusion_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->conclusion_id, v1);
  }
  this->conclusion_id = 0;
  std::vector<unsigned int>::vector(&this->word_list);
};

// Line 89: range 0000000014D3FB4E-0000000014D3FC23
void __cdecl data::InferenceConclusionExcelConfig::InferenceConclusionExcelConfig(
        data::InferenceConclusionExcelConfig *const this,
        const data::InferenceConclusionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t conclusion_id; // ecx
  char v4; // al
  const data::InferenceConclusionExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::InferenceConclusionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_InferenceConclusionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->conclusion_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->conclusion_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->conclusion_id);
  }
  conclusion_id = a2->conclusion_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->conclusion_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->conclusion_id, a2);
  }
  this->conclusion_id = conclusion_id;
  std::vector<unsigned int>::vector(&this->word_list, &v5->word_list);
};

// Line 92: range 0000000014DE7274-0000000014DE72C5
void __cdecl data::InferenceConclusionExcelConfig::~InferenceConclusionExcelConfig(
        data::InferenceConclusionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::InferenceConclusionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_InferenceConclusionExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->word_list);
};

// Line 92: range 0000000014DE72C6-0000000014DE72F0
void __cdecl data::InferenceConclusionExcelConfig::~InferenceConclusionExcelConfig(
        data::InferenceConclusionExcelConfig *const this)
{
  data::InferenceConclusionExcelConfig::~InferenceConclusionExcelConfig(this);
  operator delete(this, 0x28uLL);
};
