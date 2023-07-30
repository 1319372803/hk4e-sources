// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/BlossomExcelConfig.gen.h

// Line 75: range 00000000132F0B68-00000000132F0BB9
void __cdecl data::BlossomRefreshCond::~BlossomRefreshCond(data::BlossomRefreshCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomRefreshCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomRefreshCond = v2;
  std::vector<unsigned int>::~vector(&this->param);
};

// Line 75: range 00000000132F0E36-00000000132F0E77
void __cdecl data::BlossomRewardExcelConfig::~BlossomRewardExcelConfig(data::BlossomRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomRewardExcelConfig = v2;
};

// Line 150: range 00000000141A7286-00000000141A73C5
void __cdecl data::BlossomOpenExcelConfig::BlossomOpenExcelConfig(
        data::BlossomOpenExcelConfig *const this,
        const data::BlossomOpenExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t city_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_level; // ecx
  char v7; // dl
  const data::BlossomOpenExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlossomOpenExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlossomOpenExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->city_id);
  }
  city_id = a2->city_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->city_id, a2);
  }
  this->city_id = city_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->open_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->open_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->open_level);
  }
  open_level = v8->open_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_level, v5);
  }
  this->open_level = open_level;
};

// Line 153: range 00000000142A52D4-00000000142A52FE
void __cdecl data::BlossomOpenExcelConfig::~BlossomOpenExcelConfig(data::BlossomOpenExcelConfig *const this)
{
  data::BlossomOpenExcelConfig::~BlossomOpenExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 153: range 00000000142A5292-00000000142A52D3
void __cdecl data::BlossomOpenExcelConfig::~BlossomOpenExcelConfig(data::BlossomOpenExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomOpenExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomOpenExcelConfig = v2;
};

// Line 165: range 00000000140FC0AA-00000000140FC16F
void __cdecl data::BlossomRewardExcelConfig::BlossomRewardExcelConfig(data::BlossomRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id, v1);
  }
  this->drop_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_reward >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_reward >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->preview_reward, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->preview_reward = 0;
};

// Line 165: range 00000000132F0CB2-00000000132F0DF1
void __cdecl data::BlossomRewardExcelConfig::BlossomRewardExcelConfig(
        data::BlossomRewardExcelConfig *const this,
        const data::BlossomRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t drop_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t preview_reward; // ecx
  char v7; // dl
  const data::BlossomRewardExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlossomRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlossomRewardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->drop_id);
  }
  drop_id = a2->drop_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->drop_id, a2);
  }
  this->drop_id = drop_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->preview_reward >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->preview_reward >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->preview_reward);
  }
  preview_reward = v8->preview_reward;
  v7 = *(_BYTE *)(((unsigned __int64)&this->preview_reward >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->preview_reward, v5);
  }
  this->preview_reward = preview_reward;
};

