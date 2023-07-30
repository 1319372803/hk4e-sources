// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_module_data.cpp

// Line 29: range 00000000145959D0-0000000014595DDC
int32_t __cdecl HomeFurnitureData::fromBin(HomeFurnitureData *const this, const proto::HomeFurnitureBin *bin)
{
  uint32_t v2; // ecx
  const proto::VectorBin *v3; // rax
  const proto::VectorBin *v4; // rax
  int32_t v5; // ecx
  uint32_t v6; // ecx
  uint32_t v7; // ecx
  Vector3 v9; // [rsp+14h] [rbp-Ch] BYREF

  v2 = proto::HomeFurnitureBin::furniture_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->furniture_id = v2;
  v3 = proto::HomeFurnitureBin::spawn_pos(bin);
  Vector3::Vector3(&v9, v3);
  if ( (((unsigned __int8)this + 40) & 7) >= *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->source_pos, 12LL);
  }
  this->source_pos = v9;
  v4 = proto::HomeFurnitureBin::spawn_rot(bin);
  Vector3::Vector3(&v9, v4);
  if ( (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->source_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->source_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->source_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&this->source_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->source_rot, 12LL);
  }
  this->source_rot = v9;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  if ( (((unsigned __int8)this + 40) & 7) >= *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->source_pos, 12LL);
  }
  this->spawn_pos = this->source_pos;
  if ( (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = this->source_rot;
  v5 = proto::HomeFurnitureBin::parent_furniture_index(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->parent_furniture_index);
  }
  this->parent_furniture_index = v5;
  v6 = proto::HomeFurnitureBin::guid(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = v6;
  v7 = proto::HomeFurnitureBin::version(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version);
  }
  this->version = v7;
  return 0;
};

