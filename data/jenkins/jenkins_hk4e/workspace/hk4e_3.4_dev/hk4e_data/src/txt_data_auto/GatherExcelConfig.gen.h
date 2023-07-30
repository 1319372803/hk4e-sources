// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GatherExcelConfig.gen.h

// Line 96: range 0000000014C966EA-0000000014C967AF
void __cdecl data::BlockLimit::BlockLimit(data::BlockLimit *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlockLimit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlockLimit = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->block_id, v1);
  }
  this->block_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->count, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->count = 0;
};

// Line 96: range 0000000014D8F39E-0000000014D8F4DD
void __cdecl data::BlockLimit::BlockLimit(data::BlockLimit *const this, const data::BlockLimit *a2)
{
  int (**v2)(...); // rdx
  uint32_t block_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t count; // ecx
  char v7; // dl
  const data::BlockLimit *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BlockLimit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BlockLimit = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->block_id);
  }
  block_id = a2->block_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->block_id, a2);
  }
  this->block_id = block_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->count);
  }
  count = v8->count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->count, v5);
  }
  this->count = count;
};

// Line 99: range 0000000014BC778C-0000000014BC77CD
void __cdecl data::BlockLimit::~BlockLimit(data::BlockLimit *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BlockLimit + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BlockLimit = v2;
};

// Line 99: range 0000000014BC77CE-0000000014BC77F8
void __cdecl data::BlockLimit::~BlockLimit(data::BlockLimit *const this)
{
  data::BlockLimit::~BlockLimit(this);
  operator delete(this, 0x10uLL);
};

// Line 109: range 0000000014C9690C-0000000014C96B69
void __cdecl data::PointInfo::PointInfo(data::PointInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::PointInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PointInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_id, v1);
  }
  this->point_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->point_type, v3);
  }
  this->point_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->offset_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offset_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offset_x, v3);
  }
  this->offset_x = 0.0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->offset_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->offset_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->offset_y, v4);
  }
  this->offset_y = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->offset_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offset_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offset_z, v4);
  }
  this->offset_z = 0.0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rot_x, v5);
  }
  this->rot_x = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rot_y, v5);
  }
  this->rot_y = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rot_z, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->rot_z = 0.0;
};