// Line 168: range 00000000132F0E78-00000000132F0EA2
void __cdecl data::BlossomRewardExcelConfig::~BlossomRewardExcelConfig(data::BlossomRewardExcelConfig *const this)
{
  data::BlossomRewardExcelConfig::~BlossomRewardExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 178: range 00000000140FBECC-00000000140FBF5B
void __cdecl data::BlossomRefreshCond::BlossomRefreshCond(data::BlossomRefreshCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomRefreshCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomRefreshCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = BLOSSOM_REFRESH_COND_NONE;
  std::vector<unsigned int>::vector(&this->param);
};

// Line 178: range 00000000132F0A24-00000000132F0AF9
void __cdecl data::BlossomRefreshCond::BlossomRefreshCond(
        data::BlossomRefreshCond *const this,
        const data::BlossomRefreshCond *a2)
{
  int (**v2)(...); // rdx
  data::BlossomRefreshCondType type; // ecx
  char v4; // al
  const data::BlossomRefreshCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlossomRefreshCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlossomRefreshCond = v2;
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
  std::vector<unsigned int>::vector(&this->param, &v5->param);
};

// Line 181: range 00000000132F0BBA-00000000132F0BE4
void __cdecl data::BlossomRefreshCond::~BlossomRefreshCond(data::BlossomRefreshCond *const this)
{
  data::BlossomRefreshCond::~BlossomRefreshCond(this);
  operator delete(this, 0x28uLL);
};

// Line 191: range 0000000013BEA406-0000000013BEA852
void __cdecl data::BlossomRefreshExcelConfig::BlossomRefreshExcelConfig(data::BlossomRefreshExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomRefreshExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomRefreshExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->city_id, v3);
  }
  this->city_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_type, v3);
  }
  this->refresh_type = BLOSSOM_REFRESH_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_count, v4);
  }
  this->refresh_count = 0;
  std::string::basic_string(&this->refresh_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_state, v4);
  }
  this->open_state = OPEN_STATE_NONE;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_level, v5);
  }
  this->open_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->close_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->close_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->close_level, v5);
  }
  this->close_level = 0;
  std::vector<data::BlossomRefreshCond>::vector(&this->refresh_cond_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->revise_level, v5);
  }
  this->revise_level = 0;
  v6 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_limit_type, v6);
  }
  this->item_limit_type = ITEM_LIMIT_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blossom_chest_id, v6);
  }
  this->blossom_chest_id = 0;
  v7 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_update_need_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camp_update_need_count >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camp_update_need_count, v7);
  }
  this->camp_update_need_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round_max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round_max_count, v7);
  }
  this->round_max_count = 0;
  std::vector<data::BlossomRewardExcelConfig>::vector(&this->drop_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_show_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_show_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_show_type, v7);
  }
  this->client_show_type = BLOSSOM_SHOWTYPE_NONE;
  v8 = ((_BYTE)this - 108) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->hide_bg >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->hide_bg >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->hide_bg, v8, v9);
  this->hide_bg = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_type, v8);
  }
  this->reward_type = BLOSSOM_REWARD_TYPE_DEFAULT;
};

