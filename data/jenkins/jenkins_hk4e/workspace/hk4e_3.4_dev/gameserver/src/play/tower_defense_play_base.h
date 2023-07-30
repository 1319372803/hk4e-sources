// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/play/tower_defense_play_base.h

// Line 49: range 00000000151999D2-0000000015199AE5
void __cdecl TowerDefensePlayBase::TowerDefensePlayBase(TowerDefensePlayBase *const this, SceneMultistagePlay *play)
{
  int (**v2)(...); // rdx
  int (**v3)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  SceneMultistagePlayCompBase::SceneMultistagePlayCompBase(&this->SceneMultistagePlayCompBase, play);
  v2 = (int (**)(...))(&`vtable for'TowerDefensePlayBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  v3 = (int (**)(...))(&`vtable for'TowerDefensePlayBase + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->SceneMultistagePlayCompBase >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->SceneMultistagePlayCompBase);
  this->_vptr_SceneMultistagePlayCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_);
  }
  this->group_id_ = 0;
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::map(&this->foundation_wtr_map_);
  std::map<unsigned int,std::map<std::string,float>>::map(&this->gadget_server_global_value_map_);
  std::map<std::string,float>::map((std::map<std::string,float> *const)&this->empty_map_);
};

// Line 50: range 00000000162395C8-0000000016239686
void __cdecl TowerDefensePlayBase::~TowerDefensePlayBase(TowerDefensePlayBase *const this)
{
  int (**v1)(...); // rdx
  int (**v2)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TowerDefensePlayBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  v2 = (int (**)(...))(&`vtable for'TowerDefensePlayBase + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->SceneMultistagePlayCompBase >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->SceneMultistagePlayCompBase);
  this->_vptr_SceneMultistagePlayCompBase = v2;
  std::map<std::string,float>::~map((std::map<std::string,float> *const)&this->empty_map_);
  std::map<unsigned int,std::map<std::string,float>>::~map(&this->gadget_server_global_value_map_);
  std::map<unsigned int,std::weak_ptr<FoundationComp>>::~map(&this->foundation_wtr_map_);
  SceneMultistagePlayCompBase::~SceneMultistagePlayCompBase(&this->SceneMultistagePlayCompBase);
};

// Line 50: range 0000000016239690-00000000162396BA
void __cdecl TowerDefensePlayBase::~TowerDefensePlayBase(TowerDefensePlayBase *const this)
{
  TowerDefensePlayBase::~TowerDefensePlayBase(this);
  operator delete(this, 0xC0uLL);
};

// Line 50: range 0000000016239687-000000001623968B
void __fastcall `non-virtual thunk to'TowerDefensePlayBase::~TowerDefensePlayBase(TowerDefensePlayBase *this)
{
  TowerDefensePlayBase::~TowerDefensePlayBase((TowerDefensePlayBase *)((char *)this - 8));
};

// Line 50: range 00000000162396BB-00000000162396BF
void __fastcall `non-virtual thunk to'TowerDefensePlayBase::~TowerDefensePlayBase(TowerDefensePlayBase *this)
{
  TowerDefensePlayBase::~TowerDefensePlayBase((TowerDefensePlayBase *)((char *)this - 8));
};

// Line 60: range 0000000016239200-000000001623926A
uint32_t __cdecl TowerDefensePlayBase::countAllTowerNum(const TowerDefensePlayBase *const this)
{
  unsigned __int64 v1; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  return (*(__int64 (__fastcall **)(const TowerDefensePlayBase *const, _QWORD))v1)(this, 0LL);
};
