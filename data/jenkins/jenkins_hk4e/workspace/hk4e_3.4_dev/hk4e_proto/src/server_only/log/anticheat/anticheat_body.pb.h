// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_proto/src/server_only/log/anticheat/anticheat_body.pb.h

// Line 329: range 00000000160D1EE6-00000000160D1F04
proto_log::SecurityChannelLog *__cdecl proto_log::SecurityChannelLog::New(
        const proto_log::SecurityChannelLog *const this)
{
  return proto_log::SecurityChannelLog::New(this, 0LL);
};

// Line 346: range 00000000160D1F06-00000000160D1F4D
int __cdecl proto_log::SecurityChannelLog::GetCachedSize(const proto_log::SecurityChannelLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 463: range 00000000160D1F4E-00000000160D1F5A
const proto_log::AntiCheatBodyAIHash *__cdecl proto_log::AntiCheatBodyAIHash::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyAIHash *)&proto_log::_AntiCheatBodyAIHash_default_instance_;
};

// Line 477: range 00000000160D1F5C-00000000160D1F7A
proto_log::AntiCheatBodyAIHash *__cdecl proto_log::AntiCheatBodyAIHash::New(
        const proto_log::AntiCheatBodyAIHash *const this)
{
  return proto_log::AntiCheatBodyAIHash::New(this, 0LL);
};

// Line 494: range 00000000160D1F7C-00000000160D1FCB
int __cdecl proto_log::AntiCheatBodyAIHash::GetCachedSize(const proto_log::AntiCheatBodyAIHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 574: range 00000000160D1FCC-00000000160D1FD8
const proto_log::AntiCheatBodyMTP *__cdecl proto_log::AntiCheatBodyMTP::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyMTP *)&proto_log::_AntiCheatBodyMTP_default_instance_;
};

// Line 588: range 00000000160D1FDA-00000000160D1FF8
proto_log::AntiCheatBodyMTP *__cdecl proto_log::AntiCheatBodyMTP::New(const proto_log::AntiCheatBodyMTP *const this)
{
  return proto_log::AntiCheatBodyMTP::New(this, 0LL);
};

// Line 605: range 00000000160D1FFA-00000000160D2049
int __cdecl proto_log::AntiCheatBodyMTP::GetCachedSize(const proto_log::AntiCheatBodyMTP *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 686: range 00000000160D204A-00000000160D2056
const proto_log::AntiCheatBodyChecksumInvalid *__cdecl proto_log::AntiCheatBodyChecksumInvalid::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyChecksumInvalid *)&proto_log::_AntiCheatBodyChecksumInvalid_default_instance_;
};

// Line 700: range 00000000160D2058-00000000160D2076
proto_log::AntiCheatBodyChecksumInvalid *__cdecl proto_log::AntiCheatBodyChecksumInvalid::New(
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  return proto_log::AntiCheatBodyChecksumInvalid::New(this, 0LL);
};

// Line 717: range 00000000160D2078-00000000160D20C7
int __cdecl proto_log::AntiCheatBodyChecksumInvalid::GetCachedSize(
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 902: range 00000000160D20C8-00000000160D20D4
const proto_log::AntiCheatBodySkillCdWrong *__cdecl proto_log::AntiCheatBodySkillCdWrong::internal_default_instance()
{
  return (const proto_log::AntiCheatBodySkillCdWrong *)&proto_log::_AntiCheatBodySkillCdWrong_default_instance_;
};

// Line 916: range 00000000160D20D6-00000000160D20F4
proto_log::AntiCheatBodySkillCdWrong *__cdecl proto_log::AntiCheatBodySkillCdWrong::New(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  return proto_log::AntiCheatBodySkillCdWrong::New(this, 0LL);
};

// Line 933: range 00000000160D20F6-00000000160D2145
int __cdecl proto_log::AntiCheatBodySkillCdWrong::GetCachedSize(const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 940: range 00000000160D2146-00000000160D2154
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodySkillCdWrong::GetArenaNoVirtual(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  return 0LL;
};

// Line 1091: range 00000000160D2155-00000000160D2161
const proto_log::AntiCheatBodyMoveSpeedOverLimit *__cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyMoveSpeedOverLimit *)&proto_log::_AntiCheatBodyMoveSpeedOverLimit_default_instance_;
};

// Line 1105: range 00000000160D2162-00000000160D2180
proto_log::AntiCheatBodyMoveSpeedOverLimit *__cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::New(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  return proto_log::AntiCheatBodyMoveSpeedOverLimit::New(this, 0LL);
};

// Line 1122: range 00000000160D2182-00000000160D21D1
int __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::GetCachedSize(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 1350: range 00000000160D21D2-00000000160D21DE
const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *__cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::internal_default_instance()
{
  return (const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *)&proto_log::_AntiCheatBodySceneTimeMoveSpeedOverLimit_default_instance_;
};

// Line 1364: range 00000000160D21E0-00000000160D21FE
proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *__cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::New(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  return proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::New(this, 0LL);
};

// Line 1381: range 00000000160D2200-00000000160D224F
int __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::GetCachedSize(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 1545: range 00000000160D2250-00000000160D225C
const proto_log::AntiCheatBodyAntiOfflineResult *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyAntiOfflineResult *)&proto_log::_AntiCheatBodyAntiOfflineResult_default_instance_;
};

// Line 1559: range 00000000160D225E-00000000160D227C
proto_log::AntiCheatBodyAntiOfflineResult *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::New(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return proto_log::AntiCheatBodyAntiOfflineResult::New(this, 0LL);
};

// Line 1576: range 00000000160D227E-00000000160D22CA
int __cdecl proto_log::AntiCheatBodyAntiOfflineResult::GetCachedSize(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 1926: range 00000000160D22CB-00000000160D22D7
const proto_log::AntiCheatBodyEliteMonsterAbnormalDie *__cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyEliteMonsterAbnormalDie *)&proto_log::_AntiCheatBodyEliteMonsterAbnormalDie_default_instance_;
};

// Line 1940: range 00000000160D22D8-00000000160D22F6
proto_log::AntiCheatBodyEliteMonsterAbnormalDie *__cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::New(
        const proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this)
{
  return proto_log::AntiCheatBodyEliteMonsterAbnormalDie::New(this, 0LL);
};

// Line 1957: range 00000000160D22F8-00000000160D233F
int __cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::GetCachedSize(
        const proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 1964: range 00000000160D2340-00000000160D234E
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this)
{
  return 0LL;
};

// Line 2055: range 00000000160D234F-00000000160D235B
const proto_log::AntiCheatBodyAbilityHash *__cdecl proto_log::AntiCheatBodyAbilityHash::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyAbilityHash *)&proto_log::_AntiCheatBodyAbilityHash_default_instance_;
};

// Line 2069: range 00000000160D235C-00000000160D237A
proto_log::AntiCheatBodyAbilityHash *__cdecl proto_log::AntiCheatBodyAbilityHash::New(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  return proto_log::AntiCheatBodyAbilityHash::New(this, 0LL);
};

// Line 2086: range 00000000160D237C-00000000160D23CB
int __cdecl proto_log::AntiCheatBodyAbilityHash::GetCachedSize(const proto_log::AntiCheatBodyAbilityHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 2231: range 00000000160D23CC-00000000160D23D8
const proto_log::AntiCheatBodyEquipAffixCdWrong *__cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyEquipAffixCdWrong *)&proto_log::_AntiCheatBodyEquipAffixCdWrong_default_instance_;
};

// Line 2245: range 00000000160D23DA-00000000160D23F8
proto_log::AntiCheatBodyEquipAffixCdWrong *__cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::New(
        const proto_log::AntiCheatBodyEquipAffixCdWrong *const this)
{
  return proto_log::AntiCheatBodyEquipAffixCdWrong::New(this, 0LL);
};

// Line 2262: range 00000000160D23FA-00000000160D2441
int __cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::GetCachedSize(
        const proto_log::AntiCheatBodyEquipAffixCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 2349: range 00000000160D2442-00000000160D244E
const proto_log::AntiCheatBodyPlayerReport *__cdecl proto_log::AntiCheatBodyPlayerReport::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyPlayerReport *)&proto_log::_AntiCheatBodyPlayerReport_default_instance_;
};

// Line 2363: range 00000000160D2450-00000000160D246E
proto_log::AntiCheatBodyPlayerReport *__cdecl proto_log::AntiCheatBodyPlayerReport::New(
        const proto_log::AntiCheatBodyPlayerReport *const this)
{
  return proto_log::AntiCheatBodyPlayerReport::New(this, 0LL);
};

// Line 2380: range 00000000160D2470-00000000160D24B7
int __cdecl proto_log::AntiCheatBodyPlayerReport::GetCachedSize(const proto_log::AntiCheatBodyPlayerReport *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 2497: range 00000000160D24B8-00000000160D24C4
const proto_log::AntiCheatBodySegmentCrcCheckFail *__cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::internal_default_instance()
{
  return (const proto_log::AntiCheatBodySegmentCrcCheckFail *)&proto_log::_AntiCheatBodySegmentCrcCheckFail_default_instance_;
};

// Line 2511: range 00000000160D24C6-00000000160D24E4
proto_log::AntiCheatBodySegmentCrcCheckFail *__cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::New(
        const proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  return proto_log::AntiCheatBodySegmentCrcCheckFail::New(this, 0LL);
};

// Line 2528: range 00000000160D24E6-00000000160D2535
int __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::GetCachedSize(
        const proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 2652: range 00000000160D2536-00000000160D2542
const proto_log::AntiCheatBodyMonsterDie *__cdecl proto_log::AntiCheatBodyMonsterDie::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyMonsterDie *)&proto_log::_AntiCheatBodyMonsterDie_default_instance_;
};

// Line 2666: range 00000000160D2544-00000000160D2562
proto_log::AntiCheatBodyMonsterDie *__cdecl proto_log::AntiCheatBodyMonsterDie::New(
        const proto_log::AntiCheatBodyMonsterDie *const this)
{
  return proto_log::AntiCheatBodyMonsterDie::New(this, 0LL);
};

// Line 2683: range 00000000160D2564-00000000160D25AB
int __cdecl proto_log::AntiCheatBodyMonsterDie::GetCachedSize(const proto_log::AntiCheatBodyMonsterDie *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 2690: range 00000000160D25AC-00000000160D25BA
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyMonsterDie::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyMonsterDie *const this)
{
  return 0LL;
};

// Line 2795: range 00000000160D25BB-00000000160D25C7
const proto_log::AntiCheatBodyUseNotAllowedSkill *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyUseNotAllowedSkill *)&proto_log::_AntiCheatBodyUseNotAllowedSkill_default_instance_;
};

// Line 2809: range 00000000160D25C8-00000000160D25E6
proto_log::AntiCheatBodyUseNotAllowedSkill *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::New(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  return proto_log::AntiCheatBodyUseNotAllowedSkill::New(this, 0LL);
};

// Line 2826: range 00000000160D25E8-00000000160D262F
int __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::GetCachedSize(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 2833: range 00000000160D2630-00000000160D263E
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  return 0LL;
};

// Line 2963: range 00000000160D263F-00000000160D264B
const proto_log::AntiCheatBodyClientSpeedUpTime *__cdecl proto_log::AntiCheatBodyClientSpeedUpTime::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyClientSpeedUpTime *)&proto_log::_AntiCheatBodyClientSpeedUpTime_default_instance_;
};

// Line 2977: range 00000000160D264C-00000000160D266A
proto_log::AntiCheatBodyClientSpeedUpTime *__cdecl proto_log::AntiCheatBodyClientSpeedUpTime::New(
        const proto_log::AntiCheatBodyClientSpeedUpTime *const this)
{
  return proto_log::AntiCheatBodyClientSpeedUpTime::New(this, 0LL);
};

// Line 2994: range 00000000160D266C-00000000160D26B3
int __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::GetCachedSize(
        const proto_log::AntiCheatBodyClientSpeedUpTime *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 3095: range 00000000160D26B4-00000000160D26C0
const proto_log::AntiCheatBodyCombatHash *__cdecl proto_log::AntiCheatBodyCombatHash::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyCombatHash *)&proto_log::_AntiCheatBodyCombatHash_default_instance_;
};

// Line 3109: range 00000000160D26C2-00000000160D26E0
proto_log::AntiCheatBodyCombatHash *__cdecl proto_log::AntiCheatBodyCombatHash::New(
        const proto_log::AntiCheatBodyCombatHash *const this)
{
  return proto_log::AntiCheatBodyCombatHash::New(this, 0LL);
};

// Line 3126: range 00000000160D26E2-00000000160D2729
int __cdecl proto_log::AntiCheatBodyCombatHash::GetCachedSize(const proto_log::AntiCheatBodyCombatHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 3133: range 00000000160D272A-00000000160D2738
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyCombatHash::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyCombatHash *const this)
{
  return 0LL;
};

// Line 3209: range 00000000160D2739-00000000160D2745
const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *__cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *)&proto_log::_AntiCheatBodyGadgetInteractBeyondDistance_default_instance_;
};

// Line 3223: range 00000000160D2746-00000000160D2764
proto_log::AntiCheatBodyGadgetInteractBeyondDistance *__cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::New(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  return proto_log::AntiCheatBodyGadgetInteractBeyondDistance::New(this, 0LL);
};

// Line 3240: range 00000000160D2766-00000000160D27AD
int __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::GetCachedSize(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 3247: range 00000000160D27AE-00000000160D27BC
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  return 0LL;
};

// Line 3375: range 00000000160D27BD-00000000160D27C9
const proto_log::AntiCheatBodySafeFloatException *__cdecl proto_log::AntiCheatBodySafeFloatException::internal_default_instance()
{
  return (const proto_log::AntiCheatBodySafeFloatException *)&proto_log::_AntiCheatBodySafeFloatException_default_instance_;
};

// Line 3389: range 00000000160D27CA-00000000160D27E8
proto_log::AntiCheatBodySafeFloatException *__cdecl proto_log::AntiCheatBodySafeFloatException::New(
        const proto_log::AntiCheatBodySafeFloatException *const this)
{
  return proto_log::AntiCheatBodySafeFloatException::New(this, 0LL);
};

// Line 3406: range 00000000160D27EA-00000000160D2831
int __cdecl proto_log::AntiCheatBodySafeFloatException::GetCachedSize(
        const proto_log::AntiCheatBodySafeFloatException *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 3495: range 00000000160D2832-00000000160D283E
const proto_log::AntiCheatBodyEnvironmentError *__cdecl proto_log::AntiCheatBodyEnvironmentError::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyEnvironmentError *)&proto_log::_AntiCheatBodyEnvironmentError_default_instance_;
};

// Line 3509: range 00000000160D2840-00000000160D285E
proto_log::AntiCheatBodyEnvironmentError *__cdecl proto_log::AntiCheatBodyEnvironmentError::New(
        const proto_log::AntiCheatBodyEnvironmentError *const this)
{
  return proto_log::AntiCheatBodyEnvironmentError::New(this, 0LL);
};

// Line 3526: range 00000000160D2860-00000000160D28AF
int __cdecl proto_log::AntiCheatBodyEnvironmentError::GetCachedSize(
        const proto_log::AntiCheatBodyEnvironmentError *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 3622: range 00000000160D28B0-00000000160D28BC
const proto_log::AntiCheatBodyDamageOverLimit *__cdecl proto_log::AntiCheatBodyDamageOverLimit::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyDamageOverLimit *)&proto_log::_AntiCheatBodyDamageOverLimit_default_instance_;
};

// Line 3636: range 00000000160D28BE-00000000160D28DC
proto_log::AntiCheatBodyDamageOverLimit *__cdecl proto_log::AntiCheatBodyDamageOverLimit::New(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  return proto_log::AntiCheatBodyDamageOverLimit::New(this, 0LL);
};

// Line 3653: range 00000000160D28DE-00000000160D2925
int __cdecl proto_log::AntiCheatBodyDamageOverLimit::GetCachedSize(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 3660: range 00000000160D2926-00000000160D2934
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyDamageOverLimit::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  return 0LL;
};

// Line 3819: range 00000000160D2935-00000000160D2941
const proto_log::BriefMotionLog *__cdecl proto_log::BriefMotionLog::internal_default_instance()
{
  return (const proto_log::BriefMotionLog *)&proto_log::_BriefMotionLog_default_instance_;
};

// Line 3833: range 00000000160D2942-00000000160D2960
proto_log::BriefMotionLog *__cdecl proto_log::BriefMotionLog::New(const proto_log::BriefMotionLog *const this)
{
  return proto_log::BriefMotionLog::New(this, 0LL);
};

// Line 3850: range 00000000160D2962-00000000160D29A9
int __cdecl proto_log::BriefMotionLog::GetCachedSize(const proto_log::BriefMotionLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 3923: range 00000000160D29AA-00000000160D29B6
const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *__cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *)&proto_log::_AntiCheatBodyClientReportMoveSpeedOverLimit_default_instance_;
};

// Line 3937: range 00000000160D29B8-00000000160D29D6
proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *__cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::New(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  return proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::New(this, 0LL);
};

// Line 3954: range 00000000160D29D8-00000000160D2A1F
int __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::GetCachedSize(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 3961: range 00000000160D2A20-00000000160D2A2E
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  return 0LL;
};

// Line 4092: range 00000000160D2A2F-00000000160D2A3B
const proto_log::AntiCheatBodyAvatarExcelHash *__cdecl proto_log::AntiCheatBodyAvatarExcelHash::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyAvatarExcelHash *)&proto_log::_AntiCheatBodyAvatarExcelHash_default_instance_;
};

// Line 4106: range 00000000160D2A3C-00000000160D2A5A
proto_log::AntiCheatBodyAvatarExcelHash *__cdecl proto_log::AntiCheatBodyAvatarExcelHash::New(
        const proto_log::AntiCheatBodyAvatarExcelHash *const this)
{
  return proto_log::AntiCheatBodyAvatarExcelHash::New(this, 0LL);
};

// Line 4123: range 00000000160D2A5C-00000000160D2AAB
int __cdecl proto_log::AntiCheatBodyAvatarExcelHash::GetCachedSize(
        const proto_log::AntiCheatBodyAvatarExcelHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 4218: range 00000000160D2AAC-00000000160D2AB8
const proto_log::AntiCheatBodyClientLoadingCostumeVerification *__cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyClientLoadingCostumeVerification *)&proto_log::_AntiCheatBodyClientLoadingCostumeVerification_default_instance_;
};

// Line 4232: range 00000000160D2ABA-00000000160D2AD8
proto_log::AntiCheatBodyClientLoadingCostumeVerification *__cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::New(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  return proto_log::AntiCheatBodyClientLoadingCostumeVerification::New(this, 0LL);
};

// Line 4249: range 00000000160D2ADA-00000000160D2B21
int __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::GetCachedSize(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 4371: range 00000000160D2B22-00000000160D2B2E
const proto_log::AntiCheatBodyQiandaoguaCheckFail *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyQiandaoguaCheckFail *)&proto_log::_AntiCheatBodyQiandaoguaCheckFail_default_instance_;
};

// Line 4385: range 00000000160D2B30-00000000160D2B4E
proto_log::AntiCheatBodyQiandaoguaCheckFail *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::New(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  return proto_log::AntiCheatBodyQiandaoguaCheckFail::New(this, 0LL);
};

// Line 4402: range 00000000160D2B50-00000000160D2B9F
int __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::GetCachedSize(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 4409: range 00000000160D2BA0-00000000160D2BAE
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  return 0LL;
};

// Line 4586: range 00000000160D2BAF-00000000160D2BBB
const proto_log::AntiCheatBodyMouseMacroClientReport *__cdecl proto_log::AntiCheatBodyMouseMacroClientReport::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyMouseMacroClientReport *)&proto_log::_AntiCheatBodyMouseMacroClientReport_default_instance_;
};

// Line 4600: range 00000000160D2BBC-00000000160D2BDA
proto_log::AntiCheatBodyMouseMacroClientReport *__cdecl proto_log::AntiCheatBodyMouseMacroClientReport::New(
        const proto_log::AntiCheatBodyMouseMacroClientReport *const this)
{
  return proto_log::AntiCheatBodyMouseMacroClientReport::New(this, 0LL);
};

// Line 4617: range 00000000160D2BDC-00000000160D2C2B
int __cdecl proto_log::AntiCheatBodyMouseMacroClientReport::GetCachedSize(
        const proto_log::AntiCheatBodyMouseMacroClientReport *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 4683: range 00000000160D2C2C-00000000160D2C38
const proto_log::AntiCheatBodyClientTickTimeCheckFail *__cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyClientTickTimeCheckFail *)&proto_log::_AntiCheatBodyClientTickTimeCheckFail_default_instance_;
};