// Line 191: range 0000000012ED78D8-0000000012ED80FE
void __cdecl data::BlossomRefreshExcelConfig::BlossomRefreshExcelConfig(
        data::BlossomRefreshExcelConfig *const this,
        const data::BlossomRefreshExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  data::BlossomRefreshType refresh_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t refresh_count; // ecx
  char v12; // dl
  std::string *p_refresh_time; // rsi
  data::OpenStateType open_state; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t open_level; // ecx
  char v18; // dl
  uint32_t close_level; // ecx
  char v20; // al
  std::vector<data::BlossomRefreshCond> *p_refresh_cond_vec; // rsi
  uint32_t revise_level; // ecx
  char v23; // al
  __int64 v24; // rsi
  data::ItemLimitType item_limit_type; // ecx
  char v26; // dl
  uint32_t blossom_chest_id; // ecx
  char v28; // al
  __int64 v29; // rsi
  uint32_t camp_update_need_count; // ecx
  char v31; // dl
  uint32_t round_max_count; // ecx
  char v33; // al
  std::vector<data::BlossomRewardExcelConfig> *p_drop_vec; // rsi
  data::BlossomShowType client_show_type; // ecx
  char v36; // al
  __int64 v37; // rsi
  __int64 v38; // rdx
  bool hide_bg; // cl
  char v40; // dl
  __int64 v41; // rdx
  data::BlossomRewardType reward_type; // ecx
  char v43; // al
  const data::BlossomRefreshExcelConfig *v44; // [rsp+0h] [rbp-20h]

  v44 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlossomRefreshExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlossomRefreshExcelConfig = v2;
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
  v5 = (((_BYTE)v44 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v44->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v44 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v44->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v44->city_id);
  }
  city_id = v44->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v44->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v44->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v44->refresh_type);
  }
  refresh_type = v44->refresh_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->refresh_type, v5);
  }
  this->refresh_type = refresh_type;
  v10 = (((_BYTE)v44 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v44->refresh_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v44 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v44->refresh_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v44->refresh_count);
  }
  refresh_count = v44->refresh_count;
  v12 = *(_BYTE *)(((unsigned __int64)&this->refresh_count >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->refresh_count, v10);
  }
  this->refresh_count = refresh_count;
  p_refresh_time = &v44->refresh_time;
  std::string::basic_string(&this->refresh_time, &v44->refresh_time);
  if ( *(_BYTE *)(((unsigned __int64)&v44->open_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v44->open_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v44->open_state);
  }
  open_state = v44->open_state;
  v15 = *(_BYTE *)(((unsigned __int64)&this->open_state >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_refresh_time) = v15 != 0;
    __asan_report_store4(&this->open_state, p_refresh_time);
  }
  this->open_state = open_state;
  v16 = (((_BYTE)v44 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v44->open_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v44 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v44->open_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v44->open_level);
  }
  open_level = v44->open_level;
  v18 = *(_BYTE *)(((unsigned __int64)&this->open_level >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->open_level, v16);
  }
  this->open_level = open_level;
  if ( *(_BYTE *)(((unsigned __int64)&v44->close_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v44->close_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v44->close_level);
  }
  close_level = v44->close_level;
  v20 = *(_BYTE *)(((unsigned __int64)&this->close_level >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->close_level, v16);
  }
  this->close_level = close_level;
  p_refresh_cond_vec = &v44->refresh_cond_vec;
  std::vector<data::BlossomRefreshCond>::vector(&this->refresh_cond_vec, &v44->refresh_cond_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v44->revise_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v44->revise_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v44->revise_level);
  }
  revise_level = v44->revise_level;
  v23 = *(_BYTE *)(((unsigned __int64)&this->revise_level >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_refresh_cond_vec) = v23 != 0;
    __asan_report_store4(&this->revise_level, p_refresh_cond_vec);
  }
  this->revise_level = revise_level;
  v24 = (((_BYTE)v44 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v44->item_limit_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v44 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v44->item_limit_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v44->item_limit_type);
  }
  item_limit_type = v44->item_limit_type;
  v26 = *(_BYTE *)(((unsigned __int64)&this->item_limit_type >> 3) + 0x7FFF8000);
  if ( v26 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v26 )
  {
    LOBYTE(v24) = v26 != 0;
    __asan_report_store4(&this->item_limit_type, v24);
  }
  this->item_limit_type = item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&v44->blossom_chest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v44->blossom_chest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v44->blossom_chest_id);
  }
  blossom_chest_id = v44->blossom_chest_id;
  v28 = *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(v24) = v28 != 0;
    __asan_report_store4(&this->blossom_chest_id, v24);
  }
  this->blossom_chest_id = blossom_chest_id;
  v29 = (((_BYTE)v44 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v44->camp_update_need_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v44 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v44->camp_update_need_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v44->camp_update_need_count);
  }
  camp_update_need_count = v44->camp_update_need_count;
  v31 = *(_BYTE *)(((unsigned __int64)&this->camp_update_need_count >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->camp_update_need_count, v29);
  }
  this->camp_update_need_count = camp_update_need_count;
  if ( *(_BYTE *)(((unsigned __int64)&v44->round_max_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v44->round_max_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v44->round_max_count);
  }
  round_max_count = v44->round_max_count;
  v33 = *(_BYTE *)(((unsigned __int64)&this->round_max_count >> 3) + 0x7FFF8000);
  if ( v33 != 0 && v33 <= 3 )
  {
    LOBYTE(v29) = v33 != 0;
    __asan_report_store4(&this->round_max_count, v29);
  }
  this->round_max_count = round_max_count;
  p_drop_vec = &v44->drop_vec;
  std::vector<data::BlossomRewardExcelConfig>::vector(&this->drop_vec, &v44->drop_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v44->client_show_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v44->client_show_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v44->client_show_type);
  }
  client_show_type = v44->client_show_type;
  v36 = *(_BYTE *)(((unsigned __int64)&this->client_show_type >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(p_drop_vec) = v36 != 0;
    __asan_report_store4(&this->client_show_type, p_drop_vec);
  }
  this->client_show_type = client_show_type;
  v37 = ((_BYTE)v44 - 108) & 7;
  v38 = (*(_BYTE *)(((unsigned __int64)&v44->hide_bg >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v37 >= *(_BYTE *)(((unsigned __int64)&v44->hide_bg >> 3) + 0x7FFF8000));
  if ( (_BYTE)v38 )
    __asan_report_load1(&v44->hide_bg, v37, v38);
  hide_bg = v44->hide_bg;
  v40 = *(_BYTE *)(((unsigned __int64)&this->hide_bg >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v40 != 0;
  v41 = (v40 != 0) & (unsigned __int8)((((unsigned __int8)this - 108) & 7) >= v40);
  if ( (_BYTE)v41 )
    __asan_report_store1(&this->hide_bg, v37, v41);
  this->hide_bg = hide_bg;
  if ( *(_BYTE *)(((unsigned __int64)&v44->reward_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v44->reward_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v44->reward_type);
  }
  reward_type = v44->reward_type;
  v43 = *(_BYTE *)(((unsigned __int64)&this->reward_type >> 3) + 0x7FFF8000);
  if ( v43 != 0 && v43 <= 3 )
  {
    LOBYTE(v37) = v43 != 0;
    __asan_report_store4(&this->reward_type, v37);
  }
  this->reward_type = reward_type;
};

// Line 194: range 0000000013426BE2-0000000013426C53
void __cdecl data::BlossomRefreshExcelConfig::~BlossomRefreshExcelConfig(data::BlossomRefreshExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomRefreshExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomRefreshExcelConfig = v2;
  std::vector<data::BlossomRewardExcelConfig>::~vector(&this->drop_vec);
  std::vector<data::BlossomRefreshCond>::~vector(&this->refresh_cond_vec);
  std::string::~string(&this->refresh_time);
};

// Line 194: range 0000000013426C54-0000000013426C7E
void __cdecl data::BlossomRefreshExcelConfig::~BlossomRefreshExcelConfig(data::BlossomRefreshExcelConfig *const this)
{
  data::BlossomRefreshExcelConfig::~BlossomRefreshExcelConfig(this);
  operator delete(this, 0xA0uLL);
};

// Line 222: range 0000000013BEA854-0000000013BEAAE4
void __cdecl data::BlossomGroupsExcelConfig::BlossomGroupsExcelConfig(data::BlossomGroupsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BlossomGroupsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomGroupsExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->city_id, v3);
  }
  this->city_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->section_id, v3);
  }
  this->section_id = 0;
  std::vector<unsigned int>::vector(&this->refresh_type_vec);
  std::vector<unsigned int>::vector(&this->new_group_vec);
  std::vector<unsigned int>::vector(&this->decorate_group_vec);
  std::vector<unsigned int>::vector(&this->next_camp_id_vec);
  if ( *(char *)(((unsigned __int64)&this->is_safe >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_safe, v3, &this->is_safe);
  this->is_safe = 0;
  v4 = ((_BYTE)this + 121) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_initial_refresh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_initial_refresh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_initial_refresh, v4, v5);
  this->is_initial_refresh = 0;
  v6 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_progress, v6);
  }
  this->finish_progress = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_level, v6);
  }
  this->limit_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_unload_sec >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delay_unload_sec >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delay_unload_sec, (((_BYTE)this - 124) & 7u) + 3);
  }
  this->delay_unload_sec = 0;
};

