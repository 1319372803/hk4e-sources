// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigQuestScheme.h

// Line 21: range 0000000012175868-00000000121758FA
void __cdecl data::QuestCondEx::QuestCondEx(data::QuestCondEx *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = QUEST_COND_NONE;
  std::vector<int>::vector(&this->param);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 21: range 000000001236F35E-000000001236F46C
void __cdecl data::QuestCondEx::QuestCondEx(data::QuestCondEx *const this, data::QuestCondEx *a2)
{
  data::QuestCondType type; // ecx
  char v3; // al
  data::Int32List *p_param; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::QuestCondEx *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_param = &v7->param;
  std::vector<int>::vector(&this->param, &v7->param);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_param, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 21: range 00000000121758FC-000000001217591A
void __cdecl data::QuestCondEx::~QuestCondEx(data::QuestCondEx *const this)
{
  std::vector<int>::~vector(&this->param);
};

// Line 50: range 000000001217591C-00000000121759F1
void __cdecl data::QuestContentEx::QuestContentEx(data::QuestContentEx *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = QUEST_CONTENT_NONE;
  std::vector<int>::vector(&this->param);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count, v1);
  }
  this->count = 0;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 50: range 000000001236FBF8-000000001236FD85
void __cdecl data::QuestContentEx::QuestContentEx(data::QuestContentEx *const this, data::QuestContentEx *a2)
{
  data::QuestContentType type; // ecx
  char v3; // al
  data::Int32List *p_param; // rsi
  uint32_t count; // ecx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  data::QuestContentEx *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_param = &v12->param;
  std::vector<int>::vector(&this->param, &v12->param);
  if ( *(_BYTE *)(((unsigned __int64)&v12->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v12->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v12->count);
  }
  count = v12->count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_param) = v6 != 0;
    __asan_report_store4(&this->count, p_param);
  }
  this->count = count;
  v7 = ((_BYTE)v12 + 36) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 50: range 00000000121759F2-0000000012175A10
void __cdecl data::QuestContentEx::~QuestContentEx(data::QuestContentEx *const this)
{
  std::vector<int>::~vector(&this->param);
};

// Line 80: range 000000001217630E-00000000121764AD
void __cdecl data::QuestGuideEx::QuestGuideEx(data::QuestGuideEx *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = QUEST_GUIDE_NONE;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_guide >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_guide >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->auto_guide, v2);
  }
  this->auto_guide = QUEST_GUIDE_AUTO_NONE;
  std::vector<std::string>::vector(&this->param);
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_scene, v2);
  }
  this->guide_scene = 0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_style >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guide_style >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guide_style, v3);
  }
  this->guide_style = QUEST_GUIDE_STYLE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_layer, v3);
  }
  this->guide_layer = QUEST_GUIDE_LAYER_NONE;
  v4 = ((_BYTE)this + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 80: range 0000000012372320-000000001237262C
void __cdecl data::QuestGuideEx::QuestGuideEx(data::QuestGuideEx *const this, data::QuestGuideEx *a2)
{
  data::QuestGuideType type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::QuestGuideAuto auto_guide; // ecx
  char v6; // dl
  data::StringList *p_param; // rsi
  uint32_t guide_scene; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::QuestGuideStyle guide_style; // ecx
  char v12; // dl
  data::QuestGuideLayer guide_layer; // ecx
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool is_json_loaded; // cl
  char v18; // dl
  __int64 v19; // rdx
  data::QuestGuideEx *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  v4 = (((_BYTE)v20 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->auto_guide >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->auto_guide >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->auto_guide);
  }
  auto_guide = v20->auto_guide;
  v6 = *(_BYTE *)(((unsigned __int64)&this->auto_guide >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->auto_guide, v4);
  }
  this->auto_guide = auto_guide;
  p_param = &v20->param;
  std::vector<std::string>::vector(&this->param, &v20->param);
  if ( *(_BYTE *)(((unsigned __int64)&v20->guide_scene >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->guide_scene >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->guide_scene);
  }
  guide_scene = v20->guide_scene;
  v9 = *(_BYTE *)(((unsigned __int64)&this->guide_scene >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_param) = v9 != 0;
    __asan_report_store4(&this->guide_scene, p_param);
  }
  this->guide_scene = guide_scene;
  v10 = (((_BYTE)v20 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->guide_style >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->guide_style >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->guide_style);
  }
  guide_style = v20->guide_style;
  v12 = *(_BYTE *)(((unsigned __int64)&this->guide_style >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->guide_style, v10);
  }
  this->guide_style = guide_style;
  if ( *(_BYTE *)(((unsigned __int64)&v20->guide_layer >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->guide_layer >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->guide_layer);
  }
  guide_layer = v20->guide_layer;
  v14 = *(_BYTE *)(((unsigned __int64)&this->guide_layer >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->guide_layer, v10);
  }
  this->guide_layer = guide_layer;
  v15 = ((_BYTE)v20 + 44) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v20->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v20->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v20->is_json_loaded, v15, v16);
  is_json_loaded = v20->is_json_loaded;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_json_loaded, v15, v19);
  this->is_json_loaded = is_json_loaded;
};

// Line 80: range 00000000121764AE-00000000121764CC
void __cdecl data::QuestGuideEx::~QuestGuideEx(data::QuestGuideEx *const this)
{
  std::vector<std::string>::~vector(&this->param);
};

// Line 132: range 0000000012175A12-0000000012175AA4
void __cdecl data::QuestExecEx::QuestExecEx(data::QuestExecEx *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = QUEST_EXEC_NONE;
  std::vector<std::string>::vector(&this->param);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 132: range 00000000123704CC-00000000123705DA
void __cdecl data::QuestExecEx::QuestExecEx(data::QuestExecEx *const this, data::QuestExecEx *a2)
{
  data::QuestExecType type; // ecx
  char v3; // al
  data::StringList *p_param; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::QuestExecEx *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_param = &v7->param;
  std::vector<std::string>::vector(&this->param, &v7->param);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_param, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 132: range 0000000012175AA6-0000000012175AC4
void __cdecl data::QuestExecEx::~QuestExecEx(data::QuestExecEx *const this)
{
  std::vector<std::string>::~vector(&this->param);
};

// Line 166: range 0000000012176522-0000000012176844
void __cdecl data::ConfigQuestScheme::ConfigQuestScheme(data::ConfigQuestScheme *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->sub_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_id, v2);
  }
  this->main_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->order, v2);
  }
  this->order = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_id_set >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_id_set >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_id_set, v3);
  }
  this->sub_id_set = 0;
  if ( *(char *)(((unsigned __int64)&this->is_mp_block >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_mp_block, v3, &this->is_mp_block);
  this->is_mp_block = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_type, v4);
  }
  this->show_type = QUEST_SHOW;
  std::vector<data::QuestContentEx>::vector(&this->finish_cond);
  std::vector<data::QuestContentEx>::vector(&this->fail_cond);
  data::QuestGuideEx::QuestGuideEx(&this->guide);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_guide >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_guide >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_guide, v4);
  }
  this->show_guide = QUEST_GUIDE_ITEM_ENABLE;
  v5 = ((_BYTE)this + 124) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->finish_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->finish_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->finish_parent, v5, v6);
  this->finish_parent = 0;
  v7 = ((_BYTE)this + 125) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->fail_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->fail_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->fail_parent, v7, v8);
  this->fail_parent = 0;
  v9 = ((_BYTE)this + 126) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_rewind >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_rewind >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_rewind, v9, v10);
  this->is_rewind = 0;
  std::vector<data::QuestExecEx>::vector(&this->finish_exec);
  std::vector<data::QuestExecEx>::vector(&this->fail_exec);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v9, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 166: range 000000001237267A-0000000012372C72
