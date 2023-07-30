// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/area.h

// Line 37: range 0000000015F8B344-0000000015F8B382
void __cdecl Area::~Area(Area *const this)
{
  std::weak_ptr<Scene>::~weak_ptr(&this->scene_wtr_);
  std::set<std::pair<unsigned int,unsigned int>>::~set(&this->interact_temple_set_);
  std::set<unsigned int>::~set(&this->unlock_point_set_);
};

// Line 43: range 0000000015D30BD4-0000000015D30D11
// local variable allocation has failed, the output may be wrong!
void __cdecl Area::Area(Area *const this, uint32_t area_id)
{
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&area_id, (_BYTE)this);
  }
  this->area_id_ = area_id;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->explore_point_, v2, v3);
  this->explore_point_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->explore_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->explore_num_, v2, (_BYTE)this + 8);
  }
  this->explore_num_ = 0;
  v4 = ((_BYTE)this + 12) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->show_switch_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->show_switch_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->show_switch_, v4, v5);
  this->show_switch_ = 0;
  std::set<unsigned int>::set(&this->unlock_point_set_);
  std::set<std::pair<unsigned int,unsigned int>>::set(&this->interact_temple_set_);
  std::weak_ptr<Scene>::weak_ptr(&this->scene_wtr_);
};

// Line 65: range 0000000017D66E82-0000000017D66ED7
void __cdecl Area::gmSetExplorePoint(Area *const this, uint32_t explore_point)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->explore_point_, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->explore_point_ = explore_point;
};

// Line 66: range 0000000013EB97BE-0000000013EB9813
void __cdecl Area::setExplorePointByMuip(Area *const this, uint32_t explore_point)
{
  bool v2; // dl

  v2 = *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->explore_point_, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->explore_point_ = explore_point;
};

// Line 69: range 00000000131D2EF2-00000000131D2F40
ScenePtr __cdecl Area::getScene(const Area *const this)
{
  __int64 v1; // rsi
  ScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Scene>::lock((const std::weak_ptr<Scene> *const)this);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 70: range 0000000015D30D12-0000000015D30D3A
void __cdecl Area::setScene(Area *const this, ScenePtr *p_scene_ptr)
{
  std::weak_ptr<Scene>::operator=<Scene>(&this->scene_wtr_, p_scene_ptr);
};

// Line 72: range 0000000015A1A616-0000000015A1A744
bool __fastcall Area::isTempleInteracted(const Area *const this, uint32_t group_id, uint32_t config_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  std::pair<unsigned int,unsigned int> value; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 group_id:72 64 4 12 config_id:72";
  *(_QWORD *)(v3 + 16) = Area::isTempleInteracted;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = group_id;
  *(_DWORD *)(v3 + 64) = config_id;
  value = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 48), (unsigned int *)(v3 + 64));
  result = common::tools::MiscUtils::isContains<std::set<std::pair<unsigned int,unsigned int>> const,std::pair<unsigned int,unsigned int>>(
             &this->interact_temple_set_,
             &value);
  if ( v9 == (char *)v3 )
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
  return result;
};

// Line 97: range 00000000131D2F42-00000000131D2F84
uint32_t __cdecl Area::getAreaId(const Area *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->area_id_;
};

// Line 98: range 0000000013EB9814-0000000013EB9863
uint32_t __cdecl Area::getExplorePoint(const Area *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->explore_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->explore_point_);
  }
  return this->explore_point_;
};
