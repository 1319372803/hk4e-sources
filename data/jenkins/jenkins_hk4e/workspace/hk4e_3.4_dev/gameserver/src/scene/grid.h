// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/grid.h

// Line 65: range 00000000135EC9C8-00000000135ECA97
void __cdecl Grid::Grid(Grid *const this)
{
  __int64 v1; // rsi
  bool v2; // dl

  std::enable_shared_from_this<Grid>::enable_shared_from_this(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_info_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->entity_info_ptr_, v1);
  this->entity_info_ptr_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->x, v1, (_BYTE)this + 24);
  }
  this->x = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->y, (((_BYTE)this + 28) & 7u) + 3, v2);
  this->y = 0;
};
