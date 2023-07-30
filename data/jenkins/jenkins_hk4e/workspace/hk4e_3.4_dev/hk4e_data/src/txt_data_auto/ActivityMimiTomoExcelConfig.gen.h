// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityMimiTomoExcelConfig.gen.h

// Line 17: range 0000000012ECD2DE-0000000012ECD447
void __cdecl data::FindHilichurlExcelConfig::FindHilichurlExcelConfig(data::FindHilichurlExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FindHilichurlExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FindHilichurlExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_quest_id, v3);
  }
  this->guide_quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->end_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->end_quest_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->end_quest_id = 0;
  std::vector<unsigned int>::vector(&this->assignment_id_list);
  std::vector<unsigned int>::vector(&this->hili_wei_id_list);
};

// Line 17: range 00000000133C123A-00000000133C14D0
void __cdecl data::FindHilichurlExcelConfig::FindHilichurlExcelConfig(
        data::FindHilichurlExcelConfig *const this,
        const data::FindHilichurlExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t guide_quest_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t end_quest_id; // ecx
  char v12; // dl
  const data::FindHilichurlExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FindHilichurlExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FindHilichurlExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->activity_id);
  }
  activity_id = v13->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->guide_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->guide_quest_id);
  }
  guide_quest_id = v13->guide_quest_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->guide_quest_id, v5);
  }
  this->guide_quest_id = guide_quest_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->end_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->end_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->end_quest_id);
  }
  end_quest_id = v13->end_quest_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->end_quest_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->end_quest_id, v10);
  }
  this->end_quest_id = end_quest_id;
  std::vector<unsigned int>::vector(&this->assignment_id_list, &v13->assignment_id_list);
  std::vector<unsigned int>::vector(&this->hili_wei_id_list, &v13->hili_wei_id_list);
};

// Line 20: range 00000000134247A0-0000000013424801
void __cdecl data::FindHilichurlExcelConfig::~FindHilichurlExcelConfig(data::FindHilichurlExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FindHilichurlExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FindHilichurlExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->hili_wei_id_list);
  std::vector<unsigned int>::~vector(&this->assignment_id_list);
};

// Line 20: range 0000000013424802-000000001342482C
void __cdecl data::FindHilichurlExcelConfig::~FindHilichurlExcelConfig(data::FindHilichurlExcelConfig *const this)
{
  data::FindHilichurlExcelConfig::~FindHilichurlExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 36: range 0000000012EBF964-0000000012EBFB6D
data::FindHilichurlAssignmentExcelConfig *__cdecl data::FindHilichurlAssignmentExcelConfig::operator=(
        data::FindHilichurlAssignmentExcelConfig *const this,
        const data::FindHilichurlAssignmentExcelConfig *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t index; // ecx
  char v6; // dl
  uint32_t day_index; // ecx
  char v8; // al
  __int64 v9; // rsi
  uint32_t quest_id; // ecx
  char v11; // dl
  const data::FindHilichurlAssignmentExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->index);
  }
  index = v13->index;
  v6 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->index, v4);
  }
  this->index = index;
  if ( *(_BYTE *)(((unsigned __int64)&v13->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->day_index);
  }
  day_index = v13->day_index;
  v8 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->day_index, v4);
  }
  this->day_index = day_index;
  v9 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->quest_id);
  }
  quest_id = v13->quest_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->quest_id, v9);
  }
  this->quest_id = quest_id;
  return this;
};

// Line 36: range 0000000012ECD448-0000000012ECD591
void __cdecl data::FindHilichurlAssignmentExcelConfig::FindHilichurlAssignmentExcelConfig(
        data::FindHilichurlAssignmentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::FindHilichurlAssignmentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FindHilichurlAssignmentExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->index, v3);
  }
  this->index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index, v3);
  }
  this->day_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->quest_id = 0;
};

// Line 36: range 00000000133C1612-00000000133C184B
void __cdecl data::FindHilichurlAssignmentExcelConfig::FindHilichurlAssignmentExcelConfig(
        data::FindHilichurlAssignmentExcelConfig *const this,
        const data::FindHilichurlAssignmentExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t index; // ecx
  char v7; // dl
  uint32_t day_index; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t quest_id; // ecx
  char v12; // dl
  const data::FindHilichurlAssignmentExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FindHilichurlAssignmentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FindHilichurlAssignmentExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->index);
  }
  index = v13->index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->index, v5);
  }
  this->index = index;
  if ( *(_BYTE *)(((unsigned __int64)&v13->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->day_index);
  }
  day_index = v13->day_index;
  v9 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->day_index, v5);
  }
  this->day_index = day_index;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->quest_id);
  }
  quest_id = v13->quest_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->quest_id, v10);
  }
  this->quest_id = quest_id;
};

// Line 39: range 0000000013424732-0000000013424773
void __cdecl data::FindHilichurlAssignmentExcelConfig::~FindHilichurlAssignmentExcelConfig(
        data::FindHilichurlAssignmentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FindHilichurlAssignmentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FindHilichurlAssignmentExcelConfig = v2;
};

// Line 39: range 0000000013424774-000000001342479E
void __cdecl data::FindHilichurlAssignmentExcelConfig::~FindHilichurlAssignmentExcelConfig(
        data::FindHilichurlAssignmentExcelConfig *const this)
{
  data::FindHilichurlAssignmentExcelConfig::~FindHilichurlAssignmentExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 53: range 00000000133C198C-00000000133C1BC5
void __cdecl data::FindHilichurlHiliWeiExcelConfig::FindHilichurlHiliWeiExcelConfig(
        data::FindHilichurlHiliWeiExcelConfig *const this,
        const data::FindHilichurlHiliWeiExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_index; // ecx
  char v7; // dl
  uint32_t group_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t watcher_id; // ecx
  char v12; // dl
  const data::FindHilichurlHiliWeiExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FindHilichurlHiliWeiExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FindHilichurlHiliWeiExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->group_id);
  }
  group_id = v13->group_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
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

// Line 56: range 00000000134246C4-0000000013424705
void __cdecl data::FindHilichurlHiliWeiExcelConfig::~FindHilichurlHiliWeiExcelConfig(
        data::FindHilichurlHiliWeiExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FindHilichurlHiliWeiExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FindHilichurlHiliWeiExcelConfig = v2;
};

// Line 56: range 0000000013424706-0000000013424730
void __cdecl data::FindHilichurlHiliWeiExcelConfig::~FindHilichurlHiliWeiExcelConfig(
        data::FindHilichurlHiliWeiExcelConfig *const this)
{
  data::FindHilichurlHiliWeiExcelConfig::~FindHilichurlHiliWeiExcelConfig(this);
  operator delete(this, 0x18uLL);
};
