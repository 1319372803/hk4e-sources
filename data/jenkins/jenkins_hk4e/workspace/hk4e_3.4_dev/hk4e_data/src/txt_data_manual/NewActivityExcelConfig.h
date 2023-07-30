// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/NewActivityExcelConfig.h

// Line 36: range 00000000137BFC12-00000000137BFC5E
void __cdecl ActivityDropIndexNode::ActivityDropIndexNode(ActivityDropIndexNode *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->level_drop_map);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::shared_ptr<ActivityDropIndexNode>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::shared_ptr<ActivityDropIndexNode>>>>::unordered_map(&this->next_activity_drop_index_node_map);
  std::set<std::pair<unsigned int,unsigned int>>::set(&this->subject_set);
  std::unordered_set<unsigned int>::unordered_set(&this->cond_meet_set);
};

// Line 36: range 00000000137CAE40-00000000137CAE8C
void __cdecl ActivityDropIndexNode::~ActivityDropIndexNode(ActivityDropIndexNode *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->cond_meet_set);
  std::set<std::pair<unsigned int,unsigned int>>::~set(&this->subject_set);
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::shared_ptr<ActivityDropIndexNode>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::shared_ptr<ActivityDropIndexNode>>>>::~unordered_map(&this->next_activity_drop_index_node_map);
  std::map<unsigned int,unsigned int>::~map(&this->level_drop_map);
};

// Line 52: range 00000000137C0316-00000000137C035B
void __cdecl ActivitySaleBaseConfig::ActivitySaleBaseConfig(
        ActivitySaleBaseConfig *const this,
        const ActivitySaleBaseConfig *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivitySaleBaseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySaleBaseConfig = v2;
};

// Line 54: range 00000000135C5D3A-00000000135C5D7B
void __cdecl ActivitySaleBaseConfig::~ActivitySaleBaseConfig(ActivitySaleBaseConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivitySaleBaseConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySaleBaseConfig = v2;
};

// Line 54: range 00000000135C5D7C-00000000135C5DA6
void __cdecl ActivitySaleBaseConfig::~ActivitySaleBaseConfig(ActivitySaleBaseConfig *const this)
{
  ActivitySaleBaseConfig::~ActivitySaleBaseConfig(this);
  operator delete(this, 8uLL);
};

// Line 58: range 00000000137C035C-00000000137C04B1
void __cdecl ActivityWeaponUpgradeSaleConfig::ActivityWeaponUpgradeSaleConfig(
        ActivityWeaponUpgradeSaleConfig *const this,
        const ActivityWeaponUpgradeSaleConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t weapon_id; // ecx
  char v4; // al
  float ratio; // xmm0_4
  const ActivityWeaponUpgradeSaleConfig *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  ActivitySaleBaseConfig::ActivitySaleBaseConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'ActivityWeaponUpgradeSaleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivitySaleBaseConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weapon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weapon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->weapon_id);
  }
  weapon_id = a2->weapon_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->weapon_id, a2);
  }
  this->weapon_id = weapon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v6->ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v6->ratio);
  }
  ratio = v6->ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ratio, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->ratio = ratio;
};

// Line 58: range 00000000137C04B2-00000000137C04FF
void __cdecl ActivityWeaponUpgradeSaleConfig::~ActivityWeaponUpgradeSaleConfig(
        ActivityWeaponUpgradeSaleConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityWeaponUpgradeSaleConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivitySaleBaseConfig = v2;
  ActivitySaleBaseConfig::~ActivitySaleBaseConfig(this);
};

// Line 58: range 00000000137C0500-00000000137C052A
void __cdecl ActivityWeaponUpgradeSaleConfig::~ActivityWeaponUpgradeSaleConfig(
        ActivityWeaponUpgradeSaleConfig *const this)
{
  ActivityWeaponUpgradeSaleConfig::~ActivityWeaponUpgradeSaleConfig(this);
  operator delete(this, 0x10uLL);
};