// Line 222: range 00000000141A7646-00000000141A7B3C
void __cdecl data::BlossomGroupsExcelConfig::BlossomGroupsExcelConfig(
        data::BlossomGroupsExcelConfig *const this,
        const data::BlossomGroupsExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  uint32_t section_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_next_camp_id_vec; // rsi
  bool is_safe; // cl
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_initial_refresh; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  uint32_t finish_progress; // ecx
  char v20; // dl
  uint32_t limit_level; // ecx
  char v22; // al
  __int64 v23; // rsi
  uint32_t delay_unload_sec; // ecx
  char v25; // dl
  const data::BlossomGroupsExcelConfig *v26; // [rsp+0h] [rbp-20h]

  v26 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlossomGroupsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlossomGroupsExcelConfig = v2;
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
  v5 = (((_BYTE)v26 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->city_id);
  }
  city_id = v26->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v26->section_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->section_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->section_id);
  }
  section_id = v26->section_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->section_id, v5);
  }
  this->section_id = section_id;
  std::vector<unsigned int>::vector(&this->refresh_type_vec, &v26->refresh_type_vec);
  std::vector<unsigned int>::vector(&this->new_group_vec, &v26->new_group_vec);
  std::vector<unsigned int>::vector(&this->decorate_group_vec, &v26->decorate_group_vec);
  p_next_camp_id_vec = &v26->next_camp_id_vec;
  std::vector<unsigned int>::vector(&this->next_camp_id_vec, &v26->next_camp_id_vec);
  if ( *(char *)(((unsigned __int64)&v26->is_safe >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v26->is_safe, p_next_camp_id_vec, &v26->is_safe);
  is_safe = v26->is_safe;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_safe >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_next_camp_id_vec) = v12 != 0;
    __asan_report_store1(&this->is_safe, p_next_camp_id_vec, &this->is_safe);
  }
  this->is_safe = is_safe;
  v13 = ((_BYTE)v26 + 121) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v26->is_initial_refresh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v26->is_initial_refresh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v26->is_initial_refresh, v13, v14);
  is_initial_refresh = v26->is_initial_refresh;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_initial_refresh >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 121) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_initial_refresh, v13, v17);
  this->is_initial_refresh = is_initial_refresh;
  v18 = (((_BYTE)v26 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->finish_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->finish_progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->finish_progress);
  }
  finish_progress = v26->finish_progress;
  v20 = *(_BYTE *)(((unsigned __int64)&this->finish_progress >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->finish_progress, v18);
  }
  this->finish_progress = finish_progress;
  if ( *(_BYTE *)(((unsigned __int64)&v26->limit_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->limit_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->limit_level);
  }
  limit_level = v26->limit_level;
  v22 = *(_BYTE *)(((unsigned __int64)&this->limit_level >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->limit_level, v18);
  }
  this->limit_level = limit_level;
  v23 = (((_BYTE)v26 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->delay_unload_sec >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->delay_unload_sec >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->delay_unload_sec);
  }
  delay_unload_sec = v26->delay_unload_sec;
  v25 = *(_BYTE *)(((unsigned __int64)&this->delay_unload_sec >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->delay_unload_sec, v23);
  }
  this->delay_unload_sec = delay_unload_sec;
};