// Line 42: range 0000000014595DDE-0000000014595F73
int32_t __cdecl HomeFurnitureData::toBin(const HomeFurnitureData *const this, proto::HomeFurnitureBin *bin)
{
  proto::VectorBin *v2; // rax
  proto::VectorBin *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureBin::set_furniture_id(bin, this->furniture_id);
  v2 = proto::HomeFurnitureBin::mutable_spawn_pos(bin);
  Vector3::toBin(&this->source_pos, v2);
  v3 = proto::HomeFurnitureBin::mutable_spawn_rot(bin);
  Vector3::toBin(&this->source_rot, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureBin::set_parent_furniture_index(bin, this->parent_furniture_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureBin::set_guid(bin, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureBin::set_version(bin, this->version);
  return 0;
};

// Line 53: range 0000000014595F74-0000000014596380
int32_t __cdecl HomeFurnitureData::fromClient(HomeFurnitureData *const this, const proto::HomeFurnitureData *proto)
{
  uint32_t v2; // ecx
  const proto::Vector *v3; // rax
  const proto::Vector *v4; // rax
  int32_t v5; // ecx
  uint32_t v6; // ecx
  uint32_t v7; // ecx
  Vector3 v9; // [rsp+14h] [rbp-Ch] BYREF

  v2 = proto::HomeFurnitureData::furniture_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->furniture_id = v2;
  v3 = proto::HomeFurnitureData::spawn_pos(proto);
  Vector3::Vector3(&v9, v3);
  if ( (((unsigned __int8)this + 40) & 7) >= *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->source_pos, 12LL);
  }
  this->source_pos = v9;
  v4 = proto::HomeFurnitureData::spawn_rot(proto);
  Vector3::Vector3(&v9, v4);
  if ( (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->source_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->source_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->source_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&this->source_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->source_rot, 12LL);
  }
  this->source_rot = v9;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  if ( (((unsigned __int8)this + 40) & 7) >= *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->source_pos, 12LL);
  }
  this->spawn_pos = this->source_pos;
  if ( (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = this->source_rot;
  v5 = proto::HomeFurnitureData::parent_furniture_index(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->parent_furniture_index);
  }
  this->parent_furniture_index = v5;
  v6 = proto::HomeFurnitureData::guid(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = v6;
  v7 = proto::HomeFurnitureData::version(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version);
  }
  this->version = v7;
  return 0;
};

// Line 66: range 0000000014596382-0000000014596517
int32_t __cdecl HomeFurnitureData::toClient(const HomeFurnitureData *const this, proto::HomeFurnitureData *proto)
{
  proto::Vector *v2; // rax
  proto::Vector *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureData::set_furniture_id(proto, this->furniture_id);
  v2 = proto::HomeFurnitureData::mutable_spawn_pos(proto);
  Vector3::toClient(&this->source_pos, v2);
  v3 = proto::HomeFurnitureData::mutable_spawn_rot(proto);
  Vector3::toClient(&this->source_rot, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureData::set_parent_furniture_index(proto, this->parent_furniture_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureData::set_guid(proto, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureData::set_version(proto, this->version);
  return 0;
};

// Line 77: range 0000000014596518-000000001459695C
int32_t __cdecl HomeFurnitureData::fromConfig(HomeFurnitureData *const this, const data::ConfigHomeFurniture *config)
{
  uint32_t furniture_id; // ecx
  int32_t parent_furniture_index; // ecx
  uint32_t guid; // ecx
  Vector3 v6; // [rsp+14h] [rbp-Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_id = config->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->furniture_id = furniture_id;
  Vector3::Vector3(&v6, &config->spawn_pos);
  if ( (((unsigned __int8)this + 40) & 7) >= *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->source_pos, 12LL);
  }
  this->source_pos = v6;
  Vector3::Vector3(&v6, &config->spawn_rot);
  if ( (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->source_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->source_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->source_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&this->source_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->source_rot, 12LL);
  }
  this->source_rot = v6;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  if ( (((unsigned __int8)this + 40) & 7) >= *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->source_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->source_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->source_pos, 12LL);
  }
  this->spawn_pos = this->source_pos;
  if ( (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = this->source_rot;
  if ( *(_BYTE *)(((unsigned __int64)&config->parent_furniture_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->parent_furniture_index >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  parent_furniture_index = config->parent_furniture_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->parent_furniture_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->parent_furniture_index);
  }
  this->parent_furniture_index = parent_furniture_index;
  if ( *(_BYTE *)(((unsigned __int64)&config->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  guid = config->guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = guid;
  return 0;
};

// Line 89: range 000000001459695E-000000001459699F
bool __cdecl HomeFurnitureData::isValid(const HomeFurnitureData *const this)
{
  return Vector3::isValid(&this->source_pos) && Vector3::isValid(&this->source_rot);
};

// Line 94: range 00000000145969A0-0000000014596C85
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeFurnitureData::updateAbsolutePosition(
        HomeFurnitureData *const this,
        const Vector3 *center_pos,
        const Vector3 *center_rot)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 20 center_offset_pos:97 64 16 14 center_quat:96";
  *(_QWORD *)(v3 + 16) = HomeFurnitureData::updateAbsolutePosition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -202178560;
  if ( (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  if ( (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->source_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->source_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->source_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&this->source_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->source_rot, 12LL);
  }
  this->spawn_rot = this->source_rot;
  *(Quaternion *)(v3 + 64) = Quaternion::fromRotation(center_rot);
  *(Vector3 *)(v3 + 32) = Quaternion::rotateVector3((const Quaternion *const)(v3 + 64), &this->source_pos);
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = operator+(center_pos, (const Vector3 *)(v3 + 32));
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 105: range 0000000014596C86-0000000014596E3B
int32_t __cdecl HomeFurnitureSuiteData::fromBin(
        HomeFurnitureSuiteData *const this,
        const proto::HomeFurnitureSuiteBin *bin)
{
  uint32_t v2; // edx
  const proto::VectorBin *v3; // rax
  const google::protobuf::RepeatedField<int> *v4; // rax
  uint32_t v5; // edx
  bool is_allow_summon; // cl
  Vector3 v8; // [rsp+14h] [rbp-1Ch] BYREF

  v2 = proto::HomeFurnitureSuiteBin::suite_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->suite_id = v2;
  v3 = proto::HomeFurnitureSuiteBin::spawn_pos(bin);
  Vector3::Vector3(&v8, v3);
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = v8;
  v4 = proto::HomeFurnitureSuiteBin::included_furniture_index_list(bin);
  common::tools::MiscUtils::repeatedToVector<int,int>(v4, &this->included_furniture_index_vec);
  v5 = proto::HomeFurnitureSuiteBin::guid(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = v5;
  is_allow_summon = proto::HomeFurnitureSuiteBin::is_allow_summon(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_allow_summon);
  }
  this->is_allow_summon = is_allow_summon;
  return 0;
};

// Line 115: range 0000000014596E3C-0000000014596F75
int32_t __cdecl HomeFurnitureSuiteData::toBin(
        const HomeFurnitureSuiteData *const this,
        proto::HomeFurnitureSuiteBin *bin)
{
  proto::VectorBin *v2; // rax
  google::protobuf::RepeatedField<int> *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureSuiteBin::set_suite_id(bin, this->suite_id);
  v2 = proto::HomeFurnitureSuiteBin::mutable_spawn_pos(bin);
  Vector3::toBin(&this->spawn_pos, v2);
  v3 = proto::HomeFurnitureSuiteBin::mutable_included_furniture_index_list(bin);
  common::tools::MiscUtils::vectorToRepeated<int,int>(&this->included_furniture_index_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureSuiteBin::set_guid(bin, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_allow_summon);
  }
  proto::HomeFurnitureSuiteBin::set_is_allow_summon(bin, this->is_allow_summon);
  return 0;
};

// Line 125: range 0000000014596F76-000000001459712B
int32_t __cdecl HomeFurnitureSuiteData::fromClient(
        HomeFurnitureSuiteData *const this,
        const proto::HomeFurnitureSuiteData *proto)
{
  uint32_t v2; // edx
  const proto::Vector *v3; // rax
  const google::protobuf::RepeatedField<int> *v4; // rax
  uint32_t v5; // edx
  bool is_allow_summon; // cl
  Vector3 v8; // [rsp+14h] [rbp-1Ch] BYREF

  v2 = proto::HomeFurnitureSuiteData::suite_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->suite_id = v2;
  v3 = proto::HomeFurnitureSuiteData::spawn_pos(proto);
  Vector3::Vector3(&v8, v3);
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = v8;
  v4 = proto::HomeFurnitureSuiteData::included_furniture_index_list(proto);
  common::tools::MiscUtils::repeatedToVector<int,int>(v4, &this->included_furniture_index_vec);
  v5 = proto::HomeFurnitureSuiteData::guid(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = v5;
  is_allow_summon = proto::HomeFurnitureSuiteData::is_allow_summon(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_allow_summon);
  }
  this->is_allow_summon = is_allow_summon;
  return 0;
};

// Line 135: range 000000001459712C-0000000014597265
int32_t __cdecl HomeFurnitureSuiteData::toClient(
        const HomeFurnitureSuiteData *const this,
        proto::HomeFurnitureSuiteData *proto)
{
  proto::Vector *v2; // rax
  google::protobuf::RepeatedField<int> *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureSuiteData::set_suite_id(proto, this->suite_id);
  v2 = proto::HomeFurnitureSuiteData::mutable_spawn_pos(proto);
  Vector3::toClient(&this->spawn_pos, v2);
  v3 = proto::HomeFurnitureSuiteData::mutable_included_furniture_index_list(proto);
  common::tools::MiscUtils::vectorToRepeated<int,int>(&this->included_furniture_index_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureSuiteData::set_guid(proto, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_allow_summon >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_allow_summon);
  }
  proto::HomeFurnitureSuiteData::set_is_allow_summon(proto, this->is_allow_summon);
  return 0;
};

// Line 145: range 0000000014597266-000000001459739A
int32_t __cdecl HomeFurnitureSuiteData::fromConfig(
        HomeFurnitureSuiteData *const this,
        const data::ConfigHomeFurnitureSuite *config)
{
  uint32_t suite_id; // ecx
  Vector3 v4; // [rsp+14h] [rbp-Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  suite_id = config->suite_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->suite_id = suite_id;
  Vector3::Vector3(&v4, &config->spawn_pos);
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = v4;
  std::vector<int>::operator=(&this->included_furniture_index_vec, &config->included_furniture_index_list);
  return 0;
};

// Line 157: range 000000001459739C-000000001459758D
int32_t __cdecl HomeNpcData::fromBin(HomeNpcData *const this, const proto::HomeNpcBin *bin)
{
  uint32_t v2; // ecx
  const proto::VectorBin *v3; // rax
  const proto::VectorBin *v4; // rax
  uint32_t v5; // ecx
  Vector3 v7; // [rsp+14h] [rbp-Ch] BYREF

  v2 = proto::HomeNpcBin::avatar_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->avatar_id = v2;
  v3 = proto::HomeNpcBin::spawn_pos(bin);
  Vector3::Vector3(&v7, v3);
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = v7;
  v4 = proto::HomeNpcBin::spawn_rot(bin);
  Vector3::Vector3(&v7, v4);
  if ( (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = v7;
  v5 = proto::HomeNpcBin::costume_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->costume_id);
  }
  this->costume_id = v5;
  return 0;
};

// Line 166: range 000000001459758E-0000000014597683
int32_t __cdecl HomeNpcData::toBin(const HomeNpcData *const this, proto::HomeNpcBin *bin)
{
  proto::VectorBin *v2; // rax
  proto::VectorBin *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeNpcBin::set_avatar_id(bin, this->avatar_id);
  v2 = proto::HomeNpcBin::mutable_spawn_pos(bin);
  Vector3::toBin(&this->spawn_pos, v2);
  v3 = proto::HomeNpcBin::mutable_spawn_rot(bin);
  Vector3::toBin(&this->spawn_rot, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeNpcBin::set_costume_id(bin, this->costume_id);
  return 0;
};

// Line 175: range 0000000014597684-0000000014597875
int32_t __cdecl HomeNpcData::fromClient(HomeNpcData *const this, const proto::HomeNpcData *proto)
{
  uint32_t v2; // ecx
  const proto::Vector *v3; // rax
  const proto::Vector *v4; // rax
  uint32_t v5; // ecx
  Vector3 v7; // [rsp+14h] [rbp-Ch] BYREF

  v2 = proto::HomeNpcData::avatar_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->avatar_id = v2;
  v3 = proto::HomeNpcData::spawn_pos(proto);
  Vector3::Vector3(&v7, v3);
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = v7;
  v4 = proto::HomeNpcData::spawn_rot(proto);
  Vector3::Vector3(&v7, v4);
  if ( (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = v7;
  v5 = proto::HomeNpcData::costume_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->costume_id);
  }
  this->costume_id = v5;
  return 0;
};

// Line 184: range 0000000014597876-000000001459796B
int32_t __cdecl HomeNpcData::toClient(const HomeNpcData *const this, proto::HomeNpcData *proto)
{
  proto::Vector *v2; // rax
  proto::Vector *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeNpcData::set_avatar_id(proto, this->avatar_id);
  v2 = proto::HomeNpcData::mutable_spawn_pos(proto);
  Vector3::toClient(&this->spawn_pos, v2);
  v3 = proto::HomeNpcData::mutable_spawn_rot(proto);
  Vector3::toClient(&this->spawn_rot, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeNpcData::set_costume_id(proto, this->costume_id);
  return 0;
};

// Line 196: range 000000001459796C-0000000014597B0C
int32_t __cdecl HomeAnimalData::fromBin(HomeAnimalData *const this, const proto::HomeAnimalBin *bin)
{
  uint32_t v2; // ecx
  const proto::VectorBin *v3; // rax
  const proto::VectorBin *v4; // rax
  Vector3 v6; // [rsp+14h] [rbp-Ch] BYREF

  v2 = proto::HomeAnimalBin::furniture_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->furniture_id = v2;
  v3 = proto::HomeAnimalBin::spawn_pos(bin);
  Vector3::Vector3(&v6, v3);
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = v6;
  v4 = proto::HomeAnimalBin::spawn_rot(bin);
  Vector3::Vector3(&v6, v4);
  if ( (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = v6;
  return 0;
};

// Line 204: range 0000000014597B0E-0000000014597BB3
int32_t __cdecl HomeAnimalData::toBin(const HomeAnimalData *const this, proto::HomeAnimalBin *bin)
{
  proto::VectorBin *v2; // rax
  proto::VectorBin *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeAnimalBin::set_furniture_id(bin, this->furniture_id);
  v2 = proto::HomeAnimalBin::mutable_spawn_pos(bin);
  Vector3::toBin(&this->spawn_pos, v2);
  v3 = proto::HomeAnimalBin::mutable_spawn_rot(bin);
  Vector3::toBin(&this->spawn_rot, v3);
  return 0;
};

// Line 212: range 0000000014597BB4-0000000014597D54
int32_t __cdecl HomeAnimalData::fromClient(HomeAnimalData *const this, const proto::HomeAnimalData *proto)
{
  uint32_t v2; // ecx
  const proto::Vector *v3; // rax
  const proto::Vector *v4; // rax
  Vector3 v6; // [rsp+14h] [rbp-Ch] BYREF

  v2 = proto::HomeAnimalData::furniture_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->furniture_id = v2;
  v3 = proto::HomeAnimalData::spawn_pos(proto);
  Vector3::Vector3(&v6, v3);
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = v6;
  v4 = proto::HomeAnimalData::spawn_rot(proto);
  Vector3::Vector3(&v6, v4);
  if ( (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = v6;
  return 0;
};

// Line 220: range 0000000014597D56-0000000014597DFB
int32_t __cdecl HomeAnimalData::toClient(const HomeAnimalData *const this, proto::HomeAnimalData *proto)
{
  proto::Vector *v2; // rax
  proto::Vector *v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeAnimalData::set_furniture_id(proto, this->furniture_id);
  v2 = proto::HomeAnimalData::mutable_spawn_pos(proto);
  Vector3::toClient(&this->spawn_pos, v2);
  v3 = proto::HomeAnimalData::mutable_spawn_rot(proto);
  Vector3::toClient(&this->spawn_rot, v3);
  return 0;
};

// Line 228: range 0000000014597DFC-0000000014597FBD
int32_t __cdecl HomeAnimalData::fromConfig(HomeAnimalData *const this, const data::ConfigHomeAnimal *config)
{
  uint32_t furniture_id; // ecx
  Vector3 v4; // [rsp+14h] [rbp-Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)config & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_id = config->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->furniture_id = furniture_id;
  Vector3::Vector3(&v4, &config->spawn_pos);
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = v4;
  Vector3::Vector3(&v4, &config->spawn_rot);
  if ( (((unsigned __int8)this + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = v4;
  return 0;
};

// Line 240: range 0000000014597FBE-000000001459810D
int32_t __cdecl HomeBlockSubFieldData::fromBin(
        HomeBlockSubFieldData *const this,
        const proto::HomeBlockSubFieldBin *bin)
{
  const proto::VectorBin *v2; // rax
  const proto::VectorBin *v3; // rax
  Vector3 v5; // [rsp+14h] [rbp-Ch] BYREF

  v2 = proto::HomeBlockSubFieldBin::spawn_pos(bin);
  Vector3::Vector3(&v5, v2);
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  this->spawn_pos = v5;
  v3 = proto::HomeBlockSubFieldBin::spawn_rot(bin);
  Vector3::Vector3(&v5, v3);
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = v5;
  return 0;
};

// Line 247: range 000000001459810E-0000000014598164
int32_t __cdecl HomeBlockSubFieldData::toBin(const HomeBlockSubFieldData *const this, proto::HomeBlockSubFieldBin *bin)
{
  proto::VectorBin *v2; // rax
  proto::VectorBin *v3; // rax

  v2 = proto::HomeBlockSubFieldBin::mutable_spawn_pos(bin);
  Vector3::toBin(&this->spawn_pos, v2);
  v3 = proto::HomeBlockSubFieldBin::mutable_spawn_rot(bin);
  Vector3::toBin(&this->spawn_rot, v3);
  return 0;
};

// Line 254: range 0000000014598166-00000000145982B5
int32_t __cdecl HomeBlockSubFieldData::fromClient(
        HomeBlockSubFieldData *const this,
        const proto::HomeBlockSubFieldData *proto)
{
  const proto::Vector *v2; // rax
  const proto::Vector *v3; // rax
  Vector3 v5; // [rsp+14h] [rbp-Ch] BYREF

  v2 = proto::HomeBlockSubFieldData::pos(proto);
  Vector3::Vector3(&v5, v2);
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  this->spawn_pos = v5;
  v3 = proto::HomeBlockSubFieldData::rot(proto);
  Vector3::Vector3(&v5, v3);
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = v5;
  return 0;
};

// Line 261: range 00000000145982B6-000000001459830C
int32_t __cdecl HomeBlockSubFieldData::toClient(
        const HomeBlockSubFieldData *const this,
        proto::HomeBlockSubFieldData *proto)
{
  proto::Vector *v2; // rax
  proto::Vector *v3; // rax

  v2 = proto::HomeBlockSubFieldData::mutable_pos(proto);
  Vector3::toClient(&this->spawn_pos, v2);
  v3 = proto::HomeBlockSubFieldData::mutable_rot(proto);
  Vector3::toClient(&this->spawn_rot, v3);
  return 0;
};

// Line 268: range 000000001459830E-0000000014598707
int32_t __cdecl HomeBlockFieldData::fromBin(HomeBlockFieldData *const this, const proto::HomeBlockFieldBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // edx
  uint32_t v6; // ecx
  const proto::VectorBin *v7; // rax
  const proto::VectorBin *v8; // rax
  const proto::HomeBlockSubFieldBin *v9; // rax
  HomeBlockSubFieldData *v10; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldBin>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldBin>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldBin> *__for_range; // [rsp+28h] [rbp-B8h]
  Vector3 v15; // [rsp+34h] [rbp-ACh] BYREF
  char v16[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 13 sub_proto:275";
  *(_QWORD *)(v2 + 16) = HomeBlockFieldData::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<HomeBlockSubFieldData>::clear(&this->sub_field_vec);
  v5 = proto::HomeBlockFieldBin::guid(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->guid = v5;
  v6 = proto::HomeBlockFieldBin::furniture_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = v6;
  v7 = proto::HomeBlockFieldBin::spawn_pos(bin);
  Vector3::Vector3(&v15, v7);
  if ( *(char *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = v15;
  v8 = proto::HomeBlockFieldBin::spawn_rot(bin);
  Vector3::Vector3(&v15, v8);
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = v15;
  __for_range = proto::HomeBlockFieldBin::sub_field_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    v9 = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldBin const>::operator*(&__for_begin);
    proto::HomeBlockSubFieldBin::HomeBlockSubFieldBin((proto::HomeBlockSubFieldBin *const)(v2 + 48), v9);
    v10 = std::vector<HomeBlockSubFieldData>::emplace_back<>(&this->sub_field_vec);
    HomeBlockSubFieldData::fromBin(v10, (const proto::HomeBlockSubFieldBin *)(v2 + 48));
    proto::HomeBlockSubFieldBin::~HomeBlockSubFieldBin((proto::HomeBlockSubFieldBin *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 283: range 0000000014598708-0000000014598874
int32_t __cdecl HomeBlockFieldData::toBin(const HomeBlockFieldData *const this, proto::HomeBlockFieldBin *bin)
{
  proto::VectorBin *v2; // rax
  proto::VectorBin *v3; // rax
  proto::HomeBlockSubFieldBin *v4; // rax
  std::vector<HomeBlockSubFieldData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<HomeBlockSubFieldData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<HomeBlockSubFieldData> *__for_range; // [rsp+20h] [rbp-20h]
  const HomeBlockSubFieldData *sub_field; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBlockFieldBin::set_guid(bin, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeBlockFieldBin::set_furniture_id(bin, this->furniture_id);
  v2 = proto::HomeBlockFieldBin::mutable_spawn_pos(bin);
  Vector3::toBin(&this->spawn_pos, v2);
  v3 = proto::HomeBlockFieldBin::mutable_spawn_rot(bin);
  Vector3::toBin(&this->spawn_rot, v3);
  __for_range = &this->sub_field_vec;
  __for_begin._M_current = std::vector<HomeBlockSubFieldData>::begin(&this->sub_field_vec)._M_current;
  __for_end._M_current = std::vector<HomeBlockSubFieldData>::end(&this->sub_field_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeBlockSubFieldData const*,std::vector<HomeBlockSubFieldData>>(
            &__for_begin,
            &__for_end) )
  {
    sub_field = __gnu_cxx::__normal_iterator<HomeBlockSubFieldData const*,std::vector<HomeBlockSubFieldData>>::operator*(&__for_begin);
    v4 = proto::HomeBlockFieldBin::add_sub_field_list(bin);
    HomeBlockSubFieldData::toBin(sub_field, v4);
    __gnu_cxx::__normal_iterator<HomeBlockSubFieldData const*,std::vector<HomeBlockSubFieldData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 296: range 0000000014598876-0000000014598C6F
int32_t __cdecl HomeBlockFieldData::fromClient(HomeBlockFieldData *const this, const proto::HomeBlockFieldData *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // edx
  uint32_t v6; // ecx
  const proto::Vector *v7; // rax
  const proto::Vector *v8; // rax
  const proto::HomeBlockSubFieldData *v9; // rax
  HomeBlockSubFieldData *v10; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldData>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldData>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldData> *__for_range; // [rsp+28h] [rbp-B8h]
  Vector3 v15; // [rsp+34h] [rbp-ACh] BYREF
  char v16[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 13 sub_proto:303";
  *(_QWORD *)(v2 + 16) = HomeBlockFieldData::fromClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<HomeBlockSubFieldData>::clear(&this->sub_field_vec);
  v5 = proto::HomeBlockFieldData::guid(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->guid = v5;
  v6 = proto::HomeBlockFieldData::furniture_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = v6;
  v7 = proto::HomeBlockFieldData::pos(proto);
  Vector3::Vector3(&v15, v7);
  if ( *(char *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  this->spawn_pos = v15;
  v8 = proto::HomeBlockFieldData::rot(proto);
  Vector3::Vector3(&v15, v8);
  if ( (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_rot, 12LL);
  }
  this->spawn_rot = v15;
  __for_range = proto::HomeBlockFieldData::sub_field_list(proto);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldData>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockSubFieldData>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldData const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    v9 = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldData const>::operator*(&__for_begin);
    proto::HomeBlockSubFieldData::HomeBlockSubFieldData((proto::HomeBlockSubFieldData *const)(v2 + 48), v9);
    v10 = std::vector<HomeBlockSubFieldData>::emplace_back<>(&this->sub_field_vec);
    HomeBlockSubFieldData::fromClient(v10, (const proto::HomeBlockSubFieldData *)(v2 + 48));
    proto::HomeBlockSubFieldData::~HomeBlockSubFieldData((proto::HomeBlockSubFieldData *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockSubFieldData const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 311: range 0000000014598C70-0000000014598DDC
int32_t __cdecl HomeBlockFieldData::toClient(const HomeBlockFieldData *const this, proto::HomeBlockFieldData *proto)
{
  proto::Vector *v2; // rax
  proto::Vector *v3; // rax
  proto::HomeBlockSubFieldData *v4; // rax
  std::vector<HomeBlockSubFieldData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<HomeBlockSubFieldData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<HomeBlockSubFieldData> *__for_range; // [rsp+20h] [rbp-20h]
  const HomeBlockSubFieldData *sub_field; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBlockFieldData::set_guid(proto, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeBlockFieldData::set_furniture_id(proto, this->furniture_id);
  v2 = proto::HomeBlockFieldData::mutable_pos(proto);
  Vector3::toClient(&this->spawn_pos, v2);
  v3 = proto::HomeBlockFieldData::mutable_rot(proto);
  Vector3::toClient(&this->spawn_rot, v3);
  __for_range = &this->sub_field_vec;
  __for_begin._M_current = std::vector<HomeBlockSubFieldData>::begin(&this->sub_field_vec)._M_current;
  __for_end._M_current = std::vector<HomeBlockSubFieldData>::end(&this->sub_field_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeBlockSubFieldData const*,std::vector<HomeBlockSubFieldData>>(
            &__for_begin,
            &__for_end) )
  {
    sub_field = __gnu_cxx::__normal_iterator<HomeBlockSubFieldData const*,std::vector<HomeBlockSubFieldData>>::operator*(&__for_begin);
    v4 = proto::HomeBlockFieldData::add_sub_field_list(proto);
    HomeBlockSubFieldData::toClient(sub_field, v4);
    __gnu_cxx::__normal_iterator<HomeBlockSubFieldData const*,std::vector<HomeBlockSubFieldData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 324: range 0000000014598DDE-0000000014598FE8
int32_t __cdecl HomeMarkPointFurnitureData::fromData(
        HomeMarkPointFurnitureData *const this,
        const HomeFurnitureData *data)
{
  uint32_t guid; // ecx
  uint32_t furniture_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&data->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&data->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  guid = data->guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_id = data->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = furniture_id;
  if ( (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->spawn_pos, 12LL);
  }
  if ( (((unsigned __int8)data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&data->spawn_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&data->spawn_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)data + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&data->spawn_pos, 12LL);
  }
  this->spawn_pos = data->spawn_pos;
  return 0;
};

// Line 335: range 0000000014598FEA-0000000014599087
int32_t __cdecl HomeFurnitureGroupData::fromBin(
        HomeFurnitureGroupData *const this,
        const proto::HomeFurnitureGroupBin *bin)
{
  uint32_t v2; // edx
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *v3; // rax

  v2 = proto::HomeFurnitureGroupBin::group_furniture_index(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->group_furniture_index = v2;
  v3 = proto::HomeFurnitureGroupBin::virtual_furniure_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureData,proto::HomeFurnitureBin,int (HomeFurnitureData::*)(proto::HomeFurnitureBin const&)>(
    v3,
    &this->virtual_furniure_vec,
    (int (*)(HomeFurnitureData *, const proto::HomeFurnitureBin *))HomeFurnitureData::fromBin);
  return 0;
};

// Line 342: range 0000000014599088-0000000014599122
int32_t __cdecl HomeFurnitureGroupData::toBin(
        const HomeFurnitureGroupData *const this,
        proto::HomeFurnitureGroupBin *bin)
{
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureGroupBin::set_group_furniture_index(bin, this->group_furniture_index);
  v2 = proto::HomeFurnitureGroupBin::mutable_virtual_furniure_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureData,proto::HomeFurnitureBin,int (HomeFurnitureData::*)(proto::HomeFurnitureBin&)const>(
    &this->virtual_furniure_vec,
    v2,
    (int (*)(const HomeFurnitureData *, proto::HomeFurnitureBin *))HomeFurnitureData::toBin);
  return 0;
};

// Line 349: range 0000000014599124-00000000145991C1
int32_t __cdecl HomeFurnitureGroupData::fromClient(
        HomeFurnitureGroupData *const this,
        const proto::HomeFurnitureGroupData *proto)
{
  uint32_t v2; // edx
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *v3; // rax

  v2 = proto::HomeFurnitureGroupData::group_furniture_index(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->group_furniture_index = v2;
  v3 = proto::HomeFurnitureGroupData::virtual_furniure_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureData,proto::HomeFurnitureData,int (HomeFurnitureData::*)(proto::HomeFurnitureData const&)>(
    v3,
    &this->virtual_furniure_vec,
    (int (*)(HomeFurnitureData *, const proto::HomeFurnitureData *))HomeFurnitureData::fromClient);
  return 0;
};

// Line 356: range 00000000145991C2-000000001459925C
int32_t __cdecl HomeFurnitureGroupData::toClient(
        const HomeFurnitureGroupData *const this,
        proto::HomeFurnitureGroupData *proto)
{
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureGroupData::set_group_furniture_index(proto, this->group_furniture_index);
  v2 = proto::HomeFurnitureGroupData::mutable_virtual_furniure_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureData,proto::HomeFurnitureData,int (HomeFurnitureData::*)(proto::HomeFurnitureData&)const>(
    &this->virtual_furniure_vec,
    v2,
    (int (*)(const HomeFurnitureData *, proto::HomeFurnitureData *))HomeFurnitureData::toClient);
  return 0;
};

// Line 366: range 000000001459925E-0000000014599375
int32_t __cdecl HomeFurnitureCustomSuiteData::fromBin(
        HomeFurnitureCustomSuiteData *const this,
        const proto::HomeFurnitureCustomSuiteBin *bin)
{
  const proto::VectorBin *v2; // rax
  const google::protobuf::RepeatedField<int> *v3; // rax
  uint32_t v4; // edx
  Vector3 v6; // [rsp+14h] [rbp-1Ch] BYREF

  v2 = proto::HomeFurnitureCustomSuiteBin::spawn_pos(bin);
  Vector3::Vector3(&v6, v2);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  this->spawn_pos = v6;
  v3 = proto::HomeFurnitureCustomSuiteBin::included_furniture_index_list(bin);
  common::tools::MiscUtils::repeatedToVector<int,int>(v3, &this->included_furniture_index_vec);
  v4 = proto::HomeFurnitureCustomSuiteBin::guid(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = v4;
  return 0;
};

// Line 374: range 0000000014599376-0000000014599417
int32_t __cdecl HomeFurnitureCustomSuiteData::toBin(
        const HomeFurnitureCustomSuiteData *const this,
        proto::HomeFurnitureCustomSuiteBin *bin)
{
  proto::VectorBin *v2; // rax
  google::protobuf::RepeatedField<int> *v3; // rax

  v2 = proto::HomeFurnitureCustomSuiteBin::mutable_spawn_pos(bin);
  Vector3::toBin(&this->spawn_pos, v2);
  v3 = proto::HomeFurnitureCustomSuiteBin::mutable_included_furniture_index_list(bin);
  common::tools::MiscUtils::vectorToRepeated<int,int>(&this->included_furniture_index_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureCustomSuiteBin::set_guid(bin, this->guid);
  return 0;
};

// Line 382: range 0000000014599418-000000001459952F
int32_t __cdecl HomeFurnitureCustomSuiteData::fromClient(
        HomeFurnitureCustomSuiteData *const this,
        const proto::HomeFurnitureCustomSuiteData *proto)
{
  const proto::Vector *v2; // rax
  const google::protobuf::RepeatedField<int> *v3; // rax
  uint32_t v4; // edx
  Vector3 v6; // [rsp+14h] [rbp-1Ch] BYREF

  v2 = proto::HomeFurnitureCustomSuiteData::spawn_pos(proto);
  Vector3::Vector3(&v6, v2);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  this->spawn_pos = v6;
  v3 = proto::HomeFurnitureCustomSuiteData::included_furniture_index_list(proto);
  common::tools::MiscUtils::repeatedToVector<int,int>(v3, &this->included_furniture_index_vec);
  v4 = proto::HomeFurnitureCustomSuiteData::guid(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = v4;
  return 0;
};

// Line 390: range 0000000014599530-00000000145995D1
int32_t __cdecl HomeFurnitureCustomSuiteData::toClient(
        const HomeFurnitureCustomSuiteData *const this,
        proto::HomeFurnitureCustomSuiteData *proto)
{
  proto::Vector *v2; // rax
  google::protobuf::RepeatedField<int> *v3; // rax

  v2 = proto::HomeFurnitureCustomSuiteData::mutable_spawn_pos(proto);
  Vector3::toClient(&this->spawn_pos, v2);
  v3 = proto::HomeFurnitureCustomSuiteData::mutable_included_furniture_index_list(proto);
  common::tools::MiscUtils::vectorToRepeated<int,int>(&this->included_furniture_index_vec, v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureCustomSuiteData::set_guid(proto, this->guid);
  return 0;
};

// Line 401: range 00000000145995D2-000000001459988C
int32_t __cdecl HomeBlockData::fromBin(HomeBlockData *const this, const proto::HomeBlockBin *bin)
{
  uint32_t v2; // edi
  bool is_unlocked; // si
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *v4; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *v5; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin> *v6; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeNpcBin> *v7; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeAnimalBin> *v8; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeBlockFieldBin> *v9; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureGroupBin> *v10; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteBin> *v11; // rax

  v2 = proto::HomeBlockBin::block_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    v2 = (_DWORD)this + 4;
    __asan_report_store4(&this->block_id);
  }
  this->block_id = v2;
  is_unlocked = proto::HomeBlockBin::is_unlocked(bin);
  if ( *(char *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_unlocked);
  this->is_unlocked = is_unlocked;
  v4 = proto::HomeBlockBin::persistent_furniture_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureData,proto::HomeFurnitureBin,int (HomeFurnitureData::*)(proto::HomeFurnitureBin const&)>(
    v4,
    &this->persistent_furniture_vec,
    (int (*)(HomeFurnitureData *, const proto::HomeFurnitureBin *))HomeFurnitureData::fromBin);
  v5 = proto::HomeBlockBin::deploy_furniure_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureData,proto::HomeFurnitureBin,int (HomeFurnitureData::*)(proto::HomeFurnitureBin const&)>(
    v5,
    &this->deploy_furniure_vec,
    (int (*)(HomeFurnitureData *, const proto::HomeFurnitureBin *))HomeFurnitureData::fromBin);
  v6 = proto::HomeBlockBin::furniture_suite_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureSuiteData,proto::HomeFurnitureSuiteBin,int (HomeFurnitureSuiteData::*)(proto::HomeFurnitureSuiteBin const&)>(
    v6,
    &this->furniure_suite_vec,
    (int (*)(HomeFurnitureSuiteData *, const proto::HomeFurnitureSuiteBin *))HomeFurnitureSuiteData::fromBin);
  v7 = proto::HomeBlockBin::deploy_npc_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeNpcData,proto::HomeNpcBin,int (HomeNpcData::*)(proto::HomeNpcBin const&)>(
    v7,
    &this->deploy_npc_vec,
    (int (*)(HomeNpcData *, const proto::HomeNpcBin *))HomeNpcData::fromBin);
  v8 = proto::HomeBlockBin::deploy_animal_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeAnimalData,proto::HomeAnimalBin,int (HomeAnimalData::*)(proto::HomeAnimalBin const&)>(
    v8,
    &this->deploy_animal_vec,
    (int (*)(HomeAnimalData *, const proto::HomeAnimalBin *))HomeAnimalData::fromBin);
  v9 = proto::HomeBlockBin::deploy_field_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeBlockFieldData,proto::HomeBlockFieldBin,int (HomeBlockFieldData::*)(proto::HomeBlockFieldBin const&)>(
    v9,
    &this->deploy_field_vec,
    (int (*)(HomeBlockFieldData *, const proto::HomeBlockFieldBin *))HomeBlockFieldData::fromBin);
  v10 = proto::HomeBlockBin::deploy_furniture_group_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureGroupData,proto::HomeFurnitureGroupBin,int (HomeFurnitureGroupData::*)(proto::HomeFurnitureGroupBin const&)>(
    v10,
    &this->deploy_furniture_group_vec,
    (int (*)(HomeFurnitureGroupData *, const proto::HomeFurnitureGroupBin *))HomeFurnitureGroupData::fromBin);
  v11 = proto::HomeBlockBin::furniture_custom_suite_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureCustomSuiteData,proto::HomeFurnitureCustomSuiteBin,int (HomeFurnitureCustomSuiteData::*)(proto::HomeFurnitureCustomSuiteBin const&)>(
    v11,
    &this->furniture_custom_suite_vec,
    (int (*)(HomeFurnitureCustomSuiteData *, const proto::HomeFurnitureCustomSuiteBin *))HomeFurnitureCustomSuiteData::fromBin);
  HomeBlockData::onDataChanged(this);
  return 0;
};

// Line 417: range 000000001459988E-0000000014599B2E
int32_t __cdecl HomeBlockData::toBin(const HomeBlockData *const this, proto::HomeBlockBin *bin)
{
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *v2; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *v3; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteBin> *v4; // rax
  google::protobuf::RepeatedPtrField<proto::HomeNpcBin> *v5; // rax
  google::protobuf::RepeatedPtrField<proto::HomeAnimalBin> *v6; // rax
  google::protobuf::RepeatedPtrField<proto::HomeBlockFieldBin> *v7; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureGroupBin> *v8; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteBin> *v9; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeBlockBin::set_block_id(bin, this->block_id);
  if ( *(char *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_unlocked);
  proto::HomeBlockBin::set_is_unlocked(bin, this->is_unlocked);
  v2 = proto::HomeBlockBin::mutable_persistent_furniture_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureData,proto::HomeFurnitureBin,int (HomeFurnitureData::*)(proto::HomeFurnitureBin&)const>(
    &this->persistent_furniture_vec,
    v2,
    (int (*)(const HomeFurnitureData *, proto::HomeFurnitureBin *))HomeFurnitureData::toBin);
  v3 = proto::HomeBlockBin::mutable_deploy_furniure_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureData,proto::HomeFurnitureBin,int (HomeFurnitureData::*)(proto::HomeFurnitureBin&)const>(
    &this->deploy_furniure_vec,
    v3,
    (int (*)(const HomeFurnitureData *, proto::HomeFurnitureBin *))HomeFurnitureData::toBin);
  v4 = proto::HomeBlockBin::mutable_furniture_suite_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureSuiteData,proto::HomeFurnitureSuiteBin,int (HomeFurnitureSuiteData::*)(proto::HomeFurnitureSuiteBin&)const>(
    &this->furniure_suite_vec,
    v4,
    (int (*)(const HomeFurnitureSuiteData *, proto::HomeFurnitureSuiteBin *))HomeFurnitureSuiteData::toBin);
  v5 = proto::HomeBlockBin::mutable_deploy_npc_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeNpcData,proto::HomeNpcBin,int (HomeNpcData::*)(proto::HomeNpcBin&)const>(
    &this->deploy_npc_vec,
    v5,
    (int (*)(const HomeNpcData *, proto::HomeNpcBin *))HomeNpcData::toBin);
  v6 = proto::HomeBlockBin::mutable_deploy_animal_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeAnimalData,proto::HomeAnimalBin,int (HomeAnimalData::*)(proto::HomeAnimalBin&)const>(
    &this->deploy_animal_vec,
    v6,
    (int (*)(const HomeAnimalData *, proto::HomeAnimalBin *))HomeAnimalData::toBin);
  v7 = proto::HomeBlockBin::mutable_deploy_field_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeBlockFieldData,proto::HomeBlockFieldBin,int (HomeBlockFieldData::*)(proto::HomeBlockFieldBin&)const>(
    &this->deploy_field_vec,
    v7,
    (int (*)(const HomeBlockFieldData *, proto::HomeBlockFieldBin *))HomeBlockFieldData::toBin);
  v8 = proto::HomeBlockBin::mutable_deploy_furniture_group_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureGroupData,proto::HomeFurnitureGroupBin,int (HomeFurnitureGroupData::*)(proto::HomeFurnitureGroupBin&)const>(
    &this->deploy_furniture_group_vec,
    v8,
    (int (*)(const HomeFurnitureGroupData *, proto::HomeFurnitureGroupBin *))HomeFurnitureGroupData::toBin);
  v9 = proto::HomeBlockBin::mutable_furniture_custom_suite_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureCustomSuiteData,proto::HomeFurnitureCustomSuiteBin,int (HomeFurnitureCustomSuiteData::*)(proto::HomeFurnitureCustomSuiteBin&)const>(
    &this->furniture_custom_suite_vec,
    v9,
    (int (*)(const HomeFurnitureCustomSuiteData *, proto::HomeFurnitureCustomSuiteBin *))HomeFurnitureCustomSuiteData::toBin);
  return 0;
};

// Line 432: range 0000000014599B30-0000000014599DA1
int32_t __cdecl HomeBlockData::fromClient(HomeBlockData *const this, const proto::HomeBlockArrangementInfo *proto)
{
  uint32_t v2; // edi
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *v3; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *v4; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteData> *v5; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeNpcData> *v6; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeAnimalData> *v7; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeBlockFieldData> *v8; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureGroupData> *v9; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteData> *v10; // rax

  v2 = proto::HomeBlockArrangementInfo::block_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    v2 = (_DWORD)this + 4;
    __asan_report_store4(&this->block_id);
  }
  this->block_id = v2;
  v3 = proto::HomeBlockArrangementInfo::persistent_furniture_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureData,proto::HomeFurnitureData,int (HomeFurnitureData::*)(proto::HomeFurnitureData const&)>(
    v3,
    &this->persistent_furniture_vec,
    (int (*)(HomeFurnitureData *, const proto::HomeFurnitureData *))HomeFurnitureData::fromClient);
  v4 = proto::HomeBlockArrangementInfo::deploy_furniure_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureData,proto::HomeFurnitureData,int (HomeFurnitureData::*)(proto::HomeFurnitureData const&)>(
    v4,
    &this->deploy_furniure_vec,
    (int (*)(HomeFurnitureData *, const proto::HomeFurnitureData *))HomeFurnitureData::fromClient);
  v5 = proto::HomeBlockArrangementInfo::furniture_suite_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureSuiteData,proto::HomeFurnitureSuiteData,int (HomeFurnitureSuiteData::*)(proto::HomeFurnitureSuiteData const&)>(
    v5,
    &this->furniure_suite_vec,
    (int (*)(HomeFurnitureSuiteData *, const proto::HomeFurnitureSuiteData *))HomeFurnitureSuiteData::fromClient);
  v6 = proto::HomeBlockArrangementInfo::deploy_npc_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeNpcData,proto::HomeNpcData,int (HomeNpcData::*)(proto::HomeNpcData const&)>(
    v6,
    &this->deploy_npc_vec,
    (int (*)(HomeNpcData *, const proto::HomeNpcData *))HomeNpcData::fromClient);
  v7 = proto::HomeBlockArrangementInfo::deploy_animal_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeAnimalData,proto::HomeAnimalData,int (HomeAnimalData::*)(proto::HomeAnimalData const&)>(
    v7,
    &this->deploy_animal_vec,
    (int (*)(HomeAnimalData *, const proto::HomeAnimalData *))HomeAnimalData::fromClient);
  v8 = proto::HomeBlockArrangementInfo::field_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeBlockFieldData,proto::HomeBlockFieldData,int (HomeBlockFieldData::*)(proto::HomeBlockFieldData const&)>(
    v8,
    &this->deploy_field_vec,
    (int (*)(HomeBlockFieldData *, const proto::HomeBlockFieldData *))HomeBlockFieldData::fromClient);
  v9 = proto::HomeBlockArrangementInfo::furniture_group_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureGroupData,proto::HomeFurnitureGroupData,int (HomeFurnitureGroupData::*)(proto::HomeFurnitureGroupData const&)>(
    v9,
    &this->deploy_furniture_group_vec,
    (int (*)(HomeFurnitureGroupData *, const proto::HomeFurnitureGroupData *))HomeFurnitureGroupData::fromClient);
  v10 = proto::HomeBlockArrangementInfo::furniture_custom_suite_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureCustomSuiteData,proto::HomeFurnitureCustomSuiteData,int (HomeFurnitureCustomSuiteData::*)(proto::HomeFurnitureCustomSuiteData const&)>(
    v10,
    &this->furniture_custom_suite_vec,
    (int (*)(HomeFurnitureCustomSuiteData *, const proto::HomeFurnitureCustomSuiteData *))HomeFurnitureCustomSuiteData::fromClient);
  HomeBlockData::onDataChanged(this);
  return 0;
};

// Line 447: range 0000000014599DA2-000000001459A08F
int32_t __cdecl HomeBlockData::toClient(const HomeBlockData *const this, proto::HomeBlockArrangementInfo *proto)
{
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *v2; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *v3; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureSuiteData> *v4; // rax
  google::protobuf::RepeatedPtrField<proto::HomeNpcData> *v5; // rax
  google::protobuf::RepeatedPtrField<proto::HomeAnimalData> *v6; // rax
  google::protobuf::RepeatedPtrField<proto::HomeBlockFieldData> *v7; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureGroupData> *v8; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureCustomSuiteData> *v9; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeBlockArrangementInfo::set_block_id(proto, this->block_id);
  if ( *(char *)(((unsigned __int64)&this->is_unlocked >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_unlocked);
  proto::HomeBlockArrangementInfo::set_is_unlocked(proto, this->is_unlocked);
  v2 = proto::HomeBlockArrangementInfo::mutable_persistent_furniture_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureData,proto::HomeFurnitureData,int (HomeFurnitureData::*)(proto::HomeFurnitureData&)const>(
    &this->persistent_furniture_vec,
    v2,
    (int (*)(const HomeFurnitureData *, proto::HomeFurnitureData *))HomeFurnitureData::toClient);
  v3 = proto::HomeBlockArrangementInfo::mutable_deploy_furniure_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureData,proto::HomeFurnitureData,int (HomeFurnitureData::*)(proto::HomeFurnitureData&)const>(
    &this->deploy_furniure_vec,
    v3,
    (int (*)(const HomeFurnitureData *, proto::HomeFurnitureData *))HomeFurnitureData::toClient);
  v4 = proto::HomeBlockArrangementInfo::mutable_furniture_suite_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureSuiteData,proto::HomeFurnitureSuiteData,int (HomeFurnitureSuiteData::*)(proto::HomeFurnitureSuiteData&)const>(
    &this->furniure_suite_vec,
    v4,
    (int (*)(const HomeFurnitureSuiteData *, proto::HomeFurnitureSuiteData *))HomeFurnitureSuiteData::toClient);
  v5 = proto::HomeBlockArrangementInfo::mutable_deploy_npc_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeNpcData,proto::HomeNpcData,int (HomeNpcData::*)(proto::HomeNpcData&)const>(
    &this->deploy_npc_vec,
    v5,
    (int (*)(const HomeNpcData *, proto::HomeNpcData *))HomeNpcData::toClient);
  v6 = proto::HomeBlockArrangementInfo::mutable_deploy_animal_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeAnimalData,proto::HomeAnimalData,int (HomeAnimalData::*)(proto::HomeAnimalData&)const>(
    &this->deploy_animal_vec,
    v6,
    (int (*)(const HomeAnimalData *, proto::HomeAnimalData *))HomeAnimalData::toClient);
  v7 = proto::HomeBlockArrangementInfo::mutable_field_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeBlockFieldData,proto::HomeBlockFieldData,int (HomeBlockFieldData::*)(proto::HomeBlockFieldData&)const>(
    &this->deploy_field_vec,
    v7,
    (int (*)(const HomeBlockFieldData *, proto::HomeBlockFieldData *))HomeBlockFieldData::toClient);
  v8 = proto::HomeBlockArrangementInfo::mutable_furniture_group_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureGroupData,proto::HomeFurnitureGroupData,int (HomeFurnitureGroupData::*)(proto::HomeFurnitureGroupData&)const>(
    &this->deploy_furniture_group_vec,
    v8,
    (int (*)(const HomeFurnitureGroupData *, proto::HomeFurnitureGroupData *))HomeFurnitureGroupData::toClient);
  v9 = proto::HomeBlockArrangementInfo::mutable_furniture_custom_suite_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureCustomSuiteData,proto::HomeFurnitureCustomSuiteData,int (HomeFurnitureCustomSuiteData::*)(proto::HomeFurnitureCustomSuiteData&)const>(
    &this->furniture_custom_suite_vec,
    v9,
    (int (*)(const HomeFurnitureCustomSuiteData *, proto::HomeFurnitureCustomSuiteData *))HomeFurnitureCustomSuiteData::toClient);
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBlockArrangementInfo::set_comfort_value(proto, this->comfort_value);
  return 0;
};

// Line 463: range 000000001459A090-000000001459A43A
int32_t __cdecl HomeBlockData::fromConfig(HomeBlockData *const this, const data::ConfigHomeBlock *config)
{
  uint32_t block_id; // ecx
  std::vector<data::ConfigHomeFurniture>::size_type v3; // rax
  HomeFurnitureData *v5; // rbx
  const data::ConfigHomeFurniture *v6; // rax
  std::vector<data::ConfigHomeFurniture>::size_type v7; // rax
  HomeFurnitureData *v9; // rbx
  const data::ConfigHomeFurniture *v10; // rax
  std::vector<data::ConfigHomeFurnitureSuite>::size_type v11; // rax
  HomeFurnitureSuiteData *v13; // rbx
  const data::ConfigHomeFurnitureSuite *v14; // rax
  std::vector<data::ConfigHomeAnimal>::size_type v15; // rax
  HomeAnimalData *v17; // rbx
  const data::ConfigHomeAnimal *v18; // rax
  int i; // [rsp+10h] [rbp-20h]
  int i_0; // [rsp+14h] [rbp-1Ch]
  int i_1; // [rsp+18h] [rbp-18h]
  int i_2; // [rsp+1Ch] [rbp-14h]

  HomeBlockData::clear(this);
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  block_id = config->block_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_id);
  }
  this->block_id = block_id;
  v3 = std::vector<data::ConfigHomeFurniture>::size(&config->persistent_furniture_list);
  std::vector<HomeFurnitureData>::resize(&this->persistent_furniture_vec, v3);
  for ( i = 0;
        i < std::vector<HomeFurnitureData>::size(&this->persistent_furniture_vec)
     && i < std::vector<data::ConfigHomeFurniture>::size(&config->persistent_furniture_list);
        ++i )
  {
    v5 = std::vector<HomeFurnitureData>::operator[](&this->persistent_furniture_vec, i);
    v6 = std::vector<data::ConfigHomeFurniture>::operator[](&config->persistent_furniture_list, i);
    HomeFurnitureData::fromConfig(v5, v6);
  }
  v7 = std::vector<data::ConfigHomeFurniture>::size(&config->deploy_furniure_list);
  std::vector<HomeFurnitureData>::resize(&this->deploy_furniure_vec, v7);
  for ( i_0 = 0;
        i_0 < std::vector<HomeFurnitureData>::size(&this->deploy_furniure_vec)
     && i_0 < std::vector<data::ConfigHomeFurniture>::size(&config->deploy_furniure_list);
        ++i_0 )
  {
    v9 = std::vector<HomeFurnitureData>::operator[](&this->deploy_furniure_vec, i_0);
    v10 = std::vector<data::ConfigHomeFurniture>::operator[](&config->deploy_furniure_list, i_0);
    HomeFurnitureData::fromConfig(v9, v10);
  }
  v11 = std::vector<data::ConfigHomeFurnitureSuite>::size(&config->furniture_suite_list);
  std::vector<HomeFurnitureSuiteData>::resize(&this->furniure_suite_vec, v11);
  for ( i_1 = 0;
        i_1 < std::vector<HomeFurnitureSuiteData>::size(&this->furniure_suite_vec)
     && i_1 < std::vector<data::ConfigHomeFurnitureSuite>::size(&config->furniture_suite_list);
        ++i_1 )
  {
    v13 = std::vector<HomeFurnitureSuiteData>::operator[](&this->furniure_suite_vec, i_1);
    v14 = std::vector<data::ConfigHomeFurnitureSuite>::operator[](&config->furniture_suite_list, i_1);
    HomeFurnitureSuiteData::fromConfig(v13, v14);
  }
  std::vector<HomeNpcData>::clear(&this->deploy_npc_vec);
  v15 = std::vector<data::ConfigHomeAnimal>::size(&config->deploy_animal_list);
  std::vector<HomeAnimalData>::resize(&this->deploy_animal_vec, v15);
  for ( i_2 = 0;
        i_2 < std::vector<HomeAnimalData>::size(&this->deploy_animal_vec)
     && i_2 < std::vector<data::ConfigHomeAnimal>::size(&config->deploy_animal_list);
        ++i_2 )
  {
    v17 = std::vector<HomeAnimalData>::operator[](&this->deploy_animal_vec, i_2);
    v18 = std::vector<data::ConfigHomeAnimal>::operator[](&config->deploy_animal_list, i_2);
    HomeAnimalData::fromConfig(v17, v18);
  }
  std::vector<HomeFurnitureCustomSuiteData>::clear(&this->furniture_custom_suite_vec);
  HomeBlockData::onDataChanged(this);
  return 0;
};

// Line 493: range 000000001459A43C-000000001459A77C
int32_t __cdecl HomeBlockData::checkValid(const HomeBlockData *const this, const data::ConfigHomeBlock *config)
{
  std::vector<HomeFurnitureData>::size_type v2; // rbx
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  std::vector<data::ConfigHomeFurniture>::const_reference v8; // rdx
  uint32_t furniture_id; // ebx
  std::vector<HomeFurnitureData>::const_reference v10; // rdx
  common::milog::MiLogStream *v11; // rbx
  std::vector<HomeFurnitureData>::const_reference v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  std::vector<data::ConfigHomeFurniture>::const_reference v15; // rax
  int i; // [rsp+14h] [rbp-5Ch]
  unsigned __int64 val; // [rsp+18h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  v2 = std::vector<HomeFurnitureData>::size(&this->persistent_furniture_vec);
  if ( v2 == std::vector<data::ConfigHomeFurniture>::size(&config->persistent_furniture_list) )
  {
    for ( i = 0;
          i < std::vector<HomeFurnitureData>::size(&this->persistent_furniture_vec)
       && i < std::vector<data::ConfigHomeFurniture>::size(&config->persistent_furniture_list);
          ++i )
    {
      v8 = std::vector<data::ConfigHomeFurniture>::operator[](&config->persistent_furniture_list, i);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      furniture_id = v8->furniture_id;
      v10 = std::vector<HomeFurnitureData>::operator[](&this->persistent_furniture_vec, i);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( !HomeWorldExcelConfigMgr::isSameFunitureSurfaceType(home_config_mgr, v10->furniture_id, furniture_id) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_module_data.cpp",
          "checkValid",
          504);
        v11 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                &v21,
                (const char (*)[72])"[HOME]persistent furniture surface type not same. client furniture id: ");
        v12 = std::vector<HomeFurnitureData>::operator[](&this->persistent_furniture_vec, i);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v12->furniture_id);
        v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v13,
                (const char (*)[23])" config furniture id: ");
        v15 = std::vector<data::ConfigHomeFurniture>::operator[](&config->persistent_furniture_list, i);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v15->furniture_id);
        common::milog::MiLogStream::~MiLogStream(&v21);
        return 9743;
      }
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_module_data.cpp",
      "checkValid",
      497);
    v3 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v21,
           (const char (*)[50])"[HOME]persistent furniture size error. vec_size: ");
    val = std::vector<HomeFurnitureData>::size(&this->persistent_furniture_vec);
    v4 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v3, &val);
    v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v4, (const char (*)[15])" config size: ");
    v18 = std::vector<data::ConfigHomeFurniture>::size(&config->persistent_furniture_list);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &v18);
    common::milog::MiLogStream::~MiLogStream(&v21);
    return 9743;
  }
};

// Line 512: range 000000001459A77E-000000001459AD9F
int32_t __cdecl HomeBlockData::checkFieldValid(const HomeBlockData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v4; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  const HomeWorldExcelConfigMgr *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::vector<HomeBlockSubFieldData>::size_type v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r13
  std::vector<HomeBlockFieldData>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<HomeBlockFieldData>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-118h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+30h] [rbp-110h]
  const std::vector<HomeBlockFieldData> *__for_range; // [rsp+38h] [rbp-108h]
  const HomeBlockFieldData *field; // [rsp+40h] [rbp-100h]
  const data::HomeWorldFarmFieldExcelConfig *field_config_ptr; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+80h] [rbp-C0h] BYREF
  common::milog::MiLogStream v31; // [rsp+A0h] [rbp-A0h] BYREF
  char v32[128]; // [rsp+C0h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 22 field_furniture_id:516 64 8 8 iter:517";
  *(_QWORD *)(v1 + 16) = HomeBlockData::checkFieldValid;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v28);
  __for_range = &this->deploy_field_vec;
  __for_begin._M_current = std::vector<HomeBlockFieldData>::begin(&this->deploy_field_vec)._M_current;
  __for_end._M_current = std::vector<HomeBlockFieldData>::end(&this->deploy_field_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeBlockFieldData const*,std::vector<HomeBlockFieldData>>(&__for_begin, &__for_end) )
  {
    field = __gnu_cxx::__normal_iterator<HomeBlockFieldData const*,std::vector<HomeBlockFieldData>>::operator*(&__for_begin);
    *(_DWORD *)(v1 + 48) = 0;
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v1 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                          &this->furniture_guid_map,
                                                                          &field->guid);
    __y._M_node = std::map<unsigned int,unsigned int>::end(&this->furniture_guid_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v1 + 64),
           &__y) )
    {
      v4 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v4->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v4 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v4->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = v4->second;
    }
    if ( *(_BYTE *)(((unsigned __int64)&field->furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)field + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&field->furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( field->furniture_id != *(_DWORD *)(v1 + 48) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFieldValid",
        524);
      v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v29,
             (const char (*)[26])"invalid field data, guid:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &field->guid);
      v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" furniture_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &field->furniture_id);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             v8,
             (const char (*)[22])" deploy furniture_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v29);
      result = -1;
      goto LABEL_24;
    }
    v11 = home_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&field->furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)field + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&field->furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    field_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFarmFieldExcelConfig(v11, field->furniture_id);
    if ( !field_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFieldValid",
        530);
      v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v30,
              (const char (*)[30])"find field config fail, guid:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &field->guid);
      v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" furniture_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &field->furniture_id);
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = -1;
      goto LABEL_24;
    }
    v15 = std::vector<HomeBlockSubFieldData>::size(&field->sub_field_vec);
    if ( *(_BYTE *)(((unsigned __int64)&field_config_ptr->field_slot_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)field_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&field_config_ptr->field_slot_num >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v15 != field_config_ptr->field_slot_num )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFieldValid",
        535);
      v16 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v31,
              (const char (*)[29])"invalid subfield data, guid:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &field->guid);
      v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])" furniture_id:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &field->furniture_id);
      v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])" sub_field_size:");
      __y._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<HomeBlockSubFieldData>::size(&field->sub_field_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, (const unsigned __int64 *)&__y);
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = -1;
      goto LABEL_24;
    }
    __gnu_cxx::__normal_iterator<HomeBlockFieldData const*,std::vector<HomeBlockFieldData>>::operator++(&__for_begin);
  }
  result = 0;
LABEL_24:
  if ( v32 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 543: range 000000001459ADA0-000000001459B503
int32_t __cdecl HomeBlockData::checkFurnitureSuiteValid(const HomeBlockData *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v11; // rdx
  std::vector<HomeFurnitureData>::size_type v12; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  uint32_t suite_furnitue_id; // [rsp+14h] [rbp-14Ch]
  std::vector<HomeFurnitureSuiteData>::const_iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::vector<HomeFurnitureSuiteData>::const_iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::vector<int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-138h] BYREF
  std::vector<int>::const_iterator __for_end_0; // [rsp+30h] [rbp-130h] BYREF
  const std::vector<HomeFurnitureSuiteData> *__for_range; // [rsp+38h] [rbp-128h]
  const HomeFurnitureSuiteData *suite; // [rsp+40h] [rbp-120h]
  const FurnitureSuiteJsonConfig *furniture_json_config_ptr; // [rsp+48h] [rbp-118h]
  const std::vector<int> *__for_range_0; // [rsp+50h] [rbp-110h]
  const HomeFurnitureData *furniture; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v34; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v36; // [rsp+90h] [rbp-D0h] BYREF
  char v37[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 19 furniture_index:558 48 48 41 suite_included_furniture_id_count_map:557";
  *(_QWORD *)(v2 + 16) = HomeBlockData::checkFurnitureSuiteValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  suite_furnitue_id = ConstValueExcelConfigMgr::getHomeSuiteFurnitureID(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v34);
  __for_range = &this->furniure_suite_vec;
  __for_begin._M_current = std::vector<HomeFurnitureSuiteData>::begin(&this->furniure_suite_vec)._M_current;
  __for_end._M_current = std::vector<HomeFurnitureSuiteData>::end(&this->furniure_suite_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>(
            &__for_begin,
            &__for_end) )
  {
    suite = __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator*(&__for_begin);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)suite >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)suite >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    furniture_json_config_ptr = JsonConfigMgr::findFurnitureSuiteJsonConfig(p_json_config_mgr, suite->suite_id);
    std::shared_ptr<Config>::~shared_ptr(&v34);
    if ( !furniture_json_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureSuiteValid",
        550);
      v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v35,
             (const char (*)[55])"findFurnitureSuiteJsonConfig return nullptr. suite_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &suite->suite_id);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v1 = 9766;
      goto LABEL_35;
    }
    if ( std::vector<int>::empty(&suite->included_furniture_index_vec) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureSuiteValid",
        555);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v36,
             (const char (*)[38])"empty suite furniture vec. suite_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &suite->suite_id);
      v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &suite->guid);
      common::milog::MiLogStream::~MiLogStream(&v36);
    }
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 48));
    __for_range_0 = &suite->included_furniture_index_vec;
    __for_begin_0._M_current = std::vector<int>::begin(&suite->included_furniture_index_vec)._M_current;
    __for_end_0._M_current = std::vector<int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin_0, &__for_end_0) )
    {
      v11 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v11;
      if ( *(int *)(v2 + 32) < 0
        || (v12 = *(int *)(v2 + 32), v12 >= std::vector<HomeFurnitureData>::size(&this->deploy_furniure_vec)) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_module_data.cpp",
          "checkFurnitureSuiteValid",
          562);
        v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v36,
                (const char (*)[17])"furniture_index:");
        v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])off_2540E0C0);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v1 = 9766;
        v16 = 0;
        goto LABEL_32;
      }
      furniture = std::vector<HomeFurnitureData>::operator[](&this->deploy_furniure_vec, *(int *)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( suite_furnitue_id != furniture->furniture_id )
      {
        v17 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v2 + 48),
                &furniture->furniture_id);
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++*v17;
      }
      __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin_0);
    }
    if ( std::operator!=<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>(
           (const std::map<unsigned int,unsigned int> *)(v2 + 48),
           &furniture_json_config_ptr->included_furnite_id_count_map) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureSuiteValid",
        576);
      v18 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
              &v36,
              (const char (*)[69])"suite_included_furniture_id_count_map not equal to config. suite_id:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &suite->suite_id);
      v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" client_map:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v20,
              (const std::map<unsigned int,unsigned int> *)(v2 + 48));
      v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v21,
              (const char (*)[18])" json_config_map:");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        v22,
        &furniture_json_config_ptr->included_furnite_id_count_map);
      common::milog::MiLogStream::~MiLogStream(&v36);
    }
    v16 = 1;
LABEL_32:
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 48));
    if ( v16 != 1 )
      goto LABEL_35;
    __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator++(&__for_begin);
  }
  v1 = 0;
LABEL_35:
  result = v1;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 584: range 000000001459B504-000000001459BBDF
int32_t __cdecl HomeBlockData::checkFurnitureCustomSuiteValid(const HomeBlockData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  std::vector<int>::size_type v6; // r14
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v8; // rdx
  std::vector<HomeFurnitureData>::size_type v9; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const std::set<data::FurnitureDeploySurfaceType> *HomeFurnitureCustomSuiteForbiddenTypeSet; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  bool is_first_furniture; // [rsp+1Ah] [rbp-136h]
  bool is_furniture_suite_virtual_root; // [rsp+1Bh] [rbp-135h]
  unsigned int val; // [rsp+1Ch] [rbp-134h] BYREF
  std::vector<HomeFurnitureCustomSuiteData>::const_iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  std::vector<HomeFurnitureCustomSuiteData>::const_iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  std::vector<int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-120h] BYREF
  std::vector<int>::const_iterator __for_end_0; // [rsp+38h] [rbp-118h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+40h] [rbp-110h]
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+48h] [rbp-108h]
  const std::vector<HomeFurnitureCustomSuiteData> *__for_range; // [rsp+50h] [rbp-100h]
  const HomeFurnitureCustomSuiteData *suite; // [rsp+58h] [rbp-F8h]
  const std::vector<int> *__for_range_0; // [rsp+60h] [rbp-F0h]
  const HomeFurnitureData *furniture; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<Config> v31; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v32; // [rsp+80h] [rbp-D0h] BYREF
  common::milog::MiLogStream v33; // [rsp+A0h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+C0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 19 furniture_index:600 64 4 16 surface_type:610";
  *(_QWORD *)(v1 + 16) = HomeBlockData::checkFurnitureCustomSuiteValid;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v31);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v31);
  __for_range = &this->furniture_custom_suite_vec;
  __for_begin._M_current = std::vector<HomeFurnitureCustomSuiteData>::begin(&this->furniture_custom_suite_vec)._M_current;
  __for_end._M_current = std::vector<HomeFurnitureCustomSuiteData>::end(&this->furniture_custom_suite_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeFurnitureCustomSuiteData const*,std::vector<HomeFurnitureCustomSuiteData>>(
            &__for_begin,
            &__for_end) )
  {
    suite = __gnu_cxx::__normal_iterator<HomeFurnitureCustomSuiteData const*,std::vector<HomeFurnitureCustomSuiteData>>::operator*(&__for_begin);
    if ( std::vector<int>::size(&suite->included_furniture_index_vec) <= 2 )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureCustomSuiteValid",
        591);
      v4 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v33,
             (const char (*)[39])"suite furniture size too small. guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &suite->guid);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = 9787;
      goto LABEL_29;
    }
    v6 = std::vector<int>::size(&suite->included_furniture_index_vec);
    if ( v6 > ConstValueExcelConfigMgr::getHomeFurnitureCustomSuiteCapacity(const_value_config_mgr) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureCustomSuiteValid",
        596);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v33,
             (const char (*)[32])"suite furniture too big. guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &suite->guid);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = 9788;
      goto LABEL_29;
    }
    is_first_furniture = 1;
    __for_range_0 = &suite->included_furniture_index_vec;
    __for_begin_0._M_current = std::vector<int>::begin(&suite->included_furniture_index_vec)._M_current;
    __for_end_0._M_current = std::vector<int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin_0, &__for_end_0) )
    {
      v8 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v8;
      is_furniture_suite_virtual_root = is_first_furniture;
      is_first_furniture = 0;
      if ( *(int *)(v1 + 48) < 0
        || (v9 = *(int *)(v1 + 48), v9 >= std::vector<HomeFurnitureData>::size(&this->deploy_furniure_vec)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_module_data.cpp",
          "checkFurnitureCustomSuiteValid",
          606);
        v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v32,
                (const char (*)[17])"furniture_index:");
        v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v1 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v12, (const char (*)[24])off_2540E320);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &suite->guid);
        common::milog::MiLogStream::~MiLogStream(&v32);
        result = 9766;
        goto LABEL_29;
      }
      furniture = std::vector<HomeFurnitureData>::operator[](&this->deploy_furniure_vec, *(int *)(v1 + 48));
      if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 64) = HomeWorldExcelConfigMgr::getFurnitureDeploySurfaceType(
                               home_config_mgr,
                               furniture->furniture_id);
      HomeFurnitureCustomSuiteForbiddenTypeSet = ConstValueExcelConfigMgr::getHomeFurnitureCustomSuiteForbiddenTypeSet(const_value_config_mgr);
      if ( common::tools::MiscUtils::isContains<std::set<data::FurnitureDeploySurfaceType> const,data::FurnitureDeploySurfaceType>(
             HomeFurnitureCustomSuiteForbiddenTypeSet,
             (const data::FurnitureDeploySurfaceType *)(v1 + 64))
        && (!is_furniture_suite_virtual_root || *(_DWORD *)(v1 + 64) != 14) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_module_data.cpp",
          "checkFurnitureCustomSuiteValid",
          618);
        v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v33,
                (const char (*)[41])"surface type is forbidden, surface_type:");
        val = *(_DWORD *)(v1 + 64);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" guid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &suite->guid);
        common::milog::MiLogStream::~MiLogStream(&v33);
        result = 9791;
        goto LABEL_29;
      }
      __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<HomeFurnitureCustomSuiteData const*,std::vector<HomeFurnitureCustomSuiteData>>::operator++(&__for_begin);
  }
  result = 0;