// Line 4697: range 00000000160D2C3A-00000000160D2C58
proto_log::AntiCheatBodyClientTickTimeCheckFail *__cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::New(
        const proto_log::AntiCheatBodyClientTickTimeCheckFail *const this)
{
  return proto_log::AntiCheatBodyClientTickTimeCheckFail::New(this, 0LL);
};

// Line 4714: range 00000000160D2C5A-00000000160D2CA1
int __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::GetCachedSize(
        const proto_log::AntiCheatBodyClientTickTimeCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 4822: range 00000000160D2CA2-00000000160D2CAE
const proto_log::AntiCheatBodyClientSgvCheckFail *__cdecl proto_log::AntiCheatBodyClientSgvCheckFail::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyClientSgvCheckFail *)&proto_log::_AntiCheatBodyClientSgvCheckFail_default_instance_;
};

// Line 4836: range 00000000160D2CB0-00000000160D2CCE
proto_log::AntiCheatBodyClientSgvCheckFail *__cdecl proto_log::AntiCheatBodyClientSgvCheckFail::New(
        const proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  return proto_log::AntiCheatBodyClientSgvCheckFail::New(this, 0LL);
};

// Line 4853: range 00000000160D2CD0-00000000160D2D1F
int __cdecl proto_log::AntiCheatBodyClientSgvCheckFail::GetCachedSize(
        const proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 4860: range 00000000160D2D20-00000000160D2D2E
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyClientSgvCheckFail::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  return 0LL;
};

// Line 4958: range 00000000160D2D2F-00000000160D2D3B
const proto_log::AntiCheatBodyStaminaCheckFail *__cdecl proto_log::AntiCheatBodyStaminaCheckFail::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyStaminaCheckFail *)&proto_log::_AntiCheatBodyStaminaCheckFail_default_instance_;
};

// Line 4972: range 00000000160D2D3C-00000000160D2D5A
proto_log::AntiCheatBodyStaminaCheckFail *__cdecl proto_log::AntiCheatBodyStaminaCheckFail::New(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  return proto_log::AntiCheatBodyStaminaCheckFail::New(this, 0LL);
};

// Line 4989: range 00000000160D2D5C-00000000160D2DA3
int __cdecl proto_log::AntiCheatBodyStaminaCheckFail::GetCachedSize(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 4996: range 00000000160D2DA4-00000000160D2DB2
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyStaminaCheckFail::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  return 0LL;
};

// Line 5130: range 00000000160D2DB3-00000000160D2DBF
const proto_log::AntiCheatBodyClientFightReport *__cdecl proto_log::AntiCheatBodyClientFightReport::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyClientFightReport *)&proto_log::_AntiCheatBodyClientFightReport_default_instance_;
};

// Line 5144: range 00000000160D2DC0-00000000160D2DDE
proto_log::AntiCheatBodyClientFightReport *__cdecl proto_log::AntiCheatBodyClientFightReport::New(
        const proto_log::AntiCheatBodyClientFightReport *const this)
{
  return proto_log::AntiCheatBodyClientFightReport::New(this, 0LL);
};

// Line 5161: range 00000000160D2DE0-00000000160D2E27
int __cdecl proto_log::AntiCheatBodyClientFightReport::GetCachedSize(
        const proto_log::AntiCheatBodyClientFightReport *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 5234: range 00000000160D2E28-00000000160D2E34
const proto_log::AntiCheatBodyClientProtoError *__cdecl proto_log::AntiCheatBodyClientProtoError::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyClientProtoError *)&proto_log::_AntiCheatBodyClientProtoError_default_instance_;
};

// Line 5248: range 00000000160D2E36-00000000160D2E54
proto_log::AntiCheatBodyClientProtoError *__cdecl proto_log::AntiCheatBodyClientProtoError::New(
        const proto_log::AntiCheatBodyClientProtoError *const this)
{
  return proto_log::AntiCheatBodyClientProtoError::New(this, 0LL);
};

// Line 5265: range 00000000160D2E56-00000000160D2EA5
int __cdecl proto_log::AntiCheatBodyClientProtoError::GetCachedSize(
        const proto_log::AntiCheatBodyClientProtoError *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 5331: range 00000000160D2EA6-00000000160D2EB2
const proto_log::AntiCheatBodyUnionExceedFreq *__cdecl proto_log::AntiCheatBodyUnionExceedFreq::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyUnionExceedFreq *)&proto_log::_AntiCheatBodyUnionExceedFreq_default_instance_;
};

// Line 5345: range 00000000160D2EB4-00000000160D2ED2
proto_log::AntiCheatBodyUnionExceedFreq *__cdecl proto_log::AntiCheatBodyUnionExceedFreq::New(
        const proto_log::AntiCheatBodyUnionExceedFreq *const this)
{
  return proto_log::AntiCheatBodyUnionExceedFreq::New(this, 0LL);
};

// Line 5362: range 00000000160D2ED4-00000000160D2F23
int __cdecl proto_log::AntiCheatBodyUnionExceedFreq::GetCachedSize(
        const proto_log::AntiCheatBodyUnionExceedFreq *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 5456: range 00000000160D2F24-00000000160D2F30
const proto_log::AntiCheatBodyReliquaryUpgradeError *__cdecl proto_log::AntiCheatBodyReliquaryUpgradeError::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyReliquaryUpgradeError *)&proto_log::_AntiCheatBodyReliquaryUpgradeError_default_instance_;
};

// Line 5470: range 00000000160D2F32-00000000160D2F50
proto_log::AntiCheatBodyReliquaryUpgradeError *__cdecl proto_log::AntiCheatBodyReliquaryUpgradeError::New(
        const proto_log::AntiCheatBodyReliquaryUpgradeError *const this)
{
  return proto_log::AntiCheatBodyReliquaryUpgradeError::New(this, 0LL);
};

// Line 5487: range 00000000160D2F52-00000000160D2F99
int __cdecl proto_log::AntiCheatBodyReliquaryUpgradeError::GetCachedSize(
        const proto_log::AntiCheatBodyReliquaryUpgradeError *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 5567: range 00000000160D2F9A-00000000160D2FA6
const proto_log::AntiCheatBodyPacketCostTimeExceedLimit *__cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyPacketCostTimeExceedLimit *)&proto_log::_AntiCheatBodyPacketCostTimeExceedLimit_default_instance_;
};

// Line 5581: range 00000000160D2FA8-00000000160D2FC6
proto_log::AntiCheatBodyPacketCostTimeExceedLimit *__cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::New(
        const proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this)
{
  return proto_log::AntiCheatBodyPacketCostTimeExceedLimit::New(this, 0LL);
};

// Line 5598: range 00000000160D2FC8-00000000160D300F
int __cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::GetCachedSize(
        const proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 5665: range 00000000160D1ED8-00000000160D1EE4
const proto_log::SecurityChannelLog *__cdecl proto_log::SecurityChannelLog::internal_default_instance()
{
  return (const proto_log::SecurityChannelLog *)&proto_log::_SecurityChannelLog_default_instance_;
};

// Line 5700: range 00000000160D3010-00000000160D301C
const proto_log::PacketCountInfoLog *__cdecl proto_log::PacketCountInfoLog::internal_default_instance()
{
  return (const proto_log::PacketCountInfoLog *)&proto_log::_PacketCountInfoLog_default_instance_;
};

// Line 5714: range 00000000160D301E-00000000160D303C
proto_log::PacketCountInfoLog *__cdecl proto_log::PacketCountInfoLog::New(
        const proto_log::PacketCountInfoLog *const this)
{
  return proto_log::PacketCountInfoLog::New(this, 0LL);
};

// Line 5731: range 00000000160D303E-00000000160D3085
int __cdecl proto_log::PacketCountInfoLog::GetCachedSize(const proto_log::PacketCountInfoLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 5819: range 00000000160D3086-00000000160D3092
const proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *__cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *)&proto_log::_AntiCheatBodyRecvPacketFreqExceedLimit_default_instance_;
};

// Line 5833: range 00000000160D3094-00000000160D30B2
proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *__cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::New(
        const proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this)
{
  return proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::New(this, 0LL);
};

// Line 5850: range 00000000160D30B4-00000000160D30FB
int __cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::GetCachedSize(
        const proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 5950: range 00000000160D30FC-00000000160D3108
const proto_log::AntiCheatBodySinglePacketFreqExceedLimit *__cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::internal_default_instance()
{
  return (const proto_log::AntiCheatBodySinglePacketFreqExceedLimit *)&proto_log::_AntiCheatBodySinglePacketFreqExceedLimit_default_instance_;
};

// Line 5964: range 00000000160D310A-00000000160D3128
proto_log::AntiCheatBodySinglePacketFreqExceedLimit *__cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::New(
        const proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this)
{
  return proto_log::AntiCheatBodySinglePacketFreqExceedLimit::New(this, 0LL);
};

// Line 5981: range 00000000160D312A-00000000160D3171
int __cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::GetCachedSize(
        const proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 6083: range 00000000160D3172-00000000160D317E
const proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *__cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *)&proto_log::_AntiCheatBodyGadgetInteractBeyondCheckDistance_default_instance_;
};

// Line 6097: range 00000000160D3180-00000000160D319E
proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *__cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::New(
        const proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this)
{
  return proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::New(this, 0LL);
};

// Line 6114: range 00000000160D31A0-00000000160D31EF
int __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::GetCachedSize(
        const proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 6208: range 00000000160D31F0-00000000160D31FC
const proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *__cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *)&proto_log::_AntiCheatBodyLuaShellClientNotifyTimeout_default_instance_;
};

// Line 6222: range 00000000160D31FE-00000000160D321C
proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *__cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::New(
        const proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *const this)
{
  return proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::New(this, 0LL);
};

// Line 6239: range 00000000160D321E-00000000160D326D
int __cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::GetCachedSize(
        const proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 6334: range 00000000160D326E-00000000160D327A
const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *__cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *)&proto_log::_AntiCheatBodyPacketCostTimePercentExceedLimit_default_instance_;
};

// Line 6348: range 00000000160D327C-00000000160D329A
proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *__cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::New(
        const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this)
{
  return proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::New(this, 0LL);
};

// Line 6365: range 00000000160D329C-00000000160D32E3
int __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::GetCachedSize(
        const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 6480: range 00000000160D32E4-00000000160D32F0
const proto_log::AntiCheatBodySecurityLibraryMd5Error *__cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::internal_default_instance()
{
  return (const proto_log::AntiCheatBodySecurityLibraryMd5Error *)&proto_log::_AntiCheatBodySecurityLibraryMd5Error_default_instance_;
};

// Line 6494: range 00000000160D32F2-00000000160D3310
proto_log::AntiCheatBodySecurityLibraryMd5Error *__cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::New(
        const proto_log::AntiCheatBodySecurityLibraryMd5Error *const this)
{
  return proto_log::AntiCheatBodySecurityLibraryMd5Error::New(this, 0LL);
};

// Line 6511: range 00000000160D3312-00000000160D3359
int __cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::GetCachedSize(
        const proto_log::AntiCheatBodySecurityLibraryMd5Error *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 6644: range 00000000160D335A-00000000160D3366
const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *)&proto_log::_AntiCheatBodyAvatarAttackAvatarDamage_default_instance_;
};

// Line 6658: range 00000000160D3368-00000000160D3386
proto_log::AntiCheatBodyAvatarAttackAvatarDamage *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::New(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  return proto_log::AntiCheatBodyAvatarAttackAvatarDamage::New(this, 0LL);
};

// Line 6675: range 00000000160D3388-00000000160D33CF
int __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::GetCachedSize(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 6682: range 00000000160D33D0-00000000160D33DE
google::protobuf::Arena *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::GetArenaNoVirtual(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  return 0LL;
};

// Line 6842: range 00000000160D33DF-00000000160D33EB
const proto_log::AntiCheatBodyForbidLogin *__cdecl proto_log::AntiCheatBodyForbidLogin::internal_default_instance()
{
  return (const proto_log::AntiCheatBodyForbidLogin *)&proto_log::_AntiCheatBodyForbidLogin_default_instance_;
};

// Line 6856: range 00000000160D33EC-00000000160D340A
proto_log::AntiCheatBodyForbidLogin *__cdecl proto_log::AntiCheatBodyForbidLogin::New(
        const proto_log::AntiCheatBodyForbidLogin *const this)
{
  return proto_log::AntiCheatBodyForbidLogin::New(this, 0LL);
};

// Line 6873: range 00000000160D340C-00000000160D345B
int __cdecl proto_log::AntiCheatBodyForbidLogin::GetCachedSize(const proto_log::AntiCheatBodyForbidLogin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_cached_size_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_cached_size_);
  }
  return this->_cached_size_;
};

// Line 6924: range 00000000160D345C-00000000160D34A3
google::protobuf::uint32 __cdecl proto_log::SecurityChannelLog::uid(const proto_log::SecurityChannelLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  return this->uid_;
};

// Line 6928: range 00000000160D34A4-00000000160D34F2
void __cdecl proto_log::SecurityChannelLog::set_uid(
        proto_log::SecurityChannelLog *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = value;
};

// Line 6938: range 00000000160D34F4-00000000160D3543
google::protobuf::int32 __cdecl proto_log::SecurityChannelLog::ret(const proto_log::SecurityChannelLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ret_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ret_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ret_);
  }
  return this->ret_;
};

// Line 6942: range 00000000160D3544-00000000160D359A
void __cdecl proto_log::SecurityChannelLog::set_ret(
        proto_log::SecurityChannelLog *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ret_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ret_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ret_);
  }
  this->ret_ = value;
};

// Line 6952: range 00000000160D359C-00000000160D35D6
google::protobuf::uint64 __cdecl proto_log::SecurityChannelLog::expect_salt(
        const proto_log::SecurityChannelLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->expect_salt_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->expect_salt_);
  return this->expect_salt_;
};

// Line 6956: range 00000000160D35D8-00000000160D361B
void __cdecl proto_log::SecurityChannelLog::set_expect_salt(
        proto_log::SecurityChannelLog *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->expect_salt_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->expect_salt_ = value;
};

// Line 6966: range 00000000160D361C-00000000160D3656
google::protobuf::uint64 __cdecl proto_log::SecurityChannelLog::actual_salt(
        const proto_log::SecurityChannelLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->actual_salt_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->actual_salt_);
  return this->actual_salt_;
};

// Line 6970: range 00000000160D3658-00000000160D369B
void __cdecl proto_log::SecurityChannelLog::set_actual_salt(
        proto_log::SecurityChannelLog *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->actual_salt_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->actual_salt_ = value;
};

// Line 6980: range 00000000160D369C-00000000160D36B9
const std::string *__cdecl proto_log::SecurityChannelLog::trans_no[abi:cxx11](
        const proto_log::SecurityChannelLog *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->trans_no_);
};

// Line 7009: range 00000000160D36BA-00000000160D36E5
std::string *__cdecl proto_log::SecurityChannelLog::mutable_trans_no[abi:cxx11](
        proto_log::SecurityChannelLog *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->trans_no_, v1);
};

// Line 7033: range 00000000160D36E6-00000000160D3703
const std::string *__cdecl proto_log::SecurityChannelLog::report[abi:cxx11](
        const proto_log::SecurityChannelLog *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->report_);
};

// Line 7062: range 00000000160D3704-00000000160D372F
std::string *__cdecl proto_log::SecurityChannelLog::mutable_report[abi:cxx11](
        proto_log::SecurityChannelLog *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->report_, v1);
};

// Line 7090: range 00000000160D3730-00000000160D3777
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAIHash::monster_id(
        const proto_log::AntiCheatBodyAIHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->monster_id_);
  }
  return this->monster_id_;
};

// Line 7094: range 00000000160D3778-00000000160D37C6
void __cdecl proto_log::AntiCheatBodyAIHash::set_monster_id(
        proto_log::AntiCheatBodyAIHash *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id_);
  }
  this->monster_id_ = value;
};

// Line 7104: range 00000000160D37C8-00000000160D3817
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyAIHash::client_hash_value(
        const proto_log::AntiCheatBodyAIHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->client_hash_value_);
  }
  return this->client_hash_value_;
};

// Line 7108: range 00000000160D3818-00000000160D386E
void __cdecl proto_log::AntiCheatBodyAIHash::set_client_hash_value(
        proto_log::AntiCheatBodyAIHash *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_hash_value_);
  }
  this->client_hash_value_ = value;
};

// Line 7118: range 00000000160D3870-00000000160D38B7
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyAIHash::server_hash_value(
        const proto_log::AntiCheatBodyAIHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->server_hash_value_);
  }
  return this->server_hash_value_;
};

// Line 7122: range 00000000160D38B8-00000000160D3906
void __cdecl proto_log::AntiCheatBodyAIHash::set_server_hash_value(
        proto_log::AntiCheatBodyAIHash *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->server_hash_value_);
  }
  this->server_hash_value_ = value;
};

// Line 7136: range 00000000160D3908-00000000160D3925
const std::string *__cdecl proto_log::AntiCheatBodyMTP::report_type[abi:cxx11](
        const proto_log::AntiCheatBodyMTP *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->report_type_);
};

// Line 7165: range 00000000160D3926-00000000160D3951
std::string *__cdecl proto_log::AntiCheatBodyMTP::mutable_report_type[abi:cxx11](
        proto_log::AntiCheatBodyMTP *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->report_type_, v1);
};

// Line 7189: range 00000000160D3952-00000000160D3999
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMTP::report_value(
        const proto_log::AntiCheatBodyMTP *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->report_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->report_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->report_value_);
  }
  return this->report_value_;
};

// Line 7193: range 00000000160D399A-00000000160D39E8
void __cdecl proto_log::AntiCheatBodyMTP::set_report_value(
        proto_log::AntiCheatBodyMTP *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->report_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->report_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->report_value_);
  }
  this->report_value_ = value;
};

// Line 7207: range 00000000160D39EA-00000000160D3A07
const std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::system_version[abi:cxx11](
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->system_version_);
};

// Line 7236: range 00000000160D3A08-00000000160D3A33
std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::mutable_system_version[abi:cxx11](
        proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->system_version_, v1);
};

// Line 7260: range 00000000160D3A34-00000000160D3A51
const std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::device_uuid[abi:cxx11](
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->device_uuid_);
};

// Line 7289: range 00000000160D3A52-00000000160D3A7D
std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::mutable_device_uuid[abi:cxx11](
        proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->device_uuid_, v1);
};

// Line 7313: range 00000000160D3A7E-00000000160D3A9B
const std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::cloud_client_ip[abi:cxx11](
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->cloud_client_ip_);
};

// Line 7342: range 00000000160D3A9C-00000000160D3AC7
std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::mutable_cloud_client_ip[abi:cxx11](
        proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->cloud_client_ip_, v1);
};

// Line 7366: range 00000000160D3AC8-00000000160D3AE5
const std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::platform[abi:cxx11](
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->platform_);
};

// Line 7395: range 00000000160D3AE6-00000000160D3B11
std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::mutable_platform[abi:cxx11](
        proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->platform_, v1);
};

// Line 7419: range 00000000160D3B12-00000000160D3B59
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyChecksumInvalid::account_type(
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->account_type_);
  }
  return this->account_type_;
};

// Line 7423: range 00000000160D3B5A-00000000160D3BA8
void __cdecl proto_log::AntiCheatBodyChecksumInvalid::set_account_type(
        proto_log::AntiCheatBodyChecksumInvalid *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->account_type_);
  }
  this->account_type_ = value;
};

// Line 7433: range 00000000160D3BAA-00000000160D3BC7
const std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::client_version[abi:cxx11](
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->client_version_);
};

// Line 7462: range 00000000160D3BC8-00000000160D3BF3
std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::mutable_client_version[abi:cxx11](
        proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->client_version_, v1);
};

// Line 7486: range 00000000160D3BF4-00000000160D3C11
const std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::device_name[abi:cxx11](
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->device_name_);
};

// Line 7515: range 00000000160D3C12-00000000160D3C3D
std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::mutable_device_name[abi:cxx11](
        proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->device_name_, v1);
};

// Line 7539: range 00000000160D3C3E-00000000160D3C5B
const std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::checksum[abi:cxx11](
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->checksum_);
};

// Line 7568: range 00000000160D3C5C-00000000160D3C87
std::string *__cdecl proto_log::AntiCheatBodyChecksumInvalid::mutable_checksum[abi:cxx11](
        proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->checksum_, v1);
};

// Line 7592: range 00000000160D3C88-00000000160D3CD7
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyChecksumInvalid::channel_id(
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->channel_id_);
  }
  return this->channel_id_;
};

// Line 7596: range 00000000160D3CD8-00000000160D3D2E
void __cdecl proto_log::AntiCheatBodyChecksumInvalid::set_channel_id(
        proto_log::AntiCheatBodyChecksumInvalid *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->channel_id_);
  }
  this->channel_id_ = value;
};

