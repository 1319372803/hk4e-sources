// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/treasure_map_activity.h

// Line 25: range 0000000014D246C6-0000000014D247FD
void __cdecl TreasureMapActivity::~TreasureMapActivity(TreasureMapActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TreasureMapActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::weak_ptr<Observer>::~weak_ptr(&this->enter_scene_done_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->challenge_finish_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->challenge_begin_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->finish_quest_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->general_reward_obs_wtr_);
  std::map<unsigned int,unsigned int>::~map(&this->group_solution_map_);
  std::map<unsigned int,unsigned int>::~map(&this->bonus_solution_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::~unordered_map(&this->region_bonus_fragments_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->region_mp_groups_map_);
  std::string::~string(&this->detect_trans_no_);
  std::string::~string(&this->mp_trans_no_);
  proto::TreasureMapScheduleBin::~TreasureMapScheduleBin(&this->bin_data_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::~unordered_map(&this->region_to_group_coins_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 25: range 0000000014D247FE-0000000014D24828
void __cdecl TreasureMapActivity::~TreasureMapActivity(TreasureMapActivity *const this)
{
  TreasureMapActivity::~TreasureMapActivity(this);
  operator delete(this, 0x1928uLL);
};

// Line 28: range 000000001701C4F2-000000001701C767
void __fastcall ZN19TreasureMapActivityCI212BaseActivityER6Playerj(TreasureMapActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN19TreasureMapActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'TreasureMapActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::unordered_map(&this->region_to_group_coins_map_);
  std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>::mersenne_twister_engine(&this->rand_genatator_);
  proto::TreasureMapScheduleBin::TreasureMapScheduleBin(&this->bin_data_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_active_region_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_active_region_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_active_region_index_, a2, &this->last_active_region_index_);
  }
  this->last_active_region_index_ = 0;
  std::string::basic_string(&this->mp_trans_no_);
  std::string::basic_string(&this->detect_trans_no_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->region_mp_groups_map_);
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::unordered_map(&this->region_bonus_fragments_map_);
  std::map<unsigned int,unsigned int>::map(&this->bonus_solution_map_);
  std::map<unsigned int,unsigned int>::map(&this->group_solution_map_);
  std::weak_ptr<Observer>::weak_ptr(&this->general_reward_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->finish_quest_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->challenge_begin_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->challenge_finish_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->enter_scene_done_obs_wtr_);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 76: range 000000001623DF1C-000000001623DF47
void __cdecl TreasureMapActivity::setDetectTransactionNo(TreasureMapActivity *const this, const std::string *trans_no)
{
  std::string::operator=(&this->detect_trans_no_, trans_no);
};

// Line 81: range 00000000149EDD9A-00000000149EDDD7
void __cdecl TreasureMapActivity::increaseMpChallengeHostRewardNum(TreasureMapActivity *const this)
{
  google::protobuf::uint32 v1; // eax

  v1 = proto::TreasureMapScheduleBin::host_mp_reward_taken_num(&this->bin_data_);
  proto::TreasureMapScheduleBin::set_host_mp_reward_taken_num(&this->bin_data_, v1 + 1);
};

// Line 84: range 00000000149EDDD8-00000000149EDDF7
uint32_t __cdecl TreasureMapActivity::getMpChallengeGuestRewardNum(const TreasureMapActivity *const this)
{
  return proto::TreasureMapScheduleBin::guest_mp_reward_taken_num(&this->bin_data_);
};

// Line 86: range 00000000149EDDF8-00000000149EDE35
void __cdecl TreasureMapActivity::increaseMpChallengeGuestRewardNum(TreasureMapActivity *const this)
{
  google::protobuf::uint32 v1; // eax

  v1 = proto::TreasureMapScheduleBin::guest_mp_reward_taken_num(&this->bin_data_);
  proto::TreasureMapScheduleBin::set_guest_mp_reward_taken_num(&this->bin_data_, v1 + 1);
};

// Line 111: range 00000000149EDD7A-00000000149EDD99
uint32_t __cdecl TreasureMapActivity::getMpChallengeHostRewardNum(const TreasureMapActivity *const this)
{
  return proto::TreasureMapScheduleBin::host_mp_reward_taken_num(&this->bin_data_);
};

// Line 230: range 0000000013EC5795-0000000013EC579F
data::NewActivityType __cdecl TreasureMapActivity::getActivityStaticType()
{
  return 1204;
};