LABEL_29:
  if ( v34 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 627: range 000000001459BBE0-000000001459C96C
int32_t __cdecl HomeBlockData::checkFurnitureGroupValid(const HomeBlockData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::vector<HomeFurnitureData>::size_type v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  const HomeWorldExcelConfigMgr *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::vector<HomeFurnitureData>::size_type v18; // r14
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  double v26; // xmm0_8
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int32_t result; // eax
  float valid_cylinder_radius; // [rsp+10h] [rbp-2A0h]
  float valid_cylinder_height; // [rsp+14h] [rbp-29Ch]
  std::vector<HomeFurnitureGroupData>::const_iterator __for_begin; // [rsp+18h] [rbp-298h] BYREF
  std::vector<HomeFurnitureGroupData>::const_iterator __for_end; // [rsp+20h] [rbp-290h] BYREF
  std::vector<HomeFurnitureData>::const_iterator __for_begin_0; // [rsp+28h] [rbp-288h] BYREF
  std::vector<HomeFurnitureData>::const_iterator __for_end_0; // [rsp+30h] [rbp-280h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+38h] [rbp-278h]
  const std::vector<HomeFurnitureGroupData> *__for_range; // [rsp+40h] [rbp-270h]
  const HomeFurnitureGroupData *furniture_group_data; // [rsp+48h] [rbp-268h]
  const HomeFurnitureData *group_furniture; // [rsp+50h] [rbp-260h]
  const data::HomeWorldFurnitureExcelConfig *home_furniture_config_ptr; // [rsp+58h] [rbp-258h]
  const FurnitureGroupJsonConfig *furniture_group_json_config_ptr; // [rsp+60h] [rbp-250h]
  const std::unordered_map<unsigned int,unsigned int> *scene_group_map; // [rsp+68h] [rbp-248h]
  const Vector3 *group_furniture_pos; // [rsp+70h] [rbp-240h]
  const std::unordered_map<unsigned int,unsigned int> *furniture_group_config_map; // [rsp+78h] [rbp-238h]
  const std::vector<HomeFurnitureData> *__for_range_0; // [rsp+80h] [rbp-230h]
  const HomeFurnitureData *virtual_furniture; // [rsp+88h] [rbp-228h]
  std::shared_ptr<Config> v51; // [rsp+90h] [rbp-220h] BYREF
  common::milog::MiLogStream v52; // [rsp+A0h] [rbp-210h] BYREF
  common::milog::MiLogStream v53; // [rsp+C0h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v54; // [rsp+E0h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v55; // [rsp+100h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v56; // [rsp+120h] [rbp-190h] BYREF
  common::milog::MiLogStream v57; // [rsp+140h] [rbp-170h] BYREF
  common::milog::MiLogStream v58; // [rsp+160h] [rbp-150h] BYREF
  common::milog::MiLogStream v59; // [rsp+180h] [rbp-130h] BYREF
  common::milog::MiLogStream v60; // [rsp+1A0h] [rbp-110h] BYREF
  common::milog::MiLogStream v61; // [rsp+1C0h] [rbp-F0h] BYREF
  char v62[208]; // [rsp+1E0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 25 group_furniture_index:632 64 56 26 group_furniture_id_set:628";
  *(_QWORD *)(v1 + 16) = HomeBlockData::checkFurnitureGroupValid;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v51);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v51);
  __for_range = &this->deploy_furniture_group_vec;
  __for_begin._M_current = std::vector<HomeFurnitureGroupData>::begin(&this->deploy_furniture_group_vec)._M_current;
  __for_end._M_current = std::vector<HomeFurnitureGroupData>::end(&this->deploy_furniture_group_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>(
            &__for_begin,
            &__for_end) )
  {
    furniture_group_data = __gnu_cxx::__normal_iterator<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)furniture_group_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)furniture_group_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = furniture_group_data->group_furniture_index;
    v4 = *(unsigned int *)(v1 + 48);
    if ( v4 >= std::vector<HomeFurnitureData>::size(&this->deploy_furniure_vec) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureGroupValid",
        635);
      v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v52,
             (const char (*)[23])"group_furniture_index:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])off_2540E4E0);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v7 = 9781;
      goto LABEL_52;
    }
    group_furniture = std::vector<HomeFurnitureData>::operator[](&this->deploy_furniure_vec, *(unsigned int *)(v1 + 48));
    v8 = std::unordered_set<unsigned int>::insert(
           (std::unordered_set<unsigned int> *const)(v1 + 64),
           &group_furniture->furniture_id);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v53,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureGroupValid",
        642);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v53,
             (const char (*)[30])"duplicate group furniture id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &group_furniture->furniture_id);
      common::milog::MiLogStream::~MiLogStream(&v53);
      v7 = 9781;
      goto LABEL_52;
    }
    v10 = home_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)group_furniture >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)group_furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_furniture >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    home_furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                                  v10,
                                  group_furniture->furniture_id);
    if ( !home_furniture_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureGroupValid",
        648);
      v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(&v54, (const char (*)[47])off_2540E560);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &group_furniture->furniture_id);
      common::milog::MiLogStream::~MiLogStream(&v54);
      v7 = 9781;
      goto LABEL_52;
    }
    if ( *(_BYTE *)(((unsigned __int64)&home_furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&home_furniture_config_ptr->special_furniture_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( home_furniture_config_ptr->special_furniture_type != GroupFurnitrue )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureGroupValid",
        653);
      v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v55,
              (const char (*)[46])"special furniture type invalid, furniture id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &group_furniture->furniture_id);
      common::milog::MiLogStream::~MiLogStream(&v55);
      v7 = 9781;
      goto LABEL_52;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v51);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)group_furniture >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)group_furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_furniture >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    furniture_group_json_config_ptr = JsonConfigMgr::findFurnitureGroupConfig(
                                        p_json_config_mgr,
                                        group_furniture->furniture_id);
    std::shared_ptr<Config>::~shared_ptr(&v51);
    if ( !furniture_group_json_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureGroupValid",
        659);
      v14 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(&v56, (const char (*)[52])off_2540E620);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &group_furniture->furniture_id);
      common::milog::MiLogStream::~MiLogStream(&v56);
      v7 = 9781;
      goto LABEL_52;
    }
    scene_group_map = &furniture_group_json_config_ptr->scene_group_map;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
            &furniture_group_json_config_ptr->scene_group_map,
            &this->scene_id) )
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureGroupValid",
        666);
      v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v57,
              (const char (*)[21])"cannot put in scene:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->scene_id);
      v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" furniture id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &group_furniture->furniture_id);
      common::milog::MiLogStream::~MiLogStream(&v57);
      v7 = 9781;
      goto LABEL_52;
    }
    group_furniture_pos = &group_furniture->spawn_pos;
    if ( *(_BYTE *)(((unsigned __int64)furniture_group_json_config_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)furniture_group_json_config_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    valid_cylinder_radius = furniture_group_json_config_ptr->radius;
    if ( *(_BYTE *)(((unsigned __int64)&furniture_group_json_config_ptr->height >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)furniture_group_json_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_group_json_config_ptr->height >> 3)
                                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    valid_cylinder_height = furniture_group_json_config_ptr->height;
    furniture_group_config_map = &furniture_group_json_config_ptr->furniture_group_config_map;
    v18 = std::vector<HomeFurnitureData>::size(&furniture_group_data->virtual_furniure_vec);
    if ( v18 != std::unordered_map<unsigned int,unsigned int>::size(furniture_group_config_map) )
    {
      common::milog::MiLogStream::create(
        &v58,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_module_data.cpp",
        "checkFurnitureGroupValid",
        676);
      v19 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v58,
              (const char (*)[27])"virtual_furniure_vec size:");
      __for_begin_0._M_current = (const HomeFurnitureData *)std::vector<HomeFurnitureData>::size(&furniture_group_data->virtual_furniure_vec);
      v20 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v19,
              (const unsigned __int64 *)&__for_begin_0);
      v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v20,
              (const char (*)[33])"furniture_group_config_map size:");
      __for_end_0._M_current = (const HomeFurnitureData *)std::unordered_map<unsigned int,unsigned int>::size(furniture_group_config_map);
      v22 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v21,
              (const unsigned __int64 *)&__for_end_0);
      v23 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v22, (const char (*)[15])" furniture id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &group_furniture->furniture_id);
      common::milog::MiLogStream::~MiLogStream(&v58);
      v7 = 9781;
      goto LABEL_52;
    }
    __for_range_0 = &furniture_group_data->virtual_furniure_vec;
    __for_begin_0._M_current = std::vector<HomeFurnitureData>::begin(&furniture_group_data->virtual_furniure_vec)._M_current;
    __for_end_0._M_current = std::vector<HomeFurnitureData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(&__for_begin_0, &__for_end_0) )
    {
      virtual_furniture = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*(&__for_begin_0);
      if ( !HomeFurnitureData::isValid(virtual_furniture) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_module_data.cpp",
          "checkFurnitureGroupValid",
          684);
        v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v59,
                (const char (*)[22])"invalid furniture_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &virtual_furniture->furniture_id);
        common::milog::MiLogStream::~MiLogStream(&v59);
        v7 = 551;
        goto LABEL_52;
      }
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
              furniture_group_config_map,
              &virtual_furniture->furniture_id) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_module_data.cpp",
          "checkFurnitureGroupValid",
          689);
        v25 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v60,
                (const char (*)[45])"virtual furniture not in json, furniture id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &virtual_furniture->furniture_id);
        common::milog::MiLogStream::~MiLogStream(&v60);
        v7 = 9781;
        goto LABEL_52;
      }
      if ( getPlaneDistance(&virtual_furniture->spawn_pos, group_furniture_pos) > valid_cylinder_radius )
        goto LABEL_45;
      if ( *(_BYTE *)(((unsigned __int64)&virtual_furniture->spawn_pos.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)virtual_furniture + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&virtual_furniture->spawn_pos.y >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(float *)&v26 = virtual_furniture->spawn_pos.y;
      if ( *(_BYTE *)(((unsigned __int64)&group_furniture_pos->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)group_furniture_pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_furniture_pos->y >> 3)
                                                                          + 0x7FFF8000) )
      {
        v26 = __asan_report_load4();
      }
      if ( *(float *)&v26 <= (float)(group_furniture_pos->y + valid_cylinder_height)
        && (float)(group_furniture_pos->y - valid_cylinder_height) <= virtual_furniture->spawn_pos.y )
      {
        v27 = 0;
      }
      else
      {
LABEL_45:
        v27 = 1;
      }
      if ( v27 )
      {
        common::milog::MiLogStream::create(
          &v61,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_module_data.cpp",
          "checkFurnitureGroupValid",
          697);
        v28 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v61,
                (const char (*)[45])"virtual furniture invalid pos, furniture id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                &virtual_furniture->furniture_id);
        v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v29, (const char (*)[14])" vitrual_pos:");
        v31 = operator<<(v30, &virtual_furniture->spawn_pos);
        v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" group_pos:");
        operator<<(v32, group_furniture_pos);
        common::milog::MiLogStream::~MiLogStream(&v61);
        v7 = 9781;
        goto LABEL_52;
      }
      __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>::operator++(&__for_begin);
  }
  v7 = 0;