// Line 7606: range 00000000160D3D30-00000000160D3D77
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyChecksumInvalid::sub_channel_id(
        const proto_log::AntiCheatBodyChecksumInvalid *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sub_channel_id_);
  }
  return this->sub_channel_id_;
};

// Line 7610: range 00000000160D3D78-00000000160D3DC6
void __cdecl proto_log::AntiCheatBodyChecksumInvalid::set_sub_channel_id(
        proto_log::AntiCheatBodyChecksumInvalid *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_channel_id_);
  }
  this->sub_channel_id_ = value;
};

// Line 7624: range 00000000160D3DC8-00000000160D3E0F
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySkillCdWrong::avatar_id(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 7628: range 00000000160D3E10-00000000160D3E5E
void __cdecl proto_log::AntiCheatBodySkillCdWrong::set_avatar_id(
        proto_log::AntiCheatBodySkillCdWrong *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = value;
};

// Line 7638: range 00000000160D3E60-00000000160D3EAF
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySkillCdWrong::skill_id(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_id_);
  }
  return this->skill_id_;
};

// Line 7642: range 00000000160D3EB0-00000000160D3F06
void __cdecl proto_log::AntiCheatBodySkillCdWrong::set_skill_id(
        proto_log::AntiCheatBodySkillCdWrong *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id_);
  }
  this->skill_id_ = value;
};

// Line 7652: range 00000000160D3F08-00000000160D3F51
float __cdecl proto_log::AntiCheatBodySkillCdWrong::skill_cd(const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_cd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_cd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->skill_cd_);
  }
  return this->skill_cd_;
};

// Line 7656: range 00000000160D3F52-00000000160D3FA6
void __cdecl proto_log::AntiCheatBodySkillCdWrong::set_skill_cd(
        proto_log::AntiCheatBodySkillCdWrong *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_cd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_cd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_cd_);
  }
  this->skill_cd_ = value;
};

// Line 7666: range 00000000160D3FA8-00000000160D3FF9
float __cdecl proto_log::AntiCheatBodySkillCdWrong::skill_pass_time(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_pass_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_pass_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_pass_time_);
  }
  return this->skill_pass_time_;
};

// Line 7670: range 00000000160D3FFA-00000000160D4056
void __cdecl proto_log::AntiCheatBodySkillCdWrong::set_skill_pass_time(
        proto_log::AntiCheatBodySkillCdWrong *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_pass_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_pass_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_pass_time_);
  }
  this->skill_pass_time_ = value;
};

// Line 7680: range 00000000160D4058-00000000160D409F
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySkillCdWrong::max_charge_count(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_charge_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_charge_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_charge_count_);
  }
  return this->max_charge_count_;
};

// Line 7684: range 00000000160D40A0-00000000160D40EE
void __cdecl proto_log::AntiCheatBodySkillCdWrong::set_max_charge_count(
        proto_log::AntiCheatBodySkillCdWrong *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_charge_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_charge_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_charge_count_);
  }
  this->max_charge_count_ = value;
};

// Line 7694: range 00000000160D40F0-00000000160D413F
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySkillCdWrong::cd_list_len(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_list_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_list_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cd_list_len_);
  }
  return this->cd_list_len_;
};

// Line 7698: range 00000000160D4140-00000000160D4196
void __cdecl proto_log::AntiCheatBodySkillCdWrong::set_cd_list_len(
        proto_log::AntiCheatBodySkillCdWrong *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cd_list_len_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cd_list_len_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cd_list_len_);
  }
  this->cd_list_len_ = value;
};

// Line 7708: range 00000000160D4198-00000000160D41B5
const std::string *__cdecl proto_log::AntiCheatBodySkillCdWrong::ability_name[abi:cxx11](
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->ability_name_);
};

// Line 7737: range 00000000160D41B6-00000000160D41E1
std::string *__cdecl proto_log::AntiCheatBodySkillCdWrong::mutable_ability_name[abi:cxx11](
        proto_log::AntiCheatBodySkillCdWrong *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->ability_name_, v1);
};

// Line 7761: range 00000000160D41E2-00000000160D41FF
const std::string *__cdecl proto_log::AntiCheatBodySkillCdWrong::modifier_name[abi:cxx11](
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->modifier_name_);
};

// Line 7790: range 00000000160D4200-00000000160D422B
std::string *__cdecl proto_log::AntiCheatBodySkillCdWrong::mutable_modifier_name[abi:cxx11](
        proto_log::AntiCheatBodySkillCdWrong *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->modifier_name_, v1);
};

// Line 7811: range 00000000160D422C-00000000160D4282
bool __cdecl proto_log::AntiCheatBodySkillCdWrong::has_source_entity(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( this == proto_log::AntiCheatBodySkillCdWrong::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  return this->source_entity_ != 0;
};

// Line 7818: range 00000000160D4284-00000000160D42D6
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodySkillCdWrong::source_entity(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  if ( this->source_entity_ )
    return this->source_entity_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 7824: range 00000000160D42D8-00000000160D43B2
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodySkillCdWrong::mutable_source_entity(
        proto_log::AntiCheatBodySkillCdWrong *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  if ( !this->source_entity_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->source_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  return this->source_entity_;
};

// Line 7851: range 00000000160D43B4-00000000160D440A
bool __cdecl proto_log::AntiCheatBodySkillCdWrong::has_target_entity(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( this == proto_log::AntiCheatBodySkillCdWrong::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  return this->target_entity_ != 0;
};

// Line 7858: range 00000000160D440C-00000000160D445E
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodySkillCdWrong::target_entity(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  if ( this->target_entity_ )
    return this->target_entity_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 7864: range 00000000160D4460-00000000160D453A
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodySkillCdWrong::mutable_target_entity(
        proto_log::AntiCheatBodySkillCdWrong *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  if ( !this->target_entity_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->target_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  return this->target_entity_;
};

// Line 7894: range 00000000160D453C-00000000160D4583
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySkillCdWrong::from_player_uid(
        const proto_log::AntiCheatBodySkillCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->from_player_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->from_player_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->from_player_uid_);
  }
  return this->from_player_uid_;
};

// Line 7898: range 00000000160D4584-00000000160D45D2
void __cdecl proto_log::AntiCheatBodySkillCdWrong::set_from_player_uid(
        proto_log::AntiCheatBodySkillCdWrong *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->from_player_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->from_player_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->from_player_uid_);
  }
  this->from_player_uid_ = value;
};

// Line 7912: range 00000000160D45D4-00000000160D461B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::avatar_id(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 7916: range 00000000160D461C-00000000160D466A
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_avatar_id(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = value;
};

// Line 7926: range 00000000160D466C-00000000160D46BB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::move_type(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->move_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->move_type_);
  }
  return this->move_type_;
};

// Line 7930: range 00000000160D46BC-00000000160D4712
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_move_type(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->move_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_type_);
  }
  this->move_type_ = value;
};

// Line 7940: range 00000000160D4714-00000000160D475D
float __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::move_speed(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_speed_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->move_speed_);
  }
  return this->move_speed_;
};

// Line 7944: range 00000000160D475E-00000000160D47B2
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_move_speed(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_speed_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->move_speed_);
  }
  this->move_speed_ = value;
};

// Line 7954: range 00000000160D47B4-00000000160D4805
float __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::move_speed_limit(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_speed_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->move_speed_limit_);
  }
  return this->move_speed_limit_;
};

// Line 7958: range 00000000160D4806-00000000160D4862
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_move_speed_limit(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_speed_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_speed_limit_);
  }
  this->move_speed_limit_ = value;
};

// Line 7968: range 00000000160D4864-00000000160D48AD
float __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::pre_x(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_x_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_x_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pre_x_);
  }
  return this->pre_x_;
};

// Line 7972: range 00000000160D48AE-00000000160D4902
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_pre_x(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_x_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_x_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_x_);
  }
  this->pre_x_ = value;
};

// Line 7982: range 00000000160D4904-00000000160D4955
float __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::pre_y(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_y_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_y_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->pre_y_);
  }
  return this->pre_y_;
};

// Line 7986: range 00000000160D4956-00000000160D49B2
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_pre_y(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_y_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_y_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pre_y_);
  }
  this->pre_y_ = value;
};

// Line 7996: range 00000000160D49B4-00000000160D49FD
float __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::pre_z(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_z_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_z_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pre_z_);
  }
  return this->pre_z_;
};

// Line 8000: range 00000000160D49FE-00000000160D4A52
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_pre_z(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_z_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_z_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_z_);
  }
  this->pre_z_ = value;
};

// Line 8010: range 00000000160D4A54-00000000160D4AA5
float __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::cur_x(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_x_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_x_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_x_);
  }
  return this->cur_x_;
};

// Line 8014: range 00000000160D4AA6-00000000160D4B02
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_cur_x(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_x_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_x_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_x_);
  }
  this->cur_x_ = value;
};

// Line 8024: range 00000000160D4B04-00000000160D4B4D
float __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::cur_y(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_y_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_y_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_y_);
  }
  return this->cur_y_;
};

// Line 8028: range 00000000160D4B4E-00000000160D4BA2
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_cur_y(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_y_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_y_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_y_);
  }
  this->cur_y_ = value;
};

// Line 8038: range 00000000160D4BA4-00000000160D4BF5
float __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::cur_z(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_z_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_z_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_z_);
  }
  return this->cur_z_;
};

// Line 8042: range 00000000160D4BF6-00000000160D4C52
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_cur_z(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_z_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_z_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_z_);
  }
  this->cur_z_ = value;
};

// Line 8052: range 00000000160D4C54-00000000160D4C9B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::is_only_record_move_count(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_only_record_move_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_only_record_move_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->is_only_record_move_count_);
  }
  return this->is_only_record_move_count_;
};

// Line 8056: range 00000000160D4C9C-00000000160D4CEA
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_is_only_record_move_count(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_only_record_move_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_only_record_move_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_only_record_move_count_);
  }
  this->is_only_record_move_count_ = value;
};

// Line 8066: range 00000000160D4CEC-00000000160D4D3B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::last_refresh_force_move_time(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_force_move_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_force_move_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_refresh_force_move_time_);
  }
  return this->last_refresh_force_move_time_;
};

// Line 8070: range 00000000160D4D3C-00000000160D4D92
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_last_refresh_force_move_time(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_force_move_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_force_move_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_refresh_force_move_time_);
  }
  this->last_refresh_force_move_time_ = value;
};

// Line 8080: range 00000000160D4D94-00000000160D4DDB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::force_drag_move_count(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->force_drag_move_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_drag_move_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->force_drag_move_count_);
  }
  return this->force_drag_move_count_;
};

// Line 8084: range 00000000160D4DDC-00000000160D4E2A
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_force_drag_move_count(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->force_drag_move_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_drag_move_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->force_drag_move_count_);
  }
  this->force_drag_move_count_ = value;
};

// Line 8094: range 00000000160D4E2C-00000000160D4E7B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::total_move_count(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_move_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_move_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_move_count_);
  }
  return this->total_move_count_;
};

// Line 8098: range 00000000160D4E7C-00000000160D4ED2
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_total_move_count(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_move_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_move_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->total_move_count_);
  }
  this->total_move_count_ = value;
};

// Line 8108: range 00000000160D4ED4-00000000160D4F1B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::is_kicked_out(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kicked_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_kicked_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->is_kicked_out_);
  }
  return this->is_kicked_out_;
};

// Line 8112: range 00000000160D4F1C-00000000160D4F6A
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_is_kicked_out(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kicked_out_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_kicked_out_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_kicked_out_);
  }
  this->is_kicked_out_ = value;
};

// Line 8122: range 00000000160D4F6C-00000000160D4FBB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::is_draged_back(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_draged_back_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_draged_back_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->is_draged_back_);
  }
  return this->is_draged_back_;
};

// Line 8126: range 00000000160D4FBC-00000000160D5012
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_is_draged_back(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_draged_back_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_draged_back_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->is_draged_back_);
  }
  this->is_draged_back_ = value;
};

// Line 8136: range 00000000160D5014-00000000160D505B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::motion_state(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  return this->motion_state_;
};

// Line 8140: range 00000000160D505C-00000000160D50AA
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_motion_state(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->motion_state_);
  }
  this->motion_state_ = value;
};

// Line 8150: range 00000000160D50AC-00000000160D50FB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::record_time(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->record_time_);
  }
  return this->record_time_;
};

// Line 8154: range 00000000160D50FC-00000000160D5152
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_record_time(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->record_time_);
  }
  this->record_time_ = value;
};

// Line 8164: range 00000000160D5154-00000000160D519B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::record_count(
        const proto_log::AntiCheatBodyMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->record_count_);
  }
  return this->record_count_;
};

// Line 8168: range 00000000160D519C-00000000160D51EA
void __cdecl proto_log::AntiCheatBodyMoveSpeedOverLimit::set_record_count(
        proto_log::AntiCheatBodyMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_count_);
  }
  this->record_count_ = value;
};

// Line 8182: range 00000000160D51EC-00000000160D5233
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::avatar_id(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 8186: range 00000000160D5234-00000000160D5282
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_avatar_id(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = value;
};

// Line 8196: range 00000000160D5284-00000000160D52D5
float __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::move_speed(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_speed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->move_speed_);
  }
  return this->move_speed_;
};

// Line 8200: range 00000000160D52D6-00000000160D5332
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_move_speed(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_speed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_speed_);
  }
  this->move_speed_ = value;
};

// Line 8210: range 00000000160D5334-00000000160D537D
float __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::move_speed_limit(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_speed_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->move_speed_limit_);
  }
  return this->move_speed_limit_;
};

// Line 8214: range 00000000160D537E-00000000160D53D2
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_move_speed_limit(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_speed_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->move_speed_limit_);
  }
  this->move_speed_limit_ = value;
};

// Line 8224: range 00000000160D53D4-00000000160D5425
float __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::pre_x(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_x_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_x_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->pre_x_);
  }
  return this->pre_x_;
};

// Line 8228: range 00000000160D5426-00000000160D5482
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_pre_x(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_x_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_x_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pre_x_);
  }
  this->pre_x_ = value;
};

// Line 8238: range 00000000160D5484-00000000160D54CD
float __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::pre_y(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_y_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_y_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->pre_y_);
  }
  return this->pre_y_;
};

// Line 8242: range 00000000160D54CE-00000000160D5522
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_pre_y(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_y_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pre_y_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pre_y_);
  }
  this->pre_y_ = value;
};

// Line 8252: range 00000000160D5524-00000000160D5575
float __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::pre_z(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_z_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_z_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->pre_z_);
  }
  return this->pre_z_;
};

// Line 8256: range 00000000160D5576-00000000160D55D2
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_pre_z(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_z_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_z_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pre_z_);
  }
  this->pre_z_ = value;
};

// Line 8266: range 00000000160D55D4-00000000160D561D
float __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::cur_x(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_x_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_x_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_x_);
  }
  return this->cur_x_;
};

// Line 8270: range 00000000160D561E-00000000160D5672
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_cur_x(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_x_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_x_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_x_);
  }
  this->cur_x_ = value;
};

// Line 8280: range 00000000160D5674-00000000160D56C5
float __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::cur_y(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_y_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_y_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_y_);
  }
  return this->cur_y_;
};

// Line 8284: range 00000000160D56C6-00000000160D5722
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_cur_y(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_y_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_y_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_y_);
  }
  this->cur_y_ = value;
};

// Line 8294: range 00000000160D5724-00000000160D576D
float __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::cur_z(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_z_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_z_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_z_);
  }
  return this->cur_z_;
};

// Line 8298: range 00000000160D576E-00000000160D57C2
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_cur_z(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_z_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_z_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_z_);
  }
  this->cur_z_ = value;
};

// Line 8308: range 00000000160D57C4-00000000160D5813
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::is_kicked_out(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kicked_out_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_kicked_out_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->is_kicked_out_);
  }
  return this->is_kicked_out_;
};

// Line 8312: range 00000000160D5814-00000000160D586A
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_is_kicked_out(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kicked_out_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_kicked_out_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->is_kicked_out_);
  }
  this->is_kicked_out_ = value;
};

// Line 8322: range 00000000160D586C-00000000160D58B3
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::is_draged_back(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_draged_back_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_draged_back_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->is_draged_back_);
  }
  return this->is_draged_back_;
};

// Line 8326: range 00000000160D58B4-00000000160D5902
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_is_draged_back(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_draged_back_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->is_draged_back_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->is_draged_back_);
  }
  this->is_draged_back_ = value;
};

// Line 8336: range 00000000160D5904-00000000160D5953
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::motion_state(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->motion_state_);
  }
  return this->motion_state_;
};

// Line 8340: range 00000000160D5954-00000000160D59AA
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_motion_state(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->motion_state_);
  }
  this->motion_state_ = value;
};

// Line 8350: range 00000000160D59AC-00000000160D59F3
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::record_scene_time(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->record_scene_time_);
  }
  return this->record_scene_time_;
};

// Line 8354: range 00000000160D59F4-00000000160D5A42
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_record_scene_time(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_scene_time_);
  }
  this->record_scene_time_ = value;
};

// Line 8364: range 00000000160D5A44-00000000160D5A93
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::record_time(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->record_time_);
  }
  return this->record_time_;
};

// Line 8368: range 00000000160D5A94-00000000160D5AEA
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_record_time(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->record_time_);
  }
  this->record_time_ = value;
};

// Line 8378: range 00000000160D5AEC-00000000160D5B33
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::record_count(
        const proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->record_count_);
  }
  return this->record_count_;
};

// Line 8382: range 00000000160D5B34-00000000160D5B82
void __cdecl proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit::set_record_count(
        proto_log::AntiCheatBodySceneTimeMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_count_);
  }
  this->record_count_ = value;
};

// Line 8396: range 00000000160D5B84-00000000160D5BCB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::result_type(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->result_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->result_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->result_type_);
  }
  return this->result_type_;
};

// Line 8400: range 00000000160D5BCC-00000000160D5C1A
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_result_type(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->result_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->result_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->result_type_);
  }
  this->result_type_ = value;
};

// Line 8410: range 00000000160D5C1C-00000000160D5C6B
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::check_result(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_result_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_result_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->check_result_);
  }
  return this->check_result_;
};

// Line 8414: range 00000000160D5C6C-00000000160D5CC2
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_check_result(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_result_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_result_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_result_);
  }
  this->check_result_ = value;
};

// Line 8424: range 00000000160D5CC4-00000000160D5D0B
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::verify_result(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->verify_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->verify_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->verify_result_);
  }
  return this->verify_result_;
};

// Line 8428: range 00000000160D5D0C-00000000160D5D5A
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_verify_result(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->verify_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->verify_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->verify_result_);
  }
  this->verify_result_ = value;
};

// Line 8438: range 00000000160D5D5C-00000000160D5DAB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::old_security_level(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->old_security_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->old_security_level_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->old_security_level_);
  }
  return this->old_security_level_;
};

// Line 8442: range 00000000160D5DAC-00000000160D5E02
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_old_security_level(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->old_security_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->old_security_level_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->old_security_level_);
  }
  this->old_security_level_ = value;
};

// Line 8452: range 00000000160D5E04-00000000160D5E4B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::cur_security_level(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_security_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_security_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_security_level_);
  }
  return this->cur_security_level_;
};

// Line 8456: range 00000000160D5E4C-00000000160D5E9A
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_cur_security_level(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_security_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_security_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_security_level_);
  }
  this->cur_security_level_ = value;
};

// Line 8466: range 00000000160D5E9C-00000000160D5EEB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::succ_num(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->succ_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->succ_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->succ_num_);
  }
  return this->succ_num_;
};

// Line 8470: range 00000000160D5EEC-00000000160D5F42
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_succ_num(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->succ_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->succ_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->succ_num_);
  }
  this->succ_num_ = value;
};

// Line 8480: range 00000000160D5F44-00000000160D5F8E
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::empty_num(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->empty_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->empty_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->empty_num_);
  }
  return this->empty_num_;
};

// Line 8484: range 00000000160D5F90-00000000160D5FE1
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_empty_num(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->empty_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->empty_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->empty_num_);
  }
  this->empty_num_ = value;
};

// Line 8494: range 00000000160D5FE2-00000000160D6036
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::decrypt_fail_num(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->decrypt_fail_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->decrypt_fail_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->decrypt_fail_num_);
  }
  return this->decrypt_fail_num_;
};

// Line 8498: range 00000000160D6038-00000000160D6093
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_decrypt_fail_num(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->decrypt_fail_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->decrypt_fail_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->decrypt_fail_num_);
  }
  this->decrypt_fail_num_ = value;
};

// Line 8508: range 00000000160D6094-00000000160D60E0
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::verify_fail_num(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->verify_fail_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->verify_fail_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->verify_fail_num_);
  }
  return this->verify_fail_num_;
};

