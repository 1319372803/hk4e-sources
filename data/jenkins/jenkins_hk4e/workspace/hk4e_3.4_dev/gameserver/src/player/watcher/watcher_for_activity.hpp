// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/watcher/watcher_for_activity.hpp

// Line 19: range 00000000164B9CD0-00000000164B9D1D
void __cdecl EffigyChallengeScoreWatcher::EffigyChallengeScoreWatcher(EffigyChallengeScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<EffigyChallengeScoreWatcher,EffigyChallengeScoreEvent,EffigyChallengeScoreWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'EffigyChallengeScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 19: range 00000000164E6B14-00000000164E6B61
void __cdecl EffigyChallengeScoreWatcher::~EffigyChallengeScoreWatcher(EffigyChallengeScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EffigyChallengeScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<EffigyChallengeScoreWatcher,EffigyChallengeScoreEvent,EffigyChallengeScoreWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 19: range 00000000164E6B62-00000000164E6B8C
void __cdecl EffigyChallengeScoreWatcher::~EffigyChallengeScoreWatcher(EffigyChallengeScoreWatcher *const this)
{
  EffigyChallengeScoreWatcher::~EffigyChallengeScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 27: range 00000000164BA0BE-00000000164BA10B
void __cdecl CrucibleElementScoreWatcher::CrucibleElementScoreWatcher(CrucibleElementScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CrucibleElementScoreWatcher,MpPlayBattleSettleEvent,CrucibleElementScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CrucibleElementScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 27: range 00000000164E6A9A-00000000164E6AE7
void __cdecl CrucibleElementScoreWatcher::~CrucibleElementScoreWatcher(CrucibleElementScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrucibleElementScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CrucibleElementScoreWatcher,MpPlayBattleSettleEvent,CrucibleElementScoreWatcherParam>::~ServerWatcher(this);
};

// Line 27: range 00000000164E6AE8-00000000164E6B12
void __cdecl CrucibleElementScoreWatcher::~CrucibleElementScoreWatcher(CrucibleElementScoreWatcher *const this)
{
  CrucibleElementScoreWatcher::~CrucibleElementScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 34: range 00000000164BA4AC-00000000164BA4F9
void __cdecl CrucibleMaxBallWatcher::CrucibleMaxBallWatcher(CrucibleMaxBallWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CrucibleMaxBallWatcher,CrucibleSubmitMaxBall,CrucibleMaxBallWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CrucibleMaxBallWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 34: range 00000000164E6A6E-00000000164E6A98
void __cdecl CrucibleMaxBallWatcher::~CrucibleMaxBallWatcher(CrucibleMaxBallWatcher *const this)
{
  CrucibleMaxBallWatcher::~CrucibleMaxBallWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 34: range 00000000164E6A20-00000000164E6A6D
void __cdecl CrucibleMaxBallWatcher::~CrucibleMaxBallWatcher(CrucibleMaxBallWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrucibleMaxBallWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CrucibleMaxBallWatcher,CrucibleSubmitMaxBall,CrucibleMaxBallWatcherParam>::~ServerWatcher(this);
};

// Line 41: range 00000000164BA89A-00000000164BA8E7
void __cdecl CrucibleMaxScoreWatcher::CrucibleMaxScoreWatcher(CrucibleMaxScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CrucibleMaxScoreWatcher,CrucibleMaxElementScore,CrucibleMaxScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CrucibleMaxScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 41: range 00000000164E69F4-00000000164E6A1E
void __cdecl CrucibleMaxScoreWatcher::~CrucibleMaxScoreWatcher(CrucibleMaxScoreWatcher *const this)
{
  CrucibleMaxScoreWatcher::~CrucibleMaxScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 41: range 00000000164E69A6-00000000164E69F3
void __cdecl CrucibleMaxScoreWatcher::~CrucibleMaxScoreWatcher(CrucibleMaxScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrucibleMaxScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CrucibleMaxScoreWatcher,CrucibleMaxElementScore,CrucibleMaxScoreWatcherParam>::~ServerWatcher(this);
};

// Line 48: range 00000000164BAC88-00000000164BACD5
void __cdecl CrucibleSubmitBallWatcher::CrucibleSubmitBallWatcher(CrucibleSubmitBallWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CrucibleSubmitBallWatcher,CrucibleSubmitBall,CrucibleSubmitBallWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CrucibleSubmitBallWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 48: range 00000000164E692C-00000000164E6979
void __cdecl CrucibleSubmitBallWatcher::~CrucibleSubmitBallWatcher(CrucibleSubmitBallWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrucibleSubmitBallWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CrucibleSubmitBallWatcher,CrucibleSubmitBall,CrucibleSubmitBallWatcherParam>::~ServerWatcher(this);
};

// Line 48: range 00000000164E697A-00000000164E69A4
void __cdecl CrucibleSubmitBallWatcher::~CrucibleSubmitBallWatcher(CrucibleSubmitBallWatcher *const this)
{
  CrucibleSubmitBallWatcher::~CrucibleSubmitBallWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 55: range 00000000164BB076-00000000164BB0C3
void __cdecl CrucibleWorldLevelScoreWatcher::CrucibleWorldLevelScoreWatcher(CrucibleWorldLevelScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CrucibleWorldLevelScoreWatcher,MpPlayBattleSettleEvent,CrucibleWorldLevelScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CrucibleWorldLevelScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 55: range 00000000164E6900-00000000164E692A
void __cdecl CrucibleWorldLevelScoreWatcher::~CrucibleWorldLevelScoreWatcher(
        CrucibleWorldLevelScoreWatcher *const this)
{
  CrucibleWorldLevelScoreWatcher::~CrucibleWorldLevelScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 55: range 00000000164E68B2-00000000164E68FF
void __cdecl CrucibleWorldLevelScoreWatcher::~CrucibleWorldLevelScoreWatcher(
        CrucibleWorldLevelScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrucibleWorldLevelScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CrucibleWorldLevelScoreWatcher,MpPlayBattleSettleEvent,CrucibleWorldLevelScoreWatcherParam>::~ServerWatcher(this);
};

// Line 62: range 00000000164BB464-00000000164BB4B1
void __cdecl BlessingExchangePicNumWatcher::BlessingExchangePicNumWatcher(BlessingExchangePicNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BlessingExchangePicNumWatcher,BlessingExchangePicEvent,BlessingExchangePicNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BlessingExchangePicNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 62: range 00000000164E6886-00000000164E68B0
void __cdecl BlessingExchangePicNumWatcher::~BlessingExchangePicNumWatcher(BlessingExchangePicNumWatcher *const this)
{
  BlessingExchangePicNumWatcher::~BlessingExchangePicNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 62: range 00000000164E6838-00000000164E6885
void __cdecl BlessingExchangePicNumWatcher::~BlessingExchangePicNumWatcher(BlessingExchangePicNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BlessingExchangePicNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BlessingExchangePicNumWatcher,BlessingExchangePicEvent,BlessingExchangePicNumWatcherParam>::~ServerWatcher(this);
};

// Line 69: range 00000000164BB852-00000000164BB89F
void __cdecl BlessingRedeemRewardWatcher::BlessingRedeemRewardWatcher(BlessingRedeemRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BlessingRedeemRewardWatcher,BlessingRedeemRewardEvent,BlessingRedeemRewardWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BlessingRedeemRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 69: range 00000000164E67BE-00000000164E680B
void __cdecl BlessingRedeemRewardWatcher::~BlessingRedeemRewardWatcher(BlessingRedeemRewardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BlessingRedeemRewardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BlessingRedeemRewardWatcher,BlessingRedeemRewardEvent,BlessingRedeemRewardWatcherParam>::~ServerWatcher(this);
};

// Line 69: range 00000000164E680C-00000000164E6836
void __cdecl BlessingRedeemRewardWatcher::~BlessingRedeemRewardWatcher(BlessingRedeemRewardWatcher *const this)
{
  BlessingRedeemRewardWatcher::~BlessingRedeemRewardWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 76: range 00000000164BBD08-00000000164BBD55
void __cdecl MechanicusUnlockGearWatcher::MechanicusUnlockGearWatcher(MechanicusUnlockGearWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<MechanicusUnlockGearWatcher,MechanicusUnlockGearEvent,MechanicusUnlockGearWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusUnlockGearWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 76: range 00000000164E6744-00000000164E6791
void __cdecl MechanicusUnlockGearWatcher::~MechanicusUnlockGearWatcher(MechanicusUnlockGearWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusUnlockGearWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<MechanicusUnlockGearWatcher,MechanicusUnlockGearEvent,MechanicusUnlockGearWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 76: range 00000000164E6792-00000000164E67BC
void __cdecl MechanicusUnlockGearWatcher::~MechanicusUnlockGearWatcher(MechanicusUnlockGearWatcher *const this)
{
  MechanicusUnlockGearWatcher::~MechanicusUnlockGearWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 84: range 00000000164BC1BE-00000000164BC20B
void __cdecl MechanicusLevelupGearWatcher::MechanicusLevelupGearWatcher(MechanicusLevelupGearWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<MechanicusLevelupGearWatcher,MechanicusLevelupGearEvent,MechanicusLevelupGearWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusLevelupGearWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 84: range 00000000164E66CA-00000000164E6717
void __cdecl MechanicusLevelupGearWatcher::~MechanicusLevelupGearWatcher(MechanicusLevelupGearWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusLevelupGearWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<MechanicusLevelupGearWatcher,MechanicusLevelupGearEvent,MechanicusLevelupGearWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 84: range 00000000164E6718-00000000164E6742
void __cdecl MechanicusLevelupGearWatcher::~MechanicusLevelupGearWatcher(MechanicusLevelupGearWatcher *const this)
{
  MechanicusLevelupGearWatcher::~MechanicusLevelupGearWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 92: range 00000000164BC5AC-00000000164BC5F9
void __cdecl MechanicusDifficultWatcher::MechanicusDifficultWatcher(MechanicusDifficultWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusDifficultWatcher,MechanicusDungeonSettleEvent,MechanicusDifficultWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusDifficultWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 92: range 00000000164E6650-00000000164E669D
void __cdecl MechanicusDifficultWatcher::~MechanicusDifficultWatcher(MechanicusDifficultWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusDifficultWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusDifficultWatcher,MechanicusDungeonSettleEvent,MechanicusDifficultWatcherParam>::~ServerWatcher(this);
};

// Line 92: range 00000000164E669E-00000000164E66C8
void __cdecl MechanicusDifficultWatcher::~MechanicusDifficultWatcher(MechanicusDifficultWatcher *const this)
{
  MechanicusDifficultWatcher::~MechanicusDifficultWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 99: range 00000000164BC99A-00000000164BC9E7
void __cdecl MechanicusDifficultScoreWatcher::MechanicusDifficultScoreWatcher(
        MechanicusDifficultScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusDifficultScoreWatcher,MechanicusBattleScoreEvent,MechanicusDifficultScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusDifficultScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 99: range 00000000164E65D6-00000000164E6623
void __cdecl MechanicusDifficultScoreWatcher::~MechanicusDifficultScoreWatcher(
        MechanicusDifficultScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusDifficultScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusDifficultScoreWatcher,MechanicusBattleScoreEvent,MechanicusDifficultScoreWatcherParam>::~ServerWatcher(this);
};

// Line 99: range 00000000164E6624-00000000164E664E
void __cdecl MechanicusDifficultScoreWatcher::~MechanicusDifficultScoreWatcher(
        MechanicusDifficultScoreWatcher *const this)
{
  MechanicusDifficultScoreWatcher::~MechanicusDifficultScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 106: range 00000000164BCD88-00000000164BCDD5
void __cdecl MechanicusDifficultEqWatcher::MechanicusDifficultEqWatcher(MechanicusDifficultEqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusDifficultEqWatcher,MechanicusDungeonSettleEvent,MechanicusDifficultEqWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusDifficultEqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 106: range 00000000164E655C-00000000164E65A9
void __cdecl MechanicusDifficultEqWatcher::~MechanicusDifficultEqWatcher(MechanicusDifficultEqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusDifficultEqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusDifficultEqWatcher,MechanicusDungeonSettleEvent,MechanicusDifficultEqWatcherParam>::~ServerWatcher(this);
};

// Line 106: range 00000000164E65AA-00000000164E65D4
void __cdecl MechanicusDifficultEqWatcher::~MechanicusDifficultEqWatcher(MechanicusDifficultEqWatcher *const this)
{
  MechanicusDifficultEqWatcher::~MechanicusDifficultEqWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 113: range 00000000164BD176-00000000164BD1C3
void __cdecl MechanicusKillMonsterWatcher::MechanicusKillMonsterWatcher(MechanicusKillMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusKillMonsterWatcher,MechanicusDungeonSettleEvent,MechanicusKillMonsterWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusKillMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 113: range 00000000164E6530-00000000164E655A
void __cdecl MechanicusKillMonsterWatcher::~MechanicusKillMonsterWatcher(MechanicusKillMonsterWatcher *const this)
{
  MechanicusKillMonsterWatcher::~MechanicusKillMonsterWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 113: range 00000000164E64E2-00000000164E652F
void __cdecl MechanicusKillMonsterWatcher::~MechanicusKillMonsterWatcher(MechanicusKillMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusKillMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusKillMonsterWatcher,MechanicusDungeonSettleEvent,MechanicusKillMonsterWatcherParam>::~ServerWatcher(this);
};

// Line 120: range 00000000164BD564-00000000164BD5B1
void __cdecl MechanicusBuildingPointWatcher::MechanicusBuildingPointWatcher(MechanicusBuildingPointWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBuildingPointWatcher,MechanicusDungeonSettleEvent,MechanicusBuildingPointWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBuildingPointWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 120: range 00000000164E6468-00000000164E64B5
void __cdecl MechanicusBuildingPointWatcher::~MechanicusBuildingPointWatcher(
        MechanicusBuildingPointWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBuildingPointWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBuildingPointWatcher,MechanicusDungeonSettleEvent,MechanicusBuildingPointWatcherParam>::~ServerWatcher(this);
};

// Line 120: range 00000000164E64B6-00000000164E64E0
void __cdecl MechanicusBuildingPointWatcher::~MechanicusBuildingPointWatcher(
        MechanicusBuildingPointWatcher *const this)
{
  MechanicusBuildingPointWatcher::~MechanicusBuildingPointWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 127: range 00000000164BD952-00000000164BD99F
void __cdecl MechanicusBattleEndWatcher::MechanicusBattleEndWatcher(MechanicusBattleEndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleEndWatcher,MechanicusDungeonSettleEvent,MechanicusBattleEndWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 127: range 00000000164E63EE-00000000164E643B
void __cdecl MechanicusBattleEndWatcher::~MechanicusBattleEndWatcher(MechanicusBattleEndWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleEndWatcher,MechanicusDungeonSettleEvent,MechanicusBattleEndWatcherParam>::~ServerWatcher(this);
};

// Line 127: range 00000000164E643C-00000000164E6466
void __cdecl MechanicusBattleEndWatcher::~MechanicusBattleEndWatcher(MechanicusBattleEndWatcher *const this)
{
  MechanicusBattleEndWatcher::~MechanicusBattleEndWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 134: range 00000000164BDD40-00000000164BDD8D
void __cdecl MechanicusBattleEndEscapeMonsterWatcher::MechanicusBattleEndEscapeMonsterWatcher(
        MechanicusBattleEndEscapeMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleEndEscapeMonsterWatcher,MechanicusDungeonSettleEvent,MechanicusBattleEndEscapeMonsterWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndEscapeMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 134: range 00000000164E63C2-00000000164E63EC
void __cdecl MechanicusBattleEndEscapeMonsterWatcher::~MechanicusBattleEndEscapeMonsterWatcher(
        MechanicusBattleEndEscapeMonsterWatcher *const this)
{
  MechanicusBattleEndEscapeMonsterWatcher::~MechanicusBattleEndEscapeMonsterWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 134: range 00000000164E6374-00000000164E63C1
void __cdecl MechanicusBattleEndEscapeMonsterWatcher::~MechanicusBattleEndEscapeMonsterWatcher(
        MechanicusBattleEndEscapeMonsterWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndEscapeMonsterWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleEndEscapeMonsterWatcher,MechanicusDungeonSettleEvent,MechanicusBattleEndEscapeMonsterWatcherParam>::~ServerWatcher(this);
};

// Line 141: range 00000000164BE12E-00000000164BE17B
void __cdecl MechanicusBattleBuildingPointGteqWatcher::MechanicusBattleBuildingPointGteqWatcher(
        MechanicusBattleBuildingPointGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleBuildingPointGteqWatcher,MechanicusDungeonSettleEvent,MechanicusBattleBuildingPointGteqWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleBuildingPointGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 141: range 00000000164E62FA-00000000164E6347
void __cdecl MechanicusBattleBuildingPointGteqWatcher::~MechanicusBattleBuildingPointGteqWatcher(
        MechanicusBattleBuildingPointGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleBuildingPointGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleBuildingPointGteqWatcher,MechanicusDungeonSettleEvent,MechanicusBattleBuildingPointGteqWatcherParam>::~ServerWatcher(this);
};

// Line 141: range 00000000164E6348-00000000164E6372
void __cdecl MechanicusBattleBuildingPointGteqWatcher::~MechanicusBattleBuildingPointGteqWatcher(
        MechanicusBattleBuildingPointGteqWatcher *const this)
{
  MechanicusBattleBuildingPointGteqWatcher::~MechanicusBattleBuildingPointGteqWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 148: range 00000000164BE51C-00000000164BE569
void __cdecl MechanicusBattleRoundGteqWatcher::MechanicusBattleRoundGteqWatcher(
        MechanicusBattleRoundGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleRoundGteqWatcher,MechanicusDungeonSettleEvent,MechanicusBattleRoundGteqWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleRoundGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 148: range 00000000164E62CE-00000000164E62F8
void __cdecl MechanicusBattleRoundGteqWatcher::~MechanicusBattleRoundGteqWatcher(
        MechanicusBattleRoundGteqWatcher *const this)
{
  MechanicusBattleRoundGteqWatcher::~MechanicusBattleRoundGteqWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 148: range 00000000164E6280-00000000164E62CD
void __cdecl MechanicusBattleRoundGteqWatcher::~MechanicusBattleRoundGteqWatcher(
        MechanicusBattleRoundGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleRoundGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleRoundGteqWatcher,MechanicusDungeonSettleEvent,MechanicusBattleRoundGteqWatcherParam>::~ServerWatcher(this);
};

// Line 155: range 00000000164BE90A-00000000164BE957
void __cdecl MechanicusBattleLastRoundWatcher::MechanicusBattleLastRoundWatcher(
        MechanicusBattleLastRoundWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleLastRoundWatcher,MechanicusDungeonSettleEvent,MechanicusBattleLastRoundWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleLastRoundWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 155: range 00000000164E6254-00000000164E627E
void __cdecl MechanicusBattleLastRoundWatcher::~MechanicusBattleLastRoundWatcher(
        MechanicusBattleLastRoundWatcher *const this)
{
  MechanicusBattleLastRoundWatcher::~MechanicusBattleLastRoundWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 155: range 00000000164E6206-00000000164E6253
void __cdecl MechanicusBattleLastRoundWatcher::~MechanicusBattleLastRoundWatcher(
        MechanicusBattleLastRoundWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleLastRoundWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleLastRoundWatcher,MechanicusDungeonSettleEvent,MechanicusBattleLastRoundWatcherParam>::~ServerWatcher(this);
};

// Line 162: range 00000000164BECF8-00000000164BED45
void __cdecl MechanicusBattleWatcherFinishWatcher::MechanicusBattleWatcherFinishWatcher(
        MechanicusBattleWatcherFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleWatcherFinishWatcher,MechanicusBattleWatcherFinishEvent,MechanicusBattleWatcherFinishWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleWatcherFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 162: range 00000000164E618C-00000000164E61D9
void __cdecl MechanicusBattleWatcherFinishWatcher::~MechanicusBattleWatcherFinishWatcher(
        MechanicusBattleWatcherFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleWatcherFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleWatcherFinishWatcher,MechanicusBattleWatcherFinishEvent,MechanicusBattleWatcherFinishWatcherParam>::~ServerWatcher(this);
};

// Line 162: range 00000000164E61DA-00000000164E6204
void __cdecl MechanicusBattleWatcherFinishWatcher::~MechanicusBattleWatcherFinishWatcher(
        MechanicusBattleWatcherFinishWatcher *const this)
{
  MechanicusBattleWatcherFinishWatcher::~MechanicusBattleWatcherFinishWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 168: range 00000000164BF0E6-00000000164BF133
void __cdecl FleurFairDungeonFinishInLimitTimeWatcher::FleurFairDungeonFinishInLimitTimeWatcher(
        FleurFairDungeonFinishInLimitTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FleurFairDungeonFinishInLimitTimeWatcher,FleurFairDungeonFinishEvent,FleurFairDungeonFinishInLimitTimeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonFinishInLimitTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 168: range 00000000164E6160-00000000164E618A
void __cdecl FleurFairDungeonFinishInLimitTimeWatcher::~FleurFairDungeonFinishInLimitTimeWatcher(
        FleurFairDungeonFinishInLimitTimeWatcher *const this)
{
  FleurFairDungeonFinishInLimitTimeWatcher::~FleurFairDungeonFinishInLimitTimeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 168: range 00000000164E6112-00000000164E615F
void __cdecl FleurFairDungeonFinishInLimitTimeWatcher::~FleurFairDungeonFinishInLimitTimeWatcher(
        FleurFairDungeonFinishInLimitTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonFinishInLimitTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FleurFairDungeonFinishInLimitTimeWatcher,FleurFairDungeonFinishEvent,FleurFairDungeonFinishInLimitTimeWatcherParam>::~ServerWatcher(this);
};

// Line 174: range 00000000164BF4D4-00000000164BF521
void __cdecl FleurFairDungeonFinishKeepEnergyWatcher::FleurFairDungeonFinishKeepEnergyWatcher(
        FleurFairDungeonFinishKeepEnergyWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FleurFairDungeonFinishKeepEnergyWatcher,FleurFairDungeonFinishEvent,FleurFairDungeonFinishKeepEnergyWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonFinishKeepEnergyWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 174: range 00000000164E60E6-00000000164E6110
void __cdecl FleurFairDungeonFinishKeepEnergyWatcher::~FleurFairDungeonFinishKeepEnergyWatcher(
        FleurFairDungeonFinishKeepEnergyWatcher *const this)
{
  FleurFairDungeonFinishKeepEnergyWatcher::~FleurFairDungeonFinishKeepEnergyWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 174: range 00000000164E6098-00000000164E60E5
void __cdecl FleurFairDungeonFinishKeepEnergyWatcher::~FleurFairDungeonFinishKeepEnergyWatcher(
        FleurFairDungeonFinishKeepEnergyWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonFinishKeepEnergyWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FleurFairDungeonFinishKeepEnergyWatcher,FleurFairDungeonFinishEvent,FleurFairDungeonFinishKeepEnergyWatcherParam>::~ServerWatcher(this);
};

// Line 180: range 00000000164BF8C2-00000000164BF90F
void __cdecl FleurFairDungeonFinishWithGroupVariableWatcher::FleurFairDungeonFinishWithGroupVariableWatcher(
        FleurFairDungeonFinishWithGroupVariableWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FleurFairDungeonFinishWithGroupVariableWatcher,FleurFairDungeonFinishEvent,FleurFairDungeonFinishWithGroupVariableWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonFinishWithGroupVariableWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 180: range 00000000164E601E-00000000164E606B
void __cdecl FleurFairDungeonFinishWithGroupVariableWatcher::~FleurFairDungeonFinishWithGroupVariableWatcher(
        FleurFairDungeonFinishWithGroupVariableWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonFinishWithGroupVariableWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FleurFairDungeonFinishWithGroupVariableWatcher,FleurFairDungeonFinishEvent,FleurFairDungeonFinishWithGroupVariableWatcherParam>::~ServerWatcher(this);
};

// Line 180: range 00000000164E606C-00000000164E6096
void __cdecl FleurFairDungeonFinishWithGroupVariableWatcher::~FleurFairDungeonFinishWithGroupVariableWatcher(
        FleurFairDungeonFinishWithGroupVariableWatcher *const this)
{
  FleurFairDungeonFinishWithGroupVariableWatcher::~FleurFairDungeonFinishWithGroupVariableWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 186: range 00000000164BFCB0-00000000164BFCFD
void __cdecl FleurFairDungeonFinishWithBuffNumWatcher::FleurFairDungeonFinishWithBuffNumWatcher(
        FleurFairDungeonFinishWithBuffNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FleurFairDungeonFinishWithBuffNumWatcher,FleurFairDungeonFinishEvent,FleurFairDungeonFinishWithBuffNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonFinishWithBuffNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 186: range 00000000164E5FF2-00000000164E601C
void __cdecl FleurFairDungeonFinishWithBuffNumWatcher::~FleurFairDungeonFinishWithBuffNumWatcher(
        FleurFairDungeonFinishWithBuffNumWatcher *const this)
{
  FleurFairDungeonFinishWithBuffNumWatcher::~FleurFairDungeonFinishWithBuffNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 186: range 00000000164E5FA4-00000000164E5FF1
void __cdecl FleurFairDungeonFinishWithBuffNumWatcher::~FleurFairDungeonFinishWithBuffNumWatcher(
        FleurFairDungeonFinishWithBuffNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonFinishWithBuffNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FleurFairDungeonFinishWithBuffNumWatcher,FleurFairDungeonFinishEvent,FleurFairDungeonFinishWithBuffNumWatcherParam>::~ServerWatcher(this);
};

// Line 192: range 00000000164C009E-00000000164C00EB
void __cdecl FleurFairDungeonMissionFinishWatcher::FleurFairDungeonMissionFinishWatcher(
        FleurFairDungeonMissionFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FleurFairDungeonMissionFinishWatcher,FleurFairDungeonMissionFinishEvent,FleurFairDungeonMissionFinishWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonMissionFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 192: range 00000000164E5F2A-00000000164E5F77
void __cdecl FleurFairDungeonMissionFinishWatcher::~FleurFairDungeonMissionFinishWatcher(
        FleurFairDungeonMissionFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FleurFairDungeonMissionFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FleurFairDungeonMissionFinishWatcher,FleurFairDungeonMissionFinishEvent,FleurFairDungeonMissionFinishWatcherParam>::~ServerWatcher(this);
};

// Line 192: range 00000000164E5F78-00000000164E5FA2
void __cdecl FleurFairDungeonMissionFinishWatcher::~FleurFairDungeonMissionFinishWatcher(
        FleurFairDungeonMissionFinishWatcher *const this)
{
  FleurFairDungeonMissionFinishWatcher::~FleurFairDungeonMissionFinishWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 199: range 00000000164C048C-00000000164C04D9
void __cdecl HuntingFinishWatcher::HuntingFinishWatcher(HuntingFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HuntingFinishWatcher,HuntingFinishEvent,HuntingFinishWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HuntingFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 199: range 00000000164E5EFE-00000000164E5F28
void __cdecl HuntingFinishWatcher::~HuntingFinishWatcher(HuntingFinishWatcher *const this)
{
  HuntingFinishWatcher::~HuntingFinishWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 199: range 00000000164E5EB0-00000000164E5EFD
void __cdecl HuntingFinishWatcher::~HuntingFinishWatcher(HuntingFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HuntingFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HuntingFinishWatcher,HuntingFinishEvent,HuntingFinishWatcherParam>::~ServerWatcher(this);
};

// Line 206: range 00000000164C087A-00000000164C08C7
void __cdecl HuntingFailWatcher::HuntingFailWatcher(HuntingFailWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<HuntingFailWatcher,HuntingFailEvent,HuntingFailWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'HuntingFailWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 206: range 00000000164E5E36-00000000164E5E83
void __cdecl HuntingFailWatcher::~HuntingFailWatcher(HuntingFailWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HuntingFailWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<HuntingFailWatcher,HuntingFailEvent,HuntingFailWatcherParam>::~ServerWatcher(this);
};

// Line 206: range 00000000164E5E84-00000000164E5EAE
void __cdecl HuntingFailWatcher::~HuntingFailWatcher(HuntingFailWatcher *const this)
{
  HuntingFailWatcher::~HuntingFailWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 213: range 00000000164C0C68-00000000164C0CB5
void __cdecl DeliveryFinishWatcher::DeliveryFinishWatcher(DeliveryFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DeliveryFinishWatcher,DeliveryFinishEvent,DeliveryFinishWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DeliveryFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 213: range 00000000164E5DBC-00000000164E5E09
void __cdecl DeliveryFinishWatcher::~DeliveryFinishWatcher(DeliveryFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DeliveryFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DeliveryFinishWatcher,DeliveryFinishEvent,DeliveryFinishWatcherParam>::~ServerWatcher(this);
};

// Line 213: range 00000000164E5E0A-00000000164E5E34
void __cdecl DeliveryFinishWatcher::~DeliveryFinishWatcher(DeliveryFinishWatcher *const this)
{
  DeliveryFinishWatcher::~DeliveryFinishWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 220: range 00000000164C1056-00000000164C10A3
void __cdecl TreasureMapDoneRegionWatcher::TreasureMapDoneRegionWatcher(TreasureMapDoneRegionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<TreasureMapDoneRegionWatcher,TreasureMapDoneRegionEvent,TreasureMapDoneRegionWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'TreasureMapDoneRegionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 220: range 00000000164E5D90-00000000164E5DBA
void __cdecl TreasureMapDoneRegionWatcher::~TreasureMapDoneRegionWatcher(TreasureMapDoneRegionWatcher *const this)
{
  TreasureMapDoneRegionWatcher::~TreasureMapDoneRegionWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 220: range 00000000164E5D42-00000000164E5D8F
void __cdecl TreasureMapDoneRegionWatcher::~TreasureMapDoneRegionWatcher(TreasureMapDoneRegionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TreasureMapDoneRegionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<TreasureMapDoneRegionWatcher,TreasureMapDoneRegionEvent,TreasureMapDoneRegionWatcherParam>::~ServerWatcher(this);
};

// Line 226: range 00000000164C1444-00000000164C1491
void __cdecl TreasureSeelieDoneRegionWatcher::TreasureSeelieDoneRegionWatcher(
        TreasureSeelieDoneRegionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<TreasureSeelieDoneRegionWatcher,TreasureSeelieDoneRegionEvent,TreasureSeelieDoneRegionWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'TreasureSeelieDoneRegionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 226: range 00000000164E5D16-00000000164E5D40
void __cdecl TreasureSeelieDoneRegionWatcher::~TreasureSeelieDoneRegionWatcher(
        TreasureSeelieDoneRegionWatcher *const this)
{
  TreasureSeelieDoneRegionWatcher::~TreasureSeelieDoneRegionWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 226: range 00000000164E5CC8-00000000164E5D15
void __cdecl TreasureSeelieDoneRegionWatcher::~TreasureSeelieDoneRegionWatcher(
        TreasureSeelieDoneRegionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TreasureSeelieDoneRegionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<TreasureSeelieDoneRegionWatcher,TreasureSeelieDoneRegionEvent,TreasureSeelieDoneRegionWatcherParam>::~ServerWatcher(this);
};

// Line 233: range 00000000164C18FA-00000000164C1947
void __cdecl SeaLampMiniQuestWatcher::SeaLampMiniQuestWatcher(SeaLampMiniQuestWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<SeaLampMiniQuestWatcher,SeaLampMiniQuestFinishEvent,SeaLampMiniQuestWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'SeaLampMiniQuestWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 233: range 00000000164E5C4E-00000000164E5C9B
void __cdecl SeaLampMiniQuestWatcher::~SeaLampMiniQuestWatcher(SeaLampMiniQuestWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SeaLampMiniQuestWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<SeaLampMiniQuestWatcher,SeaLampMiniQuestFinishEvent,SeaLampMiniQuestWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 233: range 00000000164E5C9C-00000000164E5CC6
void __cdecl SeaLampMiniQuestWatcher::~SeaLampMiniQuestWatcher(SeaLampMiniQuestWatcher *const this)
{
  SeaLampMiniQuestWatcher::~SeaLampMiniQuestWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 241: range 00000000164C1CE8-00000000164C1D35
void __cdecl FindHilichurlFinishLevelWatcher::FindHilichurlFinishLevelWatcher(
        FindHilichurlFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FindHilichurlFinishLevelWatcher,FindHilichurlFinishLevelEvent,FindHilichurlFinishLevelWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FindHilichurlFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 241: range 00000000164E5BD4-00000000164E5C21
void __cdecl FindHilichurlFinishLevelWatcher::~FindHilichurlFinishLevelWatcher(
        FindHilichurlFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FindHilichurlFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FindHilichurlFinishLevelWatcher,FindHilichurlFinishLevelEvent,FindHilichurlFinishLevelWatcherParam>::~ServerWatcher(this);
};

// Line 241: range 00000000164E5C22-00000000164E5C4C
void __cdecl FindHilichurlFinishLevelWatcher::~FindHilichurlFinishLevelWatcher(
        FindHilichurlFinishLevelWatcher *const this)
{
  FindHilichurlFinishLevelWatcher::~FindHilichurlFinishLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 248: range 00000000164C20D6-00000000164C2123
void __cdecl MechanicusBattleEndGearMoreThanWatcher::MechanicusBattleEndGearMoreThanWatcher(
        MechanicusBattleEndGearMoreThanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleEndGearMoreThanWatcher,MechanicusBattleEndEvent,MechanicusBattleEndGearMoreThanWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndGearMoreThanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 248: range 00000000164E5BA8-00000000164E5BD2
void __cdecl MechanicusBattleEndGearMoreThanWatcher::~MechanicusBattleEndGearMoreThanWatcher(
        MechanicusBattleEndGearMoreThanWatcher *const this)
{
  MechanicusBattleEndGearMoreThanWatcher::~MechanicusBattleEndGearMoreThanWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 248: range 00000000164E5B5A-00000000164E5BA7
void __cdecl MechanicusBattleEndGearMoreThanWatcher::~MechanicusBattleEndGearMoreThanWatcher(
        MechanicusBattleEndGearMoreThanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndGearMoreThanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleEndGearMoreThanWatcher,MechanicusBattleEndEvent,MechanicusBattleEndGearMoreThanWatcherParam>::~ServerWatcher(this);
};

// Line 255: range 00000000164C24C4-00000000164C2511
void __cdecl MechanicusBattleEndBuildGearMoreThanWatcher::MechanicusBattleEndBuildGearMoreThanWatcher(
        MechanicusBattleEndBuildGearMoreThanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleEndBuildGearMoreThanWatcher,MechanicusBattleEndEvent,MechanicusBattleEndBuildGearMoreThanWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndBuildGearMoreThanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 255: range 00000000164E5B2E-00000000164E5B58
void __cdecl MechanicusBattleEndBuildGearMoreThanWatcher::~MechanicusBattleEndBuildGearMoreThanWatcher(
        MechanicusBattleEndBuildGearMoreThanWatcher *const this)
{
  MechanicusBattleEndBuildGearMoreThanWatcher::~MechanicusBattleEndBuildGearMoreThanWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 255: range 00000000164E5AE0-00000000164E5B2D
void __cdecl MechanicusBattleEndBuildGearMoreThanWatcher::~MechanicusBattleEndBuildGearMoreThanWatcher(
        MechanicusBattleEndBuildGearMoreThanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndBuildGearMoreThanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleEndBuildGearMoreThanWatcher,MechanicusBattleEndEvent,MechanicusBattleEndBuildGearMoreThanWatcherParam>::~ServerWatcher(this);
};

// Line 263: range 00000000164C28B2-00000000164C28FF
void __cdecl MechanicusBattleEndPureGearDamageWatcher::MechanicusBattleEndPureGearDamageWatcher(
        MechanicusBattleEndPureGearDamageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleEndPureGearDamageWatcher,MechanicusBattleEndEvent,MechanicusBattleEndPureGearDamageWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndPureGearDamageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 263: range 00000000164E5A66-00000000164E5AB3
void __cdecl MechanicusBattleEndPureGearDamageWatcher::~MechanicusBattleEndPureGearDamageWatcher(
        MechanicusBattleEndPureGearDamageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndPureGearDamageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleEndPureGearDamageWatcher,MechanicusBattleEndEvent,MechanicusBattleEndPureGearDamageWatcherParam>::~ServerWatcher(this);
};

// Line 263: range 00000000164E5AB4-00000000164E5ADE
void __cdecl MechanicusBattleEndPureGearDamageWatcher::~MechanicusBattleEndPureGearDamageWatcher(
        MechanicusBattleEndPureGearDamageWatcher *const this)
{
  MechanicusBattleEndPureGearDamageWatcher::~MechanicusBattleEndPureGearDamageWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 270: range 00000000164C2CA0-00000000164C2CED
void __cdecl MechanicusBattleEndCardPickGteqWatcher::MechanicusBattleEndCardPickGteqWatcher(
        MechanicusBattleEndCardPickGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleEndCardPickGteqWatcher,MechanicusBattleEndEvent,MechanicusBattleEndCardPickGteqWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndCardPickGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 270: range 00000000164E5A3A-00000000164E5A64
void __cdecl MechanicusBattleEndCardPickGteqWatcher::~MechanicusBattleEndCardPickGteqWatcher(
        MechanicusBattleEndCardPickGteqWatcher *const this)
{
  MechanicusBattleEndCardPickGteqWatcher::~MechanicusBattleEndCardPickGteqWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 270: range 00000000164E59EC-00000000164E5A39
void __cdecl MechanicusBattleEndCardPickGteqWatcher::~MechanicusBattleEndCardPickGteqWatcher(
        MechanicusBattleEndCardPickGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndCardPickGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleEndCardPickGteqWatcher,MechanicusBattleEndEvent,MechanicusBattleEndCardPickGteqWatcherParam>::~ServerWatcher(this);
};

// Line 277: range 00000000164C308E-00000000164C30DB
void __cdecl MechanicusBattleEndCardTargetGteqWatcher::MechanicusBattleEndCardTargetGteqWatcher(
        MechanicusBattleEndCardTargetGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleEndCardTargetGteqWatcher,MechanicusBattleEndEvent,MechanicusBattleEndCardTargetGteqWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndCardTargetGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 277: range 00000000164E5972-00000000164E59BF
void __cdecl MechanicusBattleEndCardTargetGteqWatcher::~MechanicusBattleEndCardTargetGteqWatcher(
        MechanicusBattleEndCardTargetGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndCardTargetGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleEndCardTargetGteqWatcher,MechanicusBattleEndEvent,MechanicusBattleEndCardTargetGteqWatcherParam>::~ServerWatcher(this);
};

// Line 277: range 00000000164E59C0-00000000164E59EA
void __cdecl MechanicusBattleEndCardTargetGteqWatcher::~MechanicusBattleEndCardTargetGteqWatcher(
        MechanicusBattleEndCardTargetGteqWatcher *const this)
{
  MechanicusBattleEndCardTargetGteqWatcher::~MechanicusBattleEndCardTargetGteqWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 284: range 00000000164C347C-00000000164C34C9
void __cdecl MechanicusBattleEndGearKillGteqWatcher::MechanicusBattleEndGearKillGteqWatcher(
        MechanicusBattleEndGearKillGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleEndGearKillGteqWatcher,MechanicusBattleEndEvent,MechanicusBattleEndGearKillGteqWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndGearKillGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 284: range 00000000164E58F8-00000000164E5945
void __cdecl MechanicusBattleEndGearKillGteqWatcher::~MechanicusBattleEndGearKillGteqWatcher(
        MechanicusBattleEndGearKillGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndGearKillGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleEndGearKillGteqWatcher,MechanicusBattleEndEvent,MechanicusBattleEndGearKillGteqWatcherParam>::~ServerWatcher(this);
};

// Line 284: range 00000000164E5946-00000000164E5970
void __cdecl MechanicusBattleEndGearKillGteqWatcher::~MechanicusBattleEndGearKillGteqWatcher(
        MechanicusBattleEndGearKillGteqWatcher *const this)
{
  MechanicusBattleEndGearKillGteqWatcher::~MechanicusBattleEndGearKillGteqWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 291: range 00000000164C386A-00000000164C38B7
void __cdecl MechanicusBattleEndFinChallengeGteqWatcher::MechanicusBattleEndFinChallengeGteqWatcher(
        MechanicusBattleEndFinChallengeGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleEndFinChallengeGteqWatcher,MechanicusBattleEndEvent,MechanicusBattleEndFinChallengeGteqWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndFinChallengeGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 291: range 00000000164E587E-00000000164E58CB
void __cdecl MechanicusBattleEndFinChallengeGteqWatcher::~MechanicusBattleEndFinChallengeGteqWatcher(
        MechanicusBattleEndFinChallengeGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleEndFinChallengeGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleEndFinChallengeGteqWatcher,MechanicusBattleEndEvent,MechanicusBattleEndFinChallengeGteqWatcherParam>::~ServerWatcher(this);
};

// Line 291: range 00000000164E58CC-00000000164E58F6
void __cdecl MechanicusBattleEndFinChallengeGteqWatcher::~MechanicusBattleEndFinChallengeGteqWatcher(
        MechanicusBattleEndFinChallengeGteqWatcher *const this)
{
  MechanicusBattleEndFinChallengeGteqWatcher::~MechanicusBattleEndFinChallengeGteqWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 298: range 00000000164C3C58-00000000164C3CA5
void __cdecl MechanicusBattleInteractGteqWatcher::MechanicusBattleInteractGteqWatcher(
        MechanicusBattleInteractGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleInteractGteqWatcher,MechanicusBattleEndEvent,MechanicusBattleInteractGteqWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleInteractGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 298: range 00000000164E5852-00000000164E587C
void __cdecl MechanicusBattleInteractGteqWatcher::~MechanicusBattleInteractGteqWatcher(
        MechanicusBattleInteractGteqWatcher *const this)
{
  MechanicusBattleInteractGteqWatcher::~MechanicusBattleInteractGteqWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 298: range 00000000164E5804-00000000164E5851
void __cdecl MechanicusBattleInteractGteqWatcher::~MechanicusBattleInteractGteqWatcher(
        MechanicusBattleInteractGteqWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleInteractGteqWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleInteractGteqWatcher,MechanicusBattleEndEvent,MechanicusBattleInteractGteqWatcherParam>::~ServerWatcher(this);
};

// Line 305: range 00000000164C4046-00000000164C4093
void __cdecl MechanicusBattleDifficultEscapeWatcher::MechanicusBattleDifficultEscapeWatcher(
        MechanicusBattleDifficultEscapeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleDifficultEscapeWatcher,MechanicusDungeonSettleEvent,MechanicusBattleDifficultEscapeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleDifficultEscapeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 305: range 00000000164E57D8-00000000164E5802
void __cdecl MechanicusBattleDifficultEscapeWatcher::~MechanicusBattleDifficultEscapeWatcher(
        MechanicusBattleDifficultEscapeWatcher *const this)
{
  MechanicusBattleDifficultEscapeWatcher::~MechanicusBattleDifficultEscapeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 305: range 00000000164E578A-00000000164E57D7
void __cdecl MechanicusBattleDifficultEscapeWatcher::~MechanicusBattleDifficultEscapeWatcher(
        MechanicusBattleDifficultEscapeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleDifficultEscapeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleDifficultEscapeWatcher,MechanicusDungeonSettleEvent,MechanicusBattleDifficultEscapeWatcherParam>::~ServerWatcher(this);
};

// Line 314: range 00000000164C4434-00000000164C4481
void __cdecl MechanicusBattleDifficultGearNumWatcher::MechanicusBattleDifficultGearNumWatcher(
        MechanicusBattleDifficultGearNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleDifficultGearNumWatcher,MechanicusBattleEndEvent,MechanicusBattleDifficultGearNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleDifficultGearNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 314: range 00000000164E5710-00000000164E575D
void __cdecl MechanicusBattleDifficultGearNumWatcher::~MechanicusBattleDifficultGearNumWatcher(
        MechanicusBattleDifficultGearNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleDifficultGearNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleDifficultGearNumWatcher,MechanicusBattleEndEvent,MechanicusBattleDifficultGearNumWatcherParam>::~ServerWatcher(this);
};

// Line 314: range 00000000164E575E-00000000164E5788
void __cdecl MechanicusBattleDifficultGearNumWatcher::~MechanicusBattleDifficultGearNumWatcher(
        MechanicusBattleDifficultGearNumWatcher *const this)
{
  MechanicusBattleDifficultGearNumWatcher::~MechanicusBattleDifficultGearNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 322: range 00000000164C4822-00000000164C486F
void __cdecl MechanicusBattleDifficultGearIdNumWatcher::MechanicusBattleDifficultGearIdNumWatcher(
        MechanicusBattleDifficultGearIdNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MechanicusBattleDifficultGearIdNumWatcher,MechanicusBattleEndEvent,MechanicusBattleDifficultGearIdNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MechanicusBattleDifficultGearIdNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 322: range 00000000164E56E4-00000000164E570E
void __cdecl MechanicusBattleDifficultGearIdNumWatcher::~MechanicusBattleDifficultGearIdNumWatcher(
        MechanicusBattleDifficultGearIdNumWatcher *const this)
{
  MechanicusBattleDifficultGearIdNumWatcher::~MechanicusBattleDifficultGearIdNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 322: range 00000000164E5696-00000000164E56E3
void __cdecl MechanicusBattleDifficultGearIdNumWatcher::~MechanicusBattleDifficultGearIdNumWatcher(
        MechanicusBattleDifficultGearIdNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MechanicusBattleDifficultGearIdNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MechanicusBattleDifficultGearIdNumWatcher,MechanicusBattleEndEvent,MechanicusBattleDifficultGearIdNumWatcherParam>::~ServerWatcher(this);
};

// Line 329: range 00000000164C4C10-00000000164C4C5D
void __cdecl GalleryBalloonReachScoreWatcher::GalleryBalloonReachScoreWatcher(
        GalleryBalloonReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GalleryBalloonReachScoreWatcher,GalleryBalloonSettleEvent,GalleryBalloonReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GalleryBalloonReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 329: range 00000000164E561C-00000000164E5669
void __cdecl GalleryBalloonReachScoreWatcher::~GalleryBalloonReachScoreWatcher(
        GalleryBalloonReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryBalloonReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GalleryBalloonReachScoreWatcher,GalleryBalloonSettleEvent,GalleryBalloonReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 329: range 00000000164E566A-00000000164E5694
void __cdecl GalleryBalloonReachScoreWatcher::~GalleryBalloonReachScoreWatcher(
        GalleryBalloonReachScoreWatcher *const this)
{
  GalleryBalloonReachScoreWatcher::~GalleryBalloonReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 336: range 00000000164C4FFE-00000000164C504B
void __cdecl GalleryFallReachScoreWatcher::GalleryFallReachScoreWatcher(GalleryFallReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GalleryFallReachScoreWatcher,GalleryFallSettleEvent,GalleryFallReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GalleryFallReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 336: range 00000000164E55A2-00000000164E55EF
void __cdecl GalleryFallReachScoreWatcher::~GalleryFallReachScoreWatcher(GalleryFallReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryFallReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GalleryFallReachScoreWatcher,GalleryFallSettleEvent,GalleryFallReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 336: range 00000000164E55F0-00000000164E561A
void __cdecl GalleryFallReachScoreWatcher::~GalleryFallReachScoreWatcher(GalleryFallReachScoreWatcher *const this)
{
  GalleryFallReachScoreWatcher::~GalleryFallReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 342: range 00000000164C53EC-00000000164C5439
void __cdecl FleurFairMusicGameReachScoreWatcher::FleurFairMusicGameReachScoreWatcher(
        FleurFairMusicGameReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FleurFairMusicGameReachScoreWatcher,FleurFairMusicGameSettleEvent,FleurFairMusicGameReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FleurFairMusicGameReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 342: range 00000000164E5528-00000000164E5575
void __cdecl FleurFairMusicGameReachScoreWatcher::~FleurFairMusicGameReachScoreWatcher(
        FleurFairMusicGameReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FleurFairMusicGameReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FleurFairMusicGameReachScoreWatcher,FleurFairMusicGameSettleEvent,FleurFairMusicGameReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 342: range 00000000164E5576-00000000164E55A0
void __cdecl FleurFairMusicGameReachScoreWatcher::~FleurFairMusicGameReachScoreWatcher(
        FleurFairMusicGameReachScoreWatcher *const this)
{
  FleurFairMusicGameReachScoreWatcher::~FleurFairMusicGameReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 349: range 00000000164C57DA-00000000164C5827
void __cdecl FinishAllArenaChallengeWatcherInScheduleWatcher::FinishAllArenaChallengeWatcherInScheduleWatcher(
        FinishAllArenaChallengeWatcherInScheduleWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishAllArenaChallengeWatcherInScheduleWatcher,ChallengeFinishEvent,FinishAllArenaChallengeWatcherInScheduleWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishAllArenaChallengeWatcherInScheduleWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 349: range 00000000164E54FC-00000000164E5526
void __cdecl FinishAllArenaChallengeWatcherInScheduleWatcher::~FinishAllArenaChallengeWatcherInScheduleWatcher(
        FinishAllArenaChallengeWatcherInScheduleWatcher *const this)
{
  FinishAllArenaChallengeWatcherInScheduleWatcher::~FinishAllArenaChallengeWatcherInScheduleWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 349: range 00000000164E54AE-00000000164E54FB
void __cdecl FinishAllArenaChallengeWatcherInScheduleWatcher::~FinishAllArenaChallengeWatcherInScheduleWatcher(
        FinishAllArenaChallengeWatcherInScheduleWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishAllArenaChallengeWatcherInScheduleWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishAllArenaChallengeWatcherInScheduleWatcher,ChallengeFinishEvent,FinishAllArenaChallengeWatcherInScheduleWatcherParam>::~ServerWatcher(this);
};

// Line 356: range 00000000164C5BD6-00000000164C5C23
void __cdecl MistTrialDungeonStatWatcher::MistTrialDungeonStatWatcher(MistTrialDungeonStatWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MistTrialDungeonStatWatcher,MistTrialStatUpdateEvent,MistTrialDungeonStatWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MistTrialDungeonStatWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 356: range 00000000164E5434-00000000164E5481
void __cdecl MistTrialDungeonStatWatcher::~MistTrialDungeonStatWatcher(MistTrialDungeonStatWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MistTrialDungeonStatWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MistTrialDungeonStatWatcher,MistTrialStatUpdateEvent,MistTrialDungeonStatWatcherParam>::~ServerWatcher(this);
};

// Line 356: range 00000000164E5482-00000000164E54AC
void __cdecl MistTrialDungeonStatWatcher::~MistTrialDungeonStatWatcher(MistTrialDungeonStatWatcher *const this)
{
  MistTrialDungeonStatWatcher::~MistTrialDungeonStatWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 363: range 00000000164C5FC4-00000000164C6011
void __cdecl FinishDungeonMistTrialStatWatcher::FinishDungeonMistTrialStatWatcher(
        FinishDungeonMistTrialStatWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishDungeonMistTrialStatWatcher,FinishMistTrialDungeonEvent,FinishDungeonMistTrialStatWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishDungeonMistTrialStatWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 363: range 00000000164E5408-00000000164E5432
void __cdecl FinishDungeonMistTrialStatWatcher::~FinishDungeonMistTrialStatWatcher(
        FinishDungeonMistTrialStatWatcher *const this)
{
  FinishDungeonMistTrialStatWatcher::~FinishDungeonMistTrialStatWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 363: range 00000000164E53BA-00000000164E5407
void __cdecl FinishDungeonMistTrialStatWatcher::~FinishDungeonMistTrialStatWatcher(
        FinishDungeonMistTrialStatWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishDungeonMistTrialStatWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishDungeonMistTrialStatWatcher,FinishMistTrialDungeonEvent,FinishDungeonMistTrialStatWatcherParam>::~ServerWatcher(this);
};

// Line 370: range 00000000164C647A-00000000164C64C7
void __cdecl ActivityScoreExceedValueWatcher::ActivityScoreExceedValueWatcher(
        ActivityScoreExceedValueWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<ActivityScoreExceedValueWatcher,ActivityScoreExceedValueEvent,ActivityScoreExceedValueWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ActivityScoreExceedValueWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 370: range 00000000164E538E-00000000164E53B8
void __cdecl ActivityScoreExceedValueWatcher::~ActivityScoreExceedValueWatcher(
        ActivityScoreExceedValueWatcher *const this)
{
  ActivityScoreExceedValueWatcher::~ActivityScoreExceedValueWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 370: range 00000000164E5340-00000000164E538D
void __cdecl ActivityScoreExceedValueWatcher::~ActivityScoreExceedValueWatcher(
        ActivityScoreExceedValueWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ActivityScoreExceedValueWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<ActivityScoreExceedValueWatcher,ActivityScoreExceedValueEvent,ActivityScoreExceedValueWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 378: range 00000000164C6C56-00000000164C6CA3
void __cdecl GalleryBuoyantCombatReachScoreWatcher::GalleryBuoyantCombatReachScoreWatcher(
        GalleryBuoyantCombatReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GalleryBuoyantCombatReachScoreWatcher,GalleryBuoyantCombatSettleEvent,GalleryBuoyantCombatReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GalleryBuoyantCombatReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 378: range 00000000164E52C6-00000000164E5313
void __cdecl GalleryBuoyantCombatReachScoreWatcher::~GalleryBuoyantCombatReachScoreWatcher(
        GalleryBuoyantCombatReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GalleryBuoyantCombatReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GalleryBuoyantCombatReachScoreWatcher,GalleryBuoyantCombatSettleEvent,GalleryBuoyantCombatReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 378: range 00000000164E5314-00000000164E533E
void __cdecl GalleryBuoyantCombatReachScoreWatcher::~GalleryBuoyantCombatReachScoreWatcher(
        GalleryBuoyantCombatReachScoreWatcher *const this)
{
  GalleryBuoyantCombatReachScoreWatcher::~GalleryBuoyantCombatReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 385: range 00000000164C7044-00000000164C7091
void __cdecl BuoyantCombatReachNewScoreLevelWatcher::BuoyantCombatReachNewScoreLevelWatcher(
        BuoyantCombatReachNewScoreLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BuoyantCombatReachNewScoreLevelWatcher,BuoyantCombatReachNewScoreLevelEvent,BuoyantCombatReachNewScoreLevelWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BuoyantCombatReachNewScoreLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 385: range 00000000164E524C-00000000164E5299
void __cdecl BuoyantCombatReachNewScoreLevelWatcher::~BuoyantCombatReachNewScoreLevelWatcher(
        BuoyantCombatReachNewScoreLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BuoyantCombatReachNewScoreLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BuoyantCombatReachNewScoreLevelWatcher,BuoyantCombatReachNewScoreLevelEvent,BuoyantCombatReachNewScoreLevelWatcherParam>::~ServerWatcher(this);
};

// Line 385: range 00000000164E529A-00000000164E52C4
void __cdecl BuoyantCombatReachNewScoreLevelWatcher::~BuoyantCombatReachNewScoreLevelWatcher(
        BuoyantCombatReachNewScoreLevelWatcher *const this)
{
  BuoyantCombatReachNewScoreLevelWatcher::~BuoyantCombatReachNewScoreLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 392: range 00000000164C6868-00000000164C68B5
void __cdecl GroupSummerTimeSprintBoatReachPointsWatcher::GroupSummerTimeSprintBoatReachPointsWatcher(
        GroupSummerTimeSprintBoatReachPointsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GroupSummerTimeSprintBoatReachPointsWatcher,GroupSummerTimeSprintBoatReachPointsEvent,GroupSummerTimeSprintBoatReachPointsWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GroupSummerTimeSprintBoatReachPointsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 392: range 00000000164E51D2-00000000164E521F
void __cdecl GroupSummerTimeSprintBoatReachPointsWatcher::~GroupSummerTimeSprintBoatReachPointsWatcher(
        GroupSummerTimeSprintBoatReachPointsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GroupSummerTimeSprintBoatReachPointsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GroupSummerTimeSprintBoatReachPointsWatcher,GroupSummerTimeSprintBoatReachPointsEvent,GroupSummerTimeSprintBoatReachPointsWatcherParam>::~ServerWatcher(this);
};

// Line 392: range 00000000164E5220-00000000164E524A
void __cdecl GroupSummerTimeSprintBoatReachPointsWatcher::~GroupSummerTimeSprintBoatReachPointsWatcher(
        GroupSummerTimeSprintBoatReachPointsWatcher *const this)
{
  GroupSummerTimeSprintBoatReachPointsWatcher::~GroupSummerTimeSprintBoatReachPointsWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 399: range 00000000164C7432-00000000164C747F
void __cdecl BounceConjuringFinishCountWatcher::BounceConjuringFinishCountWatcher(
        BounceConjuringFinishCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BounceConjuringFinishCountWatcher,GalleryTimeUpEvent,BounceConjuringFinishCountWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BounceConjuringFinishCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 399: range 00000000164E51A6-00000000164E51D0
void __cdecl BounceConjuringFinishCountWatcher::~BounceConjuringFinishCountWatcher(
        BounceConjuringFinishCountWatcher *const this)
{
  BounceConjuringFinishCountWatcher::~BounceConjuringFinishCountWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 399: range 00000000164E5158-00000000164E51A5
void __cdecl BounceConjuringFinishCountWatcher::~BounceConjuringFinishCountWatcher(
        BounceConjuringFinishCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BounceConjuringFinishCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BounceConjuringFinishCountWatcher,GalleryTimeUpEvent,BounceConjuringFinishCountWatcherParam>::~ServerWatcher(this);
};

// Line 406: range 00000000164C78E8-00000000164C7935
void __cdecl BounceConjuringScoreWatcher::BounceConjuringScoreWatcher(BounceConjuringScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<BounceConjuringScoreWatcher,GalleryBounceConjuringSettleEvent,BounceConjuringScoreWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BounceConjuringScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 406: range 00000000164E512C-00000000164E5156
void __cdecl BounceConjuringScoreWatcher::~BounceConjuringScoreWatcher(BounceConjuringScoreWatcher *const this)
{
  BounceConjuringScoreWatcher::~BounceConjuringScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 406: range 00000000164E50DE-00000000164E512B
void __cdecl BounceConjuringScoreWatcher::~BounceConjuringScoreWatcher(BounceConjuringScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BounceConjuringScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<BounceConjuringScoreWatcher,GalleryBounceConjuringSettleEvent,BounceConjuringScoreWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 414: range 00000000164C7CD6-00000000164C7D23
void __cdecl ChessKillMonstersWatcher::ChessKillMonstersWatcher(ChessKillMonstersWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ChessKillMonstersWatcher,ChessDungeonSettleEvent,ChessKillMonstersWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ChessKillMonstersWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 414: range 00000000164E50B2-00000000164E50DC
void __cdecl ChessKillMonstersWatcher::~ChessKillMonstersWatcher(ChessKillMonstersWatcher *const this)
{
  ChessKillMonstersWatcher::~ChessKillMonstersWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 414: range 00000000164E5064-00000000164E50B1
void __cdecl ChessKillMonstersWatcher::~ChessKillMonstersWatcher(ChessKillMonstersWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessKillMonstersWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ChessKillMonstersWatcher,ChessDungeonSettleEvent,ChessKillMonstersWatcherParam>::~ServerWatcher(this);
};

// Line 421: range 00000000164C80C4-00000000164C8111
void __cdecl ChessCostBuildingPointsWatcher::ChessCostBuildingPointsWatcher(ChessCostBuildingPointsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ChessCostBuildingPointsWatcher,ChessDungeonSettleEvent,ChessCostBuildingPointsWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ChessCostBuildingPointsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 421: range 00000000164E4FEA-00000000164E5037
void __cdecl ChessCostBuildingPointsWatcher::~ChessCostBuildingPointsWatcher(
        ChessCostBuildingPointsWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessCostBuildingPointsWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ChessCostBuildingPointsWatcher,ChessDungeonSettleEvent,ChessCostBuildingPointsWatcherParam>::~ServerWatcher(this);
};

// Line 421: range 00000000164E5038-00000000164E5062
void __cdecl ChessCostBuildingPointsWatcher::~ChessCostBuildingPointsWatcher(
        ChessCostBuildingPointsWatcher *const this)
{
  ChessCostBuildingPointsWatcher::~ChessCostBuildingPointsWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 428: range 00000000164C84B2-00000000164C84FF
void __cdecl ChessDungeonAddScoreWatcher::ChessDungeonAddScoreWatcher(ChessDungeonAddScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ChessDungeonAddScoreWatcher,ChessDungeonSettleEvent,ChessDungeonAddScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ChessDungeonAddScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 428: range 00000000164E4F70-00000000164E4FBD
void __cdecl ChessDungeonAddScoreWatcher::~ChessDungeonAddScoreWatcher(ChessDungeonAddScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessDungeonAddScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ChessDungeonAddScoreWatcher,ChessDungeonSettleEvent,ChessDungeonAddScoreWatcherParam>::~ServerWatcher(this);
};

// Line 428: range 00000000164E4FBE-00000000164E4FE8
void __cdecl ChessDungeonAddScoreWatcher::~ChessDungeonAddScoreWatcher(ChessDungeonAddScoreWatcher *const this)
{
  ChessDungeonAddScoreWatcher::~ChessDungeonAddScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 435: range 00000000164C88A0-00000000164C88ED
void __cdecl ChessDungeonEscapedMonstersWatcher::ChessDungeonEscapedMonstersWatcher(
        ChessDungeonEscapedMonstersWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ChessDungeonEscapedMonstersWatcher,ChessDungeonSettleEvent,ChessDungeonEscapedMonstersWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ChessDungeonEscapedMonstersWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 435: range 00000000164E4EF6-00000000164E4F43
void __cdecl ChessDungeonEscapedMonstersWatcher::~ChessDungeonEscapedMonstersWatcher(
        ChessDungeonEscapedMonstersWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessDungeonEscapedMonstersWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ChessDungeonEscapedMonstersWatcher,ChessDungeonSettleEvent,ChessDungeonEscapedMonstersWatcherParam>::~ServerWatcher(this);
};

// Line 435: range 00000000164E4F44-00000000164E4F6E
void __cdecl ChessDungeonEscapedMonstersWatcher::~ChessDungeonEscapedMonstersWatcher(
        ChessDungeonEscapedMonstersWatcher *const this)
{
  ChessDungeonEscapedMonstersWatcher::~ChessDungeonEscapedMonstersWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 442: range 00000000164C8C8E-00000000164C8CDB
void __cdecl ChessDungeonTowerCountWatcher::ChessDungeonTowerCountWatcher(ChessDungeonTowerCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ChessDungeonTowerCountWatcher,ChessDungeonSettleEvent,ChessDungeonTowerCountWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ChessDungeonTowerCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 442: range 00000000164E4ECA-00000000164E4EF4
void __cdecl ChessDungeonTowerCountWatcher::~ChessDungeonTowerCountWatcher(ChessDungeonTowerCountWatcher *const this)
{
  ChessDungeonTowerCountWatcher::~ChessDungeonTowerCountWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 442: range 00000000164E4E7C-00000000164E4EC9
void __cdecl ChessDungeonTowerCountWatcher::~ChessDungeonTowerCountWatcher(ChessDungeonTowerCountWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessDungeonTowerCountWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ChessDungeonTowerCountWatcher,ChessDungeonSettleEvent,ChessDungeonTowerCountWatcherParam>::~ServerWatcher(this);
};

// Line 449: range 00000000164C907C-00000000164C90C9
void __cdecl ChessDungeonCardCountLessOrEqualWatcher::ChessDungeonCardCountLessOrEqualWatcher(
        ChessDungeonCardCountLessOrEqualWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ChessDungeonCardCountLessOrEqualWatcher,ChessDungeonSettleEvent,ChessDungeonCardCountLessOrEqualWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ChessDungeonCardCountLessOrEqualWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 449: range 00000000164E4E50-00000000164E4E7A
void __cdecl ChessDungeonCardCountLessOrEqualWatcher::~ChessDungeonCardCountLessOrEqualWatcher(
        ChessDungeonCardCountLessOrEqualWatcher *const this)
{
  ChessDungeonCardCountLessOrEqualWatcher::~ChessDungeonCardCountLessOrEqualWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 449: range 00000000164E4E02-00000000164E4E4F
void __cdecl ChessDungeonCardCountLessOrEqualWatcher::~ChessDungeonCardCountLessOrEqualWatcher(
        ChessDungeonCardCountLessOrEqualWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessDungeonCardCountLessOrEqualWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ChessDungeonCardCountLessOrEqualWatcher,ChessDungeonSettleEvent,ChessDungeonCardCountLessOrEqualWatcherParam>::~ServerWatcher(this);
};

// Line 456: range 00000000164C946A-00000000164C94B7
void __cdecl ChessDungeonCardCountGreaterThanWatcher::ChessDungeonCardCountGreaterThanWatcher(
        ChessDungeonCardCountGreaterThanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ChessDungeonCardCountGreaterThanWatcher,ChessDungeonSettleEvent,ChessDungeonCardCountGreaterThanWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ChessDungeonCardCountGreaterThanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 456: range 00000000164E4DD6-00000000164E4E00
void __cdecl ChessDungeonCardCountGreaterThanWatcher::~ChessDungeonCardCountGreaterThanWatcher(
        ChessDungeonCardCountGreaterThanWatcher *const this)
{
  ChessDungeonCardCountGreaterThanWatcher::~ChessDungeonCardCountGreaterThanWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 456: range 00000000164E4D88-00000000164E4DD5
void __cdecl ChessDungeonCardCountGreaterThanWatcher::~ChessDungeonCardCountGreaterThanWatcher(
        ChessDungeonCardCountGreaterThanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessDungeonCardCountGreaterThanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ChessDungeonCardCountGreaterThanWatcher,ChessDungeonSettleEvent,ChessDungeonCardCountGreaterThanWatcherParam>::~ServerWatcher(this);
};

// Line 463: range 00000000164C9858-00000000164C98A5
void __cdecl ChessLevelWatcher::ChessLevelWatcher(ChessLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ChessLevelWatcher,ChessLevelUpEvent,ChessLevelWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ChessLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 463: range 00000000164E4D5C-00000000164E4D86
void __cdecl ChessLevelWatcher::~ChessLevelWatcher(ChessLevelWatcher *const this)
{
  ChessLevelWatcher::~ChessLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 463: range 00000000164E4D0E-00000000164E4D5B
void __cdecl ChessLevelWatcher::~ChessLevelWatcher(ChessLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ChessLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ChessLevelWatcher,ChessLevelUpEvent,ChessLevelWatcherParam>::~ServerWatcher(this);
};

// Line 470: range 00000000164C9D0E-00000000164C9D5B
void __cdecl LunaRiteSearchWatcher::LunaRiteSearchWatcher(LunaRiteSearchWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<LunaRiteSearchWatcher,LunaRiteSearchEvent,LunaRiteSearchWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'LunaRiteSearchWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 470: range 00000000164E4CE2-00000000164E4D0C
void __cdecl LunaRiteSearchWatcher::~LunaRiteSearchWatcher(LunaRiteSearchWatcher *const this)
{
  LunaRiteSearchWatcher::~LunaRiteSearchWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 470: range 00000000164E4C94-00000000164E4CE1
void __cdecl LunaRiteSearchWatcher::~LunaRiteSearchWatcher(LunaRiteSearchWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LunaRiteSearchWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<LunaRiteSearchWatcher,LunaRiteSearchEvent,LunaRiteSearchWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 477: range 00000000164CA0FC-00000000164CA149
void __cdecl SumoStageScoreReachWatcher::SumoStageScoreReachWatcher(SumoStageScoreReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<SumoStageScoreReachWatcher,SumoGallerySettleEvent,SumoStageScoreReachWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'SumoStageScoreReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 477: range 00000000164E4C1A-00000000164E4C67
void __cdecl SumoStageScoreReachWatcher::~SumoStageScoreReachWatcher(SumoStageScoreReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SumoStageScoreReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<SumoStageScoreReachWatcher,SumoGallerySettleEvent,SumoStageScoreReachWatcherParam>::~ServerWatcher(this);
};

// Line 477: range 00000000164E4C68-00000000164E4C92
void __cdecl SumoStageScoreReachWatcher::~SumoStageScoreReachWatcher(SumoStageScoreReachWatcher *const this)
{
  SumoStageScoreReachWatcher::~SumoStageScoreReachWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 483: range 00000000164CA4EA-00000000164CA537
void __cdecl SumoTotalMaxScoreReachWatcher::SumoTotalMaxScoreReachWatcher(SumoTotalMaxScoreReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<SumoTotalMaxScoreReachWatcher,SumoGallerySettleEvent,SumoTotalMaxScoreReachWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'SumoTotalMaxScoreReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 483: range 00000000164E4BEE-00000000164E4C18
void __cdecl SumoTotalMaxScoreReachWatcher::~SumoTotalMaxScoreReachWatcher(SumoTotalMaxScoreReachWatcher *const this)
{
  SumoTotalMaxScoreReachWatcher::~SumoTotalMaxScoreReachWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 483: range 00000000164E4BA0-00000000164E4BED
void __cdecl SumoTotalMaxScoreReachWatcher::~SumoTotalMaxScoreReachWatcher(SumoTotalMaxScoreReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SumoTotalMaxScoreReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<SumoTotalMaxScoreReachWatcher,SumoGallerySettleEvent,SumoTotalMaxScoreReachWatcherParam>::~ServerWatcher(this);
};

// Line 490: range 00000000164CA8D8-00000000164CA925
void __cdecl PlantFlowerSetWishWatcher::PlantFlowerSetWishWatcher(PlantFlowerSetWishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<PlantFlowerSetWishWatcher,PlantFlowerSetWishEvent,PlantFlowerSetWishWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PlantFlowerSetWishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 490: range 00000000164E4B26-00000000164E4B73
void __cdecl PlantFlowerSetWishWatcher::~PlantFlowerSetWishWatcher(PlantFlowerSetWishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlantFlowerSetWishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<PlantFlowerSetWishWatcher,PlantFlowerSetWishEvent,PlantFlowerSetWishWatcherParam>::~ServerWatcher(this);
};

// Line 490: range 00000000164E4B74-00000000164E4B9E
void __cdecl PlantFlowerSetWishWatcher::~PlantFlowerSetWishWatcher(PlantFlowerSetWishWatcher *const this)
{
  PlantFlowerSetWishWatcher::~PlantFlowerSetWishWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 497: range 00000000164CACC6-00000000164CAD13
void __cdecl PlantFlowerGiveFlowerWatcher::PlantFlowerGiveFlowerWatcher(PlantFlowerGiveFlowerWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<PlantFlowerGiveFlowerWatcher,PlantFlowerGiveFlowerEvent,PlantFlowerGiveFlowerWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PlantFlowerGiveFlowerWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 497: range 00000000164E4AAC-00000000164E4AF9
void __cdecl PlantFlowerGiveFlowerWatcher::~PlantFlowerGiveFlowerWatcher(PlantFlowerGiveFlowerWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlantFlowerGiveFlowerWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<PlantFlowerGiveFlowerWatcher,PlantFlowerGiveFlowerEvent,PlantFlowerGiveFlowerWatcherParam>::~ServerWatcher(this);
};

// Line 497: range 00000000164E4AFA-00000000164E4B24
void __cdecl PlantFlowerGiveFlowerWatcher::~PlantFlowerGiveFlowerWatcher(PlantFlowerGiveFlowerWatcher *const this)
{
  PlantFlowerGiveFlowerWatcher::~PlantFlowerGiveFlowerWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 504: range 00000000164CB17C-00000000164CB1C9
void __cdecl PlantFlowerObtainFlowerTypeWatcher::PlantFlowerObtainFlowerTypeWatcher(
        PlantFlowerObtainFlowerTypeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<PlantFlowerObtainFlowerTypeWatcher,PlantFlowerObtainFlowerEvent,PlantFlowerObtainFlowerTypeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PlantFlowerObtainFlowerTypeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 504: range 00000000164E4A32-00000000164E4A7F
void __cdecl PlantFlowerObtainFlowerTypeWatcher::~PlantFlowerObtainFlowerTypeWatcher(
        PlantFlowerObtainFlowerTypeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlantFlowerObtainFlowerTypeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<PlantFlowerObtainFlowerTypeWatcher,PlantFlowerObtainFlowerEvent,PlantFlowerObtainFlowerTypeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 504: range 00000000164E4A80-00000000164E4AAA
void __cdecl PlantFlowerObtainFlowerTypeWatcher::~PlantFlowerObtainFlowerTypeWatcher(
        PlantFlowerObtainFlowerTypeWatcher *const this)
{
  PlantFlowerObtainFlowerTypeWatcher::~PlantFlowerObtainFlowerTypeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 512: range 00000000164CB632-00000000164CB67F
void __cdecl PlantFlowerCommonObtainFlowerTypeWatcher::PlantFlowerCommonObtainFlowerTypeWatcher(
        PlantFlowerCommonObtainFlowerTypeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<PlantFlowerCommonObtainFlowerTypeWatcher,PlantFlowerCommonObtainFlowerEvent,PlantFlowerCommonObtainFlowerTypeWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PlantFlowerCommonObtainFlowerTypeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 512: range 00000000164E49B8-00000000164E4A05
void __cdecl PlantFlowerCommonObtainFlowerTypeWatcher::~PlantFlowerCommonObtainFlowerTypeWatcher(
        PlantFlowerCommonObtainFlowerTypeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PlantFlowerCommonObtainFlowerTypeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<PlantFlowerCommonObtainFlowerTypeWatcher,PlantFlowerCommonObtainFlowerEvent,PlantFlowerCommonObtainFlowerTypeWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 512: range 00000000164E4A06-00000000164E4A30
void __cdecl PlantFlowerCommonObtainFlowerTypeWatcher::~PlantFlowerCommonObtainFlowerTypeWatcher(
        PlantFlowerCommonObtainFlowerTypeWatcher *const this)
{
  PlantFlowerCommonObtainFlowerTypeWatcher::~PlantFlowerCommonObtainFlowerTypeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 520: range 00000000164CBA20-00000000164CBA6D
void __cdecl RogueDestoryGadgetNumWatcher::RogueDestoryGadgetNumWatcher(RogueDestoryGadgetNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RogueDestoryGadgetNumWatcher,RogueDungeonGadgetDieEvent,RogueDestoryGadgetNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RogueDestoryGadgetNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 520: range 00000000164E498C-00000000164E49B6
void __cdecl RogueDestoryGadgetNumWatcher::~RogueDestoryGadgetNumWatcher(RogueDestoryGadgetNumWatcher *const this)
{
  RogueDestoryGadgetNumWatcher::~RogueDestoryGadgetNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 520: range 00000000164E493E-00000000164E498B
void __cdecl RogueDestoryGadgetNumWatcher::~RogueDestoryGadgetNumWatcher(RogueDestoryGadgetNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueDestoryGadgetNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RogueDestoryGadgetNumWatcher,RogueDungeonGadgetDieEvent,RogueDestoryGadgetNumWatcherParam>::~ServerWatcher(this);
};

// Line 527: range 00000000164CBE0E-00000000164CBE5B
void __cdecl RogueKillMonsterNumWatcher::RogueKillMonsterNumWatcher(RogueKillMonsterNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RogueKillMonsterNumWatcher,RogueMonsterDieDieEvent,RogueKillMonsterNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RogueKillMonsterNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 527: range 00000000164E4912-00000000164E493C
void __cdecl RogueKillMonsterNumWatcher::~RogueKillMonsterNumWatcher(RogueKillMonsterNumWatcher *const this)
{
  RogueKillMonsterNumWatcher::~RogueKillMonsterNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 527: range 00000000164E48C4-00000000164E4911
void __cdecl RogueKillMonsterNumWatcher::~RogueKillMonsterNumWatcher(RogueKillMonsterNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueKillMonsterNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RogueKillMonsterNumWatcher,RogueMonsterDieDieEvent,RogueKillMonsterNumWatcherParam>::~ServerWatcher(this);
};

// Line 534: range 00000000164CC1FC-00000000164CC249
void __cdecl RogueFinishWithoutUsingSpringCellWatcher::RogueFinishWithoutUsingSpringCellWatcher(
        RogueFinishWithoutUsingSpringCellWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RogueFinishWithoutUsingSpringCellWatcher,RogueDungeonSettleEvent,RogueFinishWithoutUsingSpringCellWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RogueFinishWithoutUsingSpringCellWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 534: range 00000000164E484A-00000000164E4897
void __cdecl RogueFinishWithoutUsingSpringCellWatcher::~RogueFinishWithoutUsingSpringCellWatcher(
        RogueFinishWithoutUsingSpringCellWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueFinishWithoutUsingSpringCellWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RogueFinishWithoutUsingSpringCellWatcher,RogueDungeonSettleEvent,RogueFinishWithoutUsingSpringCellWatcherParam>::~ServerWatcher(this);
};

// Line 534: range 00000000164E4898-00000000164E48C2
void __cdecl RogueFinishWithoutUsingSpringCellWatcher::~RogueFinishWithoutUsingSpringCellWatcher(
        RogueFinishWithoutUsingSpringCellWatcher *const this)
{
  RogueFinishWithoutUsingSpringCellWatcher::~RogueFinishWithoutUsingSpringCellWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 541: range 00000000164CC5EA-00000000164CC637
void __cdecl RogueFinishAllChallengeCellWatcher::RogueFinishAllChallengeCellWatcher(
        RogueFinishAllChallengeCellWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RogueFinishAllChallengeCellWatcher,RogueDungeonSettleEvent,RogueFinishAllChallengeCellWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RogueFinishAllChallengeCellWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 541: range 00000000164E47D0-00000000164E481D
void __cdecl RogueFinishAllChallengeCellWatcher::~RogueFinishAllChallengeCellWatcher(
        RogueFinishAllChallengeCellWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueFinishAllChallengeCellWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RogueFinishAllChallengeCellWatcher,RogueDungeonSettleEvent,RogueFinishAllChallengeCellWatcherParam>::~ServerWatcher(this);
};

// Line 541: range 00000000164E481E-00000000164E4848
void __cdecl RogueFinishAllChallengeCellWatcher::~RogueFinishAllChallengeCellWatcher(
        RogueFinishAllChallengeCellWatcher *const this)
{
  RogueFinishAllChallengeCellWatcher::~RogueFinishAllChallengeCellWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 548: range 00000000164CC9D8-00000000164CCA25
void __cdecl RogueFinishNoAvatarDeadWatcher::RogueFinishNoAvatarDeadWatcher(RogueFinishNoAvatarDeadWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RogueFinishNoAvatarDeadWatcher,RogueDungeonSettleEvent,RogueFinishNoAvatarDeadWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RogueFinishNoAvatarDeadWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 548: range 00000000164E47A4-00000000164E47CE
void __cdecl RogueFinishNoAvatarDeadWatcher::~RogueFinishNoAvatarDeadWatcher(
        RogueFinishNoAvatarDeadWatcher *const this)
{
  RogueFinishNoAvatarDeadWatcher::~RogueFinishNoAvatarDeadWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 548: range 00000000164E4756-00000000164E47A3
void __cdecl RogueFinishNoAvatarDeadWatcher::~RogueFinishNoAvatarDeadWatcher(
        RogueFinishNoAvatarDeadWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueFinishNoAvatarDeadWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RogueFinishNoAvatarDeadWatcher,RogueDungeonSettleEvent,RogueFinishNoAvatarDeadWatcherParam>::~ServerWatcher(this);
};

// Line 555: range 00000000164CCDC6-00000000164CCE13
void __cdecl RogueFinishWithAvatarElementTypeNumLessThanWatcher::RogueFinishWithAvatarElementTypeNumLessThanWatcher(
        RogueFinishWithAvatarElementTypeNumLessThanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RogueFinishWithAvatarElementTypeNumLessThanWatcher,RogueDungeonSettleEvent,RogueFinishWithAvatarElementTypeNumLessThanWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RogueFinishWithAvatarElementTypeNumLessThanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 555: range 00000000164E46DC-00000000164E4729
void __cdecl RogueFinishWithAvatarElementTypeNumLessThanWatcher::~RogueFinishWithAvatarElementTypeNumLessThanWatcher(
        RogueFinishWithAvatarElementTypeNumLessThanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueFinishWithAvatarElementTypeNumLessThanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RogueFinishWithAvatarElementTypeNumLessThanWatcher,RogueDungeonSettleEvent,RogueFinishWithAvatarElementTypeNumLessThanWatcherParam>::~ServerWatcher(this);
};

// Line 555: range 00000000164E472A-00000000164E4754
void __cdecl RogueFinishWithAvatarElementTypeNumLessThanWatcher::~RogueFinishWithAvatarElementTypeNumLessThanWatcher(
        RogueFinishWithAvatarElementTypeNumLessThanWatcher *const this)
{
  RogueFinishWithAvatarElementTypeNumLessThanWatcher::~RogueFinishWithAvatarElementTypeNumLessThanWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 562: range 00000000164CD1B4-00000000164CD201
void __cdecl RogueFinishWithAvatarNumLessThanWatcher::RogueFinishWithAvatarNumLessThanWatcher(
        RogueFinishWithAvatarNumLessThanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RogueFinishWithAvatarNumLessThanWatcher,RogueDungeonSettleEvent,RogueFinishWithAvatarNumLessThanWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RogueFinishWithAvatarNumLessThanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 562: range 00000000164E4662-00000000164E46AF
void __cdecl RogueFinishWithAvatarNumLessThanWatcher::~RogueFinishWithAvatarNumLessThanWatcher(
        RogueFinishWithAvatarNumLessThanWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueFinishWithAvatarNumLessThanWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RogueFinishWithAvatarNumLessThanWatcher,RogueDungeonSettleEvent,RogueFinishWithAvatarNumLessThanWatcherParam>::~ServerWatcher(this);
};

// Line 562: range 00000000164E46B0-00000000164E46DA
void __cdecl RogueFinishWithAvatarNumLessThanWatcher::~RogueFinishWithAvatarNumLessThanWatcher(
        RogueFinishWithAvatarNumLessThanWatcher *const this)
{
  RogueFinishWithAvatarNumLessThanWatcher::~RogueFinishWithAvatarNumLessThanWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 569: range 00000000164CD5A2-00000000164CD5EF
void __cdecl RogueShikigamiUpgradeWatcher::RogueShikigamiUpgradeWatcher(RogueShikigamiUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RogueShikigamiUpgradeWatcher,RogueShikigamiUpgradeEvent,RogueShikigamiUpgradeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RogueShikigamiUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 569: range 00000000164E45E8-00000000164E4635
void __cdecl RogueShikigamiUpgradeWatcher::~RogueShikigamiUpgradeWatcher(RogueShikigamiUpgradeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueShikigamiUpgradeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RogueShikigamiUpgradeWatcher,RogueShikigamiUpgradeEvent,RogueShikigamiUpgradeWatcherParam>::~ServerWatcher(this);
};

// Line 569: range 00000000164E4636-00000000164E4660
void __cdecl RogueShikigamiUpgradeWatcher::~RogueShikigamiUpgradeWatcher(RogueShikigamiUpgradeWatcher *const this)
{
  RogueShikigamiUpgradeWatcher::~RogueShikigamiUpgradeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 576: range 00000000164CD990-00000000164CD9DD
void __cdecl RogueCurseNumWatcher::RogueCurseNumWatcher(RogueCurseNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RogueCurseNumWatcher,RogueTriggerCurseEvent,RogueCurseNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RogueCurseNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 576: range 00000000164E45BC-00000000164E45E6
void __cdecl RogueCurseNumWatcher::~RogueCurseNumWatcher(RogueCurseNumWatcher *const this)
{
  RogueCurseNumWatcher::~RogueCurseNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 576: range 00000000164E456E-00000000164E45BB
void __cdecl RogueCurseNumWatcher::~RogueCurseNumWatcher(RogueCurseNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueCurseNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RogueCurseNumWatcher,RogueTriggerCurseEvent,RogueCurseNumWatcherParam>::~ServerWatcher(this);
};

// Line 583: range 00000000164CDD7E-00000000164CDDCB
void __cdecl RogueSelectCardWatcher::RogueSelectCardWatcher(RogueSelectCardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RogueSelectCardWatcher,RogueSelectCardEvent,RogueSelectCardWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RogueSelectCardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 583: range 00000000164E44F4-00000000164E4541
void __cdecl RogueSelectCardWatcher::~RogueSelectCardWatcher(RogueSelectCardWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RogueSelectCardWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RogueSelectCardWatcher,RogueSelectCardEvent,RogueSelectCardWatcherParam>::~ServerWatcher(this);
};

// Line 583: range 00000000164E4542-00000000164E456C
void __cdecl RogueSelectCardWatcher::~RogueSelectCardWatcher(RogueSelectCardWatcher *const this)
{
  RogueSelectCardWatcher::~RogueSelectCardWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 589: range 00000000164CE234-00000000164CE281
void __cdecl WinterCampSnowmanCompleteWatcher::WinterCampSnowmanCompleteWatcher(
        WinterCampSnowmanCompleteWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<WinterCampSnowmanCompleteWatcher,WinterCampSnomanEditEvent,WinterCampSnowmanCompleteWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'WinterCampSnowmanCompleteWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 589: range 00000000164E447A-00000000164E44C7
void __cdecl WinterCampSnowmanCompleteWatcher::~WinterCampSnowmanCompleteWatcher(
        WinterCampSnowmanCompleteWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WinterCampSnowmanCompleteWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<WinterCampSnowmanCompleteWatcher,WinterCampSnomanEditEvent,WinterCampSnowmanCompleteWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 589: range 00000000164E44C8-00000000164E44F2
void __cdecl WinterCampSnowmanCompleteWatcher::~WinterCampSnowmanCompleteWatcher(
        WinterCampSnowmanCompleteWatcher *const this)
{
  WinterCampSnowmanCompleteWatcher::~WinterCampSnowmanCompleteWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 597: range 00000000164CE622-00000000164CE66F
void __cdecl ProjectionFinishLevelWatcher::ProjectionFinishLevelWatcher(ProjectionFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ProjectionFinishLevelWatcher,ProjectionFinishLevelEvent,ProjectionFinishLevelWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ProjectionFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 597: range 00000000164E4400-00000000164E444D
void __cdecl ProjectionFinishLevelWatcher::~ProjectionFinishLevelWatcher(ProjectionFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ProjectionFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ProjectionFinishLevelWatcher,ProjectionFinishLevelEvent,ProjectionFinishLevelWatcherParam>::~ServerWatcher(this);
};

// Line 597: range 00000000164E444E-00000000164E4478
void __cdecl ProjectionFinishLevelWatcher::~ProjectionFinishLevelWatcher(ProjectionFinishLevelWatcher *const this)
{
  ProjectionFinishLevelWatcher::~ProjectionFinishLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 604: range 00000000164CEA10-00000000164CEA5D
void __cdecl GallerySalvageReachScoreWatcher::GallerySalvageReachScoreWatcher(
        GallerySalvageReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GallerySalvageReachScoreWatcher,GallerySalvageSettleEvent,GallerySalvageReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GallerySalvageReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 604: range 00000000164E4386-00000000164E43D3
void __cdecl GallerySalvageReachScoreWatcher::~GallerySalvageReachScoreWatcher(
        GallerySalvageReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GallerySalvageReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GallerySalvageReachScoreWatcher,GallerySalvageSettleEvent,GallerySalvageReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 604: range 00000000164E43D4-00000000164E43FE
void __cdecl GallerySalvageReachScoreWatcher::~GallerySalvageReachScoreWatcher(
        GallerySalvageReachScoreWatcher *const this)
{
  GallerySalvageReachScoreWatcher::~GallerySalvageReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 611: range 00000000164CEDFE-00000000164CEE4B
void __cdecl FireworksChallengeReachScoreWatcher::FireworksChallengeReachScoreWatcher(
        FireworksChallengeReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FireworksChallengeReachScoreWatcher,FireworksChallengeSettleEvent,FireworksChallengeReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FireworksChallengeReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 611: range 00000000164E435A-00000000164E4384
void __cdecl FireworksChallengeReachScoreWatcher::~FireworksChallengeReachScoreWatcher(
        FireworksChallengeReachScoreWatcher *const this)
{
  FireworksChallengeReachScoreWatcher::~FireworksChallengeReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 611: range 00000000164E430C-00000000164E4359
void __cdecl FireworksChallengeReachScoreWatcher::~FireworksChallengeReachScoreWatcher(
        FireworksChallengeReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FireworksChallengeReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FireworksChallengeReachScoreWatcher,FireworksChallengeSettleEvent,FireworksChallengeReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 617: range 00000000164CF2B4-00000000164CF301
void __cdecl PotionStageLevelPassNumWatcher::PotionStageLevelPassNumWatcher(PotionStageLevelPassNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<PotionStageLevelPassNumWatcher,PotionStageLevelPassEvent,PotionStageLevelPassNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PotionStageLevelPassNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 617: range 00000000164E42E0-00000000164E430A
void __cdecl PotionStageLevelPassNumWatcher::~PotionStageLevelPassNumWatcher(
        PotionStageLevelPassNumWatcher *const this)
{
  PotionStageLevelPassNumWatcher::~PotionStageLevelPassNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 617: range 00000000164E4292-00000000164E42DF
void __cdecl PotionStageLevelPassNumWatcher::~PotionStageLevelPassNumWatcher(
        PotionStageLevelPassNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PotionStageLevelPassNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<PotionStageLevelPassNumWatcher,PotionStageLevelPassEvent,PotionStageLevelPassNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 625: range 00000000164CF76A-00000000164CF7B7
void __cdecl PotionStageObtainMedalNumWatcher::PotionStageObtainMedalNumWatcher(
        PotionStageObtainMedalNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<PotionStageObtainMedalNumWatcher,PotionStageLevelPassEvent,PotionStageObtainMedalNumWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PotionStageObtainMedalNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 625: range 00000000164E4266-00000000164E4290
void __cdecl PotionStageObtainMedalNumWatcher::~PotionStageObtainMedalNumWatcher(
        PotionStageObtainMedalNumWatcher *const this)
{
  PotionStageObtainMedalNumWatcher::~PotionStageObtainMedalNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 625: range 00000000164E4218-00000000164E4265
void __cdecl PotionStageObtainMedalNumWatcher::~PotionStageObtainMedalNumWatcher(
        PotionStageObtainMedalNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PotionStageObtainMedalNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<PotionStageObtainMedalNumWatcher,PotionStageLevelPassEvent,PotionStageObtainMedalNumWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 632: range 00000000164CFC20-00000000164CFC6D
void __cdecl PotionStageReachTotalScoreWatcher::PotionStageReachTotalScoreWatcher(
        PotionStageReachTotalScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<PotionStageReachTotalScoreWatcher,PotionStageScoreChangeEvent,PotionStageReachTotalScoreWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PotionStageReachTotalScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 632: range 00000000164E419E-00000000164E41EB
void __cdecl PotionStageReachTotalScoreWatcher::~PotionStageReachTotalScoreWatcher(
        PotionStageReachTotalScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PotionStageReachTotalScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<PotionStageReachTotalScoreWatcher,PotionStageScoreChangeEvent,PotionStageReachTotalScoreWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 632: range 00000000164E41EC-00000000164E4216
void __cdecl PotionStageReachTotalScoreWatcher::~PotionStageReachTotalScoreWatcher(
        PotionStageReachTotalScoreWatcher *const this)
{
  PotionStageReachTotalScoreWatcher::~PotionStageReachTotalScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 640: range 00000000164D000E-00000000164D005B
void __cdecl MichiaeMatsuriUnlockCrystalSkillReachNumWatcher::MichiaeMatsuriUnlockCrystalSkillReachNumWatcher(
        MichiaeMatsuriUnlockCrystalSkillReachNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MichiaeMatsuriUnlockCrystalSkillReachNumWatcher,MichiaeMatsuriUnlockCrystalSkillEvent,MichiaeMatsuriUnlockCrystalSkillReachNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MichiaeMatsuriUnlockCrystalSkillReachNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 640: range 00000000164E4172-00000000164E419C
void __cdecl MichiaeMatsuriUnlockCrystalSkillReachNumWatcher::~MichiaeMatsuriUnlockCrystalSkillReachNumWatcher(
        MichiaeMatsuriUnlockCrystalSkillReachNumWatcher *const this)
{
  MichiaeMatsuriUnlockCrystalSkillReachNumWatcher::~MichiaeMatsuriUnlockCrystalSkillReachNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 640: range 00000000164E4124-00000000164E4171
void __cdecl MichiaeMatsuriUnlockCrystalSkillReachNumWatcher::~MichiaeMatsuriUnlockCrystalSkillReachNumWatcher(
        MichiaeMatsuriUnlockCrystalSkillReachNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MichiaeMatsuriUnlockCrystalSkillReachNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MichiaeMatsuriUnlockCrystalSkillReachNumWatcher,MichiaeMatsuriUnlockCrystalSkillEvent,MichiaeMatsuriUnlockCrystalSkillReachNumWatcherParam>::~ServerWatcher(this);
};

// Line 647: range 00000000164D03FC-00000000164D0449
void __cdecl MichiaeMatsuriFinishDarkChallengeReachNumWatcher::MichiaeMatsuriFinishDarkChallengeReachNumWatcher(
        MichiaeMatsuriFinishDarkChallengeReachNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MichiaeMatsuriFinishDarkChallengeReachNumWatcher,FinishActivityMichiaeDarkChallengeEvent,MichiaeMatsuriFinishDarkChallengeReachNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MichiaeMatsuriFinishDarkChallengeReachNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 647: range 00000000164E40F8-00000000164E4122
void __cdecl MichiaeMatsuriFinishDarkChallengeReachNumWatcher::~MichiaeMatsuriFinishDarkChallengeReachNumWatcher(
        MichiaeMatsuriFinishDarkChallengeReachNumWatcher *const this)
{
  MichiaeMatsuriFinishDarkChallengeReachNumWatcher::~MichiaeMatsuriFinishDarkChallengeReachNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 647: range 00000000164E40AA-00000000164E40F7
void __cdecl MichiaeMatsuriFinishDarkChallengeReachNumWatcher::~MichiaeMatsuriFinishDarkChallengeReachNumWatcher(
        MichiaeMatsuriFinishDarkChallengeReachNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MichiaeMatsuriFinishDarkChallengeReachNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MichiaeMatsuriFinishDarkChallengeReachNumWatcher,FinishActivityMichiaeDarkChallengeEvent,MichiaeMatsuriFinishDarkChallengeReachNumWatcherParam>::~ServerWatcher(this);
};

// Line 654: range 00000000164D07EA-00000000164D0837
void __cdecl BartenderFinishStoryModuleWatcher::BartenderFinishStoryModuleWatcher(
        BartenderFinishStoryModuleWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BartenderFinishStoryModuleWatcher,BartenderFinishStoryModuleEvent,BartenderFinishStoryModuleWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BartenderFinishStoryModuleWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 654: range 00000000164E407E-00000000164E40A8
void __cdecl BartenderFinishStoryModuleWatcher::~BartenderFinishStoryModuleWatcher(
        BartenderFinishStoryModuleWatcher *const this)
{
  BartenderFinishStoryModuleWatcher::~BartenderFinishStoryModuleWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 654: range 00000000164E4030-00000000164E407D
void __cdecl BartenderFinishStoryModuleWatcher::~BartenderFinishStoryModuleWatcher(
        BartenderFinishStoryModuleWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BartenderFinishStoryModuleWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BartenderFinishStoryModuleWatcher,BartenderFinishStoryModuleEvent,BartenderFinishStoryModuleWatcherParam>::~ServerWatcher(this);
};

// Line 661: range 00000000164D0BD8-00000000164D0C25
void __cdecl BartenderChallengeModuleLevelScoreWatcher::BartenderChallengeModuleLevelScoreWatcher(
        BartenderChallengeModuleLevelScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BartenderChallengeModuleLevelScoreWatcher,BartenderChallengeModuleLevelScoreEvent,BartenderChallengeModuleLevelScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BartenderChallengeModuleLevelScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 661: range 00000000164E3FB6-00000000164E4003
void __cdecl BartenderChallengeModuleLevelScoreWatcher::~BartenderChallengeModuleLevelScoreWatcher(
        BartenderChallengeModuleLevelScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BartenderChallengeModuleLevelScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BartenderChallengeModuleLevelScoreWatcher,BartenderChallengeModuleLevelScoreEvent,BartenderChallengeModuleLevelScoreWatcherParam>::~ServerWatcher(this);
};

// Line 661: range 00000000164E4004-00000000164E402E
void __cdecl BartenderChallengeModuleLevelScoreWatcher::~BartenderChallengeModuleLevelScoreWatcher(
        BartenderChallengeModuleLevelScoreWatcher *const this)
{
  BartenderChallengeModuleLevelScoreWatcher::~BartenderChallengeModuleLevelScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 668: range 00000000164D0FC6-00000000164D1013
void __cdecl BartenderUnlockFormulaWatcher::BartenderUnlockFormulaWatcher(BartenderUnlockFormulaWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BartenderUnlockFormulaWatcher,BartenderUnlockFormulaEvent,BartenderUnlockFormulaWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BartenderUnlockFormulaWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 668: range 00000000164E3F8A-00000000164E3FB4
void __cdecl BartenderUnlockFormulaWatcher::~BartenderUnlockFormulaWatcher(BartenderUnlockFormulaWatcher *const this)
{
  BartenderUnlockFormulaWatcher::~BartenderUnlockFormulaWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 668: range 00000000164E3F3C-00000000164E3F89
void __cdecl BartenderUnlockFormulaWatcher::~BartenderUnlockFormulaWatcher(BartenderUnlockFormulaWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BartenderUnlockFormulaWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BartenderUnlockFormulaWatcher,BartenderUnlockFormulaEvent,BartenderUnlockFormulaWatcherParam>::~ServerWatcher(this);
};

// Line 675: range 00000000164D13B4-00000000164D1401
void __cdecl IrodoriFinishFlowerThemeWatcher::IrodoriFinishFlowerThemeWatcher(
        IrodoriFinishFlowerThemeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<IrodoriFinishFlowerThemeWatcher,IrodoriFinishFlowerThemeEvent,IrodoriFinishFlowerThemeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'IrodoriFinishFlowerThemeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 675: range 00000000164E3F10-00000000164E3F3A
void __cdecl IrodoriFinishFlowerThemeWatcher::~IrodoriFinishFlowerThemeWatcher(
        IrodoriFinishFlowerThemeWatcher *const this)
{
  IrodoriFinishFlowerThemeWatcher::~IrodoriFinishFlowerThemeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 675: range 00000000164E3EC2-00000000164E3F0F
void __cdecl IrodoriFinishFlowerThemeWatcher::~IrodoriFinishFlowerThemeWatcher(
        IrodoriFinishFlowerThemeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IrodoriFinishFlowerThemeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<IrodoriFinishFlowerThemeWatcher,IrodoriFinishFlowerThemeEvent,IrodoriFinishFlowerThemeWatcherParam>::~ServerWatcher(this);
};

// Line 681: range 00000000164D17A2-00000000164D17EF
void __cdecl IrodoriFinishPoetryThemeWatcher::IrodoriFinishPoetryThemeWatcher(
        IrodoriFinishPoetryThemeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<IrodoriFinishPoetryThemeWatcher,IrodoriFinishPoetryThemeEvent,IrodoriFinishPoetryThemeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'IrodoriFinishPoetryThemeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 681: range 00000000164E3E96-00000000164E3EC0
void __cdecl IrodoriFinishPoetryThemeWatcher::~IrodoriFinishPoetryThemeWatcher(
        IrodoriFinishPoetryThemeWatcher *const this)
{
  IrodoriFinishPoetryThemeWatcher::~IrodoriFinishPoetryThemeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 681: range 00000000164E3E48-00000000164E3E95
void __cdecl IrodoriFinishPoetryThemeWatcher::~IrodoriFinishPoetryThemeWatcher(
        IrodoriFinishPoetryThemeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IrodoriFinishPoetryThemeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<IrodoriFinishPoetryThemeWatcher,IrodoriFinishPoetryThemeEvent,IrodoriFinishPoetryThemeWatcherParam>::~ServerWatcher(this);
};

// Line 688: range 00000000164D1B90-00000000164D1BDD
void __cdecl SpiceMakeFormulaTimesWatcher::SpiceMakeFormulaTimesWatcher(SpiceMakeFormulaTimesWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<SpiceMakeFormulaTimesWatcher,SpiceMakeFormulaTimesEvent,SpiceMakeFormulaTimesWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'SpiceMakeFormulaTimesWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 688: range 00000000164E3E1C-00000000164E3E46
void __cdecl SpiceMakeFormulaTimesWatcher::~SpiceMakeFormulaTimesWatcher(SpiceMakeFormulaTimesWatcher *const this)
{
  SpiceMakeFormulaTimesWatcher::~SpiceMakeFormulaTimesWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 688: range 00000000164E3DCE-00000000164E3E1B
void __cdecl SpiceMakeFormulaTimesWatcher::~SpiceMakeFormulaTimesWatcher(SpiceMakeFormulaTimesWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SpiceMakeFormulaTimesWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<SpiceMakeFormulaTimesWatcher,SpiceMakeFormulaTimesEvent,SpiceMakeFormulaTimesWatcherParam>::~ServerWatcher(this);
};

// Line 695: range 00000000164D1F7E-00000000164D1FCB
void __cdecl SpiceGiveFoodTimesWatcher::SpiceGiveFoodTimesWatcher(SpiceGiveFoodTimesWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<SpiceGiveFoodTimesWatcher,SpiceGiveFoodTimesEvent,SpiceGiveFoodTimesWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'SpiceGiveFoodTimesWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 695: range 00000000164E3DA2-00000000164E3DCC
void __cdecl SpiceGiveFoodTimesWatcher::~SpiceGiveFoodTimesWatcher(SpiceGiveFoodTimesWatcher *const this)
{
  SpiceGiveFoodTimesWatcher::~SpiceGiveFoodTimesWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 695: range 00000000164E3D54-00000000164E3DA1
void __cdecl SpiceGiveFoodTimesWatcher::~SpiceGiveFoodTimesWatcher(SpiceGiveFoodTimesWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SpiceGiveFoodTimesWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<SpiceGiveFoodTimesWatcher,SpiceGiveFoodTimesEvent,SpiceGiveFoodTimesWatcherParam>::~ServerWatcher(this);
};

// Line 702: range 00000000164D236C-00000000164D23B9
void __cdecl SpiceMakeFormulaSuccessfulTimesWatcher::SpiceMakeFormulaSuccessfulTimesWatcher(
        SpiceMakeFormulaSuccessfulTimesWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<SpiceMakeFormulaSuccessfulTimesWatcher,SpiceMakeFormulaSuccessfulTimesEvent,SpiceMakeFormulaSuccessfulTimesWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'SpiceMakeFormulaSuccessfulTimesWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 702: range 00000000164E3D28-00000000164E3D52
void __cdecl SpiceMakeFormulaSuccessfulTimesWatcher::~SpiceMakeFormulaSuccessfulTimesWatcher(
        SpiceMakeFormulaSuccessfulTimesWatcher *const this)
{
  SpiceMakeFormulaSuccessfulTimesWatcher::~SpiceMakeFormulaSuccessfulTimesWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 702: range 00000000164E3CDA-00000000164E3D27
void __cdecl SpiceMakeFormulaSuccessfulTimesWatcher::~SpiceMakeFormulaSuccessfulTimesWatcher(
        SpiceMakeFormulaSuccessfulTimesWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SpiceMakeFormulaSuccessfulTimesWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<SpiceMakeFormulaSuccessfulTimesWatcher,SpiceMakeFormulaSuccessfulTimesEvent,SpiceMakeFormulaSuccessfulTimesWatcherParam>::~ServerWatcher(this);
};

// Line 709: range 00000000164D275A-00000000164D27A7
void __cdecl PhotoFinishPosWatcher::PhotoFinishPosWatcher(PhotoFinishPosWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<PhotoFinishPosWatcher,PhotoFinishPosEvent,PhotoFinishPosWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'PhotoFinishPosWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 709: range 00000000164E3C60-00000000164E3CAD
void __cdecl PhotoFinishPosWatcher::~PhotoFinishPosWatcher(PhotoFinishPosWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'PhotoFinishPosWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<PhotoFinishPosWatcher,PhotoFinishPosEvent,PhotoFinishPosWatcherParam>::~ServerWatcher(this);
};

// Line 709: range 00000000164E3CAE-00000000164E3CD8
void __cdecl PhotoFinishPosWatcher::~PhotoFinishPosWatcher(PhotoFinishPosWatcher *const this)
{
  PhotoFinishPosWatcher::~PhotoFinishPosWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 716: range 00000000164D2B48-00000000164D2B95
void __cdecl CrystalLinkLevelScoreReachWatcher::CrystalLinkLevelScoreReachWatcher(
        CrystalLinkLevelScoreReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CrystalLinkLevelScoreReachWatcher,CrystalLinkDungeonSettleEvent,CrystalLinkLevelScoreReachWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CrystalLinkLevelScoreReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 716: range 00000000164E3BE6-00000000164E3C33
void __cdecl CrystalLinkLevelScoreReachWatcher::~CrystalLinkLevelScoreReachWatcher(
        CrystalLinkLevelScoreReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrystalLinkLevelScoreReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CrystalLinkLevelScoreReachWatcher,CrystalLinkDungeonSettleEvent,CrystalLinkLevelScoreReachWatcherParam>::~ServerWatcher(this);
};

// Line 716: range 00000000164E3C34-00000000164E3C5E
void __cdecl CrystalLinkLevelScoreReachWatcher::~CrystalLinkLevelScoreReachWatcher(
        CrystalLinkLevelScoreReachWatcher *const this)
{
  CrystalLinkLevelScoreReachWatcher::~CrystalLinkLevelScoreReachWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 722: range 00000000164D2F36-00000000164D2F83
void __cdecl CrystalLinkTotalMaxScoreReachWatcher::CrystalLinkTotalMaxScoreReachWatcher(
        CrystalLinkTotalMaxScoreReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CrystalLinkTotalMaxScoreReachWatcher,CrystalLinkDungeonSettleEvent,CrystalLinkTotalMaxScoreReachWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CrystalLinkTotalMaxScoreReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 722: range 00000000164E3BBA-00000000164E3BE4
void __cdecl CrystalLinkTotalMaxScoreReachWatcher::~CrystalLinkTotalMaxScoreReachWatcher(
        CrystalLinkTotalMaxScoreReachWatcher *const this)
{
  CrystalLinkTotalMaxScoreReachWatcher::~CrystalLinkTotalMaxScoreReachWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 722: range 00000000164E3B6C-00000000164E3BB9
void __cdecl CrystalLinkTotalMaxScoreReachWatcher::~CrystalLinkTotalMaxScoreReachWatcher(
        CrystalLinkTotalMaxScoreReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CrystalLinkTotalMaxScoreReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CrystalLinkTotalMaxScoreReachWatcher,CrystalLinkDungeonSettleEvent,CrystalLinkTotalMaxScoreReachWatcherParam>::~ServerWatcher(this);
};

// Line 729: range 00000000164D33EC-00000000164D3439
void __cdecl IrodoriChessStageReachScoreWatcher::IrodoriChessStageReachScoreWatcher(
        IrodoriChessStageReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<IrodoriChessStageReachScoreWatcher,IrodoriChessSettleNewRecordEvent,IrodoriChessStageReachScoreWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'IrodoriChessStageReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 729: range 00000000164E3B40-00000000164E3B6A
void __cdecl IrodoriChessStageReachScoreWatcher::~IrodoriChessStageReachScoreWatcher(
        IrodoriChessStageReachScoreWatcher *const this)
{
  IrodoriChessStageReachScoreWatcher::~IrodoriChessStageReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 729: range 00000000164E3AF2-00000000164E3B3F
void __cdecl IrodoriChessStageReachScoreWatcher::~IrodoriChessStageReachScoreWatcher(
        IrodoriChessStageReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IrodoriChessStageReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<IrodoriChessStageReachScoreWatcher,IrodoriChessSettleNewRecordEvent,IrodoriChessStageReachScoreWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 737: range 00000000164D37DA-00000000164D3827
void __cdecl IrodoriFinishMasterStageWatcher::IrodoriFinishMasterStageWatcher(
        IrodoriFinishMasterStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<IrodoriFinishMasterStageWatcher,IrodoriMasterLevelEvent,IrodoriFinishMasterStageWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'IrodoriFinishMasterStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 737: range 00000000164E3AC6-00000000164E3AF0
void __cdecl IrodoriFinishMasterStageWatcher::~IrodoriFinishMasterStageWatcher(
        IrodoriFinishMasterStageWatcher *const this)
{
  IrodoriFinishMasterStageWatcher::~IrodoriFinishMasterStageWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 737: range 00000000164E3A78-00000000164E3AC5
void __cdecl IrodoriFinishMasterStageWatcher::~IrodoriFinishMasterStageWatcher(
        IrodoriFinishMasterStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IrodoriFinishMasterStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<IrodoriFinishMasterStageWatcher,IrodoriMasterLevelEvent,IrodoriFinishMasterStageWatcherParam>::~ServerWatcher(this);
};

// Line 744: range 00000000164D3BC8-00000000164D3C15
void __cdecl LuminanceStoneChallengeReachScoreWatcher::LuminanceStoneChallengeReachScoreWatcher(
        LuminanceStoneChallengeReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<LuminanceStoneChallengeReachScoreWatcher,LuminanceStoneChallengeReachNewScoreEvent,LuminanceStoneChallengeReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'LuminanceStoneChallengeReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 744: range 00000000164E39FE-00000000164E3A4B
void __cdecl LuminanceStoneChallengeReachScoreWatcher::~LuminanceStoneChallengeReachScoreWatcher(
        LuminanceStoneChallengeReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LuminanceStoneChallengeReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<LuminanceStoneChallengeReachScoreWatcher,LuminanceStoneChallengeReachNewScoreEvent,LuminanceStoneChallengeReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 744: range 00000000164E3A4C-00000000164E3A76
void __cdecl LuminanceStoneChallengeReachScoreWatcher::~LuminanceStoneChallengeReachScoreWatcher(
        LuminanceStoneChallengeReachScoreWatcher *const this)
{
  LuminanceStoneChallengeReachScoreWatcher::~LuminanceStoneChallengeReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 751: range 00000000164D3FB6-00000000164D4003
void __cdecl GachaFinishStageWatcher::GachaFinishStageWatcher(GachaFinishStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GachaFinishStageWatcher,GachaFinishStageEvent,GachaFinishStageWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GachaFinishStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 751: range 00000000164E39D2-00000000164E39FC
void __cdecl GachaFinishStageWatcher::~GachaFinishStageWatcher(GachaFinishStageWatcher *const this)
{
  GachaFinishStageWatcher::~GachaFinishStageWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 751: range 00000000164E3984-00000000164E39D1
void __cdecl GachaFinishStageWatcher::~GachaFinishStageWatcher(GachaFinishStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaFinishStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GachaFinishStageWatcher,GachaFinishStageEvent,GachaFinishStageWatcherParam>::~ServerWatcher(this);
};

// Line 758: range 00000000164D43A4-00000000164D43F1
void __cdecl GachaMakeRobotWatcher::GachaMakeRobotWatcher(GachaMakeRobotWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GachaMakeRobotWatcher,GachaMakeRobotEvent,GachaMakeRobotWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GachaMakeRobotWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 758: range 00000000164E3958-00000000164E3982
void __cdecl GachaMakeRobotWatcher::~GachaMakeRobotWatcher(GachaMakeRobotWatcher *const this)
{
  GachaMakeRobotWatcher::~GachaMakeRobotWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 758: range 00000000164E390A-00000000164E3957
void __cdecl GachaMakeRobotWatcher::~GachaMakeRobotWatcher(GachaMakeRobotWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaMakeRobotWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GachaMakeRobotWatcher,GachaMakeRobotEvent,GachaMakeRobotWatcherParam>::~ServerWatcher(this);
};

// Line 765: range 00000000164D4792-00000000164D47DF
void __cdecl GachaGetRobotWatcher::GachaGetRobotWatcher(GachaGetRobotWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GachaGetRobotWatcher,GachaGetRobotEvent,GachaGetRobotWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GachaGetRobotWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 765: range 00000000164E38DE-00000000164E3908
void __cdecl GachaGetRobotWatcher::~GachaGetRobotWatcher(GachaGetRobotWatcher *const this)
{
  GachaGetRobotWatcher::~GachaGetRobotWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 765: range 00000000164E3890-00000000164E38DD
void __cdecl GachaGetRobotWatcher::~GachaGetRobotWatcher(GachaGetRobotWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaGetRobotWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GachaGetRobotWatcher,GachaGetRobotEvent,GachaGetRobotWatcherParam>::~ServerWatcher(this);
};

// Line 772: range 00000000164D4B80-00000000164D4BCD
void __cdecl GachaGiveRobotWatcher::GachaGiveRobotWatcher(GachaGiveRobotWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GachaGiveRobotWatcher,GachaGiveRobotEvent,GachaGiveRobotWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GachaGiveRobotWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 772: range 00000000164E3864-00000000164E388E
void __cdecl GachaGiveRobotWatcher::~GachaGiveRobotWatcher(GachaGiveRobotWatcher *const this)
{
  GachaGiveRobotWatcher::~GachaGiveRobotWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 772: range 00000000164E3816-00000000164E3863
void __cdecl GachaGiveRobotWatcher::~GachaGiveRobotWatcher(GachaGiveRobotWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaGiveRobotWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GachaGiveRobotWatcher,GachaGiveRobotEvent,GachaGiveRobotWatcherParam>::~ServerWatcher(this);
};

// Line 779: range 00000000164D4F6E-00000000164D4FBB
void __cdecl GachaConvertRobotWatcher::GachaConvertRobotWatcher(GachaConvertRobotWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GachaConvertRobotWatcher,GachaConvertRobotEvent,GachaConvertRobotWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GachaConvertRobotWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 779: range 00000000164E37EA-00000000164E3814
void __cdecl GachaConvertRobotWatcher::~GachaConvertRobotWatcher(GachaConvertRobotWatcher *const this)
{
  GachaConvertRobotWatcher::~GachaConvertRobotWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 779: range 00000000164E379C-00000000164E37E9
void __cdecl GachaConvertRobotWatcher::~GachaConvertRobotWatcher(GachaConvertRobotWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GachaConvertRobotWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GachaConvertRobotWatcher,GachaConvertRobotEvent,GachaConvertRobotWatcherParam>::~ServerWatcher(this);
};

// Line 786: range 00000000164D535C-00000000164D53A9
void __cdecl GearFinishStageWatcher::GearFinishStageWatcher(GearFinishStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GearFinishStageWatcher,GearFinishStageEvent,GearFinishStageWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GearFinishStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 786: range 00000000164E3770-00000000164E379A
void __cdecl GearFinishStageWatcher::~GearFinishStageWatcher(GearFinishStageWatcher *const this)
{
  GearFinishStageWatcher::~GearFinishStageWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 786: range 00000000164E3722-00000000164E376F
void __cdecl GearFinishStageWatcher::~GearFinishStageWatcher(GearFinishStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GearFinishStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GearFinishStageWatcher,GearFinishStageEvent,GearFinishStageWatcherParam>::~ServerWatcher(this);
};

// Line 792: range 00000000164D5B38-00000000164D5B85
void __cdecl FinishRogueDiaryStageWatcher::FinishRogueDiaryStageWatcher(FinishRogueDiaryStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishRogueDiaryStageWatcher,FinishRogueDiaryStageEvent,FinishRogueDiaryStageWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishRogueDiaryStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 792: range 00000000164E36F6-00000000164E3720
void __cdecl FinishRogueDiaryStageWatcher::~FinishRogueDiaryStageWatcher(FinishRogueDiaryStageWatcher *const this)
{
  FinishRogueDiaryStageWatcher::~FinishRogueDiaryStageWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 792: range 00000000164E36A8-00000000164E36F5
void __cdecl FinishRogueDiaryStageWatcher::~FinishRogueDiaryStageWatcher(FinishRogueDiaryStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishRogueDiaryStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishRogueDiaryStageWatcher,FinishRogueDiaryStageEvent,FinishRogueDiaryStageWatcherParam>::~ServerWatcher(this);
};

// Line 799: range 00000000164D574A-00000000164D5797
void __cdecl GearFinishJigsawPictureWatcher::GearFinishJigsawPictureWatcher(GearFinishJigsawPictureWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GearFinishJigsawPictureWatcher,GearFinishJigsawPictureEvent,GearFinishJigsawPictureWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GearFinishJigsawPictureWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 799: range 00000000164E362E-00000000164E367B
void __cdecl GearFinishJigsawPictureWatcher::~GearFinishJigsawPictureWatcher(
        GearFinishJigsawPictureWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GearFinishJigsawPictureWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GearFinishJigsawPictureWatcher,GearFinishJigsawPictureEvent,GearFinishJigsawPictureWatcherParam>::~ServerWatcher(this);
};

// Line 799: range 00000000164E367C-00000000164E36A6
void __cdecl GearFinishJigsawPictureWatcher::~GearFinishJigsawPictureWatcher(
        GearFinishJigsawPictureWatcher *const this)
{
  GearFinishJigsawPictureWatcher::~GearFinishJigsawPictureWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 806: range 00000000164D5F26-00000000164D5F73
void __cdecl FinishRogueDiaryStageRoundWatcher::FinishRogueDiaryStageRoundWatcher(
        FinishRogueDiaryStageRoundWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FinishRogueDiaryStageRoundWatcher,FinishRogueDiaryStageRoundEvent,FinishRogueDiaryStageRoundWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FinishRogueDiaryStageRoundWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 806: range 00000000164E3602-00000000164E362C
void __cdecl FinishRogueDiaryStageRoundWatcher::~FinishRogueDiaryStageRoundWatcher(
        FinishRogueDiaryStageRoundWatcher *const this)
{
  FinishRogueDiaryStageRoundWatcher::~FinishRogueDiaryStageRoundWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 806: range 00000000164E35B4-00000000164E3601
void __cdecl FinishRogueDiaryStageRoundWatcher::~FinishRogueDiaryStageRoundWatcher(
        FinishRogueDiaryStageRoundWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FinishRogueDiaryStageRoundWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FinishRogueDiaryStageRoundWatcher,FinishRogueDiaryStageRoundEvent,FinishRogueDiaryStageRoundWatcherParam>::~ServerWatcher(this);
};

// Line 813: range 00000000164D6314-00000000164D6361
void __cdecl MusicGameSettleOthersUgcWatcher::MusicGameSettleOthersUgcWatcher(
        MusicGameSettleOthersUgcWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MusicGameSettleOthersUgcWatcher,MusicGameSettleOthersUgcEvent,MusicGameSettleOthersUgcWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MusicGameSettleOthersUgcWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 813: range 00000000164E3588-00000000164E35B2
void __cdecl MusicGameSettleOthersUgcWatcher::~MusicGameSettleOthersUgcWatcher(
        MusicGameSettleOthersUgcWatcher *const this)
{
  MusicGameSettleOthersUgcWatcher::~MusicGameSettleOthersUgcWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 813: range 00000000164E353A-00000000164E3587
void __cdecl MusicGameSettleOthersUgcWatcher::~MusicGameSettleOthersUgcWatcher(
        MusicGameSettleOthersUgcWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MusicGameSettleOthersUgcWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MusicGameSettleOthersUgcWatcher,MusicGameSettleOthersUgcEvent,MusicGameSettleOthersUgcWatcherParam>::~ServerWatcher(this);
};

// Line 820: range 00000000164D6702-00000000164D674F
void __cdecl MusicGameSaveUgcWatcher::MusicGameSaveUgcWatcher(MusicGameSaveUgcWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MusicGameSaveUgcWatcher,MusicGameSaveUgcEvent,MusicGameSaveUgcWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MusicGameSaveUgcWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 820: range 00000000164E34C0-00000000164E350D
void __cdecl MusicGameSaveUgcWatcher::~MusicGameSaveUgcWatcher(MusicGameSaveUgcWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MusicGameSaveUgcWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MusicGameSaveUgcWatcher,MusicGameSaveUgcEvent,MusicGameSaveUgcWatcherParam>::~ServerWatcher(this);
};

// Line 820: range 00000000164E350E-00000000164E3538
void __cdecl MusicGameSaveUgcWatcher::~MusicGameSaveUgcWatcher(MusicGameSaveUgcWatcher *const this)
{
  MusicGameSaveUgcWatcher::~MusicGameSaveUgcWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 827: range 00000000164D6AF0-00000000164D6B3D
void __cdecl IslandPartyReachScoreWatcher::IslandPartyReachScoreWatcher(IslandPartyReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<IslandPartyReachScoreWatcher,IslandPartyReachScoreEvent,IslandPartyReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'IslandPartyReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 827: range 00000000164E3494-00000000164E34BE
void __cdecl IslandPartyReachScoreWatcher::~IslandPartyReachScoreWatcher(IslandPartyReachScoreWatcher *const this)
{
  IslandPartyReachScoreWatcher::~IslandPartyReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 827: range 00000000164E3446-00000000164E3493
void __cdecl IslandPartyReachScoreWatcher::~IslandPartyReachScoreWatcher(IslandPartyReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IslandPartyReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<IslandPartyReachScoreWatcher,IslandPartyReachScoreEvent,IslandPartyReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 834: range 00000000164D6EDE-00000000164D6F2B
void __cdecl MuqadasPotionLevelScoreWatcher::MuqadasPotionLevelScoreWatcher(MuqadasPotionLevelScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MuqadasPotionLevelScoreWatcher,MuqadasPotionLevelScoreEvent,MuqadasPotionLevelScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MuqadasPotionLevelScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 834: range 00000000164E341A-00000000164E3444
void __cdecl MuqadasPotionLevelScoreWatcher::~MuqadasPotionLevelScoreWatcher(
        MuqadasPotionLevelScoreWatcher *const this)
{
  MuqadasPotionLevelScoreWatcher::~MuqadasPotionLevelScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 834: range 00000000164E33CC-00000000164E3419
void __cdecl MuqadasPotionLevelScoreWatcher::~MuqadasPotionLevelScoreWatcher(
        MuqadasPotionLevelScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MuqadasPotionLevelScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MuqadasPotionLevelScoreWatcher,MuqadasPotionLevelScoreEvent,MuqadasPotionLevelScoreWatcherParam>::~ServerWatcher(this);
};

// Line 841: range 00000000164D72CC-00000000164D7319
void __cdecl MuqadasPotionLevelWeaknessNumWatcher::MuqadasPotionLevelWeaknessNumWatcher(
        MuqadasPotionLevelWeaknessNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MuqadasPotionLevelWeaknessNumWatcher,MuqadasPotionLevelWeaknessNumEvent,MuqadasPotionLevelWeaknessNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MuqadasPotionLevelWeaknessNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 841: range 00000000164E33A0-00000000164E33CA
void __cdecl MuqadasPotionLevelWeaknessNumWatcher::~MuqadasPotionLevelWeaknessNumWatcher(
        MuqadasPotionLevelWeaknessNumWatcher *const this)
{
  MuqadasPotionLevelWeaknessNumWatcher::~MuqadasPotionLevelWeaknessNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 841: range 00000000164E3352-00000000164E339F
void __cdecl MuqadasPotionLevelWeaknessNumWatcher::~MuqadasPotionLevelWeaknessNumWatcher(
        MuqadasPotionLevelWeaknessNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MuqadasPotionLevelWeaknessNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MuqadasPotionLevelWeaknessNumWatcher,MuqadasPotionLevelWeaknessNumEvent,MuqadasPotionLevelWeaknessNumWatcherParam>::~ServerWatcher(this);
};

// Line 848: range 00000000164D76BA-00000000164D7707
void __cdecl MuqadasPotionLevelOnceWeaknessNumWatcher::MuqadasPotionLevelOnceWeaknessNumWatcher(
        MuqadasPotionLevelOnceWeaknessNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<MuqadasPotionLevelOnceWeaknessNumWatcher,MuqadasPotionLevelOnceWeaknessNumEvent,MuqadasPotionLevelOnceWeaknessNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'MuqadasPotionLevelOnceWeaknessNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 848: range 00000000164E3326-00000000164E3350
void __cdecl MuqadasPotionLevelOnceWeaknessNumWatcher::~MuqadasPotionLevelOnceWeaknessNumWatcher(
        MuqadasPotionLevelOnceWeaknessNumWatcher *const this)
{
  MuqadasPotionLevelOnceWeaknessNumWatcher::~MuqadasPotionLevelOnceWeaknessNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 848: range 00000000164E32D8-00000000164E3325
void __cdecl MuqadasPotionLevelOnceWeaknessNumWatcher::~MuqadasPotionLevelOnceWeaknessNumWatcher(
        MuqadasPotionLevelOnceWeaknessNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MuqadasPotionLevelOnceWeaknessNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<MuqadasPotionLevelOnceWeaknessNumWatcher,MuqadasPotionLevelOnceWeaknessNumEvent,MuqadasPotionLevelOnceWeaknessNumWatcherParam>::~ServerWatcher(this);
};

// Line 855: range 00000000164D7AA8-00000000164D7AF5
void __cdecl InstableSprayReachScoreWatcher::InstableSprayReachScoreWatcher(InstableSprayReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<InstableSprayReachScoreWatcher,InstableSprayScoreEvent,InstableSprayReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'InstableSprayReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 855: range 00000000164E32AC-00000000164E32D6
void __cdecl InstableSprayReachScoreWatcher::~InstableSprayReachScoreWatcher(
        InstableSprayReachScoreWatcher *const this)
{
  InstableSprayReachScoreWatcher::~InstableSprayReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 855: range 00000000164E325E-00000000164E32AB
void __cdecl InstableSprayReachScoreWatcher::~InstableSprayReachScoreWatcher(
        InstableSprayReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'InstableSprayReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<InstableSprayReachScoreWatcher,InstableSprayScoreEvent,InstableSprayReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 862: range 00000000164D7F5E-00000000164D7FAB
void __cdecl GravenInnocenceCarveCompleteWatcher::GravenInnocenceCarveCompleteWatcher(
        GravenInnocenceCarveCompleteWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  RefreshableServerWatcher<GravenInnocenceCarveCompleteWatcher,GravenInnocenceCarveEditEvent,GravenInnocenceCarveCompleteWatcherParam>::RefreshableServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GravenInnocenceCarveCompleteWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 862: range 00000000164E31E4-00000000164E3231
void __cdecl GravenInnocenceCarveCompleteWatcher::~GravenInnocenceCarveCompleteWatcher(
        GravenInnocenceCarveCompleteWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GravenInnocenceCarveCompleteWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  RefreshableServerWatcher<GravenInnocenceCarveCompleteWatcher,GravenInnocenceCarveEditEvent,GravenInnocenceCarveCompleteWatcherParam>::~RefreshableServerWatcher(this);
};

// Line 862: range 00000000164E3232-00000000164E325C
void __cdecl GravenInnocenceCarveCompleteWatcher::~GravenInnocenceCarveCompleteWatcher(
        GravenInnocenceCarveCompleteWatcher *const this)
{
  GravenInnocenceCarveCompleteWatcher::~GravenInnocenceCarveCompleteWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 870: range 00000000164D834C-00000000164D8399
void __cdecl GravenInnocencePhotoFinishWatcher::GravenInnocencePhotoFinishWatcher(
        GravenInnocencePhotoFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GravenInnocencePhotoFinishWatcher,GravenInnocencePhotoFinishEvent,GravenInnocencePhotoFinishWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GravenInnocencePhotoFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 870: range 00000000164E316A-00000000164E31B7
void __cdecl GravenInnocencePhotoFinishWatcher::~GravenInnocencePhotoFinishWatcher(
        GravenInnocencePhotoFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GravenInnocencePhotoFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GravenInnocencePhotoFinishWatcher,GravenInnocencePhotoFinishEvent,GravenInnocencePhotoFinishWatcherParam>::~ServerWatcher(this);
};

// Line 870: range 00000000164E31B8-00000000164E31E2
void __cdecl GravenInnocencePhotoFinishWatcher::~GravenInnocencePhotoFinishWatcher(
        GravenInnocencePhotoFinishWatcher *const this)
{
  GravenInnocencePhotoFinishWatcher::~GravenInnocencePhotoFinishWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 877: range 00000000164D873A-00000000164D8787
void __cdecl GravenInnocenceCampFinishLevelWatcher::GravenInnocenceCampFinishLevelWatcher(
        GravenInnocenceCampFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<GravenInnocenceCampFinishLevelWatcher,GravenInnocenceCampFinishLevelEvent,GravenInnocenceCampFinishLevelWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'GravenInnocenceCampFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 877: range 00000000164E313E-00000000164E3168
void __cdecl GravenInnocenceCampFinishLevelWatcher::~GravenInnocenceCampFinishLevelWatcher(
        GravenInnocenceCampFinishLevelWatcher *const this)
{
  GravenInnocenceCampFinishLevelWatcher::~GravenInnocenceCampFinishLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 877: range 00000000164E30F0-00000000164E313D
void __cdecl GravenInnocenceCampFinishLevelWatcher::~GravenInnocenceCampFinishLevelWatcher(
        GravenInnocenceCampFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GravenInnocenceCampFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<GravenInnocenceCampFinishLevelWatcher,GravenInnocenceCampFinishLevelEvent,GravenInnocenceCampFinishLevelWatcherParam>::~ServerWatcher(this);
};

// Line 884: range 00000000164D8B28-00000000164D8B75
void __cdecl VintageHuntingScoreWatcher::VintageHuntingScoreWatcher(VintageHuntingScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageHuntingScoreWatcher,VintageHuntingScoreEvent,VintageHuntingScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 884: range 00000000164E30C4-00000000164E30EE
void __cdecl VintageHuntingScoreWatcher::~VintageHuntingScoreWatcher(VintageHuntingScoreWatcher *const this)
{
  VintageHuntingScoreWatcher::~VintageHuntingScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 884: range 00000000164E3076-00000000164E30C3
void __cdecl VintageHuntingScoreWatcher::~VintageHuntingScoreWatcher(VintageHuntingScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageHuntingScoreWatcher,VintageHuntingScoreEvent,VintageHuntingScoreWatcherParam>::~ServerWatcher(this);
};

// Line 891: range 00000000164D8F16-00000000164D8F63
void __cdecl VintageHuntingCaptureNumWatcher::VintageHuntingCaptureNumWatcher(
        VintageHuntingCaptureNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageHuntingCaptureNumWatcher,VintageHuntingCaptureNumEvent,VintageHuntingCaptureNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 891: range 00000000164E2FFC-00000000164E3049
void __cdecl VintageHuntingCaptureNumWatcher::~VintageHuntingCaptureNumWatcher(
        VintageHuntingCaptureNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageHuntingCaptureNumWatcher,VintageHuntingCaptureNumEvent,VintageHuntingCaptureNumWatcherParam>::~ServerWatcher(this);
};

// Line 891: range 00000000164E304A-00000000164E3074
void __cdecl VintageHuntingCaptureNumWatcher::~VintageHuntingCaptureNumWatcher(
        VintageHuntingCaptureNumWatcher *const this)
{
  VintageHuntingCaptureNumWatcher::~VintageHuntingCaptureNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 898: range 00000000164D9304-00000000164D9351
void __cdecl VintageHuntingCaptureNoBattleNumWatcher::VintageHuntingCaptureNoBattleNumWatcher(
        VintageHuntingCaptureNoBattleNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageHuntingCaptureNoBattleNumWatcher,VintageHuntingCaptureNoBattleNumEvent,VintageHuntingCaptureNoBattleNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureNoBattleNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 898: range 00000000164E2FD0-00000000164E2FFA
void __cdecl VintageHuntingCaptureNoBattleNumWatcher::~VintageHuntingCaptureNoBattleNumWatcher(
        VintageHuntingCaptureNoBattleNumWatcher *const this)
{
  VintageHuntingCaptureNoBattleNumWatcher::~VintageHuntingCaptureNoBattleNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 898: range 00000000164E2F82-00000000164E2FCF
void __cdecl VintageHuntingCaptureNoBattleNumWatcher::~VintageHuntingCaptureNoBattleNumWatcher(
        VintageHuntingCaptureNoBattleNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureNoBattleNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageHuntingCaptureNoBattleNumWatcher,VintageHuntingCaptureNoBattleNumEvent,VintageHuntingCaptureNoBattleNumWatcherParam>::~ServerWatcher(this);
};

// Line 905: range 00000000164D96F2-00000000164D973F
void __cdecl VintageHuntingCaptureTypeNumWatcher::VintageHuntingCaptureTypeNumWatcher(
        VintageHuntingCaptureTypeNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageHuntingCaptureTypeNumWatcher,VintageHuntingCaptureTypeNumEvent,VintageHuntingCaptureTypeNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureTypeNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 905: range 00000000164E2F08-00000000164E2F55
void __cdecl VintageHuntingCaptureTypeNumWatcher::~VintageHuntingCaptureTypeNumWatcher(
        VintageHuntingCaptureTypeNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingCaptureTypeNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageHuntingCaptureTypeNumWatcher,VintageHuntingCaptureTypeNumEvent,VintageHuntingCaptureTypeNumWatcherParam>::~ServerWatcher(this);
};

// Line 905: range 00000000164E2F56-00000000164E2F80
void __cdecl VintageHuntingCaptureTypeNumWatcher::~VintageHuntingCaptureTypeNumWatcher(
        VintageHuntingCaptureTypeNumWatcher *const this)
{
  VintageHuntingCaptureTypeNumWatcher::~VintageHuntingCaptureTypeNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 912: range 00000000164D9AE0-00000000164D9B2D
void __cdecl VintageHuntingFinishBossWatcher::VintageHuntingFinishBossWatcher(
        VintageHuntingFinishBossWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageHuntingFinishBossWatcher,VintageHuntingFinishBossEvent,VintageHuntingFinishBossWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingFinishBossWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 912: range 00000000164E2E8E-00000000164E2EDB
void __cdecl VintageHuntingFinishBossWatcher::~VintageHuntingFinishBossWatcher(
        VintageHuntingFinishBossWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingFinishBossWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageHuntingFinishBossWatcher,VintageHuntingFinishBossEvent,VintageHuntingFinishBossWatcherParam>::~ServerWatcher(this);
};

// Line 912: range 00000000164E2EDC-00000000164E2F06
void __cdecl VintageHuntingFinishBossWatcher::~VintageHuntingFinishBossWatcher(
        VintageHuntingFinishBossWatcher *const this)
{
  VintageHuntingFinishBossWatcher::~VintageHuntingFinishBossWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 919: range 00000000164D9ECE-00000000164D9F1B
void __cdecl VintageHuntingFinishBossInTimeWatcher::VintageHuntingFinishBossInTimeWatcher(
        VintageHuntingFinishBossInTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageHuntingFinishBossInTimeWatcher,VintageHuntingFinishBossInTimeEvent,VintageHuntingFinishBossInTimeWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingFinishBossInTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 919: range 00000000164E2E14-00000000164E2E61
void __cdecl VintageHuntingFinishBossInTimeWatcher::~VintageHuntingFinishBossInTimeWatcher(
        VintageHuntingFinishBossInTimeWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingFinishBossInTimeWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageHuntingFinishBossInTimeWatcher,VintageHuntingFinishBossInTimeEvent,VintageHuntingFinishBossInTimeWatcherParam>::~ServerWatcher(this);
};

// Line 919: range 00000000164E2E62-00000000164E2E8C
void __cdecl VintageHuntingFinishBossInTimeWatcher::~VintageHuntingFinishBossInTimeWatcher(
        VintageHuntingFinishBossInTimeWatcher *const this)
{
  VintageHuntingFinishBossInTimeWatcher::~VintageHuntingFinishBossInTimeWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 926: range 00000000164DA2BC-00000000164DA309
void __cdecl VintageHuntingBossWeakTimesWatcher::VintageHuntingBossWeakTimesWatcher(
        VintageHuntingBossWeakTimesWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageHuntingBossWeakTimesWatcher,VintageHuntingBossWeakTimesEvent,VintageHuntingBossWeakTimesWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageHuntingBossWeakTimesWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 926: range 00000000164E2D9A-00000000164E2DE7
void __cdecl VintageHuntingBossWeakTimesWatcher::~VintageHuntingBossWeakTimesWatcher(
        VintageHuntingBossWeakTimesWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageHuntingBossWeakTimesWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageHuntingBossWeakTimesWatcher,VintageHuntingBossWeakTimesEvent,VintageHuntingBossWeakTimesWatcherParam>::~ServerWatcher(this);
};

// Line 926: range 00000000164E2DE8-00000000164E2E12
void __cdecl VintageHuntingBossWeakTimesWatcher::~VintageHuntingBossWeakTimesWatcher(
        VintageHuntingBossWeakTimesWatcher *const this)
{
  VintageHuntingBossWeakTimesWatcher::~VintageHuntingBossWeakTimesWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 933: range 00000000164DA6AA-00000000164DA6F7
void __cdecl VintageDecorationCompleteWatcher::VintageDecorationCompleteWatcher(
        VintageDecorationCompleteWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageDecorationCompleteWatcher,VintageDecorationCompleteEvent,VintageDecorationCompleteWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageDecorationCompleteWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 933: range 00000000164E2D6E-00000000164E2D98
void __cdecl VintageDecorationCompleteWatcher::~VintageDecorationCompleteWatcher(
        VintageDecorationCompleteWatcher *const this)
{
  VintageDecorationCompleteWatcher::~VintageDecorationCompleteWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 933: range 00000000164E2D20-00000000164E2D6D
void __cdecl VintageDecorationCompleteWatcher::~VintageDecorationCompleteWatcher(
        VintageDecorationCompleteWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageDecorationCompleteWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageDecorationCompleteWatcher,VintageDecorationCompleteEvent,VintageDecorationCompleteWatcherParam>::~ServerWatcher(this);
};

// Line 940: range 00000000164DAA98-00000000164DAAE5
void __cdecl VintageCollectDecorationNumWatcher::VintageCollectDecorationNumWatcher(
        VintageCollectDecorationNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageCollectDecorationNumWatcher,VintageCollectDecorationNumEvent,VintageCollectDecorationNumWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageCollectDecorationNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 940: range 00000000164E2CF4-00000000164E2D1E
void __cdecl VintageCollectDecorationNumWatcher::~VintageCollectDecorationNumWatcher(
        VintageCollectDecorationNumWatcher *const this)
{
  VintageCollectDecorationNumWatcher::~VintageCollectDecorationNumWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 940: range 00000000164E2CA6-00000000164E2CF3
void __cdecl VintageCollectDecorationNumWatcher::~VintageCollectDecorationNumWatcher(
        VintageCollectDecorationNumWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageCollectDecorationNumWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageCollectDecorationNumWatcher,VintageCollectDecorationNumEvent,VintageCollectDecorationNumWatcherParam>::~ServerWatcher(this);
};

// Line 947: range 00000000164DAE86-00000000164DAED3
void __cdecl VintageFinishCampWatcher::VintageFinishCampWatcher(VintageFinishCampWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageFinishCampWatcher,VintageFinishCampEvent,VintageFinishCampWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageFinishCampWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 947: range 00000000164E2C2C-00000000164E2C79
void __cdecl VintageFinishCampWatcher::~VintageFinishCampWatcher(VintageFinishCampWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageFinishCampWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageFinishCampWatcher,VintageFinishCampEvent,VintageFinishCampWatcherParam>::~ServerWatcher(this);
};

// Line 947: range 00000000164E2C7A-00000000164E2CA4
void __cdecl VintageFinishCampWatcher::~VintageFinishCampWatcher(VintageFinishCampWatcher *const this)
{
  VintageFinishCampWatcher::~VintageFinishCampWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 954: range 00000000164DB274-00000000164DB2C1
void __cdecl VintageMarketCoinAWatcher::VintageMarketCoinAWatcher(VintageMarketCoinAWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageMarketCoinAWatcher,VintageMarketCoinAChangeEvent,VintageMarketCoinAWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageMarketCoinAWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 954: range 00000000164E2C00-00000000164E2C2A
void __cdecl VintageMarketCoinAWatcher::~VintageMarketCoinAWatcher(VintageMarketCoinAWatcher *const this)
{
  VintageMarketCoinAWatcher::~VintageMarketCoinAWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 954: range 00000000164E2BB2-00000000164E2BFF
void __cdecl VintageMarketCoinAWatcher::~VintageMarketCoinAWatcher(VintageMarketCoinAWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageMarketCoinAWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageMarketCoinAWatcher,VintageMarketCoinAChangeEvent,VintageMarketCoinAWatcherParam>::~ServerWatcher(this);
};

// Line 961: range 00000000164DB662-00000000164DB6AF
void __cdecl VintageMarketContentFinishWatcher::VintageMarketContentFinishWatcher(
        VintageMarketContentFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<VintageMarketContentFinishWatcher,VintageMarketContentFinishEvent,VintageMarketContentFinishWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'VintageMarketContentFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 961: range 00000000164E2B86-00000000164E2BB0
void __cdecl VintageMarketContentFinishWatcher::~VintageMarketContentFinishWatcher(
        VintageMarketContentFinishWatcher *const this)
{
  VintageMarketContentFinishWatcher::~VintageMarketContentFinishWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 961: range 00000000164E2B38-00000000164E2B85
void __cdecl VintageMarketContentFinishWatcher::~VintageMarketContentFinishWatcher(
        VintageMarketContentFinishWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'VintageMarketContentFinishWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<VintageMarketContentFinishWatcher,VintageMarketContentFinishEvent,VintageMarketContentFinishWatcherParam>::~ServerWatcher(this);
};

// Line 968: range 00000000164DBA50-00000000164DBA9D
void __cdecl RockBoardExploreFinishStageWatcher::RockBoardExploreFinishStageWatcher(
        RockBoardExploreFinishStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<RockBoardExploreFinishStageWatcher,RockBoardExploreFinishStageEvent,RockBoardExploreFinishStageWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'RockBoardExploreFinishStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 968: range 00000000164E2B0C-00000000164E2B36
void __cdecl RockBoardExploreFinishStageWatcher::~RockBoardExploreFinishStageWatcher(
        RockBoardExploreFinishStageWatcher *const this)
{
  RockBoardExploreFinishStageWatcher::~RockBoardExploreFinishStageWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 968: range 00000000164E2ABE-00000000164E2B0B
void __cdecl RockBoardExploreFinishStageWatcher::~RockBoardExploreFinishStageWatcher(
        RockBoardExploreFinishStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'RockBoardExploreFinishStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<RockBoardExploreFinishStageWatcher,RockBoardExploreFinishStageEvent,RockBoardExploreFinishStageWatcherParam>::~ServerWatcher(this);
};

// Line 975: range 00000000164DBE3E-00000000164DBE8B
void __cdecl FungusFighterCaptureFungusWatcher::FungusFighterCaptureFungusWatcher(
        FungusFighterCaptureFungusWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FungusFighterCaptureFungusWatcher,FungusFighterCaptureFungusEvent,FungusFighterCaptureFungusWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FungusFighterCaptureFungusWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 975: range 00000000164E2A92-00000000164E2ABC
void __cdecl FungusFighterCaptureFungusWatcher::~FungusFighterCaptureFungusWatcher(
        FungusFighterCaptureFungusWatcher *const this)
{
  FungusFighterCaptureFungusWatcher::~FungusFighterCaptureFungusWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 975: range 00000000164E2A44-00000000164E2A91
void __cdecl FungusFighterCaptureFungusWatcher::~FungusFighterCaptureFungusWatcher(
        FungusFighterCaptureFungusWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FungusFighterCaptureFungusWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FungusFighterCaptureFungusWatcher,FungusFighterCaptureFungusEvent,FungusFighterCaptureFungusWatcherParam>::~ServerWatcher(this);
};

// Line 982: range 00000000164DC22C-00000000164DC279
void __cdecl FungusFighterCultivateFungusWatcher::FungusFighterCultivateFungusWatcher(
        FungusFighterCultivateFungusWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FungusFighterCultivateFungusWatcher,FungusFighterCultivateFungusEvent,FungusFighterCultivateFungusWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FungusFighterCultivateFungusWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 982: range 00000000164E2A18-00000000164E2A42
void __cdecl FungusFighterCultivateFungusWatcher::~FungusFighterCultivateFungusWatcher(
        FungusFighterCultivateFungusWatcher *const this)
{
  FungusFighterCultivateFungusWatcher::~FungusFighterCultivateFungusWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 982: range 00000000164E29CA-00000000164E2A17
void __cdecl FungusFighterCultivateFungusWatcher::~FungusFighterCultivateFungusWatcher(
        FungusFighterCultivateFungusWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FungusFighterCultivateFungusWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FungusFighterCultivateFungusWatcher,FungusFighterCultivateFungusEvent,FungusFighterCultivateFungusWatcherParam>::~ServerWatcher(this);
};

// Line 989: range 00000000164DC61A-00000000164DC667
void __cdecl FungusFighterTrainingReachScoreWatcher::FungusFighterTrainingReachScoreWatcher(
        FungusFighterTrainingReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<FungusFighterTrainingReachScoreWatcher,FungusFighterTrainingNewRecordScoreEvent,FungusFighterTrainingReachScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'FungusFighterTrainingReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 989: range 00000000164E2950-00000000164E299D
void __cdecl FungusFighterTrainingReachScoreWatcher::~FungusFighterTrainingReachScoreWatcher(
        FungusFighterTrainingReachScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FungusFighterTrainingReachScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<FungusFighterTrainingReachScoreWatcher,FungusFighterTrainingNewRecordScoreEvent,FungusFighterTrainingReachScoreWatcherParam>::~ServerWatcher(this);
};

// Line 989: range 00000000164E299E-00000000164E29C8
void __cdecl FungusFighterTrainingReachScoreWatcher::~FungusFighterTrainingReachScoreWatcher(
        FungusFighterTrainingReachScoreWatcher *const this)
{
  FungusFighterTrainingReachScoreWatcher::~FungusFighterTrainingReachScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 996: range 00000000164DCA08-00000000164DCA55
void __cdecl EffigyChallengeV2FinishRoomWatcher::EffigyChallengeV2FinishRoomWatcher(
        EffigyChallengeV2FinishRoomWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<EffigyChallengeV2FinishRoomWatcher,EffigyChallengeV2FinishRoomEvent,EffigyChallengeV2FinishRoomWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'EffigyChallengeV2FinishRoomWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 996: range 00000000164E28D6-00000000164E2923
void __cdecl EffigyChallengeV2FinishRoomWatcher::~EffigyChallengeV2FinishRoomWatcher(
        EffigyChallengeV2FinishRoomWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EffigyChallengeV2FinishRoomWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<EffigyChallengeV2FinishRoomWatcher,EffigyChallengeV2FinishRoomEvent,EffigyChallengeV2FinishRoomWatcherParam>::~ServerWatcher(this);
};

// Line 996: range 00000000164E2924-00000000164E294E
void __cdecl EffigyChallengeV2FinishRoomWatcher::~EffigyChallengeV2FinishRoomWatcher(
        EffigyChallengeV2FinishRoomWatcher *const this)
{
  EffigyChallengeV2FinishRoomWatcher::~EffigyChallengeV2FinishRoomWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1003: range 00000000164DCDF6-00000000164DCE43
void __cdecl CharAmusementFinishStageWatcher::CharAmusementFinishStageWatcher(
        CharAmusementFinishStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CharAmusementFinishStageWatcher,CharAmusementFinishStageEvent,CharAmusementFinishStageWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CharAmusementFinishStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1003: range 00000000164E285C-00000000164E28A9
void __cdecl CharAmusementFinishStageWatcher::~CharAmusementFinishStageWatcher(
        CharAmusementFinishStageWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CharAmusementFinishStageWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CharAmusementFinishStageWatcher,CharAmusementFinishStageEvent,CharAmusementFinishStageWatcherParam>::~ServerWatcher(this);
};

// Line 1003: range 00000000164E28AA-00000000164E28D4
void __cdecl CharAmusementFinishStageWatcher::~CharAmusementFinishStageWatcher(
        CharAmusementFinishStageWatcher *const this)
{
  CharAmusementFinishStageWatcher::~CharAmusementFinishStageWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1010: range 00000000164DD1E4-00000000164DD231
void __cdecl CoinCollectResultReachWatcher::CoinCollectResultReachWatcher(CoinCollectResultReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<CoinCollectResultReachWatcher,CoinCollectGalleryFinishEvent,CoinCollectResultReachWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'CoinCollectResultReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1010: range 00000000164E27E2-00000000164E282F
void __cdecl CoinCollectResultReachWatcher::~CoinCollectResultReachWatcher(CoinCollectResultReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CoinCollectResultReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<CoinCollectResultReachWatcher,CoinCollectGalleryFinishEvent,CoinCollectResultReachWatcherParam>::~ServerWatcher(this);
};

// Line 1010: range 00000000164E2830-00000000164E285A
void __cdecl CoinCollectResultReachWatcher::~CoinCollectResultReachWatcher(CoinCollectResultReachWatcher *const this)
{
  CoinCollectResultReachWatcher::~CoinCollectResultReachWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1017: range 00000000164DD5D2-00000000164DD61F
void __cdecl BrickBreakerFinishWorldLevelWatcher::BrickBreakerFinishWorldLevelWatcher(
        BrickBreakerFinishWorldLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BrickBreakerFinishWorldLevelWatcher,BrickBreakerWorldLevelFinishEvent,BrickBreakerFinishWorldLevelWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BrickBreakerFinishWorldLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1017: range 00000000164E2768-00000000164E27B5
void __cdecl BrickBreakerFinishWorldLevelWatcher::~BrickBreakerFinishWorldLevelWatcher(
        BrickBreakerFinishWorldLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerFinishWorldLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BrickBreakerFinishWorldLevelWatcher,BrickBreakerWorldLevelFinishEvent,BrickBreakerFinishWorldLevelWatcherParam>::~ServerWatcher(this);
};

// Line 1017: range 00000000164E27B6-00000000164E27E0
void __cdecl BrickBreakerFinishWorldLevelWatcher::~BrickBreakerFinishWorldLevelWatcher(
        BrickBreakerFinishWorldLevelWatcher *const this)
{
  BrickBreakerFinishWorldLevelWatcher::~BrickBreakerFinishWorldLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1024: range 00000000164DD9C0-00000000164DDA0D
void __cdecl BrickBreakerWorldLevelScoreWatcher::BrickBreakerWorldLevelScoreWatcher(
        BrickBreakerWorldLevelScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BrickBreakerWorldLevelScoreWatcher,BrickBreakerWorldLevelFinishEvent,BrickBreakerWorldLevelScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BrickBreakerWorldLevelScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1024: range 00000000164E26EE-00000000164E273B
void __cdecl BrickBreakerWorldLevelScoreWatcher::~BrickBreakerWorldLevelScoreWatcher(
        BrickBreakerWorldLevelScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerWorldLevelScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BrickBreakerWorldLevelScoreWatcher,BrickBreakerWorldLevelFinishEvent,BrickBreakerWorldLevelScoreWatcherParam>::~ServerWatcher(this);
};

// Line 1024: range 00000000164E273C-00000000164E2766
void __cdecl BrickBreakerWorldLevelScoreWatcher::~BrickBreakerWorldLevelScoreWatcher(
        BrickBreakerWorldLevelScoreWatcher *const this)
{
  BrickBreakerWorldLevelScoreWatcher::~BrickBreakerWorldLevelScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1031: range 00000000164DDDAE-00000000164DDDFB
void __cdecl BrickBreakerWorldLevelComboWatcher::BrickBreakerWorldLevelComboWatcher(
        BrickBreakerWorldLevelComboWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BrickBreakerWorldLevelComboWatcher,BrickBreakerWorldLevelFinishEvent,BrickBreakerWorldLevelComboWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BrickBreakerWorldLevelComboWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1031: range 00000000164E26C2-00000000164E26EC
void __cdecl BrickBreakerWorldLevelComboWatcher::~BrickBreakerWorldLevelComboWatcher(
        BrickBreakerWorldLevelComboWatcher *const this)
{
  BrickBreakerWorldLevelComboWatcher::~BrickBreakerWorldLevelComboWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1031: range 00000000164E2674-00000000164E26C1
void __cdecl BrickBreakerWorldLevelComboWatcher::~BrickBreakerWorldLevelComboWatcher(
        BrickBreakerWorldLevelComboWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerWorldLevelComboWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BrickBreakerWorldLevelComboWatcher,BrickBreakerWorldLevelFinishEvent,BrickBreakerWorldLevelComboWatcherParam>::~ServerWatcher(this);
};

// Line 1038: range 00000000164DE19C-00000000164DE1E9
void __cdecl BrickBreakerFinishDungeonLevelWatcher::BrickBreakerFinishDungeonLevelWatcher(
        BrickBreakerFinishDungeonLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BrickBreakerFinishDungeonLevelWatcher,BrickBreakerDungeonLevelFinishEvent,BrickBreakerFinishDungeonLevelWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BrickBreakerFinishDungeonLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1038: range 00000000164E25FA-00000000164E2647
void __cdecl BrickBreakerFinishDungeonLevelWatcher::~BrickBreakerFinishDungeonLevelWatcher(
        BrickBreakerFinishDungeonLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerFinishDungeonLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BrickBreakerFinishDungeonLevelWatcher,BrickBreakerDungeonLevelFinishEvent,BrickBreakerFinishDungeonLevelWatcherParam>::~ServerWatcher(this);
};

// Line 1038: range 00000000164E2648-00000000164E2672
void __cdecl BrickBreakerFinishDungeonLevelWatcher::~BrickBreakerFinishDungeonLevelWatcher(
        BrickBreakerFinishDungeonLevelWatcher *const this)
{
  BrickBreakerFinishDungeonLevelWatcher::~BrickBreakerFinishDungeonLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1045: range 00000000164DE58A-00000000164DE5D7
void __cdecl BrickBreakerDungeonLevelScoreWatcher::BrickBreakerDungeonLevelScoreWatcher(
        BrickBreakerDungeonLevelScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BrickBreakerDungeonLevelScoreWatcher,BrickBreakerDungeonLevelFinishEvent,BrickBreakerDungeonLevelScoreWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BrickBreakerDungeonLevelScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1045: range 00000000164E2580-00000000164E25CD
void __cdecl BrickBreakerDungeonLevelScoreWatcher::~BrickBreakerDungeonLevelScoreWatcher(
        BrickBreakerDungeonLevelScoreWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerDungeonLevelScoreWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BrickBreakerDungeonLevelScoreWatcher,BrickBreakerDungeonLevelFinishEvent,BrickBreakerDungeonLevelScoreWatcherParam>::~ServerWatcher(this);
};

// Line 1045: range 00000000164E25CE-00000000164E25F8
void __cdecl BrickBreakerDungeonLevelScoreWatcher::~BrickBreakerDungeonLevelScoreWatcher(
        BrickBreakerDungeonLevelScoreWatcher *const this)
{
  BrickBreakerDungeonLevelScoreWatcher::~BrickBreakerDungeonLevelScoreWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1052: range 00000000164DE978-00000000164DE9C5
void __cdecl BrickBreakerDungeonLevelComboWatcher::BrickBreakerDungeonLevelComboWatcher(
        BrickBreakerDungeonLevelComboWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BrickBreakerDungeonLevelComboWatcher,BrickBreakerDungeonLevelFinishEvent,BrickBreakerDungeonLevelComboWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BrickBreakerDungeonLevelComboWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1052: range 00000000164E2554-00000000164E257E
void __cdecl BrickBreakerDungeonLevelComboWatcher::~BrickBreakerDungeonLevelComboWatcher(
        BrickBreakerDungeonLevelComboWatcher *const this)
{
  BrickBreakerDungeonLevelComboWatcher::~BrickBreakerDungeonLevelComboWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1052: range 00000000164E2506-00000000164E2553
void __cdecl BrickBreakerDungeonLevelComboWatcher::~BrickBreakerDungeonLevelComboWatcher(
        BrickBreakerDungeonLevelComboWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerDungeonLevelComboWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BrickBreakerDungeonLevelComboWatcher,BrickBreakerDungeonLevelFinishEvent,BrickBreakerDungeonLevelComboWatcherParam>::~ServerWatcher(this);
};

// Line 1059: range 00000000164DED66-00000000164DEDB3
void __cdecl BrickBreakerWorldLevelElemReactionWatcher::BrickBreakerWorldLevelElemReactionWatcher(
        BrickBreakerWorldLevelElemReactionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BrickBreakerWorldLevelElemReactionWatcher,BrickBreakerWorldLevelFinishEvent,BrickBreakerWorldLevelElemReactionWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BrickBreakerWorldLevelElemReactionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1059: range 00000000164E24DA-00000000164E2504
void __cdecl BrickBreakerWorldLevelElemReactionWatcher::~BrickBreakerWorldLevelElemReactionWatcher(
        BrickBreakerWorldLevelElemReactionWatcher *const this)
{
  BrickBreakerWorldLevelElemReactionWatcher::~BrickBreakerWorldLevelElemReactionWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1059: range 00000000164E248C-00000000164E24D9
void __cdecl BrickBreakerWorldLevelElemReactionWatcher::~BrickBreakerWorldLevelElemReactionWatcher(
        BrickBreakerWorldLevelElemReactionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerWorldLevelElemReactionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BrickBreakerWorldLevelElemReactionWatcher,BrickBreakerWorldLevelFinishEvent,BrickBreakerWorldLevelElemReactionWatcherParam>::~ServerWatcher(this);
};

// Line 1066: range 00000000164DF154-00000000164DF1A1
void __cdecl BrickBreakerWorldLevelBallElemReactionWatcher::BrickBreakerWorldLevelBallElemReactionWatcher(
        BrickBreakerWorldLevelBallElemReactionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BrickBreakerWorldLevelBallElemReactionWatcher,BrickBreakerWorldLevelFinishEvent,BrickBreakerWorldLevelBallElemReactionWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BrickBreakerWorldLevelBallElemReactionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1066: range 00000000164E2460-00000000164E248A
void __cdecl BrickBreakerWorldLevelBallElemReactionWatcher::~BrickBreakerWorldLevelBallElemReactionWatcher(
        BrickBreakerWorldLevelBallElemReactionWatcher *const this)
{
  BrickBreakerWorldLevelBallElemReactionWatcher::~BrickBreakerWorldLevelBallElemReactionWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1066: range 00000000164E2412-00000000164E245F
void __cdecl BrickBreakerWorldLevelBallElemReactionWatcher::~BrickBreakerWorldLevelBallElemReactionWatcher(
        BrickBreakerWorldLevelBallElemReactionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerWorldLevelBallElemReactionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BrickBreakerWorldLevelBallElemReactionWatcher,BrickBreakerWorldLevelFinishEvent,BrickBreakerWorldLevelBallElemReactionWatcherParam>::~ServerWatcher(this);
};

// Line 1073: range 00000000164DF542-00000000164DF58F
void __cdecl BrickBreakerDungeonLevelElemReactionWatcher::BrickBreakerDungeonLevelElemReactionWatcher(
        BrickBreakerDungeonLevelElemReactionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BrickBreakerDungeonLevelElemReactionWatcher,BrickBreakerDungeonLevelFinishEvent,BrickBreakerDungeonLevelElemReactionWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BrickBreakerDungeonLevelElemReactionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1073: range 00000000164E2398-00000000164E23E5
void __cdecl BrickBreakerDungeonLevelElemReactionWatcher::~BrickBreakerDungeonLevelElemReactionWatcher(
        BrickBreakerDungeonLevelElemReactionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerDungeonLevelElemReactionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BrickBreakerDungeonLevelElemReactionWatcher,BrickBreakerDungeonLevelFinishEvent,BrickBreakerDungeonLevelElemReactionWatcherParam>::~ServerWatcher(this);
};

// Line 1073: range 00000000164E23E6-00000000164E2410
void __cdecl BrickBreakerDungeonLevelElemReactionWatcher::~BrickBreakerDungeonLevelElemReactionWatcher(
        BrickBreakerDungeonLevelElemReactionWatcher *const this)
{
  BrickBreakerDungeonLevelElemReactionWatcher::~BrickBreakerDungeonLevelElemReactionWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1080: range 00000000164DF930-00000000164DF97D
void __cdecl BrickBreakerDungeonLevelBallElemReactionWatcher::BrickBreakerDungeonLevelBallElemReactionWatcher(
        BrickBreakerDungeonLevelBallElemReactionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<BrickBreakerDungeonLevelBallElemReactionWatcher,BrickBreakerDungeonLevelFinishEvent,BrickBreakerDungeonLevelBallElemReactionWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'BrickBreakerDungeonLevelBallElemReactionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1080: range 00000000164E236C-00000000164E2396
void __cdecl BrickBreakerDungeonLevelBallElemReactionWatcher::~BrickBreakerDungeonLevelBallElemReactionWatcher(
        BrickBreakerDungeonLevelBallElemReactionWatcher *const this)
{
  BrickBreakerDungeonLevelBallElemReactionWatcher::~BrickBreakerDungeonLevelBallElemReactionWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1080: range 00000000164E231E-00000000164E236B
void __cdecl BrickBreakerDungeonLevelBallElemReactionWatcher::~BrickBreakerDungeonLevelBallElemReactionWatcher(
        BrickBreakerDungeonLevelBallElemReactionWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerDungeonLevelBallElemReactionWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<BrickBreakerDungeonLevelBallElemReactionWatcher,BrickBreakerDungeonLevelFinishEvent,BrickBreakerDungeonLevelBallElemReactionWatcherParam>::~ServerWatcher(this);
};

// Line 1087: range 00000000164DFD1E-00000000164DFD6B
void __cdecl TeamChainScoreReachWatcher::TeamChainScoreReachWatcher(TeamChainScoreReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<TeamChainScoreReachWatcher,TeamChainStageSuccessFinishEvent,TeamChainScoreReachWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'TeamChainScoreReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1087: range 00000000164E22A4-00000000164E22F1
void __cdecl TeamChainScoreReachWatcher::~TeamChainScoreReachWatcher(TeamChainScoreReachWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TeamChainScoreReachWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<TeamChainScoreReachWatcher,TeamChainStageSuccessFinishEvent,TeamChainScoreReachWatcherParam>::~ServerWatcher(this);
};

// Line 1087: range 00000000164E22F2-00000000164E231C
void __cdecl TeamChainScoreReachWatcher::~TeamChainScoreReachWatcher(TeamChainScoreReachWatcher *const this)
{
  TeamChainScoreReachWatcher::~TeamChainScoreReachWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1094: range 00000000164E010C-00000000164E0159
void __cdecl TeamChainFinishStageCntWatcher::TeamChainFinishStageCntWatcher(TeamChainFinishStageCntWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<TeamChainFinishStageCntWatcher,TeamChainStageSuccessFinishEvent,TeamChainFinishStageCntWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'TeamChainFinishStageCntWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1094: range 00000000164E222A-00000000164E2277
void __cdecl TeamChainFinishStageCntWatcher::~TeamChainFinishStageCntWatcher(
        TeamChainFinishStageCntWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TeamChainFinishStageCntWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<TeamChainFinishStageCntWatcher,TeamChainStageSuccessFinishEvent,TeamChainFinishStageCntWatcherParam>::~ServerWatcher(this);
};

// Line 1094: range 00000000164E2278-00000000164E22A2
void __cdecl TeamChainFinishStageCntWatcher::~TeamChainFinishStageCntWatcher(
        TeamChainFinishStageCntWatcher *const this)
{
  TeamChainFinishStageCntWatcher::~TeamChainFinishStageCntWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1101: range 00000000164E04FA-00000000164E0547
void __cdecl ElectroherculesBattleFinishLevelWatcher::ElectroherculesBattleFinishLevelWatcher(
        ElectroherculesBattleFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<ElectroherculesBattleFinishLevelWatcher,GalleryElectroherculesBattleSettleEvent,ElectroherculesBattleFinishLevelWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'ElectroherculesBattleFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1101: range 00000000164E21B0-00000000164E21FD
void __cdecl ElectroherculesBattleFinishLevelWatcher::~ElectroherculesBattleFinishLevelWatcher(
        ElectroherculesBattleFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'ElectroherculesBattleFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<ElectroherculesBattleFinishLevelWatcher,GalleryElectroherculesBattleSettleEvent,ElectroherculesBattleFinishLevelWatcherParam>::~ServerWatcher(this);
};

// Line 1101: range 00000000164E21FE-00000000164E2228
void __cdecl ElectroherculesBattleFinishLevelWatcher::~ElectroherculesBattleFinishLevelWatcher(
        ElectroherculesBattleFinishLevelWatcher *const this)
{
  ElectroherculesBattleFinishLevelWatcher::~ElectroherculesBattleFinishLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1107: range 00000000164E08E8-00000000164E0935
void __cdecl DuelHeartFinishLevelWatcher::DuelHeartFinishLevelWatcher(DuelHeartFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<DuelHeartFinishLevelWatcher,DuelHeartGallerySettleEvent,DuelHeartFinishLevelWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'DuelHeartFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1107: range 00000000164E2184-00000000164E21AE
void __cdecl DuelHeartFinishLevelWatcher::~DuelHeartFinishLevelWatcher(DuelHeartFinishLevelWatcher *const this)
{
  DuelHeartFinishLevelWatcher::~DuelHeartFinishLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1107: range 00000000164E2136-00000000164E2183
void __cdecl DuelHeartFinishLevelWatcher::~DuelHeartFinishLevelWatcher(DuelHeartFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DuelHeartFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<DuelHeartFinishLevelWatcher,DuelHeartGallerySettleEvent,DuelHeartFinishLevelWatcherParam>::~ServerWatcher(this);
};

// Line 1114: range 00000000164E0CD6-00000000164E0D23
void __cdecl LanV3RaceWatcher::LanV3RaceWatcher(LanV3RaceWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<LanV3RaceWatcher,LanV3RaceScoreEvent,LanV3RaceWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'LanV3RaceWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1114: range 00000000164E210A-00000000164E2134
void __cdecl LanV3RaceWatcher::~LanV3RaceWatcher(LanV3RaceWatcher *const this)
{
  LanV3RaceWatcher::~LanV3RaceWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1114: range 00000000164E20BC-00000000164E2109
void __cdecl LanV3RaceWatcher::~LanV3RaceWatcher(LanV3RaceWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LanV3RaceWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<LanV3RaceWatcher,LanV3RaceScoreEvent,LanV3RaceWatcherParam>::~ServerWatcher(this);
};

// Line 1121: range 00000000164E10C4-00000000164E1111
void __cdecl LanV3ShadowFinishLevelWatcher::LanV3ShadowFinishLevelWatcher(LanV3ShadowFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ServerWatcher<LanV3ShadowFinishLevelWatcher,LanV3ShadowFinishLevelEvent,LanV3ShadowFinishLevelWatcherParam>::ServerWatcher(this);
  v2 = (int (**)(...))(&`vtable for'LanV3ShadowFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
};

// Line 1121: range 00000000164E2090-00000000164E20BA
void __cdecl LanV3ShadowFinishLevelWatcher::~LanV3ShadowFinishLevelWatcher(LanV3ShadowFinishLevelWatcher *const this)
{
  LanV3ShadowFinishLevelWatcher::~LanV3ShadowFinishLevelWatcher(this);
  operator delete(this, 0x78uLL);
};

// Line 1121: range 00000000164E2042-00000000164E208F
void __cdecl LanV3ShadowFinishLevelWatcher::~LanV3ShadowFinishLevelWatcher(LanV3ShadowFinishLevelWatcher *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LanV3ShadowFinishLevelWatcher + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  ServerWatcher<LanV3ShadowFinishLevelWatcher,LanV3ShadowFinishLevelEvent,LanV3ShadowFinishLevelWatcherParam>::~ServerWatcher(this);
};