LABEL_52:
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 64));
  result = v7;
  if ( v62 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 707: range 000000001459C96E-000000001459CD2F
int32_t __cdecl HomeBlockData::checkLoadCost(const HomeBlockData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t block_id; // edx
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 load_cost:709 64 4 19 high_load_limit:710";
  *(_QWORD *)(v1 + 16) = HomeBlockData::checkLoadCost;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v19);
  *(_DWORD *)(v1 + 48) = PlayerHomeHandler::getBlockLoadCost(&this->furniture_id_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  block_id = this->block_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 64) = HomeWorldExcelConfigMgr::getHighLoadLimit(home_config_mgr, this->scene_id, block_id);
  if ( *(_DWORD *)(v1 + 48) <= *(_DWORD *)(v1 + 64) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_module_data.cpp",
      "checkLoadCost",
      717);
    v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v20, (const char (*)[17])"block load cost:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" block_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->block_id);
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->scene_id);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_module_data.cpp",
      "checkLoadCost",
      713);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v20,
           (const char (*)[39])"block load reach high limit, scene id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->scene_id);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" block id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->block_id);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" load cost:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])" high load limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 64));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 9779;
  }
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 722: range 000000001459CD30-000000001459CDD0
void __cdecl HomeBlockData::clear(HomeBlockData *const this)
{
  std::vector<HomeFurnitureData>::clear(&this->persistent_furniture_vec);
  std::vector<HomeFurnitureData>::clear(&this->deploy_furniure_vec);
  std::vector<HomeFurnitureSuiteData>::clear(&this->furniure_suite_vec);
  std::vector<HomeNpcData>::clear(&this->deploy_npc_vec);
  std::vector<HomeAnimalData>::clear(&this->deploy_animal_vec);
  std::vector<HomeBlockFieldData>::clear(&this->deploy_field_vec);
  std::vector<HomeFurnitureGroupData>::clear(&this->deploy_furniture_group_vec);
  std::vector<HomeFurnitureCustomSuiteData>::clear(&this->furniture_custom_suite_vec);
  HomeBlockData::onDataChanged(this);
};

// Line 735: range 000000001459CDD2-000000001459D337
void __cdecl HomeBlockData::onDataChanged(HomeBlockData *const this)
{
  uint32_t FurnitureComfortValue; // ecx
  const unsigned int *v2; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v3; // rax
  common::milog::MiLogStream *v4; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  uint32_t v6; // ecx
  const unsigned int *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  uint32_t max_comfort_value; // [rsp+14h] [rbp-7Ch]
  std::vector<HomeFurnitureData>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::vector<HomeFurnitureData>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+28h] [rbp-68h]
  std::vector<HomeFurnitureData> *__for_range; // [rsp+30h] [rbp-60h]
  std::vector<HomeFurnitureData> *__for_range_0; // [rsp+38h] [rbp-58h]
  const HomeFurnitureData *furniture_0; // [rsp+40h] [rbp-50h]
  const HomeFurnitureData *furniture; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort_value);
  }
  this->comfort_value = 0;
  std::map<unsigned int,unsigned int>::clear(&this->furniture_guid_map);
  std::map<unsigned int,unsigned int>::clear(&this->furniture_id_count_map);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v19);
  __for_range = &this->persistent_furniture_vec;
  __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&this->persistent_furniture_vec)._M_current;
  __for_end._M_current = std::vector<HomeFurnitureData>::end(&this->persistent_furniture_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
  {
    furniture = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    FurnitureComfortValue = HomeWorldExcelConfigMgr::getFurnitureComfortValue(home_config_mgr, furniture->furniture_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    this->comfort_value += FurnitureComfortValue;
    v3 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->furniture_guid_map,
           &furniture->guid,
           &furniture->furniture_id,
           (const unsigned int *)&this->furniture_guid_map,
           v2);
    if ( !v3.second )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_module_data.cpp",
        "onDataChanged",
        747);
      v4 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v20,
             (const char (*)[25])"repeated furniture guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &furniture->guid);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    v5 = std::map<unsigned int,unsigned int>::operator[](&this->furniture_id_count_map, &furniture->furniture_id);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v5;
    __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->deploy_furniure_vec;
  __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&this->deploy_furniure_vec)._M_current;
  __for_end._M_current = std::vector<HomeFurnitureData>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
  {
    furniture_0 = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)furniture_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = HomeWorldExcelConfigMgr::getFurnitureComfortValue(home_config_mgr, furniture_0->furniture_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    this->comfort_value += v6;
    v8 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->furniture_guid_map,
           &furniture_0->guid,
           &furniture_0->furniture_id,
           (const unsigned int *)&this->furniture_guid_map,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_module_data.cpp",
        "onDataChanged",
        757);
      v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v20,
             (const char (*)[25])"repeated furniture guid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &furniture_0->guid);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    v10 = std::map<unsigned int,unsigned int>::operator[](&this->furniture_id_count_map, &furniture_0->furniture_id);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v10;
    __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
  }
  max_comfort_value = HomeBlockData::getMaxComfortValue(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( max_comfort_value < this->comfort_value )
    this->comfort_value = max_comfort_value;
};

// Line 771: range 000000001459D338-000000001459D429
uint32_t __cdecl HomeBlockData::getMaxComfortValue(const HomeBlockData *const this)
{
  const HomeWorldExcelConfigMgr *p_home_config_mgr; // rdi
  uint32_t block_id; // edx
  uint32_t MaxComfortValue; // ebx
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.home_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    p_home_config_mgr = (const HomeWorldExcelConfigMgr *)&this->block_id;
    __asan_report_load4();
  }
  block_id = this->block_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    p_home_config_mgr = (const HomeWorldExcelConfigMgr *)this;
    __asan_report_load4();
  }
  MaxComfortValue = HomeWorldExcelConfigMgr::getMaxComfortValue(p_home_config_mgr, this->scene_id, block_id);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return MaxComfortValue;
};

// Line 779: range 000000001459D42A-000000001459DCB4
int32_t __cdecl HomeSceneArrangementData::fromBin(HomeSceneArrangementData *const this, const proto::HomeSceneBin *bin)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  uint32_t v6; // edx
  int v7; // r14d
  HomeBlockData *v8; // rax
  unsigned int *v9; // rcx
  HomeBlockData *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  bool is_set_born_pos; // dl
  const proto::VectorBin *v14; // rax
  const proto::VectorBin *v15; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *v16; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *v17; // rax
  const proto::HomeFurnitureBin *v18; // rax
  HomeFurnitureData *v19; // rax
  const proto::VectorBin *v20; // rax
  uint32_t v21; // edx
  uint32_t v22; // ecx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeBlockBin>::const_iterator __for_begin; // [rsp+40h] [rbp-2A0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockBin>::const_iterator __for_end; // [rsp+48h] [rbp-298h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeBlockBin> *__for_range; // [rsp+50h] [rbp-290h]
  const proto::HomeBlockBin *home_block_bin; // [rsp+58h] [rbp-288h]
  Vector3 v28; // [rsp+64h] [rbp-27Ch] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-270h] BYREF
  char v30[592]; // [rsp+90h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 block_id:790 64 64 18 tmp_main_house:806 160 312 19 home_block_data:783";
  *(_QWORD *)(v3 + 16) = HomeSceneArrangementData::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862724] = -218959118;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  v5[536862736] = -202116109;
  v6 = proto::HomeSceneBin::scene_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = v6;
  __for_range = proto::HomeSceneBin::block_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    home_block_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockBin const>::operator*(&__for_begin);
    HomeBlockData::HomeBlockData((HomeBlockData *const)(v3 + 160));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 160) = this->scene_id;
    if ( HomeBlockData::fromBin((HomeBlockData *const)(v3 + 160), home_block_bin) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "fromBin",
        787);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v29,
        (const char (*)[34])"home_block_data.fromBin() failed.");
      common::milog::MiLogStream::~MiLogStream(&v29);
      v2 = -1;
      v7 = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 48) = *(_DWORD *)(v3 + 164);
      v8 = std::move<HomeBlockData &>((HomeBlockData *)(v3 + 160));
      v11 = std::map<unsigned int,HomeBlockData>::emplace<unsigned int &,HomeBlockData>(
              &this->block_data_map,
              (unsigned int *)(v3 + 48),
              v8,
              v9,
              v10);
      if ( !v11.second )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_module_data.cpp",
          "fromBin",
          793);
        v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v29,
                (const char (*)[41])"home_scene_data already exists. block_id");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      v7 = 1;
    }
    HomeBlockData::~HomeBlockData((HomeBlockData *const)(v3 + 160));
    if ( v7 != 1 )
      goto LABEL_34;
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockBin const>::operator++(&__for_begin);
  }
  is_set_born_pos = proto::HomeSceneBin::is_set_born_pos(bin);
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_set_born_pos);
  this->is_set_born_pos = is_set_born_pos;
  if ( this->is_set_born_pos )
  {
    v14 = proto::HomeSceneBin::born_pos(bin);
    Vector3::Vector3(&v28, v14);
    if ( (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->born_pos, 12LL);
    }
    this->born_pos = v28;
    v15 = proto::HomeSceneBin::born_rot(bin);
    Vector3::Vector3(&v28, v15);
    if ( *(char *)(((unsigned __int64)&this->born_rot >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&this->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_rot.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->born_rot, 12LL);
    }
    this->born_rot = v28;
  }
  v16 = proto::HomeSceneBin::door_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureData,proto::HomeFurnitureBin,int (HomeFurnitureData::*)(proto::HomeFurnitureBin const&)>(
    v16,
    &this->door_vec,
    (int (*)(HomeFurnitureData *, const proto::HomeFurnitureBin *))HomeFurnitureData::fromBin);
  v17 = proto::HomeSceneBin::stair_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureData,proto::HomeFurnitureBin,int (HomeFurnitureData::*)(proto::HomeFurnitureBin const&)>(
    v17,
    &this->stair_vec,
    (int (*)(HomeFurnitureData *, const proto::HomeFurnitureBin *))HomeFurnitureData::fromBin);
  if ( proto::HomeSceneBin::has_main_house(bin) )
  {
    HomeFurnitureData::HomeFurnitureData((HomeFurnitureData *const)(v3 + 64));
    v18 = proto::HomeSceneBin::main_house(bin);
    HomeFurnitureData::fromBin((HomeFurnitureData *const)(v3 + 64), v18);
    v19 = std::move<HomeFurnitureData &>((HomeFurnitureData *)(v3 + 64));
    std::optional<HomeFurnitureData>::operator=<HomeFurnitureData>(&this->main_house, v19);
    v20 = proto::HomeSceneBin::djinn_pos(bin);
    Vector3::Vector3(&v28, v20);
    if ( (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->djinn_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->djinn_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->djinn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&this->djinn_pos.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->djinn_pos, 12LL);
    }
    this->djinn_pos = v28;
  }
  v21 = proto::HomeSceneBin::tmp_version(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tmp_version);
  }
  this->tmp_version = v21;
  v22 = proto::HomeSceneBin::bgm_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bgm_id);
  }
  this->bgm_id = v22;
  HomeSceneArrangementData::onDataChanged(this);
  v2 = 0;
LABEL_34:
  result = v2;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 818: range 000000001459DCB6-000000001459E0B8
int32_t __cdecl HomeSceneArrangementData::toBin(const HomeSceneArrangementData *const this, proto::HomeSceneBin *bin)
{
  common::milog::MiLogStream *v2; // rax
  proto::VectorBin *v4; // rax
  proto::VectorBin *v5; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *v6; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureBin> *v7; // rax
  const HomeFurnitureData *v8; // rbx
  proto::HomeFurnitureBin *v9; // rax
  proto::VectorBin *v10; // rax
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+28h] [rbp-78h]
  const std::pair<unsigned int const,HomeBlockData> *v14; // [rsp+30h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+38h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *home_block_data; // [rsp+40h] [rbp-60h]
  proto::HomeBlockBin *home_block_bin; // [rsp+48h] [rbp-58h]
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-50h] BYREF

  __for_range = &this->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&this->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&this->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v14);
    home_block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v14);
    home_block_bin = proto::HomeSceneBin::add_block_bin_list(bin);
    if ( HomeBlockData::toBin(home_block_data, home_block_bin) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "toBin",
        824);
      v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v18,
             (const char (*)[43])"home_block_data.toBin() failed, block_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &home_block_data->block_id);
      common::milog::MiLogStream::~MiLogStream(&v18);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_set_born_pos);
  proto::HomeSceneBin::set_is_set_born_pos(bin, this->is_set_born_pos);
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_set_born_pos);
  if ( this->is_set_born_pos )
  {
    v4 = proto::HomeSceneBin::mutable_born_pos(bin);
    Vector3::toBin(&this->born_pos, v4);
    v5 = proto::HomeSceneBin::mutable_born_rot(bin);
    Vector3::toBin(&this->born_rot, v5);
  }
  v6 = proto::HomeSceneBin::mutable_door_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureData,proto::HomeFurnitureBin,int (HomeFurnitureData::*)(proto::HomeFurnitureBin&)const>(
    &this->door_vec,
    v6,
    (int (*)(const HomeFurnitureData *, proto::HomeFurnitureBin *))HomeFurnitureData::toBin);
  v7 = proto::HomeSceneBin::mutable_stair_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureData,proto::HomeFurnitureBin,int (HomeFurnitureData::*)(proto::HomeFurnitureBin&)const>(
    &this->stair_vec,
    v7,
    (int (*)(const HomeFurnitureData *, proto::HomeFurnitureBin *))HomeFurnitureData::toBin);
  if ( std::optional<HomeFurnitureData>::has_value(&this->main_house) )
  {
    v8 = std::optional<HomeFurnitureData>::operator->(&this->main_house);
    v9 = proto::HomeSceneBin::mutable_main_house(bin);
    HomeFurnitureData::toBin(v8, v9);
    v10 = proto::HomeSceneBin::mutable_djinn_pos(bin);
    Vector3::toBin(&this->djinn_pos, v10);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeSceneBin::set_tmp_version(bin, this->tmp_version);
  if ( *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeSceneBin::set_bgm_id(bin, this->bgm_id);
  return 0;
};

// Line 847: range 000000001459E0BA-000000001459EC12
int32_t __cdecl HomeSceneArrangementData::fromClient(
        HomeSceneArrangementData *const this,
        HomeSceneArrangementData *cur,
        const proto::HomeSceneArrangementInfo *proto)
{
  int32_t v3; // r15d
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t v7; // edx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // r13d
  HomeBlockData *v11; // rax
  unsigned int *v12; // rcx
  HomeBlockData *v13; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  const HomeBlockData *v16; // r8
  bool is_set_born_pos; // dl
  const proto::Vector *v18; // rax
  const proto::Vector *v19; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *v20; // rax
  const google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *v21; // rax
  const proto::HomeFurnitureData *v22; // rax
  HomeFurnitureData *v23; // rax
  const proto::Vector *v24; // rax
  uint32_t v25; // edx
  uint32_t v26; // ecx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::const_iterator __for_begin; // [rsp+48h] [rbp-2C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::const_iterator __for_end; // [rsp+50h] [rbp-2C0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo> *__for_range; // [rsp+58h] [rbp-2B8h]
  std::map<unsigned int,HomeBlockData> *__for_range_0; // [rsp+60h] [rbp-2B0h]
  const std::pair<unsigned int const,HomeBlockData> *v33; // [rsp+68h] [rbp-2A8h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+70h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+78h] [rbp-298h]
  const proto::HomeBlockArrangementInfo *home_block_proto; // [rsp+80h] [rbp-290h]
  HomeBlockData *cur_block_data_ptr; // [rsp+88h] [rbp-288h]
  Vector3 v38; // [rsp+94h] [rbp-27Ch] BYREF
  common::milog::MiLogStream v39; // [rsp+A0h] [rbp-270h] BYREF
  char v40[592]; // [rsp+C0h] [rbp-250h] BYREF

  v4 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(544LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 12 block_id:852 48 4 28 home_block_data_block_id:874 64 64 18 tmp_main_house:900 160 312 "
                        "19 home_block_data:866";
  *(_QWORD *)(v4 + 16) = HomeSceneArrangementData::fromClient;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862724] = -218959118;
  v6[536862734] = -218103808;
  v6[536862735] = -202116109;
  v6[536862736] = -202116109;
  v7 = proto::HomeSceneArrangementInfo::scene_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = v7;
  __for_range = proto::HomeSceneArrangementInfo::block_arrangement_info_list(proto);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeBlockArrangementInfo>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockArrangementInfo const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    home_block_proto = google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockArrangementInfo const>::operator*(&__for_begin);
    *(_DWORD *)(v4 + 32) = proto::HomeBlockArrangementInfo::block_id(home_block_proto);
    cur_block_data_ptr = HomeSceneArrangementData::findHomeBlockData(cur, *(_DWORD *)(v4 + 32));
    if ( cur_block_data_ptr )
    {
      if ( *(char *)(((unsigned __int64)&cur_block_data_ptr->is_unlocked >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&cur_block_data_ptr->is_unlocked);
      if ( !cur_block_data_ptr->is_unlocked )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_module_data.cpp",
          "fromClient",
          862);
        v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v39,
               (const char (*)[30])"block not unlocked. block_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
      else
      {
        HomeBlockData::HomeBlockData((HomeBlockData *const)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v4 + 160) = this->scene_id;
        *(_BYTE *)(v4 + 168) = 1;
        if ( HomeBlockData::fromClient((HomeBlockData *const)(v4 + 160), home_block_proto) )
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/home/home_module_data.cpp",
            "fromClient",
            871);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v39,
            (const char (*)[37])"home_block_data.fromClient() failed.");
          common::milog::MiLogStream::~MiLogStream(&v39);
          v3 = -1;
          v10 = 0;
        }
        else
        {
          *(_DWORD *)(v4 + 48) = *(_DWORD *)(v4 + 164);
          v11 = std::move<HomeBlockData &>((HomeBlockData *)(v4 + 160));
          v14 = std::map<unsigned int,HomeBlockData>::emplace<unsigned int &,HomeBlockData>(
                  &this->block_data_map,
                  (unsigned int *)(v4 + 48),
                  v11,
                  v12,
                  v13);
          if ( !v14.second )
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/home/home_module_data.cpp",
              "fromClient",
              877);
            v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v39,
                    (const char (*)[41])"home_scene_data already exists. block_id");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v39);
            v3 = -1;
            v10 = 0;
          }
          else
          {
            v10 = 1;
          }
        }
        HomeBlockData::~HomeBlockData((HomeBlockData *const)(v4 + 160));
        if ( v10 != 1 )
          goto LABEL_45;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "fromClient",
        856);
      v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v39,
             (const char (*)[26])"block not find. block_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeBlockArrangementInfo const>::operator++(&__for_begin);
  }
  __for_range_0 = &cur->block_data_map;
  __for_begin.it_ = (void *const *)std::map<unsigned int,HomeBlockData>::begin(&cur->block_data_map)._M_node;
  __for_end.it_ = (void *const *)std::map<unsigned int,HomeBlockData>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::_Self *)&__for_end) )
  {
    v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> > *const)&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v33);
    block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v33);
    if ( !std::map<unsigned int,HomeBlockData>::count(&this->block_data_map, block_id) )
      std::map<unsigned int,HomeBlockData>::emplace<unsigned int const&,HomeBlockData const&>(
        &this->block_data_map,
        block_id,
        block_data,
        (const unsigned int *)&this->block_data_map,
        v16);
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> > *const)&__for_begin);
  }
  is_set_born_pos = proto::HomeSceneArrangementInfo::is_set_born_pos(proto);
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_set_born_pos);
  this->is_set_born_pos = is_set_born_pos;
  if ( this->is_set_born_pos )
  {
    v18 = proto::HomeSceneArrangementInfo::born_pos(proto);
    Vector3::Vector3(&v38, v18);
    if ( (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 71) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->born_pos, 12LL);
    }
    this->born_pos = v38;
    v19 = proto::HomeSceneArrangementInfo::born_rot(proto);
    Vector3::Vector3(&v38, v19);
    if ( *(char *)(((unsigned __int64)&this->born_rot >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&this->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_rot.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->born_rot, 12LL);
    }
    this->born_rot = v38;
  }
  v20 = proto::HomeSceneArrangementInfo::door_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureData,proto::HomeFurnitureData,int (HomeFurnitureData::*)(proto::HomeFurnitureData const&)>(
    v20,
    &this->door_vec,
    (int (*)(HomeFurnitureData *, const proto::HomeFurnitureData *))HomeFurnitureData::fromClient);
  v21 = proto::HomeSceneArrangementInfo::stair_list(proto);
  common::tools::MiscUtils::repeatedToVector<HomeFurnitureData,proto::HomeFurnitureData,int (HomeFurnitureData::*)(proto::HomeFurnitureData const&)>(
    v21,
    &this->stair_vec,
    (int (*)(HomeFurnitureData *, const proto::HomeFurnitureData *))HomeFurnitureData::fromClient);
  if ( proto::HomeSceneArrangementInfo::has_main_house(proto) )
  {
    HomeFurnitureData::HomeFurnitureData((HomeFurnitureData *const)(v4 + 64));
    v22 = proto::HomeSceneArrangementInfo::main_house(proto);
    HomeFurnitureData::fromClient((HomeFurnitureData *const)(v4 + 64), v22);
    v23 = std::move<HomeFurnitureData &>((HomeFurnitureData *)(v4 + 64));
    std::optional<HomeFurnitureData>::operator=<HomeFurnitureData>(&this->main_house, v23);
    v24 = proto::HomeSceneArrangementInfo::djinn_pos(proto);
    Vector3::Vector3(&v38, v24);
    if ( (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->djinn_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->djinn_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->djinn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&this->djinn_pos.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&this->djinn_pos, 12LL);
    }
    this->djinn_pos = v38;
  }
  v25 = proto::HomeSceneArrangementInfo::tmp_version(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tmp_version);
  }
  this->tmp_version = v25;
  v26 = proto::HomeSceneArrangementInfo::bgm_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bgm_id);
  }
  this->bgm_id = v26;
  HomeSceneArrangementData::onDataChanged(this);
  v3 = 0;