// Line 8512: range 00000000160D60E2-00000000160D6135
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_verify_fail_num(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->verify_fail_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->verify_fail_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->verify_fail_num_);
  }
  this->verify_fail_num_ = value;
};

// Line 8522: range 00000000160D6136-00000000160D618A
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::cur_succ_num(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_succ_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_succ_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_succ_num_);
  }
  return this->cur_succ_num_;
};

// Line 8526: range 00000000160D618C-00000000160D61E7
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_cur_succ_num(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_succ_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_succ_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_succ_num_);
  }
  this->cur_succ_num_ = value;
};

// Line 8536: range 00000000160D61E8-00000000160D6234
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::cur_fail_num(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_fail_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_fail_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_fail_num_);
  }
  return this->cur_fail_num_;
};

// Line 8540: range 00000000160D6236-00000000160D6289
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_cur_fail_num(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_fail_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_fail_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_fail_num_);
  }
  this->cur_fail_num_ = value;
};

// Line 8550: range 00000000160D628A-00000000160D62DE
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::account_type(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->account_type_);
  }
  return this->account_type_;
};

// Line 8554: range 00000000160D62E0-00000000160D633B
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_account_type(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->account_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->account_type_);
  }
  this->account_type_ = value;
};

// Line 8564: range 00000000160D633C-00000000160D6359
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::account_uid[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->account_uid_);
};

// Line 8593: range 00000000160D635A-00000000160D6385
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_account_uid[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->account_uid_, v1);
};

// Line 8617: range 00000000160D6386-00000000160D63D2
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::platform_type(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->platform_type_);
  }
  return this->platform_type_;
};

// Line 8621: range 00000000160D63D4-00000000160D6427
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_platform_type(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->platform_type_);
  }
  this->platform_type_ = value;
};

// Line 8631: range 00000000160D6428-00000000160D6445
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::client_version[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->client_version_);
};

// Line 8660: range 00000000160D6446-00000000160D6471
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_client_version[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->client_version_, v1);
};

// Line 8684: range 00000000160D6472-00000000160D648F
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::system_version[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->system_version_);
};

// Line 8713: range 00000000160D6490-00000000160D64BB
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_system_version[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->system_version_, v1);
};

// Line 8737: range 00000000160D64BC-00000000160D64D9
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::device_name[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->device_name_);
};

// Line 8766: range 00000000160D64DA-00000000160D6505
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_device_name[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->device_name_, v1);
};

// Line 8790: range 00000000160D6506-00000000160D6523
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::device_uuid[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->device_uuid_);
};

// Line 8819: range 00000000160D6524-00000000160D654F
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_device_uuid[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->device_uuid_, v1);
};

// Line 8843: range 00000000160D6550-00000000160D65A4
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::is_editor(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->is_editor_);
  }
  return this->is_editor_;
};

// Line 8847: range 00000000160D65A6-00000000160D6601
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_is_editor(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_editor_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->is_editor_);
  }
  this->is_editor_ = value;
};

// Line 8857: range 00000000160D6602-00000000160D664E
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::language_type(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->language_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->language_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->language_type_);
  }
  return this->language_type_;
};

// Line 8861: range 00000000160D6650-00000000160D66A3
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_language_type(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->language_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->language_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->language_type_);
  }
  this->language_type_ = value;
};

// Line 8871: range 00000000160D66A4-00000000160D66C1
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::platform[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->platform_);
};

// Line 8900: range 00000000160D66C2-00000000160D66ED
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_platform[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->platform_, v1);
};

// Line 8924: range 00000000160D66EE-00000000160D670B
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::device_info[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->device_info_);
};

// Line 8953: range 00000000160D670C-00000000160D6737
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_device_info[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->device_info_, v1);
};

// Line 8977: range 00000000160D6738-00000000160D678C
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::is_guest(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guest_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_guest_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->is_guest_);
  }
  return this->is_guest_;
};

// Line 8981: range 00000000160D678E-00000000160D67E9
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_is_guest(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guest_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_guest_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->is_guest_);
  }
  this->is_guest_ = value;
};

// Line 8991: range 00000000160D67EA-00000000160D6836
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::cloud_client_ip(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cloud_client_ip_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cloud_client_ip_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cloud_client_ip_);
  }
  return this->cloud_client_ip_;
};

// Line 8995: range 00000000160D6838-00000000160D688B
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_cloud_client_ip(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cloud_client_ip_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cloud_client_ip_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cloud_client_ip_);
  }
  this->cloud_client_ip_ = value;
};

// Line 9005: range 00000000160D688C-00000000160D68A9
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::online_id[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->online_id_);
};

// Line 9034: range 00000000160D68AA-00000000160D68D5
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_online_id[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->online_id_, v1);
};

// Line 9058: range 00000000160D68D6-00000000160D68F3
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::player_login_req_str[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->player_login_req_str_);
};

// Line 9087: range 00000000160D68F4-00000000160D691F
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_player_login_req_str[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->player_login_req_str_, v1);
};

// Line 9111: range 00000000160D6920-00000000160D693D
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::get_player_token_rsp_str[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->get_player_token_rsp_str_);
};

// Line 9140: range 00000000160D693E-00000000160D6969
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_get_player_token_rsp_str[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->get_player_token_rsp_str_, v1);
};

// Line 9164: range 00000000160D696A-00000000160D69BE
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAntiOfflineResult::is_in_whitelist(
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_whitelist_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_in_whitelist_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->is_in_whitelist_);
  }
  return this->is_in_whitelist_;
};

// Line 9168: range 00000000160D69C0-00000000160D6A1B
void __cdecl proto_log::AntiCheatBodyAntiOfflineResult::set_is_in_whitelist(
        proto_log::AntiCheatBodyAntiOfflineResult *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_whitelist_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->is_in_whitelist_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->is_in_whitelist_);
  }
  this->is_in_whitelist_ = value;
};

// Line 9178: range 00000000160D6A1C-00000000160D6A39
const std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::psn_id[abi:cxx11](
        const proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->psn_id_);
};

// Line 9207: range 00000000160D6A3A-00000000160D6A65
std::string *__cdecl proto_log::AntiCheatBodyAntiOfflineResult::mutable_psn_id[abi:cxx11](
        proto_log::AntiCheatBodyAntiOfflineResult *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->psn_id_, v1);
};

// Line 9235: range 00000000160D6A66-00000000160D6AAD
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::scene_id(
        const proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scene_id_);
  }
  return this->scene_id_;
};

// Line 9239: range 00000000160D6AAE-00000000160D6AFC
void __cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::set_scene_id(
        proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id_);
  }
  this->scene_id_ = value;
};

// Line 9246: range 00000000160D6AFE-00000000160D6B54
bool __cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::has_monster_log(
        const proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this)
{
  if ( this == proto_log::AntiCheatBodyEliteMonsterAbnormalDie::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->monster_log_);
  return this->monster_log_ != 0;
};

// Line 9253: range 00000000160D6B56-00000000160D6BA8
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::monster_log(
        const proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->monster_log_);
  if ( this->monster_log_ )
    return this->monster_log_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 9259: range 00000000160D6BAA-00000000160D6C84
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::mutable_monster_log(
        proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->monster_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->monster_log_);
  if ( !this->monster_log_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_log_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->monster_log_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->monster_log_);
  return this->monster_log_;
};

// Line 9289: range 00000000160D6C86-00000000160D6CD5
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::reason(
        const proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reason_);
  }
  return this->reason_;
};

// Line 9293: range 00000000160D6CD6-00000000160D6D2C
void __cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::set_reason(
        proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reason_);
  }
  this->reason_ = value;
};

// Line 9303: range 00000000160D6D2E-00000000160D6D4B
const std::string *__cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::combat_transaction[abi:cxx11](
        const proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->combat_transaction_);
};

// Line 9332: range 00000000160D6D4C-00000000160D6D77
std::string *__cdecl proto_log::AntiCheatBodyEliteMonsterAbnormalDie::mutable_combat_transaction[abi:cxx11](
        proto_log::AntiCheatBodyEliteMonsterAbnormalDie *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->combat_transaction_, v1);
};

// Line 9360: range 00000000160D6D78-00000000160D6DBF
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAbilityHash::entity_type(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entity_type_);
  }
  return this->entity_type_;
};

// Line 9364: range 00000000160D6DC0-00000000160D6E0E
void __cdecl proto_log::AntiCheatBodyAbilityHash::set_entity_type(
        proto_log::AntiCheatBodyAbilityHash *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_type_);
  }
  this->entity_type_ = value;
};

// Line 9374: range 00000000160D6E10-00000000160D6E5F
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAbilityHash::id(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->id_);
  }
  return this->id_;
};

// Line 9378: range 00000000160D6E60-00000000160D6EB6
void __cdecl proto_log::AntiCheatBodyAbilityHash::set_id(
        proto_log::AntiCheatBodyAbilityHash *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->id_);
  }
  this->id_ = value;
};

// Line 9388: range 00000000160D6EB8-00000000160D6EFF
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAbilityHash::group_id(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->group_id_);
  }
  return this->group_id_;
};

// Line 9392: range 00000000160D6F00-00000000160D6F4E
void __cdecl proto_log::AntiCheatBodyAbilityHash::set_group_id(
        proto_log::AntiCheatBodyAbilityHash *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_);
  }
  this->group_id_ = value;
};

// Line 9402: range 00000000160D6F50-00000000160D6F9F
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAbilityHash::config_id(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_id_);
  }
  return this->config_id_;
};

// Line 9406: range 00000000160D6FA0-00000000160D6FF6
void __cdecl proto_log::AntiCheatBodyAbilityHash::set_config_id(
        proto_log::AntiCheatBodyAbilityHash *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id_);
  }
  this->config_id_ = value;
};

// Line 9416: range 00000000160D6FF8-00000000160D703F
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyAbilityHash::client_hash_value(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->client_hash_value_);
  }
  return this->client_hash_value_;
};

// Line 9420: range 00000000160D7040-00000000160D708E
void __cdecl proto_log::AntiCheatBodyAbilityHash::set_client_hash_value(
        proto_log::AntiCheatBodyAbilityHash *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_hash_value_);
  }
  this->client_hash_value_ = value;
};

// Line 9430: range 00000000160D7090-00000000160D70DF
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyAbilityHash::server_hash_value(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->server_hash_value_);
  }
  return this->server_hash_value_;
};

// Line 9434: range 00000000160D70E0-00000000160D7136
void __cdecl proto_log::AntiCheatBodyAbilityHash::set_server_hash_value(
        proto_log::AntiCheatBodyAbilityHash *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->server_hash_value_);
  }
  this->server_hash_value_ = value;
};

// Line 9441: range 00000000160D7138-00000000160D7155
int __cdecl proto_log::AntiCheatBodyAbilityHash::ability_name_list_size(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  return google::protobuf::RepeatedPtrField<std::string>::size(&this->ability_name_list_);
};

// Line 9447: range 00000000160D7156-00000000160D717B
const std::string *__cdecl proto_log::AntiCheatBodyAbilityHash::ability_name_list[abi:cxx11](
        const proto_log::AntiCheatBodyAbilityHash *const this,
        int index)
{
  return google::protobuf::RepeatedPtrField<std::string>::Get(&this->ability_name_list_, index);
};

// Line 9475: range 00000000160D717C-00000000160D7199
std::string *__cdecl proto_log::AntiCheatBodyAbilityHash::add_ability_name_list[abi:cxx11](
        proto_log::AntiCheatBodyAbilityHash *const this)
{
  return google::protobuf::RepeatedPtrField<std::string>::Add(&this->ability_name_list_);
};

// Line 9513: range 00000000160D719A-00000000160D71E1
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyAbilityHash::prev_server_hash_value(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->prev_server_hash_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prev_server_hash_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->prev_server_hash_value_);
  }
  return this->prev_server_hash_value_;
};

// Line 9517: range 00000000160D71E2-00000000160D7230
void __cdecl proto_log::AntiCheatBodyAbilityHash::set_prev_server_hash_value(
        proto_log::AntiCheatBodyAbilityHash *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->prev_server_hash_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->prev_server_hash_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->prev_server_hash_value_);
  }
  this->prev_server_hash_value_ = value;
};

// Line 9527: range 00000000160D7232-00000000160D7281
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAbilityHash::entity_id(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entity_id_);
  }
  return this->entity_id_;
};

// Line 9531: range 00000000160D7282-00000000160D72D8
void __cdecl proto_log::AntiCheatBodyAbilityHash::set_entity_id(
        proto_log::AntiCheatBodyAbilityHash *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_id_);
  }
  this->entity_id_ = value;
};

// Line 9541: range 00000000160D72DA-00000000160D7321
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAbilityHash::job_id(
        const proto_log::AntiCheatBodyAbilityHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->job_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->job_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->job_id_);
  }
  return this->job_id_;
};

// Line 9545: range 00000000160D7322-00000000160D7370
void __cdecl proto_log::AntiCheatBodyAbilityHash::set_job_id(
        proto_log::AntiCheatBodyAbilityHash *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->job_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->job_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->job_id_);
  }
  this->job_id_ = value;
};

// Line 9559: range 00000000160D7372-00000000160D73B9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::avatar_id(
        const proto_log::AntiCheatBodyEquipAffixCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 9563: range 00000000160D73BA-00000000160D7408
void __cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::set_avatar_id(
        proto_log::AntiCheatBodyEquipAffixCdWrong *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = value;
};

// Line 9573: range 00000000160D740A-00000000160D7459
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::affix_id(
        const proto_log::AntiCheatBodyEquipAffixCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->affix_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->affix_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->affix_id_);
  }
  return this->affix_id_;
};

// Line 9577: range 00000000160D745A-00000000160D74B0
void __cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::set_affix_id(
        proto_log::AntiCheatBodyEquipAffixCdWrong *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->affix_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->affix_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->affix_id_);
  }
  this->affix_id_ = value;
};

// Line 9587: range 00000000160D74B2-00000000160D74F9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::affix_cd(
        const proto_log::AntiCheatBodyEquipAffixCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->affix_cd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->affix_cd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->affix_cd_);
  }
  return this->affix_cd_;
};

// Line 9591: range 00000000160D74FA-00000000160D7548
void __cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::set_affix_cd(
        proto_log::AntiCheatBodyEquipAffixCdWrong *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->affix_cd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->affix_cd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->affix_cd_);
  }
  this->affix_cd_ = value;
};

// Line 9601: range 00000000160D754A-00000000160D7599
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::affix_pass_time(
        const proto_log::AntiCheatBodyEquipAffixCdWrong *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->affix_pass_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->affix_pass_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->affix_pass_time_);
  }
  return this->affix_pass_time_;
};

// Line 9605: range 00000000160D759A-00000000160D75F0
void __cdecl proto_log::AntiCheatBodyEquipAffixCdWrong::set_affix_pass_time(
        proto_log::AntiCheatBodyEquipAffixCdWrong *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->affix_pass_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->affix_pass_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->affix_pass_time_);
  }
  this->affix_pass_time_ = value;
};

// Line 9619: range 00000000160D75F2-00000000160D7639
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyPlayerReport::target_uid(
        const proto_log::AntiCheatBodyPlayerReport *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->target_uid_);
  }
  return this->target_uid_;
};

// Line 9623: range 00000000160D763A-00000000160D7688
void __cdecl proto_log::AntiCheatBodyPlayerReport::set_target_uid(
        proto_log::AntiCheatBodyPlayerReport *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_uid_);
  }
  this->target_uid_ = value;
};

// Line 9633: range 00000000160D768A-00000000160D76D9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyPlayerReport::report_type(
        const proto_log::AntiCheatBodyPlayerReport *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->report_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->report_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->report_type_);
  }
  return this->report_type_;
};

// Line 9637: range 00000000160D76DA-00000000160D7730
void __cdecl proto_log::AntiCheatBodyPlayerReport::set_report_type(
        proto_log::AntiCheatBodyPlayerReport *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->report_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->report_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->report_type_);
  }
  this->report_type_ = value;
};

// Line 9647: range 00000000160D7732-00000000160D774F
const std::string *__cdecl proto_log::AntiCheatBodyPlayerReport::report_reason[abi:cxx11](
        const proto_log::AntiCheatBodyPlayerReport *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->report_reason_);
};

// Line 9676: range 00000000160D7750-00000000160D777B
std::string *__cdecl proto_log::AntiCheatBodyPlayerReport::mutable_report_reason[abi:cxx11](
        proto_log::AntiCheatBodyPlayerReport *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->report_reason_, v1);
};

// Line 9700: range 00000000160D777C-00000000160D77C3
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyPlayerReport::reporter_language(
        const proto_log::AntiCheatBodyPlayerReport *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reporter_language_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reporter_language_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reporter_language_);
  }
  return this->reporter_language_;
};

// Line 9704: range 00000000160D77C4-00000000160D7812
void __cdecl proto_log::AntiCheatBodyPlayerReport::set_reporter_language(
        proto_log::AntiCheatBodyPlayerReport *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reporter_language_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reporter_language_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reporter_language_);
  }
  this->reporter_language_ = value;
};

// Line 9714: range 00000000160D7814-00000000160D7863
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyPlayerReport::target_home_module_id(
        const proto_log::AntiCheatBodyPlayerReport *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_home_module_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_home_module_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->target_home_module_id_);
  }
  return this->target_home_module_id_;
};

// Line 9718: range 00000000160D7864-00000000160D78BA
void __cdecl proto_log::AntiCheatBodyPlayerReport::set_target_home_module_id(
        proto_log::AntiCheatBodyPlayerReport *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_home_module_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_home_module_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_home_module_id_);
  }
  this->target_home_module_id_ = value;
};

// Line 9728: range 00000000160D78BC-00000000160D78D9
const std::string *__cdecl proto_log::AntiCheatBodyPlayerReport::target_home_module_name[abi:cxx11](
        const proto_log::AntiCheatBodyPlayerReport *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->target_home_module_name_);
};

// Line 9757: range 00000000160D78DA-00000000160D7905
std::string *__cdecl proto_log::AntiCheatBodyPlayerReport::mutable_target_home_module_name[abi:cxx11](
        proto_log::AntiCheatBodyPlayerReport *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->target_home_module_name_, v1);
};

// Line 9785: range 00000000160D7906-00000000160D794D
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::crc_module_type(
        const proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->crc_module_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->crc_module_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->crc_module_type_);
  }
  return this->crc_module_type_;
};

// Line 9789: range 00000000160D794E-00000000160D799C
void __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::set_crc_module_type(
        proto_log::AntiCheatBodySegmentCrcCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->crc_module_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->crc_module_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->crc_module_type_);
  }
  this->crc_module_type_ = value;
};

// Line 9799: range 00000000160D799E-00000000160D79ED
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::offset(
        const proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->offset_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->offset_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->offset_);
  }
  return this->offset_;
};

// Line 9803: range 00000000160D79EE-00000000160D7A44
void __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::set_offset(
        proto_log::AntiCheatBodySegmentCrcCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->offset_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->offset_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->offset_);
  }
  this->offset_ = value;
};

// Line 9813: range 00000000160D7A46-00000000160D7A8D
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::size(
        const proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->size_);
  }
  return this->size_;
};

// Line 9817: range 00000000160D7A8E-00000000160D7ADC
void __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::set_size(
        proto_log::AntiCheatBodySegmentCrcCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->size_);
  }
  this->size_ = value;
};

// Line 9827: range 00000000160D7ADE-00000000160D7AFB
const std::string *__cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::crc[abi:cxx11](
        const proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->crc_);
};

// Line 9856: range 00000000160D7AFC-00000000160D7B27
std::string *__cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::mutable_crc[abi:cxx11](
        proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->crc_, v1);
};

// Line 9880: range 00000000160D7B28-00000000160D7B45
const std::string *__cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::client_version[abi:cxx11](
        const proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->client_version_);
};

// Line 9909: range 00000000160D7B46-00000000160D7B71
std::string *__cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::mutable_client_version[abi:cxx11](
        proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->client_version_, v1);
};

// Line 9933: range 00000000160D7B72-00000000160D7BC1
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::channel_id(
        const proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->channel_id_);
  }
  return this->channel_id_;
};

// Line 9937: range 00000000160D7BC2-00000000160D7C18
void __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::set_channel_id(
        proto_log::AntiCheatBodySegmentCrcCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->channel_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->channel_id_);
  }
  this->channel_id_ = value;
};

// Line 9947: range 00000000160D7C1A-00000000160D7C61
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::sub_channel_id(
        const proto_log::AntiCheatBodySegmentCrcCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sub_channel_id_);
  }
  return this->sub_channel_id_;
};

// Line 9951: range 00000000160D7C62-00000000160D7CB0
void __cdecl proto_log::AntiCheatBodySegmentCrcCheckFail::set_sub_channel_id(
        proto_log::AntiCheatBodySegmentCrcCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_channel_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_channel_id_);
  }
  this->sub_channel_id_ = value;
};

