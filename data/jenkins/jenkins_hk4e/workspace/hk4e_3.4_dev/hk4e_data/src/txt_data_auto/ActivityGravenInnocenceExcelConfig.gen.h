// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityGravenInnocenceExcelConfig.gen.h

// Line 17: range 0000000012EC5FB4-0000000012EC60C7
void __cdecl data::GravenInnocenceExcelConfig::GravenInnocenceExcelConfig(data::GravenInnocenceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v1);
  }
  this->activity_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->photo_succ_reminder_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->photo_succ_reminder_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->photo_succ_reminder_id, v3);
  }
  this->photo_succ_reminder_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->photo_fail_reminder_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->photo_fail_reminder_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->photo_fail_reminder_id, v3);
  }
  this->photo_fail_reminder_id = 0;
  std::string::basic_string(&this->photo_group_var_name);
};

// Line 17: range 00000000133B5256-00000000133B5425
void __cdecl data::GravenInnocenceExcelConfig::GravenInnocenceExcelConfig(
        data::GravenInnocenceExcelConfig *const this,
        const data::GravenInnocenceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t photo_succ_reminder_id; // ecx
  char v7; // dl
  uint32_t photo_fail_reminder_id; // ecx
  char v9; // al
  const data::GravenInnocenceExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GravenInnocenceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->photo_succ_reminder_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->photo_succ_reminder_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->photo_succ_reminder_id);
  }
  photo_succ_reminder_id = v10->photo_succ_reminder_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->photo_succ_reminder_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->photo_succ_reminder_id, v5);
  }
  this->photo_succ_reminder_id = photo_succ_reminder_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->photo_fail_reminder_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->photo_fail_reminder_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->photo_fail_reminder_id);
  }
  photo_fail_reminder_id = v10->photo_fail_reminder_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->photo_fail_reminder_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->photo_fail_reminder_id, v5);
  }
  this->photo_fail_reminder_id = photo_fail_reminder_id;
  std::string::basic_string(&this->photo_group_var_name, &v10->photo_group_var_name);
};

// Line 20: range 00000000134222C2-00000000134222EC
void __cdecl data::GravenInnocenceExcelConfig::~GravenInnocenceExcelConfig(
        data::GravenInnocenceExcelConfig *const this)
{
  data::GravenInnocenceExcelConfig::~GravenInnocenceExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 20: range 0000000013422270-00000000134222C1
void __cdecl data::GravenInnocenceExcelConfig::~GravenInnocenceExcelConfig(
        data::GravenInnocenceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceExcelConfig = v2;
  std::string::~string(&this->photo_group_var_name);
};

// Line 34: range 0000000012EC60C8-0000000012EC619D
void __cdecl data::GravenInnocenceCampStageExcelConfig::GravenInnocenceCampStageExcelConfig(
        data::GravenInnocenceCampStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceCampStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceCampStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->level_id_list);
};

// Line 34: range 00000000133B5566-00000000133B56C0
void __cdecl data::GravenInnocenceCampStageExcelConfig::GravenInnocenceCampStageExcelConfig(
        data::GravenInnocenceCampStageExcelConfig *const this,
        const data::GravenInnocenceCampStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  const data::GravenInnocenceCampStageExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceCampStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GravenInnocenceCampStageExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->open_day);
  }
  open_day = v8->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  std::vector<unsigned int>::vector(&this->level_id_list, &v8->level_id_list);
};

// Line 37: range 0000000013422244-000000001342226E
void __cdecl data::GravenInnocenceCampStageExcelConfig::~GravenInnocenceCampStageExcelConfig(
        data::GravenInnocenceCampStageExcelConfig *const this)
{
  data::GravenInnocenceCampStageExcelConfig::~GravenInnocenceCampStageExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 37: range 00000000134221F2-0000000013422243
void __cdecl data::GravenInnocenceCampStageExcelConfig::~GravenInnocenceCampStageExcelConfig(
        data::GravenInnocenceCampStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceCampStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceCampStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->level_id_list);
};

// Line 50: range 00000000133B5802-00000000133B5A3B
void __cdecl data::GravenInnocenceCampLevelExcelConfig::GravenInnocenceCampLevelExcelConfig(
        data::GravenInnocenceCampLevelExcelConfig *const this,
        const data::GravenInnocenceCampLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_link_id; // ecx
  char v7; // dl
  uint32_t challenge_index; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t watcher_id; // ecx
  char v12; // dl
  const data::GravenInnocenceCampLevelExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceCampLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GravenInnocenceCampLevelExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->group_link_id);
  }
  group_link_id = v13->group_link_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_link_id, v5);
  }
  this->group_link_id = group_link_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->challenge_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->challenge_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->challenge_index);
  }
  challenge_index = v13->challenge_index;
  v9 = *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->challenge_index, v5);
  }
  this->challenge_index = challenge_index;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->watcher_id);
  }
  watcher_id = v13->watcher_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->watcher_id, v10);
  }
  this->watcher_id = watcher_id;
};