LABEL_45:
  result = v3;
  if ( v40 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 912: range 000000001459EC14-000000001459F06C
int32_t __cdecl HomeSceneArrangementData::toClient(
        const HomeSceneArrangementData *const this,
        proto::HomeSceneArrangementInfo *proto)
{
  common::milog::MiLogStream *v2; // rax
  proto::Vector *v4; // rax
  proto::Vector *v5; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *v6; // rax
  google::protobuf::RepeatedPtrField<proto::HomeFurnitureData> *v7; // rax
  const HomeFurnitureData *v8; // rbx
  proto::HomeFurnitureData *v9; // rax
  proto::Vector *v10; // rax
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+28h] [rbp-78h]
  const std::pair<unsigned int const,HomeBlockData> *v14; // [rsp+30h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+38h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *home_block_data; // [rsp+40h] [rbp-60h]
  proto::HomeBlockArrangementInfo *block_proto; // [rsp+48h] [rbp-58h]
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-50h] BYREF

  __for_range = &this->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&this->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&this->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v14);
    home_block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v14);
    block_proto = proto::HomeSceneArrangementInfo::add_block_arrangement_info_list(proto);
    if ( HomeBlockData::toClient(home_block_data, block_proto) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "toClient",
        918);
      v2 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v18,
             (const char (*)[46])"home_block_data.toClient() failed, block_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &home_block_data->block_id);
      common::milog::MiLogStream::~MiLogStream(&v18);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_set_born_pos);
  proto::HomeSceneArrangementInfo::set_is_set_born_pos(proto, this->is_set_born_pos);
  if ( *(char *)(((unsigned __int64)&this->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_set_born_pos);
  if ( this->is_set_born_pos )
  {
    v4 = proto::HomeSceneArrangementInfo::mutable_born_pos(proto);
    Vector3::toClient(&this->born_pos, v4);
    v5 = proto::HomeSceneArrangementInfo::mutable_born_rot(proto);
    Vector3::toClient(&this->born_rot, v5);
  }
  v6 = proto::HomeSceneArrangementInfo::mutable_door_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureData,proto::HomeFurnitureData,int (HomeFurnitureData::*)(proto::HomeFurnitureData&)const>(
    &this->door_vec,
    v6,
    (int (*)(const HomeFurnitureData *, proto::HomeFurnitureData *))HomeFurnitureData::toClient);
  v7 = proto::HomeSceneArrangementInfo::mutable_stair_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeFurnitureData,proto::HomeFurnitureData,int (HomeFurnitureData::*)(proto::HomeFurnitureData&)const>(
    &this->stair_vec,
    v7,
    (int (*)(const HomeFurnitureData *, proto::HomeFurnitureData *))HomeFurnitureData::toClient);
  if ( std::optional<HomeFurnitureData>::has_value(&this->main_house) )
  {
    v8 = std::optional<HomeFurnitureData>::operator->(&this->main_house);
    v9 = proto::HomeSceneArrangementInfo::mutable_main_house(proto);
    HomeFurnitureData::toClient(v8, v9);
    v10 = proto::HomeSceneArrangementInfo::mutable_djinn_pos(proto);
    Vector3::toClient(&this->djinn_pos, v10);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeSceneArrangementInfo::set_comfort_value(proto, this->comfort_value);
  if ( *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tmp_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeSceneArrangementInfo::set_tmp_version(proto, this->tmp_version);
  if ( *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeSceneArrangementInfo::set_bgm_id(proto, this->bgm_id);
  return 0;
};

// Line 942: range 000000001459F124-000000001459F5D3
void __cdecl HomeSceneArrangementData::toAuditData(
        const HomeSceneArrangementData *const this,
        proto::HomeSceneArrangementMuipData *aduit_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  data::SceneType SceneTypeBySceneId; // eax
  bool is_room; // [rsp+17h] [rbp-F9h]
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<HomeFurnitureGroupData>::const_iterator __for_begin_1; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<HomeFurnitureGroupData>::const_iterator __for_end_1; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<HomeFurnitureData>::const_iterator __for_begin_0; // [rsp+38h] [rbp-D8h] BYREF
  std::vector<HomeFurnitureData>::const_iterator __for_end_0; // [rsp+40h] [rbp-D0h] BYREF
  const std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+48h] [rbp-C8h]
  const std::pair<unsigned int const,HomeBlockData> *v15; // [rsp+50h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+58h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+60h] [rbp-B0h]
  proto::HomeBlockArrangementMuipData *home_block_arrangement_muip_data; // [rsp+68h] [rbp-A8h]
  const std::vector<HomeFurnitureData> *__for_range_0; // [rsp+70h] [rbp-A0h]
  const std::vector<HomeFurnitureGroupData> *__for_range_1; // [rsp+78h] [rbp-98h]
  const HomeFurnitureGroupData *furniture_group_data; // [rsp+80h] [rbp-90h]
  const std::vector<HomeFurnitureData> *__for_range_2; // [rsp+88h] [rbp-88h]
  const HomeFurnitureData *furniture_data_0; // [rsp+90h] [rbp-80h]
  const HomeFurnitureData *furniture_data; // [rsp+98h] [rbp-78h]
  std::shared_ptr<Config> v25; // [rsp+A0h] [rbp-70h] BYREF
  char v26[96]; // [rsp+B0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 23 fill_furniture_data:943";
  *(_QWORD *)(v2 + 16) = HomeSceneArrangementData::toAuditData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.scene_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  SceneTypeBySceneId = SceneExcelConfigMgr::getSceneTypeBySceneId(p_scene_config_mgr, this->scene_id);
  is_room = SceneExcelConfigMgr::isRoomScene(SceneTypeBySceneId);
  std::shared_ptr<Config>::~shared_ptr(&v25);
  proto::HomeSceneArrangementMuipData::set_is_room(aduit_data, is_room);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeSceneArrangementMuipData::set_scene_id(aduit_data, this->scene_id);
  __for_range = &this->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&this->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&this->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v15);
    block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v15);
    home_block_arrangement_muip_data = proto::HomeSceneArrangementMuipData::add_block_data_list(aduit_data);
    if ( *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomeBlockArrangementMuipData::set_block_id(home_block_arrangement_muip_data, *block_id);
    __for_range_0 = &block_data->deploy_furniure_vec;
    __for_begin_0._M_current = std::vector<HomeFurnitureData>::begin(&block_data->deploy_furniure_vec)._M_current;
    __for_end_0._M_current = std::vector<HomeFurnitureData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(&__for_begin_0, &__for_end_0) )
    {
      furniture_data = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*(&__for_begin_0);
      HomeSceneArrangementData::toAuditData(proto::HomeSceneArrangementMuipData &)const::{lambda(proto::HomeBlockArrangementMuipData &,HomeFurnitureData const&)#1}::operator()(
        (const HomeSceneArrangementData::toAuditData::<lambda(proto::HomeBlockArrangementMuipData&, const HomeFurnitureData&)> *const)(v2 + 32),
        home_block_arrangement_muip_data,
        furniture_data);
      __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++(&__for_begin_0);
    }
    __for_range_1 = &block_data->deploy_furniture_group_vec;
    __for_begin_1._M_current = std::vector<HomeFurnitureGroupData>::begin(&block_data->deploy_furniture_group_vec)._M_current;
    __for_end_1._M_current = std::vector<HomeFurnitureGroupData>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>(
              &__for_begin_1,
              &__for_end_1) )
    {
      furniture_group_data = __gnu_cxx::__normal_iterator<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>::operator*(&__for_begin_1);
      __for_range_2 = &furniture_group_data->virtual_furniure_vec;
      __for_begin_0._M_current = std::vector<HomeFurnitureData>::begin(&furniture_group_data->virtual_furniure_vec)._M_current;
      __for_end_0._M_current = std::vector<HomeFurnitureData>::end(__for_range_2)._M_current;
      while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(
                &__for_begin_0,
                &__for_end_0) )
      {
        furniture_data_0 = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*(&__for_begin_0);
        HomeSceneArrangementData::toAuditData(proto::HomeSceneArrangementMuipData &)const::{lambda(proto::HomeBlockArrangementMuipData &,HomeFurnitureData const&)#1}::operator()(
          (const HomeSceneArrangementData::toAuditData::<lambda(proto::HomeBlockArrangementMuipData&, const HomeFurnitureData&)> *const)(v2 + 32),
          home_block_arrangement_muip_data,
          furniture_data_0);
        __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++(&__for_begin_0);
      }
      __gnu_cxx::__normal_iterator<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>::operator++(&__for_begin_1);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 943: range 000000001459F06E-000000001459F123
void __cdecl HomeSceneArrangementData::toAuditData(proto::HomeSceneArrangementMuipData &)const::{lambda(proto::HomeBlockArrangementMuipData &,HomeFurnitureData const&)#1}::operator()(
        const HomeSceneArrangementData::toAuditData::<lambda(proto::HomeBlockArrangementMuipData&, const HomeFurnitureData&)> *const __closure,
        proto::HomeBlockArrangementMuipData *data,
        const HomeFurnitureData *furniture_data)
{
  proto::Vector *v3; // rax
  proto::Vector *v4; // rax
  proto::HomeFurnitureArrangementMuipData *home_furniture_muip_data; // [rsp+28h] [rbp-18h]

  home_furniture_muip_data = proto::HomeBlockArrangementMuipData::add_furniture_data_list(data);
  if ( *(_BYTE *)(((unsigned __int64)furniture_data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)furniture_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_data >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFurnitureArrangementMuipData::set_furniture_id(home_furniture_muip_data, furniture_data->furniture_id);
  v3 = proto::HomeFurnitureArrangementMuipData::mutable_spawn_pos(home_furniture_muip_data);
  Vector3::toClient(&furniture_data->source_pos, v3);
  v4 = proto::HomeFurnitureArrangementMuipData::mutable_spawn_rot(home_furniture_muip_data);
  Vector3::toClient(&furniture_data->source_rot, v4);
};

// Line 972: range 000000001459F5D4-000000001459F6F8
void __cdecl HomeSceneArrangementData::clear(HomeSceneArrangementData *const this)
{
  std::map<unsigned int,HomeBlockData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,HomeBlockData> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&this->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&this->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(__in);
    block_data = std::get<1ul,unsigned int const,HomeBlockData>(__in);
    HomeBlockData::clear(block_data);
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
  std::vector<HomeFurnitureData>::clear(&this->door_vec);
  std::vector<HomeFurnitureData>::clear(&this->stair_vec);
  std::optional<HomeFurnitureData>::reset(&this->main_house);
  if ( *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bgm_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bgm_id);
  }
  this->bgm_id = 0;
  HomeSceneArrangementData::onDataChanged(this);
};

// Line 985: range 000000001459F6FA-00000000145A0CC8
void __cdecl HomeSceneArrangementData::onDataChanged(HomeSceneArrangementData *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v4; // rax
  _DWORD *v5; // rdx
  uint32_t FurnitureComfortValue; // ecx
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  int v8; // ecx
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  uint32_t v11; // ecx
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  int v13; // ecx
  uint32_t comfort_value; // ecx
  const JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t v16; // edx
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v21; // rax
  int v22; // ecx
  std::map<unsigned int,unsigned int>::mapped_type *v23; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v24; // rax
  std::vector<HomeMarkPointFurnitureData>::value_type *v25; // rax
  int v26; // ecx
  const HomeFurnitureSuiteData *v27; // r8
  std::map<unsigned int,HomeBlockData>::iterator __for_begin_0; // [rsp+18h] [rbp-298h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end_0; // [rsp+20h] [rbp-290h] BYREF
  std::vector<HomeFurnitureGroupData>::iterator __for_begin_1; // [rsp+28h] [rbp-288h] BYREF
  std::vector<HomeFurnitureGroupData>::iterator __for_end_1; // [rsp+30h] [rbp-280h] BYREF
  std::vector<HomeFurnitureData>::iterator __for_begin; // [rsp+38h] [rbp-278h] BYREF
  std::vector<HomeFurnitureData>::iterator __for_end; // [rsp+40h] [rbp-270h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+48h] [rbp-268h]
  std::vector<HomeFurnitureData> *__for_range; // [rsp+50h] [rbp-260h]
  std::set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-258h]
  std::vector<HomeFurnitureData> *__for_range_1; // [rsp+60h] [rbp-250h]
  std::set<unsigned int> *__for_range_2; // [rsp+68h] [rbp-248h]
  std::map<unsigned int,HomeBlockData> *__for_range_3; // [rsp+70h] [rbp-240h]
  std::pair<unsigned int const,HomeBlockData> *__in; // [rsp+78h] [rbp-238h]
  std::tuple_element<0,std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+80h] [rbp-230h]
  std::tuple_element<1,std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+88h] [rbp-228h]
  const data::ConfigHomeworldBlockAutoGen *config_home_block_auto_gen_ptr; // [rsp+90h] [rbp-220h]
  std::vector<HomeFurnitureData> *__for_range_4; // [rsp+98h] [rbp-218h]
  std::vector<HomeFurnitureData> *__for_range_5; // [rsp+A0h] [rbp-210h]
  std::vector<HomeNpcData> *__for_range_6; // [rsp+A8h] [rbp-208h]
  std::vector<HomeFurnitureSuiteData> *__for_range_7; // [rsp+B0h] [rbp-200h]
  std::vector<HomeFurnitureGroupData> *__for_range_8; // [rsp+B8h] [rbp-1F8h]
  HomeFurnitureGroupData *furniture_group_data; // [rsp+C0h] [rbp-1F0h]
  std::vector<HomeFurnitureData> *__for_range_9; // [rsp+C8h] [rbp-1E8h]
  HomeFurnitureData *furniture_3; // [rsp+D0h] [rbp-1E0h]
  const HomeFurnitureSuiteData *suit; // [rsp+D8h] [rbp-1D8h]
  const HomeNpcData *npc; // [rsp+E0h] [rbp-1D0h]
  HomeFurnitureData *furniture_2; // [rsp+E8h] [rbp-1C8h]
  HomeFurnitureData *furniture_1; // [rsp+F0h] [rbp-1C0h]
  const unsigned int *furniture_id_0; // [rsp+F8h] [rbp-1B8h]
  const HomeFurnitureData *furniture_0; // [rsp+100h] [rbp-1B0h]
  const unsigned int *furniture_id; // [rsp+108h] [rbp-1A8h]
  const HomeFurnitureData *furniture; // [rsp+110h] [rbp-1A0h]
  Vector3 center_pos; // [rsp+118h] [rbp-198h] BYREF
  Vector3 center_rot; // [rsp+124h] [rbp-18Ch] BYREF
  std::shared_ptr<Config> v63; // [rsp+130h] [rbp-180h] BYREF
  common::milog::MiLogStream v64; // [rsp+140h] [rbp-170h] BYREF
  char v65[336]; // [rsp+160h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 19 furniture_type:1056 64 20 25 mark_point_furniture:1069 128 48 25 door_furniture_id_set"
                        ":999 208 48 27 stair_furniture_id_set:1014";
  *(_QWORD *)(v1 + 16) = HomeSceneArrangementData::onDataChanged;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234618880;
  v3[536862723] = -218959118;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v63);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v63);
  if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->comfort_value);
  }
  this->comfort_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_count);
  }
  this->furniture_count = 0;
  std::map<unsigned int,unsigned int>::clear(&this->furniture_arrange_count_map);
  std::map<unsigned int,unsigned int>::clear(&this->furniture_arrange_type_count_map);
  std::set<unsigned int>::clear(&this->scene_npc_avatar_id_set);
  std::multimap<unsigned int,HomeFurnitureSuiteData>::clear(&this->scene_furniture_suit_map);
  std::vector<HomeMarkPointFurnitureData>::clear(&this->normal_mark_point_vec);
  std::map<unsigned int,unsigned int>::clear(&this->group_furniture_map);
  std::map<unsigned int,HomeFurnitureServerGadgetData>::clear(&this->server_gadget_map);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 128));
  __for_range = &this->door_vec;
  __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&this->door_vec)._M_current;
  __for_end._M_current = std::vector<HomeFurnitureData>::end(&this->door_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
  {
    furniture = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
    v4 = std::map<unsigned int,unsigned int>::operator[](&this->furniture_arrange_count_map, &furniture->furniture_id);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v4);
    }
    *v5 = 1;
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v1 + 128), &furniture->furniture_id);
    __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::set<unsigned int> *)(v1 + 128);
  __for_begin._M_current = (HomeFurnitureData *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 128))._M_node;
  __for_end._M_current = (HomeFurnitureData *)std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    furniture_id = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    FurnitureComfortValue = HomeWorldExcelConfigMgr::getFurnitureComfortValue(home_config_mgr, *furniture_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    this->comfort_value += FurnitureComfortValue;
    if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = HomeWorldExcelConfigMgr::getFurnitureType(home_config_mgr, *furniture_id);
    v7 = std::map<unsigned int,unsigned int>::operator[](
           &this->furniture_arrange_type_count_map,
           (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v7;
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  v8 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v1 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  this->furniture_count += v8;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 208));
  __for_range_1 = &this->stair_vec;
  __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&this->stair_vec)._M_current;
  __for_end._M_current = std::vector<HomeFurnitureData>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
  {
    furniture_0 = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
    v9 = std::map<unsigned int,unsigned int>::operator[](&this->furniture_arrange_count_map, &furniture_0->furniture_id);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v9);
    }
    *v10 = 1;
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v1 + 208), &furniture_0->furniture_id);
    __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
  }
  __for_range_2 = (std::set<unsigned int> *)(v1 + 208);
  __for_begin._M_current = (HomeFurnitureData *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 208))._M_node;
  __for_end._M_current = (HomeFurnitureData *)std::set<unsigned int>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    furniture_id_0 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)furniture_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id_0 >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v11 = HomeWorldExcelConfigMgr::getFurnitureComfortValue(home_config_mgr, *furniture_id_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    this->comfort_value += v11;
    if ( *(_BYTE *)(((unsigned __int64)furniture_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id_0 >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = HomeWorldExcelConfigMgr::getFurnitureType(home_config_mgr, *furniture_id_0);
    v12 = std::map<unsigned int,unsigned int>::operator[](
            &this->furniture_arrange_type_count_map,
            (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v12;
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  v13 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v1 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  this->furniture_count += v13;
  __for_range_3 = &this->block_data_map;
  __for_begin_0._M_node = std::map<unsigned int,HomeBlockData>::begin(&this->block_data_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_3)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin_0);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(__in);
    block_data = std::get<1ul,unsigned int const,HomeBlockData>(__in);
    if ( *(char *)(((unsigned __int64)&block_data->is_unlocked >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&block_data->is_unlocked);
    if ( block_data->is_unlocked )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->comfort_value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      comfort_value = this->comfort_value;
      if ( *(_BYTE *)(((unsigned __int64)&block_data->comfort_value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&block_data->comfort_value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      this->comfort_value = comfort_value + block_data->comfort_value;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v63);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63)->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) )
    {
      p_json_config_mgr = (const JsonConfigMgr *)block_id;
      __asan_report_load4();
    }
    v16 = *block_id;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      p_json_config_mgr = (const JsonConfigMgr *)this;
      __asan_report_load4();
    }
    config_home_block_auto_gen_ptr = JsonConfigMgr::findHomeBlockAutoGenConfig(p_json_config_mgr, this->scene_id, v16);
    std::shared_ptr<Config>::~shared_ptr(&v63);
    if ( !config_home_block_auto_gen_ptr )
    {
      common::milog::MiLogStream::create(
        &v64,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "onDataChanged",
        1040);
      v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v64,
              (const char (*)[43])"findHomeBlockAutoGenConfig fail, scene_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->scene_id);
      v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" block_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, block_id);
      common::milog::MiLogStream::~MiLogStream(&v64);
    }
    __for_range_4 = &block_data->persistent_furniture_vec;
    __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&block_data->persistent_furniture_vec)._M_current;
    __for_end._M_current = std::vector<HomeFurnitureData>::end(__for_range_4)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
    {
      furniture_1 = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
      v20 = std::map<unsigned int,unsigned int>::operator[](
              &this->furniture_arrange_count_map,
              &furniture_1->furniture_id);
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++*v20;
      if ( *(_BYTE *)(((unsigned __int64)furniture_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = HomeWorldExcelConfigMgr::getFurnitureType(home_config_mgr, furniture_1->furniture_id);
      v21 = std::map<unsigned int,unsigned int>::operator[](
              &this->furniture_arrange_type_count_map,
              (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++*v21;
      if ( config_home_block_auto_gen_ptr )
      {
        Vector3::Vector3(&center_rot, &config_home_block_auto_gen_ptr->center_rot);
        Vector3::Vector3(&center_pos, &config_home_block_auto_gen_ptr->center_pos);
        HomeFurnitureData::updateAbsolutePosition(furniture_1, &center_pos, &center_rot);
      }
      __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
    }
    v22 = std::vector<HomeFurnitureData>::size(&block_data->persistent_furniture_vec);
    if ( *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    this->furniture_count += v22;
    __for_range_5 = &block_data->deploy_furniure_vec;
    __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&block_data->deploy_furniure_vec)._M_current;
    __for_end._M_current = std::vector<HomeFurnitureData>::end(__for_range_5)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
    {
      furniture_2 = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
      v23 = std::map<unsigned int,unsigned int>::operator[](
              &this->furniture_arrange_count_map,
              &furniture_2->furniture_id);
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++*v23;
      if ( *(_BYTE *)(((unsigned __int64)furniture_2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = HomeWorldExcelConfigMgr::getFurnitureType(home_config_mgr, furniture_2->furniture_id);
      v24 = std::map<unsigned int,unsigned int>::operator[](
              &this->furniture_arrange_type_count_map,
              (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++*v24;
      if ( config_home_block_auto_gen_ptr )
      {
        Vector3::Vector3(&center_rot, &config_home_block_auto_gen_ptr->center_rot);
        Vector3::Vector3(&center_pos, &config_home_block_auto_gen_ptr->center_pos);
        HomeFurnitureData::updateAbsolutePosition(furniture_2, &center_pos, &center_rot);
      }
      if ( *(_BYTE *)(((unsigned __int64)furniture_2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( HomeWorldExcelConfigMgr::getFurnitureSpeicalType(home_config_mgr, furniture_2->furniture_id) == Paimon )
      {
        HomeMarkPointFurnitureData::HomeMarkPointFurnitureData((HomeMarkPointFurnitureData *const)(v1 + 64));
        HomeMarkPointFurnitureData::fromData((HomeMarkPointFurnitureData *const)(v1 + 64), furniture_2);
        v25 = std::move<HomeMarkPointFurnitureData &>((HomeMarkPointFurnitureData *)(v1 + 64));
        std::vector<HomeMarkPointFurnitureData>::push_back(&this->normal_mark_point_vec, v25);
      }
      __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
    }
    v26 = std::vector<HomeFurnitureData>::size(&block_data->deploy_furniure_vec);
    if ( *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    this->furniture_count += v26;
    __for_range_6 = &block_data->deploy_npc_vec;
    __for_begin._M_current = (HomeFurnitureData *)std::vector<HomeNpcData>::begin(&block_data->deploy_npc_vec)._M_current;
    __for_end._M_current = (HomeFurnitureData *)std::vector<HomeNpcData>::end(__for_range_6)._M_current;
    while ( __gnu_cxx::operator!=<HomeNpcData *,std::vector<HomeNpcData>>(
              (const __gnu_cxx::__normal_iterator<HomeNpcData*,std::vector<HomeNpcData> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<HomeNpcData*,std::vector<HomeNpcData> > *)&__for_end) )
    {
      npc = __gnu_cxx::__normal_iterator<HomeNpcData *,std::vector<HomeNpcData>>::operator*((const __gnu_cxx::__normal_iterator<HomeNpcData*,std::vector<HomeNpcData> > *const)&__for_begin);
      std::set<unsigned int>::insert(&this->scene_npc_avatar_id_set, &npc->avatar_id);
      __gnu_cxx::__normal_iterator<HomeNpcData *,std::vector<HomeNpcData>>::operator++((__gnu_cxx::__normal_iterator<HomeNpcData*,std::vector<HomeNpcData> > *const)&__for_begin);
    }
    __for_range_7 = &block_data->furniure_suite_vec;
    __for_begin._M_current = (HomeFurnitureData *)std::vector<HomeFurnitureSuiteData>::begin(&block_data->furniure_suite_vec)._M_current;
    __for_end._M_current = (HomeFurnitureData *)std::vector<HomeFurnitureSuiteData>::end(__for_range_7)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureSuiteData *,std::vector<HomeFurnitureSuiteData>>(
              (const __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *)&__for_end) )
    {
      suit = __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData *,std::vector<HomeFurnitureSuiteData>>::operator*((const __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *const)&__for_begin);
      std::multimap<unsigned int,HomeFurnitureSuiteData>::emplace<unsigned int const&,HomeFurnitureSuiteData const&>(
        &this->scene_furniture_suit_map,
        &suit->suite_id,
        suit,
        (const unsigned int *)&this->scene_furniture_suit_map,
        v27);
      __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData *,std::vector<HomeFurnitureSuiteData>>::operator++((__gnu_cxx::__normal_iterator<HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *const)&__for_begin);
    }
    __for_range_8 = &block_data->deploy_furniture_group_vec;
    __for_begin_1._M_current = std::vector<HomeFurnitureGroupData>::begin(&block_data->deploy_furniture_group_vec)._M_current;
    __for_end_1._M_current = std::vector<HomeFurnitureGroupData>::end(__for_range_8)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureGroupData *,std::vector<HomeFurnitureGroupData>>(
              &__for_begin_1,
              &__for_end_1) )
    {
      furniture_group_data = __gnu_cxx::__normal_iterator<HomeFurnitureGroupData *,std::vector<HomeFurnitureGroupData>>::operator*(&__for_begin_1);
      __for_range_9 = &furniture_group_data->virtual_furniure_vec;
      __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&furniture_group_data->virtual_furniure_vec)._M_current;
      __for_end._M_current = std::vector<HomeFurnitureData>::end(__for_range_9)._M_current;
      while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
      {
        furniture_3 = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
        if ( config_home_block_auto_gen_ptr )
        {
          Vector3::Vector3(&center_rot, &config_home_block_auto_gen_ptr->center_rot);
          Vector3::Vector3(&center_pos, &config_home_block_auto_gen_ptr->center_pos);
          HomeFurnitureData::updateAbsolutePosition(furniture_3, &center_pos, &center_rot);
        }
        __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
      }
      __gnu_cxx::__normal_iterator<HomeFurnitureGroupData *,std::vector<HomeFurnitureGroupData>>::operator++(&__for_begin_1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin_0);
  }
  HomeSceneArrangementData::fillTransferPoint(this);
  HomeSceneArrangementData::fillServerGadgetInfo(this);
  HomeSceneArrangementData::updateSceneGroups(this);
  HomeSceneArrangementData::updateHasChangeBgmFurniture(this);
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 208));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 128));
  if ( v65 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 1108: range 00000000145A0CCA-00000000145A12A5
void __cdecl HomeSceneArrangementData::fillTransferPoint(HomeSceneArrangementData *const this)
{
  uint32_t v1; // ecx
  uint32_t furniture_id; // ecx
  common::milog::MiLogStream *v3; // rax
  std::map<unsigned int,HomeBlockData>::iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  std::vector<HomeFurnitureData>::iterator __for_begin_0; // [rsp+20h] [rbp-90h] BYREF
  std::vector<HomeFurnitureData>::iterator __for_end_0; // [rsp+28h] [rbp-88h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+30h] [rbp-80h]
  std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+38h] [rbp-78h]
  std::pair<unsigned int const,HomeBlockData> *__in; // [rsp+40h] [rbp-70h]
  std::tuple_element<0,std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+48h] [rbp-68h]
  std::tuple_element<1,std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+50h] [rbp-60h]
  std::vector<HomeFurnitureData> *__for_range_0; // [rsp+58h] [rbp-58h]
  const HomeFurnitureData *furniture; // [rsp+60h] [rbp-50h]
  HomeTransferData *transfer_data; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v16; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+80h] [rbp-30h] BYREF

  std::map<unsigned int,HomeTransferData>::clear(&this->scene_transfer_map);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  __for_range = &this->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&this->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&this->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(__in);
    block_data = std::get<1ul,unsigned int const,HomeBlockData>(__in);
    if ( *(char *)(((unsigned __int64)&block_data->is_unlocked >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&block_data->is_unlocked);
    if ( block_data->is_unlocked )
    {
      __for_range_0 = &block_data->deploy_furniure_vec;
      __for_begin_0._M_current = std::vector<HomeFurnitureData>::begin(&block_data->deploy_furniure_vec)._M_current;
      __for_end_0._M_current = std::vector<HomeFurnitureData>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin_0, &__for_end_0) )
      {
        furniture = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( HomeWorldExcelConfigMgr::getFurnitureSpeicalType(home_config_mgr, furniture->furniture_id) == TeleportPoint )
        {
          transfer_data = std::map<unsigned int,HomeTransferData>::operator[](
                            &this->scene_transfer_map,
                            &furniture->guid);
          if ( *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v1 = *block_id;
          if ( *(_BYTE *)(((unsigned __int64)transfer_data >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)transfer_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)transfer_data >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_store4(transfer_data);
          }
          transfer_data->block_id = v1;
          if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          furniture_id = furniture->furniture_id;
          if ( *(_BYTE *)(((unsigned __int64)&transfer_data->furniture_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)transfer_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&transfer_data->furniture_id >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_store4(&transfer_data->furniture_id);
          }
          transfer_data->furniture_id = furniture_id;
          if ( (((unsigned __int8)transfer_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&transfer_data->spawn_pos >> 3)
                                                                      + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&transfer_data->spawn_pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&transfer_data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)transfer_data + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&transfer_data->spawn_pos.z
                                                                         + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&transfer_data->spawn_pos, 12LL);
          }
          if ( (((unsigned __int8)furniture + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&furniture->spawn_pos >> 3)
                                                                  + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&furniture->spawn_pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&furniture->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)furniture + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&furniture->spawn_pos.z + 3) >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load_n(&furniture->spawn_pos, 12LL);
          }
          transfer_data->spawn_pos = furniture->spawn_pos;
          if ( (((unsigned __int8)transfer_data + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&transfer_data->spawn_rot >> 3)
                                                                       + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&transfer_data->spawn_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&transfer_data->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)transfer_data + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&transfer_data->spawn_rot.z
                                                                         + 3) >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_store_n(&transfer_data->spawn_rot, 12LL);
          }
          if ( (((unsigned __int8)furniture + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&furniture->spawn_rot >> 3)
                                                                   + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&furniture->spawn_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&furniture->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)furniture + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&furniture->spawn_rot.z + 3) >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load_n(&furniture->spawn_rot, 12LL);
          }
          transfer_data->spawn_rot = furniture->spawn_rot;
          if ( HomeWorldExcelConfigMgr::getFurnitureTransferPoint(
                 home_config_mgr,
                 furniture->furniture_id,
                 &transfer_data->spawn_pos,
                 &transfer_data->spawn_rot) )
          {
            common::milog::MiLogStream::create(
              &v17,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/home/home_module_data.cpp",
              "fillTransferPoint",
              1129);
            v3 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                   &v17,
                   (const char (*)[46])"getFurnitureTransferPoint fail. furniture_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &furniture->furniture_id);
            common::milog::MiLogStream::~MiLogStream(&v17);
          }
        }
        __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
};

// Line 1137: range 00000000145A12A6-00000000145A196D
void __cdecl HomeSceneArrangementData::updateSceneGroups(HomeSceneArrangementData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::vector<HomeFurnitureData>::size_type group_furniture_index; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::vector<HomeFurnitureData> *p_deploy_furniure_vec; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v12; // rdx
  uint32_t guid; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  uint32_t *v15; // rdx
  std::map<unsigned int,HomeBlockData>::iterator __for_begin; // [rsp+18h] [rbp-178h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end; // [rsp+20h] [rbp-170h] BYREF
  std::vector<HomeFurnitureGroupData>::const_iterator __for_begin_0; // [rsp+28h] [rbp-168h] BYREF
  std::vector<HomeFurnitureGroupData>::const_iterator __for_end_0; // [rsp+30h] [rbp-160h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+38h] [rbp-158h] BYREF
  const JsonConfigMgr *json_config_mgr; // [rsp+40h] [rbp-150h]
  std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+48h] [rbp-148h]
  const std::pair<unsigned int const,HomeBlockData> *v23; // [rsp+50h] [rbp-140h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+58h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *home_block_data; // [rsp+60h] [rbp-130h]
  const std::vector<HomeFurnitureGroupData> *__for_range_0; // [rsp+68h] [rbp-128h]
  const HomeFurnitureGroupData *furniture_group_data; // [rsp+70h] [rbp-120h]
  const HomeFurnitureData *group_root_furniture_data; // [rsp+78h] [rbp-118h]
  const FurnitureGroupJsonConfig *furniture_group_json_config_ptr; // [rsp+80h] [rbp-110h]
  const std::unordered_map<unsigned int,unsigned int> *scene_group_map; // [rsp+88h] [rbp-108h]
  std::shared_ptr<Config> v31; // [rsp+90h] [rbp-100h] BYREF
  common::milog::MiLogStream v32; // [rsp+A0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v33; // [rsp+C0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v34; // [rsp+E0h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+100h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 23 group_furniture_id:1151 48 4 13 group_id:1165 64 8 9 iter:1159";
  *(_QWORD *)(v1 + 16) = HomeSceneArrangementData::updateSceneGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116352;
  std::map<unsigned int,unsigned int>::clear(&this->group_furniture_map);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.json_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v31);
  __for_range = &this->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&this->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&this->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v23);
    home_block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v23);
    __for_range_0 = &home_block_data->deploy_furniture_group_vec;
    __for_begin_0._M_current = std::vector<HomeFurnitureGroupData>::begin(&home_block_data->deploy_furniture_group_vec)._M_current;
    __for_end_0._M_current = std::vector<HomeFurnitureGroupData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      furniture_group_data = __gnu_cxx::__normal_iterator<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)furniture_group_data >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)furniture_group_data >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      group_furniture_index = furniture_group_data->group_furniture_index;
      if ( group_furniture_index < std::vector<HomeFurnitureData>::size(&home_block_data->deploy_furniure_vec) )
      {
        p_deploy_furniure_vec = &home_block_data->deploy_furniure_vec;
        if ( *(_BYTE *)(((unsigned __int64)furniture_group_data >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)furniture_group_data >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        group_root_furniture_data = std::vector<HomeFurnitureData>::operator[](
                                      p_deploy_furniure_vec,
                                      furniture_group_data->group_furniture_index);
        if ( *(_BYTE *)(((unsigned __int64)group_root_furniture_data >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)group_root_furniture_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_root_furniture_data >> 3)
                                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 32) = group_root_furniture_data->furniture_id;
        furniture_group_json_config_ptr = JsonConfigMgr::findFurnitureGroupConfig(json_config_mgr, *(_DWORD *)(v1 + 32));
        if ( furniture_group_json_config_ptr )
        {
          scene_group_map = &furniture_group_json_config_ptr->scene_group_map;
          *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v1 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                          &furniture_group_json_config_ptr->scene_group_map,
                                                                                          &this->scene_id);
          __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(scene_group_map)._M_cur;
          if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
                 (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v1 + 64),
                 &__y) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/home/home_module_data.cpp",
              "updateSceneGroups",
              1162);
            v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                   &v34,
                   (const char (*)[36])"cannot find group_id. furniture_id:");
            v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v9,
                    (const unsigned int *)(v1 + 32));
            v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v10,
                    (const char (*)[12])", scene_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->scene_id);
            common::milog::MiLogStream::~MiLogStream(&v34);
          }
          else
          {
            v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v1 + 64));
            if ( *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v12 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v1 + 48) = v12->second;
            if ( *(_BYTE *)(((unsigned __int64)&group_root_furniture_data->guid >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)group_root_furniture_data + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_root_furniture_data->guid >> 3)
                                                                                       + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            guid = group_root_furniture_data->guid;
            v14 = std::map<unsigned int,unsigned int>::operator[](
                    &this->group_furniture_map,
                    (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 48));
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v14);
            }
            *v15 = guid;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/home/home_module_data.cpp",
            "updateSceneGroups",
            1155);
          v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                 &v33,
                 (const char (*)[52])"findHomeGroupConfig() return nullptr. furniture_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_module_data.cpp",
          "updateSceneGroups",
          1147);
        v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v32,
               (const char (*)[24])"group_furniture_index: ");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v5,
               &furniture_group_data->group_furniture_index);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])off_2540E0C0);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      __gnu_cxx::__normal_iterator<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
  if ( v35 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1172: range 00000000145A196E-00000000145A1BC0
void __cdecl HomeSceneArrangementData::updateHasChangeBgmFurniture(HomeSceneArrangementData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v5; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-78h]
  std::shared_ptr<Config> v9; // [rsp+30h] [rbp-70h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 furniture_id:1174";
  *(_QWORD *)(v1 + 16) = HomeSceneArrangementData::updateHasChangeBgmFurniture;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)&this->has_change_bgm_furniture >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_change_bgm_furniture);
  this->has_change_bgm_furniture = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  __for_range = HomeWorldExcelConfigMgr::getHomeChangeBgmFurnitureIdSet(&v4->design_config.txt_config_mgr.home_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v5;
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
           &this->furniture_arrange_count_map,
           (const unsigned int *)(v1 + 32)) )
    {
      if ( *(char *)(((unsigned __int64)&this->has_change_bgm_furniture >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->has_change_bgm_furniture);
      this->has_change_bgm_furniture = 1;
      break;
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1185: range 00000000145A1BC2-00000000145A2396
void __cdecl HomeSceneArrangementData::fillServerGadgetInfo(HomeSceneArrangementData *const this)
{
  const HomeWorldExcelConfigMgr *v1; // rcx
  common::milog::MiLogStream *v2; // rax
  const HomeWorldExcelConfigMgr *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  uint32_t furniture_id; // ecx
  uint32_t server_gadget_id; // ecx
  std::map<unsigned int,HomeBlockData>::iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<HomeFurnitureData>::iterator __for_begin_0; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<HomeFurnitureData>::iterator __for_end_0; // [rsp+28h] [rbp-D8h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+30h] [rbp-D0h]
  std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+38h] [rbp-C8h]
  std::pair<unsigned int const,HomeBlockData> *__in; // [rsp+40h] [rbp-C0h]
  std::tuple_element<0,std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+48h] [rbp-B8h]
  std::tuple_element<1,std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+50h] [rbp-B0h]
  std::vector<HomeFurnitureData> *__for_range_0; // [rsp+58h] [rbp-A8h]
  const HomeFurnitureData *furniture; // [rsp+60h] [rbp-A0h]
  const data::HomeWorldServerGadgetExcelConfig *server_gadget_config_ptr; // [rsp+70h] [rbp-90h]
  HomeFurnitureServerGadgetData *server_gadget_data; // [rsp+78h] [rbp-88h]
  std::shared_ptr<Config> v22; // [rsp+80h] [rbp-80h] BYREF
  common::milog::MiLogStream v23; // [rsp+90h] [rbp-70h] BYREF
  common::milog::MiLogStream v24; // [rsp+B0h] [rbp-50h] BYREF
  common::milog::MiLogStream v25; // [rsp+D0h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.home_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  __for_range = &this->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&this->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&this->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(__in);
    block_data = std::get<1ul,unsigned int const,HomeBlockData>(__in);
    __for_range_0 = &block_data->deploy_furniure_vec;
    __for_begin_0._M_current = std::vector<HomeFurnitureData>::begin(&block_data->deploy_furniure_vec)._M_current;
    __for_end_0._M_current = std::vector<HomeFurnitureData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin_0, &__for_end_0) )
    {
      furniture = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( HomeWorldExcelConfigMgr::getFurnitureSpeicalType(home_config_mgr, furniture->furniture_id) == ServerGadget )
      {
        v1 = home_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(v1, furniture->furniture_id) )
        {
          v3 = home_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          server_gadget_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldServerGadgetExcelConfig(
                                       v3,
                                       furniture->furniture_id);
          if ( server_gadget_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&server_gadget_config_ptr->server_gadget_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)server_gadget_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&server_gadget_config_ptr->server_gadget_id >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( server_gadget_config_ptr->server_gadget_id )
            {
              server_gadget_data = std::map<unsigned int,HomeFurnitureServerGadgetData>::operator[](
                                     &this->server_gadget_map,
                                     &furniture->guid);
              if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              furniture_id = furniture->furniture_id;
              if ( *(_BYTE *)(((unsigned __int64)server_gadget_data >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)server_gadget_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)server_gadget_data >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_store4(server_gadget_data);
              }
              server_gadget_data->furniture_id = furniture_id;
              if ( *(_BYTE *)(((unsigned __int64)&server_gadget_config_ptr->server_gadget_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)server_gadget_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&server_gadget_config_ptr->server_gadget_id >> 3)
                                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              server_gadget_id = server_gadget_config_ptr->server_gadget_id;
              if ( *(_BYTE *)(((unsigned __int64)&server_gadget_data->gadget_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)server_gadget_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&server_gadget_data->gadget_id >> 3)
                                                                                 + 0x7FFF8000) )
              {
                __asan_report_store4(&server_gadget_data->gadget_id);
              }
              server_gadget_data->gadget_id = server_gadget_id;
              if ( (((unsigned __int8)server_gadget_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&server_gadget_data->spawn_pos >> 3)
                                                                               + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)&server_gadget_data->spawn_pos >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&server_gadget_data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)server_gadget_data + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&server_gadget_data->spawn_pos.z
                                                                                  + 3) >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_store_n(&server_gadget_data->spawn_pos, 12LL);
              }
              if ( (((unsigned __int8)furniture + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&furniture->spawn_pos >> 3)
                                                                      + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)&furniture->spawn_pos >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&furniture->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)furniture + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&furniture->spawn_pos.z + 3) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_load_n(&furniture->spawn_pos, 12LL);
              }
              server_gadget_data->spawn_pos = furniture->spawn_pos;
              if ( (((unsigned __int8)server_gadget_data + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&server_gadget_data->spawn_rot >> 3)
                                                                                + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)&server_gadget_data->spawn_rot >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&server_gadget_data->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)server_gadget_data + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&server_gadget_data->spawn_rot.z
                                                                                  + 3) >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_store_n(&server_gadget_data->spawn_rot, 12LL);
              }
              if ( (((unsigned __int8)furniture + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&furniture->spawn_rot >> 3)
                                                                       + 0x7FFF8000)
                && *(_BYTE *)(((unsigned __int64)&furniture->spawn_rot >> 3) + 0x7FFF8000) != 0
                || *(_BYTE *)((((unsigned __int64)&furniture->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)furniture + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&furniture->spawn_rot.z + 3) >> 3)
                                                                       + 0x7FFF8000) )
              {
                __asan_report_load_n(&furniture->spawn_rot, 12LL);
              }
              server_gadget_data->spawn_rot = furniture->spawn_rot;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v25,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/home/home_module_data.cpp",
                "fillServerGadgetInfo",
                1208);
              v5 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                     &v25,
                     (const char (*)[60])"server gadget config doesn't contains gadget, furniture_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &furniture->furniture_id);
              common::milog::MiLogStream::~MiLogStream(&v25);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/home/home_module_data.cpp",
              "fillServerGadgetInfo",
              1203);
            v4 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                   &v24,
                   (const char (*)[46])"server gadget config not found, furniture_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &furniture->furniture_id);
            common::milog::MiLogStream::~MiLogStream(&v24);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/home/home_module_data.cpp",
            "fillServerGadgetInfo",
            1197);
          v2 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                 &v23,
                 (const char (*)[42])"furniture config not found, furniture_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &furniture->furniture_id);
          common::milog::MiLogStream::~MiLogStream(&v23);
        }
      }
      __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
};

