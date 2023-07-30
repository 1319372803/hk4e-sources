// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/rand_task/player_rand_task_comp.cpp

// Line 18: range 0000000015C9129C-0000000015C9135C
int32_t __cdecl PlayerRandTaskComp::fromBin(
        PlayerRandTaskComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  uint32_t reward_time; // edx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  bool v6; // dl
  const proto::PlayerRandTaskCompBin *proto_comp; // [rsp+18h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::rand_task_bin(player_data_bin);
  reward_time = proto::PlayerRandTaskCompBin::last_reward_time(proto_comp);
  v3 = *(_BYTE *)(((unsigned __int64)&this->last_reward_time_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(player_data_bin) = v3 != 0;
    __asan_report_store4(&this->last_reward_time_, player_data_bin, reward_time);
  }
  this->last_reward_time_ = reward_time;
  v4 = proto::PlayerRandTaskCompBin::reward_num(proto_comp);
  v5 = *(_BYTE *)(((unsigned __int64)&this->reward_num_ >> 3) + 0x7FFF8000);
  LOBYTE(player_data_bin) = v5 != 0;
  v6 = v5 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v5;
  if ( v6 )
    __asan_report_store4(&this->reward_num_, player_data_bin, v6);
  this->reward_num_ = v4;
  return 0;
};

// Line 26: range 0000000015C9135E-0000000015C9141C
int32_t __cdecl PlayerRandTaskComp::toBin(PlayerRandTaskComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::PlayerRandTaskCompBin *proto_comp; // [rsp+18h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_rand_task_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_reward_time_);
  }
  proto::PlayerRandTaskCompBin::set_last_reward_time(proto_comp, this->last_reward_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reward_num_);
  }
  proto::PlayerRandTaskCompBin::set_reward_num(proto_comp, this->reward_num_);
  return 0;
};

// Line 34: range 0000000015C9141E-0000000015C91514
uint32_t __cdecl PlayerRandTaskComp::getRewardNum(const PlayerRandTaskComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  time_t v2; // rdx
  uint32_t offset; // [rsp+18h] [rbp-18h]
  uint32_t now; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
  offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  now = common::tools::TimeUtils::getNow();
  v2 = offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_reward_time_);
  }
  if ( !common::tools::TimeUtils::isSameDay(now, this->last_reward_time_, v2) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reward_num_);
  }
  return this->reward_num_;
};

// Line 45: range 0000000015C91516-0000000015C915B7
void __cdecl PlayerRandTaskComp::updateRewardNum(PlayerRandTaskComp *const this)
{
  __int64 v1; // rsi
  uint32_t v2; // ecx
  char v3; // dl
  bool v4; // dl
  __int64 Now; // rsi

  v2 = PlayerRandTaskComp::getRewardNum(this) + 1;
  v3 = *(_BYTE *)(((unsigned __int64)&this->reward_num_ >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v3 != 0;
  v4 = v3 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v3;
  if ( v4 )
    __asan_report_store4(&this->reward_num_, v1, v4);
  this->reward_num_ = v2;
  Now = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_reward_time_, Now, (_BYTE)this + 32);
  }
  this->last_reward_time_ = Now;
};