// Line 9965: range 00000000160D7CB2-00000000160D7CF9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMonsterDie::scene_id(
        const proto_log::AntiCheatBodyMonsterDie *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->scene_id_);
  }
  return this->scene_id_;
};

// Line 9969: range 00000000160D7CFA-00000000160D7D48
void __cdecl proto_log::AntiCheatBodyMonsterDie::set_scene_id(
        proto_log::AntiCheatBodyMonsterDie *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id_);
  }
  this->scene_id_ = value;
};

// Line 9976: range 00000000160D7D4A-00000000160D7DA0
bool __cdecl proto_log::AntiCheatBodyMonsterDie::has_monster_log(const proto_log::AntiCheatBodyMonsterDie *const this)
{
  if ( this == proto_log::AntiCheatBodyMonsterDie::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->monster_log_);
  return this->monster_log_ != 0;
};

// Line 9983: range 00000000160D7DA2-00000000160D7DF4
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyMonsterDie::monster_log(
        const proto_log::AntiCheatBodyMonsterDie *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->monster_log_);
  if ( this->monster_log_ )
    return this->monster_log_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 9989: range 00000000160D7DF6-00000000160D7ED0
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyMonsterDie::mutable_monster_log(
        proto_log::AntiCheatBodyMonsterDie *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->monster_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->monster_log_);
  if ( !this->monster_log_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_log_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->monster_log_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->monster_log_);
  return this->monster_log_;
};

// Line 10019: range 00000000160D7ED2-00000000160D7F21
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMonsterDie::reason(
        const proto_log::AntiCheatBodyMonsterDie *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->reason_);
  }
  return this->reason_;
};

// Line 10023: range 00000000160D7F22-00000000160D7F78
void __cdecl proto_log::AntiCheatBodyMonsterDie::set_reason(
        proto_log::AntiCheatBodyMonsterDie *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reason_);
  }
  this->reason_ = value;
};

// Line 10030: range 00000000160D7F7A-00000000160D7F97
int __cdecl proto_log::AntiCheatBodyMonsterDie::forbid_die_types_size(
        const proto_log::AntiCheatBodyMonsterDie *const this)
{
  return google::protobuf::RepeatedField<unsigned int>::size(&this->forbid_die_types_);
};

// Line 10036: range 00000000160D7F98-00000000160D7FF9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMonsterDie::forbid_die_types(
        const proto_log::AntiCheatBodyMonsterDie *const this,
        int index)
{
  google::protobuf::uint32 *v2; // rax
  google::protobuf::uint32 *v3; // rdx

  v2 = (google::protobuf::uint32 *)google::protobuf::RepeatedField<unsigned int>::Get(&this->forbid_die_types_, index);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  return *v3;
};

// Line 10054: range 00000000160D7FFA-00000000160D800B
google::protobuf::RepeatedField<unsigned int> *__cdecl proto_log::AntiCheatBodyMonsterDie::mutable_forbid_die_types(
        proto_log::AntiCheatBodyMonsterDie *const this)
{
  return &this->forbid_die_types_;
};

// Line 10063: range 00000000160D800C-00000000160D8029
const std::string *__cdecl proto_log::AntiCheatBodyMonsterDie::combat_transaction[abi:cxx11](
        const proto_log::AntiCheatBodyMonsterDie *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->combat_transaction_);
};

// Line 10092: range 00000000160D802A-00000000160D8055
std::string *__cdecl proto_log::AntiCheatBodyMonsterDie::mutable_combat_transaction[abi:cxx11](
        proto_log::AntiCheatBodyMonsterDie *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->combat_transaction_, v1);
};

// Line 10120: range 00000000160D8056-00000000160D809D
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::avatar_id(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 10124: range 00000000160D809E-00000000160D80EC
void __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::set_avatar_id(
        proto_log::AntiCheatBodyUseNotAllowedSkill *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = value;
};

// Line 10134: range 00000000160D80EE-00000000160D813D
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::skill_id(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_id_);
  }
  return this->skill_id_;
};

// Line 10138: range 00000000160D813E-00000000160D8194
void __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::set_skill_id(
        proto_log::AntiCheatBodyUseNotAllowedSkill *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id_);
  }
  this->skill_id_ = value;
};

// Line 10148: range 00000000160D8196-00000000160D81DD
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::last_used_skill_id(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_used_skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_used_skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_used_skill_id_);
  }
  return this->last_used_skill_id_;
};

// Line 10152: range 00000000160D81DE-00000000160D822C
void __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::set_last_used_skill_id(
        proto_log::AntiCheatBodyUseNotAllowedSkill *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_used_skill_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_used_skill_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_used_skill_id_);
  }
  this->last_used_skill_id_ = value;
};

// Line 10162: range 00000000160D822E-00000000160D824B
const std::string *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::ability_name[abi:cxx11](
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->ability_name_);
};

// Line 10191: range 00000000160D824C-00000000160D8277
std::string *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::mutable_ability_name[abi:cxx11](
        proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->ability_name_, v1);
};

// Line 10215: range 00000000160D8278-00000000160D8295
const std::string *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::modifier_name[abi:cxx11](
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->modifier_name_);
};

// Line 10244: range 00000000160D8296-00000000160D82C1
std::string *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::mutable_modifier_name[abi:cxx11](
        proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->modifier_name_, v1);
};

// Line 10265: range 00000000160D82C2-00000000160D8318
bool __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::has_source_entity(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  if ( this == proto_log::AntiCheatBodyUseNotAllowedSkill::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  return this->source_entity_ != 0;
};

// Line 10272: range 00000000160D831A-00000000160D836C
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::source_entity(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  if ( this->source_entity_ )
    return this->source_entity_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 10278: range 00000000160D836E-00000000160D8448
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::mutable_source_entity(
        proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  if ( !this->source_entity_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->source_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  return this->source_entity_;
};

// Line 10305: range 00000000160D844A-00000000160D84A0
bool __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::has_target_entity(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  if ( this == proto_log::AntiCheatBodyUseNotAllowedSkill::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  return this->target_entity_ != 0;
};

// Line 10312: range 00000000160D84A2-00000000160D84F4
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::target_entity(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  if ( this->target_entity_ )
    return this->target_entity_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 10318: range 00000000160D84F6-00000000160D85D0
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::mutable_target_entity(
        proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  if ( !this->target_entity_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->target_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  return this->target_entity_;
};

// Line 10348: range 00000000160D85D2-00000000160D8621
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::from_player_uid(
        const proto_log::AntiCheatBodyUseNotAllowedSkill *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->from_player_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->from_player_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->from_player_uid_);
  }
  return this->from_player_uid_;
};

// Line 10352: range 00000000160D8622-00000000160D8678
void __cdecl proto_log::AntiCheatBodyUseNotAllowedSkill::set_from_player_uid(
        proto_log::AntiCheatBodyUseNotAllowedSkill *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->from_player_uid_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->from_player_uid_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->from_player_uid_);
  }
  this->from_player_uid_ = value;
};

// Line 10366: range 00000000160D867A-00000000160D86B4
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::last_sent_ms(
        const proto_log::AntiCheatBodyClientSpeedUpTime *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sent_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_sent_ms_);
  return this->last_sent_ms_;
};

// Line 10370: range 00000000160D86B6-00000000160D86F9
void __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::set_last_sent_ms(
        proto_log::AntiCheatBodyClientSpeedUpTime *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sent_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->last_sent_ms_ = value;
};

// Line 10380: range 00000000160D86FA-00000000160D8743
float __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::last_unity_engine_time(
        const proto_log::AntiCheatBodyClientSpeedUpTime *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_unity_engine_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_unity_engine_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_unity_engine_time_);
  }
  return this->last_unity_engine_time_;
};

// Line 10384: range 00000000160D8744-00000000160D8798
void __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::set_last_unity_engine_time(
        proto_log::AntiCheatBodyClientSpeedUpTime *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_unity_engine_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_unity_engine_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_unity_engine_time_);
  }
  this->last_unity_engine_time_ = value;
};

// Line 10394: range 00000000160D879A-00000000160D87D4
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::sent_ms(
        const proto_log::AntiCheatBodyClientSpeedUpTime *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sent_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->sent_ms_);
  return this->sent_ms_;
};

// Line 10398: range 00000000160D87D6-00000000160D8819
void __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::set_sent_ms(
        proto_log::AntiCheatBodyClientSpeedUpTime *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sent_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->sent_ms_ = value;
};

// Line 10408: range 00000000160D881A-00000000160D886B
float __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::unity_engine_time(
        const proto_log::AntiCheatBodyClientSpeedUpTime *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->unity_engine_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unity_engine_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->unity_engine_time_);
  }
  return this->unity_engine_time_;
};

// Line 10412: range 00000000160D886C-00000000160D88C8
void __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::set_unity_engine_time(
        proto_log::AntiCheatBodyClientSpeedUpTime *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->unity_engine_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unity_engine_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unity_engine_time_);
  }
  this->unity_engine_time_ = value;
};

// Line 10422: range 00000000160D88CA-00000000160D8913
float __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::timescale(
        const proto_log::AntiCheatBodyClientSpeedUpTime *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->timescale_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timescale_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->timescale_);
  }
  return this->timescale_;
};

// Line 10426: range 00000000160D8914-00000000160D8968
void __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::set_timescale(
        proto_log::AntiCheatBodyClientSpeedUpTime *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->timescale_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timescale_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timescale_);
  }
  this->timescale_ = value;
};

// Line 10436: range 00000000160D896A-00000000160D89BB
float __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::timescale_limit(
        const proto_log::AntiCheatBodyClientSpeedUpTime *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->timescale_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timescale_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->timescale_limit_);
  }
  return this->timescale_limit_;
};

// Line 10440: range 00000000160D89BC-00000000160D8A18
void __cdecl proto_log::AntiCheatBodyClientSpeedUpTime::set_timescale_limit(
        proto_log::AntiCheatBodyClientSpeedUpTime *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->timescale_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timescale_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->timescale_limit_);
  }
  this->timescale_limit_ = value;
};

// Line 10451: range 00000000160D8A1A-00000000160D8A70
bool __cdecl proto_log::AntiCheatBodyCombatHash::has_entity_log(const proto_log::AntiCheatBodyCombatHash *const this)
{
  if ( this == proto_log::AntiCheatBodyCombatHash::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  return this->entity_log_ != 0;
};

// Line 10458: range 00000000160D8A72-00000000160D8AC4
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyCombatHash::entity_log(
        const proto_log::AntiCheatBodyCombatHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  if ( this->entity_log_ )
    return this->entity_log_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 10464: range 00000000160D8AC6-00000000160D8BA0
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyCombatHash::mutable_entity_log(
        proto_log::AntiCheatBodyCombatHash *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  if ( !this->entity_log_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->entity_log_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  return this->entity_log_;
};

// Line 10494: range 00000000160D8BA2-00000000160D8BE9
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyCombatHash::client_hash_value(
        const proto_log::AntiCheatBodyCombatHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->client_hash_value_);
  }
  return this->client_hash_value_;
};

// Line 10498: range 00000000160D8BEA-00000000160D8C38
void __cdecl proto_log::AntiCheatBodyCombatHash::set_client_hash_value(
        proto_log::AntiCheatBodyCombatHash *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_hash_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_hash_value_);
  }
  this->client_hash_value_ = value;
};

// Line 10508: range 00000000160D8C3A-00000000160D8C89
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyCombatHash::server_hash_value(
        const proto_log::AntiCheatBodyCombatHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->server_hash_value_);
  }
  return this->server_hash_value_;
};

// Line 10512: range 00000000160D8C8A-00000000160D8CE0
void __cdecl proto_log::AntiCheatBodyCombatHash::set_server_hash_value(
        proto_log::AntiCheatBodyCombatHash *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_hash_value_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->server_hash_value_);
  }
  this->server_hash_value_ = value;
};

// Line 10523: range 00000000160D8CE2-00000000160D8D38
bool __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::has_gadget_entity(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( this == proto_log::AntiCheatBodyGadgetInteractBeyondDistance::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->gadget_entity_);
  return this->gadget_entity_ != 0;
};

// Line 10530: range 00000000160D8D3A-00000000160D8D8C
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::gadget_entity(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->gadget_entity_);
  if ( this->gadget_entity_ )
    return this->gadget_entity_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 10536: range 00000000160D8D8E-00000000160D8E68
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::mutable_gadget_entity(
        proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->gadget_entity_);
  if ( !this->gadget_entity_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->gadget_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->gadget_entity_);
  return this->gadget_entity_;
};

// Line 10566: range 00000000160D8E6A-00000000160D8EB1
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::avatar_id(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 10570: range 00000000160D8EB2-00000000160D8F00
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::set_avatar_id(
        proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = value;
};

// Line 10577: range 00000000160D8F02-00000000160D8F58
bool __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::has_avatar_position(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( this == proto_log::AntiCheatBodyGadgetInteractBeyondDistance::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_position_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_position_);
  return this->avatar_position_ != 0;
};

// Line 10584: range 00000000160D8F5A-00000000160D8FAC
const proto_log::PositionLog *__cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::avatar_position(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_position_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_position_);
  if ( this->avatar_position_ )
    return this->avatar_position_;
  else
    return (const proto_log::PositionLog *)&proto_log::_PositionLog_default_instance_;
};

// Line 10590: range 00000000160D8FAE-00000000160D9088
proto_log::PositionLog *__cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::mutable_avatar_position(
        proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  proto_log::PositionLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_position_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_position_);
  if ( !this->avatar_position_ )
  {
    v1 = (proto_log::PositionLog *)operator new(0x20uLL);
    proto_log::PositionLog::PositionLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_position_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->avatar_position_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_position_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_position_);
  return this->avatar_position_;
};

// Line 10620: range 00000000160D908A-00000000160D90D9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::gadget_entity_id(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gadget_entity_id_);
  }
  return this->gadget_entity_id_;
};

// Line 10624: range 00000000160D90DA-00000000160D9130
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::set_gadget_entity_id(
        proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_entity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_entity_id_);
  }
  this->gadget_entity_id_ = value;
};

// Line 10634: range 00000000160D9132-00000000160D9179
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::op_type(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->op_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->op_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->op_type_);
  }
  return this->op_type_;
};

// Line 10638: range 00000000160D917A-00000000160D91C8
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::set_op_type(
        proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->op_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->op_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->op_type_);
  }
  this->op_type_ = value;
};

// Line 10648: range 00000000160D91CA-00000000160D9219
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::resin_cost_type(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->resin_cost_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resin_cost_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->resin_cost_type_);
  }
  return this->resin_cost_type_;
};

// Line 10652: range 00000000160D921A-00000000160D9270
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::set_resin_cost_type(
        proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->resin_cost_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resin_cost_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->resin_cost_type_);
  }
  this->resin_cost_type_ = value;
};

// Line 10662: range 00000000160D9272-00000000160D92BB
float __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::distance(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->distance_);
  }
  return this->distance_;
};

// Line 10666: range 00000000160D92BC-00000000160D9310
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::set_distance(
        proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->distance_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->distance_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->distance_);
  }
  this->distance_ = value;
};

// Line 10676: range 00000000160D9312-00000000160D9363
float __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::check_distance(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_distance_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_distance_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->check_distance_);
  }
  return this->check_distance_;
};

// Line 10680: range 00000000160D9364-00000000160D93C0
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::set_check_distance(
        proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_distance_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->check_distance_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->check_distance_);
  }
  this->check_distance_ = value;
};

// Line 10690: range 00000000160D93C2-00000000160D9409
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::record_time(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->record_time_);
  }
  return this->record_time_;
};

// Line 10694: range 00000000160D940A-00000000160D9458
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::set_record_time(
        proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_time_);
  }
  this->record_time_ = value;
};

// Line 10704: range 00000000160D945A-00000000160D94A9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::record_count(
        const proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->record_count_);
  }
  return this->record_count_;
};

// Line 10708: range 00000000160D94AA-00000000160D9500
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondDistance::set_record_count(
        proto_log::AntiCheatBodyGadgetInteractBeyondDistance *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->record_count_);
  }
  this->record_count_ = value;
};

// Line 10722: range 00000000160D9502-00000000160D951F
const std::string *__cdecl proto_log::AntiCheatBodySafeFloatException::report_type[abi:cxx11](
        const proto_log::AntiCheatBodySafeFloatException *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->report_type_);
};

// Line 10751: range 00000000160D9520-00000000160D954B
std::string *__cdecl proto_log::AntiCheatBodySafeFloatException::mutable_report_type[abi:cxx11](
        proto_log::AntiCheatBodySafeFloatException *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->report_type_, v1);
};

// Line 10775: range 00000000160D954C-00000000160D9569
const std::string *__cdecl proto_log::AntiCheatBodySafeFloatException::report_value[abi:cxx11](
        const proto_log::AntiCheatBodySafeFloatException *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->report_value_);
};

// Line 10804: range 00000000160D956A-00000000160D9595
std::string *__cdecl proto_log::AntiCheatBodySafeFloatException::mutable_report_value[abi:cxx11](
        proto_log::AntiCheatBodySafeFloatException *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->report_value_, v1);
};

// Line 10832: range 00000000160D9596-00000000160D95B3
const std::string *__cdecl proto_log::AntiCheatBodyEnvironmentError::code_str[abi:cxx11](
        const proto_log::AntiCheatBodyEnvironmentError *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->code_str_);
};

// Line 10861: range 00000000160D95B4-00000000160D95DF
std::string *__cdecl proto_log::AntiCheatBodyEnvironmentError::mutable_code_str[abi:cxx11](
        proto_log::AntiCheatBodyEnvironmentError *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->code_str_, v1);
};

// Line 10885: range 00000000160D95E0-00000000160D9628
bool __cdecl proto_log::AntiCheatBodyEnvironmentError::is_kick(
        const proto_log::AntiCheatBodyEnvironmentError *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_kick_);
  return this->is_kick_;
};

// Line 10889: range 00000000160D962A-00000000160D967B
void __cdecl proto_log::AntiCheatBodyEnvironmentError::set_is_kick(
        proto_log::AntiCheatBodyEnvironmentError *const this,
        bool value)
{
  if ( *(char *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_kick_);
  this->is_kick_ = value;
};

// Line 10899: range 00000000160D967C-00000000160D9699
const std::string *__cdecl proto_log::AntiCheatBodyEnvironmentError::player_login_req_str[abi:cxx11](
        const proto_log::AntiCheatBodyEnvironmentError *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->player_login_req_str_);
};

// Line 10928: range 00000000160D969A-00000000160D96C5
std::string *__cdecl proto_log::AntiCheatBodyEnvironmentError::mutable_player_login_req_str[abi:cxx11](
        proto_log::AntiCheatBodyEnvironmentError *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->player_login_req_str_, v1);
};

// Line 10953: range 00000000160D96C6-00000000160D971C
bool __cdecl proto_log::AntiCheatBodyDamageOverLimit::has_attack_entity(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( this == proto_log::AntiCheatBodyDamageOverLimit::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->attack_entity_);
  return this->attack_entity_ != 0;
};

// Line 10960: range 00000000160D971E-00000000160D9770
const proto_log::AttackEntityLog *__cdecl proto_log::AntiCheatBodyDamageOverLimit::attack_entity(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->attack_entity_);
  if ( this->attack_entity_ )
    return this->attack_entity_;
  else
    return (const proto_log::AttackEntityLog *)&proto_log::_AttackEntityLog_default_instance_;
};

// Line 10966: range 00000000160D9772-00000000160D984C
proto_log::AttackEntityLog *__cdecl proto_log::AntiCheatBodyDamageOverLimit::mutable_attack_entity(
        proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  proto_log::AttackEntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->attack_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->attack_entity_);
  if ( !this->attack_entity_ )
  {
    v1 = (proto_log::AttackEntityLog *)operator new(0x38uLL);
    proto_log::AttackEntityLog::AttackEntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->attack_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->attack_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->attack_entity_);
  return this->attack_entity_;
};

// Line 10993: range 00000000160D984E-00000000160D98A4
bool __cdecl proto_log::AntiCheatBodyDamageOverLimit::has_defense_entity(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( this == proto_log::AntiCheatBodyDamageOverLimit::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->defense_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->defense_entity_);
  return this->defense_entity_ != 0;
};

// Line 11000: range 00000000160D98A6-00000000160D98F8
const proto_log::AttackEntityLog *__cdecl proto_log::AntiCheatBodyDamageOverLimit::defense_entity(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->defense_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->defense_entity_);
  if ( this->defense_entity_ )
    return this->defense_entity_;
  else
    return (const proto_log::AttackEntityLog *)&proto_log::_AttackEntityLog_default_instance_;
};

