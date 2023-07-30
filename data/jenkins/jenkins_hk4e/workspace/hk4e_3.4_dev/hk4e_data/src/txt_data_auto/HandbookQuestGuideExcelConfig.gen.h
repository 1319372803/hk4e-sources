// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/HandbookQuestGuideExcelConfig.gen.h

// Line 18: range 0000000014D39D0E-0000000014D39FBC
void __cdecl data::HandbookQuestGuideExcelConfig::HandbookQuestGuideExcelConfig(
        data::HandbookQuestGuideExcelConfig *const this,
        const data::HandbookQuestGuideExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t guide_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t type_id; // ecx
  char v7; // dl
  uint32_t main_quest_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t chapter_id; // ecx
  char v12; // dl
  uint32_t order; // ecx
  char v14; // al
  const data::HandbookQuestGuideExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HandbookQuestGuideExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HandbookQuestGuideExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->guide_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->guide_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->guide_id);
  }
  guide_id = a2->guide_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->guide_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->guide_id, a2);
  }
  this->guide_id = guide_id;
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->type_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->type_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->type_id);
  }
  type_id = v15->type_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type_id, v5);
  }
  this->type_id = type_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->main_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->main_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->main_quest_id);
  }
  main_quest_id = v15->main_quest_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->main_quest_id, v5);
  }
  this->main_quest_id = main_quest_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->chapter_id);
  }
  chapter_id = v15->chapter_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->chapter_id, v10);
  }
  this->chapter_id = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&v15->order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->order);
  }
  order = v15->order;
  v14 = *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->order, v10);
  }
  this->order = order;
};

// Line 21: range 0000000014DEA1FC-0000000014DEA23D
void __cdecl data::HandbookQuestGuideExcelConfig::~HandbookQuestGuideExcelConfig(
        data::HandbookQuestGuideExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HandbookQuestGuideExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HandbookQuestGuideExcelConfig = v2;
};

// Line 21: range 0000000014DEA23E-0000000014DEA268
void __cdecl data::HandbookQuestGuideExcelConfig::~HandbookQuestGuideExcelConfig(
        data::HandbookQuestGuideExcelConfig *const this)
{
  data::HandbookQuestGuideExcelConfig::~HandbookQuestGuideExcelConfig(this);
  operator delete(this, 0x20uLL);
};
