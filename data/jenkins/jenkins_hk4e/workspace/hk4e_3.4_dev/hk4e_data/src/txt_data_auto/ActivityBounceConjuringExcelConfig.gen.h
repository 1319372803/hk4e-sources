// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityBounceConjuringExcelConfig.gen.h

// Line 17: range 0000000013380440-00000000133805F4
void __cdecl data::BounceConjuringPreviewExcelConfig::BounceConjuringPreviewExcelConfig(
        data::BounceConjuringPreviewExcelConfig *const this,
        const data::BounceConjuringPreviewExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t activity_stay_time; // ecx
  char v9; // al
  const data::BounceConjuringPreviewExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BounceConjuringPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BounceConjuringPreviewExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->activity_id);
  }
  activity_id = v10->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->activity_stay_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->activity_stay_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->activity_stay_time);
  }
  activity_stay_time = v10->activity_stay_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->activity_stay_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->activity_stay_time, v5);
  }
  this->activity_stay_time = activity_stay_time;
};

// Line 20: range 000000001342454A-000000001342458B
void __cdecl data::BounceConjuringPreviewExcelConfig::~BounceConjuringPreviewExcelConfig(
        data::BounceConjuringPreviewExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BounceConjuringPreviewExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BounceConjuringPreviewExcelConfig = v2;
};

// Line 20: range 000000001342458C-00000000134245B6
void __cdecl data::BounceConjuringPreviewExcelConfig::~BounceConjuringPreviewExcelConfig(
        data::BounceConjuringPreviewExcelConfig *const this)
{
  data::BounceConjuringPreviewExcelConfig::~BounceConjuringPreviewExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 33: range 0000000012EB30A8-0000000012EB323F
void __cdecl data::BounceConjuringChapterExcelConfig::BounceConjuringChapterExcelConfig(
        data::BounceConjuringChapterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BounceConjuringChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BounceConjuringChapterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chapter_id, v3);
  }
  this->chapter_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->draft_id, v4);
  }
  this->draft_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
};

// Line 33: range 00000000133806AC-0000000013380975
void __cdecl data::BounceConjuringChapterExcelConfig::BounceConjuringChapterExcelConfig(
        data::BounceConjuringChapterExcelConfig *const this,
        const data::BounceConjuringChapterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t chapter_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gallery_id; // ecx
  char v12; // dl
  uint32_t draft_id; // ecx
  char v14; // al
  const data::BounceConjuringChapterExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BounceConjuringChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BounceConjuringChapterExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v15->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->chapter_id);
  }
  chapter_id = v15->chapter_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->open_day);
  }
  open_day = v15->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->gallery_id);
  }
  gallery_id = v15->gallery_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gallery_id, v10);
  }
  this->gallery_id = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->draft_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->draft_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->draft_id);
  }
  draft_id = v15->draft_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->draft_id, v10);
  }
  this->draft_id = draft_id;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v15->watcher_id_list);
};

// Line 36: range 00000000134244CC-000000001342451D
void __cdecl data::BounceConjuringChapterExcelConfig::~BounceConjuringChapterExcelConfig(
        data::BounceConjuringChapterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BounceConjuringChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BounceConjuringChapterExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
};

// Line 36: range 000000001342451E-0000000013424548
void __cdecl data::BounceConjuringChapterExcelConfig::~BounceConjuringChapterExcelConfig(
        data::BounceConjuringChapterExcelConfig *const this)
{
  data::BounceConjuringChapterExcelConfig::~BounceConjuringChapterExcelConfig(this);
  operator delete(this, 0x38uLL);
};