// Line 225: range 00000000142A5266-00000000142A5290
void __cdecl data::BlossomGroupsExcelConfig::~BlossomGroupsExcelConfig(data::BlossomGroupsExcelConfig *const this)
{
  data::BlossomGroupsExcelConfig::~BlossomGroupsExcelConfig(this);
  operator delete(this, 0x88uLL);
};

// Line 225: range 00000000142A51E4-00000000142A5265
void __cdecl data::BlossomGroupsExcelConfig::~BlossomGroupsExcelConfig(data::BlossomGroupsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomGroupsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomGroupsExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->next_camp_id_vec);
  std::vector<unsigned int>::~vector(&this->decorate_group_vec);
  std::vector<unsigned int>::~vector(&this->new_group_vec);
  std::vector<unsigned int>::~vector(&this->refresh_type_vec);
};

// Line 247: range 00000000141A7C7E-00000000141A7EB7
void __cdecl data::BlossomSectionOrderExcelConfig::BlossomSectionOrderExcelConfig(
        data::BlossomSectionOrderExcelConfig *const this,
        const data::BlossomSectionOrderExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t city_id; // ecx
  char v7; // dl
  uint32_t section_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t order; // ecx
  char v12; // dl
  const data::BlossomSectionOrderExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlossomSectionOrderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlossomSectionOrderExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->city_id);
  }
  city_id = v13->city_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->city_id, v5);
  }
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->section_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->section_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->section_id);
  }
  section_id = v13->section_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->section_id, v5);
  }
  this->section_id = section_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->order);
  }
  order = v13->order;
  v12 = *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->order, v10);
  }
  this->order = order;
};