// Line 53: range 00000000134221C6-00000000134221F0
void __cdecl data::GravenInnocenceCampLevelExcelConfig::~GravenInnocenceCampLevelExcelConfig(
        data::GravenInnocenceCampLevelExcelConfig *const this)
{
  data::GravenInnocenceCampLevelExcelConfig::~GravenInnocenceCampLevelExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 53: range 0000000013422184-00000000134221C5
void __cdecl data::GravenInnocenceCampLevelExcelConfig::~GravenInnocenceCampLevelExcelConfig(
        data::GravenInnocenceCampLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceCampLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceCampLevelExcelConfig = v2;
};

// Line 67: range 0000000012EC619E-0000000012EC62B1
void __cdecl data::GravenInnocencePhotoStageExcelConfig::GravenInnocencePhotoStageExcelConfig(
        data::GravenInnocencePhotoStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocencePhotoStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocencePhotoStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->object_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->object_limit_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->object_limit_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->object_limit_num, v3);
  }
  this->object_limit_num = 0;
};

// Line 67: range 00000000133B5B7C-00000000133B5D4B
void __cdecl data::GravenInnocencePhotoStageExcelConfig::GravenInnocencePhotoStageExcelConfig(
        data::GravenInnocencePhotoStageExcelConfig *const this,
        const data::GravenInnocencePhotoStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_object_id_list; // rsi
  uint32_t object_limit_num; // ecx
  char v10; // al
  const data::GravenInnocencePhotoStageExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GravenInnocencePhotoStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GravenInnocencePhotoStageExcelConfig = v2;
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
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->open_day);
  }
  open_day = v11->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  p_object_id_list = &v11->object_id_list;
  std::vector<unsigned int>::vector(&this->object_id_list, &v11->object_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->object_limit_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->object_limit_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->object_limit_num);
  }
  object_limit_num = v11->object_limit_num;
  v10 = *(_BYTE *)(((unsigned __int64)&this->object_limit_num >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_object_id_list) = v10 != 0;
    __asan_report_store4(&this->object_limit_num, p_object_id_list);
  }
  this->object_limit_num = object_limit_num;
};

// Line 70: range 0000000013422106-0000000013422157
void __cdecl data::GravenInnocencePhotoStageExcelConfig::~GravenInnocencePhotoStageExcelConfig(
        data::GravenInnocencePhotoStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocencePhotoStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocencePhotoStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->object_id_list);
};

// Line 70: range 0000000013422158-0000000013422182
void __cdecl data::GravenInnocencePhotoStageExcelConfig::~GravenInnocencePhotoStageExcelConfig(
        data::GravenInnocencePhotoStageExcelConfig *const this)
{
  data::GravenInnocencePhotoStageExcelConfig::~GravenInnocencePhotoStageExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 84: range 00000000133B5E8C-00000000133B5FCB
void __cdecl data::GravenInnocenceObjectDataExcelConfig::GravenInnocenceObjectDataExcelConfig(
        data::GravenInnocenceObjectDataExcelConfig *const this,
        const data::GravenInnocenceObjectDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_bundle_id; // ecx
  char v7; // dl
  const data::GravenInnocenceObjectDataExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceObjectDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GravenInnocenceObjectDataExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->group_bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->group_bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->group_bundle_id);
  }
  group_bundle_id = v8->group_bundle_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_bundle_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_bundle_id, v5);
  }
  this->group_bundle_id = group_bundle_id;
};

// Line 87: range 00000000134220DA-0000000013422104
void __cdecl data::GravenInnocenceObjectDataExcelConfig::~GravenInnocenceObjectDataExcelConfig(
        data::GravenInnocenceObjectDataExcelConfig *const this)
{
  data::GravenInnocenceObjectDataExcelConfig::~GravenInnocenceObjectDataExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 87: range 0000000013422098-00000000134220D9
void __cdecl data::GravenInnocenceObjectDataExcelConfig::~GravenInnocenceObjectDataExcelConfig(
        data::GravenInnocenceObjectDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceObjectDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceObjectDataExcelConfig = v2;
};

// Line 99: range 0000000012EC62B2-0000000012EC6493
void __cdecl data::GravenInnocenceRaceLevelExcelConfig::GravenInnocenceRaceLevelExcelConfig(
        data::GravenInnocenceRaceLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceRaceLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceRaceLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_link_id, v4);
  }
  this->group_link_id = 0;
  std::vector<unsigned int>::vector(&this->score_watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_factor, v4);
  }
  this->time_factor = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gold_factor, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->gold_factor = 0.0;
};