// Line 1223: range 00000000145A2398-00000000145A24EB
HomeBlockData *__fastcall HomeSceneArrangementData::findHomeBlockData(
        HomeSceneArrangementData *const this,
        uint32_t block_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeBlockData *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 block_id:1222 64 8 9 iter:1224";
  *(_QWORD *)(v2 + 16) = HomeSceneArrangementData::findHomeBlockData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = block_id;
  *(std::map<unsigned int,HomeBlockData>::iterator *)(v2 + 64) = std::map<unsigned int,HomeBlockData>::find(
                                                                   &this->block_data_map,
                                                                   (const std::map<unsigned int,HomeBlockData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,HomeBlockData>::end(&this->block_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> > *const)(v2 + 64))->second;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1233: range 00000000145A24EC-00000000145A262C
std::vector<HomeNpcData> *__cdecl HomeSceneArrangementData::getNpcDataVec(
        std::vector<HomeNpcData> *retstr,
        const HomeSceneArrangementData *const this)
{
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::vector<HomeNpcData>::const_iterator __for_begin_0; // [rsp+20h] [rbp-50h] BYREF
  std::vector<HomeNpcData>::const_iterator __for_end_0; // [rsp+28h] [rbp-48h] BYREF
  const std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,HomeBlockData> *v8; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+48h] [rbp-28h]
  const std::vector<HomeNpcData> *__for_range_0; // [rsp+50h] [rbp-20h]
  const HomeNpcData *npc; // [rsp+58h] [rbp-18h]

  std::vector<HomeNpcData>::vector(retstr);
  __for_range = &this->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&this->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&this->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v8);
    block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v8);
    __for_range_0 = &block_data->deploy_npc_vec;
    __for_begin_0._M_current = std::vector<HomeNpcData>::begin(&block_data->deploy_npc_vec)._M_current;
    __for_end_0._M_current = std::vector<HomeNpcData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HomeNpcData const*,std::vector<HomeNpcData>>(&__for_begin_0, &__for_end_0) )
    {
      npc = __gnu_cxx::__normal_iterator<HomeNpcData const*,std::vector<HomeNpcData>>::operator*(&__for_begin_0);
      std::vector<HomeNpcData>::push_back(retstr, npc);
      __gnu_cxx::__normal_iterator<HomeNpcData const*,std::vector<HomeNpcData>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 1246: range 00000000145A262E-00000000145A27A7
void __cdecl HomeSceneArrangementData::fillNpcAvatarIdInfo(
        const HomeSceneArrangementData *const this,
        std::set<unsigned int> *avatar_id_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 avatar_id:1247";
  *(_QWORD *)(v2 + 16) = HomeSceneArrangementData::fillNpcAvatarIdInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &this->scene_npc_avatar_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->scene_npc_avatar_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->scene_npc_avatar_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    std::set<unsigned int>::insert(avatar_id_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1254: range 00000000145A27A8-00000000145A2A70
void __cdecl HomeSceneArrangementData::modifyAvatarCostume(
        HomeSceneArrangementData *const this,
        const std::map<unsigned int,unsigned int> *avatar_costume_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v5; // rdx
  uint32_t second; // ecx
  std::map<unsigned int,HomeBlockData>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<HomeNpcData>::iterator __for_begin_0; // [rsp+28h] [rbp-A8h] BYREF
  std::vector<HomeNpcData>::iterator __for_end_0; // [rsp+30h] [rbp-A0h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+38h] [rbp-98h] BYREF
  std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+40h] [rbp-90h]
  std::pair<unsigned int const,HomeBlockData> *__in; // [rsp+48h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,HomeBlockData> >::type *_; // [rsp+50h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+58h] [rbp-78h]
  std::vector<HomeNpcData> *__for_range_0; // [rsp+60h] [rbp-70h]
  HomeNpcData *npc; // [rsp+68h] [rbp-68h]
  char v18[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 9 iter:1259";
  *(_QWORD *)(v2 + 16) = HomeSceneArrangementData::modifyAvatarCostume;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  __for_range = &this->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&this->block_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&this->block_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeBlockData>(__in);
    block_data = std::get<1ul,unsigned int const,HomeBlockData>(__in);
    __for_range_0 = &block_data->deploy_npc_vec;
    __for_begin_0._M_current = std::vector<HomeNpcData>::begin(&block_data->deploy_npc_vec)._M_current;
    __for_end_0._M_current = std::vector<HomeNpcData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HomeNpcData *,std::vector<HomeNpcData>>(&__for_begin_0, &__for_end_0) )
    {
      npc = __gnu_cxx::__normal_iterator<HomeNpcData *,std::vector<HomeNpcData>>::operator*(&__for_begin_0);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 32) = std::map<unsigned int,unsigned int>::find(
                                                                            avatar_costume_map,
                                                                            &npc->avatar_id);
      __y._M_node = std::map<unsigned int,unsigned int>::end(avatar_costume_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 32),
             &__y) )
      {
        v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v5 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        second = v5->second;
        if ( *(_BYTE *)(((unsigned __int64)&npc->costume_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)npc + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc->costume_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&npc->costume_id);
        }
        npc->costume_id = second;
      }
      __gnu_cxx::__normal_iterator<HomeNpcData *,std::vector<HomeNpcData>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1269: range 00000000145A2A72-00000000145A325D
int32_t __cdecl HomeSceneArrangementData::checkValid(const HomeSceneArrangementData *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rdx
  int32_t result; // eax
  std::vector<HomeFurnitureData>::size_type v7; // r14
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int ret; // [rsp+1Ch] [rbp-124h]
  std::vector<data::ConfigHomeBlock>::const_iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::vector<data::ConfigHomeBlock>::const_iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  std::vector<HomeFurnitureData>::const_iterator __for_end_0; // [rsp+30h] [rbp-110h] BYREF
  const data::ConfigSceneHomeInfo *config_scene_home_ptr; // [rsp+38h] [rbp-108h]
  const std::vector<data::ConfigHomeBlock> *__for_range; // [rsp+40h] [rbp-100h]
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+48h] [rbp-F8h]
  const std::vector<HomeFurnitureData> *__for_range_0; // [rsp+50h] [rbp-F0h]
  const std::vector<HomeFurnitureData> *__for_range_1; // [rsp+58h] [rbp-E8h]
  const HomeFurnitureData *furniture_0; // [rsp+60h] [rbp-E0h]
  const HomeFurnitureData *furniture; // [rsp+68h] [rbp-D8h]
  const data::ConfigHomeBlock *home_block_config; // [rsp+70h] [rbp-D0h]
  const HomeBlockData *home_block; // [rsp+78h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+80h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+B0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 block_id:1278 64 8 9 iter:1279";
  *(_QWORD *)(v1 + 16) = HomeSceneArrangementData::checkValid;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  config_scene_home_ptr = JsonConfigMgr::findSceneHomeConfig(p_json_config_mgr, this->scene_id);
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( config_scene_home_ptr )
  {
    __for_range = &config_scene_home_ptr->block_arrangement_info_list;
    __for_begin._M_current = std::vector<data::ConfigHomeBlock>::begin(&config_scene_home_ptr->block_arrangement_info_list)._M_current;
    __for_end._M_current = std::vector<data::ConfigHomeBlock>::end(&config_scene_home_ptr->block_arrangement_info_list)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>(
              &__for_begin,
              &__for_end) )
    {
      home_block_config = __gnu_cxx::__normal_iterator<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)home_block_config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)home_block_config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = home_block_config->block_id;
      *(std::map<unsigned int,HomeBlockData>::const_iterator *)(v1 + 64) = std::map<unsigned int,HomeBlockData>::find(
                                                                             &this->block_data_map,
                                                                             (const std::map<unsigned int,HomeBlockData>::key_type *)(v1 + 48));
      __for_end_0._M_current = (const HomeFurnitureData *)std::map<unsigned int,HomeBlockData>::cend(&this->block_data_map)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData> >::_Self *)(v1 + 64),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData> >::_Self *)&__for_end_0) )
      {
        home_block = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData> > *const)(v1 + 64))->second;
        ret = HomeBlockData::checkValid(home_block, home_block_config);
        if ( ret )
        {
          result = ret;
          goto LABEL_33;
        }
      }
      __gnu_cxx::__normal_iterator<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.home_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v26);
    v7 = std::vector<HomeFurnitureData>::size(&this->door_vec);
    if ( v7 == std::vector<data::ConfigHomeFurniture>::size(&config_scene_home_ptr->door_list) )
    {
      __for_range_0 = &this->door_vec;
      *(std::vector<HomeFurnitureData>::const_iterator *)(v1 + 64) = std::vector<HomeFurnitureData>::begin(&this->door_vec);
      __for_end_0._M_current = std::vector<HomeFurnitureData>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(
                (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)(v1 + 64),
                &__for_end_0) )
      {
        furniture = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( HomeWorldExcelConfigMgr::getFurnitureDeploySurfaceType(home_config_mgr, furniture->furniture_id) != Door )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_module_data.cpp",
            "checkValid",
            1301);
          v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v27,
                  (const char (*)[38])"[HOME]door check fail. furniture id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &furniture->furniture_id);
          common::milog::MiLogStream::~MiLogStream(&v27);
          result = 9743;
          goto LABEL_33;
        }
        __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++((__gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)(v1 + 64));
      }
      __for_range_1 = &this->stair_vec;
      *(std::vector<HomeFurnitureData>::const_iterator *)(v1 + 64) = std::vector<HomeFurnitureData>::begin(&this->stair_vec);
      __for_end_0._M_current = std::vector<HomeFurnitureData>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(
                (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)(v1 + 64),
                &__for_end_0) )
      {
        furniture_0 = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)furniture_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)furniture_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_0 >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( HomeWorldExcelConfigMgr::getFurnitureDeploySurfaceType(home_config_mgr, furniture_0->furniture_id) != Stair )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_module_data.cpp",
            "checkValid",
            1309);
          v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v27,
                  (const char (*)[39])"[HOME]stair check fail. furniture id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &furniture_0->furniture_id);
          common::milog::MiLogStream::~MiLogStream(&v27);
          result = 9743;
          goto LABEL_33;
        }
        __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++((__gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)(v1 + 64));
      }
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_module_data.cpp",
        "checkValid",
        1294);
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v27,
             (const char (*)[38])"[HOME]door_vec size error. vec_size: ");
      *(_QWORD *)(v1 + 64) = std::vector<HomeFurnitureData>::size(&this->door_vec);
      v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v8,
             (const unsigned __int64 *)(v1 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" config size: ");
      __for_end_0._M_current = (const HomeFurnitureData *)std::vector<data::ConfigHomeFurniture>::size(&config_scene_home_ptr->door_list);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v10,
        (const unsigned __int64 *)&__for_end_0);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 9743;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_module_data.cpp",
      "checkValid",
      1273);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v27,
           (const char (*)[41])"config_scene_home_ptr is null. scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->scene_id);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 9743;
  }
