// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/fish_pool_comp.h

// Line 21: range 00000000131E62AE-00000000131E6389
void __cdecl FishStock::FishStock(FishStock *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->stock_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gen_fish_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gen_fish_num);
  }
  this->gen_fish_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_num);
  }
  this->max_num = 0;
};

// Line 49: range 00000000135E9EC0-00000000135EA12B
void __cdecl Angler::Angler(Angler *const this)
{
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_bait >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_bait >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_bait);
  }
  this->fish_bait = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_rod >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fish_rod >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fish_rod);
  }
  this->fish_rod = 0;
  Vector3::Vector3(&this->fishing_pos, 0.0, 0.0, 0.0);
  std::weak_ptr<Monster>::weak_ptr(&this->fish_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state);
  }
  this->state = FISH_STATE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_state_change_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_state_change_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_state_change_time);
  }
  this->last_state_change_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fishing_start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fishing_start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fishing_start_time);
  }
  this->fishing_start_time = 0;
  std::vector<unsigned long>::vector(&this->ori_avatar_guid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->cur_avatar_guid);
  this->cur_avatar_guid = 0LL;
  std::string::basic_string(&this->transaction);
  if ( *(_BYTE *)(((unsigned __int64)&this->rod_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rod_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rod_entity_id);
  }
  this->rod_entity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->bladder_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bladder_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bladder_entity_id);
  }
  this->bladder_entity_id = 0;
};

// Line 49: range 0000000013697B84-0000000013697BCE
void __cdecl Angler::~Angler(Angler *const this)
{
  std::string::~string(&this->transaction);
  std::vector<unsigned long>::~vector(&this->ori_avatar_guid_vec);
  std::weak_ptr<Monster>::~weak_ptr(&this->fish_wtr);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr);
};

// Line 68: range 00000000136112C2-0000000013611363
void __cdecl FishPoolComp::~FishPoolComp(FishPoolComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FishPoolComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
  std::shared_ptr<SceneUnixTimer>::~shared_ptr(&this->update_timer_ptr_);
  std::map<unsigned int,std::shared_ptr<Angler>>::~map(&this->angler_map_);
  std::map<unsigned int,unsigned int>::~map(&this->cached_fish_map_);
  std::map<unsigned int,std::weak_ptr<Monster>>::~map(&this->fish_wtr_map_);
  std::map<unsigned int,FishStock>::~map(&this->fish_stock_map_);
  GadgetCompBase::~GadgetCompBase(this);
};

// Line 68: range 0000000013611364-000000001361138E
void __cdecl FishPoolComp::~FishPoolComp(FishPoolComp *const this)
{
  FishPoolComp::~FishPoolComp(this);
  operator delete(this, 0xF8uLL);
};

// Line 146: range 0000000017D714A6-0000000017D71500
void __cdecl FishPoolComp::setTodayFishNumByGm(FishPoolComp *const this, uint32_t fished_num)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->today_fish_output_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->today_fish_output_num_);
  }
  this->today_fish_output_num_ = fished_num;
};

// Line 155: range 00000000131E7440-00000000131E747A
void __cdecl FishPoolComp::FishingOutputResult::FishingOutputResult(FishPoolComp::FishingOutputResult *const this)
{
  std::vector<ItemParam>::vector(&this->reward_item_vec);
  std::vector<ItemParam>::vector(&this->drop_item_vec);
  std::vector<ItemParam>::vector(&this->talent_item_vec);
};

// Line 155: range 00000000131E747C-00000000131E74B6
void __cdecl FishPoolComp::FishingOutputResult::~FishingOutputResult(FishPoolComp::FishingOutputResult *const this)
{
  std::vector<ItemParam>::~vector(&this->talent_item_vec);
  std::vector<ItemParam>::~vector(&this->drop_item_vec);
  std::vector<ItemParam>::~vector(&this->reward_item_vec);
};
