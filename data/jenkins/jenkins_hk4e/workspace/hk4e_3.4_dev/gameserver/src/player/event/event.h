// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/event/event.h

// Line 30: range 00000000131D33D6-00000000131D3427
void __cdecl BaseEvent::BaseEvent(BaseEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<BaseEvent>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseEvent>);
  v2 = (int (**)(...))(&`vtable for'BaseEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 33: range 00000000131D3428-00000000131D3479
void __cdecl BaseEvent::~BaseEvent(BaseEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::enable_shared_from_this<BaseEvent>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseEvent>);
};

// Line 33: range 00000000131D347A-00000000131D34A4
void __cdecl BaseEvent::~BaseEvent(BaseEvent *const this)
{
  BaseEvent::~BaseEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 39: range 00000000143FBE22-00000000143FBEAF
// local variable allocation has failed, the output may be wrong!
void __cdecl StartQuestEvent::StartQuestEvent(StartQuestEvent *const this, uint32_t _quest_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'StartQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&_quest_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id, *(_QWORD *)&_quest_id, &this->quest_id);
  }
  this->quest_id = _quest_id;
};

// Line 43: range 0000000013F4CCDD-0000000013F4CD00
InternalPlayerEventType __cdecl getInternalPlayerEventType<AbilityAvatarSkillStartEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AbilityAvatarSkillStartEvent);
  return v1;
};

// Line 43: range 0000000014A6F6B5-0000000014A6F6D8
InternalPlayerEventType __cdecl getInternalPlayerEventType<AbilityStatePassTimeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AbilityStatePassTimeEvent);
  return v1;
};

// Line 43: range 000000001525DEAB-000000001525DECE
InternalPlayerEventType __cdecl getInternalPlayerEventType<AccelerateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AccelerateEvent);
  return v1;
};

// Line 43: range 0000000014A778DF-0000000014A77902
InternalPlayerEventType __cdecl getInternalPlayerEventType<ActivityChannellerSlabFinishAllCampEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ActivityChannellerSlabFinishAllCampEvent);
  return v1;
};

// Line 43: range 0000000014A77B79-0000000014A77B9C
InternalPlayerEventType __cdecl getInternalPlayerEventType<ActivityChannellerSlabFinishAllOneoffDungeonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(
    &v1,
    (const std::type_info *)&`typeinfo for'ActivityChannellerSlabFinishAllOneoffDungeonEvent);
  return v1;
};

// Line 43: range 00000000172C914F-00000000172C9172
InternalPlayerEventType __cdecl getInternalPlayerEventType<ActivityCondExpireEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ActivityCondExpireEvent);
  return v1;
};

// Line 43: range 00000000172C8B5B-00000000172C8B7E
InternalPlayerEventType __cdecl getInternalPlayerEventType<ActivityCondMeetEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ActivityCondMeetEvent);
  return v1;
};

// Line 43: range 0000000014A6A707-0000000014A6A72A
InternalPlayerEventType __cdecl getInternalPlayerEventType<ActivityExpeditionFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ActivityExpeditionFinishEvent);
  return v1;
};

// Line 43: range 0000000016704F83-0000000016704FA6
InternalPlayerEventType __cdecl getInternalPlayerEventType<ActivityScheduleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ActivityScheduleEvent);
  return v1;
};

// Line 43: range 00000000163A8D3F-00000000163A8D62
InternalPlayerEventType __cdecl getInternalPlayerEventType<ActivityScoreExceedValueEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ActivityScoreExceedValueEvent);
  return v1;
};

// Line 43: range 0000000013F50E59-0000000013F50E7C
InternalPlayerEventType __cdecl getInternalPlayerEventType<ActivityTriggerQuestEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ActivityTriggerQuestEvent);
  return v1;
};

// Line 43: range 0000000013F57981-0000000013F579A4
InternalPlayerEventType __cdecl getInternalPlayerEventType<ActivityTriggerUpdateQuestEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ActivityTriggerUpdateQuestEvent);
  return v1;
};

// Line 43: range 0000000013F58B5D-0000000013F58B80
InternalPlayerEventType __cdecl getInternalPlayerEventType<AranaraCollectionStateChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AranaraCollectionStateChangeEvent);
  return v1;
};

// Line 43: range 00000000172BFFB3-00000000172BFFD6
InternalPlayerEventType __cdecl getInternalPlayerEventType<AvatarCosumeChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AvatarCosumeChangeEvent);
  return v1;
};

// Line 43: range 0000000016DE06D6-0000000016DE06F9
InternalPlayerEventType __cdecl getInternalPlayerEventType<AvatarDieEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AvatarDieEvent);
  return v1;
};

// Line 43: range 0000000014A68FE5-0000000014A69008
InternalPlayerEventType __cdecl getInternalPlayerEventType<AvatarExpeditionFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AvatarExpeditionFinishEvent);
  return v1;
};

// Line 43: range 0000000014A69C9F-0000000014A69CC2
InternalPlayerEventType __cdecl getInternalPlayerEventType<AvatarExpeditionStartEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AvatarExpeditionStartEvent);
  return v1;
};

// Line 43: range 0000000014A65E2D-0000000014A65E50
InternalPlayerEventType __cdecl getInternalPlayerEventType<AvatarLevelupEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AvatarLevelupEvent);
  return v1;
};

// Line 43: range 0000000014A660C7-0000000014A660EA
InternalPlayerEventType __cdecl getInternalPlayerEventType<AvatarPromoteEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AvatarPromoteEvent);
  return v1;
};

// Line 43: range 0000000014A67407-0000000014A6742A
InternalPlayerEventType __cdecl getInternalPlayerEventType<AvatarSkillOrProudSkillLevelupEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'AvatarSkillOrProudSkillLevelupEvent);
  return v1;
};

// Line 43: range 0000000013F4FC7D-0000000013F4FCA0
InternalPlayerEventType __cdecl getInternalPlayerEventType<BargainFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BargainFinishEvent);
  return v1;
};

// Line 43: range 00000000163AF8FF-00000000163AF922
InternalPlayerEventType __cdecl getInternalPlayerEventType<BartenderChallengeModuleLevelScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BartenderChallengeModuleLevelScoreEvent);
  return v1;
};

// Line 43: range 00000000163AF665-00000000163AF688
InternalPlayerEventType __cdecl getInternalPlayerEventType<BartenderFinishStoryModuleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BartenderFinishStoryModuleEvent);
  return v1;
};

// Line 43: range 00000000163AFB99-00000000163AFBBC
InternalPlayerEventType __cdecl getInternalPlayerEventType<BartenderUnlockFormulaEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BartenderUnlockFormulaEvent);
  return v1;
};

// Line 43: range 0000000014506362-0000000014506385
InternalPlayerEventType __cdecl getInternalPlayerEventType<BaseEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BaseEvent);
  return v1;
};

// Line 43: range 00000000163A17B1-00000000163A17D4
InternalPlayerEventType __cdecl getInternalPlayerEventType<BlessingExchangePicEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BlessingExchangePicEvent);
  return v1;
};

// Line 43: range 00000000163A1A4B-00000000163A1A6E
InternalPlayerEventType __cdecl getInternalPlayerEventType<BlessingRedeemRewardEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BlessingRedeemRewardEvent);
  return v1;
};

// Line 43: range 0000000014A694F5-0000000014A69518
InternalPlayerEventType __cdecl getInternalPlayerEventType<BossChestTakeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BossChestTakeEvent);
  return v1;
};

// Line 43: range 00000000163B84C7-00000000163B84EA
InternalPlayerEventType __cdecl getInternalPlayerEventType<BrickBreakerDungeonLevelFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BrickBreakerDungeonLevelFinishEvent);
  return v1;
};

// Line 43: range 00000000163B7D41-00000000163B7D64
InternalPlayerEventType __cdecl getInternalPlayerEventType<BrickBreakerWorldLevelFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BrickBreakerWorldLevelFinishEvent);
  return v1;
};

// Line 43: range 00000000163A950D-00000000163A9530
InternalPlayerEventType __cdecl getInternalPlayerEventType<BuoyantCombatReachNewScoreLevelEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'BuoyantCombatReachNewScoreLevelEvent);
  return v1;
};

// Line 43: range 00000000166FD86F-00000000166FD892
InternalPlayerEventType __cdecl getInternalPlayerEventType<CancelParentQuestEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CancelParentQuestEvent);
  return v1;
};

// Line 43: range 0000000013F543ED-0000000013F54410
InternalPlayerEventType __cdecl getInternalPlayerEventType<CaptureSuccEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CaptureSuccEvent);
  return v1;
};

// Line 43: range 0000000014AA0093-0000000014AA00B6
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChallengeBeginEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChallengeBeginEvent);
  return v1;
};

// Line 43: range 0000000014209FB2-0000000014209FD5
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChallengeFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChallengeFinishEvent);
  return v1;
};

// Line 43: range 0000000013F75C9B-0000000013F75CBE
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChangeAvatarEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChangeAvatarEvent);
  return v1;
};

// Line 43: range 0000000013F52629-0000000013F5264C
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChangeClimateAreaEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChangeClimateAreaEvent);
  return v1;
};

// Line 43: range 0000000013F77FE7-0000000013F7800A
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChangeClimateTypeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChangeClimateTypeEvent);
  return v1;
};

// Line 43: range 0000000016E18E67-0000000016E18E8A
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChangeCondStateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChangeCondStateEvent);
  return v1;
};

// Line 43: range 0000000013F555C9-0000000013F555EC
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChangeLevelTagEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChangeLevelTagEvent);
  return v1;
};

// Line 43: range 0000000014A6A9A1-0000000014A6A9C4
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChannellerSlabLoopDungeonScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChannellerSlabLoopDungeonScoreEvent);
  return v1;
};

// Line 43: range 00000000163B780D-00000000163B7830
InternalPlayerEventType __cdecl getInternalPlayerEventType<CharAmusementFinishStageEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CharAmusementFinishStageEvent);
  return v1;
};

// Line 43: range 00000000163A9DE5-00000000163A9E08
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChessDungeonSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChessDungeonSettleEvent);
  return v1;
};

// Line 43: range 00000000163AAF43-00000000163AAF66
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChessLevelUpEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChessLevelUpEvent);
  return v1;
};

// Line 43: range 0000000013F4F095-0000000013F4F0B8
InternalPlayerEventType __cdecl getInternalPlayerEventType<ChestOpenEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ChestOpenEvent);
  return v1;
};

// Line 43: range 0000000013F4BB01-0000000013F4BB24
InternalPlayerEventType __cdecl getInternalPlayerEventType<CityLevelupEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CityLevelupEvent);
  return v1;
};

// Line 43: range 0000000014A745F7-0000000014A7461A
InternalPlayerEventType __cdecl getInternalPlayerEventType<CityReputationFinishRequest>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CityReputationFinishRequest);
  return v1;
};

// Line 43: range 0000000014A7435D-0000000014A74380
InternalPlayerEventType __cdecl getInternalPlayerEventType<CityReputationLevelup>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CityReputationLevelup);
  return v1;
};

// Line 43: range 0000000013F461B5-0000000013F461D8
InternalPlayerEventType __cdecl getInternalPlayerEventType<ClearGroupMonsterEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ClearGroupMonsterEvent);
  return v1;
};

// Line 43: range 00000000166B18CA-00000000166B18ED
InternalPlayerEventType __cdecl getInternalPlayerEventType<ClimateMeterFullEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ClimateMeterFullEvent);
  return v1;
};

// Line 43: range 00000000163B7AA7-00000000163B7ACA
InternalPlayerEventType __cdecl getInternalPlayerEventType<CoinCollectGalleryFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CoinCollectGalleryFinishEvent);
  return v1;
};

// Line 43: range 0000000014A71887-0000000014A718AA
InternalPlayerEventType __cdecl getInternalPlayerEventType<CollectSetOfReadingsEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CollectSetOfReadingsEvent);
  return v1;
};

// Line 43: range 0000000014A62859-0000000014A6287C
InternalPlayerEventType __cdecl getInternalPlayerEventType<CombatMulticondConfigCommonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CombatMulticondConfigCommonEvent);
  return v1;
};

// Line 43: range 0000000013F44415-0000000013F44438
InternalPlayerEventType __cdecl getInternalPlayerEventType<CompleteTalkEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CompleteTalkEvent);
  return v1;
};

// Line 43: range 0000000014A80623-0000000014A80646
InternalPlayerEventType __cdecl getInternalPlayerEventType<CreateCustomDungeonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CreateCustomDungeonEvent);
  return v1;
};

// Line 43: range 000000001608BB22-000000001608BB45
InternalPlayerEventType __cdecl getInternalPlayerEventType<CreateDungeonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CreateDungeonEvent);
  return v1;
};

// Line 43: range 0000000016E19FFB-0000000016E1A01E
InternalPlayerEventType __cdecl getInternalPlayerEventType<CreateNpcEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CreateNpcEvent);
  return v1;
};

// Line 43: range 0000000013F561B1-0000000013F561D4
InternalPlayerEventType __cdecl getInternalPlayerEventType<CrossSceneRangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CrossSceneRangeEvent);
  return v1;
};

// Line 43: range 00000000163A1007-00000000163A102A
InternalPlayerEventType __cdecl getInternalPlayerEventType<CrucibleMaxElementScore>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CrucibleMaxElementScore);
  return v1;
};

// Line 43: range 00000000163A12A1-00000000163A12C4
InternalPlayerEventType __cdecl getInternalPlayerEventType<CrucibleSubmitBall>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CrucibleSubmitBall);
  return v1;
};

// Line 43: range 00000000163A0D6D-00000000163A0D90
InternalPlayerEventType __cdecl getInternalPlayerEventType<CrucibleSubmitMaxBall>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CrucibleSubmitMaxBall);
  return v1;
};

// Line 43: range 00000000163B0D87-00000000163B0DAA
InternalPlayerEventType __cdecl getInternalPlayerEventType<CrystalLinkDungeonSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CrystalLinkDungeonSettleEvent);
  return v1;
};

// Line 43: range 0000000014A8108B-0000000014A810AE
InternalPlayerEventType __cdecl getInternalPlayerEventType<CustomDungeonOfficialCoinEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'CustomDungeonOfficialCoinEvent);
  return v1;
};

// Line 43: range 0000000014A68AB1-0000000014A68AD4
InternalPlayerEventType __cdecl getInternalPlayerEventType<DailyTaskRewardEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DailyTaskRewardEvent);
  return v1;
};

// Line 43: range 0000000013F50865-0000000013F50888
InternalPlayerEventType __cdecl getInternalPlayerEventType<DailyTaskVarUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DailyTaskVarUpdateEvent);
  return v1;
};

// Line 43: range 0000000017A91E61-0000000017A91E84
InternalPlayerEventType __cdecl getInternalPlayerEventType<DelAvatarEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DelAvatarEvent);
  return v1;
};

// Line 43: range 0000000014A6FE83-0000000014A6FEA6
InternalPlayerEventType __cdecl getInternalPlayerEventType<DeliverItemToSalesmanEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DeliverItemToSalesmanEvent);
  return v1;
};

// Line 43: range 00000000163A50D3-00000000163A50F6
InternalPlayerEventType __cdecl getInternalPlayerEventType<DeliveryFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DeliveryFinishEvent);
  return v1;
};

// Line 43: range 0000000014A6832B-0000000014A6834E
InternalPlayerEventType __cdecl getInternalPlayerEventType<DoGachaEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DoGachaEvent);
  return v1;
};

// Line 43: range 0000000014A72ABD-0000000014A72AE0
InternalPlayerEventType __cdecl getInternalPlayerEventType<DoneDungeonWithSameElementAvatarsEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DoneDungeonWithSameElementAvatarsEvent);
  return v1;
};

// Line 43: range 0000000014A72823-0000000014A72846
InternalPlayerEventType __cdecl getInternalPlayerEventType<DoneTowerGadgetUnhurtEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DoneTowerGadgetUnhurtEvent);
  return v1;
};

// Line 43: range 0000000014A722EF-0000000014A72312
InternalPlayerEventType __cdecl getInternalPlayerEventType<DoneTowerStarsEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DoneTowerStarsEvent);
  return v1;
};

// Line 43: range 0000000014A72589-0000000014A725AC
InternalPlayerEventType __cdecl getInternalPlayerEventType<DoneTowerUnhurtEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DoneTowerUnhurtEvent);
  return v1;
};

// Line 43: range 00000000163B9DCF-00000000163B9DF2
InternalPlayerEventType __cdecl getInternalPlayerEventType<DuelHeartGallerySettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DuelHeartGallerySettleEvent);
  return v1;
};

// Line 43: range 0000000014A6D245-0000000014A6D268
InternalPlayerEventType __cdecl getInternalPlayerEventType<DungeonChallengeSuccessEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DungeonChallengeSuccessEvent);
  return v1;
};

// Line 43: range 0000000014A63027-0000000014A6304A
InternalPlayerEventType __cdecl getInternalPlayerEventType<DungeonEntryChangeToBeExploredEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DungeonEntryChangeToBeExploredEvent);
  return v1;
};

// Line 43: range 0000000013F4E4AD-0000000013F4E4D0
InternalPlayerEventType __cdecl getInternalPlayerEventType<DungeonOpenStatueEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'DungeonOpenStatueEvent);
  return v1;
};

// Line 43: range 00000000163A0839-00000000163A085C
InternalPlayerEventType __cdecl getInternalPlayerEventType<EffigyChallengeScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EffigyChallengeScoreEvent);
  return v1;
};

// Line 43: range 00000000163B7573-00000000163B7596
InternalPlayerEventType __cdecl getInternalPlayerEventType<EffigyChallengeV2FinishRoomEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EffigyChallengeV2FinishRoomEvent);
  return v1;
};

// Line 43: range 0000000014A6EE7B-0000000014A6EE9E
InternalPlayerEventType __cdecl getInternalPlayerEventType<ElementReactionStatUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ElementReactionStatUpdateEvent);
  return v1;
};

// Line 43: range 0000000014A70B85-0000000014A70BA8
InternalPlayerEventType __cdecl getInternalPlayerEventType<ElementTypeChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ElementTypeChangeEvent);
  return v1;
};

// Line 43: range 0000000014A63FF1-0000000014A64014
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnterClimateAreaEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnterClimateAreaEvent);
  return v1;
};

// Line 43: range 000000001445539F-00000000144553C2
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnterCombatEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnterCombatEvent);
  return v1;
};

// Line 43: range 0000000013F46D9D-0000000013F46DC0
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnterDungeonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnterDungeonEvent);
  return v1;
};

// Line 43: range 0000000014A79A21-0000000014A79A44
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnterHomeRoomEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnterHomeRoomEvent);
  return v1;
};

// Line 43: range 0000000014454DAB-0000000014454DCE
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnterMpEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnterMpEvent);
  return v1;
};

// Line 43: range 0000000013F4856D-0000000013F48590
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnterMyHomeWorldEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnterMyHomeWorldEvent);
  return v1;
};

// Line 43: range 0000000013F47391-0000000013F473B4
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnterMyWorldEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnterMyWorldEvent);
  return v1;
};

// Line 43: range 0000000013F47985-0000000013F479A8
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnterMyWorldSceneEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnterMyWorldSceneEvent);
  return v1;
};

// Line 43: range 0000000013F47F79-0000000013F47F9C
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnterRoomEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnterRoomEvent);
  return v1;
};

// Line 43: range 0000000013F54FD5-0000000013F54FF8
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnterVehicleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnterVehicleEvent);
  return v1;
};

// Line 43: range 0000000014A815BF-0000000014A815E2
InternalPlayerEventType __cdecl getInternalPlayerEventType<EnvAnimalEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'EnvAnimalEvent);
  return v1;
};

// Line 43: range 0000000014A7B395-0000000014A7B3B8
InternalPlayerEventType __cdecl getInternalPlayerEventType<ExhibitionAccumulableValueEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ExhibitionAccumulableValueEvent);
  return v1;
};

// Line 43: range 0000000014A7B62F-0000000014A7B652
InternalPlayerEventType __cdecl getInternalPlayerEventType<ExhibitionReplaceableValueSettleNumEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ExhibitionReplaceableValueSettleNumEvent);
  return v1;
};

// Line 43: range 0000000014A7CB91-0000000014A7CBB4
InternalPlayerEventType __cdecl getInternalPlayerEventType<ExitVehicleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ExitVehicleEvent);
  return v1;
};

// Line 43: range 0000000013F49155-0000000013F49178
InternalPlayerEventType __cdecl getInternalPlayerEventType<FailDungeonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FailDungeonEvent);
  return v1;
};

// Line 43: range 0000000015DB7E47-0000000015DB7E6A
InternalPlayerEventType __cdecl getInternalPlayerEventType<FailParentQuestEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FailParentQuestEvent);
  return v1;
};

// Line 43: range 000000001424949F-00000000142494C2
InternalPlayerEventType __cdecl getInternalPlayerEventType<FetterLevelUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FetterLevelUpdateEvent);
  return v1;
};

// Line 43: range 00000000163A5B3B-00000000163A5B5E
InternalPlayerEventType __cdecl getInternalPlayerEventType<FindHilichurlFinishLevelEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FindHilichurlFinishLevelEvent);
  return v1;
};

// Line 43: range 00000000163AF3CB-00000000163AF3EE
InternalPlayerEventType __cdecl getInternalPlayerEventType<FinishActivityMichiaeDarkChallengeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FinishActivityMichiaeDarkChallengeEvent);
  return v1;
};

// Line 43: range 0000000014A6A1D3-0000000014A6A1F6
InternalPlayerEventType __cdecl getInternalPlayerEventType<FinishBlossomProgressEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FinishBlossomProgressEvent);
  return v1;
};

// Line 43: range 0000000013F48B61-0000000013F48B84
InternalPlayerEventType __cdecl getInternalPlayerEventType<FinishDungeonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FinishDungeonEvent);
  return v1;
};

// Line 43: range 0000000013F4DEB9-0000000013F4DEDC
InternalPlayerEventType __cdecl getInternalPlayerEventType<FinishItemGivingEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FinishItemGivingEvent);
  return v1;
};

// Line 43: range 00000000163A8AA5-00000000163A8AC8
InternalPlayerEventType __cdecl getInternalPlayerEventType<FinishMistTrialDungeonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FinishMistTrialDungeonEvent);
  return v1;
};

// Line 43: range 000000001399B19F-000000001399B1C2
InternalPlayerEventType __cdecl getInternalPlayerEventType<FinishParentQuestEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FinishParentQuestEvent);
  return v1;
};

// Line 43: range 000000001444FAE5-000000001444FB08
InternalPlayerEventType __cdecl getInternalPlayerEventType<FinishQuestEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FinishQuestEvent);
  return v1;
};

// Line 43: range 00000000163B2C9B-00000000163B2CBE
InternalPlayerEventType __cdecl getInternalPlayerEventType<FinishRogueDiaryStageEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FinishRogueDiaryStageEvent);
  return v1;
};

// Line 43: range 00000000163B2F35-00000000163B2F58
InternalPlayerEventType __cdecl getInternalPlayerEventType<FinishRogueDiaryStageRoundEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FinishRogueDiaryStageRoundEvent);
  return v1;
};

// Line 43: range 0000000013F4F689-0000000013F4F6AC
InternalPlayerEventType __cdecl getInternalPlayerEventType<FinishTowerLevelEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FinishTowerLevelEvent);
  return v1;
};

// Line 43: range 00000000163AE6ED-00000000163AE710
InternalPlayerEventType __cdecl getInternalPlayerEventType<FireworksChallengeSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FireworksChallengeSettleEvent);
  return v1;
};

// Line 43: range 0000000014A7F6CF-0000000014A7F6F2
InternalPlayerEventType __cdecl getInternalPlayerEventType<FishingEmptyPoolEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FishingEmptyPoolEvent);
  return v1;
};

// Line 43: range 0000000014A7F435-0000000014A7F458
InternalPlayerEventType __cdecl getInternalPlayerEventType<FishingFailEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FishingFailEvent);
  return v1;
};

// Line 43: range 0000000014A7FC03-0000000014A7FC26
InternalPlayerEventType __cdecl getInternalPlayerEventType<FishingKeepBonusEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FishingKeepBonusEvent);
  return v1;
};

// Line 43: range 0000000014A7F969-0000000014A7F98C
InternalPlayerEventType __cdecl getInternalPlayerEventType<FishingShockEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FishingShockEvent);
  return v1;
};

// Line 43: range 0000000013F53805-0000000013F53828
InternalPlayerEventType __cdecl getInternalPlayerEventType<FishingSuccEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FishingSuccEvent);
  return v1;
};

// Line 43: range 00000000163A3D97-00000000163A3DBA
InternalPlayerEventType __cdecl getInternalPlayerEventType<FleurFairDungeonFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FleurFairDungeonFinishEvent);
  return v1;
};

// Line 43: range 00000000163A4905-00000000163A4928
InternalPlayerEventType __cdecl getInternalPlayerEventType<FleurFairDungeonMissionFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FleurFairDungeonMissionFinishEvent);
  return v1;
};

// Line 43: range 00000000163A80DB-00000000163A80FE
InternalPlayerEventType __cdecl getInternalPlayerEventType<FleurFairMusicGameSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FleurFairMusicGameSettleEvent);
  return v1;
};

// Line 43: range 0000000014A6FBE9-0000000014A6FC0C
InternalPlayerEventType __cdecl getInternalPlayerEventType<FullSatiationEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FullSatiationEvent);
  return v1;
};

// Line 43: range 00000000163B6DA5-00000000163B6DC8
InternalPlayerEventType __cdecl getInternalPlayerEventType<FungusFighterCaptureFungusEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FungusFighterCaptureFungusEvent);
  return v1;
};

// Line 43: range 00000000163B703F-00000000163B7062
InternalPlayerEventType __cdecl getInternalPlayerEventType<FungusFighterCultivateFungusEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FungusFighterCultivateFungusEvent);
  return v1;
};

// Line 43: range 0000000015244DED-0000000015244E10
InternalPlayerEventType __cdecl getInternalPlayerEventType<FungusFighterTrainingGallerySettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FungusFighterTrainingGallerySettleEvent);
  return v1;
};

// Line 43: range 00000000163B72D9-00000000163B72FC
InternalPlayerEventType __cdecl getInternalPlayerEventType<FungusFighterTrainingNewRecordScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FungusFighterTrainingNewRecordScoreEvent);
  return v1;
};

// Line 43: range 0000000014A780AD-0000000014A780D0
InternalPlayerEventType __cdecl getInternalPlayerEventType<FurnitureMakeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'FurnitureMakeEvent);
  return v1;
};

// Line 43: range 0000000014A81D8D-0000000014A81DB0
InternalPlayerEventType __cdecl getInternalPlayerEventType<GCGAddCardEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GCGAddCardEvent);
  return v1;
};

// Line 43: range 0000000014A831F1-0000000014A83214
InternalPlayerEventType __cdecl getInternalPlayerEventType<GCGAddCardProficiencyEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GCGAddCardProficiencyEvent);
  return v1;
};

// Line 43: range 0000000014A83BED-0000000014A83C10
InternalPlayerEventType __cdecl getInternalPlayerEventType<GCGChallengeProgressEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GCGChallengeProgressEvent);
  return v1;
};

// Line 43: range 0000000014A82027-0000000014A8204A
InternalPlayerEventType __cdecl getInternalPlayerEventType<GCGCoinEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GCGCoinEvent);
  return v1;
};

// Line 43: range 0000000014A82537-0000000014A8255A
InternalPlayerEventType __cdecl getInternalPlayerEventType<GCGFinishWeekChallengeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GCGFinishWeekChallengeEvent);
  return v1;
};

// Line 43: range 0000000013F59151-0000000013F59174
InternalPlayerEventType __cdecl getInternalPlayerEventType<GCGLevelSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GCGLevelSettleEvent);
  return v1;
};

// Line 43: range 00000000144500D9-00000000144500FC
InternalPlayerEventType __cdecl getInternalPlayerEventType<GCGLevelUpEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GCGLevelUpEvent);
  return v1;
};

// Line 43: range 0000000014A82A47-0000000014A82A6A
InternalPlayerEventType __cdecl getInternalPlayerEventType<GCGSaveDeckEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GCGSaveDeckEvent);
  return v1;
};

// Line 43: range 0000000014A82CE1-0000000014A82D04
InternalPlayerEventType __cdecl getInternalPlayerEventType<GCGUnlockCardFaceEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GCGUnlockCardFaceEvent);
  return v1;
};

// Line 43: range 00000000163B24CD-00000000163B24F0
InternalPlayerEventType __cdecl getInternalPlayerEventType<GachaConvertRobotEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GachaConvertRobotEvent);
  return v1;
};

// Line 43: range 00000000163B1A65-00000000163B1A88
InternalPlayerEventType __cdecl getInternalPlayerEventType<GachaFinishStageEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GachaFinishStageEvent);
  return v1;
};

// Line 43: range 00000000163B1F99-00000000163B1FBC
InternalPlayerEventType __cdecl getInternalPlayerEventType<GachaGetRobotEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GachaGetRobotEvent);
  return v1;
};

// Line 43: range 00000000163B2233-00000000163B2256
InternalPlayerEventType __cdecl getInternalPlayerEventType<GachaGiveRobotEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GachaGiveRobotEvent);
  return v1;
};

// Line 43: range 00000000163B1CFF-00000000163B1D22
InternalPlayerEventType __cdecl getInternalPlayerEventType<GachaMakeRobotEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GachaMakeRobotEvent);
  return v1;
};

// Line 43: range 000000001627B072-000000001627B095
InternalPlayerEventType __cdecl getInternalPlayerEventType<GadgetChainSetLevelEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GadgetChainSetLevelEvent);
  return v1;
};

// Line 43: range 0000000013F49749-0000000013F4976C
InternalPlayerEventType __cdecl getInternalPlayerEventType<GadgetDieEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GadgetDieEvent);
  return v1;
};

// Line 43: range 0000000014A70E1F-0000000014A70E42
InternalPlayerEventType __cdecl getInternalPlayerEventType<GadgetInteractableEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GadgetInteractableEvent);
  return v1;
};

// Line 43: range 0000000013F58569-0000000013F5858C
InternalPlayerEventType __cdecl getInternalPlayerEventType<GadgetStateChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GadgetStateChangeEvent);
  return v1;
};

// Line 43: range 000000001523FC6F-000000001523FC92
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryBalloonSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryBalloonSettleEvent);
  return v1;
};

// Line 43: range 00000000163A9A41-00000000163A9A64
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryBounceConjuringSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryBounceConjuringSettleEvent);
  return v1;
};

// Line 43: range 0000000017A7021F-0000000017A70242
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryBounceConjuringStartEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryBounceConjuringStartEvent);
  return v1;
};

// Line 43: range 0000000014F9A83C-0000000014F9A85F
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryBrickBreakerSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryBrickBreakerSettleEvent);
  return v1;
};

// Line 43: range 00000000163A9273-00000000163A9296
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryBuoyantCombatSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryBuoyantCombatSettleEvent);
  return v1;
};

// Line 43: range 00000000166B59C0-00000000166B59E3
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryEffigyChallengeV2SettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryEffigyChallengeV2SettleEvent);
  return v1;
};

// Line 43: range 00000000163B9B35-00000000163B9B58
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryElectroherculesBattleSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryElectroherculesBattleSettleEvent);
  return v1;
};

// Line 43: range 0000000015240263-0000000015240286
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryFallSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryFallSettleEvent);
  return v1;
};

// Line 43: range 00000000146DDDDD-00000000146DDE00
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryFishSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryFishSettleEvent);
  return v1;
};

// Line 43: range 0000000014A81AF3-0000000014A81B16
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryGravenInnocenceRaceScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryGravenInnocenceRaceScoreEvent);
  return v1;
};

// Line 43: range 000000001468F7D6-000000001468F7F9
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryIslandPartySettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryIslandPartySettleEvent);
  return v1;
};

// Line 43: range 000000001469848E-00000000146984B1
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryMistTrialSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryMistTrialSettleEvent);
  return v1;
};

// Line 43: range 0000000014697F8E-0000000014697FB1
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryMistTrialStartEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryMistTrialStartEvent);
  return v1;
};

// Line 43: range 000000001469C866-000000001469C889
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryMuqadasPotionSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryMuqadasPotionSettleEvent);
  return v1;
};

// Line 43: range 000000001608B622-000000001608B645
InternalPlayerEventType __cdecl getInternalPlayerEventType<GallerySalvageEscortSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GallerySalvageEscortSettleEvent);
  return v1;
};

// Line 43: range 000000001608B122-000000001608B145
InternalPlayerEventType __cdecl getInternalPlayerEventType<GallerySalvagePreventSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GallerySalvagePreventSettleEvent);
  return v1;
};

// Line 43: range 00000000163AE453-00000000163AE476
InternalPlayerEventType __cdecl getInternalPlayerEventType<GallerySalvageSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GallerySalvageSettleEvent);
  return v1;
};

// Line 43: range 000000001468FCD6-000000001468FCF9
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryStartEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryStartEvent);
  return v1;
};

// Line 43: range 00000000181134EC-000000001811350F
InternalPlayerEventType __cdecl getInternalPlayerEventType<GallerySumoCombatSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GallerySumoCombatSettleEvent);
  return v1;
};

// Line 43: range 00000000163A97A7-00000000163A97CA
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryTimeUpEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryTimeUpEvent);
  return v1;
};

// Line 43: range 0000000014A81325-0000000014A81348
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryTriathlonScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryTriathlonScoreEvent);
  return v1;
};

// Line 43: range 0000000014A582D6-0000000014A582F9
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryVintageHuntingStageOneSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryVintageHuntingStageOneSettleEvent);
  return v1;
};

// Line 43: range 0000000014A58CD6-0000000014A58CF9
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryVintageHuntingStageThreeSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryVintageHuntingStageThreeSettleEvent);
  return v1;
};

// Line 43: range 0000000014A587D6-0000000014A587F9
InternalPlayerEventType __cdecl getInternalPlayerEventType<GalleryVintageHuntingStageTwoSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GalleryVintageHuntingStageTwoSettleEvent);
  return v1;
};

// Line 43: range 00000000151FE42A-00000000151FE44D
InternalPlayerEventType __cdecl getInternalPlayerEventType<GatherEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GatherEvent);
  return v1;
};

// Line 43: range 00000000163B2A01-00000000163B2A24
InternalPlayerEventType __cdecl getInternalPlayerEventType<GearFinishJigsawPictureEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GearFinishJigsawPictureEvent);
  return v1;
};

// Line 43: range 00000000163B2767-00000000163B278A
InternalPlayerEventType __cdecl getInternalPlayerEventType<GearFinishStageEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GearFinishStageEvent);
  return v1;
};

// Line 43: range 0000000017A67057-0000000017A6707A
InternalPlayerEventType __cdecl getInternalPlayerEventType<GeneralRewardDestroyEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GeneralRewardDestroyEvent);
  return v1;
};

// Line 43: range 00000000163B4939-00000000163B495C
InternalPlayerEventType __cdecl getInternalPlayerEventType<GravenInnocenceCampFinishLevelEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GravenInnocenceCampFinishLevelEvent);
  return v1;
};

// Line 43: range 00000000163B4405-00000000163B4428
InternalPlayerEventType __cdecl getInternalPlayerEventType<GravenInnocenceCarveEditEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GravenInnocenceCarveEditEvent);
  return v1;
};

// Line 43: range 00000000163B469F-00000000163B46C2
InternalPlayerEventType __cdecl getInternalPlayerEventType<GravenInnocencePhotoFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GravenInnocencePhotoFinishEvent);
  return v1;
};

// Line 43: range 00000000146D4F37-00000000146D4F5A
InternalPlayerEventType __cdecl getInternalPlayerEventType<GroupBundleFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GroupBundleFinishEvent);
  return v1;
};

// Line 43: range 0000000014A73BD7-0000000014A73BFA
InternalPlayerEventType __cdecl getInternalPlayerEventType<GroupFlightChallengeReachPointsEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GroupFlightChallengeReachPointsEvent);
  return v1;
};

// Line 43: range 0000000014A6EB05-0000000014A6EB28
InternalPlayerEventType __cdecl getInternalPlayerEventType<GroupMarkPlayerActionEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GroupMarkPlayerActionEvent);
  return v1;
};

// Line 43: range 00000000163A8FD9-00000000163A8FFC
InternalPlayerEventType __cdecl getInternalPlayerEventType<GroupSummerTimeSprintBoatReachPointsEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GroupSummerTimeSprintBoatReachPointsEvent);
  return v1;
};

// Line 43: range 0000000014A7BC17-0000000014A7BC3A
InternalPlayerEventType __cdecl getInternalPlayerEventType<GroupVariableSetValueToEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GroupVariableSetValueToEvent);
  return v1;
};

// Line 43: range 000000001420A202-000000001420A225
InternalPlayerEventType __cdecl getInternalPlayerEventType<GroupsReplaceEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'GroupsReplaceEvent);
  return v1;
};

// Line 43: range 0000000014A7887B-0000000014A7889E
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeArrangementFurnitureEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeArrangementFurnitureEvent);
  return v1;
};

// Line 43: range 0000000014A79F55-0000000014A79F78
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeAvatarEventRewardGetEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeAvatarEventRewardGetEvent);
  return v1;
};

// Line 43: range 0000000014A7ABEB-0000000014A7AC0E
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeAvatarFetterGetEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeAvatarFetterGetEvent);
  return v1;
};

// Line 43: range 0000000014A79CBB-0000000014A79CDE
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeAvatarShowInEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeAvatarShowInEvent);
  return v1;
};

// Line 43: range 0000000014A7A1EF-0000000014A7A212
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeAvatarTalkEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeAvatarTalkEvent);
  return v1;
};

// Line 43: range 0000000014A81859-0000000014A8187C
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeBgmUnlockEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeBgmUnlockEvent);
  return v1;
};

// Line 43: range 0000000014A785E1-0000000014A78604
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeCoinEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeCoinEvent);
  return v1;
};

// Line 43: range 0000000016E14F15-0000000016E14F38
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeCustomFurnitureChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeCustomFurnitureChangeEvent);
  return v1;
};

// Line 43: range 0000000014A7D5F9-0000000014A7D61C
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeDoPlantEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeDoPlantEvent);
  return v1;
};

// Line 43: range 0000000014A7E54D-0000000014A7E570
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeFieldGatherEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeFieldGatherEvent);
  return v1;
};

// Line 43: range 0000000014A7E2B3-0000000014A7E2D6
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeGatherEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeGatherEvent);
  return v1;
};

// Line 43: range 0000000014A78347-0000000014A7836A
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeLevelEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeLevelEvent);
  return v1;
};

// Line 43: range 0000000014A78B15-0000000014A78B38
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomeLimitedShopBuyEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomeLimitedShopBuyEvent);
  return v1;
};

// Line 43: range 0000000016E15509-0000000016E1552C
InternalPlayerEventType __cdecl getInternalPlayerEventType<HomePlantEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HomePlantEvent);
  return v1;
};

// Line 43: range 00000000163A4E39-00000000163A4E5C
InternalPlayerEventType __cdecl getInternalPlayerEventType<HuntingFailEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HuntingFailEvent);
  return v1;
};

// Line 43: range 00000000163A4B9F-00000000163A4BC2
InternalPlayerEventType __cdecl getInternalPlayerEventType<HuntingFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'HuntingFinishEvent);
  return v1;
};

// Line 43: range 00000000163B416B-00000000163B418E
InternalPlayerEventType __cdecl getInternalPlayerEventType<InstableSprayScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'InstableSprayScoreEvent);
  return v1;
};

// Line 43: range 0000000014A632C1-0000000014A632E4
InternalPlayerEventType __cdecl getInternalPlayerEventType<InteractConsumeGadgetEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'InteractConsumeGadgetEvent);
  return v1;
};

// Line 43: range 0000000013F4D8C5-0000000013F4D8E8
InternalPlayerEventType __cdecl getInternalPlayerEventType<InteractGadgetEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'InteractGadgetEvent);
  return v1;
};

// Line 43: range 00000000163B1297-00000000163B12BA
InternalPlayerEventType __cdecl getInternalPlayerEventType<IrodoriChessSettleNewRecordEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'IrodoriChessSettleNewRecordEvent);
  return v1;
};

// Line 43: range 0000000013F567A5-0000000013F567C8
InternalPlayerEventType __cdecl getInternalPlayerEventType<IrodoriFinishFlowerThemeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'IrodoriFinishFlowerThemeEvent);
  return v1;
};

// Line 43: range 0000000013F5738D-0000000013F573B0
InternalPlayerEventType __cdecl getInternalPlayerEventType<IrodoriFinishPoetryThemeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'IrodoriFinishPoetryThemeEvent);
  return v1;
};

// Line 43: range 00000000163B1531-00000000163B1554
InternalPlayerEventType __cdecl getInternalPlayerEventType<IrodoriMasterLevelEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'IrodoriMasterLevelEvent);
  return v1;
};

// Line 43: range 0000000013F56D99-0000000013F56DBC
InternalPlayerEventType __cdecl getInternalPlayerEventType<IrodoriPoetryReachMinProgressEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'IrodoriPoetryReachMinProgressEvent);
  return v1;
};

// Line 43: range 00000000163B3703-00000000163B3726
InternalPlayerEventType __cdecl getInternalPlayerEventType<IslandPartyReachScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'IslandPartyReachScoreEvent);
  return v1;
};

// Line 43: range 0000000014A7BEB1-0000000014A7BED4
InternalPlayerEventType __cdecl getInternalPlayerEventType<KillGadgetsBySpecificSkillEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'KillGadgetsBySpecificSkillEvent);
  return v1;
};

// Line 43: range 0000000013F43E21-0000000013F43E44
InternalPlayerEventType __cdecl getInternalPlayerEventType<KillMonsterEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'KillMonsterEvent);
  return v1;
};

// Line 43: range 0000000014A7C171-0000000014A7C194
InternalPlayerEventType __cdecl getInternalPlayerEventType<KillMonstersWithoutVehicleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'KillMonstersWithoutVehicleEvent);
  return v1;
};

// Line 43: range 0000000014A71353-0000000014A71376
InternalPlayerEventType __cdecl getInternalPlayerEventType<KilledByCertainMonsterEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'KilledByCertainMonsterEvent);
  return v1;
};

// Line 43: range 0000000014A761BD-0000000014A761E0
InternalPlayerEventType __cdecl getInternalPlayerEventType<KilledBySpecificAbilityEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'KilledBySpecificAbilityEvent);
  return v1;
};

// Line 43: range 00000000163BA069-00000000163BA08C
InternalPlayerEventType __cdecl getInternalPlayerEventType<LanV3RaceScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LanV3RaceScoreEvent);
  return v1;
};

// Line 43: range 00000000163BA303-00000000163BA326
InternalPlayerEventType __cdecl getInternalPlayerEventType<LanV3ShadowFinishLevelEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LanV3ShadowFinishLevelEvent);
  return v1;
};

// Line 43: range 00000000172BF9BF-00000000172BF9E2
InternalPlayerEventType __cdecl getInternalPlayerEventType<LeaveCombatEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LeaveCombatEvent);
  return v1;
};

// Line 43: range 000000001444847D-00000000144484A0
InternalPlayerEventType __cdecl getInternalPlayerEventType<LeaveSceneEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LeaveSceneEvent);
  return v1;
};

// Line 43: range 000000001629A361-000000001629A384
InternalPlayerEventType __cdecl getInternalPlayerEventType<LeaveWorldEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LeaveWorldEvent);
  return v1;
};

// Line 43: range 0000000013F455CD-0000000013F455F0
InternalPlayerEventType __cdecl getInternalPlayerEventType<LoseItemEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LoseItemEvent);
  return v1;
};

// Line 43: range 0000000015243021-0000000015243044
InternalPlayerEventType __cdecl getInternalPlayerEventType<LuaMarkedChallengeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LuaMarkedChallengeEvent);
  return v1;
};

// Line 43: range 0000000013F4AF19-0000000013F4AF3C
InternalPlayerEventType __cdecl getInternalPlayerEventType<LuaNotifyQuestEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LuaNotifyQuestEvent);
  return v1;
};

// Line 43: range 00000000146D35B3-00000000146D35D6
InternalPlayerEventType __cdecl getInternalPlayerEventType<LuminanceStoneChallengeGallerySettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LuminanceStoneChallengeGallerySettleEvent);
  return v1;
};

// Line 43: range 00000000163B17CB-00000000163B17EE
InternalPlayerEventType __cdecl getInternalPlayerEventType<LuminanceStoneChallengeReachNewScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LuminanceStoneChallengeReachNewScoreEvent);
  return v1;
};

// Line 43: range 00000000163AB1DD-00000000163AB200
InternalPlayerEventType __cdecl getInternalPlayerEventType<LunaRiteSearchEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'LunaRiteSearchEvent);
  return v1;
};

// Line 43: range 0000000014A7698B-0000000014A769AE
InternalPlayerEventType __cdecl getInternalPlayerEventType<MainCoopSavePointAndEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MainCoopSavePointAndEvent);
  return v1;
};

// Line 43: range 0000000013F51A41-0000000013F51A64
InternalPlayerEventType __cdecl getInternalPlayerEventType<MainCoopSavePointEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MainCoopSavePointEvent);
  return v1;
};

// Line 43: range 0000000014A76C25-0000000014A76C48
InternalPlayerEventType __cdecl getInternalPlayerEventType<MainCoopSavePointOrEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MainCoopSavePointOrEvent);
  return v1;
};

// Line 43: range 0000000013F5144D-0000000013F51470
InternalPlayerEventType __cdecl getInternalPlayerEventType<MainCoopStartEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MainCoopStartEvent);
  return v1;
};

// Line 43: range 0000000014A76EBF-0000000014A76EE2
InternalPlayerEventType __cdecl getInternalPlayerEventType<MainCoopVarEqualEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MainCoopVarEqualEvent);
  return v1;
};

// Line 43: range 0000000013F467A9-0000000013F467CC
InternalPlayerEventType __cdecl getInternalPlayerEventType<ManualTransportEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ManualTransportEvent);
  return v1;
};

// Line 43: range 00000000163A5DD5-00000000163A5DF8
InternalPlayerEventType __cdecl getInternalPlayerEventType<MechanicusBattleEndEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MechanicusBattleEndEvent);
  return v1;
};

// Line 43: range 00000000163A24B3-00000000163A24D6
InternalPlayerEventType __cdecl getInternalPlayerEventType<MechanicusBattleScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MechanicusBattleScoreEvent);
  return v1;
};

// Line 43: range 00000000163A3AFD-00000000163A3B20
InternalPlayerEventType __cdecl getInternalPlayerEventType<MechanicusBattleWatcherFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MechanicusBattleWatcherFinishEvent);
  return v1;
};

// Line 43: range 00000000163A2219-00000000163A223C
InternalPlayerEventType __cdecl getInternalPlayerEventType<MechanicusDungeonSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MechanicusDungeonSettleEvent);
  return v1;
};

// Line 43: range 00000000163A1F7F-00000000163A1FA2
InternalPlayerEventType __cdecl getInternalPlayerEventType<MechanicusLevelupGearEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MechanicusLevelupGearEvent);
  return v1;
};

// Line 43: range 00000000163A1CE5-00000000163A1D08
InternalPlayerEventType __cdecl getInternalPlayerEventType<MechanicusUnlockGearEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MechanicusUnlockGearEvent);
  return v1;
};

// Line 43: range 00000000163AF131-00000000163AF154
InternalPlayerEventType __cdecl getInternalPlayerEventType<MichiaeMatsuriUnlockCrystalSkillEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MichiaeMatsuriUnlockCrystalSkillEvent);
  return v1;
};

// Line 43: range 0000000014A76457-0000000014A7647A
InternalPlayerEventType __cdecl getInternalPlayerEventType<MiracleRingDeliverItemEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MiracleRingDeliverItemEvent);
  return v1;
};

// Line 43: range 0000000014A766F1-0000000014A76714
InternalPlayerEventType __cdecl getInternalPlayerEventType<MiracleRingTakeRewardEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MiracleRingTakeRewardEvent);
  return v1;
};

// Line 43: range 00000000163A880B-00000000163A882E
InternalPlayerEventType __cdecl getInternalPlayerEventType<MistTrialStatUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MistTrialStatUpdateEvent);
  return v1;
};

// Line 43: range 0000000013F7628F-0000000013F762B2
InternalPlayerEventType __cdecl getInternalPlayerEventType<MonsterBeKilledByHateListEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MonsterBeKilledByHateListEvent);
  return v1;
};

// Line 43: range 0000000016E45353-0000000016E45376
InternalPlayerEventType __cdecl getInternalPlayerEventType<MonsterDieEndEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MonsterDieEndEvent);
  return v1;
};

// Line 43: range 0000000013F44A09-0000000013F44A2C
InternalPlayerEventType __cdecl getInternalPlayerEventType<MonsterDieEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MonsterDieEvent);
  return v1;
};

// Line 43: range 0000000014A72055-0000000014A72078
InternalPlayerEventType __cdecl getInternalPlayerEventType<MpAreaGatherTimesEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MpAreaGatherTimesEvent);
  return v1;
};

// Line 43: range 0000000014A71B21-0000000014A71B44
InternalPlayerEventType __cdecl getInternalPlayerEventType<MpDungeonSucceedEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MpDungeonSucceedEvent);
  return v1;
};

// Line 43: range 0000000014A71DBB-0000000014A71DDE
InternalPlayerEventType __cdecl getInternalPlayerEventType<MpKillMonsterNumEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MpKillMonsterNumEvent);
  return v1;
};

// Line 43: range 00000000163A0AD3-00000000163A0AF6
InternalPlayerEventType __cdecl getInternalPlayerEventType<MpPlayBattleSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MpPlayBattleSettleEvent);
  return v1;
};

// Line 43: range 00000000163B3ED1-00000000163B3EF4
InternalPlayerEventType __cdecl getInternalPlayerEventType<MuqadasPotionLevelOnceWeaknessNumEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MuqadasPotionLevelOnceWeaknessNumEvent);
  return v1;
};

// Line 43: range 00000000163B399D-00000000163B39C0
InternalPlayerEventType __cdecl getInternalPlayerEventType<MuqadasPotionLevelScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MuqadasPotionLevelScoreEvent);
  return v1;
};

// Line 43: range 00000000163B3C37-00000000163B3C5A
InternalPlayerEventType __cdecl getInternalPlayerEventType<MuqadasPotionLevelWeaknessNumEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MuqadasPotionLevelWeaknessNumEvent);
  return v1;
};

// Line 43: range 00000000163B3469-00000000163B348C
InternalPlayerEventType __cdecl getInternalPlayerEventType<MusicGameSaveUgcEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MusicGameSaveUgcEvent);
  return v1;
};

// Line 43: range 00000000163B31CF-00000000163B31F2
InternalPlayerEventType __cdecl getInternalPlayerEventType<MusicGameSettleOthersUgcEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'MusicGameSettleOthersUgcEvent);
  return v1;
};

// Line 43: range 0000000017A892FD-0000000017A89320
InternalPlayerEventType __cdecl getInternalPlayerEventType<NaturalDailyRefreshEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'NaturalDailyRefreshEvent);
  return v1;
};

// Line 43: range 0000000013F49D3D-0000000013F49D60
InternalPlayerEventType __cdecl getInternalPlayerEventType<NickNameEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'NickNameEvent);
  return v1;
};

// Line 43: range 0000000014A6591D-0000000014A65940
InternalPlayerEventType __cdecl getInternalPlayerEventType<ObtainAvatarEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ObtainAvatarEvent);
  return v1;
};

// Line 43: range 0000000013F3F757-0000000013F3F77A
InternalPlayerEventType __cdecl getInternalPlayerEventType<ObtainItemEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ObtainItemEvent);
  return v1;
};

// Line 43: range 0000000014A77159-0000000014A7717C
InternalPlayerEventType __cdecl getInternalPlayerEventType<ObtainWoodEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ObtainWoodEvent);
  return v1;
};

// Line 43: range 00000000146D8D09-00000000146D8D2C
InternalPlayerEventType __cdecl getInternalPlayerEventType<OfferingLevelupEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'OfferingLevelupEvent);
  return v1;
};

// Line 43: range 0000000014A80DF1-0000000014A80E14
InternalPlayerEventType __cdecl getInternalPlayerEventType<OfficialCustomDungeonFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'OfficialCustomDungeonFinishEvent);
  return v1;
};

// Line 43: range 0000000014A69F39-0000000014A69F5C
InternalPlayerEventType __cdecl getInternalPlayerEventType<OpenBlossomChestEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'OpenBlossomChestEvent);
  return v1;
};

// Line 43: range 0000000016E1B18F-0000000016E1B1B2
InternalPlayerEventType __cdecl getInternalPlayerEventType<OpenMechanicusEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'OpenMechanicusEvent);
  return v1;
};

// Line 43: range 00000000144478B9-00000000144478DC
InternalPlayerEventType __cdecl getInternalPlayerEventType<OpenStateChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'OpenStateChangeEvent);
  return v1;
};

// Line 43: range 00000000163B0AED-00000000163B0B10
InternalPlayerEventType __cdecl getInternalPlayerEventType<PhotoFinishPosEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PhotoFinishPosEvent);
  return v1;
};

// Line 43: range 0000000014A7C40B-0000000014A7C42E
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlaceMiracleRingEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlaceMiracleRingEvent);
  return v1;
};

// Line 43: range 00000000163AC175-00000000163AC198
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlantFlowerCommonObtainFlowerEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlantFlowerCommonObtainFlowerEvent);
  return v1;
};

// Line 43: range 00000000163ABC21-00000000163ABC44
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlantFlowerGiveFlowerEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlantFlowerGiveFlowerEvent);
  return v1;
};

// Line 43: range 00000000163ABEBB-00000000163ABEDE
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlantFlowerObtainFlowerEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlantFlowerObtainFlowerEvent);
  return v1;
};

// Line 43: range 00000000163AB987-00000000163AB9AA
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlantFlowerSetWishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlantFlowerSetWishEvent);
  return v1;
};

// Line 43: range 0000000014A64C87-0000000014A64CAA
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlatformStartMoveEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlatformStartMoveEvent);
  return v1;
};

// Line 43: range 0000000014A80B57-0000000014A80B7A
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayCustomDungeonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayCustomDungeonEvent);
  return v1;
};

// Line 43: range 0000000014A6B6A3-0000000014A6B6C6
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerBuyShopEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerBuyShopEvent);
  return v1;
};

// Line 43: range 0000000014A6B409-0000000014A6B42C
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerCombineEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerCombineEvent);
  return v1;
};

// Line 43: range 0000000014A6B16F-0000000014A6B192
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerCompoundEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerCompoundEvent);
  return v1;
};

// Line 43: range 0000000014A6AC3B-0000000014A6AC5E
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerCookEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerCookEvent);
  return v1;
};

// Line 43: range 0000000014A79511-0000000014A79534
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerEnterHomeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerEnterHomeEvent);
  return v1;
};

// Line 43: range 0000000013F57F75-0000000013F57F98
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerEnterLeaveRegionEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerEnterLeaveRegionEvent);
  return v1;
};

// Line 43: range 0000000014AA0C57-0000000014AA0C7A
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerEnterSceneEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerEnterSceneEvent);
  return v1;
};

// Line 43: range 0000000014A6AED5-0000000014A6AEF8
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerForgeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerForgeEvent);
  return v1;
};

// Line 43: range 0000000013F4C0F5-0000000013F4C118
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerLevelupEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerLevelupEvent);
  return v1;
};

// Line 43: range 0000000014A6CD35-0000000014A6CD58
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerLoginEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerLoginEvent);
  return v1;
};

// Line 43: range 00000000172C7F97-00000000172C7FBA
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerWorldLevelChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerWorldLevelChangeEvent);
  return v1;
};

// Line 43: range 0000000014A62D8D-0000000014A62DB0
InternalPlayerEventType __cdecl getInternalPlayerEventType<PlayerWorldLevelLimitUpEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PlayerWorldLevelLimitUpEvent);
  return v1;
};

// Line 43: range 0000000013F549E1-0000000013F54A04
InternalPlayerEventType __cdecl getInternalPlayerEventType<PostEnterRogueDungeonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PostEnterRogueDungeonEvent);
  return v1;
};

// Line 43: range 0000000013F55BBD-0000000013F55BE0
InternalPlayerEventType __cdecl getInternalPlayerEventType<PostEnterSceneEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PostEnterSceneEvent);
  return v1;
};

// Line 43: range 00000000163AE987-00000000163AE9AA
InternalPlayerEventType __cdecl getInternalPlayerEventType<PotionStageLevelPassEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PotionStageLevelPassEvent);
  return v1;
};

// Line 43: range 00000000163AEE97-00000000163AEEBA
InternalPlayerEventType __cdecl getInternalPlayerEventType<PotionStageScoreChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PotionStageScoreChangeEvent);
  return v1;
};

// Line 43: range 00000000163AE1B9-00000000163AE1DC
InternalPlayerEventType __cdecl getInternalPlayerEventType<ProjectionFinishLevelEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ProjectionFinishLevelEvent);
  return v1;
};

// Line 43: range 0000000014A808BD-0000000014A808E0
InternalPlayerEventType __cdecl getInternalPlayerEventType<PublishCustomDungeonEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PublishCustomDungeonEvent);
  return v1;
};

// Line 43: range 0000000017A84DD1-0000000017A84DF4
InternalPlayerEventType __cdecl getInternalPlayerEventType<PushTipAddEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'PushTipAddEvent);
  return v1;
};

// Line 43: range 0000000013F59745-0000000013F59768
InternalPlayerEventType __cdecl getInternalPlayerEventType<QuestAvatarRenameEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'QuestAvatarRenameEvent);
  return v1;
};

// Line 43: range 0000000013F59D39-0000000013F59D5C
InternalPlayerEventType __cdecl getInternalPlayerEventType<QuestGlobalVarUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'QuestGlobalVarUpdateEvent);
  return v1;
};

// Line 43: range 0000000013F52C1D-0000000013F52C40
InternalPlayerEventType __cdecl getInternalPlayerEventType<QuestStateChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'QuestStateChangeEvent);
  return v1;
};

// Line 43: range 0000000014A68D4B-0000000014A68D6E
InternalPlayerEventType __cdecl getInternalPlayerEventType<RandTaskFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RandTaskFinishEvent);
  return v1;
};

// Line 43: range 0000000014A6F94F-0000000014A6F972
InternalPlayerEventType __cdecl getInternalPlayerEventType<RecordMaxCriticalDamageUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RecordMaxCriticalDamageUpdateEvent);
  return v1;
};

// Line 43: range 0000000014A7011D-0000000014A70140
InternalPlayerEventType __cdecl getInternalPlayerEventType<RecordMaxDashTimeUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RecordMaxDashTimeUpdateEvent);
  return v1;
};

// Line 43: range 0000000014A70651-0000000014A70674
InternalPlayerEventType __cdecl getInternalPlayerEventType<RecordMaxFlyMapDistanceUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RecordMaxFlyMapDistanceUpdateEvent);
  return v1;
};

// Line 43: range 0000000014A703B7-0000000014A703DA
InternalPlayerEventType __cdecl getInternalPlayerEventType<RecordMaxFlyTimeUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RecordMaxFlyTimeUpdateEvent);
  return v1;
};

// Line 43: range 0000000016E1BD53-0000000016E1BD76
InternalPlayerEventType __cdecl getInternalPlayerEventType<RegionSearchFinishSearchEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RegionSearchFinishSearchEvent);
  return v1;
};

// Line 43: range 0000000013F785DB-0000000013F785FE
InternalPlayerEventType __cdecl getInternalPlayerEventType<RegionalPlayStatusChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RegionalPlayStatusChangeEvent);
  return v1;
};

// Line 43: range 0000000014A69A05-0000000014A69A28
InternalPlayerEventType __cdecl getInternalPlayerEventType<ReliquaryAddExpEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ReliquaryAddExpEvent);
  return v1;
};

// Line 43: range 0000000014A66895-0000000014A668B8
InternalPlayerEventType __cdecl getInternalPlayerEventType<ReliquaryLevelupEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ReliquaryLevelupEvent);
  return v1;
};

// Line 43: range 00000000163B6B0B-00000000163B6B2E
InternalPlayerEventType __cdecl getInternalPlayerEventType<RockBoardExploreFinishStageEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RockBoardExploreFinishStageEvent);
  return v1;
};

// Line 43: range 00000000163AC40F-00000000163AC432
InternalPlayerEventType __cdecl getInternalPlayerEventType<RogueDungeonGadgetDieEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RogueDungeonGadgetDieEvent);
  return v1;
};

// Line 43: range 00000000163ACADF-00000000163ACB02
InternalPlayerEventType __cdecl getInternalPlayerEventType<RogueDungeonSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RogueDungeonSettleEvent);
  return v1;
};

// Line 43: range 00000000163AC845-00000000163AC868
InternalPlayerEventType __cdecl getInternalPlayerEventType<RogueMonsterDieDieEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RogueMonsterDieDieEvent);
  return v1;
};

// Line 43: range 00000000163ADC85-00000000163ADCA8
InternalPlayerEventType __cdecl getInternalPlayerEventType<RogueSelectCardEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RogueSelectCardEvent);
  return v1;
};

// Line 43: range 00000000163AD751-00000000163AD774
InternalPlayerEventType __cdecl getInternalPlayerEventType<RogueShikigamiUpgradeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RogueShikigamiUpgradeEvent);
  return v1;
};

// Line 43: range 00000000163AD9EB-00000000163ADA0E
InternalPlayerEventType __cdecl getInternalPlayerEventType<RogueTriggerCurseEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RogueTriggerCurseEvent);
  return v1;
};

// Line 43: range 0000000014A64501-0000000014A64524
InternalPlayerEventType __cdecl getInternalPlayerEventType<RoundMonsterDieEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RoundMonsterDieEvent);
  return v1;
};

// Line 43: range 0000000014A6A46D-0000000014A6A490
InternalPlayerEventType __cdecl getInternalPlayerEventType<RoutineFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'RoutineFinishEvent);
  return v1;
};

// Line 43: range 0000000014A6BE29-0000000014A6BE4C
InternalPlayerEventType __cdecl getInternalPlayerEventType<ScenePlayBattleSettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ScenePlayBattleSettleEvent);
  return v1;
};

// Line 43: range 0000000014A6C825-0000000014A6C848
InternalPlayerEventType __cdecl getInternalPlayerEventType<ScenePlayBattleSettleResultEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ScenePlayBattleSettleResultEvent);
  return v1;
};

// Line 43: range 00000000172C9D13-00000000172C9D36
InternalPlayerEventType __cdecl getInternalPlayerEventType<SceneTagChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SceneTagChangeEvent);
  return v1;
};

// Line 43: range 00000000163A58A1-00000000163A58C4
InternalPlayerEventType __cdecl getInternalPlayerEventType<SeaLampMiniQuestFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SeaLampMiniQuestFinishEvent);
  return v1;
};

// Line 43: range 0000000013F4A331-0000000013F4A354
InternalPlayerEventType __cdecl getInternalPlayerEventType<SealBattleEndEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SealBattleEndEvent);
  return v1;
};

// Line 43: range 0000000017A65E9F-0000000017A65EC2
InternalPlayerEventType __cdecl getInternalPlayerEventType<SealEnergyChargeBattleBeginEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SealEnergyChargeBattleBeginEvent);
  return v1;
};

// Line 43: range 0000000017A66493-0000000017A664B6
InternalPlayerEventType __cdecl getInternalPlayerEventType<SealEnergyChargeBattleEndEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SealEnergyChargeBattleEndEvent);
  return v1;
};

// Line 43: range 0000000017A8366D-0000000017A83690
InternalPlayerEventType __cdecl getInternalPlayerEventType<SeeAnimalEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SeeAnimalEvent);
  return v1;
};

// Line 43: range 0000000017A6B1E7-0000000017A6B20A
InternalPlayerEventType __cdecl getInternalPlayerEventType<SendOfflineMsgRspEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SendOfflineMsgRspEvent);
  return v1;
};

// Line 43: range 0000000017A9186D-0000000017A91890
InternalPlayerEventType __cdecl getInternalPlayerEventType<SetAvatarTeamToSceneEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SetAvatarTeamToSceneEvent);
  return v1;
};

// Line 43: range 0000000013F78BCF-0000000013F78BF2
InternalPlayerEventType __cdecl getInternalPlayerEventType<SetGameTimeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SetGameTimeEvent);
  return v1;
};

// Line 43: range 0000000014A75017-0000000014A7503A
InternalPlayerEventType __cdecl getInternalPlayerEventType<ShieldSourceNumUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ShieldSourceNumUpdateEvent);
  return v1;
};

// Line 43: range 0000000014A708EB-0000000014A7090E
InternalPlayerEventType __cdecl getInternalPlayerEventType<SitDownEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SitDownEvent);
  return v1;
};

// Line 43: range 0000000013F4C6E9-0000000013F4C70C
InternalPlayerEventType __cdecl getInternalPlayerEventType<SkillEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SkillEvent);
  return v1;
};

// Line 43: range 0000000014A74D7D-0000000014A74DA0
InternalPlayerEventType __cdecl getInternalPlayerEventType<SkillStatUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SkillStatUpdateEvent);
  return v1;
};

// Line 43: range 0000000014A710B9-0000000014A710DC
InternalPlayerEventType __cdecl getInternalPlayerEventType<SkilledAtRecipeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SkilledAtRecipeEvent);
  return v1;
};

// Line 43: range 00000000166D4BBD-00000000166D4BE0
InternalPlayerEventType __cdecl getInternalPlayerEventType<SocialDetialEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SocialDetialEvent);
  return v1;
};

// Line 43: range 00000000163B05B9-00000000163B05DC
InternalPlayerEventType __cdecl getInternalPlayerEventType<SpiceGiveFoodTimesEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SpiceGiveFoodTimesEvent);
  return v1;
};

// Line 43: range 00000000163B0853-00000000163B0876
InternalPlayerEventType __cdecl getInternalPlayerEventType<SpiceMakeFormulaSuccessfulTimesEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SpiceMakeFormulaSuccessfulTimesEvent);
  return v1;
};

// Line 43: range 00000000163B031F-00000000163B0342
InternalPlayerEventType __cdecl getInternalPlayerEventType<SpiceMakeFormulaTimesEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SpiceMakeFormulaTimesEvent);
  return v1;
};

// Line 43: range 00000000166FB56B-00000000166FB58E
InternalPlayerEventType __cdecl getInternalPlayerEventType<StartQuestEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'StartQuestEvent);
  return v1;
};

// Line 43: range 000000001814C023-000000001814C046
InternalPlayerEventType __cdecl getInternalPlayerEventType<SummerTimeV2BoatGallerySettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SummerTimeV2BoatGallerySettleEvent);
  return v1;
};

// Line 43: range 00000000163AB477-00000000163AB49A
InternalPlayerEventType __cdecl getInternalPlayerEventType<SumoGallerySettleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'SumoGallerySettleEvent);
  return v1;
};

// Line 43: range 0000000014A65197-0000000014A651BA
InternalPlayerEventType __cdecl getInternalPlayerEventType<TakeGeneralRewardEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TakeGeneralRewardEvent);
  return v1;
};

// Line 43: range 00000000163B9625-00000000163B9648
InternalPlayerEventType __cdecl getInternalPlayerEventType<TeamChainStageSuccessFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TeamChainStageSuccessFinishEvent);
  return v1;
};

// Line 43: range 0000000013F4B50D-0000000013F4B530
InternalPlayerEventType __cdecl getInternalPlayerEventType<TeamDeadEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TeamDeadEvent);
  return v1;
};

// Line 43: range 0000000016DE01D6-0000000016DE01F9
InternalPlayerEventType __cdecl getInternalPlayerEventType<TeamServerGlobalValueChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TeamServerGlobalValueChangeEvent);
  return v1;
};

// Line 43: range 0000000014A715ED-0000000014A71610
InternalPlayerEventType __cdecl getInternalPlayerEventType<TeleportWithCertainPortalEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TeleportWithCertainPortalEvent);
  return v1;
};

// Line 43: range 0000000014A73895-0000000014A738B8
InternalPlayerEventType __cdecl getInternalPlayerEventType<TimeIntervalAbilityStateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TimeIntervalAbilityStateEvent);
  return v1;
};

// Line 43: range 0000000014A73361-0000000014A73384
InternalPlayerEventType __cdecl getInternalPlayerEventType<TimeIntervalClimbEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TimeIntervalClimbEvent);
  return v1;
};

// Line 43: range 0000000014A730C7-0000000014A730EA
InternalPlayerEventType __cdecl getInternalPlayerEventType<TimeIntervalDashEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TimeIntervalDashEvent);
  return v1;
};

// Line 43: range 0000000014A72E2D-0000000014A72E50
InternalPlayerEventType __cdecl getInternalPlayerEventType<TimeIntervalFlyEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TimeIntervalFlyEvent);
  return v1;
};

// Line 43: range 0000000014A75F23-0000000014A75F46
InternalPlayerEventType __cdecl getInternalPlayerEventType<TimeIntervalHurtByAbilityEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TimeIntervalHurtByAbilityEvent);
  return v1;
};

// Line 43: range 0000000014A735FB-0000000014A7361E
InternalPlayerEventType __cdecl getInternalPlayerEventType<TimeIntervalHurtEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TimeIntervalHurtEvent);
  return v1;
};

// Line 43: range 00000000163A536D-00000000163A5390
InternalPlayerEventType __cdecl getInternalPlayerEventType<TreasureMapDoneRegionEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TreasureMapDoneRegionEvent);
  return v1;
};

// Line 43: range 00000000163A5607-00000000163A562A
InternalPlayerEventType __cdecl getInternalPlayerEventType<TreasureSeelieDoneRegionEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TreasureSeelieDoneRegionEvent);
  return v1;
};

// Line 43: range 00000000151FE92A-00000000151FE94D
InternalPlayerEventType __cdecl getInternalPlayerEventType<TrifleEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TrifleEvent);
  return v1;
};

// Line 43: range 0000000013F45BC1-0000000013F45BE4
InternalPlayerEventType __cdecl getInternalPlayerEventType<TriggerFireEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'TriggerFireEvent);
  return v1;
};

// Line 43: range 0000000013F4EAA1-0000000013F4EAC4
InternalPlayerEventType __cdecl getInternalPlayerEventType<UnlockAreaEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UnlockAreaEvent);
  return v1;
};

// Line 43: range 0000000014A7E019-0000000014A7E03C
InternalPlayerEventType __cdecl getInternalPlayerEventType<UnlockCodexEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UnlockCodexEvent);
  return v1;
};

// Line 43: range 0000000014A7DD7F-0000000014A7DDA2
InternalPlayerEventType __cdecl getInternalPlayerEventType<UnlockForgeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UnlockForgeEvent);
  return v1;
};

// Line 43: range 0000000014A77E13-0000000014A77E36
InternalPlayerEventType __cdecl getInternalPlayerEventType<UnlockFurnitureEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UnlockFurnitureEvent);
  return v1;
};

// Line 43: range 0000000013F50271-0000000013F50294
InternalPlayerEventType __cdecl getInternalPlayerEventType<UnlockPersonalLineEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UnlockPersonalLineEvent);
  return v1;
};

// Line 43: range 0000000013F53211-0000000013F53234
InternalPlayerEventType __cdecl getInternalPlayerEventType<UnlockRecipeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UnlockRecipeEvent);
  return v1;
};

// Line 43: range 0000000014A7FE9D-0000000014A7FEC0
InternalPlayerEventType __cdecl getInternalPlayerEventType<UnlockScenePointEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UnlockScenePointEvent);
  return v1;
};

// Line 43: range 0000000013F4D2D1-0000000013F4D2F4
InternalPlayerEventType __cdecl getInternalPlayerEventType<UnlockTransPointEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UnlockTransPointEvent);
  return v1;
};

// Line 43: range 0000000014A62AF3-0000000014A62B16
InternalPlayerEventType __cdecl getInternalPlayerEventType<UseElementEnergyItemEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UseElementEnergyItemEvent);
  return v1;
};

// Line 43: range 0000000013F52035-0000000013F52058
InternalPlayerEventType __cdecl getInternalPlayerEventType<UseItemEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UseItemEvent);
  return v1;
};

// Line 43: range 0000000013F53DF9-0000000013F53E1C
InternalPlayerEventType __cdecl getInternalPlayerEventType<UseWidgetEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'UseWidgetEvent);
  return v1;
};

// Line 43: range 0000000014A7D35F-0000000014A7D382
InternalPlayerEventType __cdecl getInternalPlayerEventType<VehicleDashEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VehicleDashEvent);
  return v1;
};

// Line 43: range 0000000014A7CE2B-0000000014A7CE4E
InternalPlayerEventType __cdecl getInternalPlayerEventType<VehicleFriendsEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VehicleFriendsEvent);
  return v1;
};

// Line 43: range 0000000014A7D0C5-0000000014A7D0E8
InternalPlayerEventType __cdecl getInternalPlayerEventType<VehicleKilledEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VehicleKilledEvent);
  return v1;
};

// Line 43: range 0000000017A85995-0000000017A859B8
InternalPlayerEventType __cdecl getInternalPlayerEventType<ViewSceneryEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'ViewSceneryEvent);
  return v1;
};

// Line 43: range 00000000163B60A3-00000000163B60C6
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageCollectDecorationNumEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageCollectDecorationNumEvent);
  return v1;
};

// Line 43: range 00000000163B5E09-00000000163B5E2C
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageDecorationCompleteEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageDecorationCompleteEvent);
  return v1;
};

// Line 43: range 00000000163B633D-00000000163B6360
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageFinishCampEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageFinishCampEvent);
  return v1;
};

// Line 43: range 00000000163B5B6F-00000000163B5B92
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageHuntingBossWeakTimesEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageHuntingBossWeakTimesEvent);
  return v1;
};

// Line 43: range 00000000163B5107-00000000163B512A
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageHuntingCaptureNoBattleNumEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageHuntingCaptureNoBattleNumEvent);
  return v1;
};

// Line 43: range 00000000163B4E6D-00000000163B4E90
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageHuntingCaptureNumEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageHuntingCaptureNumEvent);
  return v1;
};

// Line 43: range 00000000163B53A1-00000000163B53C4
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageHuntingCaptureTypeNumEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageHuntingCaptureTypeNumEvent);
  return v1;
};

// Line 43: range 00000000163B563B-00000000163B565E
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageHuntingFinishBossEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageHuntingFinishBossEvent);
  return v1;
};

// Line 43: range 00000000163B58D5-00000000163B58F8
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageHuntingFinishBossInTimeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageHuntingFinishBossInTimeEvent);
  return v1;
};

// Line 43: range 00000000163B4BD3-00000000163B4BF6
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageHuntingScoreEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageHuntingScoreEvent);
  return v1;
};

// Line 43: range 00000000163B65D7-00000000163B65FA
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageMarketCoinAChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageMarketCoinAChangeEvent);
  return v1;
};

// Line 43: range 00000000163B6871-00000000163B6894
InternalPlayerEventType __cdecl getInternalPlayerEventType<VintageMarketContentFinishEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'VintageMarketContentFinishEvent);
  return v1;
};

// Line 43: range 00000000144506CD-00000000144506F0
InternalPlayerEventType __cdecl getInternalPlayerEventType<WatcherProgressUpdateEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WatcherProgressUpdateEvent);
  return v1;
};

// Line 43: range 0000000014A7AE85-0000000014A7AEA8
InternalPlayerEventType __cdecl getInternalPlayerEventType<WeaponAddExpEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WeaponAddExpEvent);
  return v1;
};

// Line 43: range 0000000014A752B1-0000000014A752D4
InternalPlayerEventType __cdecl getInternalPlayerEventType<WeaponAwakenEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WeaponAwakenEvent);
  return v1;
};

// Line 43: range 0000000014A66361-0000000014A66384
InternalPlayerEventType __cdecl getInternalPlayerEventType<WeaponLevelupEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WeaponLevelupEvent);
  return v1;
};

// Line 43: range 0000000014A665FB-0000000014A6661E
InternalPlayerEventType __cdecl getInternalPlayerEventType<WeaponPromoteEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WeaponPromoteEvent);
  return v1;
};

// Line 43: range 0000000014A6701B-0000000014A6703E
InternalPlayerEventType __cdecl getInternalPlayerEventType<WearOrTakeOffEquipEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WearOrTakeOffEquipEvent);
  return v1;
};

// Line 43: range 0000000014A7B8C9-0000000014A7B8EC
InternalPlayerEventType __cdecl getInternalPlayerEventType<WeeklyBossKillEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WeeklyBossKillEvent);
  return v1;
};

// Line 43: range 00000000163ADF1F-00000000163ADF42
InternalPlayerEventType __cdecl getInternalPlayerEventType<WinterCampSnomanEditEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WinterCampSnomanEditEvent);
  return v1;
};

// Line 43: range 0000000013F4A925-0000000013F4A948
InternalPlayerEventType __cdecl getInternalPlayerEventType<WorktopSelectEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WorktopSelectEvent);
  return v1;
};

// Line 43: range 0000000014FAB841-0000000014FAB864
InternalPlayerEventType __cdecl getInternalPlayerEventType<WorldAvatarDieEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WorldAvatarDieEvent);
  return v1;
};

// Line 43: range 0000000014209D62-0000000014209D85
InternalPlayerEventType __cdecl getInternalPlayerEventType<WorldGatherEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WorldGatherEvent);
  return v1;
};

// Line 43: range 0000000016DEBA66-0000000016DEBA89
InternalPlayerEventType __cdecl getInternalPlayerEventType<WorldHuntingEndEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WorldHuntingEndEvent);
  return v1;
};

// Line 43: range 0000000016DEB566-0000000016DEB589
InternalPlayerEventType __cdecl getInternalPlayerEventType<WorldHuntingStartEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WorldHuntingStartEvent);
  return v1;
};

// Line 43: range 0000000014FAB24D-0000000014FAB270
InternalPlayerEventType __cdecl getInternalPlayerEventType<WorldMpModeChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WorldMpModeChangeEvent);
  return v1;
};

// Line 43: range 0000000013F76E53-0000000013F76E76
InternalPlayerEventType __cdecl getInternalPlayerEventType<WorldPlayerChangeEvent>()
{
  std::type_index v1; // [rsp+8h] [rbp-8h] BYREF

  std::type_index::type_index(&v1, (const std::type_info *)&`typeinfo for'WorldPlayerChangeEvent);
  return v1;
};

// Line 53: range 00000000144F0CAC-00000000144F0CF9
void __cdecl StartQuestEvent::~StartQuestEvent(StartQuestEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'StartQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 53: range 00000000144F0CFA-00000000144F0D24
void __cdecl StartQuestEvent::~StartQuestEvent(StartQuestEvent *const this)
{
  StartQuestEvent::~StartQuestEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 63: range 00000000144F0C32-00000000144F0C7F
void __cdecl FinishQuestEvent::~FinishQuestEvent(FinishQuestEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 63: range 00000000144F0C80-00000000144F0CAA
void __cdecl FinishQuestEvent::~FinishQuestEvent(FinishQuestEvent *const this)
{
  FinishQuestEvent::~FinishQuestEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 66: range 00000000143FBEB0-00000000143FBF3D
// local variable allocation has failed, the output may be wrong!
void __cdecl FinishQuestEvent::FinishQuestEvent(FinishQuestEvent *const this, uint32_t _quest_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FinishQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&_quest_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id, *(_QWORD *)&_quest_id, &this->quest_id);
  }
  this->quest_id = _quest_id;
};

// Line 73: range 00000000170966CA-0000000017096717
void __cdecl FinishParentQuestEvent::~FinishParentQuestEvent(FinishParentQuestEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishParentQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 73: range 0000000017096718-0000000017096742
void __cdecl FinishParentQuestEvent::~FinishParentQuestEvent(FinishParentQuestEvent *const this)
{
  FinishParentQuestEvent::~FinishParentQuestEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 77: range 0000000016D582AA-0000000016D5837F
// local variable allocation has failed, the output may be wrong!
void __cdecl FinishParentQuestEvent::FinishParentQuestEvent(
        FinishParentQuestEvent *const this,
        uint32_t _parent_quest_id,
        bool is_random)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'FinishParentQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&_parent_quest_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_quest_id, *(_QWORD *)&_parent_quest_id, &this->parent_quest_id);
  }
  this->parent_quest_id = _parent_quest_id;
  v4 = ((_BYTE)this + 28) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_random >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_random >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_random, v4, v5);
  this->is_random = is_random;
};

// Line 79: range 0000000016D58380-0000000016D58455
// local variable allocation has failed, the output may be wrong!
void __cdecl FailParentQuestEvent::FailParentQuestEvent(
        FailParentQuestEvent *const this,
        uint32_t parent_quest_id,
        bool is_random)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'FailParentQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&parent_quest_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_quest_id, *(_QWORD *)&parent_quest_id, &this->parent_quest_id);
  }
  this->parent_quest_id = parent_quest_id;
  v4 = ((_BYTE)this + 28) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_random >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_random >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_random, v4, v5);
  this->is_random = is_random;
};

// Line 86: range 0000000017096650-000000001709669D
void __cdecl FailParentQuestEvent::~FailParentQuestEvent(FailParentQuestEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FailParentQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 86: range 000000001709669E-00000000170966C8
void __cdecl FailParentQuestEvent::~FailParentQuestEvent(FailParentQuestEvent *const this)
{
  FailParentQuestEvent::~FailParentQuestEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 97: range 0000000017096624-000000001709664E
void __cdecl CancelParentQuestEvent::~CancelParentQuestEvent(CancelParentQuestEvent *const this)
{
  CancelParentQuestEvent::~CancelParentQuestEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 97: range 00000000170965D6-0000000017096623
void __cdecl CancelParentQuestEvent::~CancelParentQuestEvent(CancelParentQuestEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CancelParentQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 100: range 0000000016D58456-0000000016D5852B
// local variable allocation has failed, the output may be wrong!
void __cdecl CancelParentQuestEvent::CancelParentQuestEvent(
        CancelParentQuestEvent *const this,
        uint32_t parent_quest_id,
        bool is_random)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'CancelParentQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&parent_quest_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_quest_id, *(_QWORD *)&parent_quest_id, &this->parent_quest_id);
  }
  this->parent_quest_id = parent_quest_id;
  v4 = ((_BYTE)this + 28) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_random >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_random >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_random, v4, v5);
  this->is_random = is_random;
};

// Line 110: range 00000000174B3590-00000000174B35BA
void __cdecl KillMonsterEvent::~KillMonsterEvent(KillMonsterEvent *const this)
{
  KillMonsterEvent::~KillMonsterEvent(this);
  operator delete(this, 0x38uLL);
};

// Line 110: range 00000000174B3532-00000000174B358F
void __cdecl KillMonsterEvent::~KillMonsterEvent(KillMonsterEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KillMonsterEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::weak_ptr<Creature>::~weak_ptr(&this->attacker_wtr);
  BaseEvent::~BaseEvent(this);
};

// Line 114: range 000000001720C49E-000000001720C618
void __cdecl KillMonsterEvent::KillMonsterEvent(
        KillMonsterEvent *const this,
        CreatureWtr *p_attacker,
        uint32_t entityid,
        uint32_t configid,
        uint32_t monsterid,
        uint32_t group_id)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'KillMonsterEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, p_attacker);
  this->_vptr_BaseEvent = v6;
  std::weak_ptr<Creature>::weak_ptr(&this->attacker_wtr, p_attacker);
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id, p_attacker, &this->entity_id);
  }
  this->entity_id = entityid;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->config_id, v7, v8);
  this->config_id = configid;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id, v7, &this->monster_id);
  }
  this->monster_id = monsterid;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->group_id, (((_BYTE)this + 52) & 7u) + 3, v9);
  this->group_id = group_id;
};

// Line 126: range 000000001709655C-00000000170965A9
void __cdecl CompleteTalkEvent::~CompleteTalkEvent(CompleteTalkEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CompleteTalkEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 126: range 00000000170965AA-00000000170965D4
void __cdecl CompleteTalkEvent::~CompleteTalkEvent(CompleteTalkEvent *const this)
{
  CompleteTalkEvent::~CompleteTalkEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 130: range 0000000016D5852C-0000000016D585B9
// local variable allocation has failed, the output may be wrong!
void __cdecl CompleteTalkEvent::CompleteTalkEvent(CompleteTalkEvent *const this, uint32_t talk_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'CompleteTalkEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&talk_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talk_id, *(_QWORD *)&talk_id, &this->talk_id);
  }
  this->talk_id = talk_id;
};

// Line 137: range 0000000016B7CCA8-0000000016B7CCD2
void __cdecl MonsterDieEvent::~MonsterDieEvent(MonsterDieEvent *const this)
{
  MonsterDieEvent::~MonsterDieEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 137: range 0000000016B7CC5A-0000000016B7CCA7
void __cdecl MonsterDieEvent::~MonsterDieEvent(MonsterDieEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MonsterDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 141: range 0000000016904830-000000001690498E
// local variable allocation has failed, the output may be wrong!
void __cdecl MonsterDieEvent::MonsterDieEvent(
        MonsterDieEvent *const this,
        uint32_t entityid,
        uint32_t configid,
        uint32_t monsterid,
        uint32_t group_id)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'MonsterDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&entityid);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id, *(_QWORD *)&entityid, &this->entity_id);
  }
  this->entity_id = entityid;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->config_id, v6, v7);
  this->config_id = configid;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id, v6, &this->monster_id);
  }
  this->monster_id = monsterid;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->group_id, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->group_id = group_id;
};

// Line 153: range 00000000174B3506-00000000174B3530
void __cdecl MonsterDieEndEvent::~MonsterDieEndEvent(MonsterDieEndEvent *const this)
{
  MonsterDieEndEvent::~MonsterDieEndEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 153: range 00000000174B34B8-00000000174B3505
void __cdecl MonsterDieEndEvent::~MonsterDieEndEvent(MonsterDieEndEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MonsterDieEndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  MonsterDieEvent::~MonsterDieEvent(this);
};

// Line 155: range 000000001743DBA6-000000001743DD2B
void __fastcall ZN18MonsterDieEndEventCI215MonsterDieEventEjjjj(
        MonsterDieEndEvent *const this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  __int64 v8; // rsi
  int (**v9)(...); // rdx
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ZN18MonsterDieEndEventCI215MonsterDieEventEjjjj;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -202116348;
  *(_DWORD *)(v5 + 48) = a2;
  *(_DWORD *)(v5 + 64) = a3;
  *(_DWORD *)(v5 + 80) = a4;
  *(_DWORD *)(v5 + 96) = a5;
  v8 = *(unsigned int *)(v5 + 48);
  MonsterDieEvent::MonsterDieEvent(this, v8, *(_DWORD *)(v5 + 64), *(_DWORD *)(v5 + 80), *(_DWORD *)(v5 + 96));
  v9 = (int (**)(...))(&`vtable for'MonsterDieEndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v8);
  this->_vptr_BaseEvent = v9;
  if ( v13 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 159: range 00000000174B348C-00000000174B34B6
void __cdecl RoundMonsterDieEvent::~RoundMonsterDieEvent(RoundMonsterDieEvent *const this)
{
  RoundMonsterDieEvent::~RoundMonsterDieEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 159: range 00000000174B342E-00000000174B348B
void __cdecl RoundMonsterDieEvent::~RoundMonsterDieEvent(RoundMonsterDieEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RoundMonsterDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::weak_ptr<Monster>::~weak_ptr(&this->monster_wtr);
  BaseEvent::~BaseEvent(this);
};

// Line 163: range 000000001720C61A-000000001720C6C2
// local variable allocation has failed, the output may be wrong!
void __cdecl RoundMonsterDieEvent::RoundMonsterDieEvent(
        RoundMonsterDieEvent *const this,
        uint32_t monster_id,
        MonsterWtr *p_monster_wtr)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'RoundMonsterDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&monster_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id, *(_QWORD *)&monster_id, &this->monster_id);
  }
  this->monster_id = monster_id;
  std::weak_ptr<Monster>::weak_ptr(&this->monster_wtr, p_monster_wtr);
};

// Line 173: range 00000000174B3402-00000000174B342C
void __cdecl MonsterBeKilledByHateListEvent::~MonsterBeKilledByHateListEvent(
        MonsterBeKilledByHateListEvent *const this)
{
  MonsterBeKilledByHateListEvent::~MonsterBeKilledByHateListEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 173: range 00000000174B33B4-00000000174B3401
void __cdecl MonsterBeKilledByHateListEvent::~MonsterBeKilledByHateListEvent(
        MonsterBeKilledByHateListEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MonsterBeKilledByHateListEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 175: range 00000000131D3BDC-00000000131D3C67
void __cdecl GroupsReplaceEvent::GroupsReplaceEvent(
        GroupsReplaceEvent *const this,
        const std::unordered_set<unsigned int> *replaced_groups)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GroupsReplaceEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, replaced_groups);
  this->_vptr_BaseEvent = v2;
  std::unordered_set<unsigned int>::unordered_set(&this->replaced_groups, replaced_groups);
};

// Line 177: range 000000001720C6C4-000000001720C751
// local variable allocation has failed, the output may be wrong!
void __cdecl MonsterBeKilledByHateListEvent::MonsterBeKilledByHateListEvent(
        MonsterBeKilledByHateListEvent *const this,
        uint32_t monster_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MonsterBeKilledByHateListEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&monster_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id, *(_QWORD *)&monster_id, &this->monster_id);
  }
  this->monster_id = monster_id;
};

// Line 181: range 00000000141EDDB6-00000000141EDE43
// local variable allocation has failed, the output may be wrong!
void __cdecl CreateDungeonEvent::CreateDungeonEvent(CreateDungeonEvent *const this, uint32_t inst_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'CreateDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&inst_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->inst_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->inst_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->inst_id, *(_QWORD *)&inst_id, &this->inst_id);
  }
  this->inst_id = inst_id;
};

// Line 185: range 0000000017F53C0E-0000000017F53C38
void __cdecl ObtainItemEvent::~ObtainItemEvent(ObtainItemEvent *const this)
{
  ObtainItemEvent::~ObtainItemEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 185: range 0000000017F53BC0-0000000017F53C0D
void __cdecl ObtainItemEvent::~ObtainItemEvent(ObtainItemEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ObtainItemEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 189: range 0000000017D67B00-0000000017D67C4B
// local variable allocation has failed, the output may be wrong!
void __cdecl ObtainItemEvent::ObtainItemEvent(
        ObtainItemEvent *const this,
        uint32_t itemid,
        uint32_t num,
        uint64_t item_guid,
        proto::ActionReasonType reason_type)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'ObtainItemEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&itemid);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, *(_QWORD *)&itemid, &this->item_id);
  }
  this->item_id = itemid;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->item_num, v6, v7);
  this->item_num = num;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->item_guid, v6);
  this->item_guid = item_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason_type, v6, &this->reason_type);
  }
  this->reason_type = reason_type;
};

// Line 199: range 0000000016833D6E-0000000016833DBB
void __cdecl LoseItemEvent::~LoseItemEvent(LoseItemEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LoseItemEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 199: range 0000000016833DBC-0000000016833DE6
void __cdecl LoseItemEvent::~LoseItemEvent(LoseItemEvent *const this)
{
  LoseItemEvent::~LoseItemEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 203: range 0000000016666EBE-0000000016666F93
// local variable allocation has failed, the output may be wrong!
void __cdecl FinishItemGivingEvent::FinishItemGivingEvent(
        FinishItemGivingEvent *const this,
        uint32_t giving_id,
        uint32_t giving_group_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'FinishItemGivingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&giving_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->giving_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->giving_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->giving_id, *(_QWORD *)&giving_id, &this->giving_id);
  }
  this->giving_id = giving_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->giving_group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->giving_group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->giving_group_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->giving_group_id = giving_group_id;
};

// Line 205: range 000000001518205E-0000000015182263
// local variable allocation has failed, the output may be wrong!
void __cdecl FleurFairDungeonFinishEvent::FleurFairDungeonFinishEvent(
        FleurFairDungeonFinishEvent *const this,
        bool is_succ,
        uint32_t gallery_stage_cost_time,
        uint32_t boss_stage_cost_time,
        uint32_t min_energy,
        const std::vector<unsigned int> *gallery_id_vec,
        const std::map<std::string,int> *group_variable_map,
        uint32_t buff_num)
{
  int (**v8)(...); // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx

  BaseEvent::BaseEvent(this);
  v8 = (int (**)(...))(&`vtable for'FleurFairDungeonFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, is_succ);
  this->_vptr_BaseEvent = v8;
  if ( *(char *)(((unsigned __int64)&this->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_succ, is_succ, &this->is_succ);
  this->is_succ = is_succ;
  v9 = (((_BYTE)this + 28) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->gallery_stage_cost_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_stage_cost_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->gallery_stage_cost_time, v9, v10);
  this->gallery_stage_cost_time = gallery_stage_cost_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_stage_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_stage_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->boss_stage_cost_time, v9, &this->boss_stage_cost_time);
  }
  this->boss_stage_cost_time = boss_stage_cost_time;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->min_energy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_energy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->min_energy, (((_BYTE)this + 36) & 7u) + 3, v11);
  this->min_energy = min_energy;
  std::vector<unsigned int>::vector(&this->gallery_id_vec, gallery_id_vec);
  std::map<std::string,int>::map(&this->group_variable_map, group_variable_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->buff_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buff_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buff_num, group_variable_map, &this->buff_num);
  }
  this->buff_num = buff_num;
};

// Line 205: range 0000000013EB6B5E-0000000013EB6CFD
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerBuyShopEvent::PlayerBuyShopEvent(
        PlayerBuyShopEvent *const this,
        uint32_t shop_type,
        uint32_t item_id,
        uint32_t shop_id,
        uint32_t goods_id,
        uint32_t buy_count)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'PlayerBuyShopEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&shop_type);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shop_type, *(_QWORD *)&shop_type, &this->shop_type);
  }
  this->shop_type = shop_type;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->item_id, v7, v8);
  this->item_id = item_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->shop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shop_id, v7, &this->shop_id);
  }
  this->shop_id = shop_id;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->goods_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->goods_id, v9, v10);
  this->goods_id = goods_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->buy_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->buy_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->buy_count, v9, &this->buy_count);
  }
  this->buy_count = buy_count;
};

// Line 210: range 0000000014D24E70-0000000014D24ECD
void __cdecl TriggerFireEvent::~TriggerFireEvent(TriggerFireEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TriggerFireEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->trigger_name);
  BaseEvent::~BaseEvent(this);
};

// Line 210: range 0000000014D24ECE-0000000014D24EF8
void __cdecl TriggerFireEvent::~TriggerFireEvent(TriggerFireEvent *const this)
{
  TriggerFireEvent::~TriggerFireEvent(this);
  operator delete(this, 0x40uLL);
};

// Line 215: range 0000000014CCBEC4-0000000014CCBFDF
void __cdecl TriggerFireEvent::TriggerFireEvent<std::string const>(
        TriggerFireEvent *const this,
        const std::string *name,
        uint32_t id,
        uint32_t group_id)
{
  int (**v4)(...); // rdx
  const std::string *v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'TriggerFireEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, name);
  this->_vptr_BaseEvent = v4;
  v5 = std::forward<std::string const>((std::remove_reference<const std::string >::type *)name);
  std::string::basic_string(&this->trigger_name, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->trigger_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->trigger_id, v5, &this->trigger_id);
  }
  this->trigger_id = id;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->group_id, (((_BYTE)this + 60) & 7u) + 3, v6);
  this->group_id = group_id;
};

// Line 223: range 00000000131D3B2A-00000000131D3BB5
void __cdecl EnterMpEvent::EnterMpEvent(EnterMpEvent *const this, std::vector<unsigned int> *p_mp_uid_vec)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'EnterMpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, p_mp_uid_vec);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::vector(&this->uid_vec, p_mp_uid_vec);
};

// Line 226: range 0000000016189762-000000001618978C
void __cdecl ClearGroupMonsterEvent::~ClearGroupMonsterEvent(ClearGroupMonsterEvent *const this)
{
  ClearGroupMonsterEvent::~ClearGroupMonsterEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 226: range 0000000016189714-0000000016189761
void __cdecl ClearGroupMonsterEvent::~ClearGroupMonsterEvent(ClearGroupMonsterEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ClearGroupMonsterEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 229: range 000000001604EDE0-000000001604EE6D
// local variable allocation has failed, the output may be wrong!
void __cdecl ClearGroupMonsterEvent::ClearGroupMonsterEvent(ClearGroupMonsterEvent *const this, uint32_t group_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'ClearGroupMonsterEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
};

// Line 235: range 00000000174B3388-00000000174B33B2
void __cdecl EnterDungeonEvent::~EnterDungeonEvent(EnterDungeonEvent *const this)
{
  EnterDungeonEvent::~EnterDungeonEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 235: range 00000000174B333A-00000000174B3387
void __cdecl EnterDungeonEvent::~EnterDungeonEvent(EnterDungeonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 238: range 000000001720C752-000000001720C827
// local variable allocation has failed, the output may be wrong!
void __cdecl EnterDungeonEvent::EnterDungeonEvent(
        EnterDungeonEvent *const this,
        uint32_t dungeonid,
        proto::EnterType enter_type)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'EnterDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeonid);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeonid, &this->dungeon_id);
  }
  this->dungeon_id = dungeonid;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enter_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->enter_type, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->enter_type = enter_type;
};

// Line 247: range 00000000174B32C0-00000000174B330D
void __cdecl EnterMyWorldEvent::~EnterMyWorldEvent(EnterMyWorldEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterMyWorldEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 247: range 00000000174B330E-00000000174B3338
void __cdecl EnterMyWorldEvent::~EnterMyWorldEvent(EnterMyWorldEvent *const this)
{
  EnterMyWorldEvent::~EnterMyWorldEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 250: range 000000001720C828-000000001720C8B5
// local variable allocation has failed, the output may be wrong!
void __cdecl EnterMyWorldEvent::EnterMyWorldEvent(EnterMyWorldEvent *const this, uint32_t sceneid)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'EnterMyWorldEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&sceneid);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&sceneid, &this->scene_id);
  }
  this->scene_id = sceneid;
};

// Line 258: range 00000000174B3246-00000000174B3293
void __cdecl EnterMyWorldSceneEvent::~EnterMyWorldSceneEvent(EnterMyWorldSceneEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterMyWorldSceneEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 258: range 00000000174B3294-00000000174B32BE
void __cdecl EnterMyWorldSceneEvent::~EnterMyWorldSceneEvent(EnterMyWorldSceneEvent *const this)
{
  EnterMyWorldSceneEvent::~EnterMyWorldSceneEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 261: range 000000001720C8B6-000000001720C943
// local variable allocation has failed, the output may be wrong!
void __cdecl EnterMyWorldSceneEvent::EnterMyWorldSceneEvent(EnterMyWorldSceneEvent *const this, uint32_t scene_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'EnterMyWorldSceneEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
};

// Line 270: range 00000000174B31CC-00000000174B3219
void __cdecl EnterRoomEvent::~EnterRoomEvent(EnterRoomEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterRoomEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 270: range 00000000174B321A-00000000174B3244
void __cdecl EnterRoomEvent::~EnterRoomEvent(EnterRoomEvent *const this)
{
  EnterRoomEvent::~EnterRoomEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 273: range 000000001720C944-000000001720C9D1
// local variable allocation has failed, the output may be wrong!
void __cdecl EnterRoomEvent::EnterRoomEvent(EnterRoomEvent *const this, uint32_t sceneid)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'EnterRoomEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&sceneid);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&sceneid, &this->scene_id);
  }
  this->scene_id = sceneid;
};

// Line 281: range 00000000174B31A0-00000000174B31CA
void __cdecl EnterMyHomeWorldEvent::~EnterMyHomeWorldEvent(EnterMyHomeWorldEvent *const this)
{
  EnterMyHomeWorldEvent::~EnterMyHomeWorldEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 281: range 00000000174B3152-00000000174B319F
void __cdecl EnterMyHomeWorldEvent::~EnterMyHomeWorldEvent(EnterMyHomeWorldEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterMyHomeWorldEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 284: range 000000001720C9D2-000000001720CA5F
// local variable allocation has failed, the output may be wrong!
void __cdecl EnterMyHomeWorldEvent::EnterMyHomeWorldEvent(EnterMyHomeWorldEvent *const this, uint32_t sceneid)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'EnterMyHomeWorldEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&sceneid);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&sceneid, &this->scene_id);
  }
  this->scene_id = sceneid;
};

// Line 292: range 00000000144F0C06-00000000144F0C30
void __cdecl EnterHomeRoomEvent::~EnterHomeRoomEvent(EnterHomeRoomEvent *const this)
{
  EnterHomeRoomEvent::~EnterHomeRoomEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 292: range 00000000144F0BB8-00000000144F0C05
void __cdecl EnterHomeRoomEvent::~EnterHomeRoomEvent(EnterHomeRoomEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterHomeRoomEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 295: range 00000000143FBF3E-00000000143FBFCB
// local variable allocation has failed, the output may be wrong!
void __cdecl EnterHomeRoomEvent::EnterHomeRoomEvent(EnterHomeRoomEvent *const this, uint32_t sceneid)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'EnterHomeRoomEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&sceneid);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&sceneid, &this->scene_id);
  }
  this->scene_id = sceneid;
};

// Line 297: range 00000000143FBFCC-00000000143FC0A1
// local variable allocation has failed, the output may be wrong!
void __cdecl FinishTowerLevelEvent::FinishTowerLevelEvent(
        FinishTowerLevelEvent *const this,
        uint32_t floor_index,
        uint32_t level_index)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'FinishTowerLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&floor_index);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->floor_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->floor_index, *(_QWORD *)&floor_index, &this->floor_index);
  }
  this->floor_index = floor_index;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_index >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->level_index, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->level_index = level_index;
};

// Line 303: range 000000001434B25E-000000001434B288
void __cdecl FinishDungeonEvent::~FinishDungeonEvent(FinishDungeonEvent *const this)
{
  FinishDungeonEvent::~FinishDungeonEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 303: range 000000001434B210-000000001434B25D
void __cdecl FinishDungeonEvent::~FinishDungeonEvent(FinishDungeonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 306: range 00000000141ED77C-00000000141ED851
// local variable allocation has failed, the output may be wrong!
void __cdecl FinishDungeonEvent::FinishDungeonEvent(
        FinishDungeonEvent *const this,
        uint32_t dungeon_id,
        bool is_first_pass)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'FinishDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
  v4 = ((_BYTE)this + 28) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_first_pass >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_first_pass >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_first_pass, v4, v5);
  this->is_first_pass = is_first_pass;
};

// Line 314: range 000000001434B1E4-000000001434B20E
void __cdecl FailDungeonEvent::~FailDungeonEvent(FailDungeonEvent *const this)
{
  FailDungeonEvent::~FailDungeonEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 314: range 000000001434B196-000000001434B1E3
void __cdecl FailDungeonEvent::~FailDungeonEvent(FailDungeonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FailDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 317: range 00000000141ED852-00000000141ED8DF
// local variable allocation has failed, the output may be wrong!
void __cdecl FailDungeonEvent::FailDungeonEvent(FailDungeonEvent *const this, uint32_t dungeon_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FailDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
};

// Line 324: range 0000000017889418-0000000017889442
void __cdecl GadgetDieEvent::~GadgetDieEvent(GadgetDieEvent *const this)
{
  GadgetDieEvent::~GadgetDieEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 324: range 00000000178893CA-0000000017889417
void __cdecl GadgetDieEvent::~GadgetDieEvent(GadgetDieEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GadgetDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 338: range 00000000174B3126-00000000174B3150
void __cdecl PostEnterSceneEvent::~PostEnterSceneEvent(PostEnterSceneEvent *const this)
{
  PostEnterSceneEvent::~PostEnterSceneEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 338: range 00000000174B30D8-00000000174B3125
void __cdecl PostEnterSceneEvent::~PostEnterSceneEvent(PostEnterSceneEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PostEnterSceneEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 341: range 000000001720CA60-000000001720CB35
// local variable allocation has failed, the output may be wrong!
void __cdecl PostEnterSceneEvent::PostEnterSceneEvent(
        PostEnterSceneEvent *const this,
        uint32_t dst_sceneid,
        proto::EnterType enter_type)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'PostEnterSceneEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dst_sceneid);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dst_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dst_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dst_scene_id, *(_QWORD *)&dst_sceneid, &this->dst_scene_id);
  }
  this->dst_scene_id = dst_sceneid;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enter_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enter_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->enter_type, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->enter_type = enter_type;
};

// Line 350: range 00000000174B30AC-00000000174B30D6
void __cdecl PlayerEnterSceneEvent::~PlayerEnterSceneEvent(PlayerEnterSceneEvent *const this)
{
  PlayerEnterSceneEvent::~PlayerEnterSceneEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 350: range 00000000174B305E-00000000174B30AB
void __cdecl PlayerEnterSceneEvent::~PlayerEnterSceneEvent(PlayerEnterSceneEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerEnterSceneEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 353: range 000000001720CB36-000000001720CC0B
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerEnterSceneEvent::PlayerEnterSceneEvent(
        PlayerEnterSceneEvent *const this,
        uint32_t scene_id,
        uint32_t uid)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'PlayerEnterSceneEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->uid, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->uid = uid;
};

// Line 362: range 00000000174B3032-00000000174B305C
void __cdecl TeamDeadEvent::~TeamDeadEvent(TeamDeadEvent *const this)
{
  TeamDeadEvent::~TeamDeadEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 362: range 00000000174B2FE4-00000000174B3031
void __cdecl TeamDeadEvent::~TeamDeadEvent(TeamDeadEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TeamDeadEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 365: range 000000001720CC0C-000000001720CC59
void __cdecl TeamDeadEvent::TeamDeadEvent(TeamDeadEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'TeamDeadEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 369: range 0000000015BFA5FA-0000000015BFA647
void __cdecl UnlockTransPointEvent::~UnlockTransPointEvent(UnlockTransPointEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockTransPointEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 369: range 0000000015BFA648-0000000015BFA672
void __cdecl UnlockTransPointEvent::~UnlockTransPointEvent(UnlockTransPointEvent *const this)
{
  UnlockTransPointEvent::~UnlockTransPointEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 383: range 00000000174B2F5A-00000000174B2FB7
void __cdecl EnterCombatEvent::~EnterCombatEvent(EnterCombatEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterCombatEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::weak_ptr<Monster>::~weak_ptr(&this->monster_wtr);
  BaseEvent::~BaseEvent(this);
};

// Line 383: range 00000000174B2FB8-00000000174B2FE2
void __cdecl EnterCombatEvent::~EnterCombatEvent(EnterCombatEvent *const this)
{
  EnterCombatEvent::~EnterCombatEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 386: range 000000001720CC5A-000000001720CCC2
void __cdecl EnterCombatEvent::EnterCombatEvent(EnterCombatEvent *const this, MonsterWtr *p_monster_wtr)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'EnterCombatEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, p_monster_wtr);
  this->_vptr_BaseEvent = v2;
  std::weak_ptr<Monster>::weak_ptr(&this->monster_wtr, p_monster_wtr);
};

// Line 394: range 00000000174B2EE0-00000000174B2F2D
void __cdecl LeaveCombatEvent::~LeaveCombatEvent(LeaveCombatEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LeaveCombatEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 394: range 00000000174B2F2E-00000000174B2F58
void __cdecl LeaveCombatEvent::~LeaveCombatEvent(LeaveCombatEvent *const this)
{
  LeaveCombatEvent::~LeaveCombatEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 397: range 000000001720CCC4-000000001720CD11
void __cdecl LeaveCombatEvent::LeaveCombatEvent(LeaveCombatEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'LeaveCombatEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 402: range 0000000015032712-000000001503277F
void __cdecl ChallengeBeginEvent::~ChallengeBeginEvent(ChallengeBeginEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChallengeBeginEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->trans_no);
  std::vector<unsigned int>::~vector(&this->uid_list);
  BaseEvent::~BaseEvent(this);
};

// Line 402: range 0000000015032780-00000000150327AA
void __cdecl ChallengeBeginEvent::~ChallengeBeginEvent(ChallengeBeginEvent *const this)
{
  ChallengeBeginEvent::~ChallengeBeginEvent(this);
  operator delete(this, 0x60uLL);
};

// Line 405: range 0000000014F74BA6-0000000014F74D6B
// local variable allocation has failed, the output may be wrong!
void __cdecl ChallengeBeginEvent::ChallengeBeginEvent(
        ChallengeBeginEvent *const this,
        uint32_t challenge_index,
        uint32_t challenge_id,
        uint32_t father_index,
        uint32_t group_id,
        const std::vector<unsigned int> *uid_list,
        const std::string *trans_no)
{
  int (**v7)(...); // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx

  BaseEvent::BaseEvent(this);
  v7 = (int (**)(...))(&`vtable for'ChallengeBeginEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&challenge_index);
  this->_vptr_BaseEvent = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_index, *(_QWORD *)&challenge_index, &this->challenge_index);
  }
  this->challenge_index = challenge_index;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->challenge_id, v8, v9);
  this->challenge_id = challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->father_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->father_index, v8, &this->father_index);
  }
  this->father_index = father_index;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->group_id, (((_BYTE)this + 36) & 7u) + 3, v10);
  this->group_id = group_id;
  std::vector<unsigned int>::vector(&this->uid_list, uid_list);
  std::string::basic_string(&this->trans_no, trans_no);
};

// Line 418: range 00000000150326E6-0000000015032710
void __cdecl ChallengeFinishEvent::~ChallengeFinishEvent(ChallengeFinishEvent *const this)
{
  ChallengeFinishEvent::~ChallengeFinishEvent(this);
  operator delete(this, 0x88uLL);
};

// Line 418: range 0000000015032668-00000000150326E5
void __cdecl ChallengeFinishEvent::~ChallengeFinishEvent(ChallengeFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChallengeFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->transaction);
  std::vector<ChallengeFinishEvent::ChildChallengeInfo>::~vector(&this->child_challenge_vec);
  std::vector<unsigned int>::~vector(&this->uid_list);
  BaseEvent::~BaseEvent(this);
};

// Line 421: range 0000000014F74DC0-0000000014F75067
// local variable allocation has failed, the output may be wrong!
void __cdecl ChallengeFinishEvent::ChallengeFinishEvent(
        ChallengeFinishEvent *const this,
        uint32_t challenge_index,
        uint32_t challenge_id,
        uint32_t group_id,
        bool is_success,
        const std::vector<unsigned int> *uid_list,
        uint32_t duration,
        uint32_t left_time,
        uint32_t scene_id,
        std::string *transaction)
{
  int (**v10)(...); // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx

  BaseEvent::BaseEvent(this);
  v10 = (int (**)(...))(&`vtable for'ChallengeFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&challenge_index);
  this->_vptr_BaseEvent = v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_index, *(_QWORD *)&challenge_index, &this->challenge_index);
  }
  this->challenge_index = challenge_index;
  v11 = (((_BYTE)this + 28) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->challenge_id, v11, v12);
  this->challenge_id = challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v11, &this->group_id);
  }
  this->group_id = group_id;
  v13 = ((_BYTE)this + 36) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_success, v13, v14);
  this->is_success = is_success;
  std::vector<unsigned int>::vector(&this->uid_list, uid_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->duration, uid_list, &this->duration);
  }
  this->duration = duration;
  v15 = (((_BYTE)this + 68) & 7u) + 3;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->left_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->left_time, v15, v16);
  this->left_time = left_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v15, &this->scene_id);
  }
  this->scene_id = scene_id;
  std::vector<ChallengeFinishEvent::ChildChallengeInfo>::vector(&this->child_challenge_vec);
  std::string::basic_string(&this->transaction, transaction);
};

// Line 453: range 000000001788939E-00000000178893C8
void __cdecl GatherEvent::~GatherEvent(GatherEvent *const this)
{
  GatherEvent::~GatherEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 453: range 0000000017889350-000000001788939D
void __cdecl GatherEvent::~GatherEvent(GatherEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GatherEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 456: range 000000001762F834-000000001762F992
// local variable allocation has failed, the output may be wrong!
void __cdecl GatherEvent::GatherEvent(
        GatherEvent *const this,
        uint32_t entityid,
        uint32_t configid,
        uint32_t gatherid,
        uint32_t gadgetid)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'GatherEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&entityid);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id, *(_QWORD *)&entityid, &this->entity_id);
  }
  this->entity_id = entityid;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->config_id, v6, v7);
  this->config_id = configid;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gather_id, v6, &this->gather_id);
  }
  this->gather_id = gatherid;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->gadget_id, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->gadget_id = gadgetid;
};

// Line 467: range 0000000014839860-00000000148398AD
void __cdecl HomeGatherEvent::~HomeGatherEvent(HomeGatherEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeGatherEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 467: range 00000000148398AE-00000000148398D8
void __cdecl HomeGatherEvent::~HomeGatherEvent(HomeGatherEvent *const this)
{
  HomeGatherEvent::~HomeGatherEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 470: range 0000000014615CB2-0000000014615E10
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeGatherEvent::HomeGatherEvent(
        HomeGatherEvent *const this,
        uint32_t entityid,
        uint32_t configid,
        uint32_t gatherid,
        uint32_t gadgetid)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'HomeGatherEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&entityid);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id, *(_QWORD *)&entityid, &this->entity_id);
  }
  this->entity_id = entityid;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->config_id, v6, v7);
  this->config_id = configid;
  if ( *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gather_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gather_id, v6, &this->gather_id);
  }
  this->gather_id = gatherid;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->gadget_id, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->gadget_id = gadgetid;
};

// Line 482: range 0000000013841C8E-0000000013841D98
void __cdecl AccelerateEvent::AccelerateEvent(
        AccelerateEvent *const this,
        uint64_t guid,
        uint32_t avatar_id,
        proto::MotionState motion_state)
{
  int (**v4)(...); // rdx
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'AccelerateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, guid);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->guid, guid);
  this->guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, guid, &this->avatar_id);
  }
  this->avatar_id = avatar_id;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->motion_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->motion_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->motion_state, (((_BYTE)this + 36) & 7u) + 3, v5);
  this->motion_state = motion_state;
};

// Line 483: range 00000000178892D6-0000000017889323
void __cdecl WorldGatherEvent::~WorldGatherEvent(WorldGatherEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WorldGatherEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 483: range 0000000017889324-000000001788934E
void __cdecl WorldGatherEvent::~WorldGatherEvent(WorldGatherEvent *const this)
{
  WorldGatherEvent::~WorldGatherEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 486: range 000000001762F994-000000001762FAA9
// local variable allocation has failed, the output may be wrong!
void __cdecl WorldGatherEvent::WorldGatherEvent(
        WorldGatherEvent *const this,
        uint32_t group_id,
        uint32_t point_type,
        uint32_t config_id)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'WorldGatherEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->point_type, v5, v6);
  this->point_type = point_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v5, &this->config_id);
  }
  this->config_id = config_id;
};

// Line 496: range 0000000015F4710E-0000000015F4715B
void __cdecl TrifleEvent::~TrifleEvent(TrifleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TrifleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 496: range 0000000015F4715C-0000000015F47186
void __cdecl TrifleEvent::~TrifleEvent(TrifleEvent *const this)
{
  TrifleEvent::~TrifleEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 499: range 0000000015D30D3C-0000000015D30EDE
// local variable allocation has failed, the output may be wrong!
void __cdecl TrifleEvent::TrifleEvent(
        TrifleEvent *const this,
        uint32_t entity_id,
        uint32_t config_id,
        uint32_t item_id,
        uint32_t gadget_id,
        bool is_fake)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'TrifleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&entity_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->entity_id, *(_QWORD *)&entity_id, &this->entity_id);
  }
  this->entity_id = entity_id;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->config_id, v7, v8);
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v7, &this->item_id);
  }
  this->item_id = item_id;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->gadget_id, v9, v10);
  this->gadget_id = gadget_id;
  if ( *(char *)(((unsigned __int64)&this->is_fake >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_fake, v9, &this->is_fake);
  this->is_fake = is_fake;
};

// Line 512: range 0000000013CD21EA-0000000013CD2214
void __cdecl AccelerateEvent::~AccelerateEvent(AccelerateEvent *const this)
{
  AccelerateEvent::~AccelerateEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 512: range 0000000013CD219C-0000000013CD21E9
void __cdecl AccelerateEvent::~AccelerateEvent(AccelerateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AccelerateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 523: range 000000001762F6D4-000000001762F832
// local variable allocation has failed, the output may be wrong!
void __cdecl GadgetDieEvent::GadgetDieEvent(
        GadgetDieEvent *const this,
        uint32_t gadget_id,
        uint32_t config_id,
        uint32_t group_id,
        uint32_t entity_id)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'GadgetDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gadget_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, *(_QWORD *)&gadget_id, &this->gadget_id);
  }
  this->gadget_id = gadget_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->config_id, v6, v7);
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v6, &this->group_id);
  }
  this->group_id = group_id;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->entity_id, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->entity_id = entity_id;
};

// Line 524: range 0000000017F53B94-0000000017F53BBE
void __cdecl UseItemEvent::~UseItemEvent(UseItemEvent *const this)
{
  UseItemEvent::~UseItemEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 524: range 0000000017F53B46-0000000017F53B93
void __cdecl UseItemEvent::~UseItemEvent(UseItemEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UseItemEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 527: range 0000000017D67C4C-0000000017D67D21
// local variable allocation has failed, the output may be wrong!
void __cdecl UseItemEvent::UseItemEvent(UseItemEvent *const this, uint32_t item_id, uint32_t item_num)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'UseItemEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&item_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, *(_QWORD *)&item_id, &this->item_id);
  }
  this->item_id = item_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->item_num, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->item_num = item_num;
};

// Line 533: range 00000000174B2E66-00000000174B2EB3
void __cdecl ChangeAvatarEvent::~ChangeAvatarEvent(ChangeAvatarEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChangeAvatarEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 533: range 00000000174B2EB4-00000000174B2EDE
void __cdecl ChangeAvatarEvent::~ChangeAvatarEvent(ChangeAvatarEvent *const this)
{
  ChangeAvatarEvent::~ChangeAvatarEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 536: range 000000001720CD12-000000001720CDC9
void __cdecl ChangeAvatarEvent::ChangeAvatarEvent(ChangeAvatarEvent *const this, uint64_t old_guid, uint64_t guid)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ChangeAvatarEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, old_guid);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->old_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->old_guid, old_guid);
  this->old_guid = old_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->cur_guid, old_guid);
  this->cur_guid = guid;
};

// Line 545: range 0000000013CD2170-0000000013CD219A
void __cdecl AvatarDieEvent::~AvatarDieEvent(AvatarDieEvent *const this)
{
  AvatarDieEvent::~AvatarDieEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 545: range 0000000013CD2122-0000000013CD216F
void __cdecl AvatarDieEvent::~AvatarDieEvent(AvatarDieEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 548: range 0000000013841D9A-0000000013841E5F
void __cdecl AvatarDieEvent::AvatarDieEvent(AvatarDieEvent *const this, uint64_t avatar_guid, bool is_cur_use_avatar)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'AvatarDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, avatar_guid);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, avatar_guid);
  this->avatar_guid = avatar_guid;
  if ( *(char *)(((unsigned __int64)&this->is_cur_use_avatar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cur_use_avatar, avatar_guid, &this->is_cur_use_avatar);
  this->is_cur_use_avatar = is_cur_use_avatar;
};

// Line 551: range 0000000015A17AD4-0000000015A17C32
// local variable allocation has failed, the output may be wrong!
void __cdecl UnlockTransPointEvent::UnlockTransPointEvent(
        UnlockTransPointEvent *const this,
        uint32_t scene_id,
        uint32_t point_id,
        uint32_t city_id,
        uint32_t area_id)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'UnlockTransPointEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->point_id, v6, v7);
  this->point_id = point_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v6, &this->city_id);
  }
  this->city_id = city_id;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->area_id, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->area_id = area_id;
};

// Line 556: range 0000000013CD20A8-0000000013CD20F5
void __cdecl WorldAvatarDieEvent::~WorldAvatarDieEvent(WorldAvatarDieEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WorldAvatarDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 556: range 0000000013CD20F6-0000000013CD2120
void __cdecl WorldAvatarDieEvent::~WorldAvatarDieEvent(WorldAvatarDieEvent *const this)
{
  WorldAvatarDieEvent::~WorldAvatarDieEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 559: range 0000000013841E60-0000000013841FB0
// local variable allocation has failed, the output may be wrong!
void __cdecl WorldAvatarDieEvent::WorldAvatarDieEvent(
        WorldAvatarDieEvent *const this,
        uint32_t uid,
        uint64_t avatar_guid,
        bool is_cur_use_avatar,
        bool is_all_avatar_dead)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'WorldAvatarDieEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&uid);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid, *(_QWORD *)&uid, &this->uid);
  }
  this->uid = uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, *(_QWORD *)&uid);
  this->avatar_guid = avatar_guid;
  if ( *(char *)(((unsigned __int64)&this->is_cur_use_avatar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_cur_use_avatar, *(_QWORD *)&uid, &this->is_cur_use_avatar);
  this->is_cur_use_avatar = is_cur_use_avatar;
  v6 = ((_BYTE)this + 41) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_all_avatar_dead >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_all_avatar_dead >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_all_avatar_dead, v6, v7);
  this->is_all_avatar_dead = is_all_avatar_dead;
};

// Line 569: range 00000000174B2DEC-00000000174B2E39
void __cdecl DelAvatarEvent::~DelAvatarEvent(DelAvatarEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DelAvatarEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 569: range 00000000174B2E3A-00000000174B2E64
void __cdecl DelAvatarEvent::~DelAvatarEvent(DelAvatarEvent *const this)
{
  DelAvatarEvent::~DelAvatarEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 572: range 000000001720CDCA-000000001720CECC
// local variable allocation has failed, the output may be wrong!
void __cdecl DelAvatarEvent::DelAvatarEvent(
        DelAvatarEvent *const this,
        uint32_t avatar_id,
        uint64_t avatar_guid,
        uint32_t avatar_type)
{
  int (**v4)(...); // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'DelAvatarEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&avatar_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, *(_QWORD *)&avatar_id, &this->avatar_id);
  }
  this->avatar_id = avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, *(_QWORD *)&avatar_id);
  this->avatar_guid = avatar_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_type, *(_QWORD *)&avatar_id, &this->avatar_type);
  }
  this->avatar_type = avatar_type;
};

// Line 582: range 00000000136124E4-0000000013612531
void __cdecl SkillEvent::~SkillEvent(SkillEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SkillEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 582: range 0000000013612532-000000001361255C
void __cdecl SkillEvent::~SkillEvent(SkillEvent *const this)
{
  SkillEvent::~SkillEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 585: range 00000000131D34E2-00000000131D35E4
// local variable allocation has failed, the output may be wrong!
void __cdecl SkillEvent::SkillEvent(SkillEvent *const this, uint32_t entityid, uint64_t guid, uint32_t skillid)
{
  int (**v4)(...); // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'SkillEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&entityid);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_entity_id, *(_QWORD *)&entityid, &this->avatar_entity_id);
  }
  this->avatar_entity_id = entityid;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, *(_QWORD *)&entityid);
  this->avatar_guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id, *(_QWORD *)&entityid, &this->skill_id);
  }
  this->skill_id = skillid;
};

// Line 595: range 0000000013CD207C-0000000013CD20A6
void __cdecl AbilityAvatarSkillStartEvent::~AbilityAvatarSkillStartEvent(AbilityAvatarSkillStartEvent *const this)
{
  AbilityAvatarSkillStartEvent::~AbilityAvatarSkillStartEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 595: range 0000000013CD202E-0000000013CD207B
void __cdecl AbilityAvatarSkillStartEvent::~AbilityAvatarSkillStartEvent(AbilityAvatarSkillStartEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AbilityAvatarSkillStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 598: range 0000000013841FB2-00000000138420B4
// local variable allocation has failed, the output may be wrong!
void __cdecl AbilityAvatarSkillStartEvent::AbilityAvatarSkillStartEvent(
        AbilityAvatarSkillStartEvent *const this,
        uint32_t entityid,
        uint64_t guid,
        uint32_t skillid)
{
  int (**v4)(...); // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'AbilityAvatarSkillStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&entityid);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_entity_id, *(_QWORD *)&entityid, &this->avatar_entity_id);
  }
  this->avatar_entity_id = entityid;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, *(_QWORD *)&entityid);
  this->avatar_guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id, *(_QWORD *)&entityid, &this->skill_id);
  }
  this->skill_id = skillid;
};

// Line 623: range 000000001746DEA4-000000001746DEF1
void __cdecl NickNameEvent::NickNameEvent(NickNameEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'NickNameEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 623: range 00000000174B2DC0-00000000174B2DEA
void __cdecl NickNameEvent::~NickNameEvent(NickNameEvent *const this)
{
  NickNameEvent::~NickNameEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 623: range 00000000174B2D72-00000000174B2DBF
void __cdecl NickNameEvent::~NickNameEvent(NickNameEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'NickNameEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 628: range 00000000178892AA-00000000178892D4
void __cdecl SealBattleEndEvent::~SealBattleEndEvent(SealBattleEndEvent *const this)
{
  SealBattleEndEvent::~SealBattleEndEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 628: range 000000001788925C-00000000178892A9
void __cdecl SealBattleEndEvent::~SealBattleEndEvent(SealBattleEndEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SealBattleEndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 631: range 000000001762FAAA-000000001762FC08
// local variable allocation has failed, the output may be wrong!
void __cdecl SealBattleEndEvent::SealBattleEndEvent(
        SealBattleEndEvent *const this,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t config_id,
        bool is_win)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'SealBattleEndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->group_id, v6, v7);
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v6, &this->config_id);
  }
  this->config_id = config_id;
  v8 = ((_BYTE)this + 36) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_win, v8, v9);
  this->is_win = is_win;
};

// Line 643: range 0000000017889230-000000001788925A
void __cdecl SealEnergyChargeBattleBeginEvent::~SealEnergyChargeBattleBeginEvent(
        SealEnergyChargeBattleBeginEvent *const this)
{
  SealEnergyChargeBattleBeginEvent::~SealEnergyChargeBattleBeginEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 643: range 00000000178891D2-000000001788922F
void __cdecl SealEnergyChargeBattleBeginEvent::~SealEnergyChargeBattleBeginEvent(
        SealEnergyChargeBattleBeginEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SealEnergyChargeBattleBeginEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::weak_ptr<SealEnergyChargeBattle>::~weak_ptr(&this->battle_wtr);
  BaseEvent::~BaseEvent(this);
};

// Line 646: range 000000001762FCEA-000000001762FD92
// local variable allocation has failed, the output may be wrong!
void __cdecl SealEnergyChargeBattleBeginEvent::SealEnergyChargeBattleBeginEvent(
        SealEnergyChargeBattleBeginEvent *const this,
        uint32_t group_id,
        SealEnergyChargeBattleWtr *p_battle_wtr)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'SealEnergyChargeBattleBeginEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  std::weak_ptr<SealEnergyChargeBattle>::weak_ptr(&this->battle_wtr, p_battle_wtr);
};

// Line 656: range 0000000017889158-00000000178891A5
void __cdecl SealEnergyChargeBattleEndEvent::~SealEnergyChargeBattleEndEvent(
        SealEnergyChargeBattleEndEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SealEnergyChargeBattleEndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 656: range 00000000178891A6-00000000178891D0
void __cdecl SealEnergyChargeBattleEndEvent::~SealEnergyChargeBattleEndEvent(
        SealEnergyChargeBattleEndEvent *const this)
{
  SealEnergyChargeBattleEndEvent::~SealEnergyChargeBattleEndEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 659: range 000000001762FD94-000000001762FEAC
// local variable allocation has failed, the output may be wrong!
void __cdecl SealEnergyChargeBattleEndEvent::SealEnergyChargeBattleEndEvent(
        SealEnergyChargeBattleEndEvent *const this,
        uint32_t group_id,
        uint32_t cost_time,
        bool is_win)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'SealEnergyChargeBattleEndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->cost_time, v5, v6);
  this->cost_time = cost_time;
  if ( *(char *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_win, v5, &this->is_win);
  this->is_win = is_win;
};

// Line 670: range 0000000014D24E44-0000000014D24E6E
void __cdecl WorktopSelectEvent::~WorktopSelectEvent(WorktopSelectEvent *const this)
{
  WorktopSelectEvent::~WorktopSelectEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 670: range 0000000014D24DF6-0000000014D24E43
void __cdecl WorktopSelectEvent::~WorktopSelectEvent(WorktopSelectEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WorktopSelectEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 673: range 00000000149EC6C6-00000000149EC7DB
// local variable allocation has failed, the output may be wrong!
void __cdecl WorktopSelectEvent::WorktopSelectEvent(
        WorktopSelectEvent *const this,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t config_id)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'WorktopSelectEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->group_id, v5, v6);
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v5, &this->config_id);
  }
  this->config_id = config_id;
};

// Line 684: range 0000000014D24D6C-0000000014D24DC9
void __cdecl LuaNotifyQuestEvent::~LuaNotifyQuestEvent(LuaNotifyQuestEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LuaNotifyQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->quest_param);
  BaseEvent::~BaseEvent(this);
};

// Line 684: range 0000000014D24DCA-0000000014D24DF4
void __cdecl LuaNotifyQuestEvent::~LuaNotifyQuestEvent(LuaNotifyQuestEvent *const this)
{
  LuaNotifyQuestEvent::~LuaNotifyQuestEvent(this);
  operator delete(this, 0x38uLL);
};

// Line 687: range 00000000149EC7DC-00000000149EC867
void __cdecl LuaNotifyQuestEvent::LuaNotifyQuestEvent(LuaNotifyQuestEvent *const this, const std::string *quest_param)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'LuaNotifyQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, quest_param);
  this->_vptr_BaseEvent = v2;
  std::string::basic_string(&this->quest_param, quest_param);
};

// Line 693: range 00000000178890DE-000000001788912B
void __cdecl CityLevelupEvent::~CityLevelupEvent(CityLevelupEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CityLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 693: range 000000001788912C-0000000017889156
void __cdecl CityLevelupEvent::~CityLevelupEvent(CityLevelupEvent *const this)
{
  CityLevelupEvent::~CityLevelupEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 696: range 000000001762FEAE-000000001763000C
// local variable allocation has failed, the output may be wrong!
void __cdecl CityLevelupEvent::CityLevelupEvent(
        CityLevelupEvent *const this,
        uint32_t scene_id,
        uint32_t city_id,
        uint32_t cur_level,
        uint32_t last_level)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'CityLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->city_id, v6, v7);
  this->city_id = city_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_level, v6, &this->cur_level);
  }
  this->cur_level = cur_level;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->last_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->last_level, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->last_level = last_level;
};

// Line 708: range 00000000174B2D46-00000000174B2D70
void __cdecl PlayerLevelupEvent::~PlayerLevelupEvent(PlayerLevelupEvent *const this)
{
  PlayerLevelupEvent::~PlayerLevelupEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 708: range 00000000174B2CF8-00000000174B2D45
void __cdecl PlayerLevelupEvent::~PlayerLevelupEvent(PlayerLevelupEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 711: range 000000001720CECE-000000001720CFA3
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerLevelupEvent::PlayerLevelupEvent(
        PlayerLevelupEvent *const this,
        uint32_t cur_level,
        uint32_t last_level)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'PlayerLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&cur_level);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_level, *(_QWORD *)&cur_level, &this->cur_level);
  }
  this->cur_level = cur_level;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->last_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->last_level, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->last_level = last_level;
};

// Line 719: range 00000000174B2CCC-00000000174B2CF6
void __cdecl PlayerWorldLevelLimitUpEvent::~PlayerWorldLevelLimitUpEvent(PlayerWorldLevelLimitUpEvent *const this)
{
  PlayerWorldLevelLimitUpEvent::~PlayerWorldLevelLimitUpEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 719: range 00000000174B2C7E-00000000174B2CCB
void __cdecl PlayerWorldLevelLimitUpEvent::~PlayerWorldLevelLimitUpEvent(PlayerWorldLevelLimitUpEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerWorldLevelLimitUpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 722: range 000000001720CFA4-000000001720D079
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerWorldLevelLimitUpEvent::PlayerWorldLevelLimitUpEvent(
        PlayerWorldLevelLimitUpEvent *const this,
        uint32_t new_world_level_limit,
        uint32_t old_world_level_limit)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'PlayerWorldLevelLimitUpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&new_world_level_limit);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->new_world_level_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->new_world_level_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->new_world_level_limit, *(_QWORD *)&new_world_level_limit, &this->new_world_level_limit);
  }
  this->new_world_level_limit = new_world_level_limit;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->old_world_level_limit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->old_world_level_limit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->old_world_level_limit, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->old_world_level_limit = old_world_level_limit;
};

// Line 730: range 0000000015F47094-0000000015F470E1
void __cdecl PlayerWorldLevelChangeEvent::~PlayerWorldLevelChangeEvent(PlayerWorldLevelChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerWorldLevelChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 730: range 0000000015F470E2-0000000015F4710C
void __cdecl PlayerWorldLevelChangeEvent::~PlayerWorldLevelChangeEvent(PlayerWorldLevelChangeEvent *const this)
{
  PlayerWorldLevelChangeEvent::~PlayerWorldLevelChangeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 733: range 0000000015D30EE0-0000000015D30FB5
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerWorldLevelChangeEvent::PlayerWorldLevelChangeEvent(
        PlayerWorldLevelChangeEvent *const this,
        uint32_t new_world_level,
        uint32_t old_world_level)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'PlayerWorldLevelChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&new_world_level);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->new_world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->new_world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->new_world_level, *(_QWORD *)&new_world_level, &this->new_world_level);
  }
  this->new_world_level = new_world_level;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->old_world_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->old_world_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->old_world_level, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->old_world_level = old_world_level;
};

// Line 741: range 0000000014839834-000000001483985E
void __cdecl InteractGadgetEvent::~InteractGadgetEvent(InteractGadgetEvent *const this)
{
  InteractGadgetEvent::~InteractGadgetEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 741: range 00000000148397E6-0000000014839833
void __cdecl InteractGadgetEvent::~InteractGadgetEvent(InteractGadgetEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'InteractGadgetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 744: range 0000000014615E12-0000000014615EE7
// local variable allocation has failed, the output may be wrong!
void __cdecl InteractGadgetEvent::InteractGadgetEvent(
        InteractGadgetEvent *const this,
        uint32_t gadget_id,
        uint32_t group_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'InteractGadgetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gadget_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, *(_QWORD *)&gadget_id, &this->gadget_id);
  }
  this->gadget_id = gadget_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->group_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->group_id = group_id;
};

// Line 751: range 00000000178890B2-00000000178890DC
void __cdecl InteractConsumeGadgetEvent::~InteractConsumeGadgetEvent(InteractConsumeGadgetEvent *const this)
{
  InteractConsumeGadgetEvent::~InteractConsumeGadgetEvent(this);
  operator delete(this, 0x38uLL);
};

// Line 751: range 0000000017889064-00000000178890B1
void __cdecl InteractConsumeGadgetEvent::~InteractConsumeGadgetEvent(InteractConsumeGadgetEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'InteractConsumeGadgetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 754: range 000000001763000E-000000001763022F
// local variable allocation has failed, the output may be wrong!
void __cdecl InteractConsumeGadgetEvent::InteractConsumeGadgetEvent(
        InteractConsumeGadgetEvent *const this,
        uint32_t gadget_id,
        uint32_t group_id,
        uint32_t deprecated_group_city_id,
        uint32_t deprecated_group_area_id,
        uint32_t gadget_city_id,
        uint32_t gadget_area_id,
        uint32_t interact_id)
{
  int (**v8)(...); // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx

  BaseEvent::BaseEvent(this);
  v8 = (int (**)(...))(&`vtable for'InteractConsumeGadgetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gadget_id);
  this->_vptr_BaseEvent = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, *(_QWORD *)&gadget_id, &this->gadget_id);
  }
  this->gadget_id = gadget_id;
  v9 = (((_BYTE)this + 28) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->group_id, v9, v10);
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->deprecated_group_city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deprecated_group_city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deprecated_group_city_id, v9, &this->deprecated_group_city_id);
  }
  this->deprecated_group_city_id = deprecated_group_city_id;
  v11 = (((_BYTE)this + 36) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->deprecated_group_area_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->deprecated_group_area_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->deprecated_group_area_id, v11, v12);
  this->deprecated_group_area_id = deprecated_group_area_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_city_id, v11, &this->gadget_city_id);
  }
  this->gadget_city_id = gadget_city_id;
  v13 = (((_BYTE)this + 44) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->gadget_area_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_area_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->gadget_area_id, v13, v14);
  this->gadget_area_id = gadget_area_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->interact_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->interact_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->interact_id, v13, &this->interact_id);
  }
  this->interact_id = interact_id;
};

// Line 773: range 0000000015BFA5CE-0000000015BFA5F8
void __cdecl LeaveSceneEvent::~LeaveSceneEvent(LeaveSceneEvent *const this)
{
  LeaveSceneEvent::~LeaveSceneEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 773: range 0000000015BFA580-0000000015BFA5CD
void __cdecl LeaveSceneEvent::~LeaveSceneEvent(LeaveSceneEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LeaveSceneEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 776: range 0000000015A17C34-0000000015A17CC1
// local variable allocation has failed, the output may be wrong!
void __cdecl LeaveSceneEvent::LeaveSceneEvent(LeaveSceneEvent *const this, uint32_t scene_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'LeaveSceneEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
};

// Line 782: range 00000000136124B8-00000000136124E2
void __cdecl ChestOpenEvent::~ChestOpenEvent(ChestOpenEvent *const this)
{
  ChestOpenEvent::~ChestOpenEvent(this);
  operator delete(this, 0x40uLL);
};

// Line 782: range 000000001361246A-00000000136124B7
void __cdecl ChestOpenEvent::~ChestOpenEvent(ChestOpenEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChestOpenEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 785: range 00000000131D35E6-00000000131D3889
// local variable allocation has failed, the output may be wrong!
void __cdecl ChestOpenEvent::ChestOpenEvent(
        ChestOpenEvent *const this,
        uint32_t config_id,
        uint32_t group_id,
        uint32_t scene_id,
        uint32_t dungeon_id,
        uint32_t gadget_id,
        uint32_t deprecated_group_city_id,
        uint32_t deprecated_group_area_id,
        uint32_t gadget_city_id,
        uint32_t gadget_area_id)
{
  int (**v10)(...); // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx

  BaseEvent::BaseEvent(this);
  v10 = (int (**)(...))(&`vtable for'ChestOpenEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&config_id);
  this->_vptr_BaseEvent = v10;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, *(_QWORD *)&config_id, &this->config_id);
  }
  this->config_id = config_id;
  v11 = (((_BYTE)this + 28) & 7u) + 3;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->group_id, v11, v12);
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v11, &this->scene_id);
  }
  this->scene_id = scene_id;
  v13 = (((_BYTE)this + 36) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->dungeon_id, v13, v14);
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, v13, &this->gadget_id);
  }
  this->gadget_id = gadget_id;
  v15 = (((_BYTE)this + 44) & 7u) + 3;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->deprecated_group_city_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->deprecated_group_city_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->deprecated_group_city_id, v15, v16);
  this->deprecated_group_city_id = deprecated_group_city_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->deprecated_group_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deprecated_group_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deprecated_group_area_id, v15, &this->deprecated_group_area_id);
  }
  this->deprecated_group_area_id = deprecated_group_area_id;
  v17 = (((_BYTE)this + 52) & 7u) + 3;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->gadget_city_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_city_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store4(&this->gadget_city_id, v17, v18);
  this->gadget_city_id = gadget_city_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_area_id, v17, &this->gadget_area_id);
  }
  this->gadget_area_id = gadget_area_id;
};

// Line 790: range 00000000131D388A-00000000131D3A2C
// local variable allocation has failed, the output may be wrong!
void __cdecl WorldPlayerChangeEvent::WorldPlayerChangeEvent(
        WorldPlayerChangeEvent *const this,
        uint32_t last_num,
        uint32_t cur_num,
        uint32_t owner_uid,
        uint32_t change_uid,
        bool is_enter)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'WorldPlayerChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&last_num);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_num, *(_QWORD *)&last_num, &this->last_num);
  }
  this->last_num = last_num;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->cur_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->cur_num, v7, v8);
  this->cur_num = cur_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid, v7, &this->owner_uid);
  }
  this->owner_uid = owner_uid;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->change_uid >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_uid >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->change_uid, v9, v10);
  this->change_uid = change_uid;
  if ( *(char *)(((unsigned __int64)&this->is_enter >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enter, v9, &this->is_enter);
  this->is_enter = is_enter;
};

// Line 805: range 00000000136123F0-000000001361243D
void __cdecl WorldPlayerChangeEvent::~WorldPlayerChangeEvent(WorldPlayerChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WorldPlayerChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 805: range 000000001361243E-0000000013612468
void __cdecl WorldPlayerChangeEvent::~WorldPlayerChangeEvent(WorldPlayerChangeEvent *const this)
{
  WorldPlayerChangeEvent::~WorldPlayerChangeEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 821: range 0000000016833CF4-0000000016833D41
void __cdecl FinishItemGivingEvent::~FinishItemGivingEvent(FinishItemGivingEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishItemGivingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 821: range 0000000016833D42-0000000016833D6C
void __cdecl FinishItemGivingEvent::~FinishItemGivingEvent(FinishItemGivingEvent *const this)
{
  FinishItemGivingEvent::~FinishItemGivingEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 833: range 00000000161896E8-0000000016189712
void __cdecl DungeonOpenStatueEvent::~DungeonOpenStatueEvent(DungeonOpenStatueEvent *const this)
{
  DungeonOpenStatueEvent::~DungeonOpenStatueEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 833: range 000000001618969A-00000000161896E7
void __cdecl DungeonOpenStatueEvent::~DungeonOpenStatueEvent(DungeonOpenStatueEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DungeonOpenStatueEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 836: range 000000001604EE6E-000000001604EEFB
// local variable allocation has failed, the output may be wrong!
void __cdecl DungeonOpenStatueEvent::DungeonOpenStatueEvent(DungeonOpenStatueEvent *const this, uint32_t dungeon_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'DungeonOpenStatueEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
};

// Line 842: range 0000000015F47068-0000000015F47092
void __cdecl UnlockAreaEvent::~UnlockAreaEvent(UnlockAreaEvent *const this)
{
  UnlockAreaEvent::~UnlockAreaEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 842: range 0000000015F4701A-0000000015F47067
void __cdecl UnlockAreaEvent::~UnlockAreaEvent(UnlockAreaEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockAreaEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 845: range 0000000015D30FB6-0000000015D3108B
// local variable allocation has failed, the output may be wrong!
void __cdecl UnlockAreaEvent::UnlockAreaEvent(UnlockAreaEvent *const this, uint32_t scene_id, uint32_t area_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'UnlockAreaEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->area_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->area_id = area_id;
};

// Line 853: range 00000000174B2C52-00000000174B2C7C
void __cdecl OpenStateChangeEvent::~OpenStateChangeEvent(OpenStateChangeEvent *const this)
{
  OpenStateChangeEvent::~OpenStateChangeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 853: range 00000000174B2C04-00000000174B2C51
void __cdecl OpenStateChangeEvent::~OpenStateChangeEvent(OpenStateChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'OpenStateChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 856: range 000000001720D07A-000000001720D14F
// local variable allocation has failed, the output may be wrong!
void __cdecl OpenStateChangeEvent::OpenStateChangeEvent(OpenStateChangeEvent *const this, uint32_t key, uint32_t value)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'OpenStateChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&key);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->key, *(_QWORD *)&key, &this->key);
  }
  this->key = key;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->value, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->value = value;
};

// Line 864: range 0000000013CD2002-0000000013CD202C
void __cdecl ActivityScheduleEvent::~ActivityScheduleEvent(ActivityScheduleEvent *const this)
{
  ActivityScheduleEvent::~ActivityScheduleEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 864: range 0000000013CD1FB4-0000000013CD2001
void __cdecl ActivityScheduleEvent::~ActivityScheduleEvent(ActivityScheduleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityScheduleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 867: range 00000000138420B6-00000000138421CE
// local variable allocation has failed, the output may be wrong!
void __cdecl ActivityScheduleEvent::ActivityScheduleEvent(
        ActivityScheduleEvent *const this,
        uint32_t activity_id,
        uint32_t schedule_id,
        bool is_start)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'ActivityScheduleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->activty_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activty_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activty_id, *(_QWORD *)&activity_id, &this->activty_id);
  }
  this->activty_id = activity_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->schedule_id, v5, v6);
  this->schedule_id = schedule_id;
  if ( *(char *)(((unsigned __int64)&this->is_start >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_start, v5, &this->is_start);
  this->is_start = is_start;
};

// Line 876: range 00000000174B2B8A-00000000174B2BD7
void __cdecl ObtainAvatarEvent::~ObtainAvatarEvent(ObtainAvatarEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ObtainAvatarEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 876: range 00000000174B2BD8-00000000174B2C02
void __cdecl ObtainAvatarEvent::~ObtainAvatarEvent(ObtainAvatarEvent *const this)
{
  ObtainAvatarEvent::~ObtainAvatarEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 879: range 000000001720D150-000000001720D1DD
// local variable allocation has failed, the output may be wrong!
void __cdecl ObtainAvatarEvent::ObtainAvatarEvent(ObtainAvatarEvent *const this, uint32_t avatar_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'ObtainAvatarEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&avatar_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, *(_QWORD *)&avatar_id, &this->avatar_id);
  }
  this->avatar_id = avatar_id;
};

// Line 885: range 000000001635C39A-000000001635C3C4
void __cdecl AvatarLevelupEvent::~AvatarLevelupEvent(AvatarLevelupEvent *const this)
{
  AvatarLevelupEvent::~AvatarLevelupEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 885: range 000000001635C34C-000000001635C399
void __cdecl AvatarLevelupEvent::~AvatarLevelupEvent(AvatarLevelupEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 888: range 0000000016238E82-0000000016238F97
// local variable allocation has failed, the output may be wrong!
void __cdecl AvatarLevelupEvent::AvatarLevelupEvent(
        AvatarLevelupEvent *const this,
        uint32_t avatar_id,
        uint32_t level,
        uint32_t old_level)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'AvatarLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&avatar_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, *(_QWORD *)&avatar_id, &this->avatar_id);
  }
  this->avatar_id = avatar_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->level, v5, v6);
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&this->old_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->old_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->old_level, v5, &this->old_level);
  }
  this->old_level = old_level;
};

// Line 896: range 000000001635C2D2-000000001635C31F
void __cdecl AvatarPromoteEvent::~AvatarPromoteEvent(AvatarPromoteEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarPromoteEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 896: range 000000001635C320-000000001635C34A
void __cdecl AvatarPromoteEvent::~AvatarPromoteEvent(AvatarPromoteEvent *const this)
{
  AvatarPromoteEvent::~AvatarPromoteEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 899: range 0000000016238F98-00000000162390AD
// local variable allocation has failed, the output may be wrong!
void __cdecl AvatarPromoteEvent::AvatarPromoteEvent(
        AvatarPromoteEvent *const this,
        uint32_t avatar_id,
        uint32_t promote_level,
        uint32_t old_promote_level)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'AvatarPromoteEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&avatar_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, *(_QWORD *)&avatar_id, &this->avatar_id);
  }
  this->avatar_id = avatar_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->promote_level, v5, v6);
  this->promote_level = promote_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->old_promote_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->old_promote_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->old_promote_level, v5, &this->old_promote_level);
  }
  this->old_promote_level = old_promote_level;
};

// Line 908: range 0000000017888FEA-0000000017889037
void __cdecl WeaponLevelupEvent::~WeaponLevelupEvent(WeaponLevelupEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WeaponLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 908: range 0000000017889038-0000000017889062
void __cdecl WeaponLevelupEvent::~WeaponLevelupEvent(WeaponLevelupEvent *const this)
{
  WeaponLevelupEvent::~WeaponLevelupEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 911: range 0000000017630230-0000000017630345
// local variable allocation has failed, the output may be wrong!
void __cdecl WeaponLevelupEvent::WeaponLevelupEvent(
        WeaponLevelupEvent *const this,
        uint32_t weapon_id,
        uint32_t level,
        uint32_t old_level)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'WeaponLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&weapon_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weapon_id, *(_QWORD *)&weapon_id, &this->weapon_id);
  }
  this->weapon_id = weapon_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->level, v5, v6);
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&this->old_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->old_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->old_level, v5, &this->old_level);
  }
  this->old_level = old_level;
};

// Line 920: range 0000000017888F70-0000000017888FBD
void __cdecl WeaponPromoteEvent::~WeaponPromoteEvent(WeaponPromoteEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WeaponPromoteEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 920: range 0000000017888FBE-0000000017888FE8
void __cdecl WeaponPromoteEvent::~WeaponPromoteEvent(WeaponPromoteEvent *const this)
{
  WeaponPromoteEvent::~WeaponPromoteEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 923: range 0000000017630346-000000001763045B
// local variable allocation has failed, the output may be wrong!
void __cdecl WeaponPromoteEvent::WeaponPromoteEvent(
        WeaponPromoteEvent *const this,
        uint32_t weapon_id,
        uint32_t promote_level,
        uint32_t old_promote_level)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'WeaponPromoteEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&weapon_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weapon_id, *(_QWORD *)&weapon_id, &this->weapon_id);
  }
  this->weapon_id = weapon_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->promote_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->promote_level, v5, v6);
  this->promote_level = promote_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->old_promote_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->old_promote_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->old_promote_level, v5, &this->old_promote_level);
  }
  this->old_promote_level = old_promote_level;
};

// Line 932: range 0000000017888F44-0000000017888F6E
void __cdecl WeaponAddExpEvent::~WeaponAddExpEvent(WeaponAddExpEvent *const this)
{
  WeaponAddExpEvent::~WeaponAddExpEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 932: range 0000000017888EF6-0000000017888F43
void __cdecl WeaponAddExpEvent::~WeaponAddExpEvent(WeaponAddExpEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WeaponAddExpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 935: range 000000001763045C-0000000017630531
// local variable allocation has failed, the output may be wrong!
void __cdecl WeaponAddExpEvent::WeaponAddExpEvent(WeaponAddExpEvent *const this, uint32_t weapon_id, uint32_t add_exp)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'WeaponAddExpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&weapon_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weapon_id, *(_QWORD *)&weapon_id, &this->weapon_id);
  }
  this->weapon_id = weapon_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->add_exp >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_exp >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->add_exp, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->add_exp = add_exp;
};

// Line 942: range 0000000017888ECA-0000000017888EF4
void __cdecl ReliquaryLevelupEvent::~ReliquaryLevelupEvent(ReliquaryLevelupEvent *const this)
{
  ReliquaryLevelupEvent::~ReliquaryLevelupEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 942: range 0000000017888E7C-0000000017888EC9
void __cdecl ReliquaryLevelupEvent::~ReliquaryLevelupEvent(ReliquaryLevelupEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ReliquaryLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 945: range 0000000017630532-0000000017630690
// local variable allocation has failed, the output may be wrong!
void __cdecl ReliquaryLevelupEvent::ReliquaryLevelupEvent(
        ReliquaryLevelupEvent *const this,
        uint32_t reliquary_id,
        uint32_t rank_level,
        uint32_t level,
        uint32_t old_level)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'ReliquaryLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&reliquary_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reliquary_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reliquary_id, *(_QWORD *)&reliquary_id, &this->reliquary_id);
  }
  this->reliquary_id = reliquary_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->rank_level, v6, v7);
  this->rank_level = rank_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, v6, &this->level);
  }
  this->level = level;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->old_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->old_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->old_level, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->old_level = old_level;
};

// Line 955: range 0000000016833C5A-0000000016833CC7
void __cdecl WearOrTakeOffEquipEvent::~WearOrTakeOffEquipEvent(WearOrTakeOffEquipEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WearOrTakeOffEquipEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::weak_ptr<Equip>::~weak_ptr(&this->equip_wtr);
  std::weak_ptr<Avatar>::~weak_ptr(&this->avatar_wtr);
  BaseEvent::~BaseEvent(this);
};

// Line 955: range 0000000016833CC8-0000000016833CF2
void __cdecl WearOrTakeOffEquipEvent::~WearOrTakeOffEquipEvent(WearOrTakeOffEquipEvent *const this)
{
  WearOrTakeOffEquipEvent::~WearOrTakeOffEquipEvent(this);
  operator delete(this, 0x40uLL);
};

// Line 958: range 0000000016667074-000000001666713A
void __cdecl WearOrTakeOffEquipEvent::WearOrTakeOffEquipEvent(
        WearOrTakeOffEquipEvent *const this,
        AvatarWtr *p_avatar_wtr,
        EquipWtr *p_equip_wtr,
        bool is_wear)
{
  int (**v4)(...); // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'WearOrTakeOffEquipEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, p_avatar_wtr);
  this->_vptr_BaseEvent = v4;
  std::weak_ptr<Avatar>::weak_ptr(&this->avatar_wtr, p_avatar_wtr);
  std::weak_ptr<Equip>::weak_ptr(&this->equip_wtr, p_equip_wtr);
  if ( *(char *)(((unsigned __int64)&this->is_wear >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_wear, p_equip_wtr, &this->is_wear);
  this->is_wear = is_wear;
};

// Line 967: range 0000000014D24D40-0000000014D24D6A
void __cdecl AvatarSkillOrProudSkillLevelupEvent::~AvatarSkillOrProudSkillLevelupEvent(
        AvatarSkillOrProudSkillLevelupEvent *const this)
{
  AvatarSkillOrProudSkillLevelupEvent::~AvatarSkillOrProudSkillLevelupEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 967: range 0000000014D24CF2-0000000014D24D3F
void __cdecl AvatarSkillOrProudSkillLevelupEvent::~AvatarSkillOrProudSkillLevelupEvent(
        AvatarSkillOrProudSkillLevelupEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarSkillOrProudSkillLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 970: range 00000000149EC868-00000000149EC8B5
void __cdecl AvatarSkillOrProudSkillLevelupEvent::AvatarSkillOrProudSkillLevelupEvent(
        AvatarSkillOrProudSkillLevelupEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'AvatarSkillOrProudSkillLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 970: range 00000000149EC8B6-00000000149ECA17
// local variable allocation has failed, the output may be wrong!
void __cdecl WatcherProgressUpdateEvent::WatcherProgressUpdateEvent(
        WatcherProgressUpdateEvent *const this,
        uint32_t watcher_id,
        uint32_t cur_progress,
        bool is_finished,
        uint32_t old_progress)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'WatcherProgressUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&watcher_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->watcher_id, *(_QWORD *)&watcher_id, &this->watcher_id);
  }
  this->watcher_id = watcher_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->cur_progress >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_progress >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->cur_progress, v6, v7);
  this->cur_progress = cur_progress;
  if ( *(char *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finished, v6, &this->is_finished);
  this->is_finished = is_finished;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->old_progress >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->old_progress >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->old_progress, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->old_progress = old_progress;
};

// Line 974: range 0000000017888E50-0000000017888E7A
void __cdecl UnlockRecipeEvent::~UnlockRecipeEvent(UnlockRecipeEvent *const this)
{
  UnlockRecipeEvent::~UnlockRecipeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 974: range 0000000017888E02-0000000017888E4F
void __cdecl UnlockRecipeEvent::~UnlockRecipeEvent(UnlockRecipeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockRecipeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 977: range 0000000017630692-000000001763071F
// local variable allocation has failed, the output may be wrong!
void __cdecl UnlockRecipeEvent::UnlockRecipeEvent(UnlockRecipeEvent *const this, uint32_t recipe_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'UnlockRecipeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&recipe_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->recipe_id, *(_QWORD *)&recipe_id, &this->recipe_id);
  }
  this->recipe_id = recipe_id;
};

// Line 984: range 0000000017F53B1A-0000000017F53B44
void __cdecl UseElementEnergyItemEvent::~UseElementEnergyItemEvent(UseElementEnergyItemEvent *const this)
{
  UseElementEnergyItemEvent::~UseElementEnergyItemEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 984: range 0000000017F53ACC-0000000017F53B19
void __cdecl UseElementEnergyItemEvent::~UseElementEnergyItemEvent(UseElementEnergyItemEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UseElementEnergyItemEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 987: range 0000000017D67D22-0000000017D67DAF
// local variable allocation has failed, the output may be wrong!
void __cdecl UseElementEnergyItemEvent::UseElementEnergyItemEvent(
        UseElementEnergyItemEvent *const this,
        uint32_t item_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'UseElementEnergyItemEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&item_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, *(_QWORD *)&item_id, &this->item_id);
  }
  this->item_id = item_id;
};

// Line 993: range 00000000144F0B8C-00000000144F0BB6
void __cdecl FinishTowerLevelEvent::~FinishTowerLevelEvent(FinishTowerLevelEvent *const this)
{
  FinishTowerLevelEvent::~FinishTowerLevelEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 993: range 00000000144F0B3E-00000000144F0B8B
void __cdecl FinishTowerLevelEvent::~FinishTowerLevelEvent(FinishTowerLevelEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishTowerLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1003: range 0000000015BFA506-0000000015BFA553
void __cdecl DungeonEntryChangeToBeExploredEvent::~DungeonEntryChangeToBeExploredEvent(
        DungeonEntryChangeToBeExploredEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DungeonEntryChangeToBeExploredEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1003: range 0000000015BFA554-0000000015BFA57E
void __cdecl DungeonEntryChangeToBeExploredEvent::~DungeonEntryChangeToBeExploredEvent(
        DungeonEntryChangeToBeExploredEvent *const this)
{
  DungeonEntryChangeToBeExploredEvent::~DungeonEntryChangeToBeExploredEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1006: range 0000000015A17CC2-0000000015A17D97
// local variable allocation has failed, the output may be wrong!
void __cdecl DungeonEntryChangeToBeExploredEvent::DungeonEntryChangeToBeExploredEvent(
        DungeonEntryChangeToBeExploredEvent *const this,
        uint32_t dungeon_entry_entity_id,
        uint32_t dungeon_entry_config_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'DungeonEntryChangeToBeExploredEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_entry_entity_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->dungeon_entry_entity_id,
      *(_QWORD *)&dungeon_entry_entity_id,
      &this->dungeon_entry_entity_id);
  }
  this->dungeon_entry_entity_id = dungeon_entry_entity_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->dungeon_entry_config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_entry_config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->dungeon_entry_config_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->dungeon_entry_config_id = dungeon_entry_config_id;
};

// Line 1014: range 0000000014D24CC6-0000000014D24CF0
void __cdecl WatcherProgressUpdateEvent::~WatcherProgressUpdateEvent(WatcherProgressUpdateEvent *const this)
{
  WatcherProgressUpdateEvent::~WatcherProgressUpdateEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1014: range 0000000014D24C78-0000000014D24CC5
void __cdecl WatcherProgressUpdateEvent::~WatcherProgressUpdateEvent(WatcherProgressUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WatcherProgressUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1027: range 00000000170964E2-000000001709652F
void __cdecl BargainFinishEvent::~BargainFinishEvent(BargainFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BargainFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1027: range 0000000017096530-000000001709655A
void __cdecl BargainFinishEvent::~BargainFinishEvent(BargainFinishEvent *const this)
{
  BargainFinishEvent::~BargainFinishEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1030: range 0000000016D585BA-0000000016D5868F
// local variable allocation has failed, the output may be wrong!
void __cdecl BargainFinishEvent::BargainFinishEvent(BargainFinishEvent *const this, uint32_t bargain_id, bool is_succ)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'BargainFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&bargain_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->bargain_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bargain_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bargain_id, *(_QWORD *)&bargain_id, &this->bargain_id);
  }
  this->bargain_id = bargain_id;
  v4 = ((_BYTE)this + 28) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_succ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_succ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_succ, v4, v5);
  this->is_succ = is_succ;
};

// Line 1039: range 00000000174B2B10-00000000174B2B5D
void __cdecl PlayerLoginEvent::~PlayerLoginEvent(PlayerLoginEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerLoginEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1039: range 00000000174B2B5E-00000000174B2B88
void __cdecl PlayerLoginEvent::~PlayerLoginEvent(PlayerLoginEvent *const this)
{
  PlayerLoginEvent::~PlayerLoginEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1042: range 000000001720D1DE-000000001720D2B3
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerLoginEvent::PlayerLoginEvent(
        PlayerLoginEvent *const this,
        uint32_t last_login_time,
        uint32_t now_login_time)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'PlayerLoginEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&last_login_time);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_login_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_login_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_login_time, *(_QWORD *)&last_login_time, &this->last_login_time);
  }
  this->last_login_time = last_login_time;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->now_login_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->now_login_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->now_login_time, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->now_login_time = now_login_time;
};

// Line 1050: range 000000001434B16A-000000001434B194
void __cdecl DailyTaskRewardEvent::~DailyTaskRewardEvent(DailyTaskRewardEvent *const this)
{
  DailyTaskRewardEvent::~DailyTaskRewardEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1050: range 000000001434B11C-000000001434B169
void __cdecl DailyTaskRewardEvent::~DailyTaskRewardEvent(DailyTaskRewardEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DailyTaskRewardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1053: range 00000000141ED8E0-00000000141ED9B5
// local variable allocation has failed, the output may be wrong!
void __cdecl DailyTaskRewardEvent::DailyTaskRewardEvent(
        DailyTaskRewardEvent *const this,
        uint32_t task_id,
        bool is_grant_reward)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'DailyTaskRewardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&task_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->task_id, *(_QWORD *)&task_id, &this->task_id);
  }
  this->task_id = task_id;
  v4 = ((_BYTE)this + 28) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_grant_reward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_grant_reward >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_grant_reward, v4, v5);
  this->is_grant_reward = is_grant_reward;
};

// Line 1060: range 00000000154CD83C-00000000154CD889
void __cdecl AvatarExpeditionStartEvent::~AvatarExpeditionStartEvent(AvatarExpeditionStartEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarExpeditionStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1060: range 00000000154CD88A-00000000154CD8B4
void __cdecl AvatarExpeditionStartEvent::~AvatarExpeditionStartEvent(AvatarExpeditionStartEvent *const this)
{
  AvatarExpeditionStartEvent::~AvatarExpeditionStartEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1063: range 0000000015181B20-0000000015181BE2
// local variable allocation has failed, the output may be wrong!
void __cdecl AvatarExpeditionStartEvent::AvatarExpeditionStartEvent(
        AvatarExpeditionStartEvent *const this,
        uint32_t exp_id,
        uint64_t avatar_guid)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'AvatarExpeditionStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&exp_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_id, *(_QWORD *)&exp_id, &this->exp_id);
  }
  this->exp_id = exp_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, *(_QWORD *)&exp_id);
  this->avatar_guid = avatar_guid;
};

// Line 1070: range 00000000154CD810-00000000154CD83A
void __cdecl AvatarExpeditionFinishEvent::~AvatarExpeditionFinishEvent(AvatarExpeditionFinishEvent *const this)
{
  AvatarExpeditionFinishEvent::~AvatarExpeditionFinishEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1070: range 00000000154CD7C2-00000000154CD80F
void __cdecl AvatarExpeditionFinishEvent::~AvatarExpeditionFinishEvent(AvatarExpeditionFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarExpeditionFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1073: range 0000000015181BE4-0000000015181CA6
// local variable allocation has failed, the output may be wrong!
void __cdecl AvatarExpeditionFinishEvent::AvatarExpeditionFinishEvent(
        AvatarExpeditionFinishEvent *const this,
        uint32_t exp_id,
        uint64_t avatar_guid)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'AvatarExpeditionFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&exp_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_id, *(_QWORD *)&exp_id, &this->exp_id);
  }
  this->exp_id = exp_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, *(_QWORD *)&exp_id);
  this->avatar_guid = avatar_guid;
};

// Line 1081: range 0000000015F46FEE-0000000015F47018
void __cdecl RandTaskFinishEvent::~RandTaskFinishEvent(RandTaskFinishEvent *const this)
{
  RandTaskFinishEvent::~RandTaskFinishEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1081: range 0000000015F46FA0-0000000015F46FED
void __cdecl RandTaskFinishEvent::~RandTaskFinishEvent(RandTaskFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RandTaskFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1084: range 0000000015D3108C-0000000015D31161
// local variable allocation has failed, the output may be wrong!
void __cdecl RandTaskFinishEvent::RandTaskFinishEvent(
        RandTaskFinishEvent *const this,
        uint32_t world_owner_uid,
        uint32_t rand_task_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'RandTaskFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&world_owner_uid);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->world_owner_uid, *(_QWORD *)&world_owner_uid, &this->world_owner_uid);
  }
  this->world_owner_uid = world_owner_uid;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->rand_task_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rand_task_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->rand_task_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->rand_task_id = rand_task_id;
};

// Line 1092: range 00000000140FCA84-00000000140FCAAE
void __cdecl BossChestTakeEvent::~BossChestTakeEvent(BossChestTakeEvent *const this)
{
  BossChestTakeEvent::~BossChestTakeEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 1092: range 00000000140FCA36-00000000140FCA83
void __cdecl BossChestTakeEvent::~BossChestTakeEvent(BossChestTakeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BossChestTakeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1095: range 0000000013EB6AEA-0000000013EB6B37
void __cdecl BossChestTakeEvent::BossChestTakeEvent(BossChestTakeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'BossChestTakeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 1099: range 0000000017888D88-0000000017888DD5
void __cdecl PlayerCookEvent::~PlayerCookEvent(PlayerCookEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerCookEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1099: range 0000000017888DD6-0000000017888E00
void __cdecl PlayerCookEvent::~PlayerCookEvent(PlayerCookEvent *const this)
{
  PlayerCookEvent::~PlayerCookEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1102: range 0000000017630720-0000000017630835
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerCookEvent::PlayerCookEvent(
        PlayerCookEvent *const this,
        uint32_t recipe_id,
        uint32_t qte_quality,
        uint32_t cook_count)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'PlayerCookEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&recipe_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recipe_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->recipe_id, *(_QWORD *)&recipe_id, &this->recipe_id);
  }
  this->recipe_id = recipe_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->qte_quality >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->qte_quality >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->qte_quality, v5, v6);
  this->qte_quality = qte_quality;
  if ( *(_BYTE *)(((unsigned __int64)&this->cook_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cook_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cook_count, v5, &this->cook_count);
  }
  this->cook_count = cook_count;
};

// Line 1111: range 0000000016833BD0-0000000016833C2D
void __cdecl PlayerForgeEvent::~PlayerForgeEvent(PlayerForgeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerForgeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::map<unsigned int,unsigned int>::~map(&this->output_item_map);
  BaseEvent::~BaseEvent(this);
};

// Line 1111: range 0000000016833C2E-0000000016833C58
void __cdecl PlayerForgeEvent::~PlayerForgeEvent(PlayerForgeEvent *const this)
{
  PlayerForgeEvent::~PlayerForgeEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 1114: range 000000001666713C-000000001666724F
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerForgeEvent::PlayerForgeEvent(
        PlayerForgeEvent *const this,
        uint32_t forge_id,
        uint32_t forge_count,
        std::map<unsigned int,unsigned int> *p_output_item_map)
{
  int (**v4)(...); // rdx
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'PlayerForgeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&forge_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->forge_id, *(_QWORD *)&forge_id, &this->forge_id);
  }
  this->forge_id = forge_id;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->forge_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->forge_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->forge_count, (((_BYTE)this + 28) & 7u) + 3, v5);
  this->forge_count = forge_count;
  std::map<unsigned int,unsigned int>::map(&this->output_item_map, p_output_item_map);
};

// Line 1123: range 0000000017888D5C-0000000017888D86
void __cdecl PlayerCompoundEvent::~PlayerCompoundEvent(PlayerCompoundEvent *const this)
{
  PlayerCompoundEvent::~PlayerCompoundEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1123: range 0000000017888D0E-0000000017888D5B
void __cdecl PlayerCompoundEvent::~PlayerCompoundEvent(PlayerCompoundEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerCompoundEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1126: range 0000000017630836-00000000176308C3
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerCompoundEvent::PlayerCompoundEvent(PlayerCompoundEvent *const this, uint32_t compound_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PlayerCompoundEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&compound_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->compound_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->compound_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->compound_id, *(_QWORD *)&compound_id, &this->compound_id);
  }
  this->compound_id = compound_id;
};

// Line 1133: range 0000000017888C94-0000000017888CE1
void __cdecl PlayerCombineEvent::~PlayerCombineEvent(PlayerCombineEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerCombineEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1133: range 0000000017888CE2-0000000017888D0C
void __cdecl PlayerCombineEvent::~PlayerCombineEvent(PlayerCombineEvent *const this)
{
  PlayerCombineEvent::~PlayerCombineEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1136: range 00000000176308C4-00000000176309D9
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerCombineEvent::PlayerCombineEvent(
        PlayerCombineEvent *const this,
        uint32_t combine_id,
        uint32_t combine_count,
        uint32_t combine_type)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'PlayerCombineEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&combine_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combine_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combine_id, *(_QWORD *)&combine_id, &this->combine_id);
  }
  this->combine_id = combine_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->combine_count, v5, v6);
  this->combine_count = combine_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combine_type, v5, &this->combine_type);
  }
  this->combine_type = combine_type;
};

// Line 1148: range 00000000140FCA0A-00000000140FCA34
void __cdecl PlayerBuyShopEvent::~PlayerBuyShopEvent(PlayerBuyShopEvent *const this)
{
  PlayerBuyShopEvent::~PlayerBuyShopEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 1148: range 00000000140FC9BC-00000000140FCA09
void __cdecl PlayerBuyShopEvent::~PlayerBuyShopEvent(PlayerBuyShopEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerBuyShopEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1162: range 00000000148397BA-00000000148397E4
void __cdecl PlatformStartMoveEvent::~PlatformStartMoveEvent(PlatformStartMoveEvent *const this)
{
  PlatformStartMoveEvent::~PlatformStartMoveEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1162: range 000000001483976C-00000000148397B9
void __cdecl PlatformStartMoveEvent::~PlatformStartMoveEvent(PlatformStartMoveEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlatformStartMoveEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1165: range 0000000014615EE8-0000000014615F75
// local variable allocation has failed, the output may be wrong!
void __cdecl PlatformStartMoveEvent::PlatformStartMoveEvent(PlatformStartMoveEvent *const this, uint32_t gadget_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PlatformStartMoveEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gadget_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, *(_QWORD *)&gadget_id, &this->gadget_id);
  }
  this->gadget_id = gadget_id;
};

// Line 1172: range 000000001434B0A2-000000001434B0EF
void __cdecl DoGachaEvent::~DoGachaEvent(DoGachaEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DoGachaEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1172: range 000000001434B0F0-000000001434B11A
void __cdecl DoGachaEvent::~DoGachaEvent(DoGachaEvent *const this)
{
  DoGachaEvent::~DoGachaEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1175: range 00000000141ED9B6-00000000141EDACB
// local variable allocation has failed, the output may be wrong!
void __cdecl DoGachaEvent::DoGachaEvent(
        DoGachaEvent *const this,
        uint32_t gacha_type,
        uint32_t schedule_id,
        uint32_t gacha_times)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'DoGachaEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gacha_type);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_type, *(_QWORD *)&gacha_type, &this->gacha_type);
  }
  this->gacha_type = gacha_type;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->schedule_id, v5, v6);
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gacha_times, v5, &this->gacha_times);
  }
  this->gacha_times = gacha_times;
};

// Line 1184: range 0000000017888C68-0000000017888C92
void __cdecl ReliquaryAddExpEvent::~ReliquaryAddExpEvent(ReliquaryAddExpEvent *const this)
{
  ReliquaryAddExpEvent::~ReliquaryAddExpEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1184: range 0000000017888C1A-0000000017888C67
void __cdecl ReliquaryAddExpEvent::~ReliquaryAddExpEvent(ReliquaryAddExpEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ReliquaryAddExpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1187: range 00000000176309DA-0000000017630AAF
// local variable allocation has failed, the output may be wrong!
void __cdecl ReliquaryAddExpEvent::ReliquaryAddExpEvent(
        ReliquaryAddExpEvent *const this,
        uint32_t reliquery_id,
        uint32_t add_exp)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ReliquaryAddExpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&reliquery_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reliquery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reliquery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reliquery_id, *(_QWORD *)&reliquery_id, &this->reliquery_id);
  }
  this->reliquery_id = reliquery_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->add_exp >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_exp >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->add_exp, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->add_exp = add_exp;
};

// Line 1194: range 0000000013612376-00000000136123C3
void __cdecl OpenBlossomChestEvent::~OpenBlossomChestEvent(OpenBlossomChestEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'OpenBlossomChestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1194: range 00000000136123C4-00000000136123EE
void __cdecl OpenBlossomChestEvent::~OpenBlossomChestEvent(OpenBlossomChestEvent *const this)
{
  OpenBlossomChestEvent::~OpenBlossomChestEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1197: range 00000000131D3A2E-00000000131D3B03
// local variable allocation has failed, the output may be wrong!
void __cdecl OpenBlossomChestEvent::OpenBlossomChestEvent(
        OpenBlossomChestEvent *const this,
        uint32_t gadget_id,
        uint32_t refresh_type)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'OpenBlossomChestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gadget_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, *(_QWORD *)&gadget_id, &this->gadget_id);
  }
  this->gadget_id = gadget_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->refresh_type, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->refresh_type = refresh_type;
};

// Line 1204: range 00000000174B2AE4-00000000174B2B0E
void __cdecl FinishBlossomProgressEvent::~FinishBlossomProgressEvent(FinishBlossomProgressEvent *const this)
{
  FinishBlossomProgressEvent::~FinishBlossomProgressEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 1204: range 00000000174B2A86-00000000174B2AE3
void __cdecl FinishBlossomProgressEvent::~FinishBlossomProgressEvent(FinishBlossomProgressEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishBlossomProgressEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::weak_ptr<Group>::~weak_ptr(&this->group_wtr);
  BaseEvent::~BaseEvent(this);
};

// Line 1207: range 000000001720D2B4-000000001720D3A4
// local variable allocation has failed, the output may be wrong!
void __cdecl FinishBlossomProgressEvent::FinishBlossomProgressEvent(
        FinishBlossomProgressEvent *const this,
        uint32_t refresh_id,
        uint32_t refresh_type,
        GroupPtr *p_group_ptr)
{
  int (**v4)(...); // rdx
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'FinishBlossomProgressEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&refresh_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_id, *(_QWORD *)&refresh_id, &this->refresh_id);
  }
  this->refresh_id = refresh_id;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->refresh_type, (((_BYTE)this + 28) & 7u) + 3, v5);
  this->refresh_type = refresh_type;
  std::weak_ptr<Group>::weak_ptr<Group,void>(&this->group_wtr, p_group_ptr);
};

// Line 1215: range 0000000016833B56-0000000016833BA3
void __cdecl EffigyChallengeScoreEvent::~EffigyChallengeScoreEvent(EffigyChallengeScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EffigyChallengeScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1215: range 0000000016833BA4-0000000016833BCE
void __cdecl EffigyChallengeScoreEvent::~EffigyChallengeScoreEvent(EffigyChallengeScoreEvent *const this)
{
  EffigyChallengeScoreEvent::~EffigyChallengeScoreEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 1218: range 0000000016667250-000000001666729D
void __cdecl EffigyChallengeScoreEvent::EffigyChallengeScoreEvent(EffigyChallengeScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'EffigyChallengeScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 1222: range 00000000154CD748-00000000154CD795
void __cdecl ActivityExpeditionFinishEvent::~ActivityExpeditionFinishEvent(ActivityExpeditionFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityExpeditionFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1222: range 00000000154CD796-00000000154CD7C0
void __cdecl ActivityExpeditionFinishEvent::~ActivityExpeditionFinishEvent(ActivityExpeditionFinishEvent *const this)
{
  ActivityExpeditionFinishEvent::~ActivityExpeditionFinishEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 1225: range 0000000015181CA8-0000000015181CF5
void __cdecl ActivityExpeditionFinishEvent::ActivityExpeditionFinishEvent(ActivityExpeditionFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'ActivityExpeditionFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 1228: range 00000000150325EE-000000001503263B
void __cdecl DungeonChallengeSuccessEvent::~DungeonChallengeSuccessEvent(DungeonChallengeSuccessEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DungeonChallengeSuccessEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1228: range 000000001503263C-0000000015032666
void __cdecl DungeonChallengeSuccessEvent::~DungeonChallengeSuccessEvent(DungeonChallengeSuccessEvent *const this)
{
  DungeonChallengeSuccessEvent::~DungeonChallengeSuccessEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 1231: range 0000000014F75068-0000000014F75207
// local variable allocation has failed, the output may be wrong!
void __cdecl DungeonChallengeSuccessEvent::DungeonChallengeSuccessEvent(
        DungeonChallengeSuccessEvent *const this,
        uint32_t dungeon_id,
        uint32_t group_id,
        uint32_t challenge_id,
        uint32_t scene_id,
        uint32_t challenge_index)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'DungeonChallengeSuccessEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->group_id, v7, v8);
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id, v7, &this->challenge_id);
  }
  this->challenge_id = challenge_id;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->scene_id, v9, v10);
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_index, v9, &this->challenge_index);
  }
  this->challenge_index = challenge_index;
};

// Line 1241: range 0000000015032574-00000000150325C1
void __cdecl DungeonChallengeFinishEvent::~DungeonChallengeFinishEvent(DungeonChallengeFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DungeonChallengeFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1241: range 00000000150325C2-00000000150325EC
void __cdecl DungeonChallengeFinishEvent::~DungeonChallengeFinishEvent(DungeonChallengeFinishEvent *const this)
{
  DungeonChallengeFinishEvent::~DungeonChallengeFinishEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1244: range 0000000014F75208-0000000014F75366
// local variable allocation has failed, the output may be wrong!
void __cdecl DungeonChallengeFinishEvent::DungeonChallengeFinishEvent(
        DungeonChallengeFinishEvent *const this,
        uint32_t dungeon_id,
        uint32_t group_id,
        uint32_t challenge_id,
        bool is_success)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'DungeonChallengeFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->group_id, v6, v7);
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id, v6, &this->challenge_id);
  }
  this->challenge_id = challenge_id;
  v8 = ((_BYTE)this + 36) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_success, v8, v9);
  this->is_success = is_success;
};

// Line 1254: range 00000000140FC990-00000000140FC9BA
void __cdecl ChangeCondStateEvent::~ChangeCondStateEvent(ChangeCondStateEvent *const this)
{
  ChangeCondStateEvent::~ChangeCondStateEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1254: range 00000000140FC942-00000000140FC98F
void __cdecl ChangeCondStateEvent::~ChangeCondStateEvent(ChangeCondStateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChangeCondStateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1257: range 0000000013EB6CFE-0000000013EB6E16
// local variable allocation has failed, the output may be wrong!
void __cdecl ChangeCondStateEvent::ChangeCondStateEvent(
        ChangeCondStateEvent *const this,
        uint32_t activity_id,
        uint32_t cond_id,
        bool is_active)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'ChangeCondStateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, &this->activity_id);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cond_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->cond_id, v5, v6);
  this->cond_id = cond_id;
  if ( *(char *)(((unsigned __int64)&this->is_active >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_active, v5, &this->is_active);
  this->is_active = is_active;
};

// Line 1266: range 00000000144F0B12-00000000144F0B3C
void __cdecl QuestStateChangeEvent::~QuestStateChangeEvent(QuestStateChangeEvent *const this)
{
  QuestStateChangeEvent::~QuestStateChangeEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1266: range 00000000144F0AC4-00000000144F0B11
void __cdecl QuestStateChangeEvent::~QuestStateChangeEvent(QuestStateChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'QuestStateChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1269: range 00000000143FC0A2-00000000143FC1B7
// local variable allocation has failed, the output may be wrong!
void __cdecl QuestStateChangeEvent::QuestStateChangeEvent(
        QuestStateChangeEvent *const this,
        uint32_t quest_id,
        uint32_t quest_state,
        uint32_t old_quest_state)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'QuestStateChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&quest_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id, *(_QWORD *)&quest_id, &this->quest_id);
  }
  this->quest_id = quest_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->quest_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->quest_state, v5, v6);
  this->quest_state = quest_state;
  if ( *(_BYTE *)(((unsigned __int64)&this->old_quest_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->old_quest_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->old_quest_state, v5, &this->old_quest_state);
  }
  this->old_quest_state = old_quest_state;
};

// Line 1278: range 0000000017096458-00000000170964B5
void __cdecl MpPlayBattleSettleEvent::~MpPlayBattleSettleEvent(MpPlayBattleSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MpPlayBattleSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::~vector(&this->uid_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 1278: range 00000000170964B6-00000000170964E0
void __cdecl MpPlayBattleSettleEvent::~MpPlayBattleSettleEvent(MpPlayBattleSettleEvent *const this)
{
  MpPlayBattleSettleEvent::~MpPlayBattleSettleEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 1281: range 0000000016D58690-0000000016D588C1
// local variable allocation has failed, the output may be wrong!
void __cdecl MpPlayBattleSettleEvent::MpPlayBattleSettleEvent(
        MpPlayBattleSettleEvent *const this,
        uint32_t mp_play_id,
        uint32_t mp_play_type,
        bool is_win,
        uint32_t cost_time,
        uint32_t score,
        uint32_t world_level,
        uint32_t team_score)
{
  int (**v8)(...); // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx

  BaseEvent::BaseEvent(this);
  v8 = (int (**)(...))(&`vtable for'MpPlayBattleSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&mp_play_id);
  this->_vptr_BaseEvent = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id, *(_QWORD *)&mp_play_id, &this->mp_play_id);
  }
  this->mp_play_id = mp_play_id;
  v9 = (((_BYTE)this + 28) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->mp_play_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_play_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->mp_play_type, v9, v10);
  this->mp_play_type = mp_play_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_time, v9, &this->cost_time);
  }
  this->cost_time = cost_time;
  v11 = ((_BYTE)this + 36) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_win, v11, v12);
  this->is_win = is_win;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score, v11, &this->score);
  }
  this->score = score;
  v13 = (((_BYTE)this + 44) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->battle_world_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_world_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->battle_world_level, v13, v14);
  this->battle_world_level = world_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->team_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->team_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->team_score, v13, &this->team_score);
  }
  this->team_score = team_score;
  std::vector<unsigned int>::vector(&this->uid_vec);
};

// Line 1298: range 0000000015032548-0000000015032572
void __cdecl ScenePlayBattleSettleEvent::~ScenePlayBattleSettleEvent(ScenePlayBattleSettleEvent *const this)
{
  ScenePlayBattleSettleEvent::~ScenePlayBattleSettleEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1298: range 00000000150324FA-0000000015032547
void __cdecl ScenePlayBattleSettleEvent::~ScenePlayBattleSettleEvent(ScenePlayBattleSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ScenePlayBattleSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1301: range 0000000014F75368-0000000014F754C6
// local variable allocation has failed, the output may be wrong!
void __cdecl ScenePlayBattleSettleEvent::ScenePlayBattleSettleEvent(
        ScenePlayBattleSettleEvent *const this,
        uint32_t mp_play_id,
        uint32_t mp_play_type,
        bool is_win,
        uint32_t cost_time)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'ScenePlayBattleSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&mp_play_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id, *(_QWORD *)&mp_play_id, &this->mp_play_id);
  }
  this->mp_play_id = mp_play_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->mp_play_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_play_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->mp_play_type, v6, v7);
  this->mp_play_type = mp_play_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_time, v6, &this->cost_time);
  }
  this->cost_time = cost_time;
  v8 = ((_BYTE)this + 36) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_win, v8, v9);
  this->is_win = is_win;
};

// Line 1314: range 0000000015032470-00000000150324CD
void __cdecl ScenePlayBattleSettleResultEvent::~ScenePlayBattleSettleResultEvent(
        ScenePlayBattleSettleResultEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ScenePlayBattleSettleResultEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::set<unsigned int>::~set(&this->finished_watcher_set);
  BaseEvent::~BaseEvent(this);
};

// Line 1314: range 00000000150324CE-00000000150324F8
void __cdecl ScenePlayBattleSettleResultEvent::~ScenePlayBattleSettleResultEvent(
        ScenePlayBattleSettleResultEvent *const this)
{
  ScenePlayBattleSettleResultEvent::~ScenePlayBattleSettleResultEvent(this);
  operator delete(this, 0x60uLL);
};

// Line 1317: range 0000000014F754C8-0000000014F756A1
// local variable allocation has failed, the output may be wrong!
void __cdecl ScenePlayBattleSettleResultEvent::ScenePlayBattleSettleResultEvent(
        ScenePlayBattleSettleResultEvent *const this,
        uint32_t mp_play_id,
        uint32_t mp_play_type,
        bool is_win,
        uint32_t score,
        uint32_t battle_world_level,
        std::set<unsigned int> *p_finished_watcher_set)
{
  int (**v7)(...); // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx

  BaseEvent::BaseEvent(this);
  v7 = (int (**)(...))(&`vtable for'ScenePlayBattleSettleResultEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&mp_play_id);
  this->_vptr_BaseEvent = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id, *(_QWORD *)&mp_play_id, &this->mp_play_id);
  }
  this->mp_play_id = mp_play_id;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->mp_play_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_play_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->mp_play_type, v8, v9);
  this->mp_play_type = mp_play_type;
  if ( *(char *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_win, v8, &this->is_win);
  this->is_win = is_win;
  v10 = (((_BYTE)this + 36) & 7u) + 3;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->score, v10, v11);
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->battle_world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->battle_world_level, v10, &this->battle_world_level);
  }
  this->battle_world_level = battle_world_level;
  std::set<unsigned int>::set(&this->finished_watcher_set, p_finished_watcher_set);
};

// Line 1332: range 0000000017888BEE-0000000017888C18
void __cdecl CrucibleSubmitMaxBall::~CrucibleSubmitMaxBall(CrucibleSubmitMaxBall *const this)
{
  CrucibleSubmitMaxBall::~CrucibleSubmitMaxBall(this);
  operator delete(this, 0x20uLL);
};

// Line 1332: range 0000000017888BA0-0000000017888BED
void __cdecl CrucibleSubmitMaxBall::~CrucibleSubmitMaxBall(CrucibleSubmitMaxBall *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrucibleSubmitMaxBall + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1335: range 0000000017630AB0-0000000017630B85
// local variable allocation has failed, the output may be wrong!
void __cdecl CrucibleSubmitMaxBall::CrucibleSubmitMaxBall(
        CrucibleSubmitMaxBall *const this,
        uint32_t mp_play_id,
        uint32_t ball_num)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'CrucibleSubmitMaxBall + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&mp_play_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id, *(_QWORD *)&mp_play_id, &this->mp_play_id);
  }
  this->mp_play_id = mp_play_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->ball_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ball_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->ball_num, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->ball_num = ball_num;
};

// Line 1344: range 0000000017888B74-0000000017888B9E
void __cdecl CrucibleMaxElementScore::~CrucibleMaxElementScore(CrucibleMaxElementScore *const this)
{
  CrucibleMaxElementScore::~CrucibleMaxElementScore(this);
  operator delete(this, 0x20uLL);
};

// Line 1344: range 0000000017888B26-0000000017888B73
void __cdecl CrucibleMaxElementScore::~CrucibleMaxElementScore(CrucibleMaxElementScore *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrucibleMaxElementScore + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1347: range 0000000017630B86-0000000017630C5B
// local variable allocation has failed, the output may be wrong!
void __cdecl CrucibleMaxElementScore::CrucibleMaxElementScore(
        CrucibleMaxElementScore *const this,
        uint32_t mp_play_id,
        uint32_t element_score)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'CrucibleMaxElementScore + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&mp_play_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id, *(_QWORD *)&mp_play_id, &this->mp_play_id);
  }
  this->mp_play_id = mp_play_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->element_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->element_score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->element_score = element_score;
};

// Line 1356: range 0000000017888AFA-0000000017888B24
void __cdecl CrucibleSubmitBall::~CrucibleSubmitBall(CrucibleSubmitBall *const this)
{
  CrucibleSubmitBall::~CrucibleSubmitBall(this);
  operator delete(this, 0x28uLL);
};

// Line 1356: range 0000000017888AAC-0000000017888AF9
void __cdecl CrucibleSubmitBall::~CrucibleSubmitBall(CrucibleSubmitBall *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrucibleSubmitBall + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1359: range 0000000017630C5C-0000000017630D71
// local variable allocation has failed, the output may be wrong!
void __cdecl CrucibleSubmitBall::CrucibleSubmitBall(
        CrucibleSubmitBall *const this,
        uint32_t mp_play_id,
        uint32_t element_type,
        uint32_t num)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'CrucibleSubmitBall + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&mp_play_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id, *(_QWORD *)&mp_play_id, &this->mp_play_id);
  }
  this->mp_play_id = mp_play_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->element_type, v5, v6);
  this->element_type = element_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->num, v5, &this->num);
  }
  this->num = num;
};

// Line 1369: range 0000000016B7CC2E-0000000016B7CC58
void __cdecl EnvAnimalEvent::~EnvAnimalEvent(EnvAnimalEvent *const this)
{
  EnvAnimalEvent::~EnvAnimalEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1369: range 0000000016B7CBE0-0000000016B7CC2D
void __cdecl EnvAnimalEvent::~EnvAnimalEvent(EnvAnimalEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnvAnimalEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1372: range 0000000016904990-0000000016904A1D
// local variable allocation has failed, the output may be wrong!
void __cdecl EnvAnimalEvent::EnvAnimalEvent(EnvAnimalEvent *const this, uint32_t monster_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'EnvAnimalEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&monster_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id, *(_QWORD *)&monster_id, &this->monster_id);
  }
  this->monster_id = monster_id;
};

// Line 1372: range 0000000016904A1E-0000000016904AE9
void __cdecl SendOfflineMsgRspEvent::SendOfflineMsgRspEvent(
        SendOfflineMsgRspEvent *const this,
        const std::string *ticket,
        int32_t retcode)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'SendOfflineMsgRspEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, ticket);
  this->_vptr_BaseEvent = v3;
  std::string::basic_string(&this->ticket, ticket);
  if ( *(_BYTE *)(((unsigned __int64)&this->retcode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->retcode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->retcode, ticket, &this->retcode);
  }
  this->retcode = retcode;
};

// Line 1378: range 00000000140FC916-00000000140FC940
void __cdecl SeeAnimalEvent::~SeeAnimalEvent(SeeAnimalEvent *const this)
{
  SeeAnimalEvent::~SeeAnimalEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1378: range 00000000140FC8C8-00000000140FC915
void __cdecl SeeAnimalEvent::~SeeAnimalEvent(SeeAnimalEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SeeAnimalEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1381: range 0000000013EB6E18-0000000013EB6EA5
// local variable allocation has failed, the output may be wrong!
void __cdecl SeeAnimalEvent::SeeAnimalEvent(SeeAnimalEvent *const this, uint32_t monster_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'SeeAnimalEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&monster_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id, *(_QWORD *)&monster_id, &this->monster_id);
  }
  this->monster_id = monster_id;
};

// Line 1387: range 00000000144F0A98-00000000144F0AC2
void __cdecl PushTipAddEvent::~PushTipAddEvent(PushTipAddEvent *const this)
{
  PushTipAddEvent::~PushTipAddEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1387: range 00000000144F0A4A-00000000144F0A97
void __cdecl PushTipAddEvent::~PushTipAddEvent(PushTipAddEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PushTipAddEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1390: range 00000000143FC1B8-00000000143FC245
// local variable allocation has failed, the output may be wrong!
void __cdecl PushTipAddEvent::PushTipAddEvent(PushTipAddEvent *const this, uint32_t push_tip_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PushTipAddEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&push_tip_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->push_tip_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->push_tip_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->push_tip_id, *(_QWORD *)&push_tip_id, &this->push_tip_id);
  }
  this->push_tip_id = push_tip_id;
};

// Line 1396: range 0000000017888A80-0000000017888AAA
void __cdecl ViewSceneryEvent::~ViewSceneryEvent(ViewSceneryEvent *const this)
{
  ViewSceneryEvent::~ViewSceneryEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1396: range 0000000017888A32-0000000017888A7F
void __cdecl ViewSceneryEvent::~ViewSceneryEvent(ViewSceneryEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ViewSceneryEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1399: range 0000000017630D72-0000000017630E87
// local variable allocation has failed, the output may be wrong!
void __cdecl ViewSceneryEvent::ViewSceneryEvent(
        ViewSceneryEvent *const this,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t config_id)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'ViewSceneryEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->group_id, v5, v6);
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v5, &this->config_id);
  }
  this->config_id = config_id;
};

// Line 1408: range 000000001361234A-0000000013612374
void __cdecl EnterMpEvent::~EnterMpEvent(EnterMpEvent *const this)
{
  EnterMpEvent::~EnterMpEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 1408: range 00000000136122EC-0000000013612349
void __cdecl EnterMpEvent::~EnterMpEvent(EnterMpEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterMpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::~vector(&this->uid_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 1418: range 0000000016189620-000000001618966D
void __cdecl CreateNpcEvent::~CreateNpcEvent(CreateNpcEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CreateNpcEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1418: range 000000001618966E-0000000016189698
void __cdecl CreateNpcEvent::~CreateNpcEvent(CreateNpcEvent *const this)
{
  CreateNpcEvent::~CreateNpcEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1421: range 000000001604EEFC-000000001604F05A
// local variable allocation has failed, the output may be wrong!
void __cdecl CreateNpcEvent::CreateNpcEvent(
        CreateNpcEvent *const this,
        uint32_t npc_id,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t config_id)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'CreateNpcEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&npc_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->npc_id, *(_QWORD *)&npc_id, &this->npc_id);
  }
  this->npc_id = npc_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->scene_id, v6, v7);
  this->scene_id = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v6, &this->group_id);
  }
  this->group_id = group_id;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->config_id, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->config_id = config_id;
};

// Line 1431: range 0000000014D24BFE-0000000014D24C4B
void __cdecl GroupMarkPlayerActionEvent::~GroupMarkPlayerActionEvent(GroupMarkPlayerActionEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupMarkPlayerActionEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1431: range 0000000014D24C4C-0000000014D24C76
void __cdecl GroupMarkPlayerActionEvent::~GroupMarkPlayerActionEvent(GroupMarkPlayerActionEvent *const this)
{
  GroupMarkPlayerActionEvent::~GroupMarkPlayerActionEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 1434: range 00000000149ECA18-00000000149ECBFC
// local variable allocation has failed, the output may be wrong!
void __cdecl GroupMarkPlayerActionEvent::GroupMarkPlayerActionEvent(
        GroupMarkPlayerActionEvent *const this,
        uint32_t p1,
        uint32_t p2,
        uint32_t p3,
        uint32_t group_id,
        uint32_t city_id,
        uint32_t group_area_id)
{
  int (**v7)(...); // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx

  BaseEvent::BaseEvent(this);
  v7 = (int (**)(...))(&`vtable for'GroupMarkPlayerActionEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&p1);
  this->_vptr_BaseEvent = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_action_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_action_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_action_param1, *(_QWORD *)&p1, &this->player_action_param1);
  }
  this->player_action_param1 = p1;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->player_action_param2 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_action_param2 >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->player_action_param2, v8, v9);
  this->player_action_param2 = p2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_action_param3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_action_param3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_action_param3, v8, &this->player_action_param3);
  }
  this->player_action_param3 = p3;
  v10 = (((_BYTE)this + 36) & 7u) + 3;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->group_id, v10, v11);
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v10, &this->city_id);
  }
  this->city_id = city_id;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->group_area_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_area_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->group_area_id, (((_BYTE)this + 44) & 7u) + 3, v12);
  this->group_area_id = group_area_id;
};

// Line 1446: range 00000000170963DE-000000001709642B
void __cdecl UnlockPersonalLineEvent::~UnlockPersonalLineEvent(UnlockPersonalLineEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockPersonalLineEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1446: range 000000001709642C-0000000017096456
void __cdecl UnlockPersonalLineEvent::~UnlockPersonalLineEvent(UnlockPersonalLineEvent *const this)
{
  UnlockPersonalLineEvent::~UnlockPersonalLineEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1449: range 0000000016D588C2-0000000016D5894F
// local variable allocation has failed, the output may be wrong!
void __cdecl UnlockPersonalLineEvent::UnlockPersonalLineEvent(UnlockPersonalLineEvent *const this, uint32_t pline_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'UnlockPersonalLineEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&pline_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->personal_line_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->personal_line_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->personal_line_id, *(_QWORD *)&pline_id, &this->personal_line_id);
  }
  this->personal_line_id = pline_id;
};

// Line 1455: range 0000000013612262-00000000136122BF
void __cdecl GroupsReplaceEvent::~GroupsReplaceEvent(GroupsReplaceEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupsReplaceEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->replaced_groups);
  BaseEvent::~BaseEvent(this);
};

// Line 1455: range 00000000136122C0-00000000136122EA
void __cdecl GroupsReplaceEvent::~GroupsReplaceEvent(GroupsReplaceEvent *const this)
{
  GroupsReplaceEvent::~GroupsReplaceEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 1464: range 000000001434B028-000000001434B075
void __cdecl DailyTaskVarUpdateEvent::~DailyTaskVarUpdateEvent(DailyTaskVarUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DailyTaskVarUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1464: range 000000001434B076-000000001434B0A0
void __cdecl DailyTaskVarUpdateEvent::~DailyTaskVarUpdateEvent(DailyTaskVarUpdateEvent *const this)
{
  DailyTaskVarUpdateEvent::~DailyTaskVarUpdateEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1467: range 00000000141EDACC-00000000141EDC2A
// local variable allocation has failed, the output may be wrong!
void __cdecl DailyTaskVarUpdateEvent::DailyTaskVarUpdateEvent(
        DailyTaskVarUpdateEvent *const this,
        uint32_t task_id,
        uint32_t index,
        int32_t old_value,
        int32_t new_value)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'DailyTaskVarUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&task_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->task_id, *(_QWORD *)&task_id, &this->task_id);
  }
  this->task_id = task_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->index, v6, v7);
  this->index = index;
  if ( *(_BYTE *)(((unsigned __int64)&this->old_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->old_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->old_value, v6, &this->old_value);
  }
  this->old_value = old_value;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->new_value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->new_value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->new_value, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->new_value = new_value;
};

// Line 1477: range 00000000140FC89C-00000000140FC8C6
void __cdecl QuestGlobalVarUpdateEvent::~QuestGlobalVarUpdateEvent(QuestGlobalVarUpdateEvent *const this)
{
  QuestGlobalVarUpdateEvent::~QuestGlobalVarUpdateEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1477: range 00000000140FC84E-00000000140FC89B
void __cdecl QuestGlobalVarUpdateEvent::~QuestGlobalVarUpdateEvent(QuestGlobalVarUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'QuestGlobalVarUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1480: range 0000000013EB6EA6-0000000013EB6FBB
// local variable allocation has failed, the output may be wrong!
void __cdecl QuestGlobalVarUpdateEvent::QuestGlobalVarUpdateEvent(
        QuestGlobalVarUpdateEvent *const this,
        uint32_t id,
        int32_t old_value,
        int32_t new_value)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'QuestGlobalVarUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, *(_QWORD *)&id, &this->id);
  }
  this->id = id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->old_value >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->old_value >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->old_value, v5, v6);
  this->old_value = old_value;
  if ( *(_BYTE *)(((unsigned __int64)&this->new_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->new_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->new_value, v5, &this->new_value);
  }
  this->new_value = new_value;
};

// Line 1489: range 00000000154CD71C-00000000154CD746
void __cdecl FetterLevelUpdateEvent::~FetterLevelUpdateEvent(FetterLevelUpdateEvent *const this)
{
  FetterLevelUpdateEvent::~FetterLevelUpdateEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1489: range 00000000154CD6CE-00000000154CD71B
void __cdecl FetterLevelUpdateEvent::~FetterLevelUpdateEvent(FetterLevelUpdateEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FetterLevelUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1492: range 0000000015181CF6-0000000015181E00
void __cdecl FetterLevelUpdateEvent::FetterLevelUpdateEvent(
        FetterLevelUpdateEvent *const this,
        uint64_t guid,
        uint32_t cur_level,
        uint32_t avatar_id)
{
  int (**v4)(...); // rdx
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'FetterLevelUpdateEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, guid);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->guid, guid);
  this->guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_level, guid, &this->cur_level);
  }
  this->cur_level = cur_level;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->avatar_id, (((_BYTE)this + 36) & 7u) + 3, v5);
  this->avatar_id = avatar_id;
};

// Line 1500: range 0000000013CD1F3A-0000000013CD1F87
void __cdecl FullSatiationEvent::~FullSatiationEvent(FullSatiationEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FullSatiationEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1500: range 0000000013CD1F88-0000000013CD1FB2
void __cdecl FullSatiationEvent::~FullSatiationEvent(FullSatiationEvent *const this)
{
  FullSatiationEvent::~FullSatiationEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1503: range 00000000138422B0-0000000013842332
void __cdecl FullSatiationEvent::FullSatiationEvent(FullSatiationEvent *const this, uint64_t guid)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FullSatiationEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, guid);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, guid);
  this->avatar_guid = guid;
};

// Line 1509: range 0000000016833B2A-0000000016833B54
void __cdecl ActivityTriggerQuestEvent::~ActivityTriggerQuestEvent(ActivityTriggerQuestEvent *const this)
{
  ActivityTriggerQuestEvent::~ActivityTriggerQuestEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1509: range 0000000016833ADC-0000000016833B29
void __cdecl ActivityTriggerQuestEvent::~ActivityTriggerQuestEvent(ActivityTriggerQuestEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityTriggerQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1512: range 000000001666729E-000000001666732B
// local variable allocation has failed, the output may be wrong!
void __cdecl ActivityTriggerQuestEvent::ActivityTriggerQuestEvent(
        ActivityTriggerQuestEvent *const this,
        uint32_t activity_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'ActivityTriggerQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, &this->activity_id);
  }
  this->activity_id = activity_id;
};

// Line 1518: range 0000000013CD1EC0-0000000013CD1F0D
void __cdecl ActivityTriggerUpdateQuestEvent::~ActivityTriggerUpdateQuestEvent(
        ActivityTriggerUpdateQuestEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityTriggerUpdateQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1518: range 0000000013CD1F0E-0000000013CD1F38
void __cdecl ActivityTriggerUpdateQuestEvent::~ActivityTriggerUpdateQuestEvent(
        ActivityTriggerUpdateQuestEvent *const this)
{
  ActivityTriggerUpdateQuestEvent::~ActivityTriggerUpdateQuestEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1521: range 0000000013842334-0000000013842409
// local variable allocation has failed, the output may be wrong!
void __cdecl ActivityTriggerUpdateQuestEvent::ActivityTriggerUpdateQuestEvent(
        ActivityTriggerUpdateQuestEvent *const this,
        uint32_t activity_id,
        uint32_t param)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ActivityTriggerUpdateQuestEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, &this->activity_id);
  }
  this->activity_id = activity_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->param, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->param = param;
};

// Line 1527: range 00000000183285D0-00000000183285FA
void __cdecl SocialDetialEvent::~SocialDetialEvent(SocialDetialEvent *const this)
{
  SocialDetialEvent::~SocialDetialEvent(this);
  operator delete(this, 0xE0uLL);
};

// Line 1527: range 0000000018328572-00000000183285CF
void __cdecl SocialDetialEvent::~SocialDetialEvent(SocialDetialEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SocialDetialEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  proto::SocialDetail::~SocialDetail(&this->detail_data);
  BaseEvent::~BaseEvent(this);
};

// Line 1530: range 00000000180AA34C-00000000180AA3D7
void __cdecl SocialDetialEvent::SocialDetialEvent(
        SocialDetialEvent *const this,
        const proto::SocialDetail *detail_data)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'SocialDetialEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, detail_data);
  this->_vptr_BaseEvent = v2;
  proto::SocialDetail::SocialDetail(&this->detail_data, detail_data);
};

// Line 1538: range 00000000148396F2-000000001483973F
void __cdecl GeneralRewardDestroyEvent::~GeneralRewardDestroyEvent(GeneralRewardDestroyEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GeneralRewardDestroyEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1538: range 0000000014839740-000000001483976A
void __cdecl GeneralRewardDestroyEvent::~GeneralRewardDestroyEvent(GeneralRewardDestroyEvent *const this)
{
  GeneralRewardDestroyEvent::~GeneralRewardDestroyEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1541: range 0000000014615F76-0000000014616003
// local variable allocation has failed, the output may be wrong!
void __cdecl GeneralRewardDestroyEvent::GeneralRewardDestroyEvent(
        GeneralRewardDestroyEvent *const this,
        uint32_t group_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GeneralRewardDestroyEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
};

// Line 1547: range 0000000015F46F26-0000000015F46F73
void __cdecl WorldMpModeChangeEvent::~WorldMpModeChangeEvent(WorldMpModeChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WorldMpModeChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1547: range 0000000015F46F74-0000000015F46F9E
void __cdecl WorldMpModeChangeEvent::~WorldMpModeChangeEvent(WorldMpModeChangeEvent *const this)
{
  WorldMpModeChangeEvent::~WorldMpModeChangeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1550: range 0000000015D31162-0000000015D311EF
// local variable allocation has failed, the output may be wrong!
void __cdecl WorldMpModeChangeEvent::WorldMpModeChangeEvent(WorldMpModeChangeEvent *const this, uint32_t owner_uid)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'WorldMpModeChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&owner_uid);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid, *(_QWORD *)&owner_uid, &this->owner_uid);
  }
  this->owner_uid = owner_uid;
};

// Line 1556: range 000000001434AFAE-000000001434AFFB
void __cdecl MainCoopStartEvent::~MainCoopStartEvent(MainCoopStartEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MainCoopStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1556: range 000000001434AFFC-000000001434B026
void __cdecl MainCoopStartEvent::~MainCoopStartEvent(MainCoopStartEvent *const this)
{
  MainCoopStartEvent::~MainCoopStartEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1559: range 00000000141EDC2C-00000000141EDCB9
// local variable allocation has failed, the output may be wrong!
void __cdecl MainCoopStartEvent::MainCoopStartEvent(MainCoopStartEvent *const this, uint32_t main_coop_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MainCoopStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&main_coop_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_coop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_coop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_coop_id, *(_QWORD *)&main_coop_id, &this->main_coop_id);
  }
  this->main_coop_id = main_coop_id;
};

// Line 1565: range 000000001434AF34-000000001434AF81
void __cdecl MainCoopSavePointEvent::~MainCoopSavePointEvent(MainCoopSavePointEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MainCoopSavePointEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1565: range 000000001434AF82-000000001434AFAC
void __cdecl MainCoopSavePointEvent::~MainCoopSavePointEvent(MainCoopSavePointEvent *const this)
{
  MainCoopSavePointEvent::~MainCoopSavePointEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1568: range 00000000141EDCBA-00000000141EDD8F
// local variable allocation has failed, the output may be wrong!
void __cdecl MainCoopSavePointEvent::MainCoopSavePointEvent(
        MainCoopSavePointEvent *const this,
        uint32_t main_coop_id,
        uint32_t save_point_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'MainCoopSavePointEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&main_coop_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_coop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_coop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_coop_id, *(_QWORD *)&main_coop_id, &this->main_coop_id);
  }
  this->main_coop_id = main_coop_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->save_point_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_point_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->save_point_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->save_point_id = save_point_id;
};

// Line 1576: range 00000000148396C6-00000000148396F0
void __cdecl TakeGeneralRewardEvent::~TakeGeneralRewardEvent(TakeGeneralRewardEvent *const this)
{
  TakeGeneralRewardEvent::~TakeGeneralRewardEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1576: range 0000000014839678-00000000148396C5
void __cdecl TakeGeneralRewardEvent::~TakeGeneralRewardEvent(TakeGeneralRewardEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TakeGeneralRewardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1579: range 00000000146160DA-00000000146161A5
// local variable allocation has failed, the output may be wrong!
void __cdecl FinishMistTrialDungeonEvent::FinishMistTrialDungeonEvent(
        FinishMistTrialDungeonEvent *const this,
        uint32_t dungeon_id,
        std::unordered_map<unsigned int,unsigned int> *stat_id_map)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'FinishMistTrialDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->stat_id_map, stat_id_map);
};

// Line 1579: range 0000000014616004-00000000146160D9
// local variable allocation has failed, the output may be wrong!
void __cdecl TakeGeneralRewardEvent::TakeGeneralRewardEvent(
        TakeGeneralRewardEvent *const this,
        uint32_t gadget_id,
        uint32_t group_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'TakeGeneralRewardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gadget_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_id, *(_QWORD *)&gadget_id, &this->gadget_id);
  }
  this->gadget_id = gadget_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->group_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->group_id = group_id;
};

// Line 1586: range 0000000013612236-0000000013612260
void __cdecl ManualTransportEvent::~ManualTransportEvent(ManualTransportEvent *const this)
{
  ManualTransportEvent::~ManualTransportEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 1586: range 00000000136121E8-0000000013612235
void __cdecl ManualTransportEvent::~ManualTransportEvent(ManualTransportEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ManualTransportEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1589: range 00000000131D3C68-00000000131D3CB5
void __cdecl ManualTransportEvent::ManualTransportEvent(ManualTransportEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'ManualTransportEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 1589: range 00000000131D3CB6-00000000131D3D43
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerEnterHomeEvent::PlayerEnterHomeEvent(PlayerEnterHomeEvent *const this, uint32_t home_uid)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PlayerEnterHomeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&home_uid);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_uid, *(_QWORD *)&home_uid, &this->home_uid);
  }
  this->home_uid = home_uid;
};

// Line 1593: range 00000000154CD6A2-00000000154CD6CC
void __cdecl GroupFlightChallengeReachPointsEvent::~GroupFlightChallengeReachPointsEvent(
        GroupFlightChallengeReachPointsEvent *const this)
{
  GroupFlightChallengeReachPointsEvent::~GroupFlightChallengeReachPointsEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1593: range 00000000154CD654-00000000154CD6A1
void __cdecl GroupFlightChallengeReachPointsEvent::~GroupFlightChallengeReachPointsEvent(
        GroupFlightChallengeReachPointsEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupFlightChallengeReachPointsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1596: range 0000000015181E02-0000000015181ED7
// local variable allocation has failed, the output may be wrong!
void __cdecl GroupFlightChallengeReachPointsEvent::GroupFlightChallengeReachPointsEvent(
        GroupFlightChallengeReachPointsEvent *const this,
        uint32_t group_id,
        uint32_t total_points)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GroupFlightChallengeReachPointsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->total_points >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_points >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->total_points, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->total_points = total_points;
};

// Line 1597: range 0000000015181ED8-0000000015182036
// local variable allocation has failed, the output may be wrong!
void __cdecl FleurFairMusicGameSettleEvent::FleurFairMusicGameSettleEvent(
        FleurFairMusicGameSettleEvent *const this,
        uint32_t music_info_id,
        uint32_t music_basic_id,
        uint32_t score,
        uint32_t combo)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'FleurFairMusicGameSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&music_info_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->music_info_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_info_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_info_id, *(_QWORD *)&music_info_id, &this->music_info_id);
  }
  this->music_info_id = music_info_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->music_basic_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->music_basic_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->music_basic_id, v6, v7);
  this->music_basic_id = music_basic_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score, v6, &this->score);
  }
  this->score = score;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->combo, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->combo = combo;
};

// Line 1603: range 0000000015F46EFA-0000000015F46F24
void __cdecl CityReputationLevelup::~CityReputationLevelup(CityReputationLevelup *const this)
{
  CityReputationLevelup::~CityReputationLevelup(this);
  operator delete(this, 0x20uLL);
};

// Line 1603: range 0000000015F46EAC-0000000015F46EF9
void __cdecl CityReputationLevelup::~CityReputationLevelup(CityReputationLevelup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CityReputationLevelup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1606: range 0000000015D311F0-0000000015D312C5
// local variable allocation has failed, the output may be wrong!
void __cdecl CityReputationLevelup::CityReputationLevelup(
        CityReputationLevelup *const this,
        uint32_t city_id,
        uint32_t level)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'CityReputationLevelup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&city_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, *(_QWORD *)&city_id, &this->city_id);
  }
  this->city_id = city_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->level, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->level = level;
};

// Line 1614: range 0000000015F46E32-0000000015F46E7F
void __cdecl CityReputationFinishRequest::~CityReputationFinishRequest(CityReputationFinishRequest *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CityReputationFinishRequest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1614: range 0000000015F46E80-0000000015F46EAA
void __cdecl CityReputationFinishRequest::~CityReputationFinishRequest(CityReputationFinishRequest *const this)
{
  CityReputationFinishRequest::~CityReputationFinishRequest(this);
  operator delete(this, 0x20uLL);
};

// Line 1617: range 0000000015D312C6-0000000015D3139B
// local variable allocation has failed, the output may be wrong!
void __cdecl CityReputationFinishRequest::CityReputationFinishRequest(
        CityReputationFinishRequest *const this,
        uint32_t city_id,
        uint32_t request_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'CityReputationFinishRequest + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&city_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, *(_QWORD *)&city_id, &this->city_id);
  }
  this->city_id = city_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->request_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->request_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->request_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->request_id = request_id;
};

// Line 1626: range 0000000015032444-000000001503246E
void __cdecl LuaMarkedChallengeEvent::~LuaMarkedChallengeEvent(LuaMarkedChallengeEvent *const this)
{
  LuaMarkedChallengeEvent::~LuaMarkedChallengeEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 1626: range 00000000150323F6-0000000015032443
void __cdecl LuaMarkedChallengeEvent::~LuaMarkedChallengeEvent(LuaMarkedChallengeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LuaMarkedChallengeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1629: range 0000000014F756A2-0000000014F75887
// local variable allocation has failed, the output may be wrong!
void __cdecl LuaMarkedChallengeEvent::LuaMarkedChallengeEvent(
        LuaMarkedChallengeEvent *const this,
        uint32_t group_id,
        data::ChallengeEventMarkType event_mark,
        uint32_t value,
        bool is_success,
        uint32_t reason)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'LuaMarkedChallengeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->event_mark >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_mark >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->event_mark, v7, v8);
  this->event_mark = event_mark;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v7, &this->value);
  }
  this->value = value;
  v9 = ((_BYTE)this + 36) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_success, v9, v10);
  this->is_success = is_success;
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason, v9, &this->reason);
  }
  this->reason = reason;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->limit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->limit, (((_BYTE)this + 44) & 7u) + 3, v11);
  this->limit = 0;
};

// Line 1631: range 0000000014F75888-0000000014F7595D
// local variable allocation has failed, the output may be wrong!
void __cdecl ChannellerSlabLoopDungeonScoreEvent::ChannellerSlabLoopDungeonScoreEvent(
        ChannellerSlabLoopDungeonScoreEvent *const this,
        uint32_t schedule_id,
        uint32_t activity_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ChannellerSlabLoopDungeonScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&schedule_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, *(_QWORD *)&schedule_id, &this->schedule_id);
  }
  this->schedule_id = schedule_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->activity_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->activity_id = activity_id;
};

// Line 1642: range 0000000017096364-00000000170963B1
void __cdecl WorldHuntingStartEvent::~WorldHuntingStartEvent(WorldHuntingStartEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WorldHuntingStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1642: range 00000000170963B2-00000000170963DC
void __cdecl WorldHuntingStartEvent::~WorldHuntingStartEvent(WorldHuntingStartEvent *const this)
{
  WorldHuntingStartEvent::~WorldHuntingStartEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1645: range 0000000016D58950-0000000016D58A65
// local variable allocation has failed, the output may be wrong!
void __cdecl WorldHuntingStartEvent::WorldHuntingStartEvent(
        WorldHuntingStartEvent *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id,
        uint32_t owner_uid)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'WorldHuntingStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&refresh_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_id, *(_QWORD *)&refresh_id, &this->refresh_id);
  }
  this->refresh_id = refresh_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->monster_config_id, v5, v6);
  this->monster_config_id = monster_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid, v5, &this->owner_uid);
  }
  this->owner_uid = owner_uid;
};

// Line 1656: range 00000000170962EA-0000000017096337
void __cdecl WorldHuntingEndEvent::~WorldHuntingEndEvent(WorldHuntingEndEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WorldHuntingEndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1656: range 0000000017096338-0000000017096362
void __cdecl WorldHuntingEndEvent::~WorldHuntingEndEvent(WorldHuntingEndEvent *const this)
{
  WorldHuntingEndEvent::~WorldHuntingEndEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1659: range 0000000016D58A66-0000000016D58B7B
// local variable allocation has failed, the output may be wrong!
void __cdecl WorldHuntingEndEvent::WorldHuntingEndEvent(
        WorldHuntingEndEvent *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id,
        uint32_t owner_uid)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'WorldHuntingEndEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&refresh_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_id, *(_QWORD *)&refresh_id, &this->refresh_id);
  }
  this->refresh_id = refresh_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->monster_config_id, v5, v6);
  this->monster_config_id = monster_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid, v5, &this->owner_uid);
  }
  this->owner_uid = owner_uid;
};

// Line 1670: range 0000000017096270-00000000170962BD
void __cdecl HuntingFinishEvent::~HuntingFinishEvent(HuntingFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HuntingFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1670: range 00000000170962BE-00000000170962E8
void __cdecl HuntingFinishEvent::~HuntingFinishEvent(HuntingFinishEvent *const this)
{
  HuntingFinishEvent::~HuntingFinishEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1673: range 0000000016D58B7C-0000000016D58C91
// local variable allocation has failed, the output may be wrong!
void __cdecl HuntingFinishEvent::HuntingFinishEvent(
        HuntingFinishEvent *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id,
        uint32_t city_id)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'HuntingFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&refresh_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_id, *(_QWORD *)&refresh_id, &this->refresh_id);
  }
  this->refresh_id = refresh_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->monster_config_id, v5, v6);
  this->monster_config_id = monster_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v5, &this->city_id);
  }
  this->city_id = city_id;
};

// Line 1685: range 0000000017096244-000000001709626E
void __cdecl HuntingFailEvent::~HuntingFailEvent(HuntingFailEvent *const this)
{
  HuntingFailEvent::~HuntingFailEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1685: range 00000000170961F6-0000000017096243
void __cdecl HuntingFailEvent::~HuntingFailEvent(HuntingFailEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HuntingFailEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1688: range 0000000016D58C92-0000000016D58DA7
// local variable allocation has failed, the output may be wrong!
void __cdecl HuntingFailEvent::HuntingFailEvent(
        HuntingFailEvent *const this,
        uint32_t refresh_id,
        uint32_t monster_config_id,
        uint32_t city_id)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'HuntingFailEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&refresh_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_id, *(_QWORD *)&refresh_id, &this->refresh_id);
  }
  this->refresh_id = refresh_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->monster_config_id, v5, v6);
  this->monster_config_id = monster_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->city_id, v5, &this->city_id);
  }
  this->city_id = city_id;
};

// Line 1699: range 0000000016833AB0-0000000016833ADA
void __cdecl DeliveryFinishEvent::~DeliveryFinishEvent(DeliveryFinishEvent *const this)
{
  DeliveryFinishEvent::~DeliveryFinishEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1699: range 0000000016833A62-0000000016833AAF
void __cdecl DeliveryFinishEvent::~DeliveryFinishEvent(DeliveryFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DeliveryFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1702: range 000000001666732C-0000000016667441
// local variable allocation has failed, the output may be wrong!
void __cdecl DeliveryFinishEvent::DeliveryFinishEvent(
        DeliveryFinishEvent *const this,
        uint32_t schedule_id,
        uint32_t day_indx,
        uint32_t parent_quest_id)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'DeliveryFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&schedule_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, *(_QWORD *)&schedule_id, &this->schedule_id);
  }
  this->schedule_id = schedule_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->day_indx >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_indx >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->day_indx, v5, v6);
  this->day_indx = day_indx;
  if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->parent_quest_id, v5, &this->parent_quest_id);
  }
  this->parent_quest_id = parent_quest_id;
};

// Line 1713: range 0000000013CD1E36-0000000013CD1E93
void __cdecl ActivityCondMeetEvent::~ActivityCondMeetEvent(ActivityCondMeetEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityCondMeetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::~vector(&this->cond_id_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 1713: range 0000000013CD1E94-0000000013CD1EBE
void __cdecl ActivityCondMeetEvent::~ActivityCondMeetEvent(ActivityCondMeetEvent *const this)
{
  ActivityCondMeetEvent::~ActivityCondMeetEvent(this);
  operator delete(this, 0x38uLL);
};

// Line 1716: range 000000001384240A-00000000138424D5
// local variable allocation has failed, the output may be wrong!
void __cdecl ActivityCondMeetEvent::ActivityCondMeetEvent(
        ActivityCondMeetEvent *const this,
        uint32_t activity_id,
        const std::vector<unsigned int> *cond_id_vec)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ActivityCondMeetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, &this->activity_id);
  }
  this->activity_id = activity_id;
  std::vector<unsigned int>::vector(&this->cond_id_vec, cond_id_vec);
};

// Line 1725: range 0000000013CD1DAC-0000000013CD1E09
void __cdecl ActivityCondExpireEvent::~ActivityCondExpireEvent(ActivityCondExpireEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityCondExpireEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::~vector(&this->cond_id_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 1725: range 0000000013CD1E0A-0000000013CD1E34
void __cdecl ActivityCondExpireEvent::~ActivityCondExpireEvent(ActivityCondExpireEvent *const this)
{
  ActivityCondExpireEvent::~ActivityCondExpireEvent(this);
  operator delete(this, 0x38uLL);
};

// Line 1728: range 00000000138424D6-00000000138425A1
// local variable allocation has failed, the output may be wrong!
void __cdecl ActivityCondExpireEvent::ActivityCondExpireEvent(
        ActivityCondExpireEvent *const this,
        uint32_t activity_id,
        const std::vector<unsigned int> *cond_id_vec)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ActivityCondExpireEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, &this->activity_id);
  }
  this->activity_id = activity_id;
  std::vector<unsigned int>::vector(&this->cond_id_vec, cond_id_vec);
};

// Line 1737: range 00000000174B2A5A-00000000174B2A84
void __cdecl ChangeClimateAreaEvent::~ChangeClimateAreaEvent(ChangeClimateAreaEvent *const this)
{
  ChangeClimateAreaEvent::~ChangeClimateAreaEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1737: range 00000000174B2A0C-00000000174B2A59
void __cdecl ChangeClimateAreaEvent::~ChangeClimateAreaEvent(ChangeClimateAreaEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChangeClimateAreaEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1740: range 000000001720D3A6-000000001720D47B
// local variable allocation has failed, the output may be wrong!
void __cdecl ChangeClimateAreaEvent::ChangeClimateAreaEvent(
        ChangeClimateAreaEvent *const this,
        uint32_t cur_climate_area_type,
        uint32_t cur_climate_area_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ChangeClimateAreaEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&cur_climate_area_type);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_climate_area_id, *(_QWORD *)&cur_climate_area_type, &this->cur_climate_area_id);
  }
  this->cur_climate_area_id = cur_climate_area_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->cur_climate_area_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_climate_area_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->cur_climate_area_type, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->cur_climate_area_type = cur_climate_area_type;
};

// Line 1748: range 00000000174B2992-00000000174B29DF
void __cdecl ChangeClimateTypeEvent::~ChangeClimateTypeEvent(ChangeClimateTypeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChangeClimateTypeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1748: range 00000000174B29E0-00000000174B2A0A
void __cdecl ChangeClimateTypeEvent::~ChangeClimateTypeEvent(ChangeClimateTypeEvent *const this)
{
  ChangeClimateTypeEvent::~ChangeClimateTypeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1751: range 000000001720D47C-000000001720D509
// local variable allocation has failed, the output may be wrong!
void __cdecl ChangeClimateTypeEvent::ChangeClimateTypeEvent(
        ChangeClimateTypeEvent *const this,
        uint32_t cur_climate_type)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'ChangeClimateTypeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&cur_climate_type);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_climate_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_climate_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_climate_type, *(_QWORD *)&cur_climate_type, &this->cur_climate_type);
  }
  this->cur_climate_type = cur_climate_type;
};

// Line 1758: range 0000000017F53A52-0000000017F53A9F
void __cdecl WeaponAwakenEvent::~WeaponAwakenEvent(WeaponAwakenEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WeaponAwakenEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1758: range 0000000017F53AA0-0000000017F53ACA
void __cdecl WeaponAwakenEvent::~WeaponAwakenEvent(WeaponAwakenEvent *const this)
{
  WeaponAwakenEvent::~WeaponAwakenEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1761: range 0000000017D67DB0-0000000017D67EBA
void __cdecl WeaponAwakenEvent::WeaponAwakenEvent(
        WeaponAwakenEvent *const this,
        uint64_t guid,
        uint32_t weapon_id,
        uint32_t cur_awaken_level)
{
  int (**v4)(...); // rdx
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'WeaponAwakenEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, guid);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->guid, guid);
  this->guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weapon_id, guid, &this->weapon_id);
  }
  this->weapon_id = weapon_id;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->cur_awaken_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_awaken_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->cur_awaken_level, (((_BYTE)this + 36) & 7u) + 3, v5);
  this->cur_awaken_level = cur_awaken_level;
};

// Line 1771: range 0000000015F46DB8-0000000015F46E05
void __cdecl SetAvatarTeamToSceneEvent::~SetAvatarTeamToSceneEvent(SetAvatarTeamToSceneEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SetAvatarTeamToSceneEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1771: range 0000000015F46E06-0000000015F46E30
void __cdecl SetAvatarTeamToSceneEvent::~SetAvatarTeamToSceneEvent(SetAvatarTeamToSceneEvent *const this)
{
  SetAvatarTeamToSceneEvent::~SetAvatarTeamToSceneEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1774: range 0000000015D3139C-0000000015D31429
// local variable allocation has failed, the output may be wrong!
void __cdecl SetAvatarTeamToSceneEvent::SetAvatarTeamToSceneEvent(SetAvatarTeamToSceneEvent *const this, uint32_t uid)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'SetAvatarTeamToSceneEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&uid);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid, *(_QWORD *)&uid, &this->uid);
  }
  this->uid = uid;
};

// Line 1783: range 000000001709617C-00000000170961C9
void __cdecl OfferingLevelupEvent::~OfferingLevelupEvent(OfferingLevelupEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'OfferingLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1783: range 00000000170961CA-00000000170961F4
void __cdecl OfferingLevelupEvent::~OfferingLevelupEvent(OfferingLevelupEvent *const this)
{
  OfferingLevelupEvent::~OfferingLevelupEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1786: range 0000000016D58DA8-0000000016D58E7D
// local variable allocation has failed, the output may be wrong!
void __cdecl OfferingLevelupEvent::OfferingLevelupEvent(
        OfferingLevelupEvent *const this,
        uint32_t offering_id,
        uint32_t level)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'OfferingLevelupEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&offering_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->offering_id, *(_QWORD *)&offering_id, &this->offering_id);
  }
  this->offering_id = offering_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->level, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->level = level;
};

// Line 1795: range 0000000015F46D3E-0000000015F46D8B
void __cdecl SelectWorktopOptionEvent::~SelectWorktopOptionEvent(SelectWorktopOptionEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SelectWorktopOptionEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1795: range 0000000015F46D8C-0000000015F46DB6
void __cdecl SelectWorktopOptionEvent::~SelectWorktopOptionEvent(SelectWorktopOptionEvent *const this)
{
  SelectWorktopOptionEvent::~SelectWorktopOptionEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 1798: range 0000000015D3142A-0000000015D315C9
// local variable allocation has failed, the output may be wrong!
void __cdecl SelectWorktopOptionEvent::SelectWorktopOptionEvent(
        SelectWorktopOptionEvent *const this,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t gadget_id,
        uint32_t option_id)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'SelectWorktopOptionEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->group_id, v7, v8);
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_id, v7, &this->config_id);
  }
  this->config_id = config_id;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->gadget_id, v9, v10);
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->option_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->option_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->option_id, v9, &this->option_id);
  }
  this->option_id = option_id;
};

// Line 1816: range 0000000017096150-000000001709617A
void __cdecl RoutineFinishEvent::~RoutineFinishEvent(RoutineFinishEvent *const this)
{
  RoutineFinishEvent::~RoutineFinishEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1816: range 0000000017096102-000000001709614F
void __cdecl RoutineFinishEvent::~RoutineFinishEvent(RoutineFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RoutineFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1819: range 0000000016D58E7E-0000000016D58F53
// local variable allocation has failed, the output may be wrong!
void __cdecl RoutineFinishEvent::RoutineFinishEvent(
        RoutineFinishEvent *const this,
        uint32_t routine_type,
        uint32_t routine_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'RoutineFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&routine_type);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->routine_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->routine_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->routine_type, *(_QWORD *)&routine_type, &this->routine_type);
  }
  this->routine_type = routine_type;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->routine_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->routine_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->routine_id = routine_id;
};

// Line 1827: range 0000000016B7CB56-0000000016B7CBB3
void __cdecl SendOfflineMsgRspEvent::~SendOfflineMsgRspEvent(SendOfflineMsgRspEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SendOfflineMsgRspEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->ticket);
  BaseEvent::~BaseEvent(this);
};

// Line 1827: range 0000000016B7CBB4-0000000016B7CBDE
void __cdecl SendOfflineMsgRspEvent::~SendOfflineMsgRspEvent(SendOfflineMsgRspEvent *const this)
{
  SendOfflineMsgRspEvent::~SendOfflineMsgRspEvent(this);
  operator delete(this, 0x40uLL);
};

// Line 1838: range 0000000017888A06-0000000017888A30
void __cdecl OpenMechanicusEvent::~OpenMechanicusEvent(OpenMechanicusEvent *const this)
{
  OpenMechanicusEvent::~OpenMechanicusEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1838: range 00000000178889B8-0000000017888A05
void __cdecl OpenMechanicusEvent::~OpenMechanicusEvent(OpenMechanicusEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'OpenMechanicusEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1841: range 0000000017630E88-0000000017630F15
// local variable allocation has failed, the output may be wrong!
void __cdecl OpenMechanicusEvent::OpenMechanicusEvent(OpenMechanicusEvent *const this, uint32_t mechanicus_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'OpenMechanicusEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&mechanicus_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->mechanicus_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mechanicus_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mechanicus_id, *(_QWORD *)&mechanicus_id, &this->mechanicus_id);
  }
  this->mechanicus_id = mechanicus_id;
};

// Line 1847: range 00000000161895A6-00000000161895F3
void __cdecl MechanicusDungeonSettleEvent::~MechanicusDungeonSettleEvent(MechanicusDungeonSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusDungeonSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1847: range 00000000161895F4-000000001618961E
void __cdecl MechanicusDungeonSettleEvent::~MechanicusDungeonSettleEvent(MechanicusDungeonSettleEvent *const this)
{
  MechanicusDungeonSettleEvent::~MechanicusDungeonSettleEvent(this);
  operator delete(this, 0x48uLL);
};

// Line 1850: range 000000001604F05C-000000001604F3CB
// local variable allocation has failed, the output may be wrong!
void __cdecl MechanicusDungeonSettleEvent::MechanicusDungeonSettleEvent(
        MechanicusDungeonSettleEvent *const this,
        uint32_t dungeon_id,
        bool is_teach_difficult_level,
        uint32_t group_id,
        uint32_t play_index,
        bool is_success,
        uint32_t settle_points,
        uint32_t building_points,
        uint32_t cost_building_points,
        uint32_t kill_monsters,
        uint32_t escape_monsters,
        uint32_t cur_round,
        uint32_t total_round)
{
  int (**v13)(...); // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdx

  BaseEvent::BaseEvent(this);
  v13 = (int (**)(...))(&`vtable for'MechanicusDungeonSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v13;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
  v14 = ((_BYTE)this + 28) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->is_teach_difficult_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->is_teach_difficult_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_teach_difficult_level, v14, v15);
  this->is_teach_difficult_level = is_teach_difficult_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v14, &this->group_id);
  }
  this->group_id = group_id;
  v16 = (((_BYTE)this + 36) & 7u) + 3;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->play_index >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store4(&this->play_index, v16, v17);
  this->play_index = play_index;
  if ( *(char *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_success, v16, &this->is_success);
  this->is_success = is_success;
  v18 = (((_BYTE)this + 44) & 7u) + 3;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->settle_points >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->settle_points >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_store4(&this->settle_points, v18, v19);
  this->settle_points = settle_points;
  if ( *(_BYTE *)(((unsigned __int64)&this->building_points >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->building_points >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->building_points, v18, &this->building_points);
  }
  this->building_points = building_points;
  v20 = (((_BYTE)this + 52) & 7u) + 3;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->cost_building_points >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_building_points >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store4(&this->cost_building_points, v20, v21);
  this->cost_building_points = cost_building_points;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monsters >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_monsters >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_monsters, v20, &this->kill_monsters);
  }
  this->kill_monsters = kill_monsters;
  v22 = (((_BYTE)this + 60) & 7u) + 3;
  v23 = (*(_BYTE *)(((unsigned __int64)&this->escape_monsters >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->escape_monsters >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_store4(&this->escape_monsters, v22, v23);
  this->escape_monsters = escape_monsters;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_round, v22, &this->cur_round);
  }
  this->cur_round = cur_round;
  v24 = (*(_BYTE *)(((unsigned __int64)&this->total_round >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_round >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_store4(&this->total_round, (((_BYTE)this + 68) & 7u) + 3, v24);
  this->total_round = total_round;
};

// Line 1884: range 000000001618957A-00000000161895A4
void __cdecl MechanicusBattleWatcherFinishEvent::~MechanicusBattleWatcherFinishEvent(
        MechanicusBattleWatcherFinishEvent *const this)
{
  MechanicusBattleWatcherFinishEvent::~MechanicusBattleWatcherFinishEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1884: range 000000001618952C-0000000016189579
void __cdecl MechanicusBattleWatcherFinishEvent::~MechanicusBattleWatcherFinishEvent(
        MechanicusBattleWatcherFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleWatcherFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1887: range 000000001604F3CC-000000001604F459
// local variable allocation has failed, the output may be wrong!
void __cdecl MechanicusBattleWatcherFinishEvent::MechanicusBattleWatcherFinishEvent(
        MechanicusBattleWatcherFinishEvent *const this,
        uint32_t watcher_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleWatcherFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&watcher_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->watcher_id, *(_QWORD *)&watcher_id, &this->watcher_id);
  }
  this->watcher_id = watcher_id;
};

// Line 1895: range 000000001788898C-00000000178889B6
void __cdecl MechanicusUnlockGearEvent::~MechanicusUnlockGearEvent(MechanicusUnlockGearEvent *const this)
{
  MechanicusUnlockGearEvent::~MechanicusUnlockGearEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1895: range 000000001788893E-000000001788898B
void __cdecl MechanicusUnlockGearEvent::~MechanicusUnlockGearEvent(MechanicusUnlockGearEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusUnlockGearEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1898: range 0000000017630F16-0000000017630FA3
// local variable allocation has failed, the output may be wrong!
void __cdecl MechanicusUnlockGearEvent::MechanicusUnlockGearEvent(
        MechanicusUnlockGearEvent *const this,
        uint32_t gear_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusUnlockGearEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gear_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gear_id, *(_QWORD *)&gear_id, &this->gear_id);
  }
  this->gear_id = gear_id;
};

// Line 1905: range 0000000017888912-000000001788893C
void __cdecl MechanicusLevelupGearEvent::~MechanicusLevelupGearEvent(MechanicusLevelupGearEvent *const this)
{
  MechanicusLevelupGearEvent::~MechanicusLevelupGearEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1905: range 00000000178888C4-0000000017888911
void __cdecl MechanicusLevelupGearEvent::~MechanicusLevelupGearEvent(MechanicusLevelupGearEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusLevelupGearEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1908: range 0000000017630FA4-0000000017631079
// local variable allocation has failed, the output may be wrong!
void __cdecl MechanicusLevelupGearEvent::MechanicusLevelupGearEvent(
        MechanicusLevelupGearEvent *const this,
        uint32_t gear_id,
        uint32_t after_level)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'MechanicusLevelupGearEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gear_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gear_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gear_id, *(_QWORD *)&gear_id, &this->gear_id);
  }
  this->gear_id = gear_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->after_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->after_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->after_level, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->after_level = after_level;
};

// Line 1917: range 0000000017B8EB78-0000000017B8EBC5
void __cdecl BlessingExchangePicEvent::~BlessingExchangePicEvent(BlessingExchangePicEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BlessingExchangePicEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1917: range 0000000017B8EBC6-0000000017B8EBF0
void __cdecl BlessingExchangePicEvent::~BlessingExchangePicEvent(BlessingExchangePicEvent *const this)
{
  BlessingExchangePicEvent::~BlessingExchangePicEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 1920: range 00000000179FDBE0-00000000179FDCB5
// local variable allocation has failed, the output may be wrong!
void __cdecl BlessingExchangePicEvent::BlessingExchangePicEvent(
        BlessingExchangePicEvent *const this,
        uint32_t pic_id,
        bool is_giving)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'BlessingExchangePicEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&pic_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pic_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pic_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pic_id, *(_QWORD *)&pic_id, &this->pic_id);
  }
  this->pic_id = pic_id;
  v4 = ((_BYTE)this + 28) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_giving >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_giving >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_giving, v4, v5);
  this->is_giving = is_giving;
};

// Line 1928: range 0000000017B8EB4C-0000000017B8EB76
void __cdecl BlessingRedeemRewardEvent::~BlessingRedeemRewardEvent(BlessingRedeemRewardEvent *const this)
{
  BlessingRedeemRewardEvent::~BlessingRedeemRewardEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 1928: range 0000000017B8EAFE-0000000017B8EB4B
void __cdecl BlessingRedeemRewardEvent::~BlessingRedeemRewardEvent(BlessingRedeemRewardEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BlessingRedeemRewardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1931: range 00000000179FDCB6-00000000179FDD03
void __cdecl BlessingRedeemRewardEvent::BlessingRedeemRewardEvent(BlessingRedeemRewardEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'BlessingRedeemRewardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 1935: range 0000000018328546-0000000018328570
void __cdecl GalleryBalloonSettleEvent::~GalleryBalloonSettleEvent(GalleryBalloonSettleEvent *const this)
{
  GalleryBalloonSettleEvent::~GalleryBalloonSettleEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 1935: range 00000000183284E8-0000000018328545
void __cdecl GalleryBalloonSettleEvent::~GalleryBalloonSettleEvent(GalleryBalloonSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryBalloonSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::map<unsigned int,proto::BalloonSettleInfo>::~map(&this->player_settle_info_map);
  BaseEvent::~BaseEvent(this);
};

// Line 1938: range 00000000180AA448-00000000180AA573
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryBalloonSettleEvent::GalleryBalloonSettleEvent(
        GalleryBalloonSettleEvent *const this,
        uint32_t gallery_id,
        bool is_time_up,
        bool is_single)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'GalleryBalloonSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  v5 = ((_BYTE)this + 28) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_time_up >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_time_up >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_time_up, v5, v6);
  this->is_time_up = is_time_up;
  v7 = ((_BYTE)this + 29) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_single >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_single >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_single, v7, v8);
  this->is_single = is_single;
  std::map<unsigned int,proto::BalloonSettleInfo>::map(&this->player_settle_info_map);
};

// Line 1948: range 0000000016833A36-0000000016833A60
void __cdecl GalleryFallSettleEvent::~GalleryFallSettleEvent(GalleryFallSettleEvent *const this)
{
  GalleryFallSettleEvent::~GalleryFallSettleEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 1948: range 00000000168339D8-0000000016833A35
void __cdecl GalleryFallSettleEvent::~GalleryFallSettleEvent(GalleryFallSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryFallSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::map<unsigned int,proto::FallSettleInfo>::~map(&this->player_settle_info_map);
  BaseEvent::~BaseEvent(this);
};

// Line 1951: range 00000000166674B2-0000000016667597
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryFallSettleEvent::GalleryFallSettleEvent(
        GalleryFallSettleEvent *const this,
        uint32_t gallery_id,
        bool is_single)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GalleryFallSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  v4 = ((_BYTE)this + 28) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_single >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_single >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_single, v4, v5);
  this->is_single = is_single;
  std::map<unsigned int,proto::FallSettleInfo>::map(&this->player_settle_info_map);
};

// Line 1960: range 00000000154CD628-00000000154CD652
void __cdecl FleurFairMusicGameSettleEvent::~FleurFairMusicGameSettleEvent(FleurFairMusicGameSettleEvent *const this)
{
  FleurFairMusicGameSettleEvent::~FleurFairMusicGameSettleEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 1960: range 00000000154CD5DA-00000000154CD627
void __cdecl FleurFairMusicGameSettleEvent::~FleurFairMusicGameSettleEvent(FleurFairMusicGameSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FleurFairMusicGameSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1973: range 00000000154CD540-00000000154CD5AD
void __cdecl FleurFairDungeonFinishEvent::~FleurFairDungeonFinishEvent(FleurFairDungeonFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::map<std::string,int>::~map(&this->group_variable_map);
  std::vector<unsigned int>::~vector(&this->gallery_id_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 1973: range 00000000154CD5AE-00000000154CD5D8
void __cdecl FleurFairDungeonFinishEvent::~FleurFairDungeonFinishEvent(FleurFairDungeonFinishEvent *const this)
{
  FleurFairDungeonFinishEvent::~FleurFairDungeonFinishEvent(this);
  operator delete(this, 0x78uLL);
};

// Line 1993: range 00000000154CD514-00000000154CD53E
void __cdecl FleurFairDungeonMissionFinishEvent::~FleurFairDungeonMissionFinishEvent(
        FleurFairDungeonMissionFinishEvent *const this)
{
  FleurFairDungeonMissionFinishEvent::~FleurFairDungeonMissionFinishEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 1993: range 00000000154CD4C6-00000000154CD513
void __cdecl FleurFairDungeonMissionFinishEvent::~FleurFairDungeonMissionFinishEvent(
        FleurFairDungeonMissionFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonMissionFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 1996: range 0000000015182264-00000000151822B1
void __cdecl FleurFairDungeonMissionFinishEvent::FleurFairDungeonMissionFinishEvent(
        FleurFairDungeonMissionFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonMissionFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2000: range 0000000015F46CC4-0000000015F46D11
void __cdecl RegionSearchFinishSearchEvent::~RegionSearchFinishSearchEvent(RegionSearchFinishSearchEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RegionSearchFinishSearchEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2000: range 0000000015F46D12-0000000015F46D3C
void __cdecl RegionSearchFinishSearchEvent::~RegionSearchFinishSearchEvent(RegionSearchFinishSearchEvent *const this)
{
  RegionSearchFinishSearchEvent::~RegionSearchFinishSearchEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2003: range 0000000015D315CA-0000000015D3169F
// local variable allocation has failed, the output may be wrong!
void __cdecl RegionSearchFinishSearchEvent::RegionSearchFinishSearchEvent(
        RegionSearchFinishSearchEvent *const this,
        uint32_t play_id,
        uint32_t search_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'RegionSearchFinishSearchEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&play_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_id, *(_QWORD *)&play_id, &this->play_id);
  }
  this->play_id = play_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->search_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->search_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->search_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->search_id = search_id;
};

// Line 2011: range 00000000154CD49A-00000000154CD4C4
void __cdecl FindHilichurlFinishLevelEvent::~FindHilichurlFinishLevelEvent(FindHilichurlFinishLevelEvent *const this)
{
  FindHilichurlFinishLevelEvent::~FindHilichurlFinishLevelEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2011: range 00000000154CD44C-00000000154CD499
void __cdecl FindHilichurlFinishLevelEvent::~FindHilichurlFinishLevelEvent(FindHilichurlFinishLevelEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FindHilichurlFinishLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2014: range 00000000151822B2-000000001518233F
// local variable allocation has failed, the output may be wrong!
void __cdecl FindHilichurlFinishLevelEvent::FindHilichurlFinishLevelEvent(
        FindHilichurlFinishLevelEvent *const this,
        uint32_t day_index)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FindHilichurlFinishLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&day_index);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index, *(_QWORD *)&day_index, &this->day_index);
  }
  this->day_index = day_index;
};

// Line 2020: range 00000000174B2918-00000000174B2965
void __cdecl SetGameTimeEvent::~SetGameTimeEvent(SetGameTimeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SetGameTimeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2020: range 00000000174B2966-00000000174B2990
void __cdecl SetGameTimeEvent::~SetGameTimeEvent(SetGameTimeEvent *const this)
{
  SetGameTimeEvent::~SetGameTimeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2023: range 000000001720D50A-000000001720D597
// local variable allocation has failed, the output may be wrong!
void __cdecl SetGameTimeEvent::SetGameTimeEvent(SetGameTimeEvent *const this, uint32_t game_time)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'SetGameTimeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&game_time);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->game_time, *(_QWORD *)&game_time, &this->game_time);
  }
  this->game_time = game_time;
};

// Line 2029: range 00000000174706CE-000000001747071B
void __cdecl NaturalDailyRefreshEvent::NaturalDailyRefreshEvent(NaturalDailyRefreshEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'NaturalDailyRefreshEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2029: range 00000000174B28EC-00000000174B2916
void __cdecl NaturalDailyRefreshEvent::~NaturalDailyRefreshEvent(NaturalDailyRefreshEvent *const this)
{
  NaturalDailyRefreshEvent::~NaturalDailyRefreshEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 2029: range 00000000174B289E-00000000174B28EB
void __cdecl NaturalDailyRefreshEvent::~NaturalDailyRefreshEvent(NaturalDailyRefreshEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'NaturalDailyRefreshEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2034: range 000000001483964C-0000000014839676
void __cdecl FinishMistTrialDungeonEvent::~FinishMistTrialDungeonEvent(FinishMistTrialDungeonEvent *const this)
{
  FinishMistTrialDungeonEvent::~FinishMistTrialDungeonEvent(this);
  operator delete(this, 0x58uLL);
};

// Line 2034: range 00000000148395EE-000000001483964B
void __cdecl FinishMistTrialDungeonEvent::~FinishMistTrialDungeonEvent(FinishMistTrialDungeonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishMistTrialDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->stat_id_map);
  BaseEvent::~BaseEvent(this);
};

// Line 2044: range 000000001434AF08-000000001434AF32
void __cdecl CreateDungeonEvent::~CreateDungeonEvent(CreateDungeonEvent *const this)
{
  CreateDungeonEvent::~CreateDungeonEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2044: range 000000001434AEBA-000000001434AF07
void __cdecl CreateDungeonEvent::~CreateDungeonEvent(CreateDungeonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CreateDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2053: range 000000001503237C-00000000150323C9
void __cdecl ChannellerSlabLoopDungeonScoreEvent::~ChannellerSlabLoopDungeonScoreEvent(
        ChannellerSlabLoopDungeonScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChannellerSlabLoopDungeonScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2053: range 00000000150323CA-00000000150323F4
void __cdecl ChannellerSlabLoopDungeonScoreEvent::~ChannellerSlabLoopDungeonScoreEvent(
        ChannellerSlabLoopDungeonScoreEvent *const this)
{
  ChannellerSlabLoopDungeonScoreEvent::~ChannellerSlabLoopDungeonScoreEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2063: range 00000000144F09D0-00000000144F0A1D
void __cdecl UnlockFurnitureEvent::~UnlockFurnitureEvent(UnlockFurnitureEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockFurnitureEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2063: range 00000000144F0A1E-00000000144F0A48
void __cdecl UnlockFurnitureEvent::~UnlockFurnitureEvent(UnlockFurnitureEvent *const this)
{
  UnlockFurnitureEvent::~UnlockFurnitureEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2066: range 00000000143FC246-00000000143FC2D3
// local variable allocation has failed, the output may be wrong!
void __cdecl UnlockFurnitureEvent::UnlockFurnitureEvent(UnlockFurnitureEvent *const this, uint32_t furniture_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'UnlockFurnitureEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&furniture_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->furniture_id, *(_QWORD *)&furniture_id, &this->furniture_id);
  }
  this->furniture_id = furniture_id;
};

// Line 2074: range 0000000017096088-00000000170960D5
void __cdecl FurnitureMakeEvent::~FurnitureMakeEvent(FurnitureMakeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FurnitureMakeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2074: range 00000000170960D6-0000000017096100
void __cdecl FurnitureMakeEvent::~FurnitureMakeEvent(FurnitureMakeEvent *const this)
{
  FurnitureMakeEvent::~FurnitureMakeEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2077: range 0000000016D58F54-0000000016D59069
// local variable allocation has failed, the output may be wrong!
void __cdecl FurnitureMakeEvent::FurnitureMakeEvent(
        FurnitureMakeEvent *const this,
        uint32_t make_id,
        uint32_t furniture_id,
        uint32_t count)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'FurnitureMakeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&make_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->make_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->make_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->make_id, *(_QWORD *)&make_id, &this->make_id);
  }
  this->make_id = make_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->furniture_id, v5, v6);
  this->furniture_id = furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count, v5, &this->count);
  }
  this->count = count;
};

// Line 2089: range 00000000144F09A4-00000000144F09CE
void __cdecl HomeLevelEvent::~HomeLevelEvent(HomeLevelEvent *const this)
{
  HomeLevelEvent::~HomeLevelEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2089: range 00000000144F0956-00000000144F09A3
void __cdecl HomeLevelEvent::~HomeLevelEvent(HomeLevelEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2092: range 00000000143FC2D4-00000000143FC361
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeLevelEvent::HomeLevelEvent(HomeLevelEvent *const this, uint32_t level)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, *(_QWORD *)&level, &this->level);
  }
  this->level = level;
};

// Line 2094: range 00000000143FC362-00000000143FC437
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeLimitedShopBuyEvent::HomeLimitedShopBuyEvent(
        HomeLimitedShopBuyEvent *const this,
        uint32_t home_uid,
        uint32_t buy_count)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'HomeLimitedShopBuyEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&home_uid);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_uid, *(_QWORD *)&home_uid, &this->home_uid);
  }
  this->home_uid = home_uid;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->buy_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->buy_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->buy_count, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->buy_count = buy_count;
};

// Line 2100: range 0000000017F53A26-0000000017F53A50
void __cdecl HomeCoinEvent::~HomeCoinEvent(HomeCoinEvent *const this)
{
  HomeCoinEvent::~HomeCoinEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2100: range 0000000017F539D8-0000000017F53A25
void __cdecl HomeCoinEvent::~HomeCoinEvent(HomeCoinEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeCoinEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2103: range 0000000017D67EBC-0000000017D67F49
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeCoinEvent::HomeCoinEvent(HomeCoinEvent *const this, uint32_t count)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeCoinEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&count);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count, *(_QWORD *)&count, &this->count);
  }
  this->count = count;
};

// Line 2111: range 00000000144F092A-00000000144F0954
void __cdecl HomeLimitedShopBuyEvent::~HomeLimitedShopBuyEvent(HomeLimitedShopBuyEvent *const this)
{
  HomeLimitedShopBuyEvent::~HomeLimitedShopBuyEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2111: range 00000000144F08DC-00000000144F0929
void __cdecl HomeLimitedShopBuyEvent::~HomeLimitedShopBuyEvent(HomeLimitedShopBuyEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeLimitedShopBuyEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2124: range 0000000014404A60-0000000014404AAD
void __cdecl HomeArrangementFurnitureEvent::HomeArrangementFurnitureEvent(HomeArrangementFurnitureEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeArrangementFurnitureEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2124: range 00000000144F0862-00000000144F08AF
void __cdecl HomeArrangementFurnitureEvent::~HomeArrangementFurnitureEvent(HomeArrangementFurnitureEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeArrangementFurnitureEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2124: range 00000000144F08B0-00000000144F08DA
void __cdecl HomeArrangementFurnitureEvent::~HomeArrangementFurnitureEvent(HomeArrangementFurnitureEvent *const this)
{
  HomeArrangementFurnitureEvent::~HomeArrangementFurnitureEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 2127: range 00000000144F07E8-00000000144F0835
void __cdecl HomeAvatarShowInEvent::~HomeAvatarShowInEvent(HomeAvatarShowInEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarShowInEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2127: range 00000000144F0836-00000000144F0860
void __cdecl HomeAvatarShowInEvent::~HomeAvatarShowInEvent(HomeAvatarShowInEvent *const this)
{
  HomeAvatarShowInEvent::~HomeAvatarShowInEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2130: range 00000000143FC438-00000000143FC4C5
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeAvatarShowInEvent::HomeAvatarShowInEvent(HomeAvatarShowInEvent *const this, uint32_t avatar_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarShowInEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&avatar_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, *(_QWORD *)&avatar_id, &this->avatar_id);
  }
  this->avatar_id = avatar_id;
};

// Line 2138: range 00000000144F076E-00000000144F07BB
void __cdecl HomeAvatarEventRewardGetEvent::~HomeAvatarEventRewardGetEvent(HomeAvatarEventRewardGetEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarEventRewardGetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2138: range 00000000144F07BC-00000000144F07E6
void __cdecl HomeAvatarEventRewardGetEvent::~HomeAvatarEventRewardGetEvent(HomeAvatarEventRewardGetEvent *const this)
{
  HomeAvatarEventRewardGetEvent::~HomeAvatarEventRewardGetEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2141: range 00000000143FC4C6-00000000143FC553
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeAvatarEventRewardGetEvent::HomeAvatarEventRewardGetEvent(
        HomeAvatarEventRewardGetEvent *const this,
        uint32_t avatar_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarEventRewardGetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&avatar_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, *(_QWORD *)&avatar_id, &this->avatar_id);
  }
  this->avatar_id = avatar_id;
};

// Line 2149: range 00000000144F06F4-00000000144F0741
void __cdecl HomeAvatarTalkEvent::~HomeAvatarTalkEvent(HomeAvatarTalkEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeAvatarTalkEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2149: range 00000000144F0742-00000000144F076C
void __cdecl HomeAvatarTalkEvent::~HomeAvatarTalkEvent(HomeAvatarTalkEvent *const this)
{
  HomeAvatarTalkEvent::~HomeAvatarTalkEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2152: range 00000000143FC554-00000000143FC5E1
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeAvatarTalkEvent::HomeAvatarTalkEvent(HomeAvatarTalkEvent *const this, uint32_t avatar_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeAvatarTalkEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&avatar_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, *(_QWORD *)&avatar_id, &this->avatar_id);
  }
  this->avatar_id = avatar_id;
};

// Line 2159: range 000000001361216E-00000000136121BB
void __cdecl PlayerEnterHomeEvent::~PlayerEnterHomeEvent(PlayerEnterHomeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerEnterHomeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2159: range 00000000136121BC-00000000136121E6
void __cdecl PlayerEnterHomeEvent::~PlayerEnterHomeEvent(PlayerEnterHomeEvent *const this)
{
  PlayerEnterHomeEvent::~PlayerEnterHomeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2170: range 00000000174B2872-00000000174B289C
void __cdecl ClimateMeterFullEvent::~ClimateMeterFullEvent(ClimateMeterFullEvent *const this)
{
  ClimateMeterFullEvent::~ClimateMeterFullEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2170: range 00000000174B2824-00000000174B2871
void __cdecl ClimateMeterFullEvent::~ClimateMeterFullEvent(ClimateMeterFullEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ClimateMeterFullEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2173: range 000000001720D598-000000001720D66D
// local variable allocation has failed, the output may be wrong!
void __cdecl ClimateMeterFullEvent::ClimateMeterFullEvent(
        ClimateMeterFullEvent *const this,
        uint32_t cur_meter,
        data::JsonClimateType climate_type)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ClimateMeterFullEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&cur_meter);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_meter >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_meter >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_meter, *(_QWORD *)&cur_meter, &this->cur_meter);
  }
  this->cur_meter = cur_meter;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->climate_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->climate_type, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->climate_type = climate_type;
};

// Line 2181: range 000000001434AE40-000000001434AE8D
void __cdecl WeeklyBossKillEvent::~WeeklyBossKillEvent(WeeklyBossKillEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WeeklyBossKillEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2181: range 000000001434AE8E-000000001434AEB8
void __cdecl WeeklyBossKillEvent::~WeeklyBossKillEvent(WeeklyBossKillEvent *const this)
{
  WeeklyBossKillEvent::~WeeklyBossKillEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2184: range 00000000141EDE44-00000000141EDF5C
// local variable allocation has failed, the output may be wrong!
void __cdecl WeeklyBossKillEvent::WeeklyBossKillEvent(
        WeeklyBossKillEvent *const this,
        uint32_t group_id,
        uint32_t config_id,
        bool is_dungeon)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'WeeklyBossKillEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->config_id, v5, v6);
  this->config_id = config_id;
  if ( *(char *)(((unsigned __int64)&this->is_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dungeon, v5, &this->is_dungeon);
  this->is_dungeon = is_dungeon;
};

// Line 2194: range 0000000017B8EAD2-0000000017B8EAFC
void __cdecl GalleryBuoyantCombatSettleEvent::~GalleryBuoyantCombatSettleEvent(
        GalleryBuoyantCombatSettleEvent *const this)
{
  GalleryBuoyantCombatSettleEvent::~GalleryBuoyantCombatSettleEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 2194: range 0000000017B8EA74-0000000017B8EAD1
void __cdecl GalleryBuoyantCombatSettleEvent::~GalleryBuoyantCombatSettleEvent(
        GalleryBuoyantCombatSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryBuoyantCombatSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  proto::BuoyantCombatGallerySettleInfo::~BuoyantCombatGallerySettleInfo(&this->gallery_settle_info);
  BaseEvent::~BaseEvent(this);
};

// Line 2197: range 00000000179FDD04-00000000179FDDC4
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryBuoyantCombatSettleEvent::GalleryBuoyantCombatSettleEvent(
        GalleryBuoyantCombatSettleEvent *const this,
        uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GalleryBuoyantCombatSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  proto::BuoyantCombatGallerySettleInfo::BuoyantCombatGallerySettleInfo(&this->gallery_settle_info);
};

// Line 2204: range 0000000017B8E9FA-0000000017B8EA47
void __cdecl BuoyantCombatReachNewScoreLevelEvent::~BuoyantCombatReachNewScoreLevelEvent(
        BuoyantCombatReachNewScoreLevelEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BuoyantCombatReachNewScoreLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2204: range 0000000017B8EA48-0000000017B8EA72
void __cdecl BuoyantCombatReachNewScoreLevelEvent::~BuoyantCombatReachNewScoreLevelEvent(
        BuoyantCombatReachNewScoreLevelEvent *const this)
{
  BuoyantCombatReachNewScoreLevelEvent::~BuoyantCombatReachNewScoreLevelEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2207: range 00000000179FDDC6-00000000179FDEDB
// local variable allocation has failed, the output may be wrong!
void __cdecl BuoyantCombatReachNewScoreLevelEvent::BuoyantCombatReachNewScoreLevelEvent(
        BuoyantCombatReachNewScoreLevelEvent *const this,
        uint32_t day_index,
        uint32_t old_score_level,
        uint32_t new_score_level)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'BuoyantCombatReachNewScoreLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&day_index);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index, *(_QWORD *)&day_index, &this->day_index);
  }
  this->day_index = day_index;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->old_score_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->old_score_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->old_score_level, v5, v6);
  this->old_score_level = old_score_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->new_score_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->new_score_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->new_score_level, v5, &this->new_score_level);
  }
  this->new_score_level = new_score_level;
};

// Line 2219: range 000000001832846E-00000000183284BB
void __cdecl GroupSummerTimeSprintBoatReachPointsEvent::~GroupSummerTimeSprintBoatReachPointsEvent(
        GroupSummerTimeSprintBoatReachPointsEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupSummerTimeSprintBoatReachPointsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2219: range 00000000183284BC-00000000183284E6
void __cdecl GroupSummerTimeSprintBoatReachPointsEvent::~GroupSummerTimeSprintBoatReachPointsEvent(
        GroupSummerTimeSprintBoatReachPointsEvent *const this)
{
  GroupSummerTimeSprintBoatReachPointsEvent::~GroupSummerTimeSprintBoatReachPointsEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2222: range 00000000180AA574-00000000180AA649
// local variable allocation has failed, the output may be wrong!
void __cdecl GroupSummerTimeSprintBoatReachPointsEvent::GroupSummerTimeSprintBoatReachPointsEvent(
        GroupSummerTimeSprintBoatReachPointsEvent *const this,
        uint32_t group_id,
        uint32_t total_points)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GroupSummerTimeSprintBoatReachPointsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->total_points >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_points >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->total_points, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->total_points = total_points;
};

// Line 2230: range 00000000183283E4-0000000018328441
void __cdecl GalleryBounceConjuringStartEvent::~GalleryBounceConjuringStartEvent(
        GalleryBounceConjuringStartEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryBounceConjuringStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->transaction);
  BaseEvent::~BaseEvent(this);
};

// Line 2230: range 0000000018328442-000000001832846C
void __cdecl GalleryBounceConjuringStartEvent::~GalleryBounceConjuringStartEvent(
        GalleryBounceConjuringStartEvent *const this)
{
  GalleryBounceConjuringStartEvent::~GalleryBounceConjuringStartEvent(this);
  operator delete(this, 0x40uLL);
};

// Line 2233: range 00000000180AA64A-00000000180AA715
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryBounceConjuringStartEvent::GalleryBounceConjuringStartEvent(
        GalleryBounceConjuringStartEvent *const this,
        uint32_t gallery_id,
        const std::string *transaction)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GalleryBounceConjuringStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  std::string::basic_string(&this->transaction, transaction);
};

// Line 2241: range 00000000183283B8-00000000183283E2
void __cdecl GalleryBounceConjuringSettleEvent::~GalleryBounceConjuringSettleEvent(
        GalleryBounceConjuringSettleEvent *const this)
{
  GalleryBounceConjuringSettleEvent::~GalleryBounceConjuringSettleEvent(this);
  operator delete(this, 0x80uLL);
};

// Line 2241: range 000000001832834A-00000000183283B7
void __cdecl GalleryBounceConjuringSettleEvent::~GalleryBounceConjuringSettleEvent(
        GalleryBounceConjuringSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryBounceConjuringSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::~unordered_map(&this->player_settle_info_map);
  std::string::~string(&this->transaction);
  BaseEvent::~BaseEvent(this);
};

// Line 2244: range 00000000180AA870-00000000180AA9D4
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryBounceConjuringSettleEvent::GalleryBounceConjuringSettleEvent(
        GalleryBounceConjuringSettleEvent *const this,
        uint32_t gallery_id,
        const std::string *transaction,
        uint32_t total_score,
        uint32_t total_destroyed_machine_count)
{
  int (**v5)(...); // rdx
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'GalleryBounceConjuringSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  std::string::basic_string(&this->transaction, transaction);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_score, transaction, &this->total_score);
  }
  this->total_score = total_score;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->total_destroyed_machine_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_destroyed_machine_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->total_destroyed_machine_count, (((_BYTE)this + 68) & 7u) + 3, v6);
  this->total_destroyed_machine_count = total_destroyed_machine_count;
  std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::unordered_map(&this->player_settle_info_map);
};

// Line 2255: range 00000000154CD3D2-00000000154CD41F
void __cdecl AvatarCosumeChangeEvent::~AvatarCosumeChangeEvent(AvatarCosumeChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarCosumeChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2255: range 00000000154CD420-00000000154CD44A
void __cdecl AvatarCosumeChangeEvent::~AvatarCosumeChangeEvent(AvatarCosumeChangeEvent *const this)
{
  AvatarCosumeChangeEvent::~AvatarCosumeChangeEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2258: range 0000000015182340-000000001518244A
void __cdecl AvatarCosumeChangeEvent::AvatarCosumeChangeEvent(
        AvatarCosumeChangeEvent *const this,
        uint64_t avatar_guid,
        uint32_t avatar_id,
        uint32_t costume_id)
{
  int (**v4)(...); // rdx
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'AvatarCosumeChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, avatar_guid);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_guid, avatar_guid);
  this->avatar_guid = avatar_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_id, avatar_guid, &this->avatar_id);
  }
  this->avatar_id = avatar_id;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->costume_id, (((_BYTE)this + 36) & 7u) + 3, v5);
  this->costume_id = costume_id;
};

// Line 2271: range 00000000161894A2-00000000161894FF
void __cdecl GroupVariableSetValueToEvent::~GroupVariableSetValueToEvent(GroupVariableSetValueToEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupVariableSetValueToEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->var_name);
  BaseEvent::~BaseEvent(this);
};

// Line 2271: range 0000000016189500-000000001618952A
void __cdecl GroupVariableSetValueToEvent::~GroupVariableSetValueToEvent(GroupVariableSetValueToEvent *const this)
{
  GroupVariableSetValueToEvent::~GroupVariableSetValueToEvent(this);
  operator delete(this, 0x48uLL);
};

// Line 2274: range 000000001604F45A-000000001604F565
// local variable allocation has failed, the output may be wrong!
void __cdecl GroupVariableSetValueToEvent::GroupVariableSetValueToEvent(
        GroupVariableSetValueToEvent *const this,
        uint32_t group_id,
        const std::string *var_name,
        int32_t value)
{
  int (**v4)(...); // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'GroupVariableSetValueToEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  std::string::basic_string(&this->var_name, var_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, var_name, &this->value);
  }
  this->value = value;
};

// Line 2286: range 0000000015BFA4DA-0000000015BFA504
void __cdecl SceneTagChangeEvent::~SceneTagChangeEvent(SceneTagChangeEvent *const this)
{
  SceneTagChangeEvent::~SceneTagChangeEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2286: range 0000000015BFA48C-0000000015BFA4D9
void __cdecl SceneTagChangeEvent::~SceneTagChangeEvent(SceneTagChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneTagChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2289: range 0000000015A17D98-0000000015A17EAD
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneTagChangeEvent::SceneTagChangeEvent(
        SceneTagChangeEvent *const this,
        uint32_t tag_id,
        proto::SceneTagOpType old_type,
        proto::SceneTagOpType new_type)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'SceneTagChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&tag_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tag_id, *(_QWORD *)&tag_id, &this->tag_id);
  }
  this->tag_id = tag_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->old_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->old_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->old_type, v5, v6);
  this->old_type = old_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->new_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->new_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->new_type, v5, &this->new_type);
  }
  this->new_type = new_type;
};

// Line 2301: range 00000000144F06C8-00000000144F06F2
void __cdecl KillMonstersWithoutVehicleEvent::~KillMonstersWithoutVehicleEvent(
        KillMonstersWithoutVehicleEvent *const this)
{
  KillMonstersWithoutVehicleEvent::~KillMonstersWithoutVehicleEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2301: range 00000000144F067A-00000000144F06C7
void __cdecl KillMonstersWithoutVehicleEvent::~KillMonstersWithoutVehicleEvent(
        KillMonstersWithoutVehicleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'KillMonstersWithoutVehicleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2304: range 00000000143FC5E2-00000000143FC6B7
// local variable allocation has failed, the output may be wrong!
void __cdecl KillMonstersWithoutVehicleEvent::KillMonstersWithoutVehicleEvent(
        KillMonstersWithoutVehicleEvent *const this,
        uint32_t group_id,
        uint32_t monster_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'KillMonstersWithoutVehicleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->monster_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->monster_id = monster_id;
};

// Line 2311: range 0000000015F46C98-0000000015F46CC2
void __cdecl EnterVehicleEvent::~EnterVehicleEvent(EnterVehicleEvent *const this)
{
  EnterVehicleEvent::~EnterVehicleEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2311: range 0000000015F46C4A-0000000015F46C97
void __cdecl EnterVehicleEvent::~EnterVehicleEvent(EnterVehicleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EnterVehicleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2314: range 0000000015D316A0-0000000015D31775
// local variable allocation has failed, the output may be wrong!
void __cdecl EnterVehicleEvent::EnterVehicleEvent(
        EnterVehicleEvent *const this,
        uint32_t vehicle_type,
        uint32_t vehicle_gadget_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'EnterVehicleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&vehicle_type);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_type, *(_QWORD *)&vehicle_type, &this->vehicle_type);
  }
  this->vehicle_type = vehicle_type;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->vehicle_gadget_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->vehicle_gadget_id = vehicle_gadget_id;
};

// Line 2320: range 0000000015F46C1E-0000000015F46C48
void __cdecl ExitVehicleEvent::~ExitVehicleEvent(ExitVehicleEvent *const this)
{
  ExitVehicleEvent::~ExitVehicleEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2320: range 0000000015F46BD0-0000000015F46C1D
void __cdecl ExitVehicleEvent::~ExitVehicleEvent(ExitVehicleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ExitVehicleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2323: range 0000000015D31776-0000000015D3184B
// local variable allocation has failed, the output may be wrong!
void __cdecl ExitVehicleEvent::ExitVehicleEvent(ExitVehicleEvent *const this, uint32_t vehicle_type, uint32_t duration)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ExitVehicleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&vehicle_type);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_type, *(_QWORD *)&vehicle_type, &this->vehicle_type);
  }
  this->vehicle_type = vehicle_type;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->duration, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->duration = duration;
};

// Line 2329: range 00000000144F0600-00000000144F064D
void __cdecl VehicleFriendsEvent::~VehicleFriendsEvent(VehicleFriendsEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VehicleFriendsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2329: range 00000000144F064E-00000000144F0678
void __cdecl VehicleFriendsEvent::~VehicleFriendsEvent(VehicleFriendsEvent *const this)
{
  VehicleFriendsEvent::~VehicleFriendsEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2332: range 00000000143FC6B8-00000000143FC745
// local variable allocation has failed, the output may be wrong!
void __cdecl VehicleFriendsEvent::VehicleFriendsEvent(VehicleFriendsEvent *const this, uint32_t vehicle_type)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VehicleFriendsEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&vehicle_type);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_type, *(_QWORD *)&vehicle_type, &this->vehicle_type);
  }
  this->vehicle_type = vehicle_type;
};

// Line 2337: range 0000000015F46B56-0000000015F46BA3
void __cdecl VehicleKilledEvent::~VehicleKilledEvent(VehicleKilledEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VehicleKilledEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2337: range 0000000015F46BA4-0000000015F46BCE
void __cdecl VehicleKilledEvent::~VehicleKilledEvent(VehicleKilledEvent *const this)
{
  VehicleKilledEvent::~VehicleKilledEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2340: range 0000000015D3184C-0000000015D3191F
// local variable allocation has failed, the output may be wrong!
void __cdecl VehicleKilledEvent::VehicleKilledEvent(VehicleKilledEvent *const this, uint32_t vehicle_type)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VehicleKilledEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&vehicle_type);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_type, *(_QWORD *)&vehicle_type, &this->vehicle_type);
  }
  this->vehicle_type = vehicle_type;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->attacker_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attacker_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->attacker_type, (((_BYTE)this + 28) & 7u) + 3, v3);
  this->attacker_type = 0;
};

// Line 2346: range 00000000144F05D4-00000000144F05FE
void __cdecl VehicleDashEvent::~VehicleDashEvent(VehicleDashEvent *const this)
{
  VehicleDashEvent::~VehicleDashEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2346: range 00000000144F0586-00000000144F05D3
void __cdecl VehicleDashEvent::~VehicleDashEvent(VehicleDashEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VehicleDashEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2349: range 00000000143FC746-00000000143FC81B
// local variable allocation has failed, the output may be wrong!
void __cdecl VehicleDashEvent::VehicleDashEvent(
        VehicleDashEvent *const this,
        uint32_t vehicle_type,
        uint32_t dash_time)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'VehicleDashEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&vehicle_type);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_type, *(_QWORD *)&vehicle_type, &this->vehicle_type);
  }
  this->vehicle_type = vehicle_type;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->dash_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dash_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->dash_time, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->dash_time = dash_time;
};

// Line 2355: range 00000000183282D0-000000001832831D
void __cdecl GalleryTimeUpEvent::~GalleryTimeUpEvent(GalleryTimeUpEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryTimeUpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2355: range 000000001832831E-0000000018328348
void __cdecl GalleryTimeUpEvent::~GalleryTimeUpEvent(GalleryTimeUpEvent *const this)
{
  GalleryTimeUpEvent::~GalleryTimeUpEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2358: range 00000000180AA9D6-00000000180AAA63
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryTimeUpEvent::GalleryTimeUpEvent(GalleryTimeUpEvent *const this, uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GalleryTimeUpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
};

// Line 2363: range 0000000018328246-00000000183282A3
void __cdecl ChessDungeonSettleEvent::~ChessDungeonSettleEvent(ChessDungeonSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessDungeonSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::map<unsigned int,unsigned int>::~map(&this->selected_card_quality_count_map);
  BaseEvent::~BaseEvent(this);
};

// Line 2363: range 00000000183282A4-00000000183282CE
void __cdecl ChessDungeonSettleEvent::~ChessDungeonSettleEvent(ChessDungeonSettleEvent *const this)
{
  ChessDungeonSettleEvent::~ChessDungeonSettleEvent(this);
  operator delete(this, 0x68uLL);
};

// Line 2366: range 00000000180AAA64-00000000180AAD4E
// local variable allocation has failed, the output may be wrong!
void __cdecl ChessDungeonSettleEvent::ChessDungeonSettleEvent(
        ChessDungeonSettleEvent *const this,
        uint32_t dungeon_id,
        uint32_t chess_map_id,
        bool is_teach,
        bool is_succ,
        uint32_t add_score,
        uint32_t kill_monsters,
        uint32_t cost_building_points,
        uint32_t escaped_monsters,
        uint32_t tower_count,
        std::map<unsigned int,unsigned int> *p_selected_card_quality_count_map)
{
  int (**v11)(...); // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdx

  BaseEvent::BaseEvent(this);
  v11 = (int (**)(...))(&`vtable for'ChessDungeonSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
  v12 = (((_BYTE)this + 28) & 7u) + 3;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->chess_map_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chess_map_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->chess_map_id, v12, v13);
  this->chess_map_id = chess_map_id;
  if ( *(char *)(((unsigned __int64)&this->is_teach >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_teach, v12, &this->is_teach);
  this->is_teach = is_teach;
  v14 = ((_BYTE)this + 33) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->is_succ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->is_succ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_succ, v14, v15);
  this->is_succ = is_succ;
  v16 = (((_BYTE)this + 36) & 7u) + 3;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->add_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->add_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store4(&this->add_score, v16, v17);
  this->add_score = add_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_monsters >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_monsters >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_monsters, v16, &this->kill_monsters);
  }
  this->kill_monsters = kill_monsters;
  v18 = (((_BYTE)this + 44) & 7u) + 3;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->cost_building_points >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_building_points >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_store4(&this->cost_building_points, v18, v19);
  this->cost_building_points = cost_building_points;
  if ( *(_BYTE *)(((unsigned __int64)&this->escaped_monsters >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->escaped_monsters >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->escaped_monsters, v18, &this->escaped_monsters);
  }
  this->escaped_monsters = escaped_monsters;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->tower_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tower_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store4(&this->tower_count, (((_BYTE)this + 52) & 7u) + 3, v20);
  this->tower_count = tower_count;
  std::map<unsigned int,unsigned int>::map(&this->selected_card_quality_count_map, p_selected_card_quality_count_map);
};

// Line 2386: range 0000000017B8E9CE-0000000017B8E9F8
void __cdecl ChessLevelUpEvent::~ChessLevelUpEvent(ChessLevelUpEvent *const this)
{
  ChessLevelUpEvent::~ChessLevelUpEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2386: range 0000000017B8E980-0000000017B8E9CD
void __cdecl ChessLevelUpEvent::~ChessLevelUpEvent(ChessLevelUpEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessLevelUpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2389: range 00000000179FDF30-00000000179FDFBD
// local variable allocation has failed, the output may be wrong!
void __cdecl ChessLevelUpEvent::ChessLevelUpEvent(ChessLevelUpEvent *const this, uint32_t level)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'ChessLevelUpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level, *(_QWORD *)&level, &this->level);
  }
  this->level = level;
};

// Line 2394: range 0000000016B7CB2A-0000000016B7CB54
void __cdecl GallerySumoCombatSettleEvent::~GallerySumoCombatSettleEvent(GallerySumoCombatSettleEvent *const this)
{
  GallerySumoCombatSettleEvent::~GallerySumoCombatSettleEvent(this);
  operator delete(this, 0x80uLL);
};

// Line 2394: range 0000000016B7CAAC-0000000016B7CB29
void __cdecl GallerySumoCombatSettleEvent::~GallerySumoCombatSettleEvent(GallerySumoCombatSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GallerySumoCombatSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::~vector(&this->team_score_vec);
  std::vector<unsigned int>::~vector(&this->team_kill_elite_monster_vec);
  std::vector<unsigned int>::~vector(&this->team_kill_normal_monster_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 2397: range 0000000016904AEA-0000000016904DE9
// local variable allocation has failed, the output may be wrong!
void __cdecl GallerySumoCombatSettleEvent::GallerySumoCombatSettleEvent(
        GallerySumoCombatSettleEvent *const this,
        uint32_t activity_id,
        uint32_t stage_id,
        uint32_t difficulty_id,
        uint32_t score,
        uint32_t kill_normal_monster_num,
        uint32_t kill_special_monster_num,
        std::vector<unsigned int> *p_team_kill_normal_monster_vec,
        std::vector<unsigned int> *p_team_kill_elite_monster_vec,
        std::vector<unsigned int> *p_team_score_vec,
        bool is_succ,
        uint32_t duration)
{
  int (**v12)(...); // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx

  BaseEvent::BaseEvent(this);
  v12 = (int (**)(...))(&`vtable for'GallerySumoCombatSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v12;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, &this->activity_id);
  }
  this->activity_id = activity_id;
  v13 = (((_BYTE)this + 28) & 7u) + 3;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->stage_id, v13, v14);
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty_id, v13, &this->difficulty_id);
  }
  this->difficulty_id = difficulty_id;
  v15 = (((_BYTE)this + 36) & 7u) + 3;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->score, v15, v16);
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_normal_monster_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_normal_monster_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_normal_monster_num, v15, &this->kill_normal_monster_num);
  }
  this->kill_normal_monster_num = kill_normal_monster_num;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->kill_special_monster_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_special_monster_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store4(&this->kill_special_monster_num, (((_BYTE)this + 44) & 7u) + 3, v17);
  this->kill_special_monster_num = kill_special_monster_num;
  std::vector<unsigned int>::vector(&this->team_kill_normal_monster_vec, p_team_kill_normal_monster_vec);
  std::vector<unsigned int>::vector(&this->team_kill_elite_monster_vec, p_team_kill_elite_monster_vec);
  std::vector<unsigned int>::vector(&this->team_score_vec, p_team_score_vec);
  if ( *(char *)(((unsigned __int64)&this->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_succ, p_team_score_vec, &this->is_succ);
  this->is_succ = is_succ;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store4(&this->duration, (((_BYTE)this + 124) & 7u) + 3, v18);
  this->duration = duration;
};

// Line 2415: range 00000000168339AC-00000000168339D6
void __cdecl GroupBundleFinishEvent::~GroupBundleFinishEvent(GroupBundleFinishEvent *const this)
{
  GroupBundleFinishEvent::~GroupBundleFinishEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2415: range 000000001683395E-00000000168339AB
void __cdecl GroupBundleFinishEvent::~GroupBundleFinishEvent(GroupBundleFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupBundleFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2418: range 0000000016667598-000000001666766B
// local variable allocation has failed, the output may be wrong!
void __cdecl GroupBundleFinishEvent::GroupBundleFinishEvent(GroupBundleFinishEvent *const this, uint32_t bundle_id)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GroupBundleFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&bundle_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bundle_id, *(_QWORD *)&bundle_id, &this->bundle_id);
  }
  this->bundle_id = bundle_id;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->group_id, (((_BYTE)this + 28) & 7u) + 3, v3);
  this->group_id = 0;
};

// Line 2426: range 000000001832821A-0000000018328244
void __cdecl GalleryStartEvent::~GalleryStartEvent(GalleryStartEvent *const this)
{
  GalleryStartEvent::~GalleryStartEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2426: range 00000000183281CC-0000000018328219
void __cdecl GalleryStartEvent::~GalleryStartEvent(GalleryStartEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2429: range 00000000180AAD50-00000000180AADDD
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryStartEvent::GalleryStartEvent(GalleryStartEvent *const this, uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GalleryStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
};

// Line 2435: range 00000000168338D4-0000000016833931
void __cdecl GalleryFishSettleEvent::~GalleryFishSettleEvent(GalleryFishSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryFishSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  proto::FishingGallerySettleInfo::~FishingGallerySettleInfo(&this->gallery_settle_info);
  BaseEvent::~BaseEvent(this);
};

// Line 2435: range 0000000016833932-000000001683395C
void __cdecl GalleryFishSettleEvent::~GalleryFishSettleEvent(GalleryFishSettleEvent *const this)
{
  GalleryFishSettleEvent::~GalleryFishSettleEvent(this);
  operator delete(this, 0x98uLL);
};

// Line 2438: range 000000001666766C-000000001666772C
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryFishSettleEvent::GalleryFishSettleEvent(GalleryFishSettleEvent *const this, uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GalleryFishSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  proto::FishingGallerySettleInfo::FishingGallerySettleInfo(&this->gallery_settle_info);
};

// Line 2444: range 0000000013612142-000000001361216C
void __cdecl StartFishingEvent::~StartFishingEvent(StartFishingEvent *const this)
{
  StartFishingEvent::~StartFishingEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2444: range 00000000136120F4-0000000013612141
void __cdecl StartFishingEvent::~StartFishingEvent(StartFishingEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'StartFishingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2447: range 00000000131D3D44-00000000131D3DD1
// local variable allocation has failed, the output may be wrong!
void __cdecl StartFishingEvent::StartFishingEvent(StartFishingEvent *const this, uint32_t fish_pool_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'StartFishingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&fish_pool_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_pool_id, *(_QWORD *)&fish_pool_id, &this->fish_pool_id);
  }
  this->fish_pool_id = fish_pool_id;
};

// Line 2452: range 00000000136120C8-00000000136120F2
void __cdecl StopFishingEvent::~StopFishingEvent(StopFishingEvent *const this)
{
  StopFishingEvent::~StopFishingEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2452: range 000000001361207A-00000000136120C7
void __cdecl StopFishingEvent::~StopFishingEvent(StopFishingEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'StopFishingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2455: range 00000000131D3DD2-00000000131D3E5F
// local variable allocation has failed, the output may be wrong!
void __cdecl StopFishingEvent::StopFishingEvent(StopFishingEvent *const this, uint32_t fish_pool_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'StopFishingEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&fish_pool_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_pool_id, *(_QWORD *)&fish_pool_id, &this->fish_pool_id);
  }
  this->fish_pool_id = fish_pool_id;
};

// Line 2460: range 000000001361204E-0000000013612078
void __cdecl FishingSuccEvent::~FishingSuccEvent(FishingSuccEvent *const this)
{
  FishingSuccEvent::~FishingSuccEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2460: range 0000000013612000-000000001361204D
void __cdecl FishingSuccEvent::~FishingSuccEvent(FishingSuccEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishingSuccEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2463: range 00000000131D3E60-00000000131D400C
// local variable allocation has failed, the output may be wrong!
void __cdecl FishingSuccEvent::FishingSuccEvent(
        FishingSuccEvent *const this,
        uint32_t fish_pool_id,
        uint32_t fish_id,
        bool is_got_item,
        bool is_in_other_world,
        uint32_t max_bonus_time)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'FishingSuccEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&fish_pool_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_pool_id, *(_QWORD *)&fish_pool_id, &this->fish_pool_id);
  }
  this->fish_pool_id = fish_pool_id;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->fish_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fish_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->fish_id, v7, v8);
  this->fish_id = fish_id;
  if ( *(char *)(((unsigned __int64)&this->is_got_item >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_got_item, v7, &this->is_got_item);
  this->is_got_item = is_got_item;
  v9 = ((_BYTE)this + 33) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_in_other_world >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_in_other_world >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_in_other_world, v9, v10);
  this->is_in_other_world = is_in_other_world;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->max_bonus_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_bonus_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->max_bonus_time, (((_BYTE)this + 36) & 7u) + 3, v11);
  this->max_bonus_time = max_bonus_time;
};

// Line 2472: range 0000000013611F86-0000000013611FD3
void __cdecl FishingFailEvent::~FishingFailEvent(FishingFailEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishingFailEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2472: range 0000000013611FD4-0000000013611FFE
void __cdecl FishingFailEvent::~FishingFailEvent(FishingFailEvent *const this)
{
  FishingFailEvent::~FishingFailEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2475: range 00000000131D400E-00000000131D40E3
// local variable allocation has failed, the output may be wrong!
void __cdecl FishingFailEvent::FishingFailEvent(FishingFailEvent *const this, uint32_t fish_pool_id, uint32_t fish_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'FishingFailEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&fish_pool_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_pool_id, *(_QWORD *)&fish_pool_id, &this->fish_pool_id);
  }
  this->fish_pool_id = fish_pool_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->fish_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fish_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->fish_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->fish_id = fish_id;
};

// Line 2481: range 0000000013611F5A-0000000013611F84
void __cdecl FishingShockEvent::~FishingShockEvent(FishingShockEvent *const this)
{
  FishingShockEvent::~FishingShockEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2481: range 0000000013611F0C-0000000013611F59
void __cdecl FishingShockEvent::~FishingShockEvent(FishingShockEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishingShockEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2484: range 00000000131D40E4-00000000131D4171
// local variable allocation has failed, the output may be wrong!
void __cdecl FishingShockEvent::FishingShockEvent(FishingShockEvent *const this, uint32_t fish_num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FishingShockEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&fish_num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_num, *(_QWORD *)&fish_num, &this->fish_num);
  }
  this->fish_num = fish_num;
};

// Line 2489: range 0000000013611E92-0000000013611EDF
void __cdecl FishingEmptyPoolEvent::~FishingEmptyPoolEvent(FishingEmptyPoolEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishingEmptyPoolEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2489: range 0000000013611EE0-0000000013611F0A
void __cdecl FishingEmptyPoolEvent::~FishingEmptyPoolEvent(FishingEmptyPoolEvent *const this)
{
  FishingEmptyPoolEvent::~FishingEmptyPoolEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2492: range 00000000131D4172-00000000131D41FF
// local variable allocation has failed, the output may be wrong!
void __cdecl FishingEmptyPoolEvent::FishingEmptyPoolEvent(FishingEmptyPoolEvent *const this, uint32_t fish_pool_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FishingEmptyPoolEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&fish_pool_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_pool_id, *(_QWORD *)&fish_pool_id, &this->fish_pool_id);
  }
  this->fish_pool_id = fish_pool_id;
};

// Line 2497: range 0000000013611E18-0000000013611E65
void __cdecl FishingKeepBonusEvent::~FishingKeepBonusEvent(FishingKeepBonusEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FishingKeepBonusEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2497: range 0000000013611E66-0000000013611E90
void __cdecl FishingKeepBonusEvent::~FishingKeepBonusEvent(FishingKeepBonusEvent *const this)
{
  FishingKeepBonusEvent::~FishingKeepBonusEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2500: range 00000000131D4200-00000000131D428D
// local variable allocation has failed, the output may be wrong!
void __cdecl FishingKeepBonusEvent::FishingKeepBonusEvent(FishingKeepBonusEvent *const this, uint32_t fish_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FishingKeepBonusEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&fish_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->fish_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fish_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fish_id, *(_QWORD *)&fish_id, &this->fish_id);
  }
  this->fish_id = fish_id;
};

// Line 2505: range 0000000016B7CA32-0000000016B7CA7F
void __cdecl HomePlantEvent::~HomePlantEvent(HomePlantEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomePlantEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2505: range 0000000016B7CA80-0000000016B7CAAA
void __cdecl HomePlantEvent::~HomePlantEvent(HomePlantEvent *const this)
{
  HomePlantEvent::~HomePlantEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2508: range 0000000016904DEA-0000000016904F3F
void __cdecl HomePlantEvent::HomePlantEvent(HomePlantEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomePlantEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->seed_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seed_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->seed_id, v1, &this->seed_id);
  }
  this->seed_id = 0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->home_gather_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->home_gather_id, v3, v4);
  this->home_gather_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->field_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->field_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->field_guid, v3, &this->field_guid);
  }
  this->field_guid = 0;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->sub_field_index >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_field_index >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->sub_field_index, (((_BYTE)this + 36) & 7u) + 3, v5);
  this->sub_field_index = 0;
};

// Line 2516: range 00000000140FC7D4-00000000140FC821
void __cdecl PlayerEnterLeaveRegionEvent::~PlayerEnterLeaveRegionEvent(PlayerEnterLeaveRegionEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayerEnterLeaveRegionEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2516: range 00000000140FC822-00000000140FC84C
void __cdecl PlayerEnterLeaveRegionEvent::~PlayerEnterLeaveRegionEvent(PlayerEnterLeaveRegionEvent *const this)
{
  PlayerEnterLeaveRegionEvent::~PlayerEnterLeaveRegionEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2519: range 0000000013EB6FBC-0000000013EB70D4
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerEnterLeaveRegionEvent::PlayerEnterLeaveRegionEvent(
        PlayerEnterLeaveRegionEvent *const this,
        uint32_t group_id,
        uint32_t config_id,
        bool is_enter)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'PlayerEnterLeaveRegionEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->config_id, v5, v6);
  this->config_id = config_id;
  if ( *(char *)(((unsigned __int64)&this->is_enter >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enter, v5, &this->is_enter);
  this->is_enter = is_enter;
};

// Line 2526: range 0000000017B8E906-0000000017B8E953
void __cdecl UnlockCodexEvent::~UnlockCodexEvent(UnlockCodexEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UnlockCodexEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2526: range 0000000017B8E954-0000000017B8E97E
void __cdecl UnlockCodexEvent::~UnlockCodexEvent(UnlockCodexEvent *const this)
{
  UnlockCodexEvent::~UnlockCodexEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2529: range 00000000179FDFBE-00000000179FE093
// local variable allocation has failed, the output may be wrong!
void __cdecl UnlockCodexEvent::UnlockCodexEvent(UnlockCodexEvent *const this, uint32_t codex_type, uint32_t codex_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'UnlockCodexEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&codex_type);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->codex_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->codex_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->codex_type, *(_QWORD *)&codex_type, &this->codex_type);
  }
  this->codex_type = codex_type;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->codex_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->codex_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->codex_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->codex_id = codex_id;
};

// Line 2535: range 0000000014839564-00000000148395C1
void __cdecl HomeCustomFurnitureChangeEvent::~HomeCustomFurnitureChangeEvent(
        HomeCustomFurnitureChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeCustomFurnitureChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::map<unsigned int,unsigned int>::~map(&this->sub_furniture_count_map);
  BaseEvent::~BaseEvent(this);
};

// Line 2535: range 00000000148395C2-00000000148395EC
void __cdecl HomeCustomFurnitureChangeEvent::~HomeCustomFurnitureChangeEvent(
        HomeCustomFurnitureChangeEvent *const this)
{
  HomeCustomFurnitureChangeEvent::~HomeCustomFurnitureChangeEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 2538: range 00000000146161A6-0000000014616241
void __cdecl HomeCustomFurnitureChangeEvent::HomeCustomFurnitureChangeEvent(HomeCustomFurnitureChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeCustomFurnitureChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->module_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->module_id, v1, &this->module_id);
  }
  this->module_id = 0;
  std::map<unsigned int,unsigned int>::map(&this->sub_furniture_count_map);
};

// Line 2545: range 0000000013611DEC-0000000013611E16
void __cdecl LeaveWorldEvent::~LeaveWorldEvent(LeaveWorldEvent *const this)
{
  LeaveWorldEvent::~LeaveWorldEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 2545: range 0000000013611D9E-0000000013611DEB
void __cdecl LeaveWorldEvent::~LeaveWorldEvent(LeaveWorldEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LeaveWorldEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2548: range 00000000131D428E-00000000131D42DB
void __cdecl LeaveWorldEvent::LeaveWorldEvent(LeaveWorldEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'LeaveWorldEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2553: range 0000000013CD1D22-0000000013CD1D7F
void __cdecl TeamServerGlobalValueChangeEvent::~TeamServerGlobalValueChangeEvent(
        TeamServerGlobalValueChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TeamServerGlobalValueChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->key);
  BaseEvent::~BaseEvent(this);
};

// Line 2553: range 0000000013CD1D80-0000000013CD1DAA
void __cdecl TeamServerGlobalValueChangeEvent::~TeamServerGlobalValueChangeEvent(
        TeamServerGlobalValueChangeEvent *const this)
{
  TeamServerGlobalValueChangeEvent::~TeamServerGlobalValueChangeEvent(this);
  operator delete(this, 0x40uLL);
};

// Line 2556: range 00000000138425BE-000000001384268F
void __cdecl TeamServerGlobalValueChangeEvent::TeamServerGlobalValueChangeEvent(
        TeamServerGlobalValueChangeEvent *const this,
        const std::string *str,
        float value)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'TeamServerGlobalValueChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, str);
  this->_vptr_BaseEvent = v3;
  std::string::basic_string(&this->key, str);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, str, &this->value);
  }
  this->value = value;
};

// Line 2563: range 000000001635C258-000000001635C2A5
void __cdecl CaptureSuccEvent::~CaptureSuccEvent(CaptureSuccEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CaptureSuccEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2563: range 000000001635C2A6-000000001635C2D0
void __cdecl CaptureSuccEvent::~CaptureSuccEvent(CaptureSuccEvent *const this)
{
  CaptureSuccEvent::~CaptureSuccEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2566: range 00000000162390AE-00000000162391C6
// local variable allocation has failed, the output may be wrong!
void __cdecl CaptureSuccEvent::CaptureSuccEvent(
        CaptureSuccEvent *const this,
        uint32_t monster_id,
        uint32_t material_id,
        bool is_enter_codex)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'CaptureSuccEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&monster_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_id, *(_QWORD *)&monster_id, &this->monster_id);
  }
  this->monster_id = monster_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->material_id, v5, v6);
  this->material_id = material_id;
  if ( *(char *)(((unsigned __int64)&this->is_enter_codex >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enter_codex, v5, &this->is_enter_codex);
  this->is_enter_codex = is_enter_codex;
};

// Line 2575: range 000000001709600E-000000001709605B
void __cdecl PlantFlowerSetWishEvent::~PlantFlowerSetWishEvent(PlantFlowerSetWishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlantFlowerSetWishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2575: range 000000001709605C-0000000017096086
void __cdecl PlantFlowerSetWishEvent::~PlantFlowerSetWishEvent(PlantFlowerSetWishEvent *const this)
{
  PlantFlowerSetWishEvent::~PlantFlowerSetWishEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 2578: range 0000000016D5906A-0000000016D590B7
void __cdecl PlantFlowerSetWishEvent::PlantFlowerSetWishEvent(PlantFlowerSetWishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PlantFlowerSetWishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2582: range 0000000017095FE2-000000001709600C
void __cdecl PlantFlowerGiveFlowerEvent::~PlantFlowerGiveFlowerEvent(PlantFlowerGiveFlowerEvent *const this)
{
  PlantFlowerGiveFlowerEvent::~PlantFlowerGiveFlowerEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 2582: range 0000000017095F94-0000000017095FE1
void __cdecl PlantFlowerGiveFlowerEvent::~PlantFlowerGiveFlowerEvent(PlantFlowerGiveFlowerEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlantFlowerGiveFlowerEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2585: range 0000000016D590B8-0000000016D59105
void __cdecl PlantFlowerGiveFlowerEvent::PlantFlowerGiveFlowerEvent(PlantFlowerGiveFlowerEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PlantFlowerGiveFlowerEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2589: range 0000000017095F68-0000000017095F92
void __cdecl PlantFlowerObtainFlowerEvent::~PlantFlowerObtainFlowerEvent(PlantFlowerObtainFlowerEvent *const this)
{
  PlantFlowerObtainFlowerEvent::~PlantFlowerObtainFlowerEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 2589: range 0000000017095F1A-0000000017095F67
void __cdecl PlantFlowerObtainFlowerEvent::~PlantFlowerObtainFlowerEvent(PlantFlowerObtainFlowerEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlantFlowerObtainFlowerEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2592: range 0000000016D59106-0000000016D59153
void __cdecl PlantFlowerObtainFlowerEvent::PlantFlowerObtainFlowerEvent(PlantFlowerObtainFlowerEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PlantFlowerObtainFlowerEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2596: range 0000000017095EA0-0000000017095EED
void __cdecl PlantFlowerCommonObtainFlowerEvent::~PlantFlowerCommonObtainFlowerEvent(
        PlantFlowerCommonObtainFlowerEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlantFlowerCommonObtainFlowerEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2596: range 0000000017095EEE-0000000017095F18
void __cdecl PlantFlowerCommonObtainFlowerEvent::~PlantFlowerCommonObtainFlowerEvent(
        PlantFlowerCommonObtainFlowerEvent *const this)
{
  PlantFlowerCommonObtainFlowerEvent::~PlantFlowerCommonObtainFlowerEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 2599: range 0000000016D59154-0000000016D591A1
void __cdecl PlantFlowerCommonObtainFlowerEvent::PlantFlowerCommonObtainFlowerEvent(
        PlantFlowerCommonObtainFlowerEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PlantFlowerCommonObtainFlowerEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2603: range 00000000144F050C-00000000144F0559
void __cdecl UseWidgetEvent::~UseWidgetEvent(UseWidgetEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'UseWidgetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2603: range 00000000144F055A-00000000144F0584
void __cdecl UseWidgetEvent::~UseWidgetEvent(UseWidgetEvent *const this)
{
  UseWidgetEvent::~UseWidgetEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2606: range 00000000143FC81C-00000000143FC8A9
// local variable allocation has failed, the output may be wrong!
void __cdecl UseWidgetEvent::UseWidgetEvent(UseWidgetEvent *const this, uint32_t material_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'UseWidgetEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&material_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_id, *(_QWORD *)&material_id, &this->material_id);
  }
  this->material_id = material_id;
};

// Line 2613: range 0000000017095E74-0000000017095E9E
void __cdecl RogueDungeonSettleEvent::~RogueDungeonSettleEvent(RogueDungeonSettleEvent *const this)
{
  RogueDungeonSettleEvent::~RogueDungeonSettleEvent(this);
  operator delete(this, 0x38uLL);
};

// Line 2613: range 0000000017095E26-0000000017095E73
void __cdecl RogueDungeonSettleEvent::~RogueDungeonSettleEvent(RogueDungeonSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueDungeonSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2616: range 0000000016D591A2-0000000016D594A7
void __cdecl RogueDungeonSettleEvent::RogueDungeonSettleEvent(
        RogueDungeonSettleEvent *const this,
        uint32_t stage_id,
        uint32_t level_id,
        bool is_stage_passed,
        uint32_t kill_monster_num,
        uint32_t explore_cell_num,
        bool is_using_spring_cell,
        bool is_finished_all_challenge_cell,
        bool is_any_avatar_dead,
        uint32_t avatar_element_type_count,
        uint32_t avatar_count)
{
  int (**v11)(...); // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx

  BaseEvent::BaseEvent(this);
  v11 = (int (**)(...))(&`vtable for'RogueDungeonSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, is_using_spring_cell);
  this->_vptr_BaseEvent = v11;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, is_using_spring_cell, &this->stage_id);
  }
  this->stage_id = stage_id;
  v12 = (((_BYTE)this + 28) & 7u) + 3;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->level_id, v12, v13);
  this->level_id = level_id;
  if ( *(char *)(((unsigned __int64)&this->is_stage_passed >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_stage_passed, v12, &this->is_stage_passed);
  this->is_stage_passed = is_stage_passed;
  v14 = (((_BYTE)this + 36) & 7u) + 3;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monster_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store4(&this->kill_monster_num, v14, v15);
  this->kill_monster_num = kill_monster_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->explore_cell_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->explore_cell_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->explore_cell_num, v14, &this->explore_cell_num);
  }
  this->explore_cell_num = explore_cell_num;
  v16 = ((_BYTE)this + 44) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->is_using_spring_cell >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->is_using_spring_cell >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_using_spring_cell, v16, v17);
  this->is_using_spring_cell = is_using_spring_cell;
  v18 = ((_BYTE)this + 45) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->is_finished_all_challenge_cell >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->is_finished_all_challenge_cell >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_finished_all_challenge_cell, v18, v19);
  this->is_finished_all_challenge_cell = is_finished_all_challenge_cell;
  v20 = ((_BYTE)this + 46) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->is_any_avatar_dead >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->is_any_avatar_dead >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->is_any_avatar_dead, v20, v21);
  this->is_any_avatar_dead = is_any_avatar_dead;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_element_type_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_element_type_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_element_type_count, v20, &this->avatar_element_type_count);
  }
  this->avatar_element_type_count = avatar_element_type_count;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store4(&this->avatar_count, (((_BYTE)this + 52) & 7u) + 3, v22);
  this->avatar_count = avatar_count;
};

// Line 2634: range 00000000183281A0-00000000183281CA
void __cdecl GalleryTriathlonScoreEvent::~GalleryTriathlonScoreEvent(GalleryTriathlonScoreEvent *const this)
{
  GalleryTriathlonScoreEvent::~GalleryTriathlonScoreEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 2634: range 0000000018328152-000000001832819F
void __cdecl GalleryTriathlonScoreEvent::~GalleryTriathlonScoreEvent(GalleryTriathlonScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryTriathlonScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2637: range 00000000180AADDE-00000000180AAF7D
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryTriathlonScoreEvent::GalleryTriathlonScoreEvent(
        GalleryTriathlonScoreEvent *const this,
        uint32_t gallery_id,
        uint32_t score,
        uint32_t remain_time,
        uint32_t normal_coin,
        uint32_t limit_coin)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'GalleryTriathlonScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->score, v7, v8);
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->remain_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->remain_time, v7, &this->remain_time);
  }
  this->remain_time = remain_time;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->normal_coin >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal_coin >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->normal_coin, v9, v10);
  this->normal_coin = normal_coin;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_coin >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_coin >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_coin, v9, &this->limit_coin);
  }
  this->limit_coin = limit_coin;
};

// Line 2648: range 0000000015BFA460-0000000015BFA48A
void __cdecl PostEnterRogueDungeonEvent::~PostEnterRogueDungeonEvent(PostEnterRogueDungeonEvent *const this)
{
  PostEnterRogueDungeonEvent::~PostEnterRogueDungeonEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2648: range 0000000015BFA412-0000000015BFA45F
void __cdecl PostEnterRogueDungeonEvent::~PostEnterRogueDungeonEvent(PostEnterRogueDungeonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PostEnterRogueDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2651: range 0000000015A17EAE-0000000015A17F83
// local variable allocation has failed, the output may be wrong!
void __cdecl PostEnterRogueDungeonEvent::PostEnterRogueDungeonEvent(
        PostEnterRogueDungeonEvent *const this,
        uint32_t dungeon_id,
        uint32_t stage_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'PostEnterRogueDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->stage_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->stage_id = stage_id;
};

// Line 2658: range 0000000016B7C9B8-0000000016B7CA05
void __cdecl GalleryMistTrialStartEvent::~GalleryMistTrialStartEvent(GalleryMistTrialStartEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryMistTrialStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2658: range 0000000016B7CA06-0000000016B7CA30
void __cdecl GalleryMistTrialStartEvent::~GalleryMistTrialStartEvent(GalleryMistTrialStartEvent *const this)
{
  GalleryMistTrialStartEvent::~GalleryMistTrialStartEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2661: range 0000000016904F40-0000000016904FCD
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryMistTrialStartEvent::GalleryMistTrialStartEvent(
        GalleryMistTrialStartEvent *const this,
        uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GalleryMistTrialStartEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
};

// Line 2667: range 0000000016B7C93E-0000000016B7C98B
void __cdecl GalleryMistTrialSettleEvent::~GalleryMistTrialSettleEvent(GalleryMistTrialSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryMistTrialSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2667: range 0000000016B7C98C-0000000016B7C9B6
void __cdecl GalleryMistTrialSettleEvent::~GalleryMistTrialSettleEvent(GalleryMistTrialSettleEvent *const this)
{
  GalleryMistTrialSettleEvent::~GalleryMistTrialSettleEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 2670: range 0000000016904FCE-0000000016905170
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryMistTrialSettleEvent::GalleryMistTrialSettleEvent(
        GalleryMistTrialSettleEvent *const this,
        uint32_t gallery_id,
        uint32_t dungeon_id,
        uint32_t dungeon_scene_id,
        uint32_t duration_time,
        bool is_success)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'GalleryMistTrialSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->dungeon_id, v7, v8);
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_scene_id, v7, &this->dungeon_scene_id);
  }
  this->dungeon_scene_id = dungeon_scene_id;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->duration_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->duration_time, v9, v10);
  this->duration_time = duration_time;
  if ( *(char *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_success, v9, &this->is_success);
  this->is_success = is_success;
};

// Line 2683: range 0000000017095DAC-0000000017095DF9
void __cdecl PotionStageLevelPassEvent::~PotionStageLevelPassEvent(PotionStageLevelPassEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PotionStageLevelPassEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2683: range 0000000017095DFA-0000000017095E24
void __cdecl PotionStageLevelPassEvent::~PotionStageLevelPassEvent(PotionStageLevelPassEvent *const this)
{
  PotionStageLevelPassEvent::~PotionStageLevelPassEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2686: range 0000000016D594A8-0000000016D5957D
// local variable allocation has failed, the output may be wrong!
void __cdecl PotionStageLevelPassEvent::PotionStageLevelPassEvent(
        PotionStageLevelPassEvent *const this,
        uint32_t event_stage_id,
        uint32_t event_level_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'PotionStageLevelPassEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&event_stage_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&event_stage_id, &this->stage_id);
  }
  this->stage_id = event_stage_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->level_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->level_id = event_level_id;
};

// Line 2695: range 0000000017095D32-0000000017095D7F
void __cdecl PotionStageScoreChangeEvent::~PotionStageScoreChangeEvent(PotionStageScoreChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PotionStageScoreChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2695: range 0000000017095D80-0000000017095DAA
void __cdecl PotionStageScoreChangeEvent::~PotionStageScoreChangeEvent(PotionStageScoreChangeEvent *const this)
{
  PotionStageScoreChangeEvent::~PotionStageScoreChangeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2698: range 0000000016D5957E-0000000016D59653
// local variable allocation has failed, the output may be wrong!
void __cdecl PotionStageScoreChangeEvent::PotionStageScoreChangeEvent(
        PotionStageScoreChangeEvent *const this,
        uint32_t event_stage_id,
        uint32_t event_stage_score)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'PotionStageScoreChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&event_stage_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&event_stage_id, &this->stage_id);
  }
  this->stage_id = event_stage_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->stage_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->stage_score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->stage_score = event_stage_score;
};

// Line 2707: range 00000000140FC7A8-00000000140FC7D2
void __cdecl ChangeLevelTagEvent::~ChangeLevelTagEvent(ChangeLevelTagEvent *const this)
{
  ChangeLevelTagEvent::~ChangeLevelTagEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2707: range 00000000140FC75A-00000000140FC7A7
void __cdecl ChangeLevelTagEvent::~ChangeLevelTagEvent(ChangeLevelTagEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChangeLevelTagEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2710: range 0000000013EB70D6-0000000013EB71AB
// local variable allocation has failed, the output may be wrong!
void __cdecl ChangeLevelTagEvent::ChangeLevelTagEvent(
        ChangeLevelTagEvent *const this,
        uint32_t target_level_tag_id,
        uint32_t remove_level_tag_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'ChangeLevelTagEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&target_level_tag_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_level_tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_level_tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_level_tag_id, *(_QWORD *)&target_level_tag_id, &this->target_level_tag_id);
  }
  this->target_level_tag_id = target_level_tag_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->remove_level_tag_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remove_level_tag_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->remove_level_tag_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->remove_level_tag_id = remove_level_tag_id;
};

// Line 2719: range 0000000016B7C912-0000000016B7C93C
void __cdecl GallerySalvagePreventSettleEvent::~GallerySalvagePreventSettleEvent(
        GallerySalvagePreventSettleEvent *const this)
{
  GallerySalvagePreventSettleEvent::~GallerySalvagePreventSettleEvent(this);
  operator delete(this, 0x48uLL);
};

// Line 2719: range 0000000016B7C8B4-0000000016B7C911
void __cdecl GallerySalvagePreventSettleEvent::~GallerySalvagePreventSettleEvent(
        GallerySalvagePreventSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GallerySalvagePreventSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  proto::SalvagePreventGallerySettleInfo::~SalvagePreventGallerySettleInfo(&this->gallery_settle_info);
  BaseEvent::~BaseEvent(this);
};

// Line 2722: range 0000000016905172-0000000016905232
// local variable allocation has failed, the output may be wrong!
void __cdecl GallerySalvagePreventSettleEvent::GallerySalvagePreventSettleEvent(
        GallerySalvagePreventSettleEvent *const this,
        uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GallerySalvagePreventSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  proto::SalvagePreventGallerySettleInfo::SalvagePreventGallerySettleInfo(&this->gallery_settle_info);
};

// Line 2729: range 0000000016B7C82A-0000000016B7C887
void __cdecl GallerySalvageEscortSettleEvent::~GallerySalvageEscortSettleEvent(
        GallerySalvageEscortSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GallerySalvageEscortSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  proto::SalvageEscortGallerySettleInfo::~SalvageEscortGallerySettleInfo(&this->gallery_settle_info);
  BaseEvent::~BaseEvent(this);
};

// Line 2729: range 0000000016B7C888-0000000016B7C8B2
void __cdecl GallerySalvageEscortSettleEvent::~GallerySalvageEscortSettleEvent(
        GallerySalvageEscortSettleEvent *const this)
{
  GallerySalvageEscortSettleEvent::~GallerySalvageEscortSettleEvent(this);
  operator delete(this, 0x40uLL);
};

// Line 2732: range 0000000016905234-00000000169052F4
// local variable allocation has failed, the output may be wrong!
void __cdecl GallerySalvageEscortSettleEvent::GallerySalvageEscortSettleEvent(
        GallerySalvageEscortSettleEvent *const this,
        uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GallerySalvageEscortSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  proto::SalvageEscortGallerySettleInfo::SalvageEscortGallerySettleInfo(&this->gallery_settle_info);
};

// Line 2739: range 0000000016B7C7FE-0000000016B7C828
void __cdecl GallerySalvageSettleEvent::~GallerySalvageSettleEvent(GallerySalvageSettleEvent *const this)
{
  GallerySalvageSettleEvent::~GallerySalvageSettleEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2739: range 0000000016B7C7B0-0000000016B7C7FD
void __cdecl GallerySalvageSettleEvent::~GallerySalvageSettleEvent(GallerySalvageSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GallerySalvageSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2742: range 00000000169052F6-00000000169053CB
// local variable allocation has failed, the output may be wrong!
void __cdecl GallerySalvageSettleEvent::GallerySalvageSettleEvent(
        GallerySalvageSettleEvent *const this,
        uint32_t gallery_id,
        uint32_t final_score)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GallerySalvageSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->final_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->final_score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->final_score = final_score;
};

// Line 2751: range 0000000016189428-0000000016189475
void __cdecl FireworksChallengeSettleEvent::~FireworksChallengeSettleEvent(FireworksChallengeSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FireworksChallengeSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2751: range 0000000016189476-00000000161894A0
void __cdecl FireworksChallengeSettleEvent::~FireworksChallengeSettleEvent(FireworksChallengeSettleEvent *const this)
{
  FireworksChallengeSettleEvent::~FireworksChallengeSettleEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2754: range 000000001604F566-000000001604F63B
// local variable allocation has failed, the output may be wrong!
void __cdecl FireworksChallengeSettleEvent::FireworksChallengeSettleEvent(
        FireworksChallengeSettleEvent *const this,
        uint32_t challenge_id,
        uint32_t final_score)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'FireworksChallengeSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&challenge_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id, *(_QWORD *)&challenge_id, &this->challenge_id);
  }
  this->challenge_id = challenge_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->final_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->final_score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->final_score = final_score;
};

// Line 2763: range 00000000140FC72E-00000000140FC758
void __cdecl CrossSceneRangeEvent::~CrossSceneRangeEvent(CrossSceneRangeEvent *const this)
{
  CrossSceneRangeEvent::~CrossSceneRangeEvent(this);
  operator delete(this, 0x48uLL);
};

// Line 2763: range 00000000140FC6D0-00000000140FC72D
void __cdecl CrossSceneRangeEvent::~CrossSceneRangeEvent(CrossSceneRangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrossSceneRangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->dummy_point);
  BaseEvent::~BaseEvent(this);
};

// Line 2766: range 0000000013EB71AC-0000000013EB7303
// local variable allocation has failed, the output may be wrong!
void __cdecl CrossSceneRangeEvent::CrossSceneRangeEvent(
        CrossSceneRangeEvent *const this,
        uint32_t scene_id,
        uint32_t radius,
        std::string *p_dummy_point,
        bool is_leave)
{
  int (**v5)(...); // rdx
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'CrossSceneRangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&scene_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, *(_QWORD *)&scene_id, &this->scene_id);
  }
  this->scene_id = scene_id;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->radius, (((_BYTE)this + 28) & 7u) + 3, v6);
  this->radius = radius;
  std::string::basic_string(&this->dummy_point, p_dummy_point);
  if ( *(char *)(((unsigned __int64)&this->is_leave >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_leave, p_dummy_point, &this->is_leave);
  this->is_leave = is_leave;
};

// Line 2776: range 000000001434ADC6-000000001434AE13
void __cdecl OfficialCustomDungeonFinishEvent::~OfficialCustomDungeonFinishEvent(
        OfficialCustomDungeonFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'OfficialCustomDungeonFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2776: range 000000001434AE14-000000001434AE3E
void __cdecl OfficialCustomDungeonFinishEvent::~OfficialCustomDungeonFinishEvent(
        OfficialCustomDungeonFinishEvent *const this)
{
  OfficialCustomDungeonFinishEvent::~OfficialCustomDungeonFinishEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2779: range 00000000141EDF5E-00000000141EDFEB
// local variable allocation has failed, the output may be wrong!
void __cdecl OfficialCustomDungeonFinishEvent::OfficialCustomDungeonFinishEvent(
        OfficialCustomDungeonFinishEvent *const this,
        uint32_t dungeon_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'OfficialCustomDungeonFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
};

// Line 2786: range 000000001434AD4C-000000001434AD99
void __cdecl CreateCustomDungeonEvent::~CreateCustomDungeonEvent(CreateCustomDungeonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CreateCustomDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2786: range 000000001434AD9A-000000001434ADC4
void __cdecl CreateCustomDungeonEvent::~CreateCustomDungeonEvent(CreateCustomDungeonEvent *const this)
{
  CreateCustomDungeonEvent::~CreateCustomDungeonEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2789: range 00000000141EDFEC-00000000141EE079
// local variable allocation has failed, the output may be wrong!
void __cdecl CreateCustomDungeonEvent::CreateCustomDungeonEvent(
        CreateCustomDungeonEvent *const this,
        uint32_t dungeon_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'CreateCustomDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
};

// Line 2796: range 000000001434ACD2-000000001434AD1F
void __cdecl PublishCustomDungeonEvent::~PublishCustomDungeonEvent(PublishCustomDungeonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PublishCustomDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2796: range 000000001434AD20-000000001434AD4A
void __cdecl PublishCustomDungeonEvent::~PublishCustomDungeonEvent(PublishCustomDungeonEvent *const this)
{
  PublishCustomDungeonEvent::~PublishCustomDungeonEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2799: range 00000000141EE07A-00000000141EE107
// local variable allocation has failed, the output may be wrong!
void __cdecl PublishCustomDungeonEvent::PublishCustomDungeonEvent(
        PublishCustomDungeonEvent *const this,
        uint32_t dungeon_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PublishCustomDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
};

// Line 2806: range 000000001434ACA6-000000001434ACD0
void __cdecl PlayCustomDungeonEvent::~PlayCustomDungeonEvent(PlayCustomDungeonEvent *const this)
{
  PlayCustomDungeonEvent::~PlayCustomDungeonEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2806: range 000000001434AC58-000000001434ACA5
void __cdecl PlayCustomDungeonEvent::~PlayCustomDungeonEvent(PlayCustomDungeonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlayCustomDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2809: range 00000000141EE108-00000000141EE1E2
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayCustomDungeonEvent::PlayCustomDungeonEvent(
        PlayCustomDungeonEvent *const this,
        bool is_my_dungeon,
        bool is_win)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'PlayCustomDungeonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, is_my_dungeon);
  this->_vptr_BaseEvent = v3;
  if ( *(char *)(((unsigned __int64)&this->is_my_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_my_dungeon, is_my_dungeon, &this->is_my_dungeon);
  this->is_my_dungeon = is_my_dungeon;
  v4 = ((_BYTE)this + 25) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_win, v4, v5);
  this->is_win = is_win;
};

// Line 2817: range 000000001434AC2C-000000001434AC56
void __cdecl CustomDungeonOfficialCoinEvent::~CustomDungeonOfficialCoinEvent(
        CustomDungeonOfficialCoinEvent *const this)
{
  CustomDungeonOfficialCoinEvent::~CustomDungeonOfficialCoinEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2817: range 000000001434ABDE-000000001434AC2B
void __cdecl CustomDungeonOfficialCoinEvent::~CustomDungeonOfficialCoinEvent(
        CustomDungeonOfficialCoinEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CustomDungeonOfficialCoinEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2820: range 00000000141EE1E4-00000000141EE2B9
// local variable allocation has failed, the output may be wrong!
void __cdecl CustomDungeonOfficialCoinEvent::CustomDungeonOfficialCoinEvent(
        CustomDungeonOfficialCoinEvent *const this,
        uint32_t dungeon_id,
        uint32_t coin_num)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'CustomDungeonOfficialCoinEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&dungeon_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = dungeon_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->coin_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->coin_num, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->coin_num = coin_num;
};

// Line 2829: range 00000000148394EA-0000000014839537
void __cdecl MichiaeMatsuriUnlockCrystalSkillEvent::~MichiaeMatsuriUnlockCrystalSkillEvent(
        MichiaeMatsuriUnlockCrystalSkillEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MichiaeMatsuriUnlockCrystalSkillEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2829: range 0000000014839538-0000000014839562
void __cdecl MichiaeMatsuriUnlockCrystalSkillEvent::~MichiaeMatsuriUnlockCrystalSkillEvent(
        MichiaeMatsuriUnlockCrystalSkillEvent *const this)
{
  MichiaeMatsuriUnlockCrystalSkillEvent::~MichiaeMatsuriUnlockCrystalSkillEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 2832: range 0000000014616242-000000001461628F
void __cdecl MichiaeMatsuriUnlockCrystalSkillEvent::MichiaeMatsuriUnlockCrystalSkillEvent(
        MichiaeMatsuriUnlockCrystalSkillEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MichiaeMatsuriUnlockCrystalSkillEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2836: range 00000000148394BE-00000000148394E8
void __cdecl FinishActivityMichiaeDarkChallengeEvent::~FinishActivityMichiaeDarkChallengeEvent(
        FinishActivityMichiaeDarkChallengeEvent *const this)
{
  FinishActivityMichiaeDarkChallengeEvent::~FinishActivityMichiaeDarkChallengeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2836: range 0000000014839470-00000000148394BD
void __cdecl FinishActivityMichiaeDarkChallengeEvent::~FinishActivityMichiaeDarkChallengeEvent(
        FinishActivityMichiaeDarkChallengeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishActivityMichiaeDarkChallengeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2839: range 0000000014616290-000000001461631D
// local variable allocation has failed, the output may be wrong!
void __cdecl FinishActivityMichiaeDarkChallengeEvent::FinishActivityMichiaeDarkChallengeEvent(
        FinishActivityMichiaeDarkChallengeEvent *const this,
        uint32_t group_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FinishActivityMichiaeDarkChallengeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
};

// Line 2846: range 0000000014839444-000000001483946E
void __cdecl IrodoriFinishFlowerThemeEvent::~IrodoriFinishFlowerThemeEvent(IrodoriFinishFlowerThemeEvent *const this)
{
  IrodoriFinishFlowerThemeEvent::~IrodoriFinishFlowerThemeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2846: range 00000000148393F6-0000000014839443
void __cdecl IrodoriFinishFlowerThemeEvent::~IrodoriFinishFlowerThemeEvent(IrodoriFinishFlowerThemeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IrodoriFinishFlowerThemeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2849: range 000000001461631E-00000000146163AB
// local variable allocation has failed, the output may be wrong!
void __cdecl IrodoriFinishFlowerThemeEvent::IrodoriFinishFlowerThemeEvent(
        IrodoriFinishFlowerThemeEvent *const this,
        uint32_t theme_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'IrodoriFinishFlowerThemeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&theme_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->theme_id, *(_QWORD *)&theme_id, &this->theme_id);
  }
  this->theme_id = theme_id;
};

// Line 2854: range 000000001483937C-00000000148393C9
void __cdecl IrodoriPoetryReachMinProgressEvent::~IrodoriPoetryReachMinProgressEvent(
        IrodoriPoetryReachMinProgressEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IrodoriPoetryReachMinProgressEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2854: range 00000000148393CA-00000000148393F4
void __cdecl IrodoriPoetryReachMinProgressEvent::~IrodoriPoetryReachMinProgressEvent(
        IrodoriPoetryReachMinProgressEvent *const this)
{
  IrodoriPoetryReachMinProgressEvent::~IrodoriPoetryReachMinProgressEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2857: range 00000000146163AC-0000000014616439
// local variable allocation has failed, the output may be wrong!
void __cdecl IrodoriPoetryReachMinProgressEvent::IrodoriPoetryReachMinProgressEvent(
        IrodoriPoetryReachMinProgressEvent *const this,
        uint32_t theme_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'IrodoriPoetryReachMinProgressEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&theme_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->theme_id, *(_QWORD *)&theme_id, &this->theme_id);
  }
  this->theme_id = theme_id;
};

// Line 2862: range 0000000014839302-000000001483934F
void __cdecl IrodoriFinishPoetryThemeEvent::~IrodoriFinishPoetryThemeEvent(IrodoriFinishPoetryThemeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IrodoriFinishPoetryThemeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2862: range 0000000014839350-000000001483937A
void __cdecl IrodoriFinishPoetryThemeEvent::~IrodoriFinishPoetryThemeEvent(IrodoriFinishPoetryThemeEvent *const this)
{
  IrodoriFinishPoetryThemeEvent::~IrodoriFinishPoetryThemeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2865: range 000000001461643A-00000000146164C7
// local variable allocation has failed, the output may be wrong!
void __cdecl IrodoriFinishPoetryThemeEvent::IrodoriFinishPoetryThemeEvent(
        IrodoriFinishPoetryThemeEvent *const this,
        uint32_t theme_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'IrodoriFinishPoetryThemeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&theme_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->theme_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->theme_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->theme_id, *(_QWORD *)&theme_id, &this->theme_id);
  }
  this->theme_id = theme_id;
};

// Line 2871: range 00000000183280D8-0000000018328125
void __cdecl SpiceMakeFormulaTimesEvent::~SpiceMakeFormulaTimesEvent(SpiceMakeFormulaTimesEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SpiceMakeFormulaTimesEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2871: range 0000000018328126-0000000018328150
void __cdecl SpiceMakeFormulaTimesEvent::~SpiceMakeFormulaTimesEvent(SpiceMakeFormulaTimesEvent *const this)
{
  SpiceMakeFormulaTimesEvent::~SpiceMakeFormulaTimesEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2874: range 00000000180AAF7E-00000000180AB00B
// local variable allocation has failed, the output may be wrong!
void __cdecl SpiceMakeFormulaTimesEvent::SpiceMakeFormulaTimesEvent(
        SpiceMakeFormulaTimesEvent *const this,
        uint32_t stage_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'SpiceMakeFormulaTimesEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, &this->stage_id);
  }
  this->stage_id = stage_id;
};

// Line 2880: range 000000001832805E-00000000183280AB
void __cdecl SpiceGiveFoodTimesEvent::~SpiceGiveFoodTimesEvent(SpiceGiveFoodTimesEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SpiceGiveFoodTimesEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2880: range 00000000183280AC-00000000183280D6
void __cdecl SpiceGiveFoodTimesEvent::~SpiceGiveFoodTimesEvent(SpiceGiveFoodTimesEvent *const this)
{
  SpiceGiveFoodTimesEvent::~SpiceGiveFoodTimesEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 2883: range 00000000180AB00C-00000000180AB059
void __cdecl SpiceGiveFoodTimesEvent::SpiceGiveFoodTimesEvent(SpiceGiveFoodTimesEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'SpiceGiveFoodTimesEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2887: range 0000000018327FE4-0000000018328031
void __cdecl SpiceMakeFormulaSuccessfulTimesEvent::~SpiceMakeFormulaSuccessfulTimesEvent(
        SpiceMakeFormulaSuccessfulTimesEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SpiceMakeFormulaSuccessfulTimesEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2887: range 0000000018328032-000000001832805C
void __cdecl SpiceMakeFormulaSuccessfulTimesEvent::~SpiceMakeFormulaSuccessfulTimesEvent(
        SpiceMakeFormulaSuccessfulTimesEvent *const this)
{
  SpiceMakeFormulaSuccessfulTimesEvent::~SpiceMakeFormulaSuccessfulTimesEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2890: range 00000000180AB05A-00000000180AB0E7
// local variable allocation has failed, the output may be wrong!
void __cdecl SpiceMakeFormulaSuccessfulTimesEvent::SpiceMakeFormulaSuccessfulTimesEvent(
        SpiceMakeFormulaSuccessfulTimesEvent *const this,
        uint32_t stage_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'SpiceMakeFormulaSuccessfulTimesEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, &this->stage_id);
  }
  this->stage_id = stage_id;
};

// Line 2896: range 0000000017095CB8-0000000017095D05
void __cdecl PhotoFinishPosEvent::~PhotoFinishPosEvent(PhotoFinishPosEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PhotoFinishPosEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2896: range 0000000017095D06-0000000017095D30
void __cdecl PhotoFinishPosEvent::~PhotoFinishPosEvent(PhotoFinishPosEvent *const this)
{
  PhotoFinishPosEvent::~PhotoFinishPosEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2899: range 0000000016D59654-0000000016D596E1
// local variable allocation has failed, the output may be wrong!
void __cdecl PhotoFinishPosEvent::PhotoFinishPosEvent(PhotoFinishPosEvent *const this, uint32_t pos_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'PhotoFinishPosEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&pos_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->pos_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pos_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pos_id, *(_QWORD *)&pos_id, &this->pos_id);
  }
  this->pos_id = pos_id;
};

// Line 2905: range 00000000168338A8-00000000168338D2
void __cdecl CrystalLinkDungeonSettleEvent::~CrystalLinkDungeonSettleEvent(CrystalLinkDungeonSettleEvent *const this)
{
  CrystalLinkDungeonSettleEvent::~CrystalLinkDungeonSettleEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2905: range 000000001683385A-00000000168338A7
void __cdecl CrystalLinkDungeonSettleEvent::~CrystalLinkDungeonSettleEvent(CrystalLinkDungeonSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrystalLinkDungeonSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2908: range 000000001666772E-0000000016667843
// local variable allocation has failed, the output may be wrong!
void __cdecl CrystalLinkDungeonSettleEvent::CrystalLinkDungeonSettleEvent(
        CrystalLinkDungeonSettleEvent *const this,
        uint32_t level_id,
        uint32_t best_score,
        uint32_t total_best_score)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'CrystalLinkDungeonSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->best_score, v5, v6);
  this->best_score = best_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_best_score, v5, &this->total_best_score);
  }
  this->total_best_score = total_best_score;
};

// Line 2918: range 0000000017F5394E-0000000017F539AB
void __cdecl HomeBgmUnlockEvent::~HomeBgmUnlockEvent(HomeBgmUnlockEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HomeBgmUnlockEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::~vector(&this->unlocked_bgm_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 2918: range 0000000017F539AC-0000000017F539D6
void __cdecl HomeBgmUnlockEvent::~HomeBgmUnlockEvent(HomeBgmUnlockEvent *const this)
{
  HomeBgmUnlockEvent::~HomeBgmUnlockEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 2921: range 0000000017D67F4A-0000000017D67FD5
void __cdecl HomeBgmUnlockEvent::HomeBgmUnlockEvent(
        HomeBgmUnlockEvent *const this,
        const std::vector<unsigned int> *unlocked_bgm_list)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'HomeBgmUnlockEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, unlocked_bgm_list);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::vector(&this->unlocked_bgm_vec, unlocked_bgm_list);
};

// Line 2929: range 0000000016B7C726-0000000016B7C783
void __cdecl LuminanceStoneChallengeGallerySettleEvent::~LuminanceStoneChallengeGallerySettleEvent(
        LuminanceStoneChallengeGallerySettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LuminanceStoneChallengeGallerySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  proto::LuminanceStoneChallengeGallerySettleInfo::~LuminanceStoneChallengeGallerySettleInfo(&this->gallery_settle_info);
  BaseEvent::~BaseEvent(this);
};

// Line 2929: range 0000000016B7C784-0000000016B7C7AE
void __cdecl LuminanceStoneChallengeGallerySettleEvent::~LuminanceStoneChallengeGallerySettleEvent(
        LuminanceStoneChallengeGallerySettleEvent *const this)
{
  LuminanceStoneChallengeGallerySettleEvent::~LuminanceStoneChallengeGallerySettleEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 2932: range 00000000169053CC-000000001690548C
// local variable allocation has failed, the output may be wrong!
void __cdecl LuminanceStoneChallengeGallerySettleEvent::LuminanceStoneChallengeGallerySettleEvent(
        LuminanceStoneChallengeGallerySettleEvent *const this,
        uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'LuminanceStoneChallengeGallerySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  proto::LuminanceStoneChallengeGallerySettleInfo::LuminanceStoneChallengeGallerySettleInfo(&this->gallery_settle_info);
};

// Line 2941: range 0000000014839288-00000000148392D5
void __cdecl LuminanceStoneChallengeReachNewScoreEvent::~LuminanceStoneChallengeReachNewScoreEvent(
        LuminanceStoneChallengeReachNewScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LuminanceStoneChallengeReachNewScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2941: range 00000000148392D6-0000000014839300
void __cdecl LuminanceStoneChallengeReachNewScoreEvent::~LuminanceStoneChallengeReachNewScoreEvent(
        LuminanceStoneChallengeReachNewScoreEvent *const this)
{
  LuminanceStoneChallengeReachNewScoreEvent::~LuminanceStoneChallengeReachNewScoreEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2944: range 00000000146164C8-0000000014616555
// local variable allocation has failed, the output may be wrong!
void __cdecl LuminanceStoneChallengeReachNewScoreEvent::LuminanceStoneChallengeReachNewScoreEvent(
        LuminanceStoneChallengeReachNewScoreEvent *const this,
        uint32_t new_score)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'LuminanceStoneChallengeReachNewScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&new_score);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->new_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->new_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->new_score, *(_QWORD *)&new_score, &this->new_score);
  }
  this->new_score = new_score;
};

// Line 2952: range 00000000154CD3A6-00000000154CD3D0
void __cdecl GachaFinishStageEvent::~GachaFinishStageEvent(GachaFinishStageEvent *const this)
{
  GachaFinishStageEvent::~GachaFinishStageEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2952: range 00000000154CD358-00000000154CD3A5
void __cdecl GachaFinishStageEvent::~GachaFinishStageEvent(GachaFinishStageEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaFinishStageEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2955: range 000000001518244C-00000000151824D9
// local variable allocation has failed, the output may be wrong!
void __cdecl GachaFinishStageEvent::GachaFinishStageEvent(GachaFinishStageEvent *const this, uint32_t stage_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GachaFinishStageEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, &this->stage_id);
  }
  this->stage_id = stage_id;
};

// Line 2961: range 00000000154CD2DE-00000000154CD32B
void __cdecl GachaMakeRobotEvent::~GachaMakeRobotEvent(GachaMakeRobotEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaMakeRobotEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2961: range 00000000154CD32C-00000000154CD356
void __cdecl GachaMakeRobotEvent::~GachaMakeRobotEvent(GachaMakeRobotEvent *const this)
{
  GachaMakeRobotEvent::~GachaMakeRobotEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 2964: range 00000000151824DA-0000000015182527
void __cdecl GachaMakeRobotEvent::GachaMakeRobotEvent(GachaMakeRobotEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GachaMakeRobotEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 2968: range 00000000154CD264-00000000154CD2B1
void __cdecl GachaGetRobotEvent::~GachaGetRobotEvent(GachaGetRobotEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaGetRobotEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2968: range 00000000154CD2B2-00000000154CD2DC
void __cdecl GachaGetRobotEvent::~GachaGetRobotEvent(GachaGetRobotEvent *const this)
{
  GachaGetRobotEvent::~GachaGetRobotEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2971: range 0000000015182528-00000000151825B5
// local variable allocation has failed, the output may be wrong!
void __cdecl GachaGetRobotEvent::GachaGetRobotEvent(GachaGetRobotEvent *const this, uint32_t num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GachaGetRobotEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->num, *(_QWORD *)&num, &this->num);
  }
  this->num = num;
};

// Line 2977: range 00000000154CD238-00000000154CD262
void __cdecl GachaGiveRobotEvent::~GachaGiveRobotEvent(GachaGiveRobotEvent *const this)
{
  GachaGiveRobotEvent::~GachaGiveRobotEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2977: range 00000000154CD1EA-00000000154CD237
void __cdecl GachaGiveRobotEvent::~GachaGiveRobotEvent(GachaGiveRobotEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaGiveRobotEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2980: range 00000000151825B6-0000000015182643
// local variable allocation has failed, the output may be wrong!
void __cdecl GachaGiveRobotEvent::GachaGiveRobotEvent(GachaGiveRobotEvent *const this, uint32_t num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GachaGiveRobotEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->num, *(_QWORD *)&num, &this->num);
  }
  this->num = num;
};

// Line 2986: range 00000000154CD170-00000000154CD1BD
void __cdecl GachaConvertRobotEvent::~GachaConvertRobotEvent(GachaConvertRobotEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaConvertRobotEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2986: range 00000000154CD1BE-00000000154CD1E8
void __cdecl GachaConvertRobotEvent::~GachaConvertRobotEvent(GachaConvertRobotEvent *const this)
{
  GachaConvertRobotEvent::~GachaConvertRobotEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 2989: range 0000000015182644-00000000151826D1
// local variable allocation has failed, the output may be wrong!
void __cdecl GachaConvertRobotEvent::GachaConvertRobotEvent(GachaConvertRobotEvent *const this, uint32_t num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GachaConvertRobotEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->num, *(_QWORD *)&num, &this->num);
  }
  this->num = num;
};

// Line 2995: range 000000001788884A-0000000017888897
void __cdecl AranaraCollectionStateChangeEvent::~AranaraCollectionStateChangeEvent(
        AranaraCollectionStateChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AranaraCollectionStateChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 2995: range 0000000017888898-00000000178888C2
void __cdecl AranaraCollectionStateChangeEvent::~AranaraCollectionStateChangeEvent(
        AranaraCollectionStateChangeEvent *const this)
{
  AranaraCollectionStateChangeEvent::~AranaraCollectionStateChangeEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 2998: range 000000001763107A-000000001763118F
// local variable allocation has failed, the output may be wrong!
void __cdecl AranaraCollectionStateChangeEvent::AranaraCollectionStateChangeEvent(
        AranaraCollectionStateChangeEvent *const this,
        uint32_t collection_type,
        uint32_t collection_id,
        uint32_t collection_state)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'AranaraCollectionStateChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&collection_type);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->collection_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collection_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collection_type, *(_QWORD *)&collection_type, &this->collection_type);
  }
  this->collection_type = collection_type;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->collection_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->collection_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->collection_id, v5, v6);
  this->collection_id = collection_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->collection_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collection_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collection_state, v5, &this->collection_state);
  }
  this->collection_state = collection_state;
};

// Line 3006: range 00000000178887D0-000000001788881D
void __cdecl GadgetStateChangeEvent::~GadgetStateChangeEvent(GadgetStateChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GadgetStateChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3006: range 000000001788881E-0000000017888848
void __cdecl GadgetStateChangeEvent::~GadgetStateChangeEvent(GadgetStateChangeEvent *const this)
{
  GadgetStateChangeEvent::~GadgetStateChangeEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 3009: range 0000000017631190-00000000176312A5
// local variable allocation has failed, the output may be wrong!
void __cdecl GadgetStateChangeEvent::GadgetStateChangeEvent(
        GadgetStateChangeEvent *const this,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t state)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'GadgetStateChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&group_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, *(_QWORD *)&group_id, &this->group_id);
  }
  this->group_id = group_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->config_id, v5, v6);
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state, v5, &this->state);
  }
  this->state = state;
};

// Line 3017: range 0000000017095C3E-0000000017095C8B
void __cdecl MusicGameSettleOthersUgcEvent::~MusicGameSettleOthersUgcEvent(MusicGameSettleOthersUgcEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MusicGameSettleOthersUgcEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3017: range 0000000017095C8C-0000000017095CB6
void __cdecl MusicGameSettleOthersUgcEvent::~MusicGameSettleOthersUgcEvent(MusicGameSettleOthersUgcEvent *const this)
{
  MusicGameSettleOthersUgcEvent::~MusicGameSettleOthersUgcEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 3020: range 0000000016D596E2-0000000016D5972F
void __cdecl MusicGameSettleOthersUgcEvent::MusicGameSettleOthersUgcEvent(MusicGameSettleOthersUgcEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MusicGameSettleOthersUgcEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 3024: range 0000000017095BC4-0000000017095C11
void __cdecl MusicGameSaveUgcEvent::~MusicGameSaveUgcEvent(MusicGameSaveUgcEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MusicGameSaveUgcEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3024: range 0000000017095C12-0000000017095C3C
void __cdecl MusicGameSaveUgcEvent::~MusicGameSaveUgcEvent(MusicGameSaveUgcEvent *const this)
{
  MusicGameSaveUgcEvent::~MusicGameSaveUgcEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 3027: range 0000000016D59730-0000000016D5977D
void __cdecl MusicGameSaveUgcEvent::MusicGameSaveUgcEvent(MusicGameSaveUgcEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'MusicGameSaveUgcEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 3031: range 0000000015F46B2A-0000000015F46B54
void __cdecl RegionalPlayStatusChangeEvent::~RegionalPlayStatusChangeEvent(RegionalPlayStatusChangeEvent *const this)
{
  RegionalPlayStatusChangeEvent::~RegionalPlayStatusChangeEvent(this);
  operator delete(this, 0x40uLL);
};

// Line 3031: range 0000000015F46ACC-0000000015F46B29
void __cdecl RegionalPlayStatusChangeEvent::~RegionalPlayStatusChangeEvent(RegionalPlayStatusChangeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RegionalPlayStatusChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::string::~string(&this->play_name);
  BaseEvent::~BaseEvent(this);
};

// Line 3034: range 0000000015D31920-0000000015D31A34
void __cdecl RegionalPlayStatusChangeEvent::RegionalPlayStatusChangeEvent(
        RegionalPlayStatusChangeEvent *const this,
        const std::string *play_name,
        bool is_enable,
        bool is_in_region)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'RegionalPlayStatusChangeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, play_name);
  this->_vptr_BaseEvent = v4;
  std::string::basic_string(&this->play_name, play_name);
  if ( *(char *)(((unsigned __int64)&this->is_enable >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable, play_name, &this->is_enable);
  this->is_enable = is_enable;
  v5 = ((_BYTE)this + 57) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_in_region >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_in_region >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_in_region, v5, v6);
  this->is_in_region = is_in_region;
};

// Line 3043: range 0000000016B7C6FA-0000000016B7C724
void __cdecl SummerTimeV2BoatGallerySettleEvent::~SummerTimeV2BoatGallerySettleEvent(
        SummerTimeV2BoatGallerySettleEvent *const this)
{
  SummerTimeV2BoatGallerySettleEvent::~SummerTimeV2BoatGallerySettleEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 3043: range 0000000016B7C69C-0000000016B7C6F9
void __cdecl SummerTimeV2BoatGallerySettleEvent::~SummerTimeV2BoatGallerySettleEvent(
        SummerTimeV2BoatGallerySettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SummerTimeV2BoatGallerySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  proto::SummerTimeV2BoatGallerySettleInfo::~SummerTimeV2BoatGallerySettleInfo(&this->gallery_settle_info);
  BaseEvent::~BaseEvent(this);
};

// Line 3046: range 000000001690548E-000000001690554E
// local variable allocation has failed, the output may be wrong!
void __cdecl SummerTimeV2BoatGallerySettleEvent::SummerTimeV2BoatGallerySettleEvent(
        SummerTimeV2BoatGallerySettleEvent *const this,
        uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'SummerTimeV2BoatGallerySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  proto::SummerTimeV2BoatGallerySettleInfo::SummerTimeV2BoatGallerySettleInfo(&this->gallery_settle_info);
};

// Line 3055: range 00000000148391FE-000000001483925B
void __cdecl GalleryIslandPartySettleEvent::~GalleryIslandPartySettleEvent(GalleryIslandPartySettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryIslandPartySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::map<unsigned int,proto::OnlinePlayerInfo>::~map(&this->player_info_map);
  BaseEvent::~BaseEvent(this);
};

// Line 3055: range 000000001483925C-0000000014839286
void __cdecl GalleryIslandPartySettleEvent::~GalleryIslandPartySettleEvent(GalleryIslandPartySettleEvent *const this)
{
  GalleryIslandPartySettleEvent::~GalleryIslandPartySettleEvent(this);
  operator delete(this, 0x58uLL);
};

// Line 3058: range 00000000146165C6-000000001461672F
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryIslandPartySettleEvent::GalleryIslandPartySettleEvent(
        GalleryIslandPartySettleEvent *const this,
        uint32_t gallery_id,
        uint32_t time_remain)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GalleryIslandPartySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  v4 = (((_BYTE)this + 28) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->time_remain >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time_remain >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->time_remain, v4, v5);
  this->time_remain = time_remain;
  std::map<unsigned int,proto::OnlinePlayerInfo>::map(&this->player_info_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason, v4, &this->reason);
  }
  this->reason = GALLERY_STOP_NONE;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->source >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->source >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->source, (((_BYTE)this + 84) & 7u) + 3, v6);
  this->source = 0;
};

// Line 3067: range 00000000154CD0F6-00000000154CD143
void __cdecl GearFinishStageEvent::~GearFinishStageEvent(GearFinishStageEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GearFinishStageEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3067: range 00000000154CD144-00000000154CD16E
void __cdecl GearFinishStageEvent::~GearFinishStageEvent(GearFinishStageEvent *const this)
{
  GearFinishStageEvent::~GearFinishStageEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3070: range 00000000151826D2-000000001518275F
// local variable allocation has failed, the output may be wrong!
void __cdecl GearFinishStageEvent::GearFinishStageEvent(GearFinishStageEvent *const this, uint32_t stage_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GearFinishStageEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, &this->stage_id);
  }
  this->stage_id = stage_id;
};

// Line 3076: range 00000000154CD07C-00000000154CD0C9
void __cdecl GearFinishJigsawPictureEvent::~GearFinishJigsawPictureEvent(GearFinishJigsawPictureEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GearFinishJigsawPictureEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3076: range 00000000154CD0CA-00000000154CD0F4
void __cdecl GearFinishJigsawPictureEvent::~GearFinishJigsawPictureEvent(GearFinishJigsawPictureEvent *const this)
{
  GearFinishJigsawPictureEvent::~GearFinishJigsawPictureEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 3079: range 0000000015182760-00000000151827AD
void __cdecl GearFinishJigsawPictureEvent::GearFinishJigsawPictureEvent(GearFinishJigsawPictureEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GearFinishJigsawPictureEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 3083: range 0000000014839184-00000000148391D1
void __cdecl IslandPartyReachScoreEvent::~IslandPartyReachScoreEvent(IslandPartyReachScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IslandPartyReachScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3083: range 00000000148391D2-00000000148391FC
void __cdecl IslandPartyReachScoreEvent::~IslandPartyReachScoreEvent(IslandPartyReachScoreEvent *const this)
{
  IslandPartyReachScoreEvent::~IslandPartyReachScoreEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3086: range 0000000014616730-0000000014616805
// local variable allocation has failed, the output may be wrong!
void __cdecl IslandPartyReachScoreEvent::IslandPartyReachScoreEvent(
        IslandPartyReachScoreEvent *const this,
        uint32_t id,
        uint32_t score)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'IslandPartyReachScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, *(_QWORD *)&id, &this->id);
  }
  this->id = id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->score = score;
};

// Line 3093: range 00000000154CD002-00000000154CD04F
void __cdecl GalleryGravenInnocenceRaceScoreEvent::~GalleryGravenInnocenceRaceScoreEvent(
        GalleryGravenInnocenceRaceScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryGravenInnocenceRaceScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3093: range 00000000154CD050-00000000154CD07A
void __cdecl GalleryGravenInnocenceRaceScoreEvent::~GalleryGravenInnocenceRaceScoreEvent(
        GalleryGravenInnocenceRaceScoreEvent *const this)
{
  GalleryGravenInnocenceRaceScoreEvent::~GalleryGravenInnocenceRaceScoreEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 3096: range 00000000151827AE-000000001518290C
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryGravenInnocenceRaceScoreEvent::GalleryGravenInnocenceRaceScoreEvent(
        GalleryGravenInnocenceRaceScoreEvent *const this,
        uint32_t gallery_id,
        uint32_t score,
        uint32_t remain_time,
        uint32_t coin_count)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'GalleryGravenInnocenceRaceScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->score, v6, v7);
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->remain_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->remain_time, v6, &this->remain_time);
  }
  this->remain_time = remain_time;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->coin_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->coin_count, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->coin_count = coin_count;
};

// Line 3107: range 00000000154CCF88-00000000154CCFD5
void __cdecl GravenInnocenceCarveEditEvent::~GravenInnocenceCarveEditEvent(GravenInnocenceCarveEditEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GravenInnocenceCarveEditEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3107: range 00000000154CCFD6-00000000154CD000
void __cdecl GravenInnocenceCarveEditEvent::~GravenInnocenceCarveEditEvent(GravenInnocenceCarveEditEvent *const this)
{
  GravenInnocenceCarveEditEvent::~GravenInnocenceCarveEditEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 3110: range 000000001518290E-000000001518295B
void __cdecl GravenInnocenceCarveEditEvent::GravenInnocenceCarveEditEvent(GravenInnocenceCarveEditEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GravenInnocenceCarveEditEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 3114: range 00000000154CCF5C-00000000154CCF86
void __cdecl GravenInnocencePhotoFinishEvent::~GravenInnocencePhotoFinishEvent(
        GravenInnocencePhotoFinishEvent *const this)
{
  GravenInnocencePhotoFinishEvent::~GravenInnocencePhotoFinishEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3114: range 00000000154CCF0E-00000000154CCF5B
void __cdecl GravenInnocencePhotoFinishEvent::~GravenInnocencePhotoFinishEvent(
        GravenInnocencePhotoFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GravenInnocencePhotoFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3117: range 000000001518295C-00000000151829E9
// local variable allocation has failed, the output may be wrong!
void __cdecl GravenInnocencePhotoFinishEvent::GravenInnocencePhotoFinishEvent(
        GravenInnocencePhotoFinishEvent *const this,
        uint32_t object_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GravenInnocencePhotoFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&object_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->object_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->object_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->object_id, *(_QWORD *)&object_id, &this->object_id);
  }
  this->object_id = object_id;
};

// Line 3123: range 00000000154CCE94-00000000154CCEE1
void __cdecl GravenInnocenceCampFinishLevelEvent::~GravenInnocenceCampFinishLevelEvent(
        GravenInnocenceCampFinishLevelEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GravenInnocenceCampFinishLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3123: range 00000000154CCEE2-00000000154CCF0C
void __cdecl GravenInnocenceCampFinishLevelEvent::~GravenInnocenceCampFinishLevelEvent(
        GravenInnocenceCampFinishLevelEvent *const this)
{
  GravenInnocenceCampFinishLevelEvent::~GravenInnocenceCampFinishLevelEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3126: range 00000000151829EA-0000000015182A77
// local variable allocation has failed, the output may be wrong!
void __cdecl GravenInnocenceCampFinishLevelEvent::GravenInnocenceCampFinishLevelEvent(
        GravenInnocenceCampFinishLevelEvent *const this,
        uint32_t level_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GravenInnocenceCampFinishLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
};

// Line 3132: range 000000001483910A-0000000014839157
void __cdecl MuqadasPotionLevelScoreEvent::~MuqadasPotionLevelScoreEvent(MuqadasPotionLevelScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MuqadasPotionLevelScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3132: range 0000000014839158-0000000014839182
void __cdecl MuqadasPotionLevelScoreEvent::~MuqadasPotionLevelScoreEvent(MuqadasPotionLevelScoreEvent *const this)
{
  MuqadasPotionLevelScoreEvent::~MuqadasPotionLevelScoreEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3135: range 0000000014616806-00000000146168DB
// local variable allocation has failed, the output may be wrong!
void __cdecl MuqadasPotionLevelScoreEvent::MuqadasPotionLevelScoreEvent(
        MuqadasPotionLevelScoreEvent *const this,
        uint32_t level_id,
        uint32_t score)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'MuqadasPotionLevelScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->score = score;
};

// Line 3142: range 00000000144F0492-00000000144F04DF
void __cdecl MuqadasPotionLevelWeaknessNumEvent::~MuqadasPotionLevelWeaknessNumEvent(
        MuqadasPotionLevelWeaknessNumEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MuqadasPotionLevelWeaknessNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3142: range 00000000144F04E0-00000000144F050A
void __cdecl MuqadasPotionLevelWeaknessNumEvent::~MuqadasPotionLevelWeaknessNumEvent(
        MuqadasPotionLevelWeaknessNumEvent *const this)
{
  MuqadasPotionLevelWeaknessNumEvent::~MuqadasPotionLevelWeaknessNumEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3145: range 00000000143FC8AA-00000000143FC97F
// local variable allocation has failed, the output may be wrong!
void __cdecl MuqadasPotionLevelWeaknessNumEvent::MuqadasPotionLevelWeaknessNumEvent(
        MuqadasPotionLevelWeaknessNumEvent *const this,
        uint32_t level_id,
        uint32_t weakness_num)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'MuqadasPotionLevelWeaknessNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->weakness_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weakness_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->weakness_num, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->weakness_num = weakness_num;
};

// Line 3152: range 00000000144F0466-00000000144F0490
void __cdecl MuqadasPotionLevelOnceWeaknessNumEvent::~MuqadasPotionLevelOnceWeaknessNumEvent(
        MuqadasPotionLevelOnceWeaknessNumEvent *const this)
{
  MuqadasPotionLevelOnceWeaknessNumEvent::~MuqadasPotionLevelOnceWeaknessNumEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3152: range 00000000144F0418-00000000144F0465
void __cdecl MuqadasPotionLevelOnceWeaknessNumEvent::~MuqadasPotionLevelOnceWeaknessNumEvent(
        MuqadasPotionLevelOnceWeaknessNumEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MuqadasPotionLevelOnceWeaknessNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3155: range 00000000143FC980-00000000143FCA55
// local variable allocation has failed, the output may be wrong!
void __cdecl MuqadasPotionLevelOnceWeaknessNumEvent::MuqadasPotionLevelOnceWeaknessNumEvent(
        MuqadasPotionLevelOnceWeaknessNumEvent *const this,
        uint32_t level_id,
        uint32_t once_weakness_num)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'MuqadasPotionLevelOnceWeaknessNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->once_weakness_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->once_weakness_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->once_weakness_num, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->once_weakness_num = once_weakness_num;
};

// Line 3162: range 00000000148390DE-0000000014839108
void __cdecl InstableSprayScoreEvent::~InstableSprayScoreEvent(InstableSprayScoreEvent *const this)
{
  InstableSprayScoreEvent::~InstableSprayScoreEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3162: range 0000000014839090-00000000148390DD
void __cdecl InstableSprayScoreEvent::~InstableSprayScoreEvent(InstableSprayScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'InstableSprayScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3165: range 00000000146168DC-00000000146169B1
// local variable allocation has failed, the output may be wrong!
void __cdecl InstableSprayScoreEvent::InstableSprayScoreEvent(
        InstableSprayScoreEvent *const this,
        uint32_t stage_id,
        uint32_t score)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'InstableSprayScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, &this->stage_id);
  }
  this->stage_id = stage_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->score = score;
};

// Line 3172: range 0000000016B7C622-0000000016B7C66F
void __cdecl GalleryMuqadasPotionSettleEvent::~GalleryMuqadasPotionSettleEvent(
        GalleryMuqadasPotionSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryMuqadasPotionSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3172: range 0000000016B7C670-0000000016B7C69A
void __cdecl GalleryMuqadasPotionSettleEvent::~GalleryMuqadasPotionSettleEvent(
        GalleryMuqadasPotionSettleEvent *const this)
{
  GalleryMuqadasPotionSettleEvent::~GalleryMuqadasPotionSettleEvent(this);
  operator delete(this, 0x38uLL);
};

// Line 3175: range 0000000016905550-00000000169057B9
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryMuqadasPotionSettleEvent::GalleryMuqadasPotionSettleEvent(
        GalleryMuqadasPotionSettleEvent *const this,
        uint32_t activity_id,
        uint32_t level_id,
        uint32_t score,
        uint32_t capture_weakness_count,
        bool is_success,
        uint32_t skill_use_time,
        uint32_t once_max_weakness_count,
        uint32_t actual_use_time)
{
  int (**v9)(...); // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx

  BaseEvent::BaseEvent(this);
  v9 = (int (**)(...))(&`vtable for'GalleryMuqadasPotionSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v9;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, &this->activity_id);
  }
  this->activity_id = activity_id;
  v10 = (((_BYTE)this + 28) & 7u) + 3;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->level_id, v10, v11);
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score, v10, &this->score);
  }
  this->score = score;
  v12 = (((_BYTE)this + 36) & 7u) + 3;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->capture_weakness_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->capture_weakness_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->capture_weakness_count, v12, v13);
  this->capture_weakness_count = capture_weakness_count;
  if ( *(char *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_success, v12, &this->is_success);
  this->is_success = is_success;
  v14 = (((_BYTE)this + 44) & 7u) + 3;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->skill_use_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_use_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store4(&this->skill_use_time, v14, v15);
  this->skill_use_time = skill_use_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->once_max_weakness_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->once_max_weakness_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->once_max_weakness_count, v14, &this->once_max_weakness_count);
  }
  this->once_max_weakness_count = once_max_weakness_count;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->actual_use_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->actual_use_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->actual_use_time, (((_BYTE)this + 52) & 7u) + 3, v16);
  this->actual_use_time = actual_use_time;
};

// Line 3191: range 0000000017888756-00000000178887A3
void __cdecl GCGResourceCompleteEvent::~GCGResourceCompleteEvent(GCGResourceCompleteEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGResourceCompleteEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3191: range 00000000178887A4-00000000178887CE
void __cdecl GCGResourceCompleteEvent::~GCGResourceCompleteEvent(GCGResourceCompleteEvent *const this)
{
  GCGResourceCompleteEvent::~GCGResourceCompleteEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3194: range 00000000176312A6-0000000017631336
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGResourceCompleteEvent::GCGResourceCompleteEvent(GCGResourceCompleteEvent *const this, bool is_complete)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GCGResourceCompleteEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, is_complete);
  this->_vptr_BaseEvent = v2;
  if ( *(char *)(((unsigned __int64)&this->is_complete >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_complete, is_complete, &this->is_complete);
  this->is_complete = is_complete;
};

// Line 3200: range 000000001788872A-0000000017888754
void __cdecl GCGLevelUpEvent::~GCGLevelUpEvent(GCGLevelUpEvent *const this)
{
  GCGLevelUpEvent::~GCGLevelUpEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3200: range 00000000178886DC-0000000017888729
void __cdecl GCGLevelUpEvent::~GCGLevelUpEvent(GCGLevelUpEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGLevelUpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3203: range 0000000017631338-000000001763140D
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGLevelUpEvent::GCGLevelUpEvent(GCGLevelUpEvent *const this, uint32_t before_level, uint32_t cur_level)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GCGLevelUpEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&before_level);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->before_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->before_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->before_level, *(_QWORD *)&before_level, &this->before_level);
  }
  this->before_level = before_level;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->cur_level, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->cur_level = cur_level;
};

// Line 3219: range 00000000154CCE68-00000000154CCE92
void __cdecl GCGAddCardEvent::~GCGAddCardEvent(GCGAddCardEvent *const this)
{
  GCGAddCardEvent::~GCGAddCardEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3219: range 00000000154CCE1A-00000000154CCE67
void __cdecl GCGAddCardEvent::~GCGAddCardEvent(GCGAddCardEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGAddCardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3222: range 0000000015182A78-0000000015182B05
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGAddCardEvent::GCGAddCardEvent(GCGAddCardEvent *const this, uint32_t card_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GCGAddCardEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&card_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id, *(_QWORD *)&card_id, &this->card_id);
  }
  this->card_id = card_id;
};

// Line 3229: range 0000000017888662-00000000178886AF
void __cdecl GCGFinishWeekChallengeEvent::~GCGFinishWeekChallengeEvent(GCGFinishWeekChallengeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGFinishWeekChallengeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3229: range 00000000178886B0-00000000178886DA
void __cdecl GCGFinishWeekChallengeEvent::~GCGFinishWeekChallengeEvent(GCGFinishWeekChallengeEvent *const this)
{
  GCGFinishWeekChallengeEvent::~GCGFinishWeekChallengeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3232: range 000000001763140E-00000000176314E3
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGFinishWeekChallengeEvent::GCGFinishWeekChallengeEvent(
        GCGFinishWeekChallengeEvent *const this,
        uint32_t npc_id,
        uint32_t level_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GCGFinishWeekChallengeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&npc_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->npc_id, *(_QWORD *)&npc_id, &this->npc_id);
  }
  this->npc_id = npc_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->level_id, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->level_id = level_id;
};

// Line 3240: range 00000000154CCDEE-00000000154CCE18
void __cdecl GCGSaveDeckEvent::~GCGSaveDeckEvent(GCGSaveDeckEvent *const this)
{
  GCGSaveDeckEvent::~GCGSaveDeckEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3240: range 00000000154CCDA0-00000000154CCDED
void __cdecl GCGSaveDeckEvent::~GCGSaveDeckEvent(GCGSaveDeckEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGSaveDeckEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3243: range 0000000015182B06-0000000015182B93
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGSaveDeckEvent::GCGSaveDeckEvent(GCGSaveDeckEvent *const this, uint32_t deck_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GCGSaveDeckEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&deck_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->deck_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->deck_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->deck_id, *(_QWORD *)&deck_id, &this->deck_id);
  }
  this->deck_id = deck_id;
};

// Line 3250: range 00000000154CCD74-00000000154CCD9E
void __cdecl GCGUnlockCardFaceEvent::~GCGUnlockCardFaceEvent(GCGUnlockCardFaceEvent *const this)
{
  GCGUnlockCardFaceEvent::~GCGUnlockCardFaceEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3250: range 00000000154CCD26-00000000154CCD73
void __cdecl GCGUnlockCardFaceEvent::~GCGUnlockCardFaceEvent(GCGUnlockCardFaceEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGUnlockCardFaceEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3253: range 0000000015182B94-0000000015182C69
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGUnlockCardFaceEvent::GCGUnlockCardFaceEvent(
        GCGUnlockCardFaceEvent *const this,
        uint32_t card_id,
        uint32_t face_type)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GCGUnlockCardFaceEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&card_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id, *(_QWORD *)&card_id, &this->card_id);
  }
  this->card_id = card_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->face_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->face_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->face_type, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->face_type = face_type;
};

// Line 3261: range 00000000154CCCFA-00000000154CCD24
void __cdecl GCGAddCardProficiencyEvent::~GCGAddCardProficiencyEvent(GCGAddCardProficiencyEvent *const this)
{
  GCGAddCardProficiencyEvent::~GCGAddCardProficiencyEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3261: range 00000000154CCCAC-00000000154CCCF9
void __cdecl GCGAddCardProficiencyEvent::~GCGAddCardProficiencyEvent(GCGAddCardProficiencyEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGAddCardProficiencyEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3264: range 0000000015182C6A-0000000015182D3F
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGAddCardProficiencyEvent::GCGAddCardProficiencyEvent(
        GCGAddCardProficiencyEvent *const this,
        uint32_t card_id,
        uint32_t proficiency)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GCGAddCardProficiencyEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&card_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->card_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->card_id, *(_QWORD *)&card_id, &this->card_id);
  }
  this->card_id = card_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->proficiency >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->proficiency, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->proficiency = proficiency;
};

// Line 3273: range 00000000140FC6A4-00000000140FC6CE
void __cdecl GadgetChainSetLevelEvent::~GadgetChainSetLevelEvent(GadgetChainSetLevelEvent *const this)
{
  GadgetChainSetLevelEvent::~GadgetChainSetLevelEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3273: range 00000000140FC656-00000000140FC6A3
void __cdecl GadgetChainSetLevelEvent::~GadgetChainSetLevelEvent(GadgetChainSetLevelEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GadgetChainSetLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3276: range 0000000013EB7304-0000000013EB7391
// local variable allocation has failed, the output may be wrong!
void __cdecl GadgetChainSetLevelEvent::GadgetChainSetLevelEvent(
        GadgetChainSetLevelEvent *const this,
        uint32_t chain_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GadgetChainSetLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&chain_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->chain_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chain_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chain_id, *(_QWORD *)&chain_id, &this->chain_id);
  }
  this->chain_id = chain_id;
};

// Line 3284: range 0000000018327F6A-0000000018327FB7
void __cdecl GalleryVintageHuntingStageOneSettleEvent::~GalleryVintageHuntingStageOneSettleEvent(
        GalleryVintageHuntingStageOneSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryVintageHuntingStageOneSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3284: range 0000000018327FB8-0000000018327FE2
void __cdecl GalleryVintageHuntingStageOneSettleEvent::~GalleryVintageHuntingStageOneSettleEvent(
        GalleryVintageHuntingStageOneSettleEvent *const this)
{
  GalleryVintageHuntingStageOneSettleEvent::~GalleryVintageHuntingStageOneSettleEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 3287: range 00000000180AB0E8-00000000180AB2CC
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryVintageHuntingStageOneSettleEvent::GalleryVintageHuntingStageOneSettleEvent(
        GalleryVintageHuntingStageOneSettleEvent *const this,
        uint32_t activity_id,
        uint32_t stage_id,
        uint32_t score,
        uint32_t timid_cnt,
        uint32_t brutal_cnt,
        uint32_t elite_cnt)
{
  int (**v7)(...); // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx

  BaseEvent::BaseEvent(this);
  v7 = (int (**)(...))(&`vtable for'GalleryVintageHuntingStageOneSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, &this->activity_id);
  }
  this->activity_id = activity_id;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->stage_id, v8, v9);
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score, v8, &this->score);
  }
  this->score = score;
  v10 = (((_BYTE)this + 36) & 7u) + 3;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->timid_cnt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timid_cnt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->timid_cnt, v10, v11);
  this->timid_cnt = timid_cnt;
  if ( *(_BYTE *)(((unsigned __int64)&this->brutal_cnt >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->brutal_cnt >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->brutal_cnt, v10, &this->brutal_cnt);
  }
  this->brutal_cnt = brutal_cnt;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->elite_cnt >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->elite_cnt >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->elite_cnt, (((_BYTE)this + 44) & 7u) + 3, v12);
  this->elite_cnt = elite_cnt;
};

// Line 3299: range 0000000018327EE0-0000000018327F3D
void __cdecl GalleryVintageHuntingStageTwoSettleEvent::~GalleryVintageHuntingStageTwoSettleEvent(
        GalleryVintageHuntingStageTwoSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryVintageHuntingStageTwoSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::map<unsigned int,unsigned int>::~map(&this->animal_count_map);
  BaseEvent::~BaseEvent(this);
};

// Line 3299: range 0000000018327F3E-0000000018327F68
void __cdecl GalleryVintageHuntingStageTwoSettleEvent::~GalleryVintageHuntingStageTwoSettleEvent(
        GalleryVintageHuntingStageTwoSettleEvent *const this)
{
  GalleryVintageHuntingStageTwoSettleEvent::~GalleryVintageHuntingStageTwoSettleEvent(this);
  operator delete(this, 0x60uLL);
};

// Line 3302: range 00000000180AB2CE-00000000180AB4EC
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryVintageHuntingStageTwoSettleEvent::GalleryVintageHuntingStageTwoSettleEvent(
        GalleryVintageHuntingStageTwoSettleEvent *const this,
        uint32_t activity_id,
        uint32_t stage_id,
        uint32_t capture_animal_num,
        uint32_t total_num,
        std::map<unsigned int,unsigned int> *animal_count_map,
        uint32_t capture_no_battle_num,
        uint32_t capture_type_num)
{
  int (**v8)(...); // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx

  BaseEvent::BaseEvent(this);
  v8 = (int (**)(...))(&`vtable for'GalleryVintageHuntingStageTwoSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v8;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, &this->activity_id);
  }
  this->activity_id = activity_id;
  v9 = (((_BYTE)this + 28) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->stage_id, v9, v10);
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_animal_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_animal_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->capture_animal_num, v9, &this->capture_animal_num);
  }
  this->capture_animal_num = capture_animal_num;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->total_num, (((_BYTE)this + 36) & 7u) + 3, v11);
  this->total_num = total_num;
  std::map<unsigned int,unsigned int>::map(&this->animal_count_map, animal_count_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->capture_no_battle_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->capture_no_battle_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->capture_no_battle_num, animal_count_map, &this->capture_no_battle_num);
  }
  this->capture_no_battle_num = capture_no_battle_num;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->capture_type_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->capture_type_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store4(&this->capture_type_num, (((_BYTE)this + 92) & 7u) + 3, v12);
  this->capture_type_num = capture_type_num;
};

// Line 3317: range 0000000018327E66-0000000018327EB3
void __cdecl GalleryVintageHuntingStageThreeSettleEvent::~GalleryVintageHuntingStageThreeSettleEvent(
        GalleryVintageHuntingStageThreeSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryVintageHuntingStageThreeSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3317: range 0000000018327EB4-0000000018327EDE
void __cdecl GalleryVintageHuntingStageThreeSettleEvent::~GalleryVintageHuntingStageThreeSettleEvent(
        GalleryVintageHuntingStageThreeSettleEvent *const this)
{
  GalleryVintageHuntingStageThreeSettleEvent::~GalleryVintageHuntingStageThreeSettleEvent(this);
  operator delete(this, 0x30uLL);
};

// Line 3320: range 00000000180AB4EE-00000000180AB690
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryVintageHuntingStageThreeSettleEvent::GalleryVintageHuntingStageThreeSettleEvent(
        GalleryVintageHuntingStageThreeSettleEvent *const this,
        uint32_t activity_id,
        uint32_t stage_id,
        uint32_t left_time,
        uint32_t boss_weak_times,
        bool is_success)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'GalleryVintageHuntingStageThreeSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&activity_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, *(_QWORD *)&activity_id, &this->activity_id);
  }
  this->activity_id = activity_id;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->stage_id, v7, v8);
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_time, v7, &this->left_time);
  }
  this->left_time = left_time;
  v9 = (((_BYTE)this + 36) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->boss_weak_times >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->boss_weak_times >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->boss_weak_times, v9, v10);
  this->boss_weak_times = boss_weak_times;
  if ( *(char *)(((unsigned __int64)&this->is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_success, v9, &this->is_success);
  this->is_success = is_success;
};

// Line 3331: range 00000000144F03EC-00000000144F0416
void __cdecl VintageHuntingScoreEvent::~VintageHuntingScoreEvent(VintageHuntingScoreEvent *const this)
{
  VintageHuntingScoreEvent::~VintageHuntingScoreEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3331: range 00000000144F039E-00000000144F03EB
void __cdecl VintageHuntingScoreEvent::~VintageHuntingScoreEvent(VintageHuntingScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3334: range 00000000143FCA56-00000000143FCAE3
// local variable allocation has failed, the output may be wrong!
void __cdecl VintageHuntingScoreEvent::VintageHuntingScoreEvent(VintageHuntingScoreEvent *const this, uint32_t score)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&score);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score, *(_QWORD *)&score, &this->score);
  }
  this->score = score;
};

// Line 3340: range 00000000144F0324-00000000144F0371
void __cdecl VintageHuntingCaptureNumEvent::~VintageHuntingCaptureNumEvent(VintageHuntingCaptureNumEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3340: range 00000000144F0372-00000000144F039C
void __cdecl VintageHuntingCaptureNumEvent::~VintageHuntingCaptureNumEvent(VintageHuntingCaptureNumEvent *const this)
{
  VintageHuntingCaptureNumEvent::~VintageHuntingCaptureNumEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3343: range 00000000143FCAE4-00000000143FCB71
// local variable allocation has failed, the output may be wrong!
void __cdecl VintageHuntingCaptureNumEvent::VintageHuntingCaptureNumEvent(
        VintageHuntingCaptureNumEvent *const this,
        uint32_t num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->num, *(_QWORD *)&num, &this->num);
  }
  this->num = num;
};

// Line 3349: range 00000000144F02F8-00000000144F0322
void __cdecl VintageHuntingCaptureNoBattleNumEvent::~VintageHuntingCaptureNoBattleNumEvent(
        VintageHuntingCaptureNoBattleNumEvent *const this)
{
  VintageHuntingCaptureNoBattleNumEvent::~VintageHuntingCaptureNoBattleNumEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3349: range 00000000144F02AA-00000000144F02F7
void __cdecl VintageHuntingCaptureNoBattleNumEvent::~VintageHuntingCaptureNoBattleNumEvent(
        VintageHuntingCaptureNoBattleNumEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureNoBattleNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3352: range 00000000143FCB72-00000000143FCBFF
// local variable allocation has failed, the output may be wrong!
void __cdecl VintageHuntingCaptureNoBattleNumEvent::VintageHuntingCaptureNoBattleNumEvent(
        VintageHuntingCaptureNoBattleNumEvent *const this,
        uint32_t num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureNoBattleNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->num, *(_QWORD *)&num, &this->num);
  }
  this->num = num;
};

// Line 3358: range 00000000144F0230-00000000144F027D
void __cdecl VintageHuntingCaptureTypeNumEvent::~VintageHuntingCaptureTypeNumEvent(
        VintageHuntingCaptureTypeNumEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureTypeNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3358: range 00000000144F027E-00000000144F02A8
void __cdecl VintageHuntingCaptureTypeNumEvent::~VintageHuntingCaptureTypeNumEvent(
        VintageHuntingCaptureTypeNumEvent *const this)
{
  VintageHuntingCaptureTypeNumEvent::~VintageHuntingCaptureTypeNumEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3361: range 00000000143FCC00-00000000143FCC8D
// local variable allocation has failed, the output may be wrong!
void __cdecl VintageHuntingCaptureTypeNumEvent::VintageHuntingCaptureTypeNumEvent(
        VintageHuntingCaptureTypeNumEvent *const this,
        uint32_t type_num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureTypeNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&type_num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_num, *(_QWORD *)&type_num, &this->type_num);
  }
  this->type_num = type_num;
};

// Line 3367: range 00000000144F01B6-00000000144F0203
void __cdecl VintageHuntingFinishBossEvent::~VintageHuntingFinishBossEvent(VintageHuntingFinishBossEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingFinishBossEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3367: range 00000000144F0204-00000000144F022E
void __cdecl VintageHuntingFinishBossEvent::~VintageHuntingFinishBossEvent(VintageHuntingFinishBossEvent *const this)
{
  VintageHuntingFinishBossEvent::~VintageHuntingFinishBossEvent(this);
  operator delete(this, 0x18uLL);
};

// Line 3370: range 00000000143FCC8E-00000000143FCCDB
void __cdecl VintageHuntingFinishBossEvent::VintageHuntingFinishBossEvent(VintageHuntingFinishBossEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingFinishBossEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
};

// Line 3374: range 00000000144F018A-00000000144F01B4
void __cdecl VintageHuntingFinishBossInTimeEvent::~VintageHuntingFinishBossInTimeEvent(
        VintageHuntingFinishBossInTimeEvent *const this)
{
  VintageHuntingFinishBossInTimeEvent::~VintageHuntingFinishBossInTimeEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3374: range 00000000144F013C-00000000144F0189
void __cdecl VintageHuntingFinishBossInTimeEvent::~VintageHuntingFinishBossInTimeEvent(
        VintageHuntingFinishBossInTimeEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingFinishBossInTimeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3377: range 00000000143FCCDC-00000000143FCD69
// local variable allocation has failed, the output may be wrong!
void __cdecl VintageHuntingFinishBossInTimeEvent::VintageHuntingFinishBossInTimeEvent(
        VintageHuntingFinishBossInTimeEvent *const this,
        uint32_t left_time)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingFinishBossInTimeEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&left_time);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->left_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->left_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->left_time, *(_QWORD *)&left_time, &this->left_time);
  }
  this->left_time = left_time;
};

// Line 3383: range 00000000144F00C2-00000000144F010F
void __cdecl VintageHuntingBossWeakTimesEvent::~VintageHuntingBossWeakTimesEvent(
        VintageHuntingBossWeakTimesEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingBossWeakTimesEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3383: range 00000000144F0110-00000000144F013A
void __cdecl VintageHuntingBossWeakTimesEvent::~VintageHuntingBossWeakTimesEvent(
        VintageHuntingBossWeakTimesEvent *const this)
{
  VintageHuntingBossWeakTimesEvent::~VintageHuntingBossWeakTimesEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3386: range 00000000143FCD6A-00000000143FCDF7
// local variable allocation has failed, the output may be wrong!
void __cdecl VintageHuntingBossWeakTimesEvent::VintageHuntingBossWeakTimesEvent(
        VintageHuntingBossWeakTimesEvent *const this,
        uint32_t boss_weak_times)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingBossWeakTimesEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&boss_weak_times);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_weak_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_weak_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->boss_weak_times, *(_QWORD *)&boss_weak_times, &this->boss_weak_times);
  }
  this->boss_weak_times = boss_weak_times;
};

// Line 3392: range 0000000014D24BD2-0000000014D24BFC
void __cdecl VintageDecorationCompleteEvent::~VintageDecorationCompleteEvent(
        VintageDecorationCompleteEvent *const this)
{
  VintageDecorationCompleteEvent::~VintageDecorationCompleteEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3392: range 0000000014D24B84-0000000014D24BD1
void __cdecl VintageDecorationCompleteEvent::~VintageDecorationCompleteEvent(
        VintageDecorationCompleteEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageDecorationCompleteEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3395: range 00000000149ECBFE-00000000149ECC8B
// local variable allocation has failed, the output may be wrong!
void __cdecl VintageDecorationCompleteEvent::VintageDecorationCompleteEvent(
        VintageDecorationCompleteEvent *const this,
        uint32_t node_num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageDecorationCompleteEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&node_num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->node_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->node_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->node_num, *(_QWORD *)&node_num, &this->node_num);
  }
  this->node_num = node_num;
};

// Line 3401: range 0000000014D24B58-0000000014D24B82
void __cdecl VintageCollectDecorationNumEvent::~VintageCollectDecorationNumEvent(
        VintageCollectDecorationNumEvent *const this)
{
  VintageCollectDecorationNumEvent::~VintageCollectDecorationNumEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3401: range 0000000014D24B0A-0000000014D24B57
void __cdecl VintageCollectDecorationNumEvent::~VintageCollectDecorationNumEvent(
        VintageCollectDecorationNumEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageCollectDecorationNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3404: range 00000000149ECC8C-00000000149ECD19
// local variable allocation has failed, the output may be wrong!
void __cdecl VintageCollectDecorationNumEvent::VintageCollectDecorationNumEvent(
        VintageCollectDecorationNumEvent *const this,
        uint32_t num)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageCollectDecorationNumEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&num);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->num, *(_QWORD *)&num, &this->num);
  }
  this->num = num;
};

// Line 3410: range 0000000014D24A90-0000000014D24ADD
void __cdecl VintageFinishCampEvent::~VintageFinishCampEvent(VintageFinishCampEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageFinishCampEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3410: range 0000000014D24ADE-0000000014D24B08
void __cdecl VintageFinishCampEvent::~VintageFinishCampEvent(VintageFinishCampEvent *const this)
{
  VintageFinishCampEvent::~VintageFinishCampEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3413: range 00000000149ECD1A-00000000149ECDA7
// local variable allocation has failed, the output may be wrong!
void __cdecl VintageFinishCampEvent::VintageFinishCampEvent(VintageFinishCampEvent *const this, uint32_t camp_level_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'VintageFinishCampEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&camp_level_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->camp_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camp_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camp_level_id, *(_QWORD *)&camp_level_id, &this->camp_level_id);
  }
  this->camp_level_id = camp_level_id;
};

// Line 3419: range 0000000017095B98-0000000017095BC2
void __cdecl RockBoardExploreFinishStageEvent::~RockBoardExploreFinishStageEvent(
        RockBoardExploreFinishStageEvent *const this)
{
  RockBoardExploreFinishStageEvent::~RockBoardExploreFinishStageEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3419: range 0000000017095B4A-0000000017095B97
void __cdecl RockBoardExploreFinishStageEvent::~RockBoardExploreFinishStageEvent(
        RockBoardExploreFinishStageEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RockBoardExploreFinishStageEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3422: range 0000000016D5977E-0000000016D5980B
// local variable allocation has failed, the output may be wrong!
void __cdecl RockBoardExploreFinishStageEvent::RockBoardExploreFinishStageEvent(
        RockBoardExploreFinishStageEvent *const this,
        uint32_t stage_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'RockBoardExploreFinishStageEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, &this->stage_id);
  }
  this->stage_id = stage_id;
};

// Line 3428: range 00000000168337D0-000000001683382D
void __cdecl FungusFighterTrainingGallerySettleEvent::~FungusFighterTrainingGallerySettleEvent(
        FungusFighterTrainingGallerySettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FungusFighterTrainingGallerySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  proto::FungusFighterTrainingSettleInfo::~FungusFighterTrainingSettleInfo(&this->gallery_settle_info);
  BaseEvent::~BaseEvent(this);
};

// Line 3428: range 000000001683382E-0000000016833858
void __cdecl FungusFighterTrainingGallerySettleEvent::~FungusFighterTrainingGallerySettleEvent(
        FungusFighterTrainingGallerySettleEvent *const this)
{
  FungusFighterTrainingGallerySettleEvent::~FungusFighterTrainingGallerySettleEvent(this);
  operator delete(this, 0x48uLL);
};

// Line 3431: range 0000000016667844-0000000016667904
// local variable allocation has failed, the output may be wrong!
void __cdecl FungusFighterTrainingGallerySettleEvent::FungusFighterTrainingGallerySettleEvent(
        FungusFighterTrainingGallerySettleEvent *const this,
        uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FungusFighterTrainingGallerySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  proto::FungusFighterTrainingSettleInfo::FungusFighterTrainingSettleInfo(&this->gallery_settle_info);
};

// Line 3440: range 00000000154CCC80-00000000154CCCAA
void __cdecl FungusFighterCaptureFungusEvent::~FungusFighterCaptureFungusEvent(
        FungusFighterCaptureFungusEvent *const this)
{
  FungusFighterCaptureFungusEvent::~FungusFighterCaptureFungusEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3440: range 00000000154CCC32-00000000154CCC7F
void __cdecl FungusFighterCaptureFungusEvent::~FungusFighterCaptureFungusEvent(
        FungusFighterCaptureFungusEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FungusFighterCaptureFungusEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3443: range 0000000015182D40-0000000015182DCD
// local variable allocation has failed, the output may be wrong!
void __cdecl FungusFighterCaptureFungusEvent::FungusFighterCaptureFungusEvent(
        FungusFighterCaptureFungusEvent *const this,
        uint32_t fungus_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'FungusFighterCaptureFungusEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&fungus_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->fungus_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fungus_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fungus_id, *(_QWORD *)&fungus_id, &this->fungus_id);
  }
  this->fungus_id = fungus_id;
};

// Line 3449: range 00000000154CCBB8-00000000154CCC05
void __cdecl FungusFighterCultivateFungusEvent::~FungusFighterCultivateFungusEvent(
        FungusFighterCultivateFungusEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FungusFighterCultivateFungusEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3449: range 00000000154CCC06-00000000154CCC30
void __cdecl FungusFighterCultivateFungusEvent::~FungusFighterCultivateFungusEvent(
        FungusFighterCultivateFungusEvent *const this)
{
  FungusFighterCultivateFungusEvent::~FungusFighterCultivateFungusEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3452: range 0000000015182DCE-0000000015182EA3
// local variable allocation has failed, the output may be wrong!
void __cdecl FungusFighterCultivateFungusEvent::FungusFighterCultivateFungusEvent(
        FungusFighterCultivateFungusEvent *const this,
        uint32_t cultivate_id,
        uint32_t cultivate_step)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'FungusFighterCultivateFungusEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&cultivate_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->cultivate_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cultivate_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cultivate_id, *(_QWORD *)&cultivate_id, &this->cultivate_id);
  }
  this->cultivate_id = cultivate_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->cultivate_step >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cultivate_step >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->cultivate_step, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->cultivate_step = cultivate_step;
};

// Line 3459: range 00000000154CCB3E-00000000154CCB8B
void __cdecl FungusFighterTrainingNewRecordScoreEvent::~FungusFighterTrainingNewRecordScoreEvent(
        FungusFighterTrainingNewRecordScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FungusFighterTrainingNewRecordScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3459: range 00000000154CCB8C-00000000154CCBB6
void __cdecl FungusFighterTrainingNewRecordScoreEvent::~FungusFighterTrainingNewRecordScoreEvent(
        FungusFighterTrainingNewRecordScoreEvent *const this)
{
  FungusFighterTrainingNewRecordScoreEvent::~FungusFighterTrainingNewRecordScoreEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3462: range 0000000015182EA4-0000000015182F79
// local variable allocation has failed, the output may be wrong!
void __cdecl FungusFighterTrainingNewRecordScoreEvent::FungusFighterTrainingNewRecordScoreEvent(
        FungusFighterTrainingNewRecordScoreEvent *const this,
        uint32_t cur_dungeon_id,
        uint32_t new_record_score)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'FungusFighterTrainingNewRecordScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&cur_dungeon_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, *(_QWORD *)&cur_dungeon_id, &this->dungeon_id);
  }
  this->dungeon_id = cur_dungeon_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->score = new_record_score;
};

// Line 3471: range 0000000017B8E88C-0000000017B8E8D9
void __cdecl GalleryEffigyChallengeV2SettleEvent::~GalleryEffigyChallengeV2SettleEvent(
        GalleryEffigyChallengeV2SettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryEffigyChallengeV2SettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3471: range 0000000017B8E8DA-0000000017B8E904
void __cdecl GalleryEffigyChallengeV2SettleEvent::~GalleryEffigyChallengeV2SettleEvent(
        GalleryEffigyChallengeV2SettleEvent *const this)
{
  GalleryEffigyChallengeV2SettleEvent::~GalleryEffigyChallengeV2SettleEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3474: range 00000000179FE094-00000000179FE121
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryEffigyChallengeV2SettleEvent::GalleryEffigyChallengeV2SettleEvent(
        GalleryEffigyChallengeV2SettleEvent *const this,
        uint32_t gallery_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GalleryEffigyChallengeV2SettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
};

// Line 3482: range 00000000168337A4-00000000168337CE
void __cdecl EffigyChallengeV2FinishRoomEvent::~EffigyChallengeV2FinishRoomEvent(
        EffigyChallengeV2FinishRoomEvent *const this)
{
  EffigyChallengeV2FinishRoomEvent::~EffigyChallengeV2FinishRoomEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3482: range 0000000016833756-00000000168337A3
void __cdecl EffigyChallengeV2FinishRoomEvent::~EffigyChallengeV2FinishRoomEvent(
        EffigyChallengeV2FinishRoomEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EffigyChallengeV2FinishRoomEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3485: range 0000000016667906-00000000166679DB
// local variable allocation has failed, the output may be wrong!
void __cdecl EffigyChallengeV2FinishRoomEvent::EffigyChallengeV2FinishRoomEvent(
        EffigyChallengeV2FinishRoomEvent *const this,
        uint32_t gallery_id,
        uint32_t difficulty)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'EffigyChallengeV2FinishRoomEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->difficulty, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->difficulty = difficulty;
};

// Line 3494: range 0000000017888636-0000000017888660
void __cdecl GCGLevelSettleEvent::~GCGLevelSettleEvent(GCGLevelSettleEvent *const this)
{
  GCGLevelSettleEvent::~GCGLevelSettleEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 3494: range 00000000178885E8-0000000017888635
void __cdecl GCGLevelSettleEvent::~GCGLevelSettleEvent(GCGLevelSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGLevelSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3497: range 00000000176314E4-00000000176315FC
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGLevelSettleEvent::GCGLevelSettleEvent(
        GCGLevelSettleEvent *const this,
        uint32_t level_id,
        uint32_t business_type,
        bool is_win)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'GCGLevelSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->business_type, v5, v6);
  this->business_type = business_type;
  if ( *(char *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_win, v5, &this->is_win);
  this->is_win = is_win;
};

// Line 3507: range 0000000017B8E812-0000000017B8E85F
void __cdecl CharAmusementFinishStageEvent::~CharAmusementFinishStageEvent(CharAmusementFinishStageEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CharAmusementFinishStageEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3507: range 0000000017B8E860-0000000017B8E88A
void __cdecl CharAmusementFinishStageEvent::~CharAmusementFinishStageEvent(CharAmusementFinishStageEvent *const this)
{
  CharAmusementFinishStageEvent::~CharAmusementFinishStageEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3510: range 00000000179FE122-00000000179FE1AF
// local variable allocation has failed, the output may be wrong!
void __cdecl CharAmusementFinishStageEvent::CharAmusementFinishStageEvent(
        CharAmusementFinishStageEvent *const this,
        uint32_t stage_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'CharAmusementFinishStageEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, &this->stage_id);
  }
  this->stage_id = stage_id;
};

// Line 3516: range 000000001788855E-00000000178885BB
void __cdecl GCGChallengeProgressEvent::~GCGChallengeProgressEvent(GCGChallengeProgressEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GCGChallengeProgressEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::map<unsigned int,unsigned int>::~map(&this->gcg_challenge_id_progress_map);
  BaseEvent::~BaseEvent(this);
};

// Line 3516: range 00000000178885BC-00000000178885E6
void __cdecl GCGChallengeProgressEvent::~GCGChallengeProgressEvent(GCGChallengeProgressEvent *const this)
{
  GCGChallengeProgressEvent::~GCGChallengeProgressEvent(this);
  operator delete(this, 0x50uLL);
};

// Line 3519: range 00000000176315FE-00000000176316CC
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGChallengeProgressEvent::GCGChallengeProgressEvent(
        GCGChallengeProgressEvent *const this,
        bool is_win,
        const std::map<unsigned int,unsigned int> *gcg_challenge_id_progress_map)
{
  int (**v3)(...); // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'GCGChallengeProgressEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, is_win);
  this->_vptr_BaseEvent = v3;
  if ( *(char *)(((unsigned __int64)&this->is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_win, is_win, &this->is_win);
  this->is_win = is_win;
  std::map<unsigned int,unsigned int>::map(&this->gcg_challenge_id_progress_map, gcg_challenge_id_progress_map);
};

// Line 3528: range 00000000174B27AA-00000000174B27F7
void __cdecl QuestAvatarRenameEvent::~QuestAvatarRenameEvent(QuestAvatarRenameEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'QuestAvatarRenameEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3528: range 00000000174B27F8-00000000174B2822
void __cdecl QuestAvatarRenameEvent::~QuestAvatarRenameEvent(QuestAvatarRenameEvent *const this)
{
  QuestAvatarRenameEvent::~QuestAvatarRenameEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3531: range 000000001720D66E-000000001720D6FB
// local variable allocation has failed, the output may be wrong!
void __cdecl QuestAvatarRenameEvent::QuestAvatarRenameEvent(QuestAvatarRenameEvent *const this, uint32_t rename_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'QuestAvatarRenameEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&rename_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->rename_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rename_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rename_id, *(_QWORD *)&rename_id, &this->rename_id);
  }
  this->rename_id = rename_id;
};

// Line 3539: range 0000000017B8E788-0000000017B8E7E5
void __cdecl CoinCollectGalleryFinishEvent::~CoinCollectGalleryFinishEvent(CoinCollectGalleryFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CoinCollectGalleryFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->uid_2_choose_skill_no_map_);
  BaseEvent::~BaseEvent(this);
};

// Line 3539: range 0000000017B8E7E6-0000000017B8E810
void __cdecl CoinCollectGalleryFinishEvent::~CoinCollectGalleryFinishEvent(CoinCollectGalleryFinishEvent *const this)
{
  CoinCollectGalleryFinishEvent::~CoinCollectGalleryFinishEvent(this);
  operator delete(this, 0x60uLL);
};

// Line 3542: range 00000000179FE1B0-00000000179FE34C
// local variable allocation has failed, the output may be wrong!
void __cdecl CoinCollectGalleryFinishEvent::CoinCollectGalleryFinishEvent(
        CoinCollectGalleryFinishEvent *const this,
        uint32_t level_id,
        uint32_t coin_num,
        uint32_t time_ms,
        uint32_t coin_total_num,
        const std::unordered_map<unsigned int,unsigned int> *uid_2_choose_skill_no_map)
{
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx

  BaseEvent::BaseEvent(this);
  v6 = (int (**)(...))(&`vtable for'CoinCollectGalleryFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->coin_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->coin_num, v7, v8);
  this->coin_num = coin_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->time_ms >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->time_ms >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->time_ms, v7, &this->time_ms);
  }
  this->time_ms = time_ms;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->coin_total_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_total_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->coin_total_num, (((_BYTE)this + 36) & 7u) + 3, v9);
  this->coin_total_num = coin_total_num;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(
    &this->uid_2_choose_skill_no_map_,
    uid_2_choose_skill_no_map);
};

// Line 3555: range 0000000017B8E75C-0000000017B8E786
void __cdecl GalleryBrickBreakerSettleEvent::~GalleryBrickBreakerSettleEvent(
        GalleryBrickBreakerSettleEvent *const this)
{
  GalleryBrickBreakerSettleEvent::~GalleryBrickBreakerSettleEvent(this);
  operator delete(this, 0x98uLL);
};

// Line 3555: range 0000000017B8E6CE-0000000017B8E75B
void __cdecl GalleryBrickBreakerSettleEvent::~GalleryBrickBreakerSettleEvent(
        GalleryBrickBreakerSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryBrickBreakerSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<unsigned int>::~vector(&this->remaining_boss_hp_vec);
  std::vector<unsigned int>::~vector(&this->score_vec);
  std::vector<proto::BreakoutElementReactionCounter>::~vector(&this->ball_element_reaction_vec);
  std::vector<proto::BreakoutElementReactionCounter>::~vector(&this->brick_element_reaction_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 3558: range 00000000179FE34E-00000000179FE5AC
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryBrickBreakerSettleEvent::GalleryBrickBreakerSettleEvent(
        GalleryBrickBreakerSettleEvent *const this,
        uint32_t gallery_id)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'GalleryBrickBreakerSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->time, v3, v4);
  this->time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score, v3, &this->score);
  }
  this->score = 0;
  v5 = (((_BYTE)this + 36) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->life_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->life_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->life_count, v5, v6);
  this->life_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_combo, v5, &this->max_combo);
  }
  this->max_combo = 0;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->remaining_boss_hp >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remaining_boss_hp >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->remaining_boss_hp, v7, v8);
  this->remaining_boss_hp = 0;
  std::vector<proto::BreakoutElementReactionCounter>::vector(&this->brick_element_reaction_vec);
  std::vector<proto::BreakoutElementReactionCounter>::vector(&this->ball_element_reaction_vec);
  std::vector<unsigned int>::vector(&this->score_vec);
  std::vector<unsigned int>::vector(&this->remaining_boss_hp_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reason, v7, &this->reason);
  }
  this->reason = BrickBreakerSettleNotify_SettleReason_SETTLE_REASON_TIME_OUT;
};

// Line 3574: range 0000000015032350-000000001503237A
void __cdecl BrickBreakerWorldLevelFinishEvent::~BrickBreakerWorldLevelFinishEvent(
        BrickBreakerWorldLevelFinishEvent *const this)
{
  BrickBreakerWorldLevelFinishEvent::~BrickBreakerWorldLevelFinishEvent(this);
  operator delete(this, 0x58uLL);
};

// Line 3574: range 00000000150322E2-000000001503234F
void __cdecl BrickBreakerWorldLevelFinishEvent::~BrickBreakerWorldLevelFinishEvent(
        BrickBreakerWorldLevelFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerWorldLevelFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<proto::BreakoutElementReactionCounter>::~vector(&this->ball_element_reaction_vec);
  std::vector<proto::BreakoutElementReactionCounter>::~vector(&this->brick_element_reaction_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 3577: range 0000000014F75996-0000000014F75ACB
// local variable allocation has failed, the output may be wrong!
void __cdecl BrickBreakerWorldLevelFinishEvent::BrickBreakerWorldLevelFinishEvent(
        BrickBreakerWorldLevelFinishEvent *const this,
        uint32_t level_id,
        uint32_t score,
        uint32_t combo)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'BrickBreakerWorldLevelFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->score, v5, v6);
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combo, v5, &this->combo);
  }
  this->combo = combo;
  std::vector<proto::BreakoutElementReactionCounter>::vector(&this->brick_element_reaction_vec);
  std::vector<proto::BreakoutElementReactionCounter>::vector(&this->ball_element_reaction_vec);
};

// Line 3587: range 0000000015032248-00000000150322B5
void __cdecl BrickBreakerDungeonLevelFinishEvent::~BrickBreakerDungeonLevelFinishEvent(
        BrickBreakerDungeonLevelFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerDungeonLevelFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  std::vector<proto::BreakoutElementReactionCounter>::~vector(&this->ball_element_reaction_vec);
  std::vector<proto::BreakoutElementReactionCounter>::~vector(&this->brick_element_reaction_vec);
  BaseEvent::~BaseEvent(this);
};

// Line 3587: range 00000000150322B6-00000000150322E0
void __cdecl BrickBreakerDungeonLevelFinishEvent::~BrickBreakerDungeonLevelFinishEvent(
        BrickBreakerDungeonLevelFinishEvent *const this)
{
  BrickBreakerDungeonLevelFinishEvent::~BrickBreakerDungeonLevelFinishEvent(this);
  operator delete(this, 0x58uLL);
};

// Line 3590: range 0000000014F75ACC-0000000014F75C01
// local variable allocation has failed, the output may be wrong!
void __cdecl BrickBreakerDungeonLevelFinishEvent::BrickBreakerDungeonLevelFinishEvent(
        BrickBreakerDungeonLevelFinishEvent *const this,
        uint32_t level_id,
        uint32_t score,
        uint32_t combo)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'BrickBreakerDungeonLevelFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->score, v5, v6);
  this->score = score;
  if ( *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combo >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combo, v5, &this->combo);
  }
  this->combo = combo;
  std::vector<proto::BreakoutElementReactionCounter>::vector(&this->brick_element_reaction_vec);
  std::vector<proto::BreakoutElementReactionCounter>::vector(&this->ball_element_reaction_vec);
};

// Line 3600: range 00000000168336DC-0000000016833729
void __cdecl GalleryElectroherculesBattleSettleEvent::~GalleryElectroherculesBattleSettleEvent(
        GalleryElectroherculesBattleSettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryElectroherculesBattleSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3600: range 000000001683372A-0000000016833754
void __cdecl GalleryElectroherculesBattleSettleEvent::~GalleryElectroherculesBattleSettleEvent(
        GalleryElectroherculesBattleSettleEvent *const this)
{
  GalleryElectroherculesBattleSettleEvent::~GalleryElectroherculesBattleSettleEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 3603: range 00000000166679DC-0000000016667AF1
// local variable allocation has failed, the output may be wrong!
void __cdecl GalleryElectroherculesBattleSettleEvent::GalleryElectroherculesBattleSettleEvent(
        GalleryElectroherculesBattleSettleEvent *const this,
        uint32_t stage_id,
        uint32_t level_id,
        uint32_t finish_time)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  BaseEvent::BaseEvent(this);
  v4 = (int (**)(...))(&`vtable for'GalleryElectroherculesBattleSettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, &this->stage_id);
  }
  this->stage_id = stage_id;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->level_id, v5, v6);
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_time, v5, &this->finish_time);
  }
  this->finish_time = finish_time;
};

// Line 3612: range 0000000018327E3A-0000000018327E64
void __cdecl TeamChainStageSuccessFinishEvent::~TeamChainStageSuccessFinishEvent(
        TeamChainStageSuccessFinishEvent *const this)
{
  TeamChainStageSuccessFinishEvent::~TeamChainStageSuccessFinishEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3612: range 0000000018327DEC-0000000018327E39
void __cdecl TeamChainStageSuccessFinishEvent::~TeamChainStageSuccessFinishEvent(
        TeamChainStageSuccessFinishEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TeamChainStageSuccessFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3615: range 00000000180AB692-00000000180AB767
// local variable allocation has failed, the output may be wrong!
void __cdecl TeamChainStageSuccessFinishEvent::TeamChainStageSuccessFinishEvent(
        TeamChainStageSuccessFinishEvent *const this,
        uint32_t stage_id,
        uint32_t score)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'TeamChainStageSuccessFinishEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&stage_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, *(_QWORD *)&stage_id, &this->stage_id);
  }
  this->stage_id = stage_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->score = score;
};

// Line 3622: range 0000000016B7C5A8-0000000016B7C5F5
void __cdecl LanV3RaceScoreEvent::~LanV3RaceScoreEvent(LanV3RaceScoreEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LanV3RaceScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3622: range 0000000016B7C5F6-0000000016B7C620
void __cdecl LanV3RaceScoreEvent::~LanV3RaceScoreEvent(LanV3RaceScoreEvent *const this)
{
  LanV3RaceScoreEvent::~LanV3RaceScoreEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3625: range 00000000169057BA-000000001690588F
// local variable allocation has failed, the output may be wrong!
void __cdecl LanV3RaceScoreEvent::LanV3RaceScoreEvent(
        LanV3RaceScoreEvent *const this,
        uint32_t gallery_id,
        uint32_t score)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'LanV3RaceScoreEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&gallery_id);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, *(_QWORD *)&gallery_id, &this->gallery_id);
  }
  this->gallery_id = gallery_id;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->score, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->score = score;
};

// Line 3634: range 0000000018327DC0-0000000018327DEA
void __cdecl LanV3ShadowFinishLevelEvent::~LanV3ShadowFinishLevelEvent(LanV3ShadowFinishLevelEvent *const this)
{
  LanV3ShadowFinishLevelEvent::~LanV3ShadowFinishLevelEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 3634: range 0000000018327D72-0000000018327DBF
void __cdecl LanV3ShadowFinishLevelEvent::~LanV3ShadowFinishLevelEvent(LanV3ShadowFinishLevelEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LanV3ShadowFinishLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3637: range 00000000180AB768-00000000180AB7F5
// local variable allocation has failed, the output may be wrong!
void __cdecl LanV3ShadowFinishLevelEvent::LanV3ShadowFinishLevelEvent(
        LanV3ShadowFinishLevelEvent *const this,
        uint32_t level_id)
{
  int (**v2)(...); // rdx

  BaseEvent::BaseEvent(this);
  v2 = (int (**)(...))(&`vtable for'LanV3ShadowFinishLevelEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
};

// Line 3646: range 0000000016833662-00000000168336AF
void __cdecl DuelHeartGallerySettleEvent::~DuelHeartGallerySettleEvent(DuelHeartGallerySettleEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DuelHeartGallerySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseEvent = v2;
  BaseEvent::~BaseEvent(this);
};

// Line 3646: range 00000000168336B0-00000000168336DA
void __cdecl DuelHeartGallerySettleEvent::~DuelHeartGallerySettleEvent(DuelHeartGallerySettleEvent *const this)
{
  DuelHeartGallerySettleEvent::~DuelHeartGallerySettleEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 3649: range 0000000016667AF2-0000000016667C53
// local variable allocation has failed, the output may be wrong!
void __cdecl DuelHeartGallerySettleEvent::DuelHeartGallerySettleEvent(
        DuelHeartGallerySettleEvent *const this,
        uint32_t level_id,
        uint32_t difficulty,
        bool is_succ,
        uint32_t cost_time)
{
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdx

  BaseEvent::BaseEvent(this);
  v5 = (int (**)(...))(&`vtable for'DuelHeartGallerySettleEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&level_id);
  this->_vptr_BaseEvent = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, *(_QWORD *)&level_id, &this->level_id);
  }
  this->level_id = level_id;
  v6 = (((_BYTE)this + 28) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->difficulty, v6, v7);
  this->difficulty = difficulty;
  if ( *(char *)(((unsigned __int64)&this->is_succ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_succ, v6, &this->is_succ);
  this->is_succ = is_succ;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cost_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->cost_time, (((_BYTE)this + 36) & 7u) + 3, v8);
  this->cost_time = cost_time;
};

// Line 6732: range 00000000143FBDB2-00000000143FBE21
InternalPlayerEventType __cdecl BaseEvent::getType(const BaseEvent *const this)
{
  const std::type_info **v1; // rax
  std::type_index v3; // [rsp+18h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (const std::type_info **)(this->_vptr_BaseEvent - 1);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_BaseEvent - 1);
  std::type_index::type_index(&v3, *v1);
  return v3;
};

// Line 39062: range 0000000016666DE8-0000000016666EBD
// local variable allocation has failed, the output may be wrong!
void __cdecl LoseItemEvent::LoseItemEvent(LoseItemEvent *const this, uint32_t itemid, uint32_t num)
{
  int (**v3)(...); // rdx
  __int64 v4; // rdx

  BaseEvent::BaseEvent(this);
  v3 = (int (**)(...))(&`vtable for'LoseItemEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, *(_QWORD *)&itemid);
  this->_vptr_BaseEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, *(_QWORD *)&itemid, &this->item_id);
  }
  this->item_id = itemid;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_num >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->item_num, (((_BYTE)this + 28) & 7u) + 3, v4);
  this->item_num = num;
};
