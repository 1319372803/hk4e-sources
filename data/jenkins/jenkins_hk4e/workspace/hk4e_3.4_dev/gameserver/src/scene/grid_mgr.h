// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/grid_mgr.h

// Line 34: range 0000000015DA1EEE-0000000015DA1F3F
void __cdecl GridMgr::~GridMgr(GridMgr *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GridMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::shared_ptr<Mesh<Grid,GridAllocator>>::~shared_ptr(&this->mesh_ptr_);
};

// Line 37: range 0000000015D31A60-0000000015D31BF4
// local variable allocation has failed, the output may be wrong!
void __cdecl GridMgr::GridMgr(GridMgr *const this, data::VisionLevelType range_type, Scene *scene)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  bool v5; // dl

  common::milog::DescribalBase::DescribalBase(this);
  v3 = (int (**)(...))(&`vtable for'GridMgr + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&range_type);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->range_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->range_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->range_type_, *(_QWORD *)&range_type, (_BYTE)this + 8);
  }
  this->range_type_ = range_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->scene_, *(_QWORD *)&range_type);
  this->scene_ = scene;
  if ( *(_BYTE *)(((unsigned __int64)&this->length_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->length_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->length_, *(_QWORD *)&range_type, (_BYTE)this + 24);
  }
  this->length_ = 0;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->width_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width_ >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->width_, v4, v5);
  this->width_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sight_radius_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sight_radius_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sight_radius_, v4, (_BYTE)this + 32);
  }
  this->sight_radius_ = 0;
  std::shared_ptr<Mesh<Grid,GridAllocator>>::shared_ptr(&this->mesh_ptr_);
};
