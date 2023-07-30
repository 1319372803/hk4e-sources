// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/editor.pb.h

// Line 118: range 0000000018E5464B-0000000018E54657
const proto::MapInfo *__cdecl proto::MapInfo::internal_default_instance()
{
  return (const proto::MapInfo *)&proto::_MapInfo_default_instance_;
};

// Line 132: range 0000000018E54658-0000000018E54676
proto::MapInfo *__cdecl proto::MapInfo::New(const proto::MapInfo *const this)
{
  return proto::MapInfo::New(this, 0LL);
};

// Line 149: range 0000000018E54678-0000000018E546BF
int __cdecl proto::MapInfo::GetCachedSize(const proto::MapInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 249: range 0000000018E546C0-0000000018E546CC
const proto::CellInfo *__cdecl proto::CellInfo::internal_default_instance()
{
  return (const proto::CellInfo *)&proto::_CellInfo_default_instance_;
};

// Line 263: range 0000000018E546CE-0000000018E546EC
proto::CellInfo *__cdecl proto::CellInfo::New(const proto::CellInfo *const this)
{
  return proto::CellInfo::New(this, 0LL);
};

// Line 280: range 0000000018E546EE-0000000018E54735
int __cdecl proto::CellInfo::GetCachedSize(const proto::CellInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 338: range 0000000018E54736-0000000018E5477D
google::protobuf::int32 __cdecl proto::MapInfo::minx(const proto::MapInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->minx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->minx_);
  }
  return this->minx_;
};

// Line 342: range 0000000018E5477E-0000000018E547CC
void __cdecl proto::MapInfo::set_minx(proto::MapInfo *const this, google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->minx_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minx_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->minx_);
  }
  this->minx_ = value;
};

// Line 352: range 0000000018E547CE-0000000018E5481D
google::protobuf::int32 __cdecl proto::MapInfo::maxx(const proto::MapInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->maxx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->maxx_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->maxx_);
  }
  return this->maxx_;
};

// Line 356: range 0000000018E5481E-0000000018E54874
void __cdecl proto::MapInfo::set_maxx(proto::MapInfo *const this, google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->maxx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->maxx_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->maxx_);
  }
  this->maxx_ = value;
};

// Line 366: range 0000000018E54876-0000000018E548BD
google::protobuf::int32 __cdecl proto::MapInfo::minz(const proto::MapInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->minz_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minz_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->minz_);
  }
  return this->minz_;
};

// Line 370: range 0000000018E548BE-0000000018E5490C
void __cdecl proto::MapInfo::set_minz(proto::MapInfo *const this, google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->minz_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minz_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->minz_);
  }
  this->minz_ = value;
};

// Line 380: range 0000000018E5490E-0000000018E5495D
google::protobuf::int32 __cdecl proto::MapInfo::maxz(const proto::MapInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->maxz_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->maxz_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->maxz_);
  }
  return this->maxz_;
};

// Line 384: range 0000000018E5495E-0000000018E549B4
void __cdecl proto::MapInfo::set_maxz(proto::MapInfo *const this, google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->maxz_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->maxz_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->maxz_);
  }
  this->maxz_ = value;
};

// Line 391: range 0000000018E549B6-0000000018E549D3
int __cdecl proto::MapInfo::cells_size(const proto::MapInfo *const this)
{
  return google::protobuf::RepeatedPtrField<proto::CellInfo>::size(&this->cells_);
};

// Line 397: range 0000000018E549D4-0000000018E549F9
const proto::CellInfo *__cdecl proto::MapInfo::cells(const proto::MapInfo *const this, int index)
{
  return google::protobuf::RepeatedPtrField<proto::CellInfo>::Get(&this->cells_, index);
};

// Line 405: range 0000000018E549FA-0000000018E54A17
proto::CellInfo *__cdecl proto::MapInfo::add_cells(proto::MapInfo *const this)
{
  return google::protobuf::RepeatedPtrField<proto::CellInfo>::Add(&this->cells_);
};

// Line 428: range 0000000018E54A18-0000000018E54A5F
proto::SceneSurfaceMaterial __cdecl proto::CellInfo::type(const proto::CellInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->type_);
  }
  return this->type_;
};

// Line 432: range 0000000018E54A60-0000000018E54AAE
void __cdecl proto::CellInfo::set_type(proto::CellInfo *const this, proto::SceneSurfaceMaterial value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_);
  }
  this->type_ = value;
};

// Line 442: range 0000000018E54AB0-0000000018E54AFF
google::protobuf::int32 __cdecl proto::CellInfo::y(const proto::CellInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->y_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->y_);
  }
  return this->y_;
};

// Line 446: range 0000000018E54B00-0000000018E54B56
void __cdecl proto::CellInfo::set_y(proto::CellInfo *const this, google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->y_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y_);
  }
  this->y_ = value;
};