// Line 109: range 0000000014DBF15E-0000000014DBF59D
void __cdecl data::PointInfo::PointInfo(data::PointInfo *const this, const data::PointInfo *a2)
{
  int (**v2)(...); // rdx
  uint32_t point_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t point_type; // ecx
  char v7; // dl
  float offset_x; // xmm0_4
  float offset_y; // xmm0_4
  __int64 v10; // rsi
  float offset_z; // xmm0_4
  float rot_x; // xmm0_4
  __int64 v13; // rsi
  float rot_y; // xmm0_4
  float rot_z; // xmm0_4
  const data::PointInfo *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::PointInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_PointInfo = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->point_id);
  }
  point_id = a2->point_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->point_id, a2);
  }
  this->point_id = point_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->point_type);
  }
  point_type = v16->point_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->point_type, v5);
  this->point_type = point_type;
  if ( *(_BYTE *)(((unsigned __int64)&v16->offset_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->offset_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->offset_x);
  }
  offset_x = v16->offset_x;
  if ( *(_BYTE *)(((unsigned __int64)&this->offset_x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offset_x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offset_x, v5);
  }
  this->offset_x = offset_x;
  if ( *(_BYTE *)(((unsigned __int64)&v16->offset_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->offset_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->offset_y);
  }
  offset_y = v16->offset_y;
  v10 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->offset_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->offset_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->offset_y, v10);
  }
  this->offset_y = offset_y;
  if ( *(_BYTE *)(((unsigned __int64)&v16->offset_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->offset_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->offset_z);
  }
  offset_z = v16->offset_z;
  if ( *(_BYTE *)(((unsigned __int64)&this->offset_z >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offset_z >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offset_z, v10);
  }
  this->offset_z = offset_z;
  if ( *(_BYTE *)(((unsigned __int64)&v16->rot_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->rot_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->rot_x);
  }
  rot_x = v16->rot_x;
  v13 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rot_x, v13);
  }
  this->rot_x = rot_x;
  if ( *(_BYTE *)(((unsigned __int64)&v16->rot_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->rot_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->rot_y);
  }
  rot_y = v16->rot_y;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_y >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_y >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rot_y, v13);
  }
  this->rot_y = rot_y;
  if ( *(_BYTE *)(((unsigned __int64)&v16->rot_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->rot_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->rot_z);
  }
  rot_z = v16->rot_z;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_z >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rot_z, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->rot_z = rot_z;
};

// Line 112: range 0000000014BC7E28-0000000014BC7E69
void __cdecl data::PointInfo::~PointInfo(data::PointInfo *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::PointInfo + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_PointInfo = v2;
};

// Line 112: range 0000000014BC7E6A-0000000014BC7E94
void __cdecl data::PointInfo::~PointInfo(data::PointInfo *const this)
{
  data::PointInfo::~PointInfo(this);
  operator delete(this, 0x28uLL);
};

// Line 128: range 0000000014753E8E-00000000147542B9
void __cdecl data::GatherExcelConfig::GatherExcelConfig(data::GatherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx

  v2 = (int (**)(...))(&`vtable for'data::GatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GatherExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id, v3);
  }
  this->area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_type, v3);
  }
  this->point_type = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, v4);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v4);
  }
  this->item_id = 0;
  std::vector<unsigned int>::vector(&this->extra_item_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->point_location >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_location >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_location, v4);
  }
  this->point_location = POINT_GROUND;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd, v5);
  }
  this->cd = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v5);
  }
  this->priority = 0;
  v6 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id, v6);
  }
  this->refresh_id = 0;
  std::vector<data::BlockLimit>::vector(&this->block_limits);
  if ( *(char *)(((unsigned __int64)&this->init_disable_interact >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->init_disable_interact, v6, &this->init_disable_interact);
  this->init_disable_interact = 0;
  v7 = ((_BYTE)this + 97) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_forbid_guest >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_guest >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_forbid_guest, v7, v8);
  this->is_forbid_guest = 0;
  v9 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->save_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->save_type, v9);
  }
  this->save_type = GATHER_SAVE_TYPE_NONE;
  if ( *(char *)(((unsigned __int64)&this->is_forbid_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_forbid_mp_mode, v9, &this->is_forbid_mp_mode);
  this->is_forbid_mp_mode = 0;
  v10 = ((_BYTE)this + 105) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_multi_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_multi_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_multi_state, v10, v11);
  this->is_multi_state = 0;
  v12 = ((_BYTE)this + 106) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->can_scan_by_nahida >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->can_scan_by_nahida >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->can_scan_by_nahida, v12, v13);
  this->can_scan_by_nahida = 0;
};

// Line 128: range 0000000014997936-0000000014998126
void __cdecl data::GatherExcelConfig::GatherExcelConfig(
        data::GatherExcelConfig *const this,
        const data::GatherExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t area_id; // ecx
  char v7; // dl
  uint32_t point_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gadget_id; // ecx
  char v12; // dl
  uint32_t item_id; // ecx
  char v14; // al
  std::vector<unsigned int> *p_extra_item_id_vec; // rsi
  data::PointLocation point_location; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t cd; // ecx
  char v20; // dl
  uint32_t priority; // ecx
  char v22; // al
  __int64 v23; // rsi
  uint32_t refresh_id; // ecx
  char v25; // dl
  std::vector<data::BlockLimit> *p_block_limits; // rsi
  bool init_disable_interact; // cl
  char v28; // al
  __int64 v29; // rsi
  __int64 v30; // rdx
  bool is_forbid_guest; // cl
  char v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rsi
  data::GatherSaveType save_type; // ecx
  char v36; // dl
  bool is_forbid_mp_mode; // cl
  char v38; // al
  __int64 v39; // rsi
  __int64 v40; // rdx
  bool is_multi_state; // cl
  char v42; // dl
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdx
  bool can_scan_by_nahida; // cl
  char v47; // dl
  __int64 v48; // rdx
  const data::GatherExcelConfig *v49; // [rsp+0h] [rbp-20h]

  v49 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GatherExcelConfig = v2;
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
  v5 = (((_BYTE)v49 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->area_id);
  }
  area_id = v49->area_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->area_id, v5);
  }
  this->area_id = area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v49->point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->point_type);
  }
  point_type = v49->point_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->point_type, v5);
  }
  this->point_type = point_type;
  v10 = (((_BYTE)v49 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->gadget_id);
  }
  gadget_id = v49->gadget_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gadget_id, v10);
  }
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v49->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->item_id);
  }
  item_id = v49->item_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->item_id, v10);
  }
  this->item_id = item_id;
  p_extra_item_id_vec = &v49->extra_item_id_vec;
  std::vector<unsigned int>::vector(&this->extra_item_id_vec, &v49->extra_item_id_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v49->point_location >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->point_location >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->point_location);
  }
  point_location = v49->point_location;
  v17 = *(_BYTE *)(((unsigned __int64)&this->point_location >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_extra_item_id_vec) = v17 != 0;
    __asan_report_store4(&this->point_location, p_extra_item_id_vec);
  }
  this->point_location = point_location;
  v18 = (((_BYTE)v49 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->cd);
  }
  cd = v49->cd;
  v20 = *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->cd, v18);
  }
  this->cd = cd;
  if ( *(_BYTE *)(((unsigned __int64)&v49->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v49->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v49->priority);
  }
  priority = v49->priority;
  v22 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->priority, v18);
  }
  this->priority = priority;
  v23 = (((_BYTE)v49 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->refresh_id);
  }
  refresh_id = v49->refresh_id;
  v25 = *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->refresh_id, v23);
  }
  this->refresh_id = refresh_id;
  p_block_limits = &v49->block_limits;
  std::vector<data::BlockLimit>::vector(&this->block_limits, &v49->block_limits);
  if ( *(char *)(((unsigned __int64)&v49->init_disable_interact >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v49->init_disable_interact, p_block_limits, &v49->init_disable_interact);
  init_disable_interact = v49->init_disable_interact;
  v28 = *(_BYTE *)(((unsigned __int64)&this->init_disable_interact >> 3) + 0x7FFF8000);
  if ( v28 < 0 )
  {
    LOBYTE(p_block_limits) = v28 != 0;
    __asan_report_store1(&this->init_disable_interact, p_block_limits, &this->init_disable_interact);
  }
  this->init_disable_interact = init_disable_interact;
  v29 = ((_BYTE)v49 + 97) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&v49->is_forbid_guest >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&v49->is_forbid_guest >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_load1(&v49->is_forbid_guest, v29, v30);
  is_forbid_guest = v49->is_forbid_guest;
  v32 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_guest >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v32 != 0;
  v33 = (v32 != 0) & (unsigned __int8)((((unsigned __int8)this + 97) & 7) >= v32);
  if ( (_BYTE)v33 )
    __asan_report_store1(&this->is_forbid_guest, v29, v33);
  this->is_forbid_guest = is_forbid_guest;
  v34 = (((_BYTE)v49 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v49->save_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v49 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v49->save_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v49->save_type);
  }
  save_type = v49->save_type;
  v36 = *(_BYTE *)(((unsigned __int64)&this->save_type >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v36 != 0;
  if ( v36 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v36 )
    __asan_report_store4(&this->save_type, v34);
  this->save_type = save_type;
  if ( *(char *)(((unsigned __int64)&v49->is_forbid_mp_mode >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v49->is_forbid_mp_mode, v34, &v49->is_forbid_mp_mode);
  is_forbid_mp_mode = v49->is_forbid_mp_mode;
  v38 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_mp_mode >> 3) + 0x7FFF8000);
  if ( v38 < 0 )
  {
    LOBYTE(v34) = v38 != 0;
    __asan_report_store1(&this->is_forbid_mp_mode, v34, &this->is_forbid_mp_mode);
  }
  this->is_forbid_mp_mode = is_forbid_mp_mode;
  v39 = ((_BYTE)v49 + 105) & 7;
  v40 = (*(_BYTE *)(((unsigned __int64)&v49->is_multi_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v39 >= *(_BYTE *)(((unsigned __int64)&v49->is_multi_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v40 )
    __asan_report_load1(&v49->is_multi_state, v39, v40);
  is_multi_state = v49->is_multi_state;
  v42 = *(_BYTE *)(((unsigned __int64)&this->is_multi_state >> 3) + 0x7FFF8000);
  LOBYTE(v39) = v42 != 0;
  v43 = (v42 != 0) & (unsigned __int8)((((unsigned __int8)this + 105) & 7) >= v42);
  if ( (_BYTE)v43 )
    __asan_report_store1(&this->is_multi_state, v39, v43);
  this->is_multi_state = is_multi_state;
  v44 = ((_BYTE)v49 + 106) & 7;
  v45 = (*(_BYTE *)(((unsigned __int64)&v49->can_scan_by_nahida >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v44 >= *(_BYTE *)(((unsigned __int64)&v49->can_scan_by_nahida >> 3) + 0x7FFF8000));
  if ( (_BYTE)v45 )
    __asan_report_load1(&v49->can_scan_by_nahida, v44, v45);
  can_scan_by_nahida = v49->can_scan_by_nahida;
  v47 = *(_BYTE *)(((unsigned __int64)&this->can_scan_by_nahida >> 3) + 0x7FFF8000);
  LOBYTE(v44) = v47 != 0;
  v48 = (v47 != 0) & (unsigned __int8)((((unsigned __int8)this + 106) & 7) >= v47);
  if ( (_BYTE)v48 )
    __asan_report_store1(&this->can_scan_by_nahida, v44, v48);
  this->can_scan_by_nahida = can_scan_by_nahida;
};

// Line 131: range 0000000014DED0B2-0000000014DED113
void __cdecl data::GatherExcelConfig::~GatherExcelConfig(data::GatherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GatherExcelConfig = v2;
  std::vector<data::BlockLimit>::~vector(&this->block_limits);
  std::vector<unsigned int>::~vector(&this->extra_item_id_vec);
};

// Line 131: range 0000000014DED114-0000000014DED13E
void __cdecl data::GatherExcelConfig::~GatherExcelConfig(data::GatherExcelConfig *const this)
{
  data::GatherExcelConfig::~GatherExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 158: range 000000001475430E-00000000147543E3
void __cdecl data::GatherBundleExcelConfig::GatherBundleExcelConfig(data::GatherBundleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GatherBundleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GatherBundleExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->base_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->base_gadget_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->base_gadget_id = 0;
  std::vector<data::PointInfo>::vector(&this->points);
};

// Line 158: range 0000000014D2CC4C-0000000014D2CDA6
void __cdecl data::GatherBundleExcelConfig::GatherBundleExcelConfig(
        data::GatherBundleExcelConfig *const this,
        const data::GatherBundleExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t base_gadget_id; // ecx
  char v7; // dl
  const data::GatherBundleExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GatherBundleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GatherBundleExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v8->base_gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->base_gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->base_gadget_id);
  }
  base_gadget_id = v8->base_gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->base_gadget_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->base_gadget_id, v5);
  }
  this->base_gadget_id = base_gadget_id;
  std::vector<data::PointInfo>::vector(&this->points, &v8->points);
};

// Line 161: range 0000000014DED034-0000000014DED085
void __cdecl data::GatherBundleExcelConfig::~GatherBundleExcelConfig(data::GatherBundleExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GatherBundleExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GatherBundleExcelConfig = v2;
  std::vector<data::PointInfo>::~vector(&this->points);
};

// Line 161: range 0000000014DED086-0000000014DED0B0
void __cdecl data::GatherBundleExcelConfig::~GatherBundleExcelConfig(data::GatherBundleExcelConfig *const this)
{
  data::GatherBundleExcelConfig::~GatherBundleExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 174: range 0000000014890188-00000000148902B2
data::MultiStateGatherConfig *__cdecl data::MultiStateGatherConfig::operator=(
        data::MultiStateGatherConfig *const this,
        const data::MultiStateGatherConfig *a2)
{
  uint32_t gadget_state; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t item_id; // ecx
  char v6; // dl
  const data::MultiStateGatherConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_state);
  }
  gadget_state = a2->gadget_state;
  v3 = *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->gadget_state, a2);
  }
  this->gadget_state = gadget_state;
  v4 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->item_id);
  }
  item_id = v8->item_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->item_id, v4);
  }
  this->item_id = item_id;
  std::vector<unsigned int>::operator=(&this->extra_item_id_vec, &v8->extra_item_id_vec);
  return this;
};

// Line 174: range 0000000014C96CB4-0000000014C96D89
void __cdecl data::MultiStateGatherConfig::MultiStateGatherConfig(data::MultiStateGatherConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MultiStateGatherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MultiStateGatherConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_state, v1);
  }
  this->gadget_state = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->item_id = 0;
  std::vector<unsigned int>::vector(&this->extra_item_id_vec);
};

// Line 174: range 0000000014D2C92E-0000000014D2CA88
void __cdecl data::MultiStateGatherConfig::MultiStateGatherConfig(
        data::MultiStateGatherConfig *const this,
        const data::MultiStateGatherConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t gadget_state; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t item_id; // ecx
  char v7; // dl
  const data::MultiStateGatherConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MultiStateGatherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MultiStateGatherConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_state);
  }
  gadget_state = a2->gadget_state;
  v4 = *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->gadget_state, a2);
  }
  this->gadget_state = gadget_state;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->item_id);
  }
  item_id = v8->item_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->item_id, v5);
  }
  this->item_id = item_id;
  std::vector<unsigned int>::vector(&this->extra_item_id_vec, &v8->extra_item_id_vec);
};

// Line 177: range 0000000014BC8530-0000000014BC855A
void __cdecl data::MultiStateGatherConfig::~MultiStateGatherConfig(data::MultiStateGatherConfig *const this)
{
  data::MultiStateGatherConfig::~MultiStateGatherConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 177: range 0000000014BC84DE-0000000014BC852F
void __cdecl data::MultiStateGatherConfig::~MultiStateGatherConfig(data::MultiStateGatherConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MultiStateGatherConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MultiStateGatherConfig = v2;
  std::vector<unsigned int>::~vector(&this->extra_item_id_vec);
};

// Line 188: range 0000000014754438-000000001475450D
void __cdecl data::MultiStateGatherExcelConfig::MultiStateGatherExcelConfig(
        data::MultiStateGatherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MultiStateGatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MultiStateGatherExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_type, v1);
  }
  this->point_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->gadget_id = 0;
  std::vector<data::MultiStateGatherConfig>::vector(&this->multi_state_gather_config_list);
};

// Line 188: range 0000000014D2CEE8-0000000014D2D042
void __cdecl data::MultiStateGatherExcelConfig::MultiStateGatherExcelConfig(
        data::MultiStateGatherExcelConfig *const this,
        const data::MultiStateGatherExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t point_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gadget_id; // ecx
  char v7; // dl
  const data::MultiStateGatherExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MultiStateGatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MultiStateGatherExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->point_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->point_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->point_type);
  }
  point_type = a2->point_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->point_type, a2);
  }
  this->point_type = point_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->gadget_id);
  }
  gadget_id = v8->gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gadget_id, v5);
  }
  this->gadget_id = gadget_id;
  std::vector<data::MultiStateGatherConfig>::vector(
    &this->multi_state_gather_config_list,
    &v8->multi_state_gather_config_list);
};

// Line 191: range 0000000014DED008-0000000014DED032
void __cdecl data::MultiStateGatherExcelConfig::~MultiStateGatherExcelConfig(
        data::MultiStateGatherExcelConfig *const this)
{
  data::MultiStateGatherExcelConfig::~MultiStateGatherExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 191: range 0000000014DECFB6-0000000014DED007
void __cdecl data::MultiStateGatherExcelConfig::~MultiStateGatherExcelConfig(
        data::MultiStateGatherExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MultiStateGatherExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MultiStateGatherExcelConfig = v2;
  std::vector<data::MultiStateGatherConfig>::~vector(&this->multi_state_gather_config_list);
};