// Line 99: range 00000000133B610C-00000000133B6460
void __cdecl data::GravenInnocenceRaceLevelExcelConfig::GravenInnocenceRaceLevelExcelConfig(
        data::GravenInnocenceRaceLevelExcelConfig *const this,
        const data::GravenInnocenceRaceLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  uint32_t gallery_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t group_link_id; // ecx
  char v12; // dl
  float time_factor; // xmm0_4
  float gold_factor; // xmm0_4
  const data::GravenInnocenceRaceLevelExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceRaceLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GravenInnocenceRaceLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->open_day);
  }
  open_day = v15->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  if ( *(_BYTE *)(((unsigned __int64)&v15->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->gallery_id);
  }
  gallery_id = v15->gallery_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->group_link_id);
  }
  group_link_id = v15->group_link_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->group_link_id, v10);
  }
  this->group_link_id = group_link_id;
  std::vector<unsigned int>::vector(&this->score_watcher_list, &v15->score_watcher_list);
  if ( *(_BYTE *)(((unsigned __int64)&v15->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->time_factor);
  }
  time_factor = v15->time_factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_factor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_factor, &v15->score_watcher_list);
  }
  this->time_factor = time_factor;
  if ( *(_BYTE *)(((unsigned __int64)&v15->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->gold_factor);
  }
  gold_factor = v15->gold_factor;
  if ( *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gold_factor >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gold_factor, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->gold_factor = gold_factor;
};

// Line 102: range 000000001342201A-000000001342206B
void __cdecl data::GravenInnocenceRaceLevelExcelConfig::~GravenInnocenceRaceLevelExcelConfig(
        data::GravenInnocenceRaceLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceRaceLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceRaceLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->score_watcher_list);
};

// Line 102: range 000000001342206C-0000000013422096
void __cdecl data::GravenInnocenceRaceLevelExcelConfig::~GravenInnocenceRaceLevelExcelConfig(
        data::GravenInnocenceRaceLevelExcelConfig *const this)
{
  data::GravenInnocenceRaceLevelExcelConfig::~GravenInnocenceRaceLevelExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 119: range 0000000012EC6494-0000000012EC6523
void __cdecl data::GravenInnocenceCarveOverallExcelConfig::GravenInnocenceCarveOverallExcelConfig(
        data::GravenInnocenceCarveOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceCarveOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceCarveOverallExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->group_id_list);
};

// Line 119: range 00000000133B65A2-00000000133B6677
void __cdecl data::GravenInnocenceCarveOverallExcelConfig::GravenInnocenceCarveOverallExcelConfig(
        data::GravenInnocenceCarveOverallExcelConfig *const this,
        const data::GravenInnocenceCarveOverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::GravenInnocenceCarveOverallExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceCarveOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GravenInnocenceCarveOverallExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->group_id_list, &v5->group_id_list);
};

// Line 122: range 0000000013421FEE-0000000013422018
void __cdecl data::GravenInnocenceCarveOverallExcelConfig::~GravenInnocenceCarveOverallExcelConfig(
        data::GravenInnocenceCarveOverallExcelConfig *const this)
{
  data::GravenInnocenceCarveOverallExcelConfig::~GravenInnocenceCarveOverallExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 122: range 0000000013421F9C-0000000013421FED
void __cdecl data::GravenInnocenceCarveOverallExcelConfig::~GravenInnocenceCarveOverallExcelConfig(
        data::GravenInnocenceCarveOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceCarveOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceCarveOverallExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->group_id_list);
};

// Line 134: range 00000000133B67B8-00000000133B696C
void __cdecl data::GravenInnocenceCarveStageExcelConfig::GravenInnocenceCarveStageExcelConfig(
        data::GravenInnocenceCarveStageExcelConfig *const this,
        const data::GravenInnocenceCarveStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t carve_add_count; // ecx
  char v7; // dl
  uint32_t watcher_id; // ecx
  char v9; // al
  const data::GravenInnocenceCarveStageExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceCarveStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GravenInnocenceCarveStageExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->carve_add_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->carve_add_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->carve_add_count);
  }
  carve_add_count = v10->carve_add_count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->carve_add_count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->carve_add_count, v5);
  }
  this->carve_add_count = carve_add_count;
  if ( *(_BYTE *)(((unsigned __int64)&v10->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->watcher_id);
  }
  watcher_id = v10->watcher_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->watcher_id, v5);
  }
  this->watcher_id = watcher_id;
};

// Line 137: range 0000000013421F2E-0000000013421F6F
void __cdecl data::GravenInnocenceCarveStageExcelConfig::~GravenInnocenceCarveStageExcelConfig(
        data::GravenInnocenceCarveStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GravenInnocenceCarveStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GravenInnocenceCarveStageExcelConfig = v2;
};

// Line 137: range 0000000013421F70-0000000013421F9A
void __cdecl data::GravenInnocenceCarveStageExcelConfig::~GravenInnocenceCarveStageExcelConfig(
        data::GravenInnocenceCarveStageExcelConfig *const this)
{
  data::GravenInnocenceCarveStageExcelConfig::~GravenInnocenceCarveStageExcelConfig(this);
  operator delete(this, 0x18uLL);
};
