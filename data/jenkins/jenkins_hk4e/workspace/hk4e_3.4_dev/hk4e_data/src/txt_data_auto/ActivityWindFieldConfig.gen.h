// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityWindFieldConfig.gen.h

// Line 46: range 0000000013BDA866-0000000013BDA9BF
void __cdecl data::WindFieldStageExcelConfig::WindFieldStageExcelConfig(data::WindFieldStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::WindFieldStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WindFieldStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_index, v3);
  }
  this->day_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->gallery_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_list);
};

// Line 46: range 00000000133D0A0A-00000000133D0C5E
void __cdecl data::WindFieldStageExcelConfig::WindFieldStageExcelConfig(
        data::WindFieldStageExcelConfig *const this,
        const data::WindFieldStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_index; // ecx
  char v7; // dl
  uint32_t dungeon_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gallery_id; // ecx
  char v12; // dl
  const data::WindFieldStageExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WindFieldStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WindFieldStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stage_id);
  }
  stage_id = a2->stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->stage_id, a2);
  }
  this->stage_id = stage_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->day_index);
  }
  day_index = v13->day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->day_index, v5);
  }
  this->day_index = day_index;
  if ( *(_BYTE *)(((unsigned __int64)&v13->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->dungeon_id);
  }
  dungeon_id = v13->dungeon_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->gallery_id);
  }
  gallery_id = v13->gallery_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gallery_id, v10);
  }
  this->gallery_id = gallery_id;
  std::vector<unsigned int>::vector(&this->watcher_list, &v13->watcher_list);
};

// Line 49: range 00000000132F7E8A-00000000132F7EDB
void __cdecl data::WindFieldStageExcelConfig::~WindFieldStageExcelConfig(data::WindFieldStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WindFieldStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WindFieldStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_list);
};

// Line 49: range 00000000132F7EDC-00000000132F7F06
void __cdecl data::WindFieldStageExcelConfig::~WindFieldStageExcelConfig(data::WindFieldStageExcelConfig *const this)
{
  data::WindFieldStageExcelConfig::~WindFieldStageExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 64: range 0000000014196DE2-0000000014196F21
void __cdecl data::WindFieldShowChallengeExcelConfig::WindFieldShowChallengeExcelConfig(
        data::WindFieldShowChallengeExcelConfig *const this,
        const data::WindFieldShowChallengeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t show_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t time_limit; // ecx
  char v7; // dl
  const data::WindFieldShowChallengeExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::WindFieldShowChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WindFieldShowChallengeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->show_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->show_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->show_id);
  }
  show_id = a2->show_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->show_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->show_id, a2);
  }
  this->show_id = show_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->time_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->time_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->time_limit);
  }
  time_limit = v8->time_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->time_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->time_limit, v5);
  }
  this->time_limit = time_limit;
};

// Line 67: range 00000000142A2A54-00000000142A2A95
void __cdecl data::WindFieldShowChallengeExcelConfig::~WindFieldShowChallengeExcelConfig(
        data::WindFieldShowChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::WindFieldShowChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WindFieldShowChallengeExcelConfig = v2;
};

// Line 67: range 00000000142A2A96-00000000142A2AC0
void __cdecl data::WindFieldShowChallengeExcelConfig::~WindFieldShowChallengeExcelConfig(
        data::WindFieldShowChallengeExcelConfig *const this)
{
  data::WindFieldShowChallengeExcelConfig::~WindFieldShowChallengeExcelConfig(this);
  operator delete(this, 0x10uLL);
};
