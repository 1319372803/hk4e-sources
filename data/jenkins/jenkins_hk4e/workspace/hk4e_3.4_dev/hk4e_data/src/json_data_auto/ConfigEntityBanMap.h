// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigEntityBanMap.h

// Line 19: range 000000001213B8D0-000000001213B9A5
void __cdecl data::ConfigEntityBlackGrp::ConfigEntityBlackGrp(data::ConfigEntityBlackGrp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->is_black = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_type, v2);
  }
  this->entity_type = None_10;
  std::vector<unsigned int>::vector(&this->entity_ids);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 00000000127477D6-000000001274796A
void __cdecl data::ConfigEntityBlackGrp::ConfigEntityBlackGrp(
        data::ConfigEntityBlackGrp *const this,
        const data::ConfigEntityBlackGrp *a2)
{
  bool is_black; // cl
  char v3; // al
  __int64 v4; // rsi
  data::EntityType entity_type; // ecx
  char v6; // dl
  data::UInt32List *p_entity_ids; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  const data::ConfigEntityBlackGrp *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  is_black = a2->is_black;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->is_black = is_black;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->entity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->entity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->entity_type);
  }
  entity_type = v10->entity_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->entity_type, v4);
  }
  this->entity_type = entity_type;
  p_entity_ids = &v10->entity_ids;
  std::vector<unsigned int>::vector(&this->entity_ids, &v10->entity_ids);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_entity_ids, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_entity_ids) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_entity_ids, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 00000000122FD79A-00000000122FD92E
void __cdecl data::ConfigEntityBlackGrp::ConfigEntityBlackGrp(
        data::ConfigEntityBlackGrp *const this,
        data::ConfigEntityBlackGrp *a2)
{
  bool is_black; // cl
  char v3; // al
  __int64 v4; // rsi
  data::EntityType entity_type; // ecx
  char v6; // dl
  data::UInt32List *p_entity_ids; // rsi
  bool is_json_loaded; // cl
  char v9; // al
  data::ConfigEntityBlackGrp *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  is_black = a2->is_black;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->is_black = is_black;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->entity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->entity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->entity_type);
  }
  entity_type = v10->entity_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->entity_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->entity_type, v4);
  }
  this->entity_type = entity_type;
  p_entity_ids = &v10->entity_ids;
  std::vector<unsigned int>::vector(&this->entity_ids, &v10->entity_ids);
  if ( *(char *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v10->is_json_loaded, p_entity_ids, &v10->is_json_loaded);
  is_json_loaded = v10->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_entity_ids) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_entity_ids, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 000000001213B9A6-000000001213B9C4
void __cdecl data::ConfigEntityBlackGrp::~ConfigEntityBlackGrp(data::ConfigEntityBlackGrp *const this)
{
  std::vector<unsigned int>::~vector(&this->entity_ids);
};