// Line 11006: range 00000000160D98FA-00000000160D99D4
proto_log::AttackEntityLog *__cdecl proto_log::AntiCheatBodyDamageOverLimit::mutable_defense_entity(
        proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  proto_log::AttackEntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->defense_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->defense_entity_);
  if ( !this->defense_entity_ )
  {
    v1 = (proto_log::AttackEntityLog *)operator new(0x38uLL);
    proto_log::AttackEntityLog::AttackEntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->defense_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->defense_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->defense_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->defense_entity_);
  return this->defense_entity_;
};

// Line 11036: range 00000000160D99D6-00000000160D99F3
const std::string *__cdecl proto_log::AntiCheatBodyDamageOverLimit::attack_tag[abi:cxx11](
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->attack_tag_);
};

// Line 11065: range 00000000160D99F4-00000000160D9A1F
std::string *__cdecl proto_log::AntiCheatBodyDamageOverLimit::mutable_attack_tag[abi:cxx11](
        proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->attack_tag_, v1);
};

// Line 11089: range 00000000160D9A20-00000000160D9A3D
const std::string *__cdecl proto_log::AntiCheatBodyDamageOverLimit::ability_name[abi:cxx11](
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->ability_name_);
};

// Line 11118: range 00000000160D9A3E-00000000160D9A69
std::string *__cdecl proto_log::AntiCheatBodyDamageOverLimit::mutable_ability_name[abi:cxx11](
        proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->ability_name_, v1);
};

// Line 11142: range 00000000160D9A6A-00000000160D9A87
const std::string *__cdecl proto_log::AntiCheatBodyDamageOverLimit::modifier_name[abi:cxx11](
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->modifier_name_);
};

// Line 11171: range 00000000160D9A88-00000000160D9AB3
std::string *__cdecl proto_log::AntiCheatBodyDamageOverLimit::mutable_modifier_name[abi:cxx11](
        proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->modifier_name_, v1);
};

// Line 11195: range 00000000160D9AB4-00000000160D9AFD
float __cdecl proto_log::AntiCheatBodyDamageOverLimit::damage_percentage(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->damage_percentage_);
  }
  return this->damage_percentage_;
};

// Line 11199: range 00000000160D9AFE-00000000160D9B52
void __cdecl proto_log::AntiCheatBodyDamageOverLimit::set_damage_percentage(
        proto_log::AntiCheatBodyDamageOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_percentage_);
  }
  this->damage_percentage_ = value;
};

// Line 11209: range 00000000160D9B54-00000000160D9BA5
float __cdecl proto_log::AntiCheatBodyDamageOverLimit::damage_percentage_ratio(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ratio_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->damage_percentage_ratio_);
  }
  return this->damage_percentage_ratio_;
};

// Line 11213: range 00000000160D9BA6-00000000160D9C02
void __cdecl proto_log::AntiCheatBodyDamageOverLimit::set_damage_percentage_ratio(
        proto_log::AntiCheatBodyDamageOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_percentage_ratio_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage_percentage_ratio_);
  }
  this->damage_percentage_ratio_ = value;
};

// Line 11223: range 00000000160D9C04-00000000160D9C4D
float __cdecl proto_log::AntiCheatBodyDamageOverLimit::damage_extra(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_extra_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_extra_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->damage_extra_);
  }
  return this->damage_extra_;
};

// Line 11227: range 00000000160D9C4E-00000000160D9CA2
void __cdecl proto_log::AntiCheatBodyDamageOverLimit::set_damage_extra(
        proto_log::AntiCheatBodyDamageOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_extra_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->damage_extra_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->damage_extra_);
  }
  this->damage_extra_ = value;
};

// Line 11237: range 00000000160D9CA4-00000000160D9CF5
float __cdecl proto_log::AntiCheatBodyDamageOverLimit::damage(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->damage_);
  }
  return this->damage_;
};

// Line 11241: range 00000000160D9CF6-00000000160D9D52
void __cdecl proto_log::AntiCheatBodyDamageOverLimit::set_damage(
        proto_log::AntiCheatBodyDamageOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->damage_);
  }
  this->damage_ = value;
};

// Line 11251: range 00000000160D9D54-00000000160D9D9D
float __cdecl proto_log::AntiCheatBodyDamageOverLimit::critical_hurt(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->critical_hurt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->critical_hurt_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->critical_hurt_);
  }
  return this->critical_hurt_;
};

// Line 11255: range 00000000160D9D9E-00000000160D9DF2
void __cdecl proto_log::AntiCheatBodyDamageOverLimit::set_critical_hurt(
        proto_log::AntiCheatBodyDamageOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->critical_hurt_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->critical_hurt_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->critical_hurt_);
  }
  this->critical_hurt_ = value;
};

// Line 11265: range 00000000160D9DF4-00000000160D9E45
float __cdecl proto_log::AntiCheatBodyDamageOverLimit::amplify_ratio(
        const proto_log::AntiCheatBodyDamageOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->amplify_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->amplify_ratio_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->amplify_ratio_);
  }
  return this->amplify_ratio_;
};

// Line 11269: range 00000000160D9E46-00000000160D9EA2
void __cdecl proto_log::AntiCheatBodyDamageOverLimit::set_amplify_ratio(
        proto_log::AntiCheatBodyDamageOverLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->amplify_ratio_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->amplify_ratio_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->amplify_ratio_);
  }
  this->amplify_ratio_ = value;
};

// Line 11283: range 00000000160D9EA4-00000000160D9EEB
google::protobuf::uint32 __cdecl proto_log::BriefMotionLog::brief_motion_state(
        const proto_log::BriefMotionLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->brief_motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->brief_motion_state_);
  }
  return this->brief_motion_state_;
};

// Line 11287: range 00000000160D9EEC-00000000160D9F3A
void __cdecl proto_log::BriefMotionLog::set_brief_motion_state(
        proto_log::BriefMotionLog *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->brief_motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->brief_motion_state_);
  }
  this->brief_motion_state_ = value;
};

// Line 11297: range 00000000160D9F3C-00000000160D9F8B
google::protobuf::uint32 __cdecl proto_log::BriefMotionLog::brief_speed(const proto_log::BriefMotionLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_speed_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->brief_speed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->brief_speed_);
  }
  return this->brief_speed_;
};

// Line 11301: range 00000000160D9F8C-00000000160D9FE2
void __cdecl proto_log::BriefMotionLog::set_brief_speed(
        proto_log::BriefMotionLog *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_speed_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->brief_speed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->brief_speed_);
  }
  this->brief_speed_ = value;
};

// Line 11312: range 00000000160D9FE4-00000000160DA001
int __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::brief_motion_list_size(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  return google::protobuf::RepeatedPtrField<proto_log::BriefMotionLog>::size(&this->brief_motion_list_);
};

// Line 11318: range 00000000160DA002-00000000160DA027
const proto_log::BriefMotionLog *__cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::brief_motion_list(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this,
        int index)
{
  return google::protobuf::RepeatedPtrField<proto_log::BriefMotionLog>::Get(&this->brief_motion_list_, index);
};

// Line 11326: range 00000000160DA028-00000000160DA045
proto_log::BriefMotionLog *__cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::add_brief_motion_list(
        proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  return google::protobuf::RepeatedPtrField<proto_log::BriefMotionLog>::Add(&this->brief_motion_list_);
};

// Line 11342: range 00000000160DA046-00000000160DA09C
bool __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::has_pos(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  if ( this == proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos_);
  return this->pos_ != 0;
};

// Line 11349: range 00000000160DA09E-00000000160DA0F0
const proto_log::PositionLog *__cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::pos(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos_);
  if ( this->pos_ )
    return this->pos_;
  else
    return (const proto_log::PositionLog *)&proto_log::_PositionLog_default_instance_;
};

// Line 11355: range 00000000160DA0F2-00000000160DA1CC
proto_log::PositionLog *__cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::mutable_pos(
        proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  proto_log::PositionLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->pos_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos_);
  if ( !this->pos_ )
  {
    v1 = (proto_log::PositionLog *)operator new(0x20uLL);
    proto_log::PositionLog::PositionLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->pos_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->pos_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pos_);
  return this->pos_;
};

// Line 11385: range 00000000160DA1CE-00000000160DA215
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::motion_state(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  return this->motion_state_;
};

// Line 11389: range 00000000160DA216-00000000160DA264
void __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::set_motion_state(
        proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->motion_state_);
  }
  this->motion_state_ = value;
};

// Line 11396: range 00000000160DA266-00000000160DA283
int __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::brief_motion_state_list_size(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  return google::protobuf::RepeatedField<unsigned int>::size(&this->brief_motion_state_list_);
};

// Line 11402: range 00000000160DA284-00000000160DA2E5
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::brief_motion_state_list(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this,
        int index)
{
  google::protobuf::uint32 *v2; // rax
  google::protobuf::uint32 *v3; // rdx

  v2 = (google::protobuf::uint32 *)google::protobuf::RepeatedField<unsigned int>::Get(
                                     &this->brief_motion_state_list_,
                                     index);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  return *v3;
};

// Line 11420: range 00000000160DA2E6-00000000160DA2F7
google::protobuf::RepeatedField<unsigned int> *__cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::mutable_brief_motion_state_list(
        proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  return &this->brief_motion_state_list_;
};

// Line 11426: range 00000000160DA2F8-00000000160DA315
int __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::brief_speed_list_size(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  return google::protobuf::RepeatedField<unsigned int>::size(&this->brief_speed_list_);
};

// Line 11432: range 00000000160DA316-00000000160DA377
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::brief_speed_list(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this,
        int index)
{
  google::protobuf::uint32 *v2; // rax
  google::protobuf::uint32 *v3; // rdx

  v2 = (google::protobuf::uint32 *)google::protobuf::RepeatedField<unsigned int>::Get(&this->brief_speed_list_, index);
  v3 = v2;
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v2);
  }
  return *v3;
};

// Line 11450: range 00000000160DA378-00000000160DA389
google::protobuf::RepeatedField<unsigned int> *__cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::mutable_brief_speed_list(
        proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  return &this->brief_speed_list_;
};

// Line 11459: range 00000000160DA38A-00000000160DA3D9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::brief_motion_state(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_motion_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->brief_motion_state_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->brief_motion_state_);
  }
  return this->brief_motion_state_;
};

// Line 11463: range 00000000160DA3DA-00000000160DA430
void __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::set_brief_motion_state(
        proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_motion_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->brief_motion_state_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->brief_motion_state_);
  }
  this->brief_motion_state_ = value;
};

// Line 11473: range 00000000160DA432-00000000160DA479
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::brief_speed(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_speed_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->brief_speed_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->brief_speed_);
  }
  return this->brief_speed_;
};

// Line 11477: range 00000000160DA47A-00000000160DA4C8
void __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::set_brief_speed(
        proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_speed_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->brief_speed_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->brief_speed_);
  }
  this->brief_speed_ = value;
};

// Line 11487: range 00000000160DA4CA-00000000160DA519
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::brief_acc(
        const proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_acc_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->brief_acc_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->brief_acc_);
  }
  return this->brief_acc_;
};

// Line 11491: range 00000000160DA51A-00000000160DA570
void __cdecl proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit::set_brief_acc(
        proto_log::AntiCheatBodyClientReportMoveSpeedOverLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->brief_acc_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->brief_acc_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->brief_acc_);
  }
  this->brief_acc_ = value;
};

// Line 11505: range 00000000160DA572-00000000160DA5B9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAvatarExcelHash::avatar_id(
        const proto_log::AntiCheatBodyAvatarExcelHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 11509: range 00000000160DA5BA-00000000160DA608
void __cdecl proto_log::AntiCheatBodyAvatarExcelHash::set_avatar_id(
        proto_log::AntiCheatBodyAvatarExcelHash *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = value;
};

// Line 11519: range 00000000160DA60A-00000000160DA627
const std::string *__cdecl proto_log::AntiCheatBodyAvatarExcelHash::hash_str[abi:cxx11](
        const proto_log::AntiCheatBodyAvatarExcelHash *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->hash_str_);
};

// Line 11548: range 00000000160DA628-00000000160DA653
std::string *__cdecl proto_log::AntiCheatBodyAvatarExcelHash::mutable_hash_str[abi:cxx11](
        proto_log::AntiCheatBodyAvatarExcelHash *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->hash_str_, v1);
};

// Line 11572: range 00000000160DA654-00000000160DA6A3
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyAvatarExcelHash::server_hash(
        const proto_log::AntiCheatBodyAvatarExcelHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_hash_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->server_hash_);
  }
  return this->server_hash_;
};

// Line 11576: range 00000000160DA6A4-00000000160DA6FA
void __cdecl proto_log::AntiCheatBodyAvatarExcelHash::set_server_hash(
        proto_log::AntiCheatBodyAvatarExcelHash *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_hash_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->server_hash_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->server_hash_);
  }
  this->server_hash_ = value;
};

// Line 11586: range 00000000160DA6FC-00000000160DA743
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyAvatarExcelHash::client_hash(
        const proto_log::AntiCheatBodyAvatarExcelHash *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->client_hash_);
  }
  return this->client_hash_;
};

// Line 11590: range 00000000160DA744-00000000160DA792
void __cdecl proto_log::AntiCheatBodyAvatarExcelHash::set_client_hash(
        proto_log::AntiCheatBodyAvatarExcelHash *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_hash_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_hash_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_hash_);
  }
  this->client_hash_ = value;
};

// Line 11604: range 00000000160DA794-00000000160DA7DB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::uid(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->uid_);
  }
  return this->uid_;
};

// Line 11608: range 00000000160DA7DC-00000000160DA82A
void __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_uid(
        proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_);
  }
  this->uid_ = value;
};

// Line 11618: range 00000000160DA82C-00000000160DA866
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::guid(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->guid_);
  return this->guid_;
};

// Line 11622: range 00000000160DA868-00000000160DA8AB
void __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_guid(
        proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->guid_ = value;
};

// Line 11632: range 00000000160DA8AC-00000000160DA8FB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::avatar_type(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avatar_type_);
  }
  return this->avatar_type_;
};

// Line 11636: range 00000000160DA8FC-00000000160DA952
void __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_avatar_type(
        proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_type_);
  }
  this->avatar_type_ = value;
};

// Line 11646: range 00000000160DA954-00000000160DA99B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::avatar_id(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id_);
  }
  return this->avatar_id_;
};

// Line 11650: range 00000000160DA99C-00000000160DA9EA
void __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_avatar_id(
        proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id_);
  }
  this->avatar_id_ = value;
};

// Line 11660: range 00000000160DA9EC-00000000160DAA3B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::costume_id(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->costume_id_);
  }
  return this->costume_id_;
};

// Line 11664: range 00000000160DAA3C-00000000160DAA92
void __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_costume_id(
        proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->costume_id_);
  }
  this->costume_id_ = value;
};

// Line 11674: range 00000000160DAA94-00000000160DAADB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::cur_costume_id(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_costume_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_costume_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_costume_id_);
  }
  return this->cur_costume_id_;
};

// Line 11678: range 00000000160DAADC-00000000160DAB2A
void __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_cur_costume_id(
        proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_costume_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_costume_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_costume_id_);
  }
  this->cur_costume_id_ = value;
};

// Line 11688: range 00000000160DAB2C-00000000160DAB79
bool __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::is_has_costume(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_costume_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_costume_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_has_costume_);
  }
  return this->is_has_costume_;
};

// Line 11692: range 00000000160DAB7A-00000000160DABD0
void __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_is_has_costume(
        proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this,
        bool value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_costume_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_costume_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_has_costume_);
  }
  this->is_has_costume_ = value;
};

// Line 11702: range 00000000160DABD2-00000000160DAC0C
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::prefab_hash(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_hash_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->prefab_hash_);
  return this->prefab_hash_;
};

// Line 11706: range 00000000160DAC0E-00000000160DAC51
void __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_prefab_hash(
        proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->prefab_hash_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->prefab_hash_ = value;
};

// Line 11716: range 00000000160DAC52-00000000160DAC8C
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::server_hash(
        const proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_hash_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->server_hash_);
  return this->server_hash_;
};

// Line 11720: range 00000000160DAC8E-00000000160DACD1
void __cdecl proto_log::AntiCheatBodyClientLoadingCostumeVerification::set_server_hash(
        proto_log::AntiCheatBodyClientLoadingCostumeVerification *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->server_hash_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->server_hash_ = value;
};

// Line 11734: range 00000000160DACD2-00000000160DAD19
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::attack_count(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->attack_count_);
  }
  return this->attack_count_;
};

// Line 11738: range 00000000160DAD1A-00000000160DAD68
void __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::set_attack_count(
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_count_);
  }
  this->attack_count_ = value;
};

// Line 11748: range 00000000160DAD6A-00000000160DADB9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::frame_num(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->frame_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->frame_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->frame_num_);
  }
  return this->frame_num_;
};

// Line 11752: range 00000000160DADBA-00000000160DAE10
void __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::set_frame_num(
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->frame_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->frame_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->frame_num_);
  }
  this->frame_num_ = value;
};

// Line 11762: range 00000000160DAE12-00000000160DAE59
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::attack_id(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->attack_id_);
  }
  return this->attack_id_;
};

// Line 11766: range 00000000160DAE5A-00000000160DAEA8
void __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::set_attack_id(
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attack_id_);
  }
  this->attack_id_ = value;
};

// Line 11773: range 00000000160DAEAA-00000000160DAF00
bool __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::has_source_entity(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( this == proto_log::AntiCheatBodyQiandaoguaCheckFail::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  return this->source_entity_ != 0;
};

// Line 11780: range 00000000160DAF02-00000000160DAF54
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::source_entity(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  if ( this->source_entity_ )
    return this->source_entity_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 11786: range 00000000160DAF56-00000000160DB030
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::mutable_source_entity(
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  if ( !this->source_entity_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->source_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->source_entity_);
  return this->source_entity_;
};

// Line 11813: range 00000000160DB032-00000000160DB088
bool __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::has_target_entity(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( this == proto_log::AntiCheatBodyQiandaoguaCheckFail::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  return this->target_entity_ != 0;
};

// Line 11820: range 00000000160DB08A-00000000160DB0DC
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::target_entity(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  if ( this->target_entity_ )
    return this->target_entity_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 11826: range 00000000160DB0DE-00000000160DB1B8
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::mutable_target_entity(
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  if ( !this->target_entity_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->target_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->target_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->target_entity_);
  return this->target_entity_;
};

// Line 11856: range 00000000160DB1BA-00000000160DB209
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::gadget_damage_action_idx(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_damage_action_idx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_damage_action_idx_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gadget_damage_action_idx_);
  }
  return this->gadget_damage_action_idx_;
};

// Line 11860: range 00000000160DB20A-00000000160DB260
void __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::set_gadget_damage_action_idx(
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_damage_action_idx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_damage_action_idx_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_damage_action_idx_);
  }
  this->gadget_damage_action_idx_ = value;
};

// Line 11870: range 00000000160DB262-00000000160DB27F
const std::string *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::anim_event_id[abi:cxx11](
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->anim_event_id_);
};

// Line 11899: range 00000000160DB280-00000000160DB2AB
std::string *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::mutable_anim_event_id[abi:cxx11](
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->anim_event_id_, v1);
};

// Line 11923: range 00000000160DB2AC-00000000160DB2C9
const std::string *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::ability_name[abi:cxx11](
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->ability_name_);
};

// Line 11952: range 00000000160DB2CA-00000000160DB2F5
std::string *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::mutable_ability_name[abi:cxx11](
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->ability_name_, v1);
};

// Line 11976: range 00000000160DB2F6-00000000160DB313
const std::string *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::modifier_name[abi:cxx11](
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->modifier_name_);
};

// Line 12005: range 00000000160DB314-00000000160DB33F
std::string *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::mutable_modifier_name[abi:cxx11](
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->modifier_name_, v1);
};

// Line 12029: range 00000000160DB340-00000000160DB387
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::local_id(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->local_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->local_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->local_id_);
  }
  return this->local_id_;
};

// Line 12033: range 00000000160DB388-00000000160DB3D6
void __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::set_local_id(
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->local_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->local_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->local_id_);
  }
  this->local_id_ = value;
};

// Line 12043: range 00000000160DB3D8-00000000160DB3F5
const std::string *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::attack_tag[abi:cxx11](
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->attack_tag_);
};

// Line 12072: range 00000000160DB3F6-00000000160DB421
std::string *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::mutable_attack_tag[abi:cxx11](
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->attack_tag_, v1);
};

// Line 12093: range 00000000160DB422-00000000160DB478
bool __cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::has_ability_owner(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( this == proto_log::AntiCheatBodyQiandaoguaCheckFail::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_owner_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ability_owner_);
  return this->ability_owner_ != 0;
};