LABEL_33:
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1320: range 00000000145A325E-00000000145A4203
void __cdecl HomeSceneData::toDefaultsSettings(HomeSceneData *const this, Home *home, HomeModuleData *module_data)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  HomeWorldExcelConfigMgr *p_home_config_mgr; // r14
  HomeBasicComp *BasicComp; // rax
  uint32_t Level; // eax
  common::milog::MiLogStream *v9; // r14
  HomeBasicComp *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  JsonConfigMgr *p_json_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t scene_id; // r14d
  uint32_t v18; // ecx
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  bool is_set_born_pos; // cl
  std::vector<data::ConfigHomeFurniture>::size_type v35; // rax
  HomeFurnitureData *v37; // r14
  const data::ConfigHomeFurniture *v38; // rax
  std::vector<data::ConfigHomeFurniture>::size_type v39; // rax
  HomeFurnitureData *v41; // r14
  const data::ConfigHomeFurniture *v42; // rax
  HomeFurnitureData *v43; // rax
  uint32_t tmp_version; // ecx
  bool is_world_scene; // [rsp+2Fh] [rbp-191h]
  int i; // [rsp+30h] [rbp-190h]
  int i_0; // [rsp+34h] [rbp-18Ch]
  std::vector<data::ConfigHomeBlock>::const_iterator __for_begin; // [rsp+38h] [rbp-188h] BYREF
  std::vector<data::ConfigHomeBlock>::const_iterator __for_end; // [rsp+40h] [rbp-180h] BYREF
  const data::HomeworldLevelExcelConfig *home_level_config; // [rsp+48h] [rbp-178h]
  const data::ConfigSceneHomeInfo *config_scene_home_ptr; // [rsp+50h] [rbp-170h]
  const std::vector<data::ConfigHomeBlock> *__for_range; // [rsp+58h] [rbp-168h]
  const data::ConfigHomeBlock *home_block_config; // [rsp+60h] [rbp-160h]
  HomeBlockData *home_block; // [rsp+68h] [rbp-158h]
  Vector3 v56; // [rsp+74h] [rbp-14Ch] BYREF
  std::shared_ptr<Config> v57; // [rsp+80h] [rbp-140h] BYREF
  common::milog::MiLogStream v58; // [rsp+90h] [rbp-130h] BYREF
  common::milog::MiLogStream v59; // [rsp+B0h] [rbp-110h] BYREF
  char v60[240]; // [rsp+D0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 home_uid:1321 64 4 14 module_id:1322 80 4 13 block_id:1343 96 64 19 tmp_main_house:1379";
  *(_QWORD *)(v3 + 16) = HomeSceneData::toDefaultsSettings;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = Home::getHomeUid(home);
  if ( *(_BYTE *)(((unsigned __int64)&module_data->module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)module_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&module_data->module_id >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 64) = module_data->module_id;
  common::milog::MiLogStream::create(
    &v59,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/home/home_module_data.cpp",
    "toDefaultsSettings",
    1323);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  common::milog::MiLogStream::operator()(
    &v59,
    "home_uid:%u module_id:%u scene_id:%u toDefaultsSettings.",
    *(unsigned int *)(v3 + 48),
    *(unsigned int *)(v3 + 64),
    this->scene_id);
  common::milog::MiLogStream::~MiLogStream(&v59);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v57);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.txt_config_mgr.home_config_mgr;
  BasicComp = Home::getBasicComp(home);
  Level = HomeBasicComp::getLevel(BasicComp);
  home_level_config = data::HomeWorldExcelConfigMgrBase::findHomeworldLevelExcelConfig(p_home_config_mgr, Level);
  std::shared_ptr<Config>::~shared_ptr(&v57);
  if ( home_level_config )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v57);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    config_scene_home_ptr = JsonConfigMgr::findSceneHomeConfig(p_json_config_mgr, this->scene_id);
    std::shared_ptr<Config>::~shared_ptr(&v57);
    if ( config_scene_home_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      scene_id = this->scene_id;
      is_world_scene = scene_id == HomeModuleData::getWorldSceneId(module_data);
      __for_range = &config_scene_home_ptr->block_arrangement_info_list;
      __for_begin._M_current = std::vector<data::ConfigHomeBlock>::begin(&config_scene_home_ptr->block_arrangement_info_list)._M_current;
      __for_end._M_current = std::vector<data::ConfigHomeBlock>::end(&config_scene_home_ptr->block_arrangement_info_list)._M_current;
      while ( __gnu_cxx::operator!=<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>(
                &__for_begin,
                &__for_end) )
      {
        home_block_config = __gnu_cxx::__normal_iterator<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)home_block_config >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)home_block_config >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 80) = home_block_config->block_id;
        home_block = std::map<unsigned int,HomeBlockData>::operator[](
                       &this->arrangement_data.block_data_map,
                       (const std::map<unsigned int,HomeBlockData>::key_type *)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v18 = this->scene_id;
        if ( *(_BYTE *)(((unsigned __int64)home_block >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)home_block >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(home_block);
        }
        home_block->scene_id = v18;
        v19 = *(_DWORD *)(v3 + 80);
        if ( *(_BYTE *)(((unsigned __int64)&home_block->block_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)home_block + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_block->block_id >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_store4(&home_block->block_id);
        }
        home_block->block_id = v19;
        HomeBlockData::fromConfig(home_block, home_block_config);
        if ( !is_world_scene )
          goto LABEL_33;
        if ( *(_BYTE *)(((unsigned __int64)&home_level_config->outdoor_unlock_block_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)home_level_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_level_config->outdoor_unlock_block_count >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( home_level_config->outdoor_unlock_block_count < *(_DWORD *)(v3 + 80) )
        {
          common::milog::MiLogStream::create(
            &v58,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_module_data.cpp",
            "toDefaultsSettings",
            1351);
          v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v58,
                  (const char (*)[40])"[HOME] block can not unlock. module_id:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v3 + 64));
          v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" scene_id:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->scene_id);
          v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" block_id:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v3 + 80));
          v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])" home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v58);
          if ( *(char *)(((unsigned __int64)&home_block->is_unlocked >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&home_block->is_unlocked);
          home_block->is_unlocked = 0;
        }
        else
        {
LABEL_33:
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_module_data.cpp",
            "toDefaultsSettings",
            1358);
          v27 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v59,
                  (const char (*)[32])"[HOME] block unlock. module_id:");
          v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v27,
                  (const unsigned int *)(v3 + 64));
          v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])" scene_id:");
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->scene_id);
          v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])" block_id:");
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v31,
                  (const unsigned int *)(v3 + 80));
          v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])" home_uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v59);
          if ( *(char *)(((unsigned __int64)&home_block->is_unlocked >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&home_block->is_unlocked);
          home_block->is_unlocked = 1;
        }
        __gnu_cxx::__normal_iterator<data::ConfigHomeBlock const*,std::vector<data::ConfigHomeBlock>>::operator++(&__for_begin);
      }
      if ( *(char *)(((unsigned __int64)&config_scene_home_ptr->is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&config_scene_home_ptr->is_set_born_pos);
      is_set_born_pos = config_scene_home_ptr->is_set_born_pos;
      if ( *(char *)(((unsigned __int64)&this->arrangement_data.is_set_born_pos >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->arrangement_data.is_set_born_pos);
      this->arrangement_data.is_set_born_pos = is_set_born_pos;
      Vector3::Vector3(&v56, &config_scene_home_ptr->born_pos);
      if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->arrangement_data.born_pos >> 3)
                                                           + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&this->arrangement_data.born_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->arrangement_data.born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)((((unsigned __int64)&this->arrangement_data.born_pos.z + 3) >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store_n(&this->arrangement_data.born_pos, 12LL);
      }
      this->arrangement_data.born_pos = v56;
      Vector3::Vector3(&v56, &config_scene_home_ptr->born_rot);
      if ( *(char *)(((unsigned __int64)&this->arrangement_data.born_rot >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&this->arrangement_data.born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&this->arrangement_data.born_rot.z + 3) >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store_n(&this->arrangement_data.born_rot, 12LL);
      }
      this->arrangement_data.born_rot = v56;
      v35 = std::vector<data::ConfigHomeFurniture>::size(&config_scene_home_ptr->door_list);
      std::vector<HomeFurnitureData>::resize(&this->arrangement_data.door_vec, v35);
      for ( i = 0;
            i < std::vector<HomeFurnitureData>::size(&this->arrangement_data.door_vec)
         && i < std::vector<data::ConfigHomeFurniture>::size(&config_scene_home_ptr->door_list);
            ++i )
      {
        v37 = std::vector<HomeFurnitureData>::operator[](&this->arrangement_data.door_vec, i);
        v38 = std::vector<data::ConfigHomeFurniture>::operator[](&config_scene_home_ptr->door_list, i);
        HomeFurnitureData::fromConfig(v37, v38);
      }
      v39 = std::vector<data::ConfigHomeFurniture>::size(&config_scene_home_ptr->stair_list);
      std::vector<HomeFurnitureData>::resize(&this->arrangement_data.stair_vec, v39);
      for ( i_0 = 0;
            i_0 < std::vector<HomeFurnitureData>::size(&this->arrangement_data.stair_vec)
         && i_0 < std::vector<data::ConfigHomeFurniture>::size(&config_scene_home_ptr->stair_list);
            ++i_0 )
      {
        v41 = std::vector<HomeFurnitureData>::operator[](&this->arrangement_data.stair_vec, i_0);
        v42 = std::vector<data::ConfigHomeFurniture>::operator[](&config_scene_home_ptr->stair_list, i_0);
        HomeFurnitureData::fromConfig(v41, v42);
      }
      if ( is_world_scene )
      {
        HomeFurnitureData::HomeFurnitureData((HomeFurnitureData *const)(v3 + 96));
        HomeFurnitureData::fromConfig((HomeFurnitureData *const)(v3 + 96), &config_scene_home_ptr->main_house);
        v43 = std::move<HomeFurnitureData &>((HomeFurnitureData *)(v3 + 96));
        std::optional<HomeFurnitureData>::operator=<HomeFurnitureData>(&this->arrangement_data.main_house, v43);
        Vector3::Vector3(&v56, &config_scene_home_ptr->djinn_pos);
        if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->arrangement_data.djinn_pos >> 3)
                                                            + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&this->arrangement_data.djinn_pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&this->arrangement_data.djinn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->arrangement_data.djinn_pos.z + 3) >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store_n(&this->arrangement_data.djinn_pos, 12LL);
        }
        this->arrangement_data.djinn_pos = v56;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config_scene_home_ptr->tmp_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_scene_home_ptr->tmp_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      tmp_version = config_scene_home_ptr->tmp_version;
      if ( *(_BYTE *)(((unsigned __int64)&this->arrangement_data.tmp_version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->arrangement_data.tmp_version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->arrangement_data.tmp_version);
      }
      this->arrangement_data.tmp_version = tmp_version;
      if ( *(_BYTE *)(((unsigned __int64)&this->arrangement_data.bgm_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->arrangement_data.bgm_id >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->arrangement_data.bgm_id);
      }
      this->arrangement_data.bgm_id = 0;
      HomeSceneArrangementData::onDataChanged(&this->arrangement_data);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "toDefaultsSettings",
        1335);
      v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v59,
              (const char (*)[41])"config_scene_home_ptr is null. scene_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->scene_id);
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v59);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_module_data.cpp",
      "toDefaultsSettings",
      1328);
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v59,
           (const char (*)[34])"home_level_config is null. level:");
    v10 = Home::getBasicComp(home);
    *(_DWORD *)(v3 + 80) = HomeBasicComp::getLevel(v10);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v59);
  }
  if ( v60 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1391: range 00000000145A4204-00000000145A438E
int32_t __cdecl HomeSceneData::fromBin(HomeSceneData *const this, const proto::HomeSceneBin *bin)
{
  uint32_t v2; // edx
  const proto::SceneBin *v3; // rax
  uint32_t scene_id; // ecx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  v2 = proto::HomeSceneBin::scene_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = v2;
  v3 = proto::HomeSceneBin::scene_bin(bin);
  proto::SceneBin::operator=(&this->scene_bin, v3);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = this->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->arrangement_data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->arrangement_data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->arrangement_data);
  }
  this->arrangement_data.scene_id = scene_id;
  if ( !HomeSceneArrangementData::fromBin(&this->arrangement_data, bin) )
    return 0;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home_module_data.cpp",
    "fromBin",
    1397);
  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
    &v6,
    (const char (*)[35])"arrangement_data.fromBin() failed.");
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 1404: range 00000000145A4390-00000000145A4425
int32_t __cdecl HomeSceneData::toBin(const HomeSceneData *const this, proto::HomeSceneBin *bin)
{
  proto::SceneBin *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeSceneBin::set_scene_id(bin, this->scene_id);
  v2 = proto::HomeSceneBin::mutable_scene_bin(bin);
  proto::SceneBin::CopyFrom(v2, &this->scene_bin);
  HomeSceneArrangementData::toBin(&this->arrangement_data, bin);
  return 0;
};

// Line 1412: range 00000000145A4426-00000000145A4499
int32_t __cdecl HomeSceneData::toClient(const HomeSceneData *const this, proto::HomeSceneArrangementInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeSceneArrangementInfo::set_scene_id(proto, this->scene_id);
  HomeSceneArrangementData::toClient(&this->arrangement_data, proto);
  return 0;
};

// Line 1419: range 00000000145A449A-00000000145A44E6
uint32_t __cdecl HomeSceneData::getComfortValue(const HomeSceneData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->arrangement_data.comfort_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->arrangement_data.comfort_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->arrangement_data.comfort_value;
};

// Line 1423: range 00000000145A44E8-00000000145A46D4
__int64 __fastcall HomeSceneData::getFurnitureCountByType(const HomeSceneData *const this, uint32_t furniture_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 furniture_type:1422 64 8 9 iter:1428";
  *(_QWORD *)(v2 + 16) = HomeSceneData::getFurnitureCountByType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = furniture_type;
  if ( *(_DWORD *)(v2 + 48) )
  {
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                          &this->arrangement_data.furniture_arrange_type_count_map,
                                                                          (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,unsigned int>::cend(&this->arrangement_data.furniture_arrange_type_count_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
           &__y) )
    {
      v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      result = v6->second;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->arrangement_data.furniture_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->arrangement_data.furniture_count >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = this->arrangement_data.furniture_count;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1437: range 00000000145A46D6-00000000145A47F7
_BOOL8 __fastcall HomeSceneData::isNpcAvatarShowInScene(const HomeSceneData *const this, uint32_t avatar_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+18h] [rbp-78h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+20h] [rbp-70h] BYREF
  const std::set<unsigned int> *avatar_id_set; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 avatar_id:1436";
  *(_QWORD *)(v2 + 16) = HomeSceneData::isNpcAvatarShowInScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = avatar_id;
  avatar_id_set = &this->arrangement_data.scene_npc_avatar_id_set;
  __y._M_node = std::set<unsigned int>::end(&this->arrangement_data.scene_npc_avatar_id_set)._M_node;
  __x._M_node = std::set<unsigned int>::find(
                  &this->arrangement_data.scene_npc_avatar_id_set,
                  (const std::set<unsigned int>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1447: range 00000000145A47F8-00000000145A4919
_BOOL8 __fastcall HomeSceneData::isFurnitureSuitShowInScene(const HomeSceneData *const this, uint32_t suit_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeFurnitureSuiteData> >::_Self __x; // [rsp+18h] [rbp-78h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeFurnitureSuiteData> >::_Self __y; // [rsp+20h] [rbp-70h] BYREF
  const std::multimap<unsigned int,HomeFurnitureSuiteData> *furniture_suit_map; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 suit_id:1446";
  *(_QWORD *)(v2 + 16) = HomeSceneData::isFurnitureSuitShowInScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = suit_id;
  furniture_suit_map = &this->arrangement_data.scene_furniture_suit_map;
  __y._M_node = std::multimap<unsigned int,HomeFurnitureSuiteData>::end(&this->arrangement_data.scene_furniture_suit_map)._M_node;
  __x._M_node = std::multimap<unsigned int,HomeFurnitureSuiteData>::find(
                  &this->arrangement_data.scene_furniture_suit_map,
                  (const std::multimap<unsigned int,HomeFurnitureSuiteData>::key_type *)(v2 + 32))._M_node;
  result = std::operator!=(&__x, &__y);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1457: range 00000000145A491A-00000000145A49CC
data::SceneType __cdecl HomeSceneData::getSceneType(const HomeSceneData *const this)
{
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  data::SceneType SceneTypeBySceneId; // ebx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.scene_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  SceneTypeBySceneId = SceneExcelConfigMgr::getSceneTypeBySceneId(p_scene_config_mgr, this->scene_id);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return SceneTypeBySceneId;
};

// Line 1465: range 00000000145A49CE-00000000145A4AF5
void __cdecl HomeModuleData::HomeModuleData(HomeModuleData *const this, Home *home)
{
  uint32_t HomeUid; // edx
  std::shared_ptr<Home> __r; // [rsp+10h] [rbp-20h] BYREF

  toThisPtr<Home>((Home *)&__r);
  std::weak_ptr<Home>::weak_ptr<Home,void>(&this->home_wtr, &__r);
  std::shared_ptr<Home>::~shared_ptr(&__r);
  HomeUid = Home::getHomeUid(home);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_uid);
  }
  this->home_uid = HomeUid;
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->module_id);
  }
  this->module_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_room_scene_id);
  }
  this->cur_room_scene_id = 0;
  std::map<unsigned int,HomeSceneData>::map(&this->scene_data_map);
};

// Line 1471: range 00000000145A4AF6-00000000145A4C1F
void __cdecl HomeModuleData::HomeModuleData(HomeModuleData *const this, Home *home, uint32_t module_id)
{
  uint32_t HomeUid; // edx
  std::shared_ptr<Home> __r; // [rsp+20h] [rbp-20h] BYREF

  toThisPtr<Home>((Home *)&__r);
  std::weak_ptr<Home>::weak_ptr<Home,void>(&this->home_wtr, &__r);
  std::shared_ptr<Home>::~shared_ptr(&__r);
  HomeUid = Home::getHomeUid(home);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_uid);
  }
  this->home_uid = HomeUid;
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->module_id);
  }
  this->module_id = module_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_room_scene_id);
  }
  this->cur_room_scene_id = 0;
  std::map<unsigned int,HomeSceneData>::map(&this->scene_data_map);
};