// Line 250: range 00000000142A51B8-00000000142A51E2
void __cdecl data::BlossomSectionOrderExcelConfig::~BlossomSectionOrderExcelConfig(
        data::BlossomSectionOrderExcelConfig *const this)
{
  data::BlossomSectionOrderExcelConfig::~BlossomSectionOrderExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 250: range 00000000142A5176-00000000142A51B7
void __cdecl data::BlossomSectionOrderExcelConfig::~BlossomSectionOrderExcelConfig(
        data::BlossomSectionOrderExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomSectionOrderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomSectionOrderExcelConfig = v2;
};

// Line 264: range 00000000141A7FF8-00000000141A832B
void __cdecl data::BlossomChestExcelConfig::BlossomChestExcelConfig(
        data::BlossomChestExcelConfig *const this,
        const data::BlossomChestExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t chest_gadget_id; // ecx
  char v7; // dl
  uint32_t world_resin; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t resin; // ecx
  char v12; // dl
  data::BlossomRefreshType refresh_type; // ecx
  char v14; // al
  __int64 v15; // rsi
  data::BlossomChestShowType client_show_type; // ecx
  char v17; // dl
  const data::BlossomChestExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlossomChestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlossomChestExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->chest_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->chest_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->chest_gadget_id);
  }
  chest_gadget_id = v18->chest_gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->chest_gadget_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->chest_gadget_id, v5);
  }
  this->chest_gadget_id = chest_gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->world_resin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->world_resin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->world_resin);
  }
  world_resin = v18->world_resin;
  v9 = *(_BYTE *)(((unsigned __int64)&this->world_resin >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->world_resin, v5);
  }
  this->world_resin = world_resin;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->resin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->resin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->resin);
  }
  resin = v18->resin;
  v12 = *(_BYTE *)(((unsigned __int64)&this->resin >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->resin, v10);
  }
  this->resin = resin;
  if ( *(_BYTE *)(((unsigned __int64)&v18->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->refresh_type);
  }
  refresh_type = v18->refresh_type;
  v14 = *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->refresh_type, v10);
  }
  this->refresh_type = refresh_type;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->client_show_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->client_show_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->client_show_type);
  }
  client_show_type = v18->client_show_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->client_show_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->client_show_type, v15);
  }
  this->client_show_type = client_show_type;
};

// Line 267: range 00000000142A5108-00000000142A5149
void __cdecl data::BlossomChestExcelConfig::~BlossomChestExcelConfig(data::BlossomChestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomChestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomChestExcelConfig = v2;
};

// Line 267: range 00000000142A514A-00000000142A5174
void __cdecl data::BlossomChestExcelConfig::~BlossomChestExcelConfig(data::BlossomChestExcelConfig *const this)
{
  data::BlossomChestExcelConfig::~BlossomChestExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 283: range 0000000013BEAAE6-0000000013BEAB75
void __cdecl data::BlossomReviseExcelConfig::BlossomReviseExcelConfig(data::BlossomReviseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomReviseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomReviseExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->grade);
};

// Line 283: range 00000000141A846C-00000000141A8541
void __cdecl data::BlossomReviseExcelConfig::BlossomReviseExcelConfig(
        data::BlossomReviseExcelConfig *const this,
        const data::BlossomReviseExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::BlossomReviseExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlossomReviseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlossomReviseExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->grade, &v5->grade);
};

// Line 286: range 00000000142A50DC-00000000142A5106
void __cdecl data::BlossomReviseExcelConfig::~BlossomReviseExcelConfig(data::BlossomReviseExcelConfig *const this)
{
  data::BlossomReviseExcelConfig::~BlossomReviseExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 286: range 00000000142A508A-00000000142A50DB
void __cdecl data::BlossomReviseExcelConfig::~BlossomReviseExcelConfig(data::BlossomReviseExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomReviseExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomReviseExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->grade);
};

// Line 298: range 0000000013BEAB76-0000000013BEAC89
void __cdecl data::BlossomTalkExcelConfig::BlossomTalkExcelConfig(data::BlossomTalkExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BlossomTalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomTalkExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id, v3);
  }
  this->refresh_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  std::vector<unsigned int>::vector(&this->talk_id);
};

// Line 298: range 00000000141A8682-00000000141A8851
void __cdecl data::BlossomTalkExcelConfig::BlossomTalkExcelConfig(
        data::BlossomTalkExcelConfig *const this,
        const data::BlossomTalkExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t refresh_id; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  const data::BlossomTalkExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlossomTalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlossomTalkExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->refresh_id);
  }
  refresh_id = v10->refresh_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->refresh_id, v5);
  }
  this->refresh_id = refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->group_id);
  }
  group_id = v10->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  std::vector<unsigned int>::vector(&this->talk_id, &v10->talk_id);
};

// Line 301: range 00000000142A505E-00000000142A5088
void __cdecl data::BlossomTalkExcelConfig::~BlossomTalkExcelConfig(data::BlossomTalkExcelConfig *const this)
{
  data::BlossomTalkExcelConfig::~BlossomTalkExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 301: range 00000000142A500C-00000000142A505D
void __cdecl data::BlossomTalkExcelConfig::~BlossomTalkExcelConfig(data::BlossomTalkExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlossomTalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlossomTalkExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->talk_id);
};