// Line 12100: range 00000000160DB47A-00000000160DB4CC
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::ability_owner(
        const proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_owner_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ability_owner_);
  if ( this->ability_owner_ )
    return this->ability_owner_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 12106: range 00000000160DB4CE-00000000160DB5A8
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyQiandaoguaCheckFail::mutable_ability_owner(
        proto_log::AntiCheatBodyQiandaoguaCheckFail *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->ability_owner_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ability_owner_);
  if ( !this->ability_owner_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->ability_owner_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->ability_owner_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_owner_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->ability_owner_);
  return this->ability_owner_;
};

// Line 12140: range 00000000160DB5AA-00000000160DB5F1
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyMouseMacroClientReport::param(
        const proto_log::AntiCheatBodyMouseMacroClientReport *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->param_);
  }
  return this->param_;
};

// Line 12144: range 00000000160DB5F2-00000000160DB640
void __cdecl proto_log::AntiCheatBodyMouseMacroClientReport::set_param(
        proto_log::AntiCheatBodyMouseMacroClientReport *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->param_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->param_);
  }
  this->param_ = value;
};

// Line 12158: range 00000000160DB642-00000000160DB67C
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::pivot_client_time(
        const proto_log::AntiCheatBodyClientTickTimeCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pivot_client_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pivot_client_time_);
  return this->pivot_client_time_;
};

// Line 12162: range 00000000160DB67E-00000000160DB6C1
void __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::set_pivot_client_time(
        proto_log::AntiCheatBodyClientTickTimeCheckFail *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pivot_client_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pivot_client_time_ = value;
};

// Line 12172: range 00000000160DB6C2-00000000160DB6FC
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::pivot_unix_time(
        const proto_log::AntiCheatBodyClientTickTimeCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pivot_unix_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->pivot_unix_time_);
  return this->pivot_unix_time_;
};

// Line 12176: range 00000000160DB6FE-00000000160DB741
void __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::set_pivot_unix_time(
        proto_log::AntiCheatBodyClientTickTimeCheckFail *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->pivot_unix_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->pivot_unix_time_ = value;
};

// Line 12186: range 00000000160DB742-00000000160DB77C
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::client_total_tick_time(
        const proto_log::AntiCheatBodyClientTickTimeCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->client_total_tick_time_);
  return this->client_total_tick_time_;
};

// Line 12190: range 00000000160DB77E-00000000160DB7C1
void __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::set_client_total_tick_time(
        proto_log::AntiCheatBodyClientTickTimeCheckFail *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_total_tick_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->client_total_tick_time_ = value;
};

// Line 12200: range 00000000160DB7C2-00000000160DB7FC
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::unix_time(
        const proto_log::AntiCheatBodyClientTickTimeCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->unix_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->unix_time_);
  return this->unix_time_;
};

// Line 12204: range 00000000160DB7FE-00000000160DB841
void __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::set_unix_time(
        proto_log::AntiCheatBodyClientTickTimeCheckFail *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->unix_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->unix_time_ = value;
};

// Line 12214: range 00000000160DB842-00000000160DB87C
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::total_tick_max_delay_time(
        const proto_log::AntiCheatBodyClientTickTimeCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_tick_max_delay_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->total_tick_max_delay_time_);
  return this->total_tick_max_delay_time_;
};

// Line 12218: range 00000000160DB87E-00000000160DB8C1
void __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::set_total_tick_max_delay_time(
        proto_log::AntiCheatBodyClientTickTimeCheckFail *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->total_tick_max_delay_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->total_tick_max_delay_time_ = value;
};

// Line 12228: range 00000000160DB8C2-00000000160DB8FC
google::protobuf::int64 __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::delta_server_time(
        const proto_log::AntiCheatBodyClientTickTimeCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_server_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->delta_server_time_);
  return this->delta_server_time_;
};

// Line 12232: range 00000000160DB8FE-00000000160DB941
void __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::set_delta_server_time(
        proto_log::AntiCheatBodyClientTickTimeCheckFail *const this,
        google::protobuf::int64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_server_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->delta_server_time_ = value;
};

// Line 12242: range 00000000160DB942-00000000160DB97C
google::protobuf::int64 __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::delta_client_time(
        const proto_log::AntiCheatBodyClientTickTimeCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_client_time_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->delta_client_time_);
  return this->delta_client_time_;
};

// Line 12246: range 00000000160DB97E-00000000160DB9C1
void __cdecl proto_log::AntiCheatBodyClientTickTimeCheckFail::set_delta_client_time(
        proto_log::AntiCheatBodyClientTickTimeCheckFail *const this,
        google::protobuf::int64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_client_time_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->delta_client_time_ = value;
};

// Line 12257: range 00000000160DB9C2-00000000160DBA18
bool __cdecl proto_log::AntiCheatBodyClientSgvCheckFail::has_entity_log(
        const proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  if ( this == proto_log::AntiCheatBodyClientSgvCheckFail::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  return this->entity_log_ != 0;
};

// Line 12264: range 00000000160DBA1A-00000000160DBA6C
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyClientSgvCheckFail::entity_log(
        const proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  if ( this->entity_log_ )
    return this->entity_log_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 12270: range 00000000160DBA6E-00000000160DBB48
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyClientSgvCheckFail::mutable_entity_log(
        proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  if ( !this->entity_log_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->entity_log_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  return this->entity_log_;
};

// Line 12300: range 00000000160DBB4A-00000000160DBB91
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientSgvCheckFail::entity_id(
        const proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->entity_id_);
  }
  return this->entity_id_;
};

// Line 12304: range 00000000160DBB92-00000000160DBBE0
void __cdecl proto_log::AntiCheatBodyClientSgvCheckFail::set_entity_id(
        proto_log::AntiCheatBodyClientSgvCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id_);
  }
  this->entity_id_ = value;
};

// Line 12314: range 00000000160DBBE2-00000000160DBBFF
const std::string *__cdecl proto_log::AntiCheatBodyClientSgvCheckFail::sgv[abi:cxx11](
        const proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->sgv_);
};

// Line 12343: range 00000000160DBC00-00000000160DBC2B
std::string *__cdecl proto_log::AntiCheatBodyClientSgvCheckFail::mutable_sgv[abi:cxx11](
        proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->sgv_, v1);
};

// Line 12367: range 00000000160DBC2C-00000000160DBC7B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientSgvCheckFail::last_enable_time(
        const proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_enable_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_enable_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_enable_time_);
  }
  return this->last_enable_time_;
};

// Line 12371: range 00000000160DBC7C-00000000160DBCD2
void __cdecl proto_log::AntiCheatBodyClientSgvCheckFail::set_last_enable_time(
        proto_log::AntiCheatBodyClientSgvCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_enable_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_enable_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_enable_time_);
  }
  this->last_enable_time_ = value;
};

// Line 12381: range 00000000160DBCD4-00000000160DBD1B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientSgvCheckFail::timeout_seconds(
        const proto_log::AntiCheatBodyClientSgvCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_seconds_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timeout_seconds_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->timeout_seconds_);
  }
  return this->timeout_seconds_;
};

// Line 12385: range 00000000160DBD1C-00000000160DBD6A
void __cdecl proto_log::AntiCheatBodyClientSgvCheckFail::set_timeout_seconds(
        proto_log::AntiCheatBodyClientSgvCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_seconds_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->timeout_seconds_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->timeout_seconds_);
  }
  this->timeout_seconds_ = value;
};

// Line 12396: range 00000000160DBD6C-00000000160DBDC2
bool __cdecl proto_log::AntiCheatBodyStaminaCheckFail::has_entity_log(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  if ( this == proto_log::AntiCheatBodyStaminaCheckFail::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  return this->entity_log_ != 0;
};

// Line 12403: range 00000000160DBDC4-00000000160DBE16
const proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyStaminaCheckFail::entity_log(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  if ( this->entity_log_ )
    return this->entity_log_;
  else
    return (const proto_log::EntityLog *)&proto_log::_EntityLog_default_instance_;
};

// Line 12409: range 00000000160DBE18-00000000160DBEF2
proto_log::EntityLog *__cdecl proto_log::AntiCheatBodyStaminaCheckFail::mutable_entity_log(
        proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  proto_log::EntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  if ( !this->entity_log_ )
  {
    v1 = (proto_log::EntityLog *)operator new(0x48uLL);
    proto_log::EntityLog::EntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->entity_log_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_log_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->entity_log_);
  return this->entity_log_;
};

// Line 12439: range 00000000160DBEF4-00000000160DBF3B
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyStaminaCheckFail::stamina(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->stamina_);
  }
  return this->stamina_;
};

// Line 12443: range 00000000160DBF3C-00000000160DBF8A
void __cdecl proto_log::AntiCheatBodyStaminaCheckFail::set_stamina(
        proto_log::AntiCheatBodyStaminaCheckFail *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stamina_);
  }
  this->stamina_ = value;
};

// Line 12453: range 00000000160DBF8C-00000000160DBFDB
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyStaminaCheckFail::change_type(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->change_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->change_type_);
  }
  return this->change_type_;
};

// Line 12457: range 00000000160DBFDC-00000000160DC032
void __cdecl proto_log::AntiCheatBodyStaminaCheckFail::set_change_type(
        proto_log::AntiCheatBodyStaminaCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->change_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->change_type_);
  }
  this->change_type_ = value;
};

// Line 12467: range 00000000160DC034-00000000160DC07B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyStaminaCheckFail::motion_state(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->motion_state_);
  }
  return this->motion_state_;
};

// Line 12471: range 00000000160DC07C-00000000160DC0CA
void __cdecl proto_log::AntiCheatBodyStaminaCheckFail::set_motion_state(
        proto_log::AntiCheatBodyStaminaCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->motion_state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->motion_state_);
  }
  this->motion_state_ = value;
};

// Line 12481: range 00000000160DC0CC-00000000160DC11B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyStaminaCheckFail::skill_id(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->skill_id_);
  }
  return this->skill_id_;
};

// Line 12485: range 00000000160DC11C-00000000160DC172
void __cdecl proto_log::AntiCheatBodyStaminaCheckFail::set_skill_id(
        proto_log::AntiCheatBodyStaminaCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_id_);
  }
  this->skill_id_ = value;
};

// Line 12495: range 00000000160DC174-00000000160DC191
const std::string *__cdecl proto_log::AntiCheatBodyStaminaCheckFail::ability_name[abi:cxx11](
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->ability_name_);
};

// Line 12524: range 00000000160DC192-00000000160DC1BD
std::string *__cdecl proto_log::AntiCheatBodyStaminaCheckFail::mutable_ability_name[abi:cxx11](
        proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->ability_name_, v1);
};

// Line 12548: range 00000000160DC1BE-00000000160DC1DB
const std::string *__cdecl proto_log::AntiCheatBodyStaminaCheckFail::modifier_name[abi:cxx11](
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->modifier_name_);
};

// Line 12577: range 00000000160DC1DC-00000000160DC207
std::string *__cdecl proto_log::AntiCheatBodyStaminaCheckFail::mutable_modifier_name[abi:cxx11](
        proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->modifier_name_, v1);
};

// Line 12601: range 00000000160DC208-00000000160DC24F
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyStaminaCheckFail::local_id(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->local_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->local_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->local_id_);
  }
  return this->local_id_;
};

// Line 12605: range 00000000160DC250-00000000160DC29E
void __cdecl proto_log::AntiCheatBodyStaminaCheckFail::set_local_id(
        proto_log::AntiCheatBodyStaminaCheckFail *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->local_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->local_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->local_id_);
  }
  this->local_id_ = value;
};

// Line 12615: range 00000000160DC2A0-00000000160DC2EF
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyStaminaCheckFail::prop_change_reason(
        const proto_log::AntiCheatBodyStaminaCheckFail *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->prop_change_reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prop_change_reason_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->prop_change_reason_);
  }
  return this->prop_change_reason_;
};

// Line 12619: range 00000000160DC2F0-00000000160DC346
void __cdecl proto_log::AntiCheatBodyStaminaCheckFail::set_prop_change_reason(
        proto_log::AntiCheatBodyStaminaCheckFail *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->prop_change_reason_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prop_change_reason_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->prop_change_reason_);
  }
  this->prop_change_reason_ = value;
};

// Line 12633: range 00000000160DC348-00000000160DC38F
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientFightReport::cheat_type(
        const proto_log::AntiCheatBodyClientFightReport *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cheat_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cheat_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cheat_type_);
  }
  return this->cheat_type_;
};

// Line 12637: range 00000000160DC390-00000000160DC3DE
void __cdecl proto_log::AntiCheatBodyClientFightReport::set_cheat_type(
        proto_log::AntiCheatBodyClientFightReport *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cheat_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cheat_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cheat_type_);
  }
  this->cheat_type_ = value;
};

// Line 12647: range 00000000160DC3E0-00000000160DC42F
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientFightReport::cheat_count(
        const proto_log::AntiCheatBodyClientFightReport *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cheat_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cheat_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cheat_count_);
  }
  return this->cheat_count_;
};

// Line 12651: range 00000000160DC430-00000000160DC486
void __cdecl proto_log::AntiCheatBodyClientFightReport::set_cheat_count(
        proto_log::AntiCheatBodyClientFightReport *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cheat_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cheat_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cheat_count_);
  }
  this->cheat_count_ = value;
};

// Line 12665: range 00000000160DC488-00000000160DC4CF
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyClientProtoError::proto_error_type(
        const proto_log::AntiCheatBodyClientProtoError *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_error_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->proto_error_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->proto_error_type_);
  }
  return this->proto_error_type_;
};

// Line 12669: range 00000000160DC4D0-00000000160DC51E
void __cdecl proto_log::AntiCheatBodyClientProtoError::set_proto_error_type(
        proto_log::AntiCheatBodyClientProtoError *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->proto_error_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->proto_error_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->proto_error_type_);
  }
  this->proto_error_type_ = value;
};

// Line 12683: range 00000000160DC520-00000000160DC567
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyUnionExceedFreq::union_notify_freq(
        const proto_log::AntiCheatBodyUnionExceedFreq *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->union_notify_freq_);
  }
  return this->union_notify_freq_;
};

// Line 12687: range 00000000160DC568-00000000160DC5B6
void __cdecl proto_log::AntiCheatBodyUnionExceedFreq::set_union_notify_freq(
        proto_log::AntiCheatBodyUnionExceedFreq *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->union_notify_freq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->union_notify_freq_);
  }
  this->union_notify_freq_ = value;
};

// Line 12697: range 00000000160DC5B8-00000000160DC607
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyUnionExceedFreq::combat_notify_freq(
        const proto_log::AntiCheatBodyUnionExceedFreq *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_notify_freq_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_notify_freq_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->combat_notify_freq_);
  }
  return this->combat_notify_freq_;
};

// Line 12701: range 00000000160DC608-00000000160DC65E
void __cdecl proto_log::AntiCheatBodyUnionExceedFreq::set_combat_notify_freq(
        proto_log::AntiCheatBodyUnionExceedFreq *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_notify_freq_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_notify_freq_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->combat_notify_freq_);
  }
  this->combat_notify_freq_ = value;
};

// Line 12711: range 00000000160DC660-00000000160DC6A7
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyUnionExceedFreq::sub_total_union_freq(
        const proto_log::AntiCheatBodyUnionExceedFreq *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_total_union_freq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_total_union_freq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sub_total_union_freq_);
  }
  return this->sub_total_union_freq_;
};

// Line 12715: range 00000000160DC6A8-00000000160DC6F6
void __cdecl proto_log::AntiCheatBodyUnionExceedFreq::set_sub_total_union_freq(
        proto_log::AntiCheatBodyUnionExceedFreq *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_total_union_freq_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_total_union_freq_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_total_union_freq_);
  }
  this->sub_total_union_freq_ = value;
};

// Line 12725: range 00000000160DC6F8-00000000160DC747
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyUnionExceedFreq::cheat_count(
        const proto_log::AntiCheatBodyUnionExceedFreq *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cheat_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cheat_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cheat_count_);
  }
  return this->cheat_count_;
};

// Line 12729: range 00000000160DC748-00000000160DC79E
void __cdecl proto_log::AntiCheatBodyUnionExceedFreq::set_cheat_count(
        proto_log::AntiCheatBodyUnionExceedFreq *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cheat_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cheat_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cheat_count_);
  }
  this->cheat_count_ = value;
};

// Line 12739: range 00000000160DC7A0-00000000160DC7E8
bool __cdecl proto_log::AntiCheatBodyUnionExceedFreq::is_kick(
        const proto_log::AntiCheatBodyUnionExceedFreq *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_kick_);
  return this->is_kick_;
};

// Line 12743: range 00000000160DC7EA-00000000160DC83B
void __cdecl proto_log::AntiCheatBodyUnionExceedFreq::set_is_kick(
        proto_log::AntiCheatBodyUnionExceedFreq *const this,
        bool value)
{
  if ( *(char *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_kick_);
  this->is_kick_ = value;
};

// Line 12757: range 00000000160DC83C-00000000160DC876
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyReliquaryUpgradeError::guid(
        const proto_log::AntiCheatBodyReliquaryUpgradeError *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->guid_);
  return this->guid_;
};

// Line 12761: range 00000000160DC878-00000000160DC8BB
void __cdecl proto_log::AntiCheatBodyReliquaryUpgradeError::set_guid(
        proto_log::AntiCheatBodyReliquaryUpgradeError *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->guid_ = value;
};

// Line 12771: range 00000000160DC8BC-00000000160DC903
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyReliquaryUpgradeError::item_id(
        const proto_log::AntiCheatBodyReliquaryUpgradeError *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->item_id_);
  }
  return this->item_id_;
};

// Line 12775: range 00000000160DC904-00000000160DC952
void __cdecl proto_log::AntiCheatBodyReliquaryUpgradeError::set_item_id(
        proto_log::AntiCheatBodyReliquaryUpgradeError *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id_);
  }
  this->item_id_ = value;
};

// Line 12785: range 00000000160DC954-00000000160DC9A3
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyReliquaryUpgradeError::level(
        const proto_log::AntiCheatBodyReliquaryUpgradeError *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 12789: range 00000000160DC9A4-00000000160DC9FA
void __cdecl proto_log::AntiCheatBodyReliquaryUpgradeError::set_level(
        proto_log::AntiCheatBodyReliquaryUpgradeError *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = value;
};

// Line 12803: range 00000000160DC9FC-00000000160DCA43
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::cmd_id(
        const proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cmd_id_);
  }
  return this->cmd_id_;
};

// Line 12807: range 00000000160DCA44-00000000160DCA92
void __cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::set_cmd_id(
        proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cmd_id_);
  }
  this->cmd_id_ = value;
};

// Line 12817: range 00000000160DCA94-00000000160DCAB1
const std::string *__cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::cmd_name[abi:cxx11](
        const proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->cmd_name_);
};

// Line 12846: range 00000000160DCAB2-00000000160DCADD
std::string *__cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::mutable_cmd_name[abi:cxx11](
        proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->cmd_name_, v1);
};

// Line 12870: range 00000000160DCADE-00000000160DCB2D
google::protobuf::int32 __cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::retcode(
        const proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->retcode_);
  }
  return this->retcode_;
};

// Line 12874: range 00000000160DCB2E-00000000160DCB84
void __cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::set_retcode(
        proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->retcode_);
  }
  this->retcode_ = value;
};

// Line 12884: range 00000000160DCB86-00000000160DCBCD
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::packet_cost_time_us(
        const proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_cost_time_us_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_cost_time_us_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->packet_cost_time_us_);
  }
  return this->packet_cost_time_us_;
};

// Line 12888: range 00000000160DCBCE-00000000160DCC1C
void __cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::set_packet_cost_time_us(
        proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_cost_time_us_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_cost_time_us_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->packet_cost_time_us_);
  }
  this->packet_cost_time_us_ = value;
};

// Line 12898: range 00000000160DCC1E-00000000160DCC6D
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::cost_time_limit_us(
        const proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_limit_us_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_time_limit_us_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cost_time_limit_us_);
  }
  return this->cost_time_limit_us_;
};

// Line 12902: range 00000000160DCC6E-00000000160DCCC4
void __cdecl proto_log::AntiCheatBodyPacketCostTimeExceedLimit::set_cost_time_limit_us(
        proto_log::AntiCheatBodyPacketCostTimeExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_limit_us_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_time_limit_us_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cost_time_limit_us_);
  }
  this->cost_time_limit_us_ = value;
};

// Line 12916: range 00000000160DCCC6-00000000160DCD0D
google::protobuf::uint32 __cdecl proto_log::PacketCountInfoLog::cmd_id(const proto_log::PacketCountInfoLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cmd_id_);
  }
  return this->cmd_id_;
};

// Line 12920: range 00000000160DCD0E-00000000160DCD5C
void __cdecl proto_log::PacketCountInfoLog::set_cmd_id(
        proto_log::PacketCountInfoLog *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cmd_id_);
  }
  this->cmd_id_ = value;
};

