// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/service/player_mgr.h

// Line 27: range 0000000003898566-0000000003898681
void __cdecl Player::Player(Player *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->uid = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gameserver_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gameserver_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gameserver_id, v2);
  }
  this->gameserver_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->platform_type, v2);
  }
  this->platform_type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_sub_account >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_sub_account >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_sub_account);
  }
  this->is_sub_account = 0;
  std::string::basic_string(&this->country_code);
};

// Line 28: range 0000000003898682-00000000038986A0
void __cdecl Player::~Player(Player *const this)
{
  std::string::~string(&this->country_code);
};

// Line 62: range 0000000003898C02-0000000003898D7E
void __cdecl PlayerMgr::PlayerMgr(PlayerMgr *const this)
{
  std::array<std::atomic<int>,15>::reference v1; // rax
  std::array<std::atomic<int>,65537>::reference v2; // rax
  std::__atomic_base<unsigned int>::__int_type Now; // eax
  PlayerMgr::uint32 i; // [rsp+18h] [rbp-18h]
  uint32_t index; // [rsp+1Ch] [rbp-14h]

  common::tools::SafeMap<std::shared_ptr<Player>,1229u>::SafeMap(&this->player_map_);
  common::tools::SafeMap<std::set<unsigned int>,1229u>::SafeMap(&this->gameserver_player_uid_map_);
  std::atomic<unsigned int>::atomic(&this->last_login_report_time_, 0);
  std::atomic<unsigned int>::atomic(&this->total_player_num_per_time_, 0);
  std::atomic<unsigned int>::atomic(&this->login_per_second_, 0);
  std::atomic<int>::atomic(&this->sub_account_online_player_num_, 0);
  for ( i = 0; i < std::array<std::atomic<int>,15ul>::size(&this->platform_player_num_arr_); ++i )
  {
    v1 = std::array<std::atomic<int>,15ul>::operator[](&this->platform_player_num_arr_, i);
    std::__atomic_base<int>::operator=(v1, 0);
  }
  for ( index = 0; index < std::array<std::atomic<int>,65537ul>::size(&this->fine_grained_player_num_arr_); ++index )
  {
    v2 = std::array<std::atomic<int>,65537ul>::operator[](&this->fine_grained_player_num_arr_, index);
    std::__atomic_base<int>::operator=(v2, 0);
  }
  Now = common::tools::TimeUtils::getNow();
  std::__atomic_base<unsigned int>::operator=(&this->last_login_report_time_, Now);
};

// Line 74: range 0000000003898D80-0000000003898DAC
void __cdecl PlayerMgr::~PlayerMgr(PlayerMgr *const this)
{
  common::tools::SafeMap<std::set<unsigned int>,1229u>::~SafeMap(&this->gameserver_player_uid_map_);
  common::tools::SafeMap<std::shared_ptr<Player>,1229u>::~SafeMap(&this->player_map_);
};

// Line 89: range 0000000003898DAE-0000000003898DC7
uint32_t __cdecl PlayerMgr::getPlayerNum(PlayerMgr *const this)
{
  return common::tools::SafeMap<std::shared_ptr<Player>,1229u>::size(&this->player_map_);
};

// Line 93: range 0000000003898DC8-0000000003898E39
int32_t __cdecl PlayerMgr::getSubAccountPlayerNum(PlayerMgr *const this)
{
  int32_t *p_M_i; // rdx
  std::atomic<int> *p_sub_account_online_player_num; // [rsp+18h] [rbp-8h]

  p_sub_account_online_player_num = &this->sub_account_online_player_num_;
  std::operator&(memory_order_seq_cst, __memory_order_mask);
  p_M_i = &p_sub_account_online_player_num->_M_i;
  if ( *(_BYTE *)(((unsigned __int64)p_sub_account_online_player_num >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_sub_account_online_player_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_sub_account_online_player_num >> 3)
                                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(p_sub_account_online_player_num);
  }
  return *p_M_i;
};
