// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/network/player_send_packet_controller.h

// Line 28: range 000000001781615E-00000000178161A8
void __cdecl PlayerPacketCache::PlayerPacketCache(PlayerPacketCache *const this)
{
  std::weak_ptr<Player>::weak_ptr(&this->player_wtr);
  std::shared_ptr<proto::AbilityInvocationsNotify>::shared_ptr(&this->ability_proto_ptr);
  std::shared_ptr<proto::CombatInvocationsNotify>::shared_ptr(&this->combat_proto_ptr);
  std::shared_ptr<proto::EntityAuthorityChangeNotify>::shared_ptr(&this->authority_proto_ptr);
};

// Line 28: range 00000000177E2F7E-00000000177E2FC8
void __cdecl PlayerPacketCache::~PlayerPacketCache(PlayerPacketCache *const this)
{
  std::shared_ptr<proto::EntityAuthorityChangeNotify>::~shared_ptr(&this->authority_proto_ptr);
  std::shared_ptr<proto::CombatInvocationsNotify>::~shared_ptr(&this->combat_proto_ptr);
  std::shared_ptr<proto::AbilityInvocationsNotify>::~shared_ptr(&this->ability_proto_ptr);
  std::weak_ptr<Player>::~weak_ptr(&this->player_wtr);
};

// Line 43: range 00000000176AE6DC-00000000176AE6FA
void __cdecl PlayerSendPacketController::~PlayerSendPacketController(PlayerSendPacketController *const this)
{
  std::unordered_map<unsigned int,PlayerPacketCache>::~unordered_map(&this->cache_map_);
};

// Line 46: range 00000000176AE686-00000000176AE6DA
void __cdecl PlayerSendPacketController::PlayerSendPacketController(PlayerSendPacketController *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_need_delay_flush_ = 0;
  std::unordered_map<unsigned int,PlayerPacketCache>::unordered_map(&this->cache_map_);
};

// Line 54: range 000000001762AB00-000000001762AB43
bool __cdecl PlayerSendPacketController::getIsNeedDelayFlush(const PlayerSendPacketController *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(this);
  return this->is_need_delay_flush_;
};

// Line 54: range 0000000016902D4C-0000000016902D98
void __cdecl PlayerSendPacketController::setIsNeedDelayFlush(
        PlayerSendPacketController *const this,
        bool is_need_delay_flush__out)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_need_delay_flush_ = is_need_delay_flush__out;
};
