// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigMultiPlatformUIData.h

// Line 19: range 000000001216D988-000000001216DC91
void __cdecl data::ConfigPlatformUIAction::ConfigPlatformUIAction(data::ConfigPlatformUIAction *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  std::vector<std::string>::vector(&this->paths);
  if ( *(_BYTE *)(((unsigned __int64)&this->indent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->indent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->indent, v1);
  }
  this->indent = 0.0;
  v2 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scale, v2);
  }
  this->scale = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->top, v2);
  }
  this->top = 0.0;
  v3 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bottom, v3);
  }
  this->bottom = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->left >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left, v3);
  }
  this->left = 0.0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->right >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->right >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->right, v4);
  }
  this->right = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->posx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->posx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->posx, v4);
  }
  this->posx = 0.0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->posy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->posy >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->posy, v5);
  }
  this->posy = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->active >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->active, v5);
  }
  this->active = 0;
  v6 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_active >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_active >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_active, v6);
  }
  this->first_active = 0;
  std::string::basic_string(&this->animation);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 0000000012642820-0000000012642DF3
void __cdecl data::ConfigPlatformUIAction::ConfigPlatformUIAction(
        data::ConfigPlatformUIAction *const this,
        const data::ConfigPlatformUIAction *a2)
{
  float indent; // xmm0_4
  float scale; // xmm0_4
  __int64 v4; // rsi
  float top; // xmm0_4
  float bottom; // xmm0_4
  __int64 v7; // rsi
  float left; // xmm0_4
  float right; // xmm0_4
  __int64 v10; // rsi
  float posx; // xmm0_4
  float posy; // xmm0_4
  __int64 v13; // rsi
  int32_t active; // ecx
  char v15; // al
  __int64 v16; // rsi
  int32_t first_active; // ecx
  char v18; // dl
  std::string *p_animation; // rsi
  bool is_json_loaded; // cl
  char v21; // al

  std::vector<std::string>::vector(&this->paths, &a2->paths);
  if ( *(_BYTE *)(((unsigned __int64)&a2->indent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->indent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->indent);
  }
  indent = a2->indent;
  if ( *(_BYTE *)(((unsigned __int64)&this->indent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->indent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->indent, a2);
  }
  this->indent = indent;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->scale);
  }
  scale = a2->scale;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scale >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scale, v4);
  }
  this->scale = scale;
  if ( *(_BYTE *)(((unsigned __int64)&a2->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->top);
  }
  top = a2->top;
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->top, v4);
  }
  this->top = top;
  if ( *(_BYTE *)(((unsigned __int64)&a2->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->bottom);
  }
  bottom = a2->bottom;
  v7 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bottom, v7);
  }
  this->bottom = bottom;
  if ( *(_BYTE *)(((unsigned __int64)&a2->left >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->left >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->left);
  }
  left = a2->left;
  if ( *(_BYTE *)(((unsigned __int64)&this->left >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left, v7);
  }
  this->left = left;
  if ( *(_BYTE *)(((unsigned __int64)&a2->right >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->right >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->right);
  }
  right = a2->right;
  v10 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->right >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->right >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->right, v10);
  }
  this->right = right;
  if ( *(_BYTE *)(((unsigned __int64)&a2->posx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->posx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->posx);
  }
  posx = a2->posx;
  if ( *(_BYTE *)(((unsigned __int64)&this->posx >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->posx >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->posx, v10);
  }
  this->posx = posx;
  if ( *(_BYTE *)(((unsigned __int64)&a2->posy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->posy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->posy);
  }
  posy = a2->posy;
  v13 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->posy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->posy >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->posy, v13);
  }
  this->posy = posy;
  if ( *(_BYTE *)(((unsigned __int64)&a2->active >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->active >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->active);
  }
  active = a2->active;
  v15 = *(_BYTE *)(((unsigned __int64)&this->active >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->active, v13);
  }
  this->active = active;
  v16 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->first_active >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->first_active >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->first_active);
  }
  first_active = a2->first_active;
  v18 = *(_BYTE *)(((unsigned __int64)&this->first_active >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->first_active, v16);
  }
  this->first_active = first_active;
  p_animation = &a2->animation;
  std::string::basic_string(&this->animation, &a2->animation);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_animation, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v21 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v21 < 0 )
  {
    LOBYTE(p_animation) = v21 != 0;
    __asan_report_store1(&this->is_json_loaded, p_animation, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 000000001216DC92-000000001216DCBC
void __cdecl data::ConfigPlatformUIAction::~ConfigPlatformUIAction(data::ConfigPlatformUIAction *const this)
{
  std::string::~string(&this->animation);
  std::vector<std::string>::~vector(&this->paths);
};

// Line 60: range 000000001216DEA0-000000001216DF1C
void __cdecl data::ConfigPlatformUIData::ConfigPlatformUIData(data::ConfigPlatformUIData *const this)
{
  __int64 v1; // rsi

  data::ConfigPlatformUIAction::ConfigPlatformUIAction(&this->base_canvans_action);
  data::ConfigPlatformUIAction::ConfigPlatformUIAction(&this->base_page_action);
  std::unordered_map<std::string,data::ConfigPlatformUIAction>::unordered_map(&this->context_actions);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 60: range 0000000012643062-000000001264317A
void __cdecl data::ConfigPlatformUIData::ConfigPlatformUIData(
        data::ConfigPlatformUIData *const this,
        const data::ConfigPlatformUIData *a2)
{
  data::ConfigPlatformUIActionMap *p_context_actions; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigPlatformUIAction::ConfigPlatformUIAction(&this->base_canvans_action, &a2->base_canvans_action);
  data::ConfigPlatformUIAction::ConfigPlatformUIAction(&this->base_page_action, &a2->base_page_action);
  p_context_actions = &a2->context_actions;
  std::unordered_map<std::string,data::ConfigPlatformUIAction>::unordered_map(&this->context_actions, p_context_actions);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_context_actions, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_context_actions) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_context_actions, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 60: range 000000001216DF1E-000000001216DF5A
void __cdecl data::ConfigPlatformUIData::~ConfigPlatformUIData(data::ConfigPlatformUIData *const this)
{
  std::unordered_map<std::string,data::ConfigPlatformUIAction>::~unordered_map(&this->context_actions);
  data::ConfigPlatformUIAction::~ConfigPlatformUIAction(&this->base_page_action);
  data::ConfigPlatformUIAction::~ConfigPlatformUIAction(&this->base_canvans_action);
};