// Line 12930: range 00000000160DCD5E-00000000160DCD7B
const std::string *__cdecl proto_log::PacketCountInfoLog::cmd_name[abi:cxx11](
        const proto_log::PacketCountInfoLog *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->cmd_name_);
};

// Line 12959: range 00000000160DCD7C-00000000160DCDA7
std::string *__cdecl proto_log::PacketCountInfoLog::mutable_cmd_name[abi:cxx11](
        proto_log::PacketCountInfoLog *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->cmd_name_, v1);
};

// Line 12983: range 00000000160DCDA8-00000000160DCDF7
google::protobuf::uint32 __cdecl proto_log::PacketCountInfoLog::cmd_count(
        const proto_log::PacketCountInfoLog *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cmd_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cmd_count_);
  }
  return this->cmd_count_;
};

// Line 12987: range 00000000160DCDF8-00000000160DCE4E
void __cdecl proto_log::PacketCountInfoLog::set_cmd_count(
        proto_log::PacketCountInfoLog *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cmd_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cmd_count_);
  }
  this->cmd_count_ = value;
};

// Line 13001: range 00000000160DCE50-00000000160DCE97
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::packet_count(
        const proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->packet_count_);
  }
  return this->packet_count_;
};

// Line 13005: range 00000000160DCE98-00000000160DCEE6
void __cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::set_packet_count(
        proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->packet_count_);
  }
  this->packet_count_ = value;
};

// Line 13015: range 00000000160DCEE8-00000000160DCF37
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::time_interval_ms(
        const proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->time_interval_ms_);
  }
  return this->time_interval_ms_;
};

// Line 13019: range 00000000160DCF38-00000000160DCF8E
void __cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::set_time_interval_ms(
        proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->time_interval_ms_);
  }
  this->time_interval_ms_ = value;
};

// Line 13026: range 00000000160DCF90-00000000160DCFAD
int __cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::packet_list_size(
        const proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this)
{
  return google::protobuf::RepeatedPtrField<proto_log::PacketCountInfoLog>::size(&this->packet_list_);
};

// Line 13032: range 00000000160DCFAE-00000000160DCFD3
const proto_log::PacketCountInfoLog *__cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::packet_list(
        const proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this,
        int index)
{
  return google::protobuf::RepeatedPtrField<proto_log::PacketCountInfoLog>::Get(&this->packet_list_, index);
};

// Line 13040: range 00000000160DCFD4-00000000160DCFF1
proto_log::PacketCountInfoLog *__cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::add_packet_list(
        proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this)
{
  return google::protobuf::RepeatedPtrField<proto_log::PacketCountInfoLog>::Add(&this->packet_list_);
};

// Line 13059: range 00000000160DCFF2-00000000160DD039
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::packet_recv_max_count(
        const proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->packet_recv_max_count_);
  }
  return this->packet_recv_max_count_;
};

// Line 13063: range 00000000160DD03A-00000000160DD088
void __cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::set_packet_recv_max_count(
        proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->packet_recv_max_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->packet_recv_max_count_);
  }
  this->packet_recv_max_count_ = value;
};

// Line 13073: range 00000000160DD08A-00000000160DD0D9
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::packet_recv_check_interval_ms(
        const proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_check_interval_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->packet_recv_check_interval_ms_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->packet_recv_check_interval_ms_);
  }
  return this->packet_recv_check_interval_ms_;
};

// Line 13077: range 00000000160DD0DA-00000000160DD130
void __cdecl proto_log::AntiCheatBodyRecvPacketFreqExceedLimit::set_packet_recv_check_interval_ms(
        proto_log::AntiCheatBodyRecvPacketFreqExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_recv_check_interval_ms_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->packet_recv_check_interval_ms_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->packet_recv_check_interval_ms_);
  }
  this->packet_recv_check_interval_ms_ = value;
};

// Line 13091: range 00000000160DD132-00000000160DD179
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::cmd_id(
        const proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cmd_id_);
  }
  return this->cmd_id_;
};

// Line 13095: range 00000000160DD17A-00000000160DD1C8
void __cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::set_cmd_id(
        proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cmd_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cmd_id_);
  }
  this->cmd_id_ = value;
};

// Line 13105: range 00000000160DD1CA-00000000160DD1E7
const std::string *__cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::cmd_name[abi:cxx11](
        const proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->cmd_name_);
};

// Line 13134: range 00000000160DD1E8-00000000160DD213
std::string *__cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::mutable_cmd_name[abi:cxx11](
        proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->cmd_name_, v1);
};

// Line 13158: range 00000000160DD214-00000000160DD263
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::packet_count(
        const proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->packet_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->packet_count_);
  }
  return this->packet_count_;
};

// Line 13162: range 00000000160DD264-00000000160DD2BA
void __cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::set_packet_count(
        proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->packet_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->packet_count_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->packet_count_);
  }
  this->packet_count_ = value;
};

// Line 13172: range 00000000160DD2BC-00000000160DD303
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::time_interval_ms(
        const proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->time_interval_ms_);
  }
  return this->time_interval_ms_;
};

// Line 13176: range 00000000160DD304-00000000160DD352
void __cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::set_time_interval_ms(
        proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_interval_ms_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_interval_ms_);
  }
  this->time_interval_ms_ = value;
};

// Line 13186: range 00000000160DD354-00000000160DD3A5
float __cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::config_freq_limit(
        const proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_freq_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_freq_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_freq_limit_);
  }
  return this->config_freq_limit_;
};

// Line 13190: range 00000000160DD3A6-00000000160DD402
void __cdecl proto_log::AntiCheatBodySinglePacketFreqExceedLimit::set_config_freq_limit(
        proto_log::AntiCheatBodySinglePacketFreqExceedLimit *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_freq_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_freq_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_freq_limit_);
  }
  this->config_freq_limit_ = value;
};

// Line 13204: range 00000000160DD404-00000000160DD44D
float __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::min_distance(
        const proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->min_distance_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_distance_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->min_distance_);
  }
  return this->min_distance_;
};

// Line 13208: range 00000000160DD44E-00000000160DD4A2
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::set_min_distance(
        proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->min_distance_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_distance_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_distance_);
  }
  this->min_distance_ = value;
};

// Line 13218: range 00000000160DD4A4-00000000160DD4F5
float __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::max_distance(
        const proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_distance_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_distance_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_distance_);
  }
  return this->max_distance_;
};

// Line 13222: range 00000000160DD4F6-00000000160DD552
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::set_max_distance(
        proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->max_distance_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_distance_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_distance_);
  }
  this->max_distance_ = value;
};

// Line 13232: range 00000000160DD554-00000000160DD59D
float __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::check_distance(
        const proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_distance_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_distance_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->check_distance_);
  }
  return this->check_distance_;
};

// Line 13236: range 00000000160DD59E-00000000160DD5F2
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::set_check_distance(
        proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_distance_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_distance_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->check_distance_);
  }
  this->check_distance_ = value;
};

// Line 13246: range 00000000160DD5F4-00000000160DD643
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::record_time(
        const proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->record_time_);
  }
  return this->record_time_;
};

// Line 13250: range 00000000160DD644-00000000160DD69A
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::set_record_time(
        proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->record_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->record_time_);
  }
  this->record_time_ = value;
};

// Line 13260: range 00000000160DD69C-00000000160DD6E3
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::record_count(
        const proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->record_count_);
  }
  return this->record_count_;
};

// Line 13264: range 00000000160DD6E4-00000000160DD732
void __cdecl proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance::set_record_count(
        proto_log::AntiCheatBodyGadgetInteractBeyondCheckDistance *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->record_count_);
  }
  this->record_count_ = value;
};

// Line 13278: range 00000000160DD734-00000000160DD77B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::use_type(
        const proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->use_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->use_type_);
  }
  return this->use_type_;
};

// Line 13282: range 00000000160DD77C-00000000160DD7CA
void __cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::set_use_type(
        proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->use_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->use_type_);
  }
  this->use_type_ = value;
};

// Line 13292: range 00000000160DD7CC-00000000160DD81B
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::lua_shell_id(
        const proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->lua_shell_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lua_shell_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->lua_shell_id_);
  }
  return this->lua_shell_id_;
};

// Line 13296: range 00000000160DD81C-00000000160DD872
void __cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::set_lua_shell_id(
        proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->lua_shell_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lua_shell_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lua_shell_id_);
  }
  this->lua_shell_id_ = value;
};

// Line 13306: range 00000000160DD874-00000000160DD8BC
bool __cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::is_kick(
        const proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_kick_);
  return this->is_kick_;
};

// Line 13310: range 00000000160DD8BE-00000000160DD90F
void __cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::set_is_kick(
        proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *const this,
        bool value)
{
  if ( *(char *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_kick_);
  this->is_kick_ = value;
};

// Line 13320: range 00000000160DD910-00000000160DD92D
const std::string *__cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::check_json_key[abi:cxx11](
        const proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->check_json_key_);
};

// Line 13349: range 00000000160DD92E-00000000160DD959
std::string *__cdecl proto_log::AntiCheatBodyLuaShellClientNotifyTimeout::mutable_check_json_key[abi:cxx11](
        proto_log::AntiCheatBodyLuaShellClientNotifyTimeout *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->check_json_key_, v1);
};

// Line 13377: range 00000000160DD95A-00000000160DD994
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::check_interval_ms(
        const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_interval_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->check_interval_ms_);
  return this->check_interval_ms_;
};

// Line 13381: range 00000000160DD996-00000000160DD9D9
void __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::set_check_interval_ms(
        proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_interval_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->check_interval_ms_ = value;
};

// Line 13391: range 00000000160DD9DA-00000000160DDA14
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::config_check_interval_ms(
        const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_check_interval_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->config_check_interval_ms_);
  return this->config_check_interval_ms_;
};

// Line 13395: range 00000000160DDA16-00000000160DDA59
void __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::set_config_check_interval_ms(
        proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_check_interval_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->config_check_interval_ms_ = value;
};

// Line 13405: range 00000000160DDA5A-00000000160DDA94
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::config_cost_time_percent(
        const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_cost_time_percent_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->config_cost_time_percent_);
  return this->config_cost_time_percent_;
};

// Line 13409: range 00000000160DDA96-00000000160DDAD9
void __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::set_config_cost_time_percent(
        proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_cost_time_percent_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->config_cost_time_percent_ = value;
};

// Line 13419: range 00000000160DDADA-00000000160DDB14
google::protobuf::uint64 __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::accumulate_packet_cost_time_ms(
        const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->accumulate_packet_cost_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->accumulate_packet_cost_time_ms_);
  return this->accumulate_packet_cost_time_ms_;
};

// Line 13423: range 00000000160DDB16-00000000160DDB59
void __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::set_accumulate_packet_cost_time_ms(
        proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this,
        google::protobuf::uint64 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->accumulate_packet_cost_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->accumulate_packet_cost_time_ms_ = value;
};

// Line 13433: range 00000000160DDB5A-00000000160DDBA1
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::config_is_enable_kick(
        const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_is_enable_kick_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_is_enable_kick_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->config_is_enable_kick_);
  }
  return this->config_is_enable_kick_;
};

// Line 13437: range 00000000160DDBA2-00000000160DDBF0
void __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::set_config_is_enable_kick(
        proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_is_enable_kick_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_is_enable_kick_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_is_enable_kick_);
  }
  this->config_is_enable_kick_ = value;
};

// Line 13447: range 00000000160DDBF2-00000000160DDC41
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::config_kick_time_percent(
        const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_kick_time_percent_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_kick_time_percent_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->config_kick_time_percent_);
  }
  return this->config_kick_time_percent_;
};

// Line 13451: range 00000000160DDC42-00000000160DDC98
void __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::set_config_kick_time_percent(
        proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->config_kick_time_percent_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_kick_time_percent_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_kick_time_percent_);
  }
  this->config_kick_time_percent_ = value;
};

// Line 13461: range 00000000160DDC9A-00000000160DDCE2
bool __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::is_kick(
        const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_kick_);
  return this->is_kick_;
};

// Line 13465: range 00000000160DDCE4-00000000160DDD35
void __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::set_is_kick(
        proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this,
        bool value)
{
  if ( *(char *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_kick_);
  this->is_kick_ = value;
};

// Line 13475: range 00000000160DDD36-00000000160DDD85
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::trigger_kick_count(
        const proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_kick_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_kick_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->trigger_kick_count_);
  }
  return this->trigger_kick_count_;
};

// Line 13479: range 00000000160DDD86-00000000160DDDDC
void __cdecl proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit::set_trigger_kick_count(
        proto_log::AntiCheatBodyPacketCostTimePercentExceedLimit *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_kick_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_kick_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_kick_count_);
  }
  this->trigger_kick_count_ = value;
};

// Line 13493: range 00000000160DDDDE-00000000160DDE25
google::protobuf::int32 __cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::check_result(
        const proto_log::AntiCheatBodySecurityLibraryMd5Error *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->check_result_);
  }
  return this->check_result_;
};

// Line 13497: range 00000000160DDE26-00000000160DDE74
void __cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::set_check_result(
        proto_log::AntiCheatBodySecurityLibraryMd5Error *const this,
        google::protobuf::int32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->check_result_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->check_result_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->check_result_);
  }
  this->check_result_ = value;
};

// Line 13507: range 00000000160DDE76-00000000160DDEC3
bool __cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::is_kick(
        const proto_log::AntiCheatBodySecurityLibraryMd5Error *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_kick_);
  }
  return this->is_kick_;
};

// Line 13511: range 00000000160DDEC4-00000000160DDF1A
void __cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::set_is_kick(
        proto_log::AntiCheatBodySecurityLibraryMd5Error *const this,
        bool value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_kick_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_kick_);
  }
  this->is_kick_ = value;
};

// Line 13521: range 00000000160DDF1C-00000000160DDF39
const std::string *__cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::report_version_str[abi:cxx11](
        const proto_log::AntiCheatBodySecurityLibraryMd5Error *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->report_version_str_);
};

// Line 13550: range 00000000160DDF3A-00000000160DDF65
std::string *__cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::mutable_report_version_str[abi:cxx11](
        proto_log::AntiCheatBodySecurityLibraryMd5Error *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->report_version_str_, v1);
};

// Line 13574: range 00000000160DDF66-00000000160DDF83
const std::string *__cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::report_md5_str[abi:cxx11](
        const proto_log::AntiCheatBodySecurityLibraryMd5Error *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->report_md5_str_);
};

// Line 13603: range 00000000160DDF84-00000000160DDFAF
std::string *__cdecl proto_log::AntiCheatBodySecurityLibraryMd5Error::mutable_report_md5_str[abi:cxx11](
        proto_log::AntiCheatBodySecurityLibraryMd5Error *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->report_md5_str_, v1);
};

// Line 13628: range 00000000160DDFB0-00000000160DE006
bool __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::has_attack_entity(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  if ( this == proto_log::AntiCheatBodyAvatarAttackAvatarDamage::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->attack_entity_);
  return this->attack_entity_ != 0;
};

// Line 13635: range 00000000160DE008-00000000160DE05A
const proto_log::AttackEntityLog *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::attack_entity(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->attack_entity_);
  if ( this->attack_entity_ )
    return this->attack_entity_;
  else
    return (const proto_log::AttackEntityLog *)&proto_log::_AttackEntityLog_default_instance_;
};

// Line 13641: range 00000000160DE05C-00000000160DE136
proto_log::AttackEntityLog *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::mutable_attack_entity(
        proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  proto_log::AttackEntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->attack_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->attack_entity_);
  if ( !this->attack_entity_ )
  {
    v1 = (proto_log::AttackEntityLog *)operator new(0x38uLL);
    proto_log::AttackEntityLog::AttackEntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->attack_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->attack_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->attack_entity_);
  return this->attack_entity_;
};

// Line 13668: range 00000000160DE138-00000000160DE18E
bool __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::has_defense_entity(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  if ( this == proto_log::AntiCheatBodyAvatarAttackAvatarDamage::internal_default_instance() )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->defense_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->defense_entity_);
  return this->defense_entity_ != 0;
};

// Line 13675: range 00000000160DE190-00000000160DE1E2
const proto_log::AttackEntityLog *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::defense_entity(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->defense_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->defense_entity_);
  if ( this->defense_entity_ )
    return this->defense_entity_;
  else
    return (const proto_log::AttackEntityLog *)&proto_log::_AttackEntityLog_default_instance_;
};

// Line 13681: range 00000000160DE1E4-00000000160DE2BE
proto_log::AttackEntityLog *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::mutable_defense_entity(
        proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  proto_log::AttackEntityLog *v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->defense_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->defense_entity_);
  if ( !this->defense_entity_ )
  {
    v1 = (proto_log::AttackEntityLog *)operator new(0x38uLL);
    proto_log::AttackEntityLog::AttackEntityLog(v1);
    if ( *(_BYTE *)(((unsigned __int64)&this->defense_entity_ >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->defense_entity_ = v1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->defense_entity_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->defense_entity_);
  return this->defense_entity_;
};

// Line 13711: range 00000000160DE2C0-00000000160DE2DD
const std::string *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::attack_tag[abi:cxx11](
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->attack_tag_);
};

// Line 13740: range 00000000160DE2DE-00000000160DE309
std::string *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::mutable_attack_tag[abi:cxx11](
        proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->attack_tag_, v1);
};

// Line 13764: range 00000000160DE30A-00000000160DE327
const std::string *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::ability_name[abi:cxx11](
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->ability_name_);
};

// Line 13793: range 00000000160DE328-00000000160DE353
std::string *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::mutable_ability_name[abi:cxx11](
        proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->ability_name_, v1);
};

// Line 13817: range 00000000160DE354-00000000160DE371
const std::string *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::modifier_name[abi:cxx11](
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->modifier_name_);
};

// Line 13846: range 00000000160DE372-00000000160DE39D
std::string *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::mutable_modifier_name[abi:cxx11](
        proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->modifier_name_, v1);
};

// Line 13870: range 00000000160DE39E-00000000160DE3E5
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::target_type(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->target_type_);
  }
  return this->target_type_;
};

// Line 13874: range 00000000160DE3E6-00000000160DE434
void __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_target_type(
        proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type_);
  }
  this->target_type_ = value;
};

// Line 13884: range 00000000160DE436-00000000160DE453
const std::string *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::anim_event_id[abi:cxx11](
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  return google::protobuf::internal::ArenaStringPtr::GetNoArena[abi:cxx11](&this->anim_event_id_);
};

// Line 13913: range 00000000160DE454-00000000160DE47F
std::string *__cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::mutable_anim_event_id[abi:cxx11](
        proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  const std::string *v1; // rax

  v1 = google::protobuf::internal::GetEmptyStringAlreadyInited[abi:cxx11]();
  return google::protobuf::internal::ArenaStringPtr::MutableNoArena(&this->anim_event_id_, v1);
};

// Line 13937: range 00000000160DE480-00000000160DE4D1
float __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::client_damage(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_damage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_damage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->client_damage_);
  }
  return this->client_damage_;
};

// Line 13941: range 00000000160DE4D2-00000000160DE52E
void __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_client_damage(
        proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_damage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_damage_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_damage_);
  }
  this->client_damage_ = value;
};

// Line 13951: range 00000000160DE530-00000000160DE579
float __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::ori_server_damage(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ori_server_damage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ori_server_damage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ori_server_damage_);
  }
  return this->ori_server_damage_;
};

// Line 13955: range 00000000160DE57A-00000000160DE5CE
void __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_ori_server_damage(
        proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ori_server_damage_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ori_server_damage_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ori_server_damage_);
  }
  this->ori_server_damage_ = value;
};

// Line 13965: range 00000000160DE5D0-00000000160DE621
float __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::final_server_damage(
        const proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->final_server_damage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_server_damage_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->final_server_damage_);
  }
  return this->final_server_damage_;
};

// Line 13969: range 00000000160DE622-00000000160DE67E
void __cdecl proto_log::AntiCheatBodyAvatarAttackAvatarDamage::set_final_server_damage(
        proto_log::AntiCheatBodyAvatarAttackAvatarDamage *const this,
        float value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->final_server_damage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_server_damage_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->final_server_damage_);
  }
  this->final_server_damage_ = value;
};

// Line 13983: range 00000000160DE680-00000000160DE6C7
google::protobuf::uint32 __cdecl proto_log::AntiCheatBodyForbidLogin::reason(
        const proto_log::AntiCheatBodyForbidLogin *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reason_);
  }
  return this->reason_;
};

// Line 13987: range 00000000160DE6C8-00000000160DE716
void __cdecl proto_log::AntiCheatBodyForbidLogin::set_reason(
        proto_log::AntiCheatBodyForbidLogin *const this,
        google::protobuf::uint32 value)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason_);
  }
  this->reason_ = value;
};
