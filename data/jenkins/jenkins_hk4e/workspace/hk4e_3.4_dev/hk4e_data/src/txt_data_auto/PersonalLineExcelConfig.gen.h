// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/PersonalLineExcelConfig.gen.h

// Line 41: range 0000000014780D8E-0000000014780EB1
void __cdecl data::PersonalLineExcelConfig::PersonalLineExcelConfig(data::PersonalLineExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::PersonalLineExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PersonalLineExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->start_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_quest_id, v3);
  }
  this->start_quest_id = 0;
  std::vector<unsigned int>::vector(&this->pre_quest_id);
  std::string::basic_string(&this->start_time);
};

// Line 41: range 0000000014D671FC-0000000014D6740D
void __cdecl data::PersonalLineExcelConfig::PersonalLineExcelConfig(
        data::PersonalLineExcelConfig *const this,
        const data::PersonalLineExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t chapter_id; // ecx
  char v7; // dl
  uint32_t start_quest_id; // ecx
  char v9; // al
  const data::PersonalLineExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::PersonalLineExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PersonalLineExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->chapter_id);
  }
  chapter_id = v10->chapter_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->start_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->start_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->start_quest_id);
  }
  start_quest_id = v10->start_quest_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->start_quest_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->start_quest_id, v5);
  }
  this->start_quest_id = start_quest_id;
  std::vector<unsigned int>::vector(&this->pre_quest_id, &v10->pre_quest_id);
  std::string::basic_string(&this->start_time, &v10->start_time);
};

// Line 44: range 0000000014DE9BB8-0000000014DE9C19
void __cdecl data::PersonalLineExcelConfig::~PersonalLineExcelConfig(data::PersonalLineExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PersonalLineExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PersonalLineExcelConfig = v2;
  std::string::~string(&this->start_time);
  std::vector<unsigned int>::~vector(&this->pre_quest_id);
};

// Line 44: range 0000000014DE9C1A-0000000014DE9C44
void __cdecl data::PersonalLineExcelConfig::~PersonalLineExcelConfig(data::PersonalLineExcelConfig *const this)
{
  data::PersonalLineExcelConfig::~PersonalLineExcelConfig(this);
  operator delete(this, 0x50uLL);
};