void __cdecl data::ConfigQuestScheme::ConfigQuestScheme(
        data::ConfigQuestScheme *const this,
        data::ConfigQuestScheme *a2)
{
  uint32_t sub_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t main_id; // ecx
  char v6; // dl
  int32_t order; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t sub_id_set; // ecx
  char v11; // dl
  bool is_mp_block; // cl
  char v13; // al
  __int64 v14; // rsi
  data::QuestShowType show_type; // ecx
  char v16; // dl
  data::QuestGuideEx *p_guide; // rsi
  data::ShowQuestGuideType show_guide; // ecx
  char v19; // al
  __int64 v20; // rsi
  __int64 v21; // rdx
  bool finish_parent; // cl
  char v23; // dl
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  bool fail_parent; // cl
  char v28; // dl
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rdx
  bool is_rewind; // cl
  char v33; // dl
  __int64 v34; // rdx
  data::QuestExecExList *p_fail_exec; // rsi
  bool is_json_loaded; // cl
  char v37; // al
  data::ConfigQuestScheme *v38; // [rsp+0h] [rbp-10h]

  v38 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  sub_id = a2->sub_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->sub_id = sub_id;
  v4 = (((_BYTE)v38 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->main_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->main_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->main_id);
  }
  main_id = v38->main_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->main_id, v4);
  }
  this->main_id = main_id;
  if ( *(_BYTE *)(((unsigned __int64)&v38->order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->order);
  }
  order = v38->order;
  v8 = *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->order, v4);
  }
  this->order = order;
  v9 = (((_BYTE)v38 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->sub_id_set >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->sub_id_set >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->sub_id_set);
  }
  sub_id_set = v38->sub_id_set;
  v11 = *(_BYTE *)(((unsigned __int64)&this->sub_id_set >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v11 != 0;
  if ( v11 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v11 )
    __asan_report_store4(&this->sub_id_set, v9);
  this->sub_id_set = sub_id_set;
  if ( *(char *)(((unsigned __int64)&v38->is_mp_block >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v38->is_mp_block, v9, &v38->is_mp_block);
  is_mp_block = v38->is_mp_block;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_mp_block >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store1(&this->is_mp_block, v9, &this->is_mp_block);
  }
  this->is_mp_block = is_mp_block;
  v14 = (((_BYTE)v38 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->show_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->show_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->show_type);
  }
  show_type = v38->show_type;
  v16 = *(_BYTE *)(((unsigned __int64)&this->show_type >> 3) + 0x7FFF8000);
  if ( v16 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v16 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->show_type, v14);
  }
  this->show_type = show_type;
  std::vector<data::QuestContentEx>::vector(&this->finish_cond, &v38->finish_cond);
  std::vector<data::QuestContentEx>::vector(&this->fail_cond, &v38->fail_cond);
  p_guide = &v38->guide;
  data::QuestGuideEx::QuestGuideEx(&this->guide, &v38->guide);
  if ( *(_BYTE *)(((unsigned __int64)&v38->show_guide >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->show_guide >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->show_guide);
  }
  show_guide = v38->show_guide;
  v19 = *(_BYTE *)(((unsigned __int64)&this->show_guide >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(p_guide) = v19 != 0;
    __asan_report_store4(&this->show_guide, p_guide);
  }
  this->show_guide = show_guide;
  v20 = ((_BYTE)v38 + 124) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&v38->finish_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&v38->finish_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&v38->finish_parent, v20, v21);
  finish_parent = v38->finish_parent;
  v23 = *(_BYTE *)(((unsigned __int64)&this->finish_parent >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((((unsigned __int8)this + 124) & 7) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->finish_parent, v20, v24);
  this->finish_parent = finish_parent;
  v25 = ((_BYTE)v38 + 125) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&v38->fail_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&v38->fail_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_load1(&v38->fail_parent, v25, v26);
  fail_parent = v38->fail_parent;
  v28 = *(_BYTE *)(((unsigned __int64)&this->fail_parent >> 3) + 0x7FFF8000);
  LOBYTE(v25) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((((unsigned __int8)this + 125) & 7) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->fail_parent, v25, v29);
  this->fail_parent = fail_parent;
  v30 = ((_BYTE)v38 + 126) & 7;
  v31 = (*(_BYTE *)(((unsigned __int64)&v38->is_rewind >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v30 >= *(_BYTE *)(((unsigned __int64)&v38->is_rewind >> 3) + 0x7FFF8000));
  if ( (_BYTE)v31 )
    __asan_report_load1(&v38->is_rewind, v30, v31);
  is_rewind = v38->is_rewind;
  v33 = *(_BYTE *)(((unsigned __int64)&this->is_rewind >> 3) + 0x7FFF8000);
  LOBYTE(v30) = v33 != 0;
  v34 = (v33 != 0) & (unsigned __int8)((((unsigned __int8)this + 126) & 7) >= v33);
  if ( (_BYTE)v34 )
    __asan_report_store1(&this->is_rewind, v30, v34);
  this->is_rewind = is_rewind;
  std::vector<data::QuestExecEx>::vector(&this->finish_exec, &v38->finish_exec);
  p_fail_exec = &v38->fail_exec;
  std::vector<data::QuestExecEx>::vector(&this->fail_exec, &v38->fail_exec);
  if ( *(char *)(((unsigned __int64)&v38->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v38->is_json_loaded, p_fail_exec, &v38->is_json_loaded);
  is_json_loaded = v38->is_json_loaded;
  v37 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v37 < 0 )
  {
    LOBYTE(p_fail_exec) = v37 != 0;
    __asan_report_store1(&this->is_json_loaded, p_fail_exec, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 166: range 0000000012176846-00000000121768A6
void __cdecl data::ConfigQuestScheme::~ConfigQuestScheme(data::ConfigQuestScheme *const this)
{
  std::vector<data::QuestExecEx>::~vector(&this->fail_exec);
  std::vector<data::QuestExecEx>::~vector(&this->finish_exec);
  data::QuestGuideEx::~QuestGuideEx(&this->guide);
  std::vector<data::QuestContentEx>::~vector(&this->fail_cond);
  std::vector<data::QuestContentEx>::~vector(&this->finish_cond);
};

// Line 349: range 0000000012176CB8-0000000012176D5A
void __cdecl data::ConfigRandomQuestScheme::ConfigRandomQuestScheme(data::ConfigRandomQuestScheme *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  std::unordered_map<unsigned int,std::vector<int>>::unordered_map(&this->free_style_dic);
  std::unordered_map<std::string,std::vector<int>>::unordered_map(&this->random_free_style_dic);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 349: range 0000000012373D6E-0000000012373E97
void __cdecl data::ConfigRandomQuestScheme::ConfigRandomQuestScheme(
        data::ConfigRandomQuestScheme *const this,
        data::ConfigRandomQuestScheme *a2)
{
  uint32_t id; // ecx
  char v3; // al
  data::StringToIntListMap *p_random_free_style_dic; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigRandomQuestScheme *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  std::unordered_map<unsigned int,std::vector<int>>::unordered_map(&this->free_style_dic, &v7->free_style_dic);
  p_random_free_style_dic = &v7->random_free_style_dic;
  std::unordered_map<std::string,std::vector<int>>::unordered_map(
    &this->random_free_style_dic,
    &v7->random_free_style_dic);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_random_free_style_dic, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_random_free_style_dic) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_random_free_style_dic, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 349: range 0000000012176D5C-0000000012176D8A
void __cdecl data::ConfigRandomQuestScheme::~ConfigRandomQuestScheme(data::ConfigRandomQuestScheme *const this)
{
  std::unordered_map<std::string,std::vector<int>>::~unordered_map(&this->random_free_style_dic);
  std::unordered_map<unsigned int,std::vector<int>>::~unordered_map(&this->free_style_dic);
};

// Line 374: range 00000000121768A8-000000001217693A
void __cdecl data::ConfigRandomTalkScheme::ConfigRandomTalkScheme(data::ConfigRandomTalkScheme *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  std::vector<int>::vector(&this->free_style_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 374: range 00000000123733F8-0000000012373506
void __cdecl data::ConfigRandomTalkScheme::ConfigRandomTalkScheme(
        data::ConfigRandomTalkScheme *const this,
        data::ConfigRandomTalkScheme *a2)
{
  uint32_t id; // ecx
  char v3; // al
  data::Int32List *p_free_style_list; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::ConfigRandomTalkScheme *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  p_free_style_list = &v7->free_style_list;
  std::vector<int>::vector(&this->free_style_list, &v7->free_style_list);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_free_style_list, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_free_style_list) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_free_style_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 374: range 000000001217693C-000000001217695A
void __cdecl data::ConfigRandomTalkScheme::~ConfigRandomTalkScheme(data::ConfigRandomTalkScheme *const this)
{
  std::vector<int>::~vector(&this->free_style_list);
};