// Line 1479: range 00000000145A4C20-00000000145A5074
int32_t __cdecl HomeModuleData::fromBin(HomeModuleData *const this, const proto::HomeModuleBin *bin)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // ecx
  uint32_t v6; // edx
  common::milog::MiLogStream *v7; // r15
  int v8; // r15d
  HomeSceneData *v9; // rax
  unsigned int *v10; // rcx
  HomeSceneData *v11; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t v15; // [rsp+Ch] [rbp-4E4h]
  google::protobuf::RepeatedPtrField<proto::HomeSceneBin>::const_iterator __for_begin; // [rsp+20h] [rbp-4D0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneBin>::const_iterator __for_end; // [rsp+28h] [rbp-4C8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeSceneBin> *__for_range; // [rsp+30h] [rbp-4C0h]
  const proto::HomeSceneBin *home_scene_bin; // [rsp+38h] [rbp-4B8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-4B0h] BYREF
  char v21[1168]; // [rsp+60h] [rbp-490h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1120LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 scene_id:1491 64 920 20 home_scene_data:1485";
  *(_QWORD *)(v2 + 16) = HomeModuleData::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862750] = -218103808;
  v4[536862751] = -202116109;
  v4[536862752] = -202116109;
  v4[536862753] = -202116109;
  v4[536862754] = -202116109;
  v5 = proto::HomeModuleBin::module_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->module_id);
  }
  this->module_id = v5;
  v6 = proto::HomeModuleBin::cur_room_scene_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_room_scene_id);
  }
  this->cur_room_scene_id = v6;
  __for_range = proto::HomeModuleBin::scene_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    home_scene_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneBin const>::operator*(&__for_begin);
    HomeSceneData::HomeSceneData((HomeSceneData *const)(v2 + 64));
    if ( HomeSceneData::fromBin((HomeSceneData *const)(v2 + 64), home_scene_bin) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "fromBin",
        1488);
      v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v20,
             (const char (*)[45])"home_scene_data.fromBin() failed, scene_id: ");
      *(_DWORD *)(v2 + 48) = proto::HomeSceneBin::scene_id(home_scene_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      v15 = -1;
      v8 = 0;
    }
    else
    {
      *(_DWORD *)(v2 + 48) = *(_DWORD *)(v2 + 64);
      v9 = std::move<HomeSceneData &>((HomeSceneData *)(v2 + 64));
      v12 = std::map<unsigned int,HomeSceneData>::emplace<unsigned int &,HomeSceneData>(
              &this->scene_data_map,
              (unsigned int *)(v2 + 48),
              v9,
              v10,
              v11);
      if ( !v12.second )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_module_data.cpp",
          "fromBin",
          1494);
        v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v20,
                (const char (*)[41])"home_scene_data already exists. scene_id");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      v8 = 1;
    }
    HomeSceneData::~HomeSceneData((HomeSceneData *const)(v2 + 64));
    if ( v8 != 1 )
      goto LABEL_18;
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneBin const>::operator++(&__for_begin);
  }
  v15 = 0;
LABEL_18:
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1120LL, v21);
  }
  return v15;
};

// Line 1502: range 00000000145A5076-00000000145A5260
int32_t __cdecl HomeModuleData::toBin(const HomeModuleData *const this, proto::HomeModuleBin *bin)
{
  common::milog::MiLogStream *v2; // rax
  std::map<unsigned int,HomeSceneData>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,HomeSceneData>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,HomeSceneData> *v7; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *home_scene_data; // [rsp+40h] [rbp-40h]
  proto::HomeSceneBin *home_scene_bin; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeModuleBin::set_module_id(bin, this->module_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeModuleBin::set_cur_room_scene_id(bin, this->cur_room_scene_id);
  __for_range = &this->scene_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v7);
    home_scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v7);
    home_scene_bin = proto::HomeModuleBin::add_scene_bin_list(bin);
    if ( HomeSceneData::toBin(home_scene_data, home_scene_bin) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "toBin",
        1511);
      v2 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v11,
             (const char (*)[43])"home_scene_data.toBin() failed, scene_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &home_scene_data->scene_id);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1520: range 00000000145A5262-00000000145A591F
int32_t __cdecl HomeModuleData::onCreate(HomeModuleData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 module_id; // rcx
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rcx
  uint32_t default_room_scene_id; // ecx
  unsigned int *v11; // rcx
  HomeSceneData *v12; // r8
  HomeSceneData *v13; // r8
  Home *v14; // rax
  int32_t result; // eax
  std::map<unsigned int,HomeSceneData>::iterator __for_begin; // [rsp+18h] [rbp-488h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end; // [rsp+20h] [rbp-480h] BYREF
  const data::HomeworldModuleExcelConfig *config_ptr; // [rsp+28h] [rbp-478h]
  std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+30h] [rbp-470h]
  std::pair<unsigned int const,HomeSceneData> *__in; // [rsp+38h] [rbp-468h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+40h] [rbp-460h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+48h] [rbp-458h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-450h] BYREF
  HomeSceneData v24; // [rsp+70h] [rbp-430h] BYREF
  char v25[144]; // [rsp+410h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 19 world_scene_id:1537 64 16 13 home_ptr:1521";
  *(_QWORD *)(v1 + 16) = HomeModuleData::onCreate;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  HomeModuleData::getHome((const HomeModuleData *const)(v1 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_module_data.cpp",
      "onCreate",
      1524);
    if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    module_id = this->module_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(
      &v23,
      "home_ptr is null. home_uid:%u module_id:%u",
      this->home_uid,
      module_id);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = -1;
  }
  else
  {
    config_ptr = HomeModuleData::getConfig(this);
    if ( config_ptr )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_module_data.cpp",
        "onCreate",
        1535);
      if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v9 = this->module_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        &v23,
        "HomeModuleData create. home_uid:%u module_id:%u",
        this->home_uid,
        v9);
      common::milog::MiLogStream::~MiLogStream(&v23);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->world_scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->world_scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = config_ptr->world_scene_id;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->default_room_scene_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->default_room_scene_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      default_room_scene_id = config_ptr->default_room_scene_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cur_room_scene_id);
      }
      this->cur_room_scene_id = default_room_scene_id;
      HomeSceneData::HomeSceneData(&v24, *(_DWORD *)(v1 + 48));
      std::map<unsigned int,HomeSceneData>::emplace<unsigned int &,HomeSceneData>(
        &this->scene_data_map,
        (unsigned int *)(v1 + 48),
        &v24,
        v11,
        v12);
      HomeSceneData::~HomeSceneData(&v24);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HomeSceneData::HomeSceneData(&v24, this->cur_room_scene_id);
      std::map<unsigned int,HomeSceneData>::emplace<unsigned int &,HomeSceneData>(
        &this->scene_data_map,
        &this->cur_room_scene_id,
        &v24,
        &this->cur_room_scene_id,
        v13);
      HomeSceneData::~HomeSceneData(&v24);
      __for_range = &this->scene_data_map;
      __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
      __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
        scene_id = std::get<0ul,unsigned int const,HomeSceneData>(__in);
        scene_data = std::get<1ul,unsigned int const,HomeSceneData>(__in);
        v14 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        HomeSceneData::toDefaultsSettings(scene_data, v14, this);
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
      }
      v5 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "onCreate",
        1531);
      v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v23,
             (const char (*)[33])"getConfig return null. home_uid:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->home_uid);
      v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" module_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->module_id);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v5 = -1;
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  result = v5;
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1550: range 00000000145A5920-00000000145A5A73
HomeSceneData *__fastcall HomeModuleData::findHomeSceneData(HomeModuleData *const this, uint32_t scene_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeSceneData *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 scene_id:1549 64 8 9 iter:1551";
  *(_QWORD *)(v2 + 16) = HomeModuleData::findHomeSceneData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = scene_id;
  *(std::map<unsigned int,HomeSceneData>::iterator *)(v2 + 64) = std::map<unsigned int,HomeSceneData>::find(
                                                                   &this->scene_data_map,
                                                                   (const std::map<unsigned int,HomeSceneData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> > *const)(v2 + 64))->second;
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1561: range 00000000145A5A74-00000000145A5A9D
HomeSceneData *__cdecl HomeModuleData::findWorldHomeSceneData(HomeModuleData *const this)
{
  uint32_t WorldSceneId; // edx

  WorldSceneId = HomeModuleData::getWorldSceneId(this);
  return HomeModuleData::findHomeSceneData(this, WorldSceneId);
};

// Line 1566: range 00000000145A5A9E-00000000145A5AC7
HomeSceneData *__cdecl HomeModuleData::findRoomHomeSceneData(HomeModuleData *const this)
{
  uint32_t CurRoomSceneId; // edx

  CurRoomSceneId = HomeModuleData::getCurRoomSceneId(this);
  return HomeModuleData::findHomeSceneData(this, CurRoomSceneId);
};

// Line 1571: range 00000000145A5AC8-00000000145A5D6D
std::map<unsigned int,unsigned int> *__cdecl HomeModuleData::getFurnitureArrangeCountMap(
        std::map<unsigned int,unsigned int> *retstr,
        const HomeModuleData *const this)
{
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type v2; // ecx
  std::map<unsigned int,unsigned int>::mapped_type *v3; // rax
  int v4; // esi
  uint32_t world_scene_id; // [rsp+1Ch] [rbp-74h]
  std::map<unsigned int,HomeSceneData>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,HomeSceneData>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-60h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-58h] BYREF
  const std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+40h] [rbp-50h]
  const std::pair<unsigned int const,HomeSceneData> *v13; // [rsp+48h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+50h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+58h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v17; // [rsp+68h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+70h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *arrange_count; // [rsp+78h] [rbp-18h]

  std::map<unsigned int,unsigned int>::map(retstr);
  world_scene_id = HomeModuleData::getWorldSceneId(this);
  __for_range = &this->scene_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v13);
    scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v13);
    if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( world_scene_id == *scene_id )
      goto LABEL_9;
    v2 = *scene_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v2 == this->cur_room_scene_id )
    {
LABEL_9:
      __for_range_0 = &scene_data->arrangement_data.furniture_arrange_count_map;
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&scene_data->arrangement_data.furniture_arrange_count_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        furniture_id = std::get<0ul,unsigned int const,unsigned int>(v17);
        arrange_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v17);
        v3 = std::map<unsigned int,unsigned int>::operator[](retstr, furniture_id);
        if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v4 = *v3;
        if ( *(_BYTE *)(((unsigned __int64)arrange_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)arrange_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)arrange_count >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v3 = v4 + *arrange_count;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 1590: range 00000000145A5D6E-00000000145A5E1B
void __cdecl HomeModuleData::fillModuleShowNpcAllAvatarId(
        const HomeModuleData *const this,
        std::set<unsigned int> *avatar_id_set)
{
  std::map<unsigned int,HomeSceneData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,HomeSceneData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,HomeSceneData> *v5; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->scene_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeSceneData>(v5);
    scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v5);
    HomeSceneArrangementData::fillNpcAvatarIdInfo(&scene_data->arrangement_data, avatar_id_set);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
  }
};

// Line 1598: range 00000000145A5E1C-00000000145A5ECE
bool __cdecl HomeModuleData::isNpcAvatarShowInModule(const HomeModuleData *const this, uint32_t avatar_id)
{
  std::map<unsigned int,HomeSceneData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,HomeSceneData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,HomeSceneData> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->scene_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeSceneData>(v6);
    scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v6);
    if ( HomeSceneData::isNpcAvatarShowInScene(scene_data, avatar_id) )
      return 1;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1610: range 00000000145A5ED0-00000000145A5F82
bool __cdecl HomeModuleData::isFurnitureSuitShowInModule(const HomeModuleData *const this, uint32_t suit_id)
{
  std::map<unsigned int,HomeSceneData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,HomeSceneData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,HomeSceneData> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->scene_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeSceneData>(v6);
    scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v6);
    if ( HomeSceneData::isFurnitureSuitShowInScene(scene_data, suit_id) )
      return 1;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1622: range 00000000145A5F84-00000000145A6031
void __cdecl HomeModuleData::modifyHomeAvatarCostume(
        HomeModuleData *const this,
        const std::map<unsigned int,unsigned int> *avatar_costume_map)
{
  std::map<unsigned int,HomeSceneData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,HomeSceneData> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->scene_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeSceneData>(__in);
    scene_data = std::get<1ul,unsigned int const,HomeSceneData>(__in);
    HomeSceneArrangementData::modifyAvatarCostume(&scene_data->arrangement_data, avatar_costume_map);
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
  }
};

// Line 1630: range 00000000145A6032-00000000145A6243
uint32_t __cdecl HomeModuleData::getFurnitureSuiteGuidCanSummonAvatar(HomeModuleData *const this, uint32_t suite_id)
{
  uint32_t guid; // [rsp+1Ch] [rbp-64h]
  std::map<unsigned int,HomeSceneData>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::multimap<unsigned int,HomeFurnitureSuiteData>::iterator __for_begin_0; // [rsp+30h] [rbp-50h] BYREF
  std::multimap<unsigned int,HomeFurnitureSuiteData>::iterator __for_end_0; // [rsp+38h] [rbp-48h] BYREF
  std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+40h] [rbp-40h]
  std::pair<unsigned int const,HomeSceneData> *__in; // [rsp+48h] [rbp-38h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *_; // [rsp+50h] [rbp-30h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+58h] [rbp-28h]
  std::multimap<unsigned int,HomeFurnitureSuiteData> *__for_range_0; // [rsp+60h] [rbp-20h]
  std::pair<unsigned int const,HomeFurnitureSuiteData> *v13; // [rsp+68h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,HomeFurnitureSuiteData> >::type *scene_suite_id; // [rsp+70h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,HomeFurnitureSuiteData> >::type *suite_data; // [rsp+78h] [rbp-8h]

  guid = 0;
  __for_range = &this->scene_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeSceneData>(__in);
    scene_data = std::get<1ul,unsigned int const,HomeSceneData>(__in);
    if ( HomeSceneData::isFurnitureSuitShowInScene(scene_data, suite_id) )
    {
      __for_range_0 = &scene_data->arrangement_data.scene_furniture_suit_map;
      __for_begin_0._M_node = std::multimap<unsigned int,HomeFurnitureSuiteData>::begin(&scene_data->arrangement_data.scene_furniture_suit_map)._M_node;
      __for_end_0._M_node = std::multimap<unsigned int,HomeFurnitureSuiteData>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeFurnitureSuiteData>>::operator*(&__for_begin_0);
        scene_suite_id = std::get<0ul,unsigned int const,HomeFurnitureSuiteData>(v13);
        suite_data = std::get<1ul,unsigned int const,HomeFurnitureSuiteData>(v13);
        if ( *(_BYTE *)(((unsigned __int64)scene_suite_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)scene_suite_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_suite_id >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( suite_id == *scene_suite_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&suite_data->guid >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&suite_data->guid >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          guid = suite_data->guid;
          if ( *(_BYTE *)(((unsigned __int64)&suite_data->is_allow_summon >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)suite_data + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&suite_data->is_allow_summon >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load1(&suite_data->is_allow_summon);
          }
          if ( suite_data->is_allow_summon )
            return guid;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeFurnitureSuiteData>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
  }
  return guid;
};

// Line 1654: range 00000000145A6244-00000000145A6732
uint32_t __cdecl HomeModuleData::getComfortValue(const HomeModuleData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t v4; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type v5; // ecx
  Home *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t *v8; // rdx
  uint32_t result; // eax
  uint32_t world_scene_id; // [rsp+10h] [rbp-100h]
  uint32_t home_level; // [rsp+14h] [rbp-FCh]
  std::map<unsigned int,HomeSceneData>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,HomeSceneData>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  const std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+28h] [rbp-E8h]
  const data::HomeworldLevelExcelConfig *home_level_config_ptr; // [rsp+30h] [rbp-E0h]
  const std::pair<unsigned int const,HomeSceneData> *v16; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+80h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 11 result:1662 64 16 13 home_ptr:1655";
  *(_QWORD *)(v1 + 16) = HomeModuleData::getComfortValue;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  HomeModuleData::getHome((const HomeModuleData *const)(v1 + 64));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_module_data.cpp",
      "getComfortValue",
      1658);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(&v20, "home_ptr is null. home_uid:%u", this->home_uid);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v4 = 0;
  }
  else
  {
    *(_DWORD *)(v1 + 48) = 0;
    world_scene_id = HomeModuleData::getWorldSceneId(this);
    __for_range = &this->scene_data_map;
    __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
    __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
      scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v16);
      scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v16);
      if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( world_scene_id == *scene_id )
        goto LABEL_16;
      v5 = *scene_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v5 == this->cur_room_scene_id )
LABEL_16:
        *(_DWORD *)(v1 + 48) += HomeSceneData::getComfortValue(scene_data);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
    }
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    home_level = Home::getLevel(v6);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    home_level_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeworldLevelExcelConfig(
                              &v7->design_config.txt_config_mgr.home_config_mgr,
                              home_level);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( home_level_config_ptr )
    {
      v8 = (uint32_t *)std::min<unsigned int>(
                         (const unsigned int *)(v1 + 48),
                         &home_level_config_ptr->comfort_point_limit);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v4 = *v8;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "getComfortValue",
        1678);
      common::milog::MiLogStream::operator()(&v20, "home_level_config_ptr is null. home_level:%u", home_level);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v4 = 0;
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 64));
  result = v4;
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1686: range 00000000145A6734-00000000145A6883
uint32_t __cdecl HomeModuleData::getFurnitureCountByType(const HomeModuleData *const this, uint32_t furniture_type)
{
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type v2; // ecx
  uint32_t result; // [rsp+18h] [rbp-38h]
  uint32_t world_scene_id; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,HomeSceneData>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,HomeSceneData>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,HomeSceneData> *v9; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+48h] [rbp-8h]

  result = 0;
  world_scene_id = HomeModuleData::getWorldSceneId(this);
  __for_range = &this->scene_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v9);
    scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v9);
    if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( world_scene_id == *scene_id )
      goto LABEL_9;
    v2 = *scene_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v2 == this->cur_room_scene_id )
LABEL_9:
      result += HomeSceneData::getFurnitureCountByType(scene_data, furniture_type);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
  }
  return result;
};

// Line 1702: range 00000000145A6884-00000000145A6B95
__int64 __fastcall HomeModuleData::getFurnitureCount(const HomeModuleData *const this, uint32_t furniture_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type v5; // ecx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  __int64 v7; // rax
  uint32_t result; // [rsp+10h] [rbp-C0h]
  uint32_t world_scene_id; // [rsp+14h] [rbp-BCh]
  std::map<unsigned int,HomeSceneData>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,HomeSceneData>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+28h] [rbp-A8h] BYREF
  const std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::pair<unsigned int const,HomeSceneData> *v14; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+48h] [rbp-88h]
  char v17[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 furniture_id:1701 64 8 9 iter:1711";
  *(_QWORD *)(v2 + 16) = HomeModuleData::getFurnitureCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = furniture_id;
  result = 0;
  world_scene_id = HomeModuleData::getWorldSceneId(this);
  __for_range = &this->scene_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
    scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v14);
    scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v14);
    if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( world_scene_id == *scene_id )
      goto LABEL_12;
    v5 = *scene_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v5 == this->cur_room_scene_id )
    {
LABEL_12:
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                            &scene_data->arrangement_data.furniture_arrange_count_map,
                                                                            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      __y._M_node = std::map<unsigned int,unsigned int>::cend(&scene_data->arrangement_data.furniture_arrange_count_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
             &__y) )
      {
        v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        result += v6->second;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
  }
  v7 = result;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return v7;
};

// Line 1721: range 00000000145A6B96-00000000145A6C57
const data::HomeworldModuleExcelConfig *__cdecl HomeModuleData::getConfig(const HomeModuleData *const this)
{
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  const data::HomeworldModuleExcelConfig *HomeworldModuleExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.home_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  HomeworldModuleExcelConfig = data::HomeWorldExcelConfigMgrBase::findHomeworldModuleExcelConfig(
                                 p_home_config_mgr,
                                 this->module_id);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return HomeworldModuleExcelConfig;
};

// Line 1726: range 00000000145A6C58-00000000145A6D42
uint32_t __cdecl HomeModuleData::getWorldSceneId(const HomeModuleData *const this)
{
  common::milog::MiLogStream *v1; // rax
  const data::HomeworldModuleExcelConfig *config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  config_ptr = HomeModuleData::getConfig(this);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->world_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->world_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    return config_ptr->world_scene_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_module_data.cpp",
      "getWorldSceneId",
      1730);
    v1 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v4,
           (const char (*)[34])"getConfig return null. module_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->module_id);
    common::milog::MiLogStream::~MiLogStream(&v4);
    return 0;
  }
};

// Line 1738: range 00000000145A6D44-00000000145A6F95
int32_t __cdecl HomeModuleData::changeRoomScene(HomeModuleData *const this, uint32_t new_room_scene_id)
{
  uint32_t cur_room_scene_id; // esi
  __int64 module_id; // rcx
  HomeSceneData *v4; // r8
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-3D0h] BYREF
  HomeSceneData v8; // [rsp+30h] [rbp-3B0h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/home/home_module_data.cpp",
    "changeRoomScene",
    1739);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cur_room_scene_id = this->cur_room_scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  module_id = this->module_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  common::milog::MiLogStream::operator()(
    &v7,
    "home:%u module:%u change cur_room_scene_id from %u to %u",
    this->home_uid,
    module_id,
    cur_room_scene_id,
    new_room_scene_id);
  common::milog::MiLogStream::~MiLogStream(&v7);
  std::map<unsigned int,HomeSceneData>::erase(&this->scene_data_map, &this->cur_room_scene_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_room_scene_id);
  }
  this->cur_room_scene_id = new_room_scene_id;
  HomeSceneData::HomeSceneData(&v8, this->cur_room_scene_id);
  std::map<unsigned int,HomeSceneData>::emplace<unsigned int &,HomeSceneData>(
    &this->scene_data_map,
    &this->cur_room_scene_id,
    &v8,
    &this->cur_room_scene_id,
    v4);
  HomeSceneData::~HomeSceneData(&v8);
  return 0;
};

// Line 1750: range 00000000145A6F96-00000000145A777C
void __cdecl HomeModuleData::toDefaultsSettings(HomeModuleData *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  __int64 module_id; // rcx
  uint32_t v5; // ecx
  Home *v6; // rax
  HomeSceneComp *SceneComp; // rax
  uint32_t CurModuleId; // ecx
  Home *v9; // rax
  HomeSceneComp *v10; // rax
  HomeWorld *HomeWorld; // rdi
  uint32_t default_room_scene_id; // ecx
  uint32_t cur_room_scene_id; // esi
  Home *v14; // rax
  Home *p_module_id; // rdi
  uint32_t v16; // ecx
  Home *p_cur_room_scene_id; // rdi
  uint32_t v18; // ecx
  uint32_t old_room_scene_id; // [rsp+14h] [rbp-CCh]
  std::map<unsigned int,HomeSceneData>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const data::HomeworldModuleExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+30h] [rbp-B0h]
  std::pair<unsigned int const,HomeSceneData> *__in; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-90h] BYREF
  char v29[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 home_ptr:1751";
  *(_QWORD *)(v1 + 16) = HomeModuleData::toDefaultsSettings;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  HomeModuleData::getHome((const HomeModuleData *const)(v1 + 32));
  if ( std::operator==<Home>((const std::shared_ptr<Home> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_module_data.cpp",
      "toDefaultsSettings",
      1754);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(&v28, "home_ptr is null. home_uid:%u", this->home_uid);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    config_ptr = HomeModuleData::getConfig(this);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      old_room_scene_id = this->cur_room_scene_id;
      v5 = old_room_scene_id;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->default_room_scene_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->default_room_scene_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v5 != config_ptr->default_room_scene_id )
      {
        v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        SceneComp = Home::getSceneComp(v6);
        CurModuleId = HomeSceneComp::getCurModuleId(SceneComp);
        if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( CurModuleId == this->module_id )
        {
          v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          v10 = Home::getSceneComp(v9);
          HomeWorld = HomeSceneComp::getHomeWorld(v10);
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->default_room_scene_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->default_room_scene_id >> 3)
                                                                      + 0x7FFF8000) )
          {
            HomeWorld = (HomeWorld *)&config_ptr->default_room_scene_id;
            __asan_report_load4();
          }
          default_room_scene_id = config_ptr->default_room_scene_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
          {
            HomeWorld = (HomeWorld *)&this->cur_room_scene_id;
            __asan_report_load4();
          }
          cur_room_scene_id = this->cur_room_scene_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
          {
            HomeWorld = (HomeWorld *)&this->module_id;
            __asan_report_load4();
          }
          HomeWorld::changeRoomScene(HomeWorld, this->module_id, cur_room_scene_id, default_room_scene_id);
        }
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->default_room_scene_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->default_room_scene_id >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        HomeModuleData::changeRoomScene(this, config_ptr->default_room_scene_id);
      }
      __for_range = &this->scene_data_map;
      __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(&this->scene_data_map)._M_node;
      __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(&this->scene_data_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
        scene_id = std::get<0ul,unsigned int const,HomeSceneData>(__in);
        scene_data = std::get<1ul,unsigned int const,HomeSceneData>(__in);
        v14 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        HomeSceneData::toDefaultsSettings(scene_data, v14, this);
        p_module_id = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
        {
          p_module_id = (Home *)scene_id;
          __asan_report_load4();
        }
        v16 = *scene_id;
        if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
        {
          p_module_id = (Home *)&this->module_id;
          __asan_report_load4();
        }
        Home::onUpdateArrangementInfo(p_module_id, this->module_id, v16);
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( old_room_scene_id != this->cur_room_scene_id )
      {
        p_cur_room_scene_id = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_cur_room_scene_id = (Home *)&this->cur_room_scene_id;
          __asan_report_load4();
        }
        v18 = this->cur_room_scene_id;
        if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
        {
          p_cur_room_scene_id = (Home *)&this->module_id;
          __asan_report_load4();
        }
        Home::onChangeRoomScene(p_cur_room_scene_id, this->module_id, old_room_scene_id, v18);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_module_data.cpp",
        "toDefaultsSettings",
        1761);
      if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      module_id = this->module_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        &v28,
        "getConfig return null. home_uid:%u module_id:%u",
        this->home_uid,
        module_id);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v1 + 32));
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1786: range 00000000145A777E-00000000145A7798
void __cdecl HomeModuleData::resetByGm(HomeModuleData *const this)
{
  HomeModuleData::toDefaultsSettings(this);
};
